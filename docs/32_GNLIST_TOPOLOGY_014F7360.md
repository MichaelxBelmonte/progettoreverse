# 32 — GNList Topology `0x014f7360`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Separare la topologia dei contenitori creati da `014f7360` dalla famiglia reale degli slot `MUAudioSourcePropertyPoint`.

Fino a qui il cluster era letto correttamente come:

- 5 nodi fissi
- 1 subgroup count-sized

ma restava ambigua la natura dei 5 nodi fissi.

---

## Conclusione Principale

I 5 nodi fissi creati all'inizio di `014f7360` non sono property point e non sono item musicali.

Sono contenitori della famiglia:

- `GNList`

La prova forte e' duplice:

1. `014f7360` alloca oggetti da `0x20` byte e assegna sempre `DAT_02572358`
2. `0078dab0` registra `GNList` con size `0x20`

Quindi la topologia reale di `014f7360` e':

1. 5 contenitori `GNList` fissi
2. 1 collezione count-sized di contenitori `GNList` usati come bucket per-slot
3. dentro quei bucket il ranking locale lavora su payload `MUMatrixPathPoint`
4. la shortlist/winner logic usa i campi `yValue / relevanceQuality / bestNeighbourQuality`
5. sopra questo livello viene poi materializzato il candidate adapter `0x168`

Correzione importante rispetto allo stato precedente:

- la topologia `GNList` resta giusta
- il payload confrontato in `014f7360` non converge su `MUAudioSourcePropertyPoint`
- non va piu' neppure identificato con `DAT_025f1488`, oggi confermata `MUSpectralTimeSlice`
- la sua identita' di classe e' ora chiusa su `MUMatrixPathPoint`

---

## 1. Identita' Di `DAT_02572358`

### Evidenza da `014f7360`

Ogni nodo iniziale viene costruito cosi':

```asm
alloc 0x20
call 0x00d4ff40
mov  DAT_02572358 -> object.vtable
call *DAT_02572370
```

### Evidenza da metadata builder

Nel registrar `0078dab0` compare:

```c
DAT_026cd460 = "GNList";
_DAT_026cd468 = 0x20;
```

### Evidenza da vtable memory

```asm
memory read 0x2572358
0x02572358: 0x00d25350 0x00d25360 0x00d21060 0x00d500e0
```

Lettura pratica:

- `DAT_02572358` e' una vtable/metadata family di `GNList`
- `014f7360` parte quindi da container list, non da payload domain-specific

---

## 2. Mappa Dei 5 Contenitori Fissi

Usero' i nomi locali del decompilato per evitare naming troppo aggressivo.

| Local | Ruolo osservato | Confidence |
|-------|------------------|------------|
| `puVar15` | final output list, restituita a fine funzione | Very High |
| `puVar16` | active work list, governa il loop esterno e la condizione di stop | High |
| `puVar17` | shortlist / conflict-resolution list derivata dall'active set | Medium-High |
| `puVar18` | next-pass staging list, usata prima della nuova iterazione | Medium |
| `puVar19` | slot bucket list, contiene il subgroup count-sized indicizzato da `sourceItem + 0x28` | Very High |

---

## 3. Evidenza Per Ogni Ruolo

### `puVar15` -> final output list

A fine funzione:

```c
*unaff_RDI = puVar15;
*(undefined1 *)(unaff_RDI + 1) = 1;
```

Quindi:

- `puVar15` e' il vero output object di `014f7360`

### `puVar19` -> slot bucket list

E' il contenitore che viene indicizzato direttamente con il `slotIndex` ricavato da `sourceItem + 0x28`:

```c
lVar23 = *(longlong *)(puVar19[2] + (longlong)*(int *)(local_40 + 5) * 8);
```

e piu' avanti anche con offset `-1 / +1` attorno allo stesso indice.

Questa e' la prova piu' forte che:

- il subgroup count-sized vive sotto `puVar19`
- ogni entry del subgroup e' un bucket/list per uno slot discreto

### `puVar16` -> active work list

Il loop esterno termina quando `puVar16` diventa vuota:

```c
do {
  ...
} while (*(int *)((longlong)puVar16 + 0xc) != 0);
```

e piu' volte la funzione itera su:

```c
*(longlong *)(puVar16[2] + lVar21 * 8)
```

Quindi:

- `puVar16` non e' solo un cache container
- e' la work list che guida ogni passata

### `puVar17` -> shortlist / conflict-resolution list

Subito prima del merge finale la funzione chiama `00d242c0`.

Questa helper non riduce la lista:

- ordina in place con `qsort_r`
- usa un comparator wrapper (`00d24200`) che nel corridoio osservato dispatcha a `0x14f9df0`
- `0x14f9df0` ordina in modo decrescente su `MUMatrixPathPoint + 0x34` (`bestNeighbourQuality`)
- il key finale resta caller-supplied

La riduzione numerica avviene solo dopo il sort.

Subito prima di usarla la funzione calcola una cardinalita' ridotta:

```c
uVar25 = *(uint *)((longlong)puVar17 + 0xc);
uVar14 = ((uVar25 + 3) >> 2) * 3;
if ((int)uVar25 < 10) uVar14 = uVar25;
```

Poi itera su `puVar17` per risolvere conflitti via `014f6fc0`.

Lettura pratica:

- `puVar17` viene prima ordinata
- per `count < 10` il codice usa tutta la lista
- per `count >= 10` usa solo la prefix `floor(count / 4) * 3`
- quindi la merge phase opera su una shortlist ordinata e poi troncata

Doc di dettaglio:

- [39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md](39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md)

### `puVar18` -> next-pass staging list

A fine di ogni passata:

```c
local_c0 = puVar18;
FUN_00d214d0();
```

e subito dopo il loop riparte finche' `puVar16` non si svuota.

Lettura pratica:

- `puVar18` e' molto probabilmente il container di staging che alimenta la passata successiva

---

## 4. I Tre Helper Locali Del Corridoio

### `014f6db0`

Costruisce un wrapper ref a partire da una service object interna e da un input item:

```asm
call 0x116cb00
...
call 0x14f6d10
```

Ruolo operativo oggi:

- helper di bridge `MUMatrixPathPoint -> singleton MUMatrixPath`

### `014f6e40`

Riceve una list wrapper e un segno in `edx`:

- se `edx > 0` prende il primo elemento
- se `edx <= 0` prende l'ultimo elemento

Quindi:

- e' un edge selector su `GNList`
- viene usato nel cuore di `014f7360` per guardare i vicini `-1 / +1` dei bucket slot

### `014f6fc0`

Viene chiamata nel loop finale di shortlist su `puVar17`, ma il suo ruolo e' piu' stretto di un generico conflict resolver.

La decompilazione mostra che:

- legge l'edge index di una lista tramite `014f6f40`
- confronta quell'indice con il primo elemento della lista opposta a `+0x28`
- accetta solo il caso di adiacenza `edge == otherFirst - 1` oppure `otherFirst == edge + 1`
- in caso positivo concatena gli elementi della lista opposta in ordine forward o reverse
- prima di appendere ogni elemento scrive `element + 0x18 = unaff_RDI`

Ruolo operativo aggiornato:

- adjacency merge helper tra candidate-list vicine
- non semplice overlap resolver astratto

---

## 5. Stato Byte Dei Contenitori GNList

Nel loop centrale compaiono tre byte-stato sui nodi di `puVar16`:

- `+0xc`
- `+0xd`
- `+0xe`

Lettura prudente oggi:

| Offset | Ruolo candidato | Evidenza | Confidence |
|--------|------------------|----------|------------|
| `+0xc` | terminal/no-winner marker | viene settato a `0` quando non emerge un winner locale | Medium |
| `+0xd` | current-pass winner/active marker | viene azzerato a inizio passata e settato a `1` sul nodo vincente | High |
| `+0xe` | suppressed/resolved-out marker | viene settato a `1` dopo `014f6fc0` quando un conflitto elimina un candidate | High |

Questi offset appartengono ai container `GNList`, non ai property point.

---

## 6. Topologia Runtime Aggiornata

La pipeline osservabile adesso e':

1. `descriptor + 0x88` definisce il numero di slot
2. `014f7360` costruisce:
   - 5 `GNList` fisse
   - `count` `GNList` bucket sotto `puVar19`
3. i source item vengono smistati in bucket via `sourceItem + 0x28`
4. i bucket vengono attraversati con selector locali e ranking su payload float/range
5. il ranking locale usa:
   - `MUMatrixPathPoint::xPosIndex`
   - `MUMatrixPathPoint::yValue`
   - `MUMatrixPathPoint::relevanceQuality`
   - `MUMatrixPathPoint::bestNeighbourQuality`
6. prima del merge finale la shortlist viene ordinata in modo decrescente su `bestNeighbourQuality`
7. `014f6fc0` fonde poi liste adiacenti, non solo conflittuali
8. la famiglia `MUAudioSourcePropertyPoint` entra in builder separati downstream/paralleli
9. `014ef210 / 014ef060 / 014f38a0` materializzano sopra questo livello il candidate adapter `0x168`

Questa separazione riduce molto il rischio di leggere come "item finale" un oggetto che e' ancora solo un container GNList.

Doc collegati:

- [33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md](33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md)
- [34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md](34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md)
- [38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md](38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md)

---

## Impatto Sul Replication Effort

1. Il builder `014f7360` va replicato in almeno tre strati:
   - topology layer di `GNList`
   - `MUMatrixPathPoint` payload layer
   - candidate/property layer downstream
2. Forzare il ranking locale direttamente sulla famiglia `MUAudioSourcePropertyPoint` porterebbe a un modello sbagliato di `+0x2c`.
3. La cardinalita' `descriptor + 0x88` non va usata per allocare payload finali direttamente, ma prima i bucket container per-slot.
4. I prossimi target manuali non sono piu' i 5 nodi fissi in astratto, ma:
   - la policy esatta di `puVar17`
   - il significato di `+0xc/+0xd/+0xe`
   - la provenienza reale di `MUMatrixPathPoint::object`

---

## Next Step

1. Chiudere il tipo nominale dell'upstream source-item dietro `MUMatrixPathPoint::object`.
2. Seguire la traduzione `MUMatrixPath / MUMatrixPathPoint -> candidate adapter 0x168`.
3. Verificare se il getter a `+0x3c` emerso vicino al comparator appartiene davvero al payload shortlist o a un carrier adiacente.
