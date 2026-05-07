# Percussive Pitch-System Bridge 012f0b60

## Obiettivo

Chiudere il tratto verificabile tra il payload LSS di `MULSSGenerator::012f0b60` e gli helper classificati come `MUPercussivePitchSystem`.

Vincolo: questo documento descrive il ponte di propagazione e normalizzazione. Non chiude ancora il detector audio primario, le unita' musicali finali o le formule di ranking globale.

## Callsite Chiusi In `012f0b60`

Nel mutatore `MULSSGenerator::012f0b60` il payload LSS entra nel pitch-system in piu' pass:

| Callee | Ruolo osservato | Confidence |
|--------|-----------------|------------|
| `01516650` | wrapper sottile: preflight `01514480`, poi main range reconciliation `01515040`, ritorno boolean/dirty flag | High per control-flow, Medium per semantica musicale |
| `01516720` | bridge range/segmenti: usa `01252960`, `01514120`, `012502a0`, `01254260`, `012549c0`, `018847d0`, `018847e0` | Medium-high |
| `01519670` | split/clone gate su differenza di scalar pitch-system | High per control-flow, Medium per semantica musicale |
| `0150ddd0` | pass di materializzazione/normalizzazione candidati su lista | Medium-high |
| `01287c80` / `012879b0` | cleanup/finalizzazione di liste/payload downstream | Medium |

Il blocco resta coerente con la lettura di `012f0b60` come propagatore LSS/pitch-system: legge il count iniziale di `arg1 + 0xb0`, rientra in `012cb110 -> 012e7210`, normalizza con helper pitch-system e poi aggiorna/cachea `arg1 + 0xb8`.

## Costanti Verificate

Verifica diretta con `lldb` su `binaries/MikeCore`:

| Simbolo | Raw | Valore | Ruolo |
|---------|-----|--------|-------|
| `DAT_0239425c` | `0x3a83126f` | `0.00100000005f` | soglia del gate in `01519670` |
| `_DAT_02390140` | `0x7fffffff` | mask float abs | rimozione bit segno in `abs(fVar12 - fVar11)` |
| `g_023941f4` | `0x3a5a740b` | `0.000833333004f` | `1 / 1200`, conversione cents -> octave ratio |
| `g_023941f8` | verified float | `8.17579936f` | base Hz C-1/MIDI0 |
| `g_02394204` | verified float | `0.122312203f` | reciproco di `8.17579936` |
| `g_02394208` | verified float | `1731.23401f` | `1200 / ln(2)` |
| `g_023908e0` | verified float | `100.0f` | cent step usato da accessori e quantizzazione |
| `g_0241b664` | verified float | `-100.0f` | offset per indice standard occidentale in `01774880` |
| `g_02411fd0` | verified float | `440.0f` | fallback standard pitch Hz |
| `g_02411fd4` | verified float | `-6899.99951f` | offset A4, circa `-69 * 100` cents |
| `g_02411fd8` | verified float | `100000.0f` | soglia iniziale min-distance nel selector multi-candidato |
| `g_0239394c` | verified float | `1200.0f` | lower bound cents per `017792c0` |
| `g_024120f0` | verified float | `10800.0f` | upper bound cents per `017792c0` |
| `g_024179c8` | verified double | `1200.0` | lower endpoint lookup per `017792c0` |
| `g_024120e8` | verified double | `1201.0` | lower endpoint + 1 cent lookup per `017792c0` |
| `g_02412068` | verified double | `10800.0` | upper endpoint lookup per `017792c0` |
| `g_024120e0` | verified double | `10799.0` | upper endpoint - 1 cent lookup per `017792c0` |
| `g_024120f4` | verified float | `-10800.0f` | upper extrapolation bias per `017792c0` |
| `g_0238fee8` | verified double | `1.0` | NaN fallback in public sampled-mapper eval `013f6a10`; canonical unity constant elsewhere |
| `g_023942d0` | verified double | `0.5` | midpoint factor inside piecewise-linear mapper eval `013f6a80` |

Il confronto reale in `01519670` e':

```c
if (DAT_0239425c <= (float)((uint)(fVar12 - fVar11) & _DAT_02390140)) {
    ...
}
```

Quindi il fatto chiuso e': `abs(fVar12 - fVar11) >= 0.001f`.

La nuova evidenza chiude anche l'unita': `fVar11/fVar12` sono cents offset rispetto ad A4/440, non Hz.

### Formula `01773e50`

`01773e50` legge il fallback/standard pitch tramite `017737b0` e lo converte in cents offset:

```c
standardPitchOffsetCents =
    logf(standardPitchHz * 0.122312203f) * 1731.23401f - 6899.99951f;
```

`017737b0` usa `440.0f` come fallback quando la sorgente globale non e' disponibile. Con `440 Hz`, la formula produce circa `0 cents`.

### Formula `01773e80`

`01773e80` chiama `01773fe0(this, 69, null)` e converte il risultato nello stesso dominio:

```c
selectedPitchOffsetCents =
    logf(exp2f(selectedAbsoluteCents * (1.0f / 1200.0f)) *
         8.17579936f *
         0.122312203f) *
    1731.23401f -
    6899.99951f;
```

`01773fe0` e' quindi un selector/interpolator di pitch assoluto in cents. La policy interna e' ora chiusa a livello control-flow; resta aperta solo la semantica completa del builder candidato `01774880`.

### Policy `01773fe0`

`01773fe0(this, targetIndex, outKey)`:

- chiama `01774880(..., targetIndex)` per costruire una lista candidata di key/pitch entries
- interpreta il count come numero di entry da 4 byte
- se non ci sono entry candidate, legge due entry vicine con `01774300 / 01774b50` e interpola linearmente il valore per `targetIndex`; in questo ramo scrive `-1000000` in `outKey`
- se esiste una sola entry, ritorna il valore `01774b50()` di quella entry e scrive la key in `outKey`
- se esistono piu' entry, calcola la media dei valori `01774b50()`, seleziona la entry con distanza assoluta minima dalla media, scrive la sua key in `outKey` e ritorna il valore selezionato

Lettura prudente: selector/interpolator robusto per pitch assoluto in cents su uno standard pitch index. Nel callsite `01773e80`, `targetIndex` e' `69`.

### Builder `01774880`

Il disassemblato diretto chiude la policy di build a livello control-flow.

ABI osservata:

```c
01774880(outListWrapper, pitchTable, targetIndex, outLowerIndex);
```

Shape verificata:

- alloca una lista `g_025683c0` e la configura con i parametri immediati `0x69` e `1`
- legge `01774c90(pitchTable, 0)`
- legge `pitchTable + 0x64` come offset indice intero
- ottiene un reference/default pitch-table tramite `0176fff0`
- legge `01774c90(defaultPitchTable, targetIndex)`
- costruisce il probe scalar:

```c
probeCent =
    valueAtZero +
    (float)*(int *)(pitchTable + 0x64) * -100.0f +
    defaultValueAtTargetIndex;
```

- chiama `01774ef0(pitchTable, probeCent, mode 0)` per trovare l'indice piu' vicino nel pitch-table corrente
- usa `01774300(pitchTable, index)` come key accessor intero
- se la key non coincide col `targetIndex`, scansiona indietro o avanti fino alla zona corretta
- se trova una match-run, salva nella lista tutti gli indici contigui con `01774300(...) == targetIndex`
- salva in `outLowerIndex` l'indice immediatamente precedente alla run candidata; se non ci sono candidati, questo indice e' il lower-neighbour usato da `01773fe0` per interpolare tra `outLowerIndex` e `outLowerIndex + 1`

Conseguenza: `01774880` non sceglie il pitch finale e non fa detection audio. E' un collector di indici/key per un `targetIndex` dentro un pitch-table gia' costruito.

### Owner / Layout Del Pitch-Table

Il cluster clean e' ancora classificato automaticamente come `GNInt`, ma l'evidenza del constructor/property path restringe molto meglio l'owner operativo. Per il corridoio `01773fe0 -> 01774880 -> 01774c90/01774300`, il pitch-table e' un oggetto `MUScaleTuning-like` con child `MUScaleTuningInterval`.

`0176d660` costruisce l'oggetto pitch-table/scale-tuning-like:

- installa la vtable `g_025ff2a8`
- registra/inizializza uno slot bool a `+0x38`, coerente con `_isCyclic`
- inizializza `+0x48`, coerente con `_rootIndex` e usato dagli accessor come shift indice
- registra `+0x50` con nome `_tuning` e type string `MUScaleTuningInterval`
- registra `+0x58` con nome `_scaleTuning` e type string `MUScaleTuningSequence`
- inizializza `+0x60`, coerente con `_tuningPitchAnchor` e letto/scritto da `01770220/01770230`
- inizializza `+0x64`, coerente con `_westernStandardPitchIndexAnchor` e letto da `017702f0`
- registra `+0x68` con type string `MUScaleStretching`

`011a7e10` costruisce invece il child interval:

- installa la vtable `g_025ffd60`
- registra/inizializza `+0x38` come `_cent`
- registra/inizializza `+0x3c` come `_westernStandardPitchIndexOffset`
- registra `+0x40` come `_intervals`, con type string `MUScaleTuning`

Conseguenza prudente: il layout funzionale del pitch-table usato da `01774880` e' ora chiuso. Il nome classe canonico del dump clean resta trattato con cautela perche' la cartella/file classifica molte funzioni come `GNInt`, ma il path operativo non va piu' descritto come owner ignoto generico.

### Accessori Del Pitch-Table

Funzioni chiuse intorno a `01774880`:

- `01779ec0(object)` e' getter diretto `object + 0x38` come float; nel child interval questo e' `_cent`
- `01779f30(object)` e' getter diretto `object + 0x3c` come int; nel child interval questo e' `_westernStandardPitchIndexOffset`
- `01774c90(pitchTable, index)` ritorna uno scalar in cents-like domain: usa il flag `pitchTable + 0x38` (`_isCyclic`), lo shift `pitchTable + 0x48` (`_rootIndex`), il child/interval list `pitchTable + 0x50` (`_tuning`), la base `pitchTable + 0x60` (`_tuningPitchAnchor`) e il child scalar `child + 0x38` (`_cent`), con gestione clamp/wrap; nelle extrapolazioni non-loop usa step `100.0f`
- `01774300(pitchTable, index)` e' il key accessor intero parallelo: usa child key `child + 0x3c` (`_westernStandardPitchIndexOffset`), anchor `pitchTable + 0x64` (`_westernStandardPitchIndexAnchor`), e la stessa logica di shift/wrap
- `01774b50(pitchTable, index)` chiama `01774c90`; se `pitchTable + 0x68` (`_stretching`) esiste, passa lo scalar dentro `017792c0` prima di restituirlo
- `01774ef0(pitchTable, probeCent, mode)` cerca l'indice piu' vicino rispetto a `01774c90`, espande i bound se necessario e poi fa una binary-search; in mode normale usa i virtuali `vtable + 0x370 / +0x378` come bounds iniziali, in mode alternativo usa `[-1000, 1000]`

### Transform `017792c0`

`017792c0(this, inputCents)` e' ora chiuso come wrapper di lookup/extrapolazione.

Shape verificata:

- se `this + 0x60` e' attivo, `this + 0x40` esiste e `this + 0x48` e' nullo, forza lazy init tramite virtuale `vtable + 0x1a0`
- legge il tuning/mapper da `this + 0x48`
- se il mapper e' nullo, ritorna `inputCents` invariato
- se `1200.0f <= inputCents <= 10800.0f`, ritorna `mapper->vtable[0x380](inputCents)`
- se `inputCents < 1200.0f`, usa extrapolazione lineare dal bordo basso:

```c
y1200 = mapper(1200.0);
y1201 = mapper(1201.0);
return y1200 + (1200.0f - inputCents) * (y1200 - y1201);
```

- se `inputCents > 10800.0f`, usa extrapolazione lineare dal bordo alto:

```c
y10800 = mapper(10800.0);
y10799 = mapper(10799.0);
return y10800 + (inputCents - 10800.0f) * (y10800 - y10799);
```

Conseguenza: il wrapper `017792c0` e' chiuso e il mapper chiamato via virtuale `+0x380` e' ora chiuso come sampled/data-point function piecewise-linear. I payload base osservati per reset/standard sono ora chiusi sotto `01777f70` e `017780f0`; anche il binding nominale action -> funzione e' chiuso tramite pointer-to-member/vtable.

### Transform Parallelo `017794e0`

`017794e0(this, inputCents)` ha la stessa architettura di `017792c0`, ma usa il mapper a `this + 0x50` e non un dominio fisso hard-coded nel gate principale.

Shape verificata:

- se `this + 0x60` e' attivo, `this + 0x40` esiste e `this + 0x50` e' nullo, forza lazy init tramite virtuale `vtable + 0x1a0`
- legge il tuning/mapper da `this + 0x50`
- se il mapper e' nullo, ritorna `inputCents` invariato
- se `this + 0x58 <= inputCents <= this + 0x5c`, ritorna `mapper->vtable[0x380](inputCents)`
- se `inputCents < this + 0x58`, usa la pendenza campionata tra `1200.0` e `1201.0`
- se `inputCents > this + 0x5c`, usa la pendenza campionata tra `10800.0` e `10799.0`

Pseudocodice prudente:

```c
if (mapper == NULL) {
    return inputCents;
}

if (lowestStretchedPitch <= inputCents && inputCents <= highestStretchedPitch) {
    return mapper(inputCents);
}

if (inputCents < lowestStretchedPitch) {
    y1200 = mapper(1200.0);
    y1201 = mapper(1201.0);
    return y1200 + (1200.0f - inputCents) * (y1200 - y1201);
}

y10800 = mapper(10800.0);
y10799 = mapper(10799.0);
return y10800 + (inputCents - 10800.0f) * (y10800 - y10799);
```

Nota importante: il gate di dominio usa `this + 0x58/+0x5c`, ma le code extrapolate restano ancorate ai sample fissi `1200/1201` e `10800/10799`. Questo e' un fatto del binario, non una normalizzazione clean-room.

### Field Map `MUScaleStretching` / Transform Object

Il costruttore `017770f0` e i builder property `01777580..01777850` chiudono la mappa campi del transform stretching locale:

| Offset | Property / nome osservato | Tipo registrato | Evidenza |
|--------|---------------------------|-----------------|----------|
| `+0x38` | `_tuning`, registrata anche come `_stretching` | `MUScaleTuning` | `01777580` costruisce property name `_tuning`; `017770f0` registra alias/stringa `_stretching` |
| `+0x40` | `_stretchingFunction` | `MUDataPointLinearFunction` | `01777670` carica la stringa `_stretchingFunction`; `01778610` richiede questo campo non nullo per costruire cache |
| `+0x48` | `_mappingFunction` | `MUDataPointLinearFunction` | `01777760` carica `_mappingFunction`; `01778610` ci salva il mapper costruito da `01778a40`; `017792c0` lo valuta |
| `+0x50` | `_inverseMappingFunction` | `MUDataPointLinearFunction` | `01777850` carica `_inverseMappingFunction`; `01778610` ci salva il mapper costruito da `01778fe0`; `017794e0` lo valuta |
| `+0x58` | `_lowestStretchedPitch` | `float` | registrazione diretta in `017770f0`; usato come bound basso da `017794e0` |
| `+0x5c` | `_highestStretchedPitch` | `float` | registrazione diretta in `017770f0`; usato come bound alto da `017794e0` |
| `+0x60` | `_didRequestCacheValidation` | `bool` | registrazione diretta in `017770f0`; flag di lazy cache validation per `017792c0/017794e0` |

Questo chiude il layout del transform object con confidence alta. Non chiude ancora tutto il significato musicale della sorgente `_stretchingFunction`, ma la policy con cui l'utente/editor genera i control point principali e' ora chiusa nei path documentati sotto.

### Owner Edge `MUScaleTuning-like +0x68` -> `MUScaleStretching`

Il grafo owner non e' piu' completamente aperto. `0176d660` registra un campo sull'oggetto `MUScaleTuning-like` a `+0x68`:

- azzera `this + 0x68`
- chiama il builder property `0176e1e0`
- `0176e1e0` costruisce una property descriptor con nome interno `_stretching`
- il callsite `0176d87d` passa il tipo stringa `MUScaleStretching` a `00e879c0`
- nello stesso callsite compare anche la stringa `_tuning` come alias/lookup name di registrazione

`0173a570` chiama `0176d660` durante la costruzione dell'oggetto owner, poi chiama `0176ed20`. `0176ed20 -> 0176ed30` costruisce la variante/default globale e a `0176ed9f` chiama `017770f0`, cioe' il costruttore del `MUScaleStretching` interno.

Lettura prudente: la catena chiusa e' `MUScaleTuning-like +0x68 -> MUScaleStretching -> MUScaleTuning + MUDataPointLinearFunction caches`. Il dump properties contiene una vista `MUDegreeTitleType` con parte di questi nomi e i file clean auto-generati classificano una parte del cluster come `GNInt/GNUni`; per questo il nome classe finale resta prudente. Il fatto implementabile e' l'owner edge a `+0x68`, il type string `MUScaleStretching`, e il layout operativo del pitch-table documentato sopra.

### Control Point Editor `MUScaleStretchTuningCtrl`

I callsite del controller `MUScaleStretchTuningCtrl` chiudono una parte importante della provenienza dei point: `_stretchingFunction` e' anche una funzione editabile/renderizzata dalla UI, non un output diretto del detector audio primario in questi path.

Funzioni osservate:

- `01b42190` registra tre azioni UI: `handleReset`, `handleSetStandardFunction`, `handleSetVerticalRange`
- `01b43d80` e' getter diretto del source a controller `+0x140`
- `01b43dc0` e' setter del source a controller `+0x140`: se cambia, sostituisce il riferimento, ricostruisce la cache mapper a `+0x148` tramite `01778a40` e invalida/redrawa via vtable `+0x620`
- `01b43f40` aggiorna il float di vertical range a controller `+0x150` e invalida/redrawa via vtable `+0x620`
- `01b43fc0` usa il source a controller `+0x140`, costruisce una funzione sampled con `01778a40`, valuta il mapper su una scansione orizzontale e renderizza sia curva sia point marker
- `01b43670` e' un action payload che costruisce la funzione flat tramite `01777f70` e la passa al setter `01b43dc0`
- `01b43760` e' un action payload che costruisce la funzione fissa a 10 point tramite `017780f0` e la passa al setter `01b43dc0`
- `01b468c0(x, y, minDistance)` e' un inserter UI: trova la posizione con `013f3690(x)`, verifica distanza dai vicini con soglia `minDistance`, crea un point, scrive `x` con `013fae90`, scrive `y` con `013faee0`, inserisce con `013f2cf0`, poi rigenera mapping/inverse con `01778a40` e `01778fe0`
- `01b47100` contiene il path di editing/drag: legge i point tramite `013f2b00`, modifica `x` con `013fae90(oldX + dx)` e `y` con `013faee0(oldY + dy)`, poi rigenera cache mapper con `01778a40` e `01778fe0`
- `01b42750` e `01b430f0` sono path di update/selection/view che iterano la lista point e usano `013faf20` per derivare min/max o stati visuali

Fatti chiusi:

- `013fae90` e' setter di `point.x`
- `013faee0` e' setter di `point.y`
- `013f2b00` ritorna/espone la lista point della funzione
- `013f3690` e' usato come finder/nearest index su `x`
- `013f2cf0` e' usato come inserimento point nella funzione sorgente
- `013f3080` e' usato come cleanup/remove/reset quando la funzione risultante non resta valida dopo la ricostruzione

Lettura prudente: la policy editoriale dei control point e' ora chiusa per set source, due payload base, insert, move, render e vertical range. `01b42190` registra `handleReset`, `handleSetStandardFunction` e `handleSetVerticalRange`; il binding pointer-to-member chiude reset -> `01b43670` -> `01777f70`, standard -> `01b43760` -> `017780f0`, vertical range -> `01b43850` -> `01b43f40`.

### Sampled Mapper `FUN_000bea40`

Il constructor `000bea40` crea un oggetto da `0x60` byte e installa come vtable finale la base osservata `0x25dd6d0`. Gli slot rilevanti per `017792c0` sono ora concreti:

| Slot | Target | Ruolo verificato |
|------|--------|------------------|
| `+0x380` | `013f6a10` | public eval wrapper |
| `+0x3b8` | `013f6a60` | eval forwarding con `extrapolate=false` |
| `+0x3d8` | `013f6a80` | eval piecewise-linear con cache/index hint opzionale |
| `+0x408` | `013f4240` | helper interno usato dall'inserter per ottenere/creare un point wrapper |
| `+0x410` | `013f42a0` | inserimento variante usata da altri callsite |
| `+0x418` | `013f4740` | inserimento point `(x,y)` usato da `01778a40`, `01778fe0`, `01777f70`, `017780f0` |

Field verificati:

- mapper `+0x48`: lista dei data point
- point `+0x38`: coordinata `x`
- point `+0x40`: coordinata `y`
- point `+0x58`: link/reference aggiornato tramite `013faf40`; il ruolo owner/backref resta nominato solo in modo prudente

`013f4740` e' l'inserter osservato da `vtable + 0x418`: usa un helper interno per ottenere/creare un point, lo inserisce/aggancia alla lista `mapper + 0x48`, scrive `x` in `point + 0x38`, scrive `y` in `point + 0x40`, poi ritorna un wrapper del point inserito.

`013f6a10` e' il public eval chiamato da `017792c0`. Inizializza un index hint locale a `-1`, chiama lo slot `+0x3b8`, e se il risultato e' NaN ritorna il fallback double `1.0`.

`013f6a60` inoltra a `+0x3d8` con `extrapolate=false`. La formula chiusa di `013f6a80` e':

```c
if (pointCount == 0) {
    return 0.0;
}

if (pointCount == 1 && extrapolate) {
    return first.y + (x - first.x);
}

if (x <= first.x) {
    indexHint = 0;
    if (!extrapolate) {
        return first.y;
    }
    // Fall through to the first segment for lower extrapolation.
    i = 0;
    goto interpolate_or_extrapolate;
}

if (x >= last.x) {
    indexHint = lastIndex;
    if (!extrapolate) {
        return last.y;
    }
    // Fall through to the last segment for upper extrapolation.
    i = lastIndex - 1;
    goto interpolate_or_extrapolate;
}

i = findLowerPointIndex(x, indexHint);
indexHint = i;

interpolate_or_extrapolate:
x0 = points[i].x;
y0 = points[i].y;
x1 = points[i + 1].x;
y1 = points[i + 1].y;

if (x0 == x1) {
    return y0;
}

// Same linear interpolation, anchored on the nearer side for numerical stability.
if ((x0 + x1) * 0.5 < x) {
    return y1 + ((y1 - y0) * (x - x1)) / (x1 - x0);
}
return y0 + ((y1 - y0) * (x - x0)) / (x1 - x0);
```

La ricerca usa prima l'`indexHint` passato dal caller, scansiona localmente entro pochi vicini quando possibile, poi cade su `013f3690` come finder generale. Per il path `017792c0 -> +0x380`, l'extrapolazione del mapper e' disattivata: fuori dal dominio il wrapper `017792c0` gestisce gia' le code usando le pendenze a `1200/1201` e `10800/10799`.

### Costruzione Del Mapper Tuning

`01778610` e' la lazy init del transform:

- resetta `this + 0x60` a `0`
- se `this + 0x40` (`_stretchingFunction`) esiste, costruisce due mapper con `01778a40` e `01778fe0`
- salva il mapper principale in `this + 0x48`
- chiama sul mapper principale il virtuale `+0x378` dopo l'assegnazione
- salva il mapper ausiliario in `this + 0x50`
- se `this + 0x50` e' nullo, imposta il dominio cache `this + 0x58/+0x5c` a `1200.0f/10800.0f`
- altrimenti deriva `this + 0x58/+0x5c` dai primi/ultimi point letti tramite `013f2b00` e `013faed0`

`01778a40` costruisce il mapper principale ricampionando una sorgente:

- legge i bound dalla lista/point source tramite `013f2b00` e `013faed0`
- arrotonda i bound con `00e7d780`
- valuta il mapper sorgente via `vtable + 0x380` ogni `10` cents
- accumula i valori in uno staging buffer
- crea un nuovo `FUN_000bea40`
- inserisce i sample come point `(x, y)` via `vtable + 0x418`

`01778fe0` costruisce il mapper ausiliario/offset:

- crea un nuovo `FUN_000bea40`
- itera i point della source list ottenuta tramite `013f2b00`
- legge `x`/base tramite `013faed0` e offset tramite `013faf20`
- inserisce nel mapper `(x, base + offset)` via `vtable + 0x418`

`01777f70` costruisce un mapper flat/default a 3 point. I callsite diretti osservati sono `01b42a07` e `01b4368a`; il wrapper action `01b43670` lo passa direttamente a `01b43dc0`.

| `x` | `y` |
|-----|-----|
| `1200.0` | `0.0` |
| `6900.0` | `0.0` |
| `10800.0` | `0.0` |

`017780f0` costruisce invece un mapper fisso a 10 point. Il callsite diretto `01b4377a` dentro `MUScaleStretchTuningCtrl` lo collega al payload action `01b43760`, che lo passa a `01b43dc0`; il ruolo corretto e' quindi `fixed standard stretch function`, ora chiuso come payload di `handleSetStandardFunction`.

| `x` | `y` |
|-----|-----|
| `1200.0` | `-40.0` |
| `2100.0` | `-17.5` |
| `3300.0` | `-7.0` |
| `4500.0` | `-3.5` |
| `5700.0` | `-1.7` |
| `6900.0` | `0.0` |
| `8100.0` | `1.7` |
| `9300.0` | `5.5` |
| `10500.0` | `18.0` |
| `10800.0` | `30.0` |

Action wrappers chiusi:

- `01b43670`: se il parametro dispatch `edx` e' zero ritorna true/no-op; altrimenti legge il controller da `+0xa0`, chiama `01777f70`, passa il risultato a `01b43dc0`, ritorna true
- `01b43760`: stessa shape, ma chiama `017780f0`, passa il risultato a `01b43dc0`, ritorna true

Name binding chiuso:

- `01b42190` registra `handleReset` con pointer-to-member immediato `0x5d9`
- `01b42190` registra `handleSetStandardFunction` con pointer-to-member immediato `0x5e1`
- `01b42190` registra `handleSetVerticalRange` con pointer-to-member immediato `0x5e9`
- `01b43b90` e' il thunk comune: se il low bit del pointer-to-member e' attivo, risolve la funzione come `*(vtable + (imm - 1))`
- il costruttore `01b43c20` installa la vtable principale a `0x026483f0`
- le entry `0x026483f0 + 0x5d8`, `+0x5e0`, `+0x5e8` puntano rispettivamente a `01b43670`, `01b43760`, `01b43850`

Quindi il mapping nominale e':

- `handleReset` -> `01b43670` -> `01777f70` -> flat 3-point zero-stretch
- `handleSetStandardFunction` -> `01b43760` -> `017780f0` -> fixed 10-point standard stretch
- `handleSetVerticalRange` -> `01b43850` -> `01b43f40`

Conseguenza clean-room: la formula del mapper tuning e' implementabile come sampled piecewise-linear function, inclusi il flat/default 3-point e il fixed standard 10-point. La policy UI set-source/insert/move/render dei control point in `this + 0x40` (`_stretchingFunction`) e' parzialmente chiusa e l'owner edge `MUScaleTuning-like +0x68 -> MUScaleStretching` e' ora vincolato. Restano aperti la semantica musicale completa dell'owner high-level e il modo in cui questo stretching viene scelto/propagato dai pitch-system high-level.

### Offset Aligner `017380d0`

`017380d0(dest, sourceARef, sourceBRef)` e' ora chiuso come helper di allineamento offset intero.

Shape verificata:

- copia `*sourceARef` e `*sourceBRef` in wrapper locali
- chiama `01738120(localA, localB)`
- se il delta e' diverso da zero, chiama `01738020(dest, delta)`

`01738120`:

- inizializza entrambi i valori a `0x3c` (`60`) se il relativo source e' nullo
- se un source esiste, legge il suo campo `+0x64` tramite `017702f0`
- ritorna `valueB - valueA`

`01738020(dest, delta)`:

- calcola `newValue = *(int *)(dest + 0x6c) + delta`
- se `dest + 0x40` e' attivo e `dest + 0x58` esiste, usa il count della lista `*(int *)(list + 0x0c)` per wrappare `newValue` dentro una finestra centrata intorno a zero
- se `newValue` cambia, scrive `dest + 0x6c` con notifica di write

Conseguenza: il ramo opzionale di `01515040` non applica una formula audio. Allinea un offset indice tra due source/pitch-table risolti dal corridoio `+0x78`, poi propaga quel delta sul destination object.

### Setter `01767a10`

`01767a10` opera sul child/store a `this + 0x60`:

- legge il campo float tramite `01770220`
- se un flag e' attivo, quantizza il valore corrente su griglia da `100` cents
- somma il parametro in cents offset
- scrive il risultato con `01770230`

`01770220` e `01770230` sono getter/setter diretti del float `object + 0x60` con notifiche di write.

### Helper Store Non Piu' Opachi

- `01822e80(out, anchor)` copia/ritiene `anchor + 0x38` in `out`
- `0124ae30` legge `object + 0x68` come int state/count
- `0124ae40` scrive `object + 0x68` con notifica
- `018847d0` legge `object + 0x68` come int state/count nel bridge parallelo
- `018847e0` scrive `object + 0x68` con notifica nel bridge parallelo
- `018232b0` legge `object + 0x48`
- `018232c0` scrive `object + 0x48` con notifica

## `01516650` - Wrapper Preflight + Range Pass

## Ownership Guard Per `+0x78/+0x80/+0x88`

Il naming dei tre slot del bridge resta volutamente conservativo. Le inizializzazioni metadata osservate nel dump danno:

- `MUScalePitchSystem`: size `0x78`
- `MUPercussivePitchSystem`: size `0x58`

Quindi `+0x78`, `+0x80` e `+0x88` non vanno promossi a campi diretti di `MUPercussivePitchSystem`. Il codice di `01515040` e `01516720` risolve questi slot risalendo una catena parent-like tramite `+0x50`; il proprietario operativo corretto, finche' non chiudiamo il costruttore finale, e' un nodo payload/anchor del pitch-system.

Fatti chiusi:

- `01515040` cerca uno store a `payload node + 0x80`, con fallback lungo `payload node + 0x50`, e costruisce la famiglia store tramite `00e8fc40 -> 0124b580`.
- `01516720` cerca uno store a `payload node + 0x88`, con fallback lungo `payload node + 0x50`, e costruisce la famiglia store tramite `00e8fc40 -> 0111d0d0`.
- le due famiglie sono distinte a livello di constructor/helper state: `+0x80` usa `0124ae30/0124ae40`, `+0x88` usa `018847d0/018847e0`.

Stringhe come `_noiseRanges`, `_detectedRanges`, `_vibratoRanges`, `_rangesByAudioSourceItem`, `_audioSourcePrincipalItems`, `_audioSourceSibilantItems` e `_audioSourcePotentialItems` esistono nel binario/properties dump, ma non sono ancora bindate a questi offset. La verifica aggiornata rafforza il guardrail:

- `_rangesByAudioSourceItem` compare sotto `MUElementAnalyzerEngineStaticTables`
- `_noiseRanges` compare sotto `MUTimeSliceParameterBuffer`
- `_audioSourcePrincipalItems`, `_audioSourceSibilantItems` e `_audioSourcePotentialItems` compaiono nel gruppo property timeline/audio-source del dump, non nello store `+0x80/+0x88`
- `01323a40` in `MUPercussivePitchSystem` referenzia `_audioSourceSibilantItems`, ma il corpo passa da property descriptors globali e vtable accessor, non da accessi diretti a `payload node +0x80` o `+0x88`

Quindi questi nomi restano vocabolario di contesto, non nomi canonici per i due store del bridge.

## Setter E Cache Builder Nel Cluster `MUScalePitchSystem`

Il cluster clean classificato come `MUScalePitchSystem` restringe ulteriormente alcuni owner, ma introduce anche una distinzione importante: ci sono slot retained-reference e slot cache/lista con offset simili. Per evitare collisioni di naming, qui vengono chiamati `scale_pitch_system_like_node` finche' il type identity finale non viene riconciliato con la metadata size.

### Flag Suggested-Relevant Di `MUScalePitchSystem`

Il costruttore `011a6790` chiude un blocco reale della classe `MUScalePitchSystem`:

- registra la class string `MUScalePitchSystem`
- conferma metadata size `0x78`
- espone i property name `_tuningIsSuggestedRelevant`, `_modeIsSuggestedRelevant`, `_tuningPitchAnchorIsSuggestedRelevant`, `_modeFundamentalOffsetIsSuggestedRelevant`, `_stretchingIsSuggestedRelevant`
- inizializza cinque byte/flag consecutivi a `+0x58`, `+0x59`, `+0x5a`, `+0x5b`, `+0x5c`

Il parser/deserializer `0091ac08` rafforza la mappa: i case `1..5` settano rispettivamente `this + 0x58`, `+0x59`, `+0x5a`, `+0x5b`, `+0x5c` quando trovano il campo serializzato corretto.

Mappa prudente:

| Offset | Nome property osservato | Confidence |
|--------|--------------------------|------------|
| `MUScalePitchSystem +0x58` | `_tuningIsSuggestedRelevant` | Medium-high |
| `MUScalePitchSystem +0x59` | `_modeIsSuggestedRelevant` | Medium-high |
| `MUScalePitchSystem +0x5a` | `_tuningPitchAnchorIsSuggestedRelevant` | Medium-high |
| `MUScalePitchSystem +0x5b` | `_modeFundamentalOffsetIsSuggestedRelevant` | Medium-high |
| `MUScalePitchSystem +0x5c` | `_stretchingIsSuggestedRelevant` | Medium-high |

Conseguenza: questi flag sono metadati high-level di rilevanza/suggerimento del pitch system, non formule del detector audio. Inoltre non vanno fusi con il `scale_pitch_system_like_node +0x58` usato da `01525c50` come step intero del cache builder: e' una collisione di offset tra owner diversi o tra class labels automatiche rumorose.

Setter retained-reference osservati:

- `019f8880` sostituisce `this + 0x78` con `*arg1`, gestendo retain/release e detach/attach tramite `this + 0x10`, `00cbadd0` e `00cbad80`.
- `019f8cb0` ha la stessa shape su `this + 0x70`.
- `019f90e0` ha la stessa shape su `this + 0x80`.
- `019f81d0`, se `this + 0x68` esiste, legge tre sorgenti tramite `01510280`, `01510030`, `0150eb60` e chiama rispettivamente `019f8880`, `019f8cb0`, `019f90e0`.
- `019fcdf0` richiama la stessa tripletta dopo un update/configuration path.

Cache/list builder osservato:

- `01525150` costruisce quattro oggetti `g_025683c0` e li installa su `this + 0x60`, `+0x68`, `+0x78`, `+0x80`.
- `01525150` alimenta `+0x60/+0x78` dalla lista `this + 0x48`.
- `01525150` alimenta `+0x68/+0x80` dalla lista `this + 0x50`.
- `01525c50` costruisce lookup/index cache usando la coordinata double `child + 0x38` e uno step intero `this + 0x58`.
- `01525fb0` costruisce lookup/index cache usando la coordinata double `child + 0x40`, la lunghezza/step letta da `01524a20/01524a10` e uno step intero `this + 0x70`.

Conseguenza: `+0x78` e `+0x80` sono ora collegati a un cluster scale-pitch-system-like con setter retained-reference e cache builder. Questo restringe l'owner dei due slot, ma non autorizza ancora nomi musicali come detected/noise/vibrato. Lo slot `+0x88` del bridge `01516720` resta separato: nel cluster ispezionato non e' emerso un setter retained-reference simmetrico per `this + 0x88`.

`01516650` non ha file clean standalone nel dump, ma il disassemblato diretto da `0x01516650` a `0x01516720` chiude la sua forma:

- funzione piccola, 202 byte
- salva argomenti register/stack e `xmm0`
- prepara una local copy del primo payload e chiama `01514480`
- prepara local copy di piu' payload/range e chiama `01515040`
- ritorna il risultato di `01515040` combinato con un flag/byte preservato (`or %bl, %al`)

Lettura prudente: `01516650` e' orchestration/wrapper, non contiene il detector primario. Il lavoro reale sta in `01514480` e `01515040`.

### `01514480`

Shape verificata:

- risolve `+0x78` su un input e su `this`, risalendo via parent-like `+0x50`
- se non trova un anchor `+0x78`, ritorna `0`
- passa gli anchor risolti da `01822e80`
- usa `00d51e10` come predicato di presenza/equivalenza sullo store risolto
- se il predicato fallisce, passa da `00d51d20` e `0150d0b0`
- se i flag input richiedono update, usa anche `0124ae90`, `018232b0` e `018232c0`
- ritorna un boolean/dirty-like flag

Lettura prudente: preflight/allineamento su anchor `+0x78` prima della riconciliazione dei range. Il ruolo di `018232b0/018232c0` non e' ancora chiuso.

### `01515040`

Shape verificata:

- risolve uno slot `+0x80` su un payload/anchor node lungo parent-like `+0x50`
- crea un oggetto helper/output con `00e8fc40 -> 0124b580`
- itera range/payload con `01252960`
- normalizza endpoint con `01514120`
- in un ramo opzionale risolve anche `+0x78`, passa da `01822e80` e chiama `017380d0`
- inserisce o aggiorna range tramite `012502a0`
- verifica presenza con `01254260`
- se manca il range, inserisce con `012549c0`
- usa `0124ae30` e `0124ae40` come contatori/stato del range store payload `+0x80`
- ritorna un boolean/dirty-like flag

Lettura prudente: `01515040` e' la variante `+0x80` del range reconciliation bridge, mentre `01516720` opera sul corridoio `+0x88`.

### Famiglia Consumer Dello Store `+0x80`

La famiglia `+0x80` e' diversa da `+0x88` perche' resta accoppiata allo scalar/source anchor `+0x78` e costruisce una cache/query derivata a `+0x90`.

Funzioni osservate:

- `0150bf50` e' un builder/update locale: se `this + 0x80` manca, alloca `00e8fc40 -> 0124b580`, inizializza via `0150ceb0`, inserisce/aggiorna con `012502a0(..., flag 1)` e scrive stato tramite `0124ae40`. Nello stesso path assicura anche `this + 0x78` con `0151f500`, `0150d0b0` e aggiorna lo stato/preflight con `018232c0`.
- `01511080` e' il gate di compatibilita' source/dest per `+0x78/+0x80`: risolve entrambi lungo `+0x50`, confronta lo stato `+0x78` tramite `018232b0` e lo stato `+0x80` tramite `0124ae30`, poi nel ramo non banale rientra in `012cb110 -> 012e7210` e verifica omogeneita' lista con `01264240`.
- `015104e0` richiede `this + 0x78` e `this + 0x80`, assicura una cache a `this + 0x90` tramite `0151fdc0`, itera segmenti con `01252960`, crea oggetti `g_025fee18`, collega scalar/source tramite `0173b670`, `0173b680`, `01822e80`, `0173b720`, `015220b0`, inserisce con `012502a0`, e marca dirty `this + 0xa1`.
- `01510b20` e' un query adapter: risale `+0x50` fino a trovare un nodo con `+0x78/+0x80`, forza `015104e0` se la cache `+0x90` e' dirty/mancante, poi interroga `+0x90` con `01252670` o `012521f0` in base alla forma del range input.

Conseguenza: il corridoio `+0x80` non e' solo uno store segmentato. E' una famiglia `scalar-anchor + segment-store + query-cache`, dove `+0x78` fornisce l'anchor scalar/source, `+0x80` mantiene lo store segmentato e `+0x90` e' cache/query derivata.

### Payload `g_025fee18` Della Cache `+0x90`

La cache `+0x90` non contiene range audio grezzi. Il builder `015104e0` materializza per-segmento oggetti con vtable `g_025fee18`, li collega allo scalar/source path e li inserisce nella cache con `012502a0`.

Evidenza osservata:

- `015200c0` e' il constructor pulito per oggetti `g_025fee18`: chiama `010ed760`, imposta la vtable, passa da `01520520` e `01520810`, inizializza slot interni tra `+0x68/+0x70`, poi registra quattro builder con `01520b00`, `01520c70`, `01520de0`, `01520f50`. Le definizioni di questi builder non risultano split nei clean dump disponibili, quindi i nomi di campo restano non chiusi.
- `014fdd70`, `0173c410`, `0173c840` e `0173d440` allocano lo stesso payload `g_025fee18`, inizializzano gli slot `+0x38/+0x40/+0x48/+0x50/+0x58/+0x60/+0x68/+0x6c/+0x70`, e costruiscono liste di child `g_025ffd60` usando `01779ed0`, `01779f40` e inserimento lista tramite `0176fde0`.
- `0173c840` costruisce una sequenza di intervalli distribuiti da `param_2`; `0173d440` costruisce una sequenza bidirezionale intorno a zero; `014fdd70` costruisce una configurazione default/standard e finalizza un valore scalar con `01770230`.
- `0173c410` copia due riferimenti nel payload: il risultato di `017354e0` finisce nello slot `+0x58`, il risultato di `0176f970` nello slot `+0x60`.

Lettura prudente: `g_025fee18` e' un payload derivato di pitch/scale-query, non un detector di note. Il nome classe canonico resta aperto, ma `+0x90` puo' essere trattato come cache di oggetti derivati `g_025fee18` costruiti da `+0x78/+0x80`.

## `01519670` - Split/Clone Gate

Shape verificata:

- se `*param_2 == arg1`, ritorna/ritiene direttamente `arg1`
- altrimenti risolve per `arg1` un anchor a `+0x78`; se assente risale la catena parent-like a `+0x50` fino a trovare un nodo con `+0x78`
- passa l'anchor da `01822e80`, che estrae `anchor + 0x38`; poi legge cents offset tramite `01773e80` in `fVar11`
- per `*param_2 == 0` legge `fVar12` da `01773e50`, cioe' lo standard pitch offset in cents
- per `*param_2 != 0` risolve lo stesso anchor `+0x78` lungo `+0x50`, passa da `01822e80`, poi legge cents offset con `01773e80`
- se `abs(fVar12 - fVar11) < 0.001f`, ritorna l'oggetto originale
- se il gate passa, alloca un nuovo oggetto, chiama `01512be0`, `01513590`, `01512890`, itera range/segmenti con `01252960` e propaga `fVar12` su ogni elemento selezionato tramite `01767a10(fVar12)`

Lettura prudente:

- e' un gate di split/clone basato su differenza in cents offset
- non e' un detector audio primario
- `+0x78` e' un anchor di scalar/source pitch-system, ma il proprietario esatto del campo e' un nodo payload/derived del pitch-system, non un campo diretto provato di `MUPercussivePitchSystem`

## `01252960` - Range/Segment Iterator

`01252960` e' classificato nel dump come `GNNull` per prossimita' di indirizzo, ma il corpo non e' semanticamente "null".

Shape verificata:

- usa uno stato indice in `local_res10`
- `-1` significa inizializzazione
- `-2` significa fine iterazione
- legge una struttura segmentata da `this + 0x48`
- legge payload paralleli da `this + 0x50`
- confronta boundaries/intervalli con helper tipo `00e7c020`
- scrive l'oggetto selezionato in `param_3`
- scrive la boundary/range key in `param_4`

Lettura prudente: iteratore generalizzato di segmenti/range con output payload + range key. E' un building block centrale per il pitch-system bridge.

## `01514120` - Endpoint Adapter

`01514120` converte un input range/time-like in uno dei tre endpoint/coordinate branch.

Shape verificata:

- se `arg1 >> 32 == 0`, restituisce `arg1`
- se `*param_3 == 0`, usa `016c98e0() + param_1`
- branch `unaff_EDI == 0`: `016cb690(...)`
- branch `unaff_EDI == 1`: `016cb5f0(...)`
- branch `unaff_EDI == 2`: `00e7bcc0(); 016cb9d0(..., 4)`
- se `*param_3 != 0`, passa da `00e7c860()` e sceglie `012f91f0()` o `012f9260()` in base a `param_4`
- poi mappa ancora su branch `016cb1a0`, `016cb070` o `012f92d0 -> 00e7cd00`

Lettura prudente: adapter di endpoint/range per tre modalita' operative. Il significato musicale dei tre branch non e' chiuso.

## `01516720` - Range Reconciliation Bridge

Shape verificata:

- alloca un oggetto output tramite `00e8fc40 -> 0111d0d0`
- risolve ripetutamente uno slot `+0x88` su un payload/anchor node, anche risalendo via parent-like `+0x50`
- itera segmenti con `01252960`
- normalizza endpoint/range con `01514120`
- inserisce o aggiorna segmenti tramite `012502a0`, `01254260`, `012549c0`
- usa `018847d0` e `018847e0` come contatori/stato del range store risolto
- quando deve decidere se inserire, verifica prima presenza con `01254260`; se manca, inserisce con `012549c0(..., flag 1)`
- aggiorna lo stato con `018847e0` solo quando lo stato esistente letto da `018847d0` e' inferiore al target calcolato
- ritorna un valore a 32 bit derivato da `uVar12`

Lettura prudente: bridge di riconciliazione tra lista/range LSS e store segmentato del pitch-system. Questo e' piu' vicino alla trasformazione dei payload in segmenti editabili rispetto a `01519670`, ma non chiude ancora la formula di detection.

### Famiglia Consumer Dello Store `+0x88`

Lo slot `+0x88` non e' piu' osservato solo dentro `01516720`. Esiste una famiglia percussive-specific che consuma o rigenera lo stesso store segmentato:

- `01512000` risolve lo store `+0x88` su sorgente e destinazione, anche tramite parent-like `+0x50`, legge lo stato con `018847d0` e decide se serve una ricostruzione/propagazione. Nel ramo attivo rientra in `012cb110 -> 012e7210`, poi verifica omogeneita' della lista tramite `01264240`.
- `0151a240` richiede `this + 0x68`, risolve lo store `+0x88`, itera segmenti con `01252960`, materializza/aggiorna oggetti per segmento tramite `01531ce0`, `01531d40`, `01531da0`, `01531df0` e confronta elementi nidificati tramite vtable `+0x50`. Le definizioni degli helper `01531ce0..01531df0` non sono split nei dump disponibili, quindi restano helper opachi.
- `0150aa70` contiene una variante builder della stessa famiglia: parte dal contesto `_pitchSystem`, verifica/fallback tra `MU12TETPitchSystem`, `MUPercussivePitchSystem` e `MUScalePitchSystem`, puo' costruire un payload default con `014fdd70/0173c6e0`, chiama `0150bf50` per il corridoio `+0x80`, poi, se `this + 0x58` esiste, alloca `00e8fc40 -> 0111d0d0`, itera `01252960`, inserisce con `012502a0` e aggiorna lo stato con `018847e0`.
- `0150f7e0` e' un orchestrator dirty-refresh: se il flag `this + 0xa2` e' attivo lo azzera e invalida via vtable `+0x380`; poi materializza lista tramite `0151a950`, normalizza/aggiorna item con `012eb770`, `012f9ac0`, `012ed0d0`, chiama `0151a240`, fa una seconda propagazione via `012f51f0` e vtable `+0x370`, quindi ricorre sui figli `this_ptr[9]`.
- `00154c40` e' un consumer ricorsivo/propagativo: se `this + 0x88` esiste, cammina la lista `012e5ae0`, scende in liste `01265b80`, per ogni item usa `011ef640` e `00155200`, poi finalizza il gruppo con `0015edf0`.

Conseguenza: `+0x88` e' ora ristretto a store segmentato percussive-specific con lifecycle builder/update/propagation, stato `018847d0/018847e0` e constructor `0111d0d0`. A differenza del corridoio `+0x80`, non e' stato osservato l'accoppiamento obbligato con `+0x78` e `+0x90`. Resta aperta la semantica musicale distinta; non va ancora rinominato come detected/noise/vibrato/audio-source range.

## `0150ddd0` - Candidate Materialization Pass

Shape verificata:

- risolve lo stesso anchor `+0x78` lungo parent-like `+0x50`
- se manca, usa fallback `0176fff0`; se esiste passa da `01822e80`
- itera la lista in `*arg1`
- usa helper `0125e7c0`, `0125a2d0`, `0125e930`, `0152ebe0`
- se manca un payload intermedio, crea un oggetto `g_025ecd90` e chiama `0128c470`
- se manca un secondo payload, crea un oggetto tramite `0117a3f0`, poi chiama `01508860`, `0150d3a0`, `0125dfa0`, `01773f20`, `01508220`, `0152dc80`, `0150d720`

Lettura prudente: pass di materializzazione/normalizzazione candidati su lista. Non e' una formula di pitch detection, ma prepara oggetti downstream coerenti col pitch-system.

## `01bab160` - Aggregatore Metriche Pitch/Inspector

`01bab160` e' vicino al layer inspector/selezione, non al detector primario. La funzione chiama `01ba9e60`, che nei dump e' classificata come `MUElementPitchInspector` e porta le property `_noteNameField`, `_centOffsetField`, `_frequencyField`, `_savedPitchIndexes`, `_pitchOffsetFormatter`, `_frequencyFormatter`.

Shape verificata:

- inizializza una vista/lista selezionata con `01ba9e60` e `01baad70`
- se la selezione e' vuota o non ha payload valido, resetta/aggiorna output UI tramite vtable `+0x998` e `+0x958`
- sui candidati validi calcola un indice intero `iVar12` via `01507f00`, oppure via `0125dfa0` seguito da vtable `+0x3a8`
- legge un valore cent-like con `0125a2c0`
- legge un secondo valore cent-like con `0152e000` e accumula il delta `0125a2c0 - 0152e000`
- mantiene min/max dell'indice intero con sentinel `0x7fffffff` e `-0x80000000`
- mantiene min/max dei due valori float con sentinel `g_02391074` e `g_02391078`; i helper `GNUni/00e3c4f0` e `GNUni/00e3c730` confermano che questi due global sono usati come sentinel di riduzione max/min
- se tutti gli indici coincidono (`minIndex == maxIndex`), costruisce l'output nota tramite `01ba9920`; altrimenti resetta il campo
- se il delta cent-like ha un valore unico (`minDelta == maxDelta`), lo scrive nell'output tramite vtable `+0x378`; altrimenti resetta il campo
- se il valore cent-like assoluto ha un valore unico (`minAbs == maxAbs`), lo converte in Hz con `exp2f(cents * g_023941f4) * g_023941f8` e lo scrive tramite vtable `+0x378`; altrimenti resetta il campo
- in un ramo iniziale scrive anche due valori convertiti in Hz tramite vtable `+0x3c8` e `+0x3d8`, derivati da getter `+0x390` e `+0x398`; il nome UI esatto di questi due campi resta aperto

Lettura prudente: questa funzione definisce regole di visualizzazione/metriche aggregate per selezioni pitch: singolo valore se tutti i candidati concordano, multi/blank se i valori divergono. E' utile per il clean-room editor, ma non va interpretata come algoritmo di audio-to-note detection.

## Blocker Rimasti

- `01774880` e' chiuso come collector di run candidate per `targetIndex`; il layout operativo del pitch-table e' ristretto a `MUScaleTuning-like`, ma resta prudente il nome classe canonico finale perche' il clean dump classifica ancora il cluster come `GNInt`.
- `017792c0`, `017794e0` e il mapper interno `FUN_000bea40` sono chiusi come lookup/extrapolator + sampled piecewise-linear eval; set-source/insert/move/render UI dei point sorgente e i payload `handleReset` / `handleSetStandardFunction` sono chiusi, e l'owner edge `MUScaleTuning-like +0x68 -> MUScaleStretching` e' vincolato; resta aperta la semantica musicale completa dell'owner high-level.
- `017380d0` e' chiuso come offset aligner sul campo `+0x6c`; resta da nominare l'owner canonico del destination object.
- `+0x78` e `+0x80` sono ristretti a un cluster `scale_pitch_system_like_node` con setter/cache builder osservati; `+0x88` e' ristretto a store segmentato percussive-specific con builder/consumer osservati, ma non ha ancora nome musicale canonico.
- Questo ponte non sostituisce il detector audio primario: si colloca a valle della generazione/aggregazione dei payload LSS.

## Impatto Sul Clean-Room

Nessun codice nuovo.

Implementabile con confidence alta:

- costante gate `0.001f`
- pattern `abs(float_diff)` via mask `0x7fffffff`
- dominio scalar `cents offset rispetto ad A4/440`
- contratto di `01252960` come range iterator
- policy di `01774880` come collector di indici contigui per target pitch-index
- formula sampled mapper `FUN_000bea40` come lista di point `(x,y)` con lookup piecewise-linear
- payload flat/default `01777f70` come point `(1200,0)`, `(6900,0)`, `(10800,0)`
- payload standard `017780f0` come fixed 10-point stretch function
- binding action chiuso: `handleReset -> 01777f70`, `handleSetStandardFunction -> 017780f0`, `handleSetVerticalRange -> 01b43f40`
- owner edge `MUScaleTuning-like +0x68 -> MUScaleStretching`
- ruolo non-detector di `012f0b60`

Non implementabile ancora fedelmente:

- nome classe canonico finale e semantica musicale completa del pitch-table usato da `01774880`
- clone/split policy completa oltre il gate
- semantica dei tre branch di `01514120`
- semantica musicale distinta tra famiglia `+0x80` come `scalar-anchor + segment-store + query-cache` e store segmentato percussive `+0x88`
- riconciliazione finale tra metadata size, class label clean e owner concreto degli slot scale-pitch-system-like
- detector primario audio -> candidate payload

Next step corretto: confrontare la famiglia `+0x80` (`0124b580 / 0124ae30 / 0124ae40`) con la famiglia `+0x88` (`0111d0d0 / 018847d0 / 018847e0 / 0151a240`) per separarne la semantica, oppure seguire i consumer high-level del `MUScaleTuning-like +0x68` per capire quando lo stretching viene scelto o propagato.
