# 37 — MURawNoteSeparation Family `0x014ba950 / 0x014ba9e0 / 0x014a3550`

**Ultimo aggiornamento:** 2026-04-22

## Obiettivo

Canonizzare la famiglia reale che sta dietro al modello interval/gate osservato in `014a3900` e `014a42b0`.

---

## Conclusione Principale

Il carrier interval/gate non e' `DAT_025f1488`.

E' una classe distinta da `0x48` byte, con stringa:

- `MURawNoteSeparation`

Le prove forti sono:

1. `014ba9e0` alloca `0x48` byte, inizializza una vtable propria e scrive subito:
   - `+0x10` = start
   - `+0x18` = end iniziale uguale allo start
   - `+0x20` = scalar base
   - `+0x3c` = class/state flag-set
2. `014ba950` e' un copier della stessa famiglia e clona `+0x10..+0x40`
3. `014baaf0` registra la classe con stringa `"MURawNoteSeparation"`
4. `014a3550` popola poi i campi downstream `+0x28 / +0x2c / +0x30 / +0x34 / +0x38`

---

## 1. Costruttore Reale `014ba9e0`

Dal disassembly CLI:

```asm
alloc 0x48
movsd %xmm0, 0x10(%rbx)
movsd %xmm0, 0x18(%rbx)
movss %xmm1, 0x20(%rbx)
movl  %r14d, 0x3c(%rbx)
```

Quindi il layout minimo provato e':

| Offset | Ruolo | Confidence |
|--------|-------|------------|
| `+0x10` | interval start | Very High |
| `+0x18` | interval end iniziale | Very High |
| `+0x20` | base strength / gate weight scalar | High |
| `+0x3c` | class/state flag-set | Very High |

---

## 2. Copy Helper `014ba950`

`014ba950` alloca di nuovo `0x48` byte e copia:

- `+0x10..+0x1f`
- `+0x20..+0x2f`
- `+0x30`
- `+0x34`
- `+0x38`
- `+0x3c`
- `+0x40`

Questa e' la prova forte che il carrier reale del corridoio e' un object compatto dedicato, non un blocco di campi sparsi interpretati per analogia.

---

## 3. Writer Metrico `014a3550`

`014a3550` lavora su una lista di questi object e materializza i campi numerici downstream.

Il writer osservato e' coerente con:

| Offset | Ruolo operativo oggi piu' prudente | Confidence |
|--------|------------------------------------|------------|
| `+0x28` | score-like scalar locale | High |
| `+0x2c` | non-class1 ranking weight nel matcher `014af180` | Medium-High |
| `+0x30` | class1 ranking weight nel matcher `014af180` | High |
| `+0x34` | paired local smoothed peak gate A | High |
| `+0x38` | paired local smoothed peak gate B | High |
| `+0x40` | selected match / linked peer pointer materializzato da `014af180` | Very High |

I consumer `014a3900` e `014a42b0` restano coerenti con questa field map.

### `+0x34 / +0x38`: origine dal writer

`014a3550` non scrive `+0x34/+0x38` come soglie statiche e non produce una coppia lower/upper.

Il writer costruisce una state vector a due lane sui due buffer input, con coefficiente diretto `0.5f` letto a `g_023945d0..0x23945d4`, e mantiene un peak accumulator locale:

```c
state = (state + samplePair) * 0.5f;
peak = max(peak, state);
```

Il write finale e':

- `+0x34 = peak lane 0`
- `+0x38 = peak lane 1`

`014a42b0` li usa poi in OR:

```c
param_3 < item->field_34 || param_3 < item->field_38
```

`014a3900` propaga il massimo per entrambi i campi durante i merge normali. Quindi il naming operativo corretto e' "paired local smoothed peak gates"; il significato musicale esatto delle due lane resta legato ai due buffer input di `014a3550` e non va ancora nominato come energy/pitch/tonality senza evidenza aggiuntiva.

Il kernel clean-room e' aperto in `rawnotes/paired_peak_gate.*`. Non implementa ancora il writer completo `014a3550`, perche' i campi `+0x2c/+0x30` restano sotto confidence piu' bassa del gate operativo.

Il subset clean-room dei consumer `014a3900 / 014a42b0` e' aperto in `rawnotes/interval_gate.*`: test class-gap `1/2`, controllo del terzo vicino, costo pair-arbitration, merge max/OR dei campi chiusi e predicato peak-gate. Il ranking gap completo e le mutazioni della lista restano fuori perimetro.

---

## 4. Flag Values Osservati

I callsite osservati fissano almeno cinque valori reali su `+0x3c`:

- `1`
- `2`
- `8`
- `0x10`
- `0x40`

### `014a2170`

Nel disassembly di `014a2170` il registro passato a `esi` prima della call a `014ba9e0` viene caricato da `-0x74(%rbp)`.

Lo stesso local viene scritto esplicitamente con:

- `movl $0x1, -0x74(%rbp)`
- `movl $0x2, -0x74(%rbp)`

Quindi i valori `1` e `2` sono builder-assigned e non introdotti dai consumer.

### `014afb20`

Nel callsite a `0x14b0721` compare:

```asm
movl $0x8, %esi
callq 0x14ba9e0
```

Questa e' la prova forte che anche il valore `8` nasce nel builder come flag dedicato.

### `01484bc0`

Nel ramo mono largo compaiono due callsite aggiuntivi:

```asm
movss 0x2390124, %xmm1
movl  $0x10, %esi
callq 0x14ba9e0
```

e

```asm
movss 0x2390124, %xmm1
movl  $0x40, %esi
callq 0x14ba9e0
```

con `0x2390124 = 1.0f`.

Quindi:

- `0x10` e `0x40` sono anch'essi builder-assigned
- `+0x3c` non va piu' letto come enum stretto
- e' un flag-set / class-state mask con piu' valori osservati

Correzione importante dal confronto `01484bc0 -> 014af180`:

- `0x1` e `0x2` sono ormai fortemente vincolati come classi base del matcher
- `0x20` viene scritto post-match sul peer selezionato dal ramo `class 2`
- `0x40` viene sia builder-assigned sia scritto post-match sul peer selezionato/materializzato dal ramo `class 1`

Il dettaglio operativo di questa distinzione e' ora fissato in [50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md](50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md).

---

## 5. Origine Builder-Side Di `+0x20`

La firma reale di `014ba9e0` e' ora chiusa dal disassembly:

```asm
movss %xmm1, -0x1c(%rbp)
movsd %xmm0, -0x28(%rbp)
movl  %esi, %r14d
...
movsd -0x28(%rbp), %xmm0
movsd %xmm0, 0x10(%rbx)
movsd %xmm0, 0x18(%rbx)
movss -0x1c(%rbp), %xmm0
movss %xmm0, 0x20(%rbx)
movl  %r14d, 0x3c(%rbx)
```

Contratto ABI canonico:

| Registro | Ruolo |
|----------|-------|
| `xmm0` | start time |
| `xmm1` | base strength / gate weight |
| `esi` | class/state flag-set |

### `014a2170`: classi `1` e `2`

`014a2170` alterna due sorgenti/branch e carica il flag locale con:

```asm
movl $0x1, -0x74(%rbp)
movl $0x2, -0x74(%rbp)
```

Poi rileva transizioni `prev > 0 && current <= 0` su un buffer float gia' preparato/smussato, richiede una durata minima legata a `param_3 * sampleRate-like`, calcola il massimo locale della run e lo confronta con `g_0239424c`.

Il callsite finale e':

```asm
movss -0xc8(%rbp), %xmm1
movl  -0x74(%rbp), %esi
callq 0x14ba9e0
```

Quindi per i candidate `1/2`:

- `+0x20` nasce dal massimo locale della run positiva
- `+0x3c` nasce dal branch sorgente (`1` o `2`)
- lo start e' ricavato da posizione campione convertita in tempo, oppure riallineato su item esistente quando il ramo trova overlap gia' presente

### `014afb20`: classe `8`

`014afb20` prima rimuove dalla lista gli item gia' marcati `field_3c == 8`, poi costruisce una maschera positiva da `param_3`, elimina run troppo corte usando una finestra derivata da `g_02390108 * sampleRate-like`, e passa a una pipeline di contrasto locale.

Il callsite chiave e':

```asm
subss %xmm0, %xmm1
ucomiss g_02391090, %xmm1
jbe skip
...
movl $0x8, %esi
callq 0x14ba9e0
```

Tra il gate e la call non viene ricaricato `xmm1`, quindi per i candidate `8` la sorgente di `+0x20` e' il contrasto locale `max - min/floor` gia' confrontato con `g_02391090`.

### `01484bc0`: peer sintetici `0x40`

Il ramo `class 1` di `01484bc0` puo' materializzare un peer sintetico:

```asm
movsd -0x130(%rbp), %xmm0
movss 0x2390124, %xmm1
movl  $0x40, %esi
callq 0x14ba9e0
```

con `0x2390124 = 1.0f`.

Quindi i peer sintetici `0x40` nascono con:

- `start = current.start`
- `+0x20 = 1.0f`
- `+0x3c = 0x40`

Impatto: `+0x20` non e' un placeholder generico. E' un valore reale prodotto dal builder: massimo locale per `1/2`, contrasto locale per `8`, costante `1.0f` per peer sintetici `0x40`.

---

## 6. Costanti Builder Lette Dal Binario

Le costanti principali del corridoio `014a2170 / 014afb20` sono ora lette direttamente da `binaries/MikeCore`, usando la sezione `__TEXT,__const` con base virtuale `0x0238fcc0`.

| Simbolo | Tipo | Valore | Uso osservato |
|---------|------|--------|---------------|
| `g_0239424c` | `float` | `0.0f` | gate minimo del massimo locale in `014a2170` |
| `g_02391090` | `float` | `0.100000001f` | gate contrasto `max - min/floor` in `014afb20` |
| `g_02390108` | `double` | `0.05` | finestra run/mask in campioni: `0.05 * sampleRate-like` |
| `g_0240e400` | `double` | `0.0227` | finestra derivata per buffer contrasto in `014afb20` |
| `g_0240f0f0` | `double` | `441.0` | divisore di normalizzazione per finestre smoothing |
| `g_02390140` | `uint32 mask` | `0x7fffffff` | mask `abs(float)` nel moving contrast |
| `g_02394254` | `float` | `0.00999999978f` | scala del moving contrast dopo `abs(sum)` |
| `g_023945d0..0x23945d4` | `float[2]` | `0.5f, 0.5f` | coefficiente della state vector writer `+0x34/+0x38` in `014a3550` |
| `g_02390d2c` | `float` | `4.0f` | threshold/sentinel iniziale nel path contrasto |
| `g_0240e280..0x240e28c` | `float[4]` | `4.0f, 4.0f, 4.0f, 4.0f` | vector threshold/sentinel usato nel path contrasto |
| `g_023908d8` | `float` | `5.0f` | fattore smoothing: `5 * (sampleRate-like / 441)` |
| `g_0241fd58` | `float` | `30.0f` | fattore smoothing: `30 * (sampleRate-like / 441)` |
| `g_02394274` | `float` | `1.17549435e-38f` | guardia `FLT_MIN` in `015c1480 / 015c0b60` |
| `0x0241106c` | `float` | `-2.5f` | numeratore di `expf(-2.5f / width)` in `015c1480` |
| `0x02411070` | `double` | `-2.5` | numeratore inverso di `-2.5 / logf(alpha)` in `015c0b60` |
| `g_0240e30c` | `float` | `-1000.0f` | sentinel basso per max-search |
| `g_02394264` | `float` | `10000.0f` | sentinel alto/floor nel contrast path |
| `0x02390124` | `float` | `1.0f` | strength del peer sintetico `0x40` in `01484bc0` |

Impatto: le soglie non sono piu' "simboliche non lette". Il kernel `015c1480` e' ora ristretto a smoother esponenziale; resta da trascrivere con cautela l'ordine esatto degli edge-pass se serve bit identity.

---

## 7. Pipeline Classe `8` In `014afb20`

Il flusso high-level della classe `8` e' ora piu' stretto:

1. Rimuove dalla lista esistente tutti gli item con `field_3c == 8`.
2. Costruisce una mask positiva da `param_3[i] > 0`.
3. Cancella run troppo corte usando `window = int(0.05 * sampleRate-like)`.
4. Corregge/azzera zone della mask intorno a item esistenti con linked peer, per evitare candidate interne gia' reclamate:
   - il gate e' sul successore: `nextItem + 0x40 != 0`
   - la zona protetta usa l'item corrente: `start = +0x10`, `end = +0x18`, `protectedUntil = +0x28`
   - `begin = endIndex - min(int(0.05 * sampleRate-like), floor((endIndex - startIndex) / 3))`
   - `end = int(protectedUntil * sampleRate-like)`
   - la mask viene azzerata su `[begin, end)` se `begin < end`
5. Calcola il primo differenziale del buffer input: `delta[i] = input[i] - input[i - 1]`, con `delta[0] = 0`.
6. Calcola un moving contrast centrato usando `contrast = abs(sum(delta over 0.0227 * sampleRate-like window)) * 0.01`.
7. Clampa il contrasto a `4.0f`.
8. Applica una smoothing breve tramite `015c1480` con width `5.0 * (sampleRate-like / 441.0)`, quindi `alpha = expf(-2.5f / width)`.
9. Copia il risultato e applica una smoothing lunga tramite `015c1480` con width `30.0 * (sampleRate-like / 441.0)`.
10. Sulla curva lunga cerca segmenti delimitati da cambio di derivata negativo -> positivo, cioe' valley / turn point.
11. Nel segmento corrispondente cerca su curva breve/clamped:
    - massimo locale non negativo
    - minimo locale con sentinel iniziale `10000.0f`
12. Accetta il candidate solo se:
    - la mask e' ancora attiva sull'indice del massimo
    - `max - min > 0.100000001f`
13. Crea `MURawNoteSeparation` con:
    - `start = maxIndex * (1 / sampleRate-like)`
    - `+0x20 = max - min`
    - `+0x3c = 8`

Il kernel interno di `015c1480` non e' piu' una scatola nera: e' chiuso come smoother esponenziale forward/reverse su core `015c0b60`, con mode `0` e `bzero` del prefisso scratch nel callsite classe `8`. Il dettaglio completo e' in [60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md](60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md).

Implementazione clean-room aperta:

- `core_reconstruction/include/mikecore/rawnotes/raw_note_class8_builder.hpp`
- `core_reconstruction/src/rawnotes/raw_note_class8_builder.cpp`

Perimetro implementato: mask positiva, filtro run corte, helper di costruzione dei range protetti da item con successore linked, delta, moving contrast, clamp, smoothing breve/lunga e materializzazione dei candidate `field_3c == 8`.

Guardrail: il builder espone il mapping osservato come `Class8LinkedItemSpan`, ma il nome canonico della famiglia owner che fornisce `+0x10/+0x18/+0x28/+0x40` resta prudente. Lo smoother mode `0` di `015c0b60` e' implementato per il path classe `8`, ma non sono implementati gli altri mode dello smoother.

---

## 8. Impatto Sui Doc Precedenti

Correzione strutturale:

- `DAT_025f1488` va tenuta sotto `MUSpectralTimeSlice`
- il modello interval/gate di [36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md](36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md) va letto come modello di `MURawNoteSeparation`
- il payload locale di `014f7360` e' invece canonizzato sotto `MUMatrixPathPoint`

---

## Impatto Sul Replication Effort

1. Il layer separation/range downstream ha finalmente una classe concreta.
2. I valori `1/2/8/0x10/0x40` non vanno piu' trattati come artefatti del consumer.
3. I builder `014a2170` e `014afb20` diventano i punti giusti per ricostruire i criteri di materializzazione delle note/raw segments.
4. Il matcher [49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md](49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md) chiude anche il ruolo reale di `+0x2c`, `+0x30` e `+0x40`.

---

## Next Step

1. Nominare le due lane input di `014a3550` che alimentano i peak gates `+0x34/+0x38`.
2. Stringere il ruolo esatto del valore `0x10` nel ramo mono di `01484bc0`.
3. Chiudere il nome canonico della famiglia owner che alimenta `Class8LinkedItemSpan`.
