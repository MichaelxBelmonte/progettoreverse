# 51 — Auxiliary Peer List Slot `MUElementAnalyzer + 0xd0` `0x01484bc0 / 0x014ab140`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Chiudere il ruolo del campo `this_ptr[0x1a]` dentro `MUElementAnalyzer`:

- se e' davvero la lista ausiliaria del ramo `class 1`
- se e' transient locale o slot persistente dell'analyzer
- come si collega a `014af180`, `01484bc0` e `014ab140`

---

## Conclusione Principale

`MUElementAnalyzer + 0xd0` (`this_ptr[0x1a]`) e' oggi fissato come slot collection persistente dell'analyzer, usato come registry dei peer nel corridoio raw-note locale.

Le prove forti sono:

1. i costruttori `002773c0` e `011410f0` lo zeroano e poi gli assegnano una `GNList` (`g_02572358`)
2. `01484bc0` lo carica in `local_f8`, poi lo usa come `lVar63`
3. lo stesso `lVar63` viene passato come lista secondaria nei due callsite `014af180(classCode = 2/1)`
4. il ramo `class 1` lo usa come target di:
   - `FUN_00d237a0` per trovare l'indice del peer
   - `FUN_00d23370` per inserire il peer sintetico
5. piu' avanti `01484bc0` passa di nuovo `this_ptr[0x1a]` a `014ab140`

Quindi `self + 0xd0` non e' uno scratch temporaneo:

- e' il registry persistente dei peer/anchor locali usato in piu' fasi del pipeline analyzer

---

## 1. Slot Reale Nel Self

Dato che `this_ptr` viene usato come array di `uint64_t`, il campo:

- `this_ptr[0x1a]`

corrisponde a:

- `MUElementAnalyzer + 0xd0`

`01484bc0` lo carica esplicitamente:

```c
uVar66 = this_ptr[0x1a];
...
local_f8._0_8_ = uVar66;
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L1909).

Poco dopo:

```c
lVar63 = local_f8._0_8_;
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2104).

Questa e' la prova locale che la lista ausiliaria usata dal matcher non nasce sullo stack:

- arriva dal self

---

## 2. Inizializzazione Da Costruttore

### `002773c0`

Il costruttore zeroa e poi alloca `this_ptr[0x1a]` come `GNList`:

```c
this_ptr[0x1a] = 0;
...
*puVar3 = &g_02572358;
...
this_ptr[0x1a] = puVar3;
```

in [002773c0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/002773c0.c#L71).

### `011410f0`

Lo stesso pattern si ripete:

```c
this_ptr[0x1a] = 0;
...
*puVar3 = &g_02572358;
...
this_ptr[0x1a] = puVar3;
```

in [011410f0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/011410f0.c#L67).

Quindi `+0xd0` e' uno slot container strutturale dell'istanza analyzer, non una scoperta ad hoc di `01484bc0`.

---

## 3. Uso Diretto Nei Due Matcher `014af180`

Dentro `01484bc0`, dopo aver caricato `lVar63 = self + 0xd0`, lo stesso slot viene inoltrato nei due callsite matcher:

### Ramo `classCode = 2`

```c
local_320 = sourceList;
local_318 = 0;
local_310 = lVar63;
local_308 = 0;
FUN_014af180(2, ...);
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2231).

### Ramo `classCode = 1`

```c
local_300 = sourceList;
local_2f8 = 0;
local_2f0 = lVar63;
local_2e8 = 0;
FUN_014af180(1, ...);
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2285).

Questa e' la prova forte che `self + 0xd0` e' la lista secondaria condivisa dei due matcher.

---

## 4. Target Reale Di Find/Insert Del Peer Sintetico

Nel ramo `class 1`, dopo il match:

- se il peer esiste gia', il codice usa `FUN_00d237a0` per trovarne l'indice nella lista
- se manca, crea un peer `0x40` con `014ba9e0` e lo inserisce con `FUN_00d23370`

Il list target di queste operazioni e' proprio il `lVar63` derivato da `self + 0xd0`.

Evidence:

- find index in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2434)
- insert synthetic peer in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2411)
- reuse later of the same container in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L2473)

Quindi `+0xd0` e':

- l'ordered peer registry usato dal ramo `class 1`

---

## 5. Reuse Piu' Avanti In `014ab140`

Più avanti nello stesso `01484bc0`, il medesimo slot viene passato ancora:

```c
uVar51 = this_ptr[0x1a];
...
local_370 = uVar51;
FUN_014ab140(...);
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L3705).

Questo dato e' importante:

- il registry peer a `+0xd0` non serve solo al match iniziale
- viene riusato in una fase successiva del pipeline analyzer

---

## 6. Lettura Del Tipo

La type identity del container non e' piu' aperta:

- `g_02572358 = GNList`

gia' fissato in [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md#L48).

Quello che resta importante e':

- `+0xd0` non e' una `GNList` generica qualsiasi
- e' una `GNList` persistente con ruolo di peer registry nel corridoio raw-note locale

Quindi oggi il naming prudente corretto e':

- `MUElementAnalyzer + 0xd0 = auxiliaryPeerList`

con confidence `High`.

---

## Impatto Sul Replication Effort

1. Il ramo `class 1` di `01484bc0` non deve allocare una lista locale ad hoc:
   - deve operare su una registry persistente dell'analyzer.
2. Il peer synthesis `0x40` va modellato come insert ordinato in `self.auxiliaryPeerList`.
3. Le fasi successive del pipeline devono poter riusare la stessa lista, non una copia usa-e-getta.
4. Il field map del self si stringe:
   - `MUElementAnalyzer + 0xd0` = auxiliary peer list slot

---

## Next Step

1. Stringere il payload reale della sibling `GNList` a `+0x158`, ora fissata in [52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md](52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md).
2. Verificare se i peer `0x40` sintetici vengano consumati anche fuori dal corridoio `01484bc0 -> 014ab140`.
