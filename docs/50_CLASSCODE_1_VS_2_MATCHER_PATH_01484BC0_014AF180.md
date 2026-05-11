# 50 — ClassCode `1` vs `2` Matcher Path `0x01484bc0 / 0x014af180`

**Ultimo aggiornamento:** 2026-05-11

## Obiettivo

Chiudere la differenza reale tra i due callsite `01484bc0 -> 014af180`:

- cosa cambia davvero tra `classCode = 2` e `classCode = 1`
- come va letto `MURawNoteSeparation + 0x40`
- che ruolo operativo hanno i bit `0x20` e `0x40` su `+0x3c`

---

## Conclusione Principale

I due callsite non sono varianti equivalenti dello stesso matcher.

- `classCode = 2` e' un ramo di propagazione: usa il match gia' trovato in `item + 0x40`, riallinea lo start e marca il peer con `0x20`.
- `classCode = 1` e' un ramo di materializzazione/compattazione: se il peer manca, ne crea uno nuovo con `014ba9e0`, lo inserisce in una lista ausiliaria e poi ripulisce i vicini non reclamati.

Quindi oggi la lettura piu' forte e':

- `MURawNoteSeparation + 0x40` = linked peer pointer
- `+0x3c & 0x1` = base class `1`
- `+0x3c & 0x2` = base class `2`
- `+0x3c |= 0x20` = peer selezionato dal ramo `class 2`
- `+0x3c |= 0x40` = peer selezionato o materializzato dal ramo `class 1`

---

## 1. ABI Reale Dei Due Callsite

Dal disassembly di `01484bc0`:

### Callsite `classCode = 2`

```asm
0x1488eb6  movsd 0x240d308, %xmm1
0x1488ebe  movl  $0x2, %ecx
0x1488ec3  movss %xmm0, -0x1b4(%rbp)
0x1488ecb  movsd -0x80(%rbp), %xmm2
0x1488ed0  callq 0x14af180
```

### Callsite `classCode = 1`

```asm
0x148905c  movsd 0x240d308, %xmm1
0x1489064  movl  $0x1, %ecx
0x1489069  movss -0x1b4(%rbp), %xmm0
0x1489071  movsd -0x80(%rbp), %xmm2
0x1489076  callq 0x14af180
```

Questa e' la prova forte che:

- il `threshold seed` float in `xmm0` e' lo stesso nei due rami
- il `windowRadius` in `xmm1` e' `0.07` in entrambi i rami
- il `globalEnd` in `xmm2` e' lo stesso nei due rami
- la divergenza semantica e' guidata davvero da `ecx = 1/2` e dal post-processing a valle

---

## 2. Ramo `classCode = 2`: Propagazione Del Peer Esistente

Dopo `FUN_014af180(2, ...)`, `01484bc0` scorre gli item e per quelli con `flags == 2` e `item->+0x40 != 0` esegue:

```c
item->start = linked->start;
linked->flags |= 0x20;
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2261).

Nel disassembly:

```asm
0x1488f83 movq 0x40(%rcx), %rax
0x1488f90 movsd 0x10(%rax), %xmm0
0x1488f95 movsd %xmm0, 0x10(%rcx)
0x1488f9a orb   $0x20, 0x3c(%rax)
```

Quindi il ramo `2`:

- non costruisce nuovi carrier
- non inserisce nulla nella lista ausiliaria
- usa `+0x40` come peer gia' risolto
- marca il peer come "selezionato dal ramo class2"

---

## 3. Ramo `classCode = 1`: Match Su Peer Esistente

Se un item con `flags == 1` ha gia' `item->+0x40 != 0`, il ramo fa:

```c
item->start = linked->start;
linked->flags |= 0x40;
index = FUN_00d237a0(auxList, linked);
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2428).

Nel disassembly:

```asm
0x1489147 movsd 0x10(%rbx), %xmm0
0x148914c movsd %xmm0, 0x10(%rax)
0x1489151 orb   $0x40, 0x3c(%rbx)
0x148916c callq 0xd237a0
```

Quindi il ramo `1`, anche quando trova un peer esistente:

- usa ancora `+0x40` come peer link reale
- ma entra gia' in una logica di registrazione nella lista ausiliaria

---

## 4. Ramo `classCode = 1`: Fallback Con Peer Sintetico

Se `item->+0x40 == 0`, `01484bc0`:

1. scorre una lista ausiliaria ordinata finche' `candidate.start > item.start`
2. costruisce un nuovo `MURawNoteSeparation`
3. lo inserisce in lista all'indice trovato
4. lo scrive in `item->+0x40`

Il decompilato mostra:

```c
local_138 = (double)local_58[2];
...
uVar48 = FUN_014ba9e0(local_138);
...
FUN_00d23370(uVar48,uVar51 & 0xffffffff);
...
local_58[8] = uVar48;
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2322) e [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2411).

Il disassembly chiude il tipo del builder:

```asm
0x1489360 movsd -0x130(%rbp), %xmm0
0x1489368 movss 0x2390124, %xmm1
0x1489370 movl  $0x40, %esi
0x1489375 callq 0x14ba9e0
```

Quindi il peer sintetico viene creato con:

- `start = current.start`
- `base strength = 1.0f`
- `flags = 0x40`

Questa e' la prova forte che il ramo `class 1` non e' solo matching:

- puo' materializzare un peer artificiale ma strutturale

Il list target di find/insert non e' locale allo stack:

- e' `MUElementAnalyzer + 0xd0`, ora fissato in [51_AUXILIARY_PEER_LIST_SLOT_SELF_0XD0_01484BC0_014AB140.md](51_AUXILIARY_PEER_LIST_SLOT_SELF_0XD0_01484BC0_014AB140.md)

---

## 5. Cleanup Locale Dei Peer Non Reclamati

Dopo aver trovato o creato il peer, il ramo `class 1` scorre in avanti la lista ausiliaria.

Finche' `candidate.start <= current.end`, rimuove i candidati con:

```c
(candidate->flags & 0x70) == 0
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2475).

Questa e' la lettura operativa piu' prudente:

- il ramo `class 1` compatta i peer vicini interni all'intervallo corrente
- lascia vivere i peer gia' marcati da stati `0x10 / 0x20 / 0x40`

Implementazione clean-room chiusa:

- `apply_class2_selected_peer_postprocess(current)` replica il ramo class `2`
  chiuso: copia `selected_match->start` in `current.start` e marca il peer con
  `0x20`
- `apply_class2_selected_peer_postprocess_sequence(items)` replica il loop
  post-match del ramo class `2` su `std::span`: processa solo item con
  `flags == 2` e peer linkato
- `run_class2_threshold_seeded_pipeline(...)` replica l'ordine chiuso del
  ramo class `2`: matcher `014af180(classCode=2)` seguito dal loop
  post-match di propagazione
- `apply_class1_existing_peer_postprocess(current)` replica solo il ramo class
  `1` con peer gia' esistente: copia `selected_match->start` in `current.start`
  e marca il peer con `0x40`
- `peer_cleanup_candidate_is_unclaimed(peer)` espone il predicato
  `(peer.flags & 0x70) == 0`
- `plan_class1_peer_postprocess(current, auxiliaryPeers)` espone il planner
  clean-room del ramo `class 1`: trova l'indice del peer esistente dentro la
  lista ausiliaria, oppure calcola l'indice ordinato del peer sintetico
  `0x40`; restituisce anche gli indici originali dei peer successivi da
  pulire con il predicato `flags & 0x70`
- l'overload con `first_search_index` modella il cursore `uVar51` osservato
  nel fallback sintetico: la scan ordinata puo' ripartire dall'indice
  precedente invece che da zero
- `plan_class1_peer_postprocess_sequence(...)` replica il loop esterno
  non mutante: mantiene il cursore `uVar51` tra gli item class `1` e si ferma
  quando un peer esistente non viene risolto nella lista ausiliaria, equivalente
  al branch `if ((int)uVar51 == -1) break`
- `plan_class1_threshold_seeded_pipeline(...)` replica il perimetro prudente
  del ramo class `1`: esegue `014af180(classCode=1)` per materializzare
  `+0x40`, poi produce il piano post-match con cursore `uVar51`; non applica
  retain/release, insert o remove `GNList`

Restano fuori retain/release e mutazione fisica dei nodi `GNList`; il planner
usa solo `std::span` e indici.

---

## 6. Relazione Con Il Modello Interval/Gate

`014a3900` mostra che le classi base `1` e `2` vengono trattate come coppia complementare con test di gap asimmetrici:

- se il vicino effettivo e' `class 2` e l'item corrente e' `class 1`, usa una soglia dedicata
- se il vicino effettivo e' `class 1` e l'item corrente e' `class 2`, usa un'altra soglia

in [014a3900.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014a3900.c#L161).

Questo rafforza il modello:

- `1` e `2` non sono flag arbitrari
- sono due classi base distinte che entrano in pairing locale

---

## 7. Correzione Di Field Map

Per `MURawNoteSeparation` il mapping operativo oggi piu' forte e':

| Offset | Ruolo | Confidence |
|--------|-------|------------|
| `+0x10` | start, riallineabile al peer matchato | Very High |
| `+0x18` | end interval | Very High |
| `+0x20` | base gate strength comune al matcher | Very High |
| `+0x2c` | ranking weight non-class1 | High |
| `+0x30` | ranking weight class1 | High |
| `+0x3c` | base class + state bits | Very High |
| `+0x40` | linked peer pointer | Very High |

E per i bit osservati:

| Bit | Ruolo operativo oggi piu' prudente | Confidence |
|-----|------------------------------------|------------|
| `0x1` | base class 1 | Very High |
| `0x2` | base class 2 | Very High |
| `0x20` | peer selezionato dal ramo class2 | High |
| `0x40` | peer selezionato/materializzato dal ramo class1 | High |

Nota di chiusura successiva: `0x40` e' anche builder-assigned nel fallback sintetico di `01484bc0`, con `+0x20 = 1.0f`. Il bit/valore `0x10` resta invece aperto: e' osservato come builder-assigned nello stesso corridoio mono, ma il suo ruolo musicale non e' ancora canonico.

---

## Impatto Sul Replication Effort

1. `014af180` da solo non basta: va replicato insieme al post-processing `01484bc0`.
2. Il ramo `class 1` richiede una clean-room spec separata per:
   - peer synthesis
   - ordered insertion
   - cleanup dei peer vicini
3. `MURawNoteSeparation + 0x40` va mantenuto come link strutturale, non derivabile al volo.
4. I bit `0x20 / 0x40` non vanno piu' confusi con le classi base `1 / 2`.
5. Il subset post-match non mutante e' ora implementato per propagation/claim
   flags, predicato cleanup e piano vector-backed di insert/cleanup; resta
   fuori la mutazione della lista ausiliaria `GNList`.

---

## Next Step

1. Chiudere il ruolo operativo di `0x10` nel ramo mono.
2. Trovare consumer successivi dei peer sintetici `0x40` oltre il cleanup locale di `01484bc0`.
3. Non fondere `0x20/0x40` con le classi base `1/2`: restano state bits post-match o peer materialization bits.
