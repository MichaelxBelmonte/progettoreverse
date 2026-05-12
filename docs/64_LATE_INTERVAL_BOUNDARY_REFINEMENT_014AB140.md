# 64 — Late Interval Boundary Refinement `0x014ab140`

## Scope

`014ab140` e' una fase tarda richiamata da `01484bc0` dopo il matcher raw-note
e dopo il riuso delle due `GNList`:

- `MUElementAnalyzer + 0xd0`: registry peer persistente
- `MUElementAnalyzer + 0x158`: working list per-run

Il punto importante: `014ab140` consuma link `+0x40`, ma il target scritto non
va automaticamente identificato con `MURawNoteSeparation`. Nel corpo funzione
compaiono write double su `+0x20`, `+0x28` e lettura di un anchor a `+0x30`,
quindi il subset clean-room resta limitato ai calcoli scalari chiusi.

## Boundary Successivo

Per il prossimo item la funzione sceglie il boundary cosi':

1. Se `next + 0x40` esiste, usa il suo `+0x18`:

```c
lVar7 = *(int64_t *)(lVar14 + 0x40);
if (lVar7 != 0) {
  dVar21 = *(double *)(lVar7 + 0x18);
}
```

2. Se non esiste peer linkato, parte da `next + 0x10`.
3. Se il gap rispetto a `current + 0x18` e' almeno `0.01`, cerca il minimo nel
   buffer segnale tra i due sample index.
4. Il boundary finale diventa `bestSampleIndex / sampleRate`.

Costanti lette dal binario:

| Address | Valore | Ruolo |
|---------|--------|-------|
| `0x02391030` | `0.01` double | gap minimo prima della ricerca nel segnale |
| `0x02393944` | `1000.0f` | sentinel alto per la ricerca del minimo |

## Clamp Intervallo

Dopo la scelta del boundary:

- scrive il previous boundary sul carrier target a `+0x20`
- scrive il next boundary sul carrier target a `+0x28`
- forza `start >= previousBoundary`
- forza `end <= nextBoundary`
- se l'anchor a `+0x30` resta fuori dal range finale, chiama `014b3ce0`

Il bridge `014b3ce0` resta fuori dal codice attivo: dipende dalla working list
annidata `GNList<GNList<MUPitchMatrixPeak>>` e dal payload target non ancora
canonizzato.

## Implementazione Clean-Room

Implementato in `rawnotes/interval_boundary_refinement.*`:

- `choose_next_interval_boundary(...)`
  - usa `nextLinkedPeer->interval_end` quando il link esiste
  - altrimenti cerca il sample minimo nel gap se `gap >= 0.01`
- `refine_interval_range(...)`
  - applica clamp start/end
  - espone `anchor_outside_range` come condizione che nel binario porta al
    bridge `014b3ce0`

Non implementato:

- traversal/refcount `GNList`
- chiamata a `014af180` interna
- mutazione del carrier originale
- bridge `014b3ce0`
- nome canonico del target scritto da `014ab140`

## Impatto Sul Replication Effort

1. I peer sintetici/linkati non finiscono al cleanup: `+0x40` entra anche nella
   scelta dei boundary tardi.
2. Il minimo del segnale nel gap e' una regola reale, non un tuning inventato.
3. `014ab140` va tenuta separata dal carrier `MURawNoteSeparation` finche' il
   target scritto non e' canonizzato.

## Next Step

1. Canonizzare il target object scritto da `014ab140`.
2. Stringere il bridge `014b3ce0` come consumer del flag `anchor_outside_range`.
3. Verificare se il boundary `next + 0x40 -> +0x18` usa sempre
   `MURawNoteSeparation` o un subtype compatibile.
