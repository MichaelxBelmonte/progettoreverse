# MULSSGenerator Field Map And Mutators

## Obiettivo

Separare il grafo LSS generico dai due getter `012e6160 / 012e5ae0` e iniziare una field map prudente di `MULSSGenerator`.

Vincolo: i nomi sotto sono strutturali, non musicali. Non vanno usati come API clean-room finche' mutatori e semantica musicale non superano `confidence >= 0.90`.

## Field Map Strutturale

| Offset | Ruolo strutturale osservato | Evidenza primaria | Confidence |
|--------|-----------------------------|-------------------|------------|
| `+0x78` | input/source member list o collection base | `01bd7b90` legge `count` e biforca `count == 1` vs `count >= 2`; nel ramo multi costruisce/riusa `+0x98` | Medium |
| `+0x80` | transient source/input pointer | `01653e10` copia `*arg1` in `this + 0x80`; `0015a600` lo azzera a fine pass | Medium-high |
| `+0x88` | external/current source slot | `0015a600` lo passa nel corridoio `012e7fb0 / 012e68b0`; `01bd8c50` invoca virtuali su `this + 0x88` | Medium |
| `+0x90` | first generated graph/list handle | `01653e10` lo assegna dal risultato di `012c9ae0(..., 1)`; `01657410` e `01659860` lo consumano nel primo pass | High |
| `+0x98` | second generated graph/list handle, child/work registry | `01653e10` lo assegna dal risultato di `012c9ae0(..., 0)`; `0164e420`, `01652cd0`, `01652170`, `01bd7b90` lo iterano come list-like object | High |
| `+0xa8` | nested child/source link | `0164e420` lo rebinda da input; `012e61a0` e `012e7210` lo trattano come child list ricorsiva | High |
| `+0xb0` | direct/local payload list link | `0164f500` lo copia dall'input; `012e7210` lo usa come seed della lista aggregata; `012f7880`, `012f9cd0`, `012f8840` lo iterano come list-like object | High |
| `+0xb8` | derived/cache object slot | `012e7900` assegna qui il risultato costruito dopo `010f2780` e setup di oggetti helper | Medium |
| `+0x118` | principal-item/backref-like object | `012cfa20` assegna un oggetto `g_0252ff98`; `012e57f0` e `012e5b20` lo runtime-checkano come `MULSSGenerator`-compatible prima di usare shaper/principal-item helpers | High |

## Mutatori Chiave

### `01653e10` - init/setup di istanza

Shape osservata:

- assegna `this + 0x80 = *arg1`
- costruisce un primo handle/list tramite `012c9ae0(..., 1)` e lo salva in `+0x90`
- costruisce un secondo handle/list tramite `012c9ae0(..., 0)` e lo salva in `+0x98`
- inizializza `+0x68` a `1.0`
- imposta flag alti (`+0xa5`)

Lettura: setup iniziale di due grafi/liste parallele, non ancora distinguibili con nome musicale.

### `0164e420` - rebind del nested child/source link

Shape osservata:

- confronta `this + 0xa8` con l'input
- prima del rebind, se `+0x98` esiste, itera la lista e notifica i figli via helper `01658a40`
- se il vecchio `+0xa8` esiste, esegue detach/cleanup (`01849e20`, `01505de0`)
- assegna il nuovo `+0xa8`
- dopo il rebind, propaga ai figli di `+0x98` via `01658a70`
- puo' attivare aggiornamenti globali (`01660830`, `016818b0`) se le condizioni del source lo richiedono

Lettura: `+0xa8` e' un link strutturale con lifecycle proprio, non un semplice campo dati.

### `0164f500` - copy/merge da altro nodo LSS

Shape osservata:

- legge e azzera temporaneamente `arg1 + 0xa8`
- chiama `0164e420`
- copia `arg1 + 0xb0` in `this + 0xb0`
- se richiesto, copia anche byte/flag adiacenti
- chiude con update helper `01733c40`

Lettura: merge/copy di topologia LSS; `+0xa8` viene trattato come link da rebindare, `+0xb0` come payload/lista locale da propagare.

### `01652170` e `01652930` - consumer della lista aggregata

`01652170` si attiva quando `+0x98` e' vuoto ma `+0xa8` esiste:

- passa dal corridoio `012cb110 -> 012e7210`
- ottiene la lista aggregata `+0xb0` lungo i children `+0xa8`
- passa il risultato a `012879b0`

`01652930`:

- usa `01650330`
- recupera `+0xb0` via `012e5ae0`
- passa la lista a `012f0b60` con flag operativo
- puo' chiamare `01651f90` se il flag input e' attivo

Lettura: questi due callsite sono il primo ponte forte tra topologia LSS ricorsiva e mutazione di contenuto downstream.

### `012f0b60` - mutatore centrale del payload LSS

`012f0b60` e' il primo mutatore downstream grosso osservato sul corridoio `+0xb0`.

Shape osservata:

- riceve una lista/payload esterna in `param_2`
- legge il count iniziale di `arg1 + 0xb0` in `local_1cc`
- puo' creare una `GNList` temporanea (`g_02572358`) e fondere contenuto da `param_2`
- se i flag operativi sono attivi, passa piu' volte dal corridoio `012cb110 -> 012e7210`
- invoca helper classificati come `MUPercussivePitchSystem` (`01519670`, `01516650`, `01516720`, `0150ddd0`)
- invoca helper unknown/list-cleanup `01287c80` e `012879b0`
- alla fine, se esiste un source corrente, ricalcola/aggiorna `arg1 + 0xb8`
- se il count iniziale di `arg1 + 0xb0` era zero e il byte `arg1 + 0x88` e' falso, imposta `arg1 + 0x88 = 1`

Il ponte verso `MUPercussivePitchSystem` e' dettagliato in [59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md](59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md). I fatti nuovi chiusi sono: `01519670` non e' detection primaria ma un gate di split/clone su `abs(fVar12 - fVar11) >= 0.001f`; `01516650` e' un wrapper sottile che orchestra `01514480` e `01515040`; `01515040` riconcilia range sullo store `+0x80`, mentre `01516720` lavora sullo store `+0x88`.

Conseguenza:

- `012f0b60` non e' il detector audio primario
- e' un mutatore/propagatore di payload LSS che collega la lista diretta `+0xb0`, la lista aggregata via `012e7210`, il pitch-system percussivo e la cache `+0xb8`
- la presenza di `01516650 / 01516720` mostra che il corridoio LSS entra nel pitch-system, ma non chiude ancora formule di detection o ranking

### `012f7880`, `012f9cd0`, `012f8840` - pass sui payload `+0xb0`

Questi helper iterano `this/arg + 0xb0` come `GNList`-like:

- `012f7880` fa un pass con enter/leave counter a `+0x6c`, visita gli elementi, richiama helper item-level e poi aggiorna lo stato tramite `012edae0`
- `012f9cd0` visita gli elementi di `+0xb0` e applica una catena di helper item/source quando un predicato passa
- `012f8840` verifica che tutti gli elementi di `+0xb0` convergano allo stesso oggetto restituito da `0126ef70`; se trova divergenza restituisce null

Lettura: `+0xb0` e' una lista di payload operativi, ma il tipo finale di ogni payload non e' ancora chiuso in modo universale.

### `012e7900` - cache/derived object in `+0xb8`

`012e7900` costruisce piu' oggetti helper e aggiorna `this + 0xb8`.

Lettura: `+0xb8` e' uno slot derivato/cache, non parte del flatten diretto `+0xa8/+0xb0`.

## Relazione Con Il Dispatcher DNA2

Il dispatcher DNA2 non deve ancora conoscere questa field map completa.

Nel corridoio `01433f60` rimane valida solo questa lettura:

- wrapper/intermedi LSS
- `+0xa8` come nested child/list link
- `+0xb0` come direct/local payload list link
- flatten finale verso payload runtime-checkati come `MUAudioSourcePrincipalItem`

La field map di `MULSSGenerator` spiega da dove possono arrivare quei wrapper, ma non chiude ancora:

- classe owner di ogni wrapper intermedio
- semantica musicale dei payload
- mutatore completo del ramo poly

## Impatto Sul Clean-Room

Nessun codice nuovo.

Motivo:

- i ruoli strutturali `+0x90/+0x98/+0xa8/+0xb0/+0x118` sono forti
- le formule musicali e la pipeline item-level non sono chiuse
- il modulo resta `PARTIAL` nel confidence gate
