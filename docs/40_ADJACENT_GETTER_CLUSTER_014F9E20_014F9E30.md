# 40 — Adjacent Getter Cluster `0x014f9e20 / 0x014f9e30`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Verificare se i due helper adiacenti al comparator `0x14f9df0` giustificano davvero un'estensione della field map di `MUMatrixPathPoint` oltre `+0x38`.

---

## Conclusione Principale

Al momento no.

Le prove raccolte chiudono questo perimetro:

1. `014f9e20` e' un getter byte su `+0x38`.
2. `014f9e30` e' un getter float su `+0x3c`.
3. Entrambi sono usati in `MUPercussivePitchSystem::014fdd70`.
4. In quel corridoio i receiver arrivano da liste/intermediari legati a `this + 0x60` e a `0152c0c0`, non dal builder `014f9d00`.
5. Quindi oggi non c'e' prova sufficiente per promuovere `+0x3c` a campo canonico di `MUMatrixPathPoint`.

Lettura operativa corretta:

- `MUMatrixPathPoint` resta chiuso in modo rigoroso su `+0x10 .. +0x38`
- il cluster `014f9e20 / 014f9e30` va tenuto separato come `adjacent carrier / getter cluster`

---

## 1. I Due Getter

Il disassembly diretto mostra:

```asm
0x14f9e20: movb   0x38(%rdi), %al
0x14f9e28: retq
```

e:

```asm
0x14f9e30: movss  0x3c(%rdi), %xmm0
0x14f9e3a: retq
```

Quindi i helper sono reali e leggono offset concreti:

- `014f9e20` -> byte a `+0x38`
- `014f9e30` -> float a `+0x3c`

---

## 2. Dove Sono Osservati

I callsite puliti osservati oggi stanno in:

- [014fdd70.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUPercussivePitchSystem/014fdd70.c)
- [014fa1c0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/Unknown/014fa1c0.c)

Nel ramo `MUPercussivePitchSystem`:

- `014f9e30` viene chiamata su un receiver preso da una lista ottenuta via `0152c0c0`
- `014f9e20` viene chiamata su elementi iterati da un'altra lista legata allo stesso corridoio

Il punto importante non e' solo che i getter esistono, ma che i receiver osservati non sono provati come `MUMatrixPathPoint`.

---

## 3. Perche' Non Basta Per Estendere `MUMatrixPathPoint`

Il payload shortlist `MUMatrixPathPoint` e' gia' chiuso con prove forti su:

- registrazione nominale `0116d770`
- builder diretto `014f9d00`
- uso locale in `014f7360`
- sort discendente su `+0x34` via `014f9df0`

Per `+0x3c`, invece, manca uno di questi ponti forti:

- nessuna registrazione nominale aggiuntiva in `0116d770`
- nessuna scrittura osservata in `014f9d00`
- nessun uso diretto provato dentro il corridoio stretto `014f7360`

Anzi, il segnale osservato oggi punta altrove:

- i getter compaiono in un cluster `MUPercussivePitchSystem`
- il loro owner nominale non emerge nei file indice correnti
- lo stesso pattern di object-wrapper e helper ricorre anche in corridoi generici `GNList/GNData`

Quindi forzare `+0x3c` dentro `MUMatrixPathPoint` oggi sarebbe overfitting.

---

## 4. Modello Prudente Aggiornato

Il modello corretto per il replication effort e':

1. `MUMatrixPathPoint`:
   - chiuso su `+0x10 .. +0x38`
2. `014f9df0`:
   - comparator reale della shortlist
   - sort key = `bestNeighbourQuality` (`+0x34`)
3. `014f9e20 / 014f9e30`:
   - getter cluster adiacente
   - owner nominale ancora `open`
   - non sufficiente per estendere la field map shortlist

---

## Impatto Sul Replication Effort

1. Il clean-room model di `MUMatrixPathPoint` non va esteso oltre `+0x38` finche' non emerge un writer o un registrar forte per `+0x3c`.
2. Il cluster `014f9e20 / 014f9e30` puo' essere modellato temporaneamente come interfaccia separata:
   - `getFlag38()`
   - `getScalar3c()`
3. Questo evita di fondere prematuramente il layer shortlist con corridoi percussive o carrier adiacenti.

---

## Next Step

1. Cercare il primo writer di `+0x3c` collegato a `014f9e30`.
2. Capire se `0152c0c0` restituisce una lista di carrier paralleli o un wrapper sopra `MUMatrixPathPoint`.
3. Tenere bloccata la field map shortlist finche' non emerge una prova strutturale forte.
