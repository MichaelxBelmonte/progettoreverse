# 68 - Source Item Score Envelope `0x014eccd0`

**Ultimo aggiornamento:** 2026-05-13

## Obiettivo

Isolare il subset numerico di `MUAudioSourceItem::014eccd0` che consuma i
campi della famiglia item collegata al claim/scoring path:

- `item + 0x10`
- `item + 0x20`
- `item + 0x58`

Questo documento non assegna ancora un nome definitivo a `+0x58`; fissa solo
come entra nel calcolo.

---

## Formula Istantanea

Il ramo completo usa:

```c
instant = sqrt((item + 0x20) * (item + 0x58)) * (item + 0x10)^2
```

Il ramo ridotto usa:

```c
instant = (item + 0x58) * (item + 0x10)^2
```

Comportamento osservato:

- se `item + 0x10` e' `NaN`, il contributo istantaneo diventa `0.0`
- nel ramo completo, se `item + 0x20` e' `NaN`, il contributo diventa `0.0`
- non c'e' clamp osservato su `item + 0x58`

Quindi `+0x58` resta un weight numerico secondario, non ancora una confidence
o una ampiezza nominabile in modo canonico.

---

## Envelope Smoothing

Dopo il contributo istantaneo, il codice applica:

```c
smoothed = instant * 0.30000001192092896f + previous * 0.7f;
envelope = max(envelope, smoothed);
```

Il valore restituito e' il running maximum dello smoother sul range visitato.

Questa lettura spiega perche' `+0x58` conta anche downstream: non e' solo
propagato, entra in una misura lisciata che enfatizza l'attivazione locale
senza far decrescere l'envelope all'interno del range.

---

## Implementazione Clean-Room

Il subset implementabile e' in:

- `core_reconstruction/include/mikecore/features/source_item_score.hpp`
- `core_reconstruction/src/features/source_item_score.cpp`

Funzioni esposte:

- `source_item_instant_score(...)`
- `source_item_score_envelope(...)`

Scelte intenzionali:

- traversal lista originale escluso
- retain/release esclusi
- traduzione caller-specific del range esclusa
- naming finale dei campi escluso

La replica riceve uno span di item gia' selezionati e calcola solo la parte
numerica chiusa.

---

## Impatto Sul Replication Effort

1. `+0x58` e' confermato come moltiplicatore numerico reale.
2. `+0x10` entra quadraticamente nel consumer `014eccd0`.
3. `+0x20` entra solo nel ramo completo tramite radice quadrata con `+0x58`.
4. Il consumer applica un envelope monotono, quindi il valore non e' una media
   semplice del range.

---

## Blocker Aperti

1. Naming finale di `+0x58`.
2. Origine precisa del mode bit che sceglie ramo completo vs ridotto.
3. Traduzione esatta degli argomenti caller in `start/end` sul list payload.
