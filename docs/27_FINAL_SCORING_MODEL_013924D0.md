# 27 — Final Scoring Model `0x013924d0`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Ridurre la coda finale di `013924d0` a una lettura matematica utile per la replica:

- come viene normalizzato il template armonico
- quali colonne contano davvero
- quando entra `tonalityData`
- come nasce lo score finale in `item + 0x28`

---

## Conclusione Operativa

La fase finale di `013924d0` e' una correlazione per-item contro `magnitudeData`, non contro `trueFreqData`.

Il modello piu' forte oggi e':

1. costruzione di una matrice `rowTemplate[item][harmonicColumn]`
2. normalizzazione per colonna del template
3. score finale per item:

```c
score_i = sum_{k = 1 .. H-1} magnitudeData[k] * rowTemplate[i][k]
```

oppure, se il gate tonality-aware e' attivo:

```c
score_i = sum_{k = 1 .. H-1} magnitudeData[k] * rowTemplate[i][k] * min(1.0f, tonalityData[k])
```

La colonna `k = 0` e' esclusa dal path finale osservato.

---

## 1. Shape Del Buffer Temporaneo

`013924d0` alloca un buffer temporaneo tramite `00e83010`.

Dal setup:

- numero righe = `itemCount`
- numero colonne = `harmonicColumns` (`r9d` / `-0x4c(%rbp)`)
- ogni riga viene azzerata prima di essere riempita dal writer `014b74f0`

Lettura operativa:

```c
float rowTemplate[itemCount][harmonicColumns];
```

La memoria e' lineare, item-major.

---

## 2. Normalizzazione Per Colonna

La normalizzazione parte a `0x1392c02`.

Il loop esterno usa:

- `r11 = 1`
- confronto fino a `r15 = harmonicColumns`

quindi opera su:

- `k = 1 .. harmonicColumns - 1`

non su `k = 0`.

Per ogni colonna `k`:

1. somma `rowTemplate[i][k]` su tutte le righe `i`
2. se la somma supera una soglia minima, riscale:

```c
rowTemplate[i][k] *= 1.0f / columnSum[k]
```

Questa e' una vera normalizzazione inter-item della colonna, non una normalizzazione locale per singola riga.

Conclusione forte:

- il template armonico generato per item viene reso comparabile across-items colonna per colonna
- il kernel finale non lavora su lobi grezze, ma su una base gia' riequilibrata

---

## 3. Branch Finale: Unweighted Vs Tonality-Weighted

Il gate finale parte da:

```asm
testq %r8, %r8
setne -0x31(%rbp)        ; tonalityData != NULL
...
andb 0x18(%rbp), %cl     ; enableTonalityWeighting
movb %cl, -0x31(%rbp)
...
cmpb $0x0, -0x31(%rbp)
je   unweighted_path
```

Quindi il ramo tonality-aware richiede entrambe le condizioni:

- `tonalityData != NULL`
- `enableTonalityWeighting != 0`

Se una delle due manca, il kernel usa il ramo unweighted.

---

## 4. Ramo Unweighted

Nel ramo unweighted, il codice accumula il prodotto:

```c
score_i += magnitudeData[k] * rowTemplate[i][k];
```

con unrolling a gruppi di 4, ma la lettura semantica resta questa.

Punti chiave:

- input spettrale usato qui = `magnitudeData`
- `trueFreqData` non entra piu' nel dot product finale
- la somma parte da `k = 1`

Quindi `trueFreqData` serve a costruire il template/evidence a monte, non a fare la correlazione finale.

---

## 5. Ramo Tonality-Weighted

Nel ramo tonality-aware, il codice usa:

```c
weight_k = min(1.0f, tonalityData[k]);
score_i += magnitudeData[k] * rowTemplate[i][k] * weight_k;
```

L'unrolling a coppie osservato nel disassembly:

- legge due bin adiacenti alla volta
- clampa ogni peso con `min(1.0f, tonalityData[k])`
- accumula due prodotti per iterazione

Il fallback/tail finale copre il caso di numero dispari di colonne utili.

Conclusione forte:

- `tonalityData` non e' solo un contesto qualitativo generico
- diventa un vero moltiplicatore per-bin dello score finale

---

## 6. Ruolo Dei Tre Buffer Spettrali Nella Fase Finale

Nel modello completo di `013924d0`:

- `magnitudeData`
  - entra nel dot product finale
  - e' il segnale principale di scoring

- `trueFreqData`
  - non entra nel dot product finale
  - serve nel path `014eecb0 -> 014b71e0` come asse frequenziale per costruire `item + 0x24`

- `tonalityData`
  - entra in `014b71e0` come mask/weight locale
  - puo' entrare anche nel dot product finale come `min(1.0f, tonalityData[k])`

Questa separazione e' importante per la clean-room reconstruction:

- `trueFreqData` governa geometria locale / overlap evidence
- `magnitudeData` governa lo score energetico
- `tonalityData` governa weighting qualitativo locale e, opzionalmente, weighting finale

---

## 7. Colonna Zero

Tutti i loop finali partono da `k = 1`.

Inferenza forte:

- la colonna `0` non partecipa allo score finale
- puo' essere trattata come slot speciale, dummy o DC-like nel modello operativo

Non e' ancora rigoroso assegnarle un naming definitivo, ma e' corretto escluderla dalla replica del punteggio.

---

## 8. Formula Operativa Di Replica

La forma piu' utile oggi per una replica clean-room e':

```c
for (int k = 1; k < harmonicColumns; ++k) {
    float v = rowTemplate[i][k];
    float e = magnitudeData[k];
    float w = 1.0f;

    if (enableTonalityWeighting && tonalityData != NULL) {
        w = min(1.0f, tonalityData[k]);
    }

    score += e * v * w;
}
```

con la precondizione che `rowTemplate` sia gia' stato normalizzato per colonna.

---

## Impatto Sul Replication Effort

1. Lo score in `item + 0x28` puo' ora essere modellato come correlazione energetica pesata.
2. `trueFreqData` non va messa nel dot product finale: il suo ruolo e' upstream.
3. La normalizzazione per colonna e' parte del comportamento reale, non un dettaglio implementativo.
4. Il gate tonality-aware e' abbastanza solido da entrare gia' nella spec clean-room.

---

## Next Step

1. Cercare se il branch tonality-aware viene attivato nel ramo poly DNA2 alto oppure solo in sottopath specifici.
2. Capire meglio se la colonna `0` sia davvero un DC slot o una dummy column di allineamento.
3. Tornare su `01447a70 -> 013903d0` per collocare questo kernel dentro il flusso poly completo.
