# 14 — Full Product Map

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Definire il perimetro reale del prodotto Melodyne 5.4.2.006 da ricostruire.

Questo documento separa:

- installer logic
- wrapper host-specific
- core DSP condiviso
- app standalone e strumenti accessori
- componenti terze parti / licensing

---

## Conclusione principale

Per ricostruire **l'intero software**, non basta il solo binario VST3.

Il prodotto e' composto da:

1. **Core condiviso** (`MelodyneCore.sbb`, `MelodyneCoreF.sbb`)
2. **Wrapper VST3**
3. **Wrapper AU**
4. **Wrapper AAX**
5. **App standalone**
6. **Uninstaller**
7. **Installer scripts / Distribution**
8. **Componenti PACE specifici di AAX**

La logica audio/DSP principale resta nel core condiviso.
I wrapper host-specific non sono identici tra loro, ma sono layer relativamente sottili rispetto al core.

---

## Origine dei file

Package originale verificato:

- `/Users/michaelbelmonte/Desktop/Melodyne.5.4.2.006 MORiA.pkg`

Subpackage presenti nel meta-installer:

- `com.celemony.melodyne.standalone.pkg`
- `com.celemony.melodyne.vst3.pkg`
- `com.celemony.melodyne.au.pkg`
- `com.celemony.melodyne.aax.pkg`

Package aperto sul Desktop:

- `/Users/michaelbelmonte/Desktop/PacchettoAperto_Mike`

Nota: il package aperto contiene solo `standalone` e `vst3`; `AU` e `AAX` sono presenti nel package originale ma non erano stati inclusi nella cartella aperta.

---

## Stato Ghidra locale

Aggiornamento operativo del 2026-04-08:

- import headless locale completato per `mike`, `MikeAU`, `MikeAAX`, `MikeStandalone`
- output generati in `ghidra/output/{mike,MikeAU,MikeAAX,MikeStandalone}`
- progetti Ghidra locali ora sotto `ghidra/projects/`

Metriche estratte:

- `mike` (VST3): 55 funzioni, 3 entrypoint principali (`GetPluginFactory`, `bundleEntry`, `bundleExit`)
- `MikeAU`: 114 funzioni, entrypoint AU `GNAUv2ComponentEntry` / `GNAUv2ComponentFactory`, factory UI `GNAudioUnitViewFactory_*`
- `MikeAAX`: 90 funzioni, 7 export ACF (`ACFRegisterPlugin`, `ACFGetClassFactory`, `ACFStartup`, ecc.)
- `MikeStandalone`: 42 funzioni, wrapper applicativo leggero

Conclusione pratica:

- Ghidra ha fatto un lavoro utile sui wrapper, ma il risultato conferma che sono layer host-specific relativamente sottili
- `AU` aggiunge soprattutto bootstrap AudioUnit e view factory
- `AAX` aggiunge piu' logica host/licensing rispetto agli altri wrapper
- nessuno dei wrapper contiene il nucleo DSP che serve per replicare con precisione il comportamento audio

---

## Mappa dei componenti

### 1. Core condiviso

File:

- `MelodyneCore-5.4.2.006.sbb/Contents/MacOS/MelodyneCore`
- `MelodyneCoreF-5.4.2.006.sbb/Contents/MacOS/MelodyneCoreF`
- `Resources.rrr`
- `default.metallib`

Ruolo:

- DSP engine
- analisi spettrale
- detection mono/poly
- quality scoring
- resintesi
- data model condiviso

Stato nel repo:

- gia' acquisito in `binaries/`
- verificato byte-per-byte rispetto al payload dell'installer

MD5 verificati:

- `MikeCore` = `f36b74b8e011a27845817bd1a100c72b`
- `MikeCoreF` = `ca1824c710237e313fb3b6e482d9c371`
- `Resources.rrr` = `6995a945cc7f995263cc07aa2c0713e2`
- `default.metallib` = `64add29b096faa4cc6ed203504626626`

Priorita' RE:

- massima

---

### 2. Wrapper VST3

File:

- `Library/Audio/Plug-Ins/VST3/Melodyne.vst3/Contents/MacOS/Melodyne`

Ruolo:

- bridge VST3 verso il core
- caricamento dinamico `Core.sbb` / `CoreF.sbb`
- entry points plugin VST3

Caratteristiche osservate:

- binario distinto dagli altri wrapper
- 3 simboli esportati:
  - `GetPluginFactory`
  - `bundleEntry`
  - `bundleExit`

MD5:

- `5157061383c82942fd47c3ca9abd1e7f`

Stato nel repo:

- gia' acquisito come `binaries/mike`
- verificato byte-per-byte rispetto al payload del package

Priorita' RE:

- media

---

### 3. Wrapper AU

File:

- `Library/Audio/Plug-Ins/Components/Melodyne.component/Contents/MacOS/Melodyne`

Ruolo:

- bridge AudioUnit verso lo stesso core condiviso

Caratteristiche osservate:

- non identico al VST3
- contiene riferimenti `AudioComponentInstanceGetComponent` e `AudioComponentGetDescription`
- contiene `Core.sbb` e `CoreF.sbb`
- 2 simboli esportati:
  - `GNAUv2ComponentEntry`
  - `GNAUv2ComponentFactory`

Dimensione / hash:

- `224704` bytes
- MD5 `a26f1d18049019864e806efba8c2147f`

Conclusione:

- e' un wrapper host-specific dedicato
- con alta probabilita' replica la stessa strategia del VST3: bootstrap host API + caricamento core

Priorita' RE:

- media, dopo core e VST3

---

### 4. Wrapper AAX

File:

- `Library/Application Support/Avid/Audio/Plug-Ins/Melodyne.aaxplugin/Contents/MacOS/Melodyne`

Ruolo:

- bridge AAX verso il core

Caratteristiche osservate:

- non identico a VST3 e AU
- contiene stringhe AAX estese
- contiene riferimenti `Core.sbb` e `CoreF.sbb`
- 7 simboli esportati:
  - `ACFCanUnloadNow`
  - `ACFGetClassFactory`
  - `ACFGetSDKVersion`
  - `ACFRegisterComponent`
  - `ACFRegisterPlugin`
  - `ACFShutdown`
  - `ACFStartup`

Dimensione / hash:

- `406032` bytes
- MD5 `164126bd4a7f98650ad0a893c64ff2f0`

Conclusione:

- wrapper dedicato, significativamente piu' grosso degli altri
- include integrazione host AAX e componenti PACE-specific
- non contiene il DSP principale, ma ha piu' logica di integrazione/licensing rispetto a VST3 e AU

Priorita' RE:

- media-bassa per replica DSP
- alta solo se l'obiettivo finale include compatibilita' Pro Tools / AAX

---

### 5. App standalone

File:

- `Applications/Melodyne 5/Melodyne.app/Contents/MacOS/Melodyne`

Ruolo:

- shell applicativa standalone
- bootstrap dell'app desktop
- UI/lifecycle/macOS app behavior

Stato nel repo:

- gia' acquisita come `binaries/MikeStandalone`
- verificata byte-per-byte rispetto al payload del package

MD5:

- `441260320dbdbaafcc5d9b0e89ad3593`

Conclusione:

- importante per ricostruire il prodotto completo
- non sostituisce il core, ma serve per comportamento app, menu, lifecycle, prefs, file handling

Priorita' RE:

- media

---

### 6. Uninstaller

File:

- `Applications/Melodyne 5/Melodyne Uninstaller.app/Contents/MacOS/Melodyne Uninstaller`

Ruolo:

- applicazione separata per rimozione prodotto

Osservazioni:

- binario nativo universal
- collega framework UI/network/system in modo simile alla standalone
- nel repo attuale non risulta ancora analizzato come target autonomo

Conclusione:

- fa parte del prodotto
- non e' necessario per la replica del motore audio
- va incluso solo se l'obiettivo e' una ricostruzione "full product surface"

Priorita' RE:

- bassa

---

### 7. Installer logic

File principali:

- `Distribution`
- `Scripts/isMelodyneInstalled.sh`
- `preinstall` / `postinstall` dei subpackage

Ruolo:

- check OS minimo
- rilevazione installazioni Melodyne esistenti
- politica di upgrade
- rimozione artefatti legacy
- copia di license e productinfo
- aggiornamento timestamp dei bundle host-specific

Osservazioni:

- logica quasi tutta in XML/JavaScript Installer + shell
- non c'e' codice nativo complesso da ricostruire qui

Conclusione:

- importante per capire packaging e deployment
- poco importante per la replica del comportamento audio

Priorita' RE:

- bassa

---

### 8. PACE / AAX-only

File principali:

- `Melodyne.aaxplugin/Contents/__Pace_Eden.bundle`
- `Melodyne.aaxplugin/Contents/Resources/__Pace_Eden/...`

Ruolo:

- integrazione/licensing richiesta dal formato AAX

Conclusione:

- componente separata dal core DSP
- non va confusa con la logica musicale/audio del prodotto

Priorita' RE:

- bassa per clone DSP
- medio-alta solo se serve compatibilita' AAX reale

---

## Cosa e' gia' coperto dal repo

Coperto e verificato:

- `VST3` wrapper
- `standalone`
- `MelodyneCore`
- `MelodyneCoreF`
- `Resources.rrr`
- `default.metallib`

Non ancora coperto come target RE dedicato:

- `AU` wrapper
- `AAX` wrapper
- `Melodyne Uninstaller.app`
- `__Pace_Eden.bundle`
- parte installer/distribution come documentazione dedicata

---

## Implicazioni per la ricostruzione completa

Se l'obiettivo e' **replicare il comportamento del software**:

1. il cuore da ricostruire e' il **core condiviso**
2. i wrapper `VST3`, `AU`, `AAX` vanno ricostruiti come bridge separati
3. `standalone` va trattata come app shell separata
4. `installer`, `uninstaller` e `PACE` non devono bloccare la ricostruzione del DSP

Se l'obiettivo e' **ricostruire tutto il codice pulito dell'intero prodotto**:

1. Core DSP + data model
2. Wrapper VST3
3. Wrapper AU
4. Wrapper AAX
5. Standalone app shell
6. Uninstaller
7. Installer scripts / package logic
8. PACE/AAX-only artifacts

---

## Ordine di lavoro consigliato

### Fase 1 — Canonical Core

- completare ricostruzione semantica di `MikeCore` / `MikeCoreF`
- fissare classi, strutture dati e mega-funzioni chiave
- ricostruire pipeline DSP e metriche reali

### Fase 2 — Canonical Wrapper Layer

- VST3: gia' quasi pronto come blueprint
- AU: mappare entry points e caricamento core
- AAX: mappare entry points, bridge AAX, boundary con PACE

### Fase 3 — App Shell

- ricostruire `MikeStandalone`
- separare cosa e' shell UI da cosa delega al core

### Fase 4 — Product Completeness

- documentare installer
- documentare uninstaller
- isolare e classificare PACE/AAX-only

---

## Decisione pratica

Per il clone ad alta fedelta':

- **non** partire da installer, uninstaller o PACE
- **si** partire da `MikeCore` / `MikeCoreF`
- aggiungere poi i wrapper host-specific uno per uno

Il VST3 non basta da solo per dire di aver ricostruito tutto il software.
Ma resta il miglior punto d'ingresso per capire il pattern dei wrapper.
