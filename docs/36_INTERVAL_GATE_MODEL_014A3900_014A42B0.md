# 36 — Interval Gate Model `0x014a3900 / 0x014a42b0`

**Ultimo aggiornamento:** 2026-05-07

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

Nel loop centrale la funzione calcola il gap libero attorno a un item usando:

- `current->+0x10`
- `current->+0x18`
- il `+0x18` del vicino precedente
- il `+0x10` del vicino successivo

Schema osservato:

```c
leftGap  = current->end   - previous->end_or_default;
rightGap = next->start_or_default - current->start;
gap = min(leftGap, rightGap);
```

Questo uso e' incompatibile con score o flag e molto coerente con:

- `+0x10` = interval start
- `+0x18` = interval end

Confidence qui e' alta.

---

## 2. `+0x20` E' Un Base Gate Weight

Sempre in `014a42b0`, dopo avere calcolato il gap locale, la funzione costruisce uno score di selezione `fVar22` partendo da `item + 0x20`.

Due casi osservati:

1. gap grande abbastanza:

```c
score = item->field_20;
if (flags == 8) score *= extraScale;
```

2. gap piu' stretto:

```c
score = pow(gap * const, exponent) * item->field_20;
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

## 4. `+0x2c` Resta Un Campo Forte Ma Non Ancora Nominabile

Qui la situazione va tenuta rigorosa.

Abbiamo un uso forte direttamente sul corridoio giusto:

1. in `014a3900`:
   - `+0x2c` moltiplica il costo `(1 - score)^2 * field_20`
   - quindi si comporta come fattore di scala/evidenza nel merge

La lettura corretta oggi e':

- `+0x2c` e' un forte scalar secondario di relevance/scale
- entra nell'arbitration cost downstream
- il naming finale preciso resta aperto

Non e' prudente ridurlo gia' a "time", "pitch", "distance" o "energy" puro.

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

Perimetro implementato: solo il kernel ad alta confidence `state = (state + samplePair) * 0.5` e `peak = max(peak, state)` con write su `RawNoteSeparation +0x34/+0x38`. Il writer completo `014a3550` resta fuori dal codice per i campi `+0x2c/+0x30`.

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

Perimetro implementato: solo i pezzi chiusi con confidence alta, cioe' test class-gap tra coppie adiacenti `1/2`, controllo del terzo vicino, costo di pair-arbitration `(1.0 - field_28)^2 * field_20 * field_2c`, merge max dei campi float chiusi, OR del bitfield e predicato peak-gate di `014a42b0`. Restano fuori ranking gap completo, mutazioni di lista e scoring finale di selezione.

---

## 7. Working Field Map Aggiornato

| Offset | Ruolo operativo | Confidence | Evidenza |
|--------|-----------------|------------|----------|
| `+0x10` | interval start (double) | High | `014a42b0` calcola gap verso il vicino successivo |
| `+0x18` | interval end (double) | High | `014a42b0` calcola gap verso il vicino precedente |
| `+0x20` | base gate weight / base priority | High | `014a42b0` costruisce lo score di selezione partendo da questo campo |
| `+0x28` | score-like scalar con optimum `1.0` | High | `014a3900` usa `(1.0 - field_28)^2`; doc 22 lo lega al claim path |
| `+0x2c` | secondary relevance/scale scalar | Medium | `014a3550` lo scrive, `014a3900` lo usa come fattore moltiplicativo |
| `+0x30` | writer-populated auxiliary scalar | Low-Medium | `014a3550` lo scrive; ruolo finale ancora da stringere senza analogie con `014f7360` |
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
3. Questo chiarisce meglio come il DSP score prodotto a monte venga poi trasformato in candidati selezionabili downstream.

---

## Next Step

1. Stringere il significato preciso di `+0x20` ai callsite di `014ba9e0`.
2. Rifinire il significato finale del flag `8` ora che e' confermato come builder-assigned flag value.
3. Nominare le due lane input di `014a3550` senza confonderle con soglie statiche.
