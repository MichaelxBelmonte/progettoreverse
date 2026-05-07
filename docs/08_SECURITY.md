# 08 — Security & DRM

## Code Signing Verification

Il wrapper verifica la firma digitale del Core.sbb prima di caricarlo.

### Sequenza

1. **Costruisce stringa di requisiti** con valori offuscati
   - Calcoli aritmetici (`0x3e90/0xb6=88='X'`, `0x48-1=71='G'`, etc.)
   - Produce byte ASCII della stringa di verifica
2. **SecRequirementCreateWithString()** → crea il requisito di firma
3. **Verifica** la firma del Core.sbb
4. Se fallisce: **retry loop** con `thread_switch(delay=0xC8)` fino a esaurimento tentativi

### Offuscamento aritmetico

I byte della stringa di verifica sono calcolati a runtime con divisioni e sottrazioni:

```
Byte 1: 0x3e90 / 0xb6 = 88 → 'X'
Byte 2: 0x48 - 1      = 71 → 'G'
Byte 3: 0x2560 / 0xb8 = 52 → '4'
Byte 4: 0x5a - 1      = 89 → 'Y'
```

Preceduti da un integer sqrt calculation (0x9c00-0x9cd0) — probabilmente per derivare parte del team ID o certificate hash.

## Licensing / PACE iLok

Il binario contiene OpenSSL completo e un sistema di licensing basato su:

### PACE Anti-Piracy

```cpp
namespace pace {
    class MachineId;         // identificatore hardware unico
    class MachineBinding;    // binding licenza ↔ macchina
    class PaceException;     // gestione errori
}
```

Implementato con Boost (`boost::operators_impl`).

### OpenSSL / CMS

```
CMS_EnvelopedData          → dati crittografati PKCS#7
CMS_EnvelopedData_create   → crea container cifrato
cms_EnvelopedData_init_bio → inizializza da BIO stream
```

Utilizzato per:
- Verifica licenze firmate
- Comunicazione con server di attivazione
- Storage sicuro dello stato di licenza

### Stringhe di errore

```
"Installation Error"
"Product Expired"
"has encountered a problem that prevents it from loading properly"
"has expired and will stop working now"
"Please contact %s for further assistance. (%d)"
```

## Framework Security linkati

```
Security.framework        → code signing, keychain, certificates
CFNetwork.framework       → comunicazione rete (attivazione online)
SystemConfiguration       → rilevamento rete
```
