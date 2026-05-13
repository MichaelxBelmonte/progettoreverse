# 22 — Item Score Field Ledger

**Ultimo aggiornamento:** 2026-05-13

## Obiettivo

Fissare con evidenza incrociata la famiglia di item che riceve lo score da `0x013924d0` e distinguere questa famiglia dagli altri item/list node con offset simili ma semantica diversa.

---

## Fatti Verificati

### 1. `item + 0x28` e' un float continuo scritto da piu' path reali

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c):

- azzera `item + 0x28`
- poi scrive il punteggio finale in `item + 0x28`

In [01356870.c](../reconstructed/clean/MUAudioSourcePrincipalItem/01356870.c):

- dopo `015c6b60`, `015c66c0`, `015c6ba0`, `014eecb0`, `014eed60`
- inizializza `item + 0x28 = 0.1f`

In [014f4330.c](../reconstructed/clean/Unknown/014f4330.c):

- dopo la stessa coppia helper `014eecb0` / `014eed60`
- scrive `item + 0x28 = fVar32`

Conclusione operativa:

- `+0x28` non e' un pointer
- `+0x28` non e' un flag
- `+0x28` e' uno scalar score/activation/claim-like

### 2. `item + 0x28` viene letto a valle come peso aggregabile

In [014e9f00.c](../reconstructed/clean/MUAudioSourceItem/014e9f00.c):

- somma ripetutamente `child + 0x28`
- confronta le somme parziali
- sposta il punto di split finche' i due lati si bilanciano

Questa funzione tratta `+0x28` come un peso continuo da accumulare e bilanciare, non come una semplice soglia booleana.

### 3. `item + 0x10` e `item + 0x20` sono campi lazy

In [0138f140.c](../reconstructed/clean/MUElementAnalyzer/0138f140.c):

- se `item + 0x20` e' `NaN`, chiama `014eecb0`
- se `item + 0x10` e' `NaN`, chiama `014eed60`

Quindi il pattern reale e':

1. item creato/recuperato
2. pitch gia' presente a `+0x14`
3. descriptor derivati a `+0x10` / `+0x20` materializzati solo se mancanti
4. score finale scritto a `+0x28`

### 4. `0x013924d0` usa direttamente il pitch, non `+0x10/+0x20`

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c):

- `+0x10` e `+0x20` vengono solo validati/materializzati via lazy init
- il calcolo armonico del kernel usa direttamente `item + 0x14`
- lo score finale viene scritto a `item + 0x28`

Questo restringe il ruolo di `+0x10/+0x20`: sono descriptor/cache per-item, non l'input principale del kernel di scoring.

### 5. Esiste un altro item type con offset simili ma semantica diversa

In [014b3460.c](../reconstructed/clean/MUElementAnalyzer/014b3460.c):

- `+0x20` viene usato come flag/used bit
- `+0x28` e `+0x30` vengono usati come link pointer bidirezionali

Questa non e' la stessa famiglia di item usata da `013924d0`.

Correzione importante:

- non bisogna fondere il "claim-score item" con il "matching/link item"
- offset uguali non implicano stesso tipo logico

### 6. La classe concreta non e' ancora canonica

Correzione importante:

- `g_025f1488` non e' il token della claim-score item family
- `011aa9e0` conferma che `DAT_025f1488` e' la vtable di `MUSpectralTimeSlice`

Quindi i path [013903d0.c](../reconstructed/clean/MUElementAnalyzer/013903d0.c), [0138f140.c](../reconstructed/clean/MUElementAnalyzer/0138f140.c) e [014f4330.c](../reconstructed/clean/Unknown/014f4330.c) stanno allocando slice spettrali scratch, non stanno nominando la famiglia item finale.

Oggi e' ancora corretto parlare solo di:

- `claim-score item family`

finche' la catena `alloc -> append -> consumer` dell'item vero non sara' chiusa in modo indipendente da `MUSpectralTimeSlice`.

### 7. `item + 0x58` partecipa davvero al calcolo

In [014eccd0.c](../reconstructed/clean/MUAudioSourceItem/014eccd0.c):

- nel ramo completo usa `sqrt((item + 0x20) * (item + 0x58)) * (item + 0x10)^2`
- nel ramo ridotto usa anche `item + 0x58 * (item + 0x10)^2`
- poi applica uno smoother `0.3/0.7` con running maximum sul range

In [014902f0.c](../reconstructed/clean/MUSpectrumShaper/014902f0.c):

- scala un punteggio intermedio con `item + 0x58`
- durante merge/propagazione prende il massimo dei `+0x58` figli

Quindi `+0x58` non e' un semplice metadata passivo. E' un weight secondario usato davvero nel path numerico.

Doc di dettaglio:

- [68_SOURCE_ITEM_SCORE_ENVELOPE_014ECCD0.md](68_SOURCE_ITEM_SCORE_ENVELOPE_014ECCD0.md)

### 8. `item + 0x28` vive in un dominio score-like coerente con `1.0`

In `014a3900`, durante l'arbitration di candidati adiacenti, compare:

```c
cost = (1.0f - item->field_28)^2 * item->field_20 * item->field_2c;
```

Cross-check:

- `_DAT_023b5570 = 1.0f`
- `_UNK_023b5574 = 1.0f`

Questo rafforza una lettura gia' implicita ma non ancora esplicitata:

- `+0x28` non e' solo "qualcosa di continuo"
- vive in uno spazio score/claim-like con optimum vicino a `1.0`

Doc di dettaglio:

- [36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md](36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md)

---

## Working Field Map

| Offset | Ruolo operativo | Confidence | Evidenza |
|--------|-----------------|------------|----------|
| `+0x10` | descriptor armonico derivato | Medium | lazy init via `014eed60` |
| `+0x14` | pitch assoluto in cents-like | High | usato come `8.175799 * 2^(pitch/1200)` |
| `+0x20` | base frequency / spacing Hz-like | High | lazy init via `014eecb0`, clamp positivo |
| `+0x24` | local overlap / residual evidence | Medium | scritto via `014b71e0`, confrontato via `ucomiss`, floor a `FLT_MIN` in `014eecb0` |
| `+0x28` | claim / activation / relevance score | High | scritto da `013924d0`, letto da `014e9f00`, usato in `014a3900` come score con target `1.0` |
| `+0x54` | running ordinal / item index | Medium | scritto in `014f4330` |
| `+0x58` | secondary energy / quality weight | Medium | scritto in `014f4330`, moltiplicato in `014eccd0`, propagato via `max` in `014902f0` |

---

## Cose Da Non Dire Ancora

Non e' ancora rigoroso affermare che:

- `+0x28` sia il naming finale "energy claim"
- `+0x10` sia sicuramente "activation quality"
- `+0x24` sia gia' nominabile con precisione finale oltre "local overlap / residual evidence"
- `+0x58` sia "confidence" invece di threshold/quality floor
- `+0x58` sia gia' nominabile come ampiezza pura invece di weight ibrido energia/qualita'

Le prove attuali fissano il comportamento, non ancora il naming definitivo.

---

## Impatto Sul Replication Effort

1. La pipeline reale `slice -> helper lazy -> kernel -> item[+0x28] -> consumer` e' ora molto piu' stretta.
2. Il campo da replicare prima di tutto e' `item + 0x28`, perche' viene gia' consumato come peso continuo downstream.
3. Il layout dati va tenuto separato dai list node di matching per evitare false equivalenze durante la clean-room reconstruction.

---

## Next Step

1. Tipizzare ancora meglio `+0x24` al callsite di `014eecb0`.
2. Cercare reader piu' specifici di `item + 0x58` per capire se il weight e' piu' vicino a energia, qualita' o activation ceiling.
3. Collegare questa famiglia item al nome di classe reale solo quando la catena `alloc -> append -> consumer` sara' completamente chiusa.
