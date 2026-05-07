# 33 — Property Point Family `DAT_025e74a0`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Fissare in modo piu' rigoroso la famiglia reale dei `MUAudioSourcePropertyPoint` e separarla dal payload di ranking usato in `014f7360`.

---

## Conclusione Principale

La famiglia con vtable `DAT_025e74a0` e' reale, ricorre in piu' builder coerenti e corrisponde bene a una famiglia `MUAudioSourcePropertyPoint`.

Correzione importante:

- questa famiglia non coincide con il payload confrontato in `014f7360` tramite float a `+0x2c / +0x34`
- in `DAT_025e74a0`, `+0x2c` e' invece un byte/status field

Quindi:

- `MUAudioSourcePropertyPoint` resta una famiglia vera e utile
- ma non e' il carrier del ranking locale `014f7360`

---

## 1. Builder Ricorrenti

I siti osservati che costruiscono la stessa famiglia sono:

- `014e1210`
- `0145f790`
- `014ea210`
- `014e8b20`
- `014ea7b0`

In tutti questi casi compare lo stesso pattern:

```c
alloc(...)
*obj = &DAT_025e74a0;
zero init del blocco 0x0c..0x60
call DAT_025e74b8
```

La convergenza e' forte perche' il pattern compare sia in builder di interpolazione sia in path `MUAudioSourceItem`.

---

## 2. Zero-Init Reale

Nei builder osservati vengono azzerati in modo ricorrente:

- `+0x0c .. +0x28`
- `+0x2c` come byte singolo
- `+0x30`
- `+0x38`
- `+0x40`
- `+0x48`
- `+0x50`
- `+0x58`
- `+0x60`

Questo punto e' importante per la replica:

- la struttura ha una testa compatta di scalari
- poi una coda di ref/pointer o campi object-like
- `+0x2c` non si comporta come float

---

## 3. `014e1210` Come Builder Piu' Informativo

`014e1210` e' il sito migliore perche' non si limita ad allocare: interpola e scrive campi numerici concreti.

Nel blocco di interpolazione osservato:

- `+0x0c` riceve l'indice discreto `iVar8`
- `+0x14` riceve il valore interpolato principale
- `+0x18` riceve lo stesso valore del `+0x14`
- `+0x1c` viene inizializzato a `0.1f`
- `+0x20` viene inizializzato a `NaN`
- `+0x24` riceve uno scalar interpolato aggiuntivo
- `+0x28` riceve un secondo scalar interpolato aggiuntivo
- `+0x2c` viene inizializzato a `0`

Lettura prudente:

- `+0x0c` = sequence/discrete index
- `+0x14/+0x18` = coppia di valori primari interpolati
- `+0x1c` = scalar default piccolo
- `+0x20` = scalar opzionale non ancora materializzato
- `+0x24/+0x28` = coordinate o descriptor secondari interpolati
- `+0x2c` = stato booleano

---

## 4. `0145f790` Conferma Il Layout

`0145f790` alloca ripetutamente oggetti `DAT_025e74a0` e li indicizza `0..count-1`.

Pattern osservato:

- `+0x0c = slotIndex`
- `+0x10/+0x14/+0x18/+0x1c` ricevono un template float
- `+0x24/+0x28 = 0.1f / 0.1f`
- `+0x2c = 0`

Questa funzione non basta da sola a nominare ogni campo, ma conferma:

- la famiglia ha davvero campi float continui nella fascia `+0x10..+0x28`
- `+0x2c` resta uno stato byte/flag

---

## 5. Prova Forte Su `+0x2c`

La prova piu' forte arriva da `014ea7b0`.

Nel loop osservato:

```c
*(uint *)(lVar32 + uVar27 * 4) =
    *(byte *)(*(longlong *)(lVar4 + (longlong)iVar33 * 8) + 0x2c) ^ 1;
```

Questa istruzione e' incompatibile con una lettura "float a `+0x2c`".

Conclusione forte:

- in `DAT_025e74a0`, `+0x2c` e' un flag/stato booleano

Questo chiude la contraddizione con `014f7360`.

---

## 6. Working Field Map

| Offset | Ruolo operativo | Confidence | Evidenza |
|--------|-----------------|------------|----------|
| `+0x0c` | discrete sequence index | High | `014e1210`, `0145f790` |
| `+0x14` | primary interpolated value | Medium-High | `014e1210`, `014ea210` |
| `+0x18` | paired secondary value / weight | Medium | `014e1210`, `014e8b20` |
| `+0x1c` | small default scalar (`0.1f`) | High | `014e1210` |
| `+0x20` | optional scalar default `NaN` | High | `014e1210` |
| `+0x24` | interpolated scalar / axis A | Medium | `014e1210`, `0145f790` |
| `+0x28` | interpolated scalar / axis B | Medium | `014e1210`, `0145f790` |
| `+0x2c` | boolean/status byte | Very High | `014ea7b0` xor `1`, zero-init ricorrente |

Non e' ancora rigoroso tipizzare il naming finale di `+0x14/+0x18/+0x24/+0x28`.

Le prove fissano bene il tipo operativo, non ancora il nome finale.

---

## 7. Relazione Con `014f7360`

Questa e' la correzione architetturale piu' importante.

Il doc precedente sul cluster slot/bucket restava corretto nella topologia `GNList`, ma troppo aggressivo nella parte payload.

Oggi il modello piu' rigoroso e':

1. `014f7360` costruisce topologia `GNList`
2. il ranking locale usa un payload distinto con float a `+0x2c/+0x30/+0x34`
3. la famiglia `DAT_025e74a0` entra in builder separati downstream o paralleli
4. sopra questi layer viene poi materializzato il candidate adapter `0x168`

Doc collegati:

- [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md)
- [34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md](34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md)
- [35_PROPERTY_POINT_COPY_INSERT_014EE580_014C2E20.md](35_PROPERTY_POINT_COPY_INSERT_014EE580_014C2E20.md)

---

## Impatto Sul Replication Effort

1. `MUAudioSourcePropertyPoint` puo' essere modellato come famiglia distinta, non come carrier universale dei ranking float.
2. Il clean-room model deve tenere separati:
   - topology layer `GNList`
   - ranking payload layer
   - property-point layer
   - candidate-adapter layer
3. Usare `+0x2c` come float dentro la famiglia `DAT_025e74a0` produrrebbe una replica sbagliata.
4. Il layer property-point a valle e' ora piu' stretto grazie a copy helper `014ee580` e ordered insert `014c2e20`.

---

## Next Step

1. Stringere il significato finale di `+0x24/+0x28` dentro i builder `DAT_025e74a0`.
2. Chiudere la relazione precisa tra il carrier ranking/separation upstream e i property-point builders downstream.
