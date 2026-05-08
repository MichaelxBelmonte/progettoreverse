# 36 — Interval Gate Model `0x014a3900 / 0x014a42b0`

**Ultimo aggiornamento:** 2026-05-08

## Obiettivo

Ridurre i due consumer interval/gate a una lettura utile per la replica:

- quali campi sono davvero bounds temporali
- quali campi si comportano come score/weight
- quali campi entrano nei gate downstream

---

## Conclusione Principale

I due helper non trattano il payload come un semplice vettore di score astratti.

Lo trattano come un item interval-like con:

- bounds temporali in double a `+0x10 / +0x18`
- uno scalar score-like a `+0x28`
- uno o piu' weight/gate scalar a `+0x20`, `+0x2c`, `+0x30`
- una coppia di threshold downstream a `+0x34 / +0x38`
- flags di classe/stato a `+0x3c`

Correzione importante:

- il carrier osservato qui non va piu' attribuito a `DAT_025f1488`
- il ledger aggiornato lo re-home sulla famiglia `MURawNoteSeparation`
- `014a3900` continua a confrontare `+0x28` contro la costante `1.0f`

---

## 1. `+0x10 / +0x18` Sono Bounds Temporali

La prova forte arriva da `014a42b0`.

Nel loop di ranking di `014a42b0` la funzione calcola uno span locale attorno
a un item usando:

- `current->+0x10`
- `current->+0x18`
- il `+0x10` del vicino precedente, o fallback `-0.699999988079071`
- il `+0x18` del vicino successivo, o fallback destro passato in `xmm7`

Schema osservato:

```c
leftSpan  = current->end - previous->start_or_leftFallback;
rightSpan = next->end_or_rightFallback - current->start;
span = min(leftSpan, rightSpan);
```

Nota di correzione: una lettura precedente descriveva questo passaggio come
`previous.end / next.start`. Il disassembly dei due blocchi di ranking
`014a4bd2..014a4c15` e `014a4ee4..014a4f26` mostra invece letture dirette da
`previous + 0x10` e `next + 0x18` in questo path. Questo non cambia la field map
dei bounds, ma cambia il nome corretto del calcolo: non e' un semplice "free
gap", e' lo span di ranking effettivamente usato dal gate.

Questo uso e' incompatibile con score o flag e resta coerente con:

- `+0x10` = interval start
- `+0x18` = interval end

Confidence qui e' alta.

---

## 2. `+0x20` E' Un Base Gate Weight

Sempre in `014a42b0`, dopo avere calcolato il gap locale, la funzione costruisce uno score di selezione `fVar22` partendo da `item + 0x20`.

Costanti chiuse dal binario:

- `g_023908ec = 10.0f`
- `g_02394288 = 0.30000001192092896f`
- `g_02390124 = 1.0f`
- `g_0238fee8 = 1.0`
- `g_0240e3d8 = -0.699999988079071`
- `g_0240e3e0 = 1.4285714626312256`

L'esponente di selezione e':

```c
exponent = min(powf(10.0f * minimumScoreThreshold, 0.30000001192092896f), 1.0f);
```

Due casi osservati:

1. gap grande abbastanza:

```c
score = item->field_20;
if (flags == 8) score *= extraScale;
```

2. gap piu' stretto:

```c
score = pow(span * 1.4285714626312256, exponent) * item->field_20;
if (flags == 8) score *= extraScale;
```

Quindi:

- `+0x20` non si comporta come bound geometrico
- e' un peso base / priorita' base usata nel gate di selezione

---

## 3. `+0x28` E' Uno Score-Like Scalar Con Target `1.0`

`014a3900` arbitra due candidati adiacenti usando una formula del tipo:

```c
costA = (1.0f - itemA->field_28)^2 * itemA->field_20 * itemA->field_2c;
costB = (1.0f - itemB->field_28)^2 * itemB->field_20 * itemB->field_2c;
```

e sceglie il candidato con costo minore.

Cross-check sulle costanti:

- `_DAT_023b5570 = 1.0f`
- `_UNK_023b5574 = 1.0f`

Questa e' una prova forte che:

- `+0x28` vive in uno spazio score-like o confidence-like con optimum vicino a `1.0`
- il campo e' compatibile con lo score/claim gia' documentato nel claim path

Questo riallinea bene `014a3900` con:

- `013924d0`, che scrive `+0x28`
- `014f4330`, che propaga `+0x28`
- `014e9f00`, che accumula `+0x28`

---

## 4. `+0x2c / +0x30` Sono Ranking Scalars Specifici

Aggiornamento `2026-05-08`: il writer `014a3550` e il matcher `014af180`
chiudono il ruolo operativo dei due campi senza richiedere un nome musicale dei
buffer input.

`014a3550` scrive:

```text
+0x2c = average(future non-class1 lane) -
        min(+0x28, average(previous non-class1 lane))

+0x30 = average(future class1 lane) -
        average(previous class1 lane)
```

`014af180` poi usa:

- `+0x30` per il path `classCode == 1`
- `+0x2c` per i path non-class1

`014a3900` usa `+0x2c` nel costo:

```c
cost = (1.0f - field_28)^2 * field_20 * field_2c;
```

Quindi `+0x2c` e `+0x30` sono ranking/selection weights class-specific. Il
nome musicale finale delle due lane input resta aperto.

---

## 5. `+0x34 / +0x38` Sono Paired Local Peak Gates

Correzione del `2026-04-22`: la lettura precedente "min su `+0x34`, max su `+0x38`" era troppo larga e non regge al confronto diretto con il writer `014a3550`.

`014a3550` genera entrambi i campi come massimi locali di una curva ricorsiva a due lane:

- state update osservato: `state = (state + samplePair) * 0.5`
- peak accumulator inizializzato a `0.0`
- write finale:
  - `+0x34 = peak lane 0`
  - `+0x38 = peak lane 1`

`014a3900` durante il merge propaga il massimo per entrambi i campi nel caso float normale. Quindi non sono lower/upper bounds.

`014a42b0` li usa poi in un gate reale:

```c
if ((flags & 0x33) != 0 &&
    param_2 < item->field_20 &&
    (param_3 < item->field_34 || param_3 < item->field_38)) {
    append(...)
}
```

Questo rende il modello piu' forte:

- `+0x34 / +0x38` non sono score indipendenti scollegati
- si comportano come due peak-gate locali usati in OR nel filtro downstream
- il significato musicale delle due lane resta legato ai due buffer input di `014a3550`, ancora da nominare in modo canonico

Il naming finale esatto resta aperto, ma la semantica "paired local peak gates" e' ora piu' forte della vecchia lettura "threshold/bounds".

Implementazione clean-room aperta:

- `core_reconstruction/include/mikecore/rawnotes/paired_peak_gate.hpp`
- `core_reconstruction/src/rawnotes/paired_peak_gate.cpp`

Perimetro implementato: kernel `state = (state + samplePair) * 0.5`,
warmup sulla finestra precedente e peak sulla finestra successiva, con write su
`RawNoteSeparation +0x34/+0x38`. Il subset numerico completo del writer e' ora
in `rawnotes/paired_peak_gate.*`; traversal `GNList` e refcount restano fuori.

---

## 6. `+0x3c` E' Un Class/State Bitfield

Questo punto e' ormai chiuso:

- `014a3900` fa OR bitwise tra `flags`
- `014a42b0` filtra con `flags & 0x33`
- il valore `8` attiva un ramo speciale con weight addizionale

Quindi:

- `+0x3c` e' davvero un bitfield di classe/stato
- il flag `8` rappresenta una classe speciale trattata diversamente nel gate

Implementazione clean-room aperta:

- `core_reconstruction/include/mikecore/rawnotes/interval_gate.hpp`
- `core_reconstruction/src/rawnotes/interval_gate.cpp`

Perimetro implementato: solo i pezzi chiusi con confidence alta, cioe' test class-gap tra coppie adiacenti `1/2`, controllo del terzo vicino, costo di pair-arbitration `(1.0 - field_28)^2 * field_20 * field_2c`, merge max dei campi float chiusi, OR del bitfield, predicato peak-gate di `014a42b0`, helper scalari del ranking gap e planner one-pass su liste gia' ordinate:

```c
span = min(current.end - previous.start_or_leftFallback,
           next.end_or_rightFallback - current.start);
score = gapWeight(span) * field_20 * optionalClass8Scale;
insertable = span > classSpecificMinGap;
```

Il planner clean-room `choose_raw_note_gap_candidate()` replica il blocco di
selezione osservato senza ownership:

- calcola l'indice di inserimento come prima posizione con `selected.start >= candidate.start`
- inizializza `bestScore` a `param_1`
- accetta solo score strettamente maggiori di `bestScore` e `param_1`
- ricalcola boundary e `insertable` per il candidato scelto

Restano fuori la mutazione `GNList`, il refcount/ownership e il loop completo di
selezione/inserimento di `014a42b0`.

---

## 7. Working Field Map Aggiornato

| Offset | Ruolo operativo | Confidence | Evidenza |
|--------|-----------------|------------|----------|
| `+0x10` | interval start (double) | High | `014a42b0` usa `current.start` e `previous.start` nel ranking span |
| `+0x18` | interval end (double) | High | `014a42b0` usa `current.end` e `next.end` nel ranking span |
| `+0x20` | base gate weight / base priority | High | `014a42b0` costruisce lo score di selezione partendo da questo campo |
| `+0x28` | score-like scalar con optimum `1.0` | High | `014a3900` usa `(1.0 - field_28)^2`; doc 22 lo lega al claim path |
| `+0x2c` | non-class1 ranking weight | High | `014a3550` lo scrive; `014a3900` lo usa come fattore moltiplicativo; `014af180` lo usa nei path non-class1 |
| `+0x30` | class1 ranking weight | High | `014a3550` lo scrive; `014af180` lo usa per `classCode == 1` |
| `+0x34` | paired local smoothed peak gate A | High | max writer in `014a3550`, max merge in `014a3900`, OR gate in `014a42b0` |
| `+0x38` | paired local smoothed peak gate B | High | max writer in `014a3550`, max merge in `014a3900`, OR gate in `014a42b0` |
| `+0x3c` | class/state bitfield | High | OR bitwise, mask `0x33`, special value `8` |

---

## Impatto Sul Replication Effort

1. Il corridoio `014a3900 / 014a42b0` ha una semantica interval/gate reale e oggi converge su `MURawNoteSeparation`.
2. La replica del downstream deve preservare:
   - interval start/end
   - base gate weight
   - score-like scalar a target `1.0`
   - paired local peak gates `+0x34/+0x38`
   - ranking span e score gap-weighted di `014a42b0`
3. Questo chiarisce meglio come il DSP score prodotto a monte venga poi trasformato in candidati selezionabili downstream.

---

## Next Step

1. Ricostruire il loop completo `GNList` di `014a42b0` solo quando ownership e
   ordine di inserimento saranno chiusi.
2. Stringere il significato preciso di `+0x20` ai callsite di `014ba9e0`.
3. Rifinire il significato finale del flag `8` ora che e' confermato come builder-assigned flag value.
4. Nominare le due lane input di `014a3550` senza confonderle con soglie statiche.
