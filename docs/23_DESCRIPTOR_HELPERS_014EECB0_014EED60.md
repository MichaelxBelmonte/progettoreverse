# 23 — Descriptor Helpers `0x014eecb0` / `0x014eed60`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Documentare i due helper lazy che materializzano i campi per-item controllati da `0138f140` e usati nel path analyzer / spectrum shaper / principal item.

---

## Punto Chiave

Entrambe le routine partono da `item + 0x14` e lo trattano come pitch assoluto in cents-like.

La formula osservata nel disassembly e':

```c
hz = 8.175799 * exp2f(item_pitch_cents * (1.0f / 1200.0f));
```

Questo e' il mapping classico da cents assoluti a Hz con base `C-1 = 8.175799 Hz`.

Conclusione forte:

- `item + 0x14` non e' un generico "pitch-like"
- `item + 0x14` e' un pitch assoluto in cents o un encoding equivalente con la stessa semantica

---

## `0x014eed60`

### Comportamento verificato

Dal disassembly CLI:

- riceve `item` in `rdi`
- riceve una tabella float esterna in `rsi`
- riceve una lunghezza/ordine intero in `edx`
- converte `item + 0x14` in Hz
- itera fino a 16 armoniche
- per ogni armonica interpola linearmente la tabella esterna
- accumula una media pesata
- scrive il risultato in `item + 0x10`
- applica un floor minimo `1e-4`

### Lettura operativa

`014eed60` costruisce un descriptor armonico scalare a partire da:

- pitch dell'item
- tabella esterna per-bin o per-band
- media pesata sulle armoniche

Conclusione attuale:

- `item + 0x10` e' un descriptor armonico derivato
- non e' un dato primario come pitch o tempo

### Cose importanti da non confondere

- non scrive `item + 0x14`
- non decide lo score finale `item + 0x28`
- fornisce un valore di supporto per-item, materializzato lazy

---

## `0x014eecb0`

### Comportamento verificato

Dal disassembly CLI:

- legge `item + 0x14`
- converte anche qui da cents a Hz
- chiama `014b71e0` passando `&item[+0x24]`
- poi scrive in `item + 0x20` il valore `max(epsilon, hz)`
- controlla `item + 0x24` dopo la call e puo' forzare `0x800000`

Dal call path reale `013903d0 -> 013924d0 -> 014eecb0`:

- `rsi` porta `trueFreqData`
- `rdx` porta `magnitudeData`
- `rcx` porta `tonalityData`

e `014eecb0` li rilancia in `014b71e0` come:

- hidden `rdi = trueFreqData`
- hidden `rsi = magnitudeData`
- hidden `rdx = tonalityData`

### Lettura operativa

Il campo `item + 0x20` e' oggi il miglior candidato per:

- base frequency in Hz
- harmonic spacing / fundamental frequency

Il campo `item + 0x24` e' invece uno stato ausiliario scritto da `014b71e0`:

- scalar float ausiliario
- overlap / residual evidence locale
- non un bitfield puro

Il naming finale non e' ancora fissato, ma la separazione funzionale e' chiara:

- `+0x20` = scalar fondamentale
- `+0x24` = scalar ausiliario della stessa derivazione

Correzione importante:

- `014eecb0` confronta `item + 0x24` via `ucomiss`
- se il valore e' troppo piccolo, scrive `0x00800000`
- `0x00800000` corrisponde a `FLT_MIN`

Quindi `+0x24` va letto prima come float, non come bitfield.
Il miglior nome operativo di oggi e' `local_overlap_evidence`.

---

## `0x014b71e0` Come Worker Interno

`014eecb0` delega a `014b71e0` la parte piu' ricca:

- finestratura locale attorno a frequenze candidate
- mixing con uno o piu' buffer esterni
- possibile depletion/aggiornamento di un buffer in-place
- aggiornamento di uno scalar associato a `item + 0x24`

Mappa oggi chiusa nel path analyzer principale:

- `trueFreqData` -> asse frequenziale
- `magnitudeData` -> buffer energia/magnitudine
- `tonalityData` -> weight/mask addizionale

Doc di dettaglio:

- [24_WINDOWED_OVERLAP_KERNEL_014B71E0.md](24_WINDOWED_OVERLAP_KERNEL_014B71E0.md)

Questa funzione e' un buon candidato P1 per capire meglio:

- `+0x24`
- il ruolo finale di `tonalityData` tra helper locale e scoring downstream

---

## Costanti Chiave Verificate

Decodifica dai literal osservati:

- `0x3a5a7408` -> `0.000833333` -> `1 / 1200`
- `0x4102d013` -> `8.175799` -> `C-1`
- `0x38d1b717` -> `0.0001`

Questo rende la lettura pitch-in-cents particolarmente forte.

---

## Relazione Con `0x013924d0`

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c):

- `+0x10` e `+0x20` vengono solo validati/materializzati
- il kernel usa poi direttamente `item + 0x14`
- lo score viene scritto a `item + 0x28`

Quindi il quadro corretto oggi e':

1. `+0x14` contiene il pitch assoluto
2. `014eed60` riempie `+0x10`
3. `014eecb0` riempie `+0x20` e aggiorna `+0x24`
4. `013924d0` usa il pitch e scrive `+0x28`

---

## Impatto Sul Replication Effort

1. La rappresentazione interna del pitch e' ormai quasi fissata: cents assoluti.
2. Il clean-room model puo' gia' implementare la conversione `cents -> Hz` con alta confidenza.
3. `014eed60` e `014eecb0` vanno replicati come helper separati, non fusi dentro `013924d0`.

---

## Next Step

1. Stringere il ruolo quantitativo di `tonalityData` dentro `014b71e0` e nel kernel finale.
2. Identificare l'origine delle tabelle esterne passate a `014eed60`.
3. Cercare altri reader di `item + 0x20` per confermare il naming finale `baseFreqHz`.
