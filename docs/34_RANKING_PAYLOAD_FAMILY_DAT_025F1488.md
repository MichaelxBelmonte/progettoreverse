# 34 — Correction On `DAT_025f1488`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Chiudere in modo esplicito una convergenza sbagliata che stava inquinando il replication path:

- `DAT_025f1488` non e' la famiglia score/ranking
- `DAT_025f1488` e' la vtable di `MUSpectralTimeSlice`

---

## Conclusione Principale

L'ipotesi precedente e' da considerare superata.

Le prove nuove sono forti:

1. `011aa9e0` e' classificata come `MUSpectralTimeSlice`, contiene la stringa `"MUSpectralTimeSlice"` e scrive `*this = &DAT_025f1488`
2. nello stesso costruttore compare size `0x58`, coerente con il layout slice gia' fissato in [20_SPECTRAL_SLICE_FIELD_MAP.md](20_SPECTRAL_SLICE_FIELD_MAP.md)
3. i path `013903d0`, `013593a0`, `0138f140`, `013e1740`, `014f4330`, `014b0a60` allocano quell'oggetto e lo usano subito con `015c4d90`, `015c6b60`, `015c66c0`, `015c6ba0`, cioe' helper/getter del corridoio `MUSpectralTimeSlice`

Quindi:

- `DAT_025f1488` = `MUSpectralTimeSlice` vtable/token di classe
- non = famiglia claim/ranking

---

## Cosa Viene Corretto

La parte interval/gate osservata in:

- `014a3900`
- `014a42b0`

non va piu' re-homata sotto `DAT_025f1488`.

E' ora meglio attribuita alla famiglia:

- `MURawNoteSeparation`

documentata in [37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md](37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md).

---

## Cosa Viene Chiuso A Valle

Il payload locale di `014f7360` non e' piu' `open`.

Quello che oggi e' rigoroso dire e':

- `014f7360` usa davvero un carrier con campi `+0x28 / +0x2c / +0x30 / +0x34 / +0x38`
- quel carrier non va identificato con `DAT_025f1488`
- il carrier corretto e' `MUMatrixPathPoint`

Doc di riferimento:

- [38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md](38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md)

---

## Impatto Sul Replication Effort

1. I builder analyzer/shaper che allocano `DAT_025f1488` vanno letti come builder di `MUSpectralTimeSlice`, non come builder di item score.
2. La field map interval/gate resta utile, ma va spostata sulla famiglia giusta.
3. Il corridoio `014f7360` si separa ora in modo pulito su `MUMatrixPathPoint`, evitando di sporcare sia `MUSpectralTimeSlice` sia `MURawNoteSeparation`.

---

## Next Step

1. Tenere `MUSpectralTimeSlice` separata da ogni carrier item/range downstream.
2. Usare `014ba9e0 / 014ba950 / 014a3550` come base reale della famiglia interval/gate.
3. Usare `0116d770 / 014f7360 / 014f6fc0` come base reale della famiglia `MUMatrixPathPoint`.
