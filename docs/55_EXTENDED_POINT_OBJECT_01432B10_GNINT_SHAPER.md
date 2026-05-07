# 55. Extended Point Object `01432b10`: `GNInt` And `MUSpectrumShaper`

## Executive Summary

`01432b10` non va piu' tenuta nello stesso bucket semantico di `MUPosValue`.

La chiusura prudente corretta oggi e':

- alloca un object da `0x28` byte
- scrive tre double a `+0x10/+0x18/+0x20`
- il primo e' position/index-like
- il secondo e' value/amplitude-like
- il terzo non e' un asse geometrico puro ma uno scalar di gating/prominence/weight

Il pattern d'uso converge bene da due lati:

- `014f0c40` (`GNInt`) lo usa come carrier di estremi locali da confrontare e potare
- `014902f0` (`MUSpectrumShaper`) lo usa come marker locale derivato dal best bin trovato

Lo scope osservato dei callsite diretti e' oggi molto stretto:

- `GNInt`
- `MUSpectrumShaper`

Non sono emersi altri caller diretti nel corpus clean locale.

Quello che non e' ancora corretto fare:

- dargli un class name canonico
- fonderlo con `MUPosValue`
- fonderlo con `MUPitchMatrixPeak`

---

## 1. Prova Bassa: Builder A Tre Double

Dal cluster assembly gia' fissato in [54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md](54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md):

- `01432b10` alloca `0x28` byte
- scrive tre double a:
  - `+0x10`
  - `+0x18`
  - `+0x20`

Quindi il contratto minimo chiuso oggi e':

```text
extendedPoint3Candidate
+0x10  position / index-like
+0x18  value / amplitude-like
+0x20  gating / prominence / weight-like scalar
```

Confidence:

- `+0x10`: alta
- `+0x18`: alta
- `+0x20`: media-alta

---

## 2. `GNInt` (`014f0c40`): Lista Di Estremi Locali

Il corridoio piu' pulito e' in [014f0c40.c](../reconstructed/clean/GNInt/014f0c40.c).

### A. Costruzione

Nel passaggio sui sample/bins locali:

```c
FUN_01432b10((double)(int)uVar45 + g_023942d0,(double)fVar60);
```

questa call viene emessa sia sul ramo di minimo locale sia sul ramo di massimo locale.

Quindi:

- `uVar45 + bias` converge su posizione / indice discreto
- `fVar60` converge su valore locale misurato nel punto

### B. Uso downstream di `+0x10`

Piu' avanti lo stesso payload viene consumato come posizione intera:

```c
iVar44 = (int)*(double *)(local_60 + 0x10);
iVar31 = (int)*(double *)(lVar54 + 0x10);
```

Quindi `+0x10` non e' un metadata astratto: e' l'asse discreto usato per finestre, gap e merge locale.

### C. Uso downstream di `+0x18`

Lo stesso carrier viene confrontato anche per il secondo double:

```c
if (*(double *)(local_60 + 0x18) < *(double *)(local_a8 + 0x18) || ...)
```

Quindi `+0x18` e' il valore ordinabile del punto, coerente con:

- ampiezza locale
- altezza locale
- valore candidato usato per tie-break

### D. Uso downstream di `+0x20`

Il terzo double e' il pezzo importante:

```c
if (g_02390448 < *(double *)(local_60 + 0x20)) ...
if ((*(double *)(local_60 + 0x20) <= 0.0) || (*(double *)(local_a8 + 0x20) <= 0.0)) ...
```

Questo restringe molto la semantica:

- non e' un semplice terzo asse cartesiano
- entra in gate booleani e threshold numerici
- separa punti accettabili da punti da potare

Il nome prudente corretto oggi e':

- `gatingScalar`
- oppure `prominenceScalar`

non:

- `z`
- `timeEnd`
- `index2`

---

## 3. `MUSpectrumShaper` (`014902f0`): Marker Locale Del Best Bin

Nel corridoio [014902f0.c](../reconstructed/clean/MUSpectrumShaper/014902f0.c) il builder compare su un best-bin locale:

```c
local_d8._0_8_ = (double)(int)local_100._0_4_ + g_023934c8;
FUN_01432b10((double)(int)local_100._0_4_ + g_023934c8,(double)(int)fVar67 + g_023934c8);
```

Qui il pattern converge bene su:

- `+0x10 = bin/index-like`
- `+0x18 = best local value`

Poi il decompilato mostra call ripetute apparentemente monche:

```c
FUN_01432b10(local_d8._0_8_);
```

Interpretazione prudente corretta:

- il decompiler ha perso argomenti XMM/stack
- non va promosso a vera signature a un solo parametro
- il cluster resta coerente con un builder a tre double

Queste call sono attivate quando il best candidato locale viene confrontato con soglie/maschere nel buffer shaper, quindi anche qui il terzo campo si comporta piu' da gate/weight che da coordinata pura.

---

## 4. Distinzione Da `MUPosValue` E `MUPitchMatrixPeak`

### Contro `MUPosValue`

`MUPosValue` e' gia' chiusa in [54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md](54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md):

- size `0x20`
- due double
- family registrata per nome

`01432b10` invece:

- size `0x28`
- tre double
- nessuna registration canonica chiusa
- uso downstream centrato su `+0x20` come gate

Quindi non e' solo una variante minore di `MUPosValue`.

### Contro `MUPitchMatrixPeak`

Il peak reale del lattice e' gia' chiuso altrove:

- `0149c330` alloca `g_025e4538`
- `g_025e4538` e' `MUPitchMatrixPeak`

Quindi `01432b10` non e':

- il peak interno dell'analyzer
- il nodo della working list `self + 0x158`

---

## 5. Modello Canonico Corrente

Il modello utile per il clean-room effort oggi e':

```text
MUPosValue
  small utility point
  position + value

extendedPoint3Candidate
  local extrema / marker carrier
  position + value + gating/prominence scalar

MUPitchMatrixPeak
  internal analyzer lattice node
  row/pitch/quality/adjacency bookkeeping
```

Questa distinzione evita di mescolare:

- export utility objects
- carrier locali per peak/extrema
- nodi interni del lattice analyzer

In piu' restringe il perimetro:

- `01432b10` oggi appartiene a corridoi locali di analisi/selezione
- non a un builder generico onnipresente del core

---

## 6. Impatto Sul Replication Effort

Per la replica questo sposta il modello in modo utile:

1. `014328b0` va implementato come utility point semplice.
2. `01432b10` va implementato come carrier intermedio con terzo campo numerico di gate/prominence.
3. Il lattice vero dell'analyzer continua a vivere in `MUPitchMatrixPeak`, non in questi helper.

In pratica:

- la pipeline locale non e' un solo family-type di “point”
- usa almeno tre livelli distinti di object leggeri

---

## 7. Next Step

1. Cercare la registration family concreta dell'object da `0x28`, se esiste come classe nominata.
2. Verificare se il terzo campo `+0x20` venga scritto come:
   - prominence
   - signedness-aware quality
   - residual/gap weight
3. Trovare un callsite dove il terzo argomento del builder non sia perso dal decompiler.
