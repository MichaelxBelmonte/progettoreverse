# 19 — Dispatcher Stack Ledger

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Tipizzare con piu' rigore gli stack object usati dal dispatcher `0x01433f60` nei due callsite:

- ramo poly verso `0x01447a70`
- ramo mono verso `0x0146c830`

Il focus qui non e' il significato musicale finale, ma la forma ABI reale:

- slot passati by-reference
- coppie `pointer + ownership flag`
- copy-in vs nuova materializzazione
- cleanup immediato post-call

Fonte principale: disassembly CLI da entry funzione, filtrato sui callsite.

---

## Pattern ABI Osservato

Nei callsite critici compare ripetutamente lo stesso pattern:

1. copia di un puntatore locale in uno slot stack
2. azzeramento del byte successivo
3. passaggio dell'indirizzo dello slot al callee
4. dopo la call, release condizionale se il byte flag e' attivo e il puntatore non e' nullo

Lettura prudente:

- questi non sono semplici `void *`
- la forma minima osservata e' un wrapper da 16 byte circa: `ptr + ownership flag`
- il dispatcher usa una convenzione esplicita di retain/release per questi slot

---

## Ramo Poly `0x01447a70`

### Slot osservati

| Slot ptr | Flag | Origine pre-call | Registro argomento | Post-call immediato | Lettura prudente |
|----------|------|------------------|--------------------|---------------------|------------------|
| `-0x8f0` | `-0x8e8` | copia da `-0xf8(%rbp)` | `rsi = &slot` | nessun cleanup immediato locale visibile | wrapper input/borrowed |
| `-0x8e0` | `-0x8d8` | copia da `-0xf0(%rbp)` | `rdx = &slot` | nessun cleanup immediato locale visibile | wrapper input/borrowed |
| `-0x8d0` | `-0x8c8` | copia da `-0x1d0(%rbp)` | `rcx = &slot` | nessun cleanup immediato locale visibile | wrapper input/borrowed |
| `-0x688` | `-0x680` | copia da `-0x220(%rbp)` | `r8 = &slot` | release condizionale subito dopo la call | in/out wrapper ad alta priorita' |
| `-0x8c0` | `-0x8b8` | copia da `-0x260(%rbp)` | `r9 = &slot` | nessun cleanup immediato locale visibile | wrapper input/borrowed |

### Evidenza chiave

- [18_DNA2_CALLSITE_MAP.md](18_DNA2_CALLSITE_MAP.md) fissa il callsite a `0x0143a782`
- il dump LLDB mostra chiaramente la costruzione degli slot:
  - `-0x8f0/-0x8e8`
  - `-0x8e0/-0x8d8`
  - `-0x8d0/-0x8c8`
  - `-0x688/-0x680`
  - `-0x8c0/-0x8b8`
- subito prima della call il dispatcher esegue:
  - `xorl %eax, %eax`
  - `cmpq $0x0, -0x198(%rbp)`
  - `setne %al`
  - `movl %eax, (%rsp)`
- solo `-0x688/-0x680` viene ripulito immediatamente dopo la call via `0xd50b20`

### Implicazione pratica

Per il reverse GUI conviene trattare questi argomenti non come "5 pointer grezzi", ma come:

- quattro wrapper di contesto copy-in
- un wrapper in/out piu' sensibile (`-0x688/-0x680`) che puo' essere sostituito o ritagliato dal ramo poly
- un gate stack bool addizionale (`stack0`) che segnala la presenza di `-0x198(%rbp)`

---

## Ramo Mono `0x0146c830`

### Slot osservati

| Slot ptr | Flag | Origine pre-call | Registro argomento | Post-call immediato | Lettura prudente |
|----------|------|------------------|--------------------|---------------------|------------------|
| `-0x628` | `-0x620` | nuovo oggetto in `r12`, poi copiato nello slot | `rsi = &slot` | release condizionale subito dopo la call | wrapper/out-object materializzato dal dispatcher |
| `-0x880` | `-0x878` | copia da `-0xf0(%rbp)` | `rdx = &slot` | nessun cleanup immediato locale visibile | wrapper input/borrowed |
| `-0x870` | `-0x868` | copia da `-0xc0(%rbp)` | `rcx = &slot` | nessun cleanup immediato locale visibile | wrapper input/borrowed |

Argomenti raw aggiuntivi:

- `r8 = -0x1d0(%rbp)`
- `r9 = -0x220(%rbp)`
- `stack[0] = -0x1f0(%rbp)`
- `stack[8] = -0x1f8(%rbp)`
- `stack[16] = r14`

### Materializzazione esplicita di `-0x628`

Prima della call mono, il dispatcher esegue questa sequenza:

1. allocazione via `0xe8fc40`
2. init via `0xd4ff40`
3. scrittura di `-0x2a8(%rbp)` in `*r12`
4. virtual call indiretta `callq *-0x248(%rbp)`
5. copia finale di `r12` in `-0x628(%rbp)` con flag `-0x620 = 0`

Questa e' una prova forte che `-0x628` non e' un semplice alias di un puntatore preesistente:

- e' un oggetto temporaneo costruito apposta per il ramo mono
- il ramo mono riceve quindi piu' preparazione strutturale del ramo poly

---

## Conseguenze Sul Replication Effort

1. Il dispatcher non passa semplici pointer DSP, ma wrapper reference-counted o strutture equivalenti.
2. Il ramo poly sembra consumare contesto gia' disponibile e lavorare soprattutto su wrapper copy-in.
3. Il ramo mono riceve invece un out-object preparato dal dispatcher stesso.
4. La tipizzazione dei cinque slot poly e dei tre slot mono e' ormai abbastanza stretta da guidare il rename manuale in Ghidra GUI.

---

## Rename Provvisori Consigliati

Nel graph di `0x01433f60` conviene usare nomi neutrali ma ABI-aware:

- `poly_ref_a = {-0x8f0, -0x8e8}`
- `poly_ref_b = {-0x8e0, -0x8d8}`
- `poly_ref_c = {-0x8d0, -0x8c8}`
- `poly_item_io = {-0x688, -0x680}`
- `poly_ref_d = {-0x8c0, -0x8b8}`
- `mono_item_io = {-0x628, -0x620}`
- `mono_ref_a = {-0x880, -0x878}`
- `mono_ref_b = {-0x870, -0x868}`

Questo evita di chiamarli troppo presto `item`, `slice`, `description`, `claim` senza prova sufficiente, ma impedisce anche di perderli come stack slot anonimi.

---

## Next Step

1. In Ghidra GUI, applicare i rename provvisori sopra.
2. Seguire `poly_item_io` e `mono_item_io` nel callee per capire se vengono sostituiti, mutati o solo consultati.
3. Identificare il tipo reale dell'oggetto creato in `r12` prima del call mono partendo dalla virtual call `*-0x248(%rbp)`.
4. Cercare dove `poly_ref_a..d` vengono popolati nel dispatcher per capire se corrispondono a description, list, source item o time-slice context.
