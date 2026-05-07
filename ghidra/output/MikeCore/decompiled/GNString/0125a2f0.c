// Function: FUN_0125a2f0
// Address: 0125a2f0
// Size: 565 bytes
// Class: GNString


void FUN_0125a2f0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong unaff_RDI;
  float fVar2;
  longlong local_30;
  char local_28;
  
  if ((!NAN(*(float *)(unaff_RDI + 0xf8))) && (*(longlong *)(unaff_RDI + 0xd8) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar2 = (float)FUN_013ddd00();
      if ((*(float *)(unaff_RDI + 0xf8) != fVar2) ||
         (NAN(*(float *)(unaff_RDI + 0xf8)) || NAN(fVar2))) {
        FUN_00d64850();
        *(float *)(unaff_RDI + 0xf8) = fVar2;
        FUN_00d64910();
      }
      FUN_0125a5f0();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 200) != 0) {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ec70();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152de20();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152dfb0();
      }
    }
  }
  return;
}


