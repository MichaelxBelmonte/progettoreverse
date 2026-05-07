# 52 — Working `GNList` Slot `MUElementAnalyzer + 0x158` `0x01484bc0`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Stringere il ruolo del sibling slot `this_ptr[0x2b]` dentro `MUElementAnalyzer`:

- se e' davvero distinto dal peer registry `+0xd0`
- se e' persistente o per-run
- come entra nel pipeline locale costruito da `01484bc0`

---

## Conclusione Principale

`MUElementAnalyzer + 0x158` (`this_ptr[0x2b]`) e' oggi fissato come working `GNList` slot per-run del pipeline analyzer locale.

Non coincide con `+0xd0`.

Il modello piu' prudente ma forte oggi e':

- `+0xd0` = peer registry persistente usato dal corridoio `014af180 / 014ab140`
- `+0x158` = working `GNList` inizializzata e riempita dentro `01484bc0`, poi consumata da piu' stage successivi della stessa run

La type identity del container non e' piu' aperta:

- `g_02572358` e' `GNList`, gia' chiusa in [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md)

Resta invece aperto il payload canonico contenuto in questa `GNList`.

---

## 1. Allocazione E Attach Al Self

All'inizio del ramo grande di `01484bc0` viene allocata una `GNList` nuova:

```c
puVar46 = FUN_00e8fc40();
*puVar46 = &g_02572358;
(*g_02572370)();
...
uVar47 = this_ptr[0x2b];
this_ptr[0x2b] = (uint64_t)puVar46;
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L490).

Questa e' la prova forte che:

- `self + 0x158` viene riassegnato all'inizio della run
- il suo contenuto e' un object `GNList`

---

## 2. Family Concreta Del Container

Il vtable pointer assegnato nello slot e':

- `g_02572358`

Questo non va piu' letto come "family container ignota".

La topologia `014f7360` ha gia' chiuso in modo forte che:

- `DAT_02572358 = GNList`

in [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md#L48).

Quindi oggi il naming corretto e':

- `MUElementAnalyzer + 0x158 = workingGNList`

con confidence `High`.

---

## 3. Catena Di Stage Che Lo Usa

Dopo l'attach al self, `01484bc0` passa ripetutamente questo slot come target/list wrapper a una catena di stage:

- `0149c330`
- `0149d5b0`
- `0149ded0`
- `0149e4a0`
- `0149ebe0`

Evidence diretta:

- [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L504)
- [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L519)
- [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L530)
- [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L542)
- [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L554)

Questa e' la lettura pratica:

- `+0x158` e' il main working list slot del front-end/segment pipeline locale

---

## 4. Reuse Piu' Tardi Nel Pipeline

Lo stesso slot viene riusato molto piu' avanti:

```c
uVar66 = this_ptr[0x2b];
...
FUN_014aa770(local_58,&local_3a0,4);
...
uVar66 = this_ptr[0x2b];
...
local_380 = uVar66;
...
FUN_014ab140(local_58,local_60,local_68,g_0240d308);
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L3687).

Quindi `+0x158`:

- non e' solo un container di bootstrap
- vive per piu' stage della stessa run analyzer

---

## 5. Reset Esplicito

Prima di questa fase tarda, `01484bc0` resetta lo slot:

```c
if (this_ptr[0x2b] != 0) {
  this_ptr[0x2b] = 0;
  FUN_00d50b20();
}
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L3665).

Questo e' importante:

- lo slot esiste nel self
- ma il suo contenuto viene trattato come working state per-run, non come cache persistente lunga quanto `+0xd0`

---

## 6. Distinzione Da `MUElementAnalyzer + 0xd0`

La distinzione oggi piu' forte tra i due slot e':

### `+0xd0`

- slot `GNList` persistente
- peer registry del corridoio `class 1 / class 2`
- usato da `014af180` e `014ab140`

### `+0x158`

- slot `GNList` di lavoro per-run
- popolato/reset in `01484bc0`
- usato dalla catena di stage `0149c330 ... 0149ebe0`, poi da `014aa770` e `014ab140`

Questa differenza riduce molto il rischio di confondere:

- peer registry persistente
- working list di stage

---

## 7. Consumer Downstream

`01b71450` fornisce un consumer utile del medesimo slot:

```c
if (this_ptr[0x2b] == 0) return;
...
lVar8 = this_ptr[0x2b];
```

in [01b71450.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01b71450.c#L72).

Da solo non basta a nominare il payload, ma rafforza due punti:

- `+0x158` e' uno slot analyzer reale, non solo stack plumbing di `01484bc0`
- il suo contenuto guida anche una fase successiva che dipende da contatori a `+0x17c / +0x184`

---

## 8. Cosa Non E' Ancora Chiuso

Non e' ancora rigoroso dire che `+0x158` contenga:

- `MURawNoteSeparation`
- `MUMatrixPathPoint`
- property points

Le funzioni che lo manipolano usano `GNList`, ma il payload resta ancora da chiudere.

Quindi il naming prudente corretto oggi e':

- `workingGNList`
- oppure `stageWorkingList`

non:

- `rawNoteList`
- `peerList`

---

## Impatto Sul Replication Effort

1. La clean-room non deve fondere `+0xd0` e `+0x158`.
2. Serve distinguere:
   - registry persistente dei peer
   - working list di stage della run analyzer
3. Il runtime model dell'analyzer ha ora almeno due `GNList` canoniche con ruoli diversi.

---

## Next Step

1. Stringere il payload reale che `+0x158` trasporta nella catena `0149c330 -> 0149ebe0`.
2. Chiudere il ruolo dei contatori a `+0x17c / +0x184` che `01b71450` usa insieme a `+0x158`.
3. Verificare se `014aa770` consuma `+0x158` come lista di segmenti, classi o bucket.

---

## Update

Il punto 1 qui sopra e' adesso chiuso per il corridoio principale:

- `+0x158` resta una `GNList`
- ma il payload osservato nella chain `0149c330 -> 0149ebe0 -> 014b3460 -> 014b3ce0` non e' flat
- e' una topologia annidata `GNList<GNList<MUPitchMatrixPeak>>`

Il ledger dettagliato e' in:

- [53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md](53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md)

Quindi il naming prudente corretto oggi per `self + 0x158` e':

- `workingPeakMatrixList`
- oppure `workingPitchPeakBuckets`

piu' che il generico `workingGNList`, almeno per le fasi che precedono il bridge `014b3ce0`.
