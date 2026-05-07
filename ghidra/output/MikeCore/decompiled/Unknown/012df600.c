// Function: FUN_012df600
// Address: 012df600
// Size: 684 bytes
// Class: Unknown


void FUN_012df600(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong unaff_RDI;
  
  cVar1 = FUN_00d59e50();
  if (cVar1 == '\0') {
    cVar1 = FUN_00d59e50();
    if (cVar1 != '\0') {
      if (*(longlong *)(unaff_RDI + 0x58) != 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268df0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128c190();
      }
      if (*(longlong *)(unaff_RDI + 0x60) == 0) goto LAB_012df812;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268df0();
      goto LAB_012df7d7;
    }
    cVar1 = FUN_00d59e50();
    if (cVar1 == '\0') goto LAB_012df812;
    if (*(longlong *)(unaff_RDI + 0x58) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0128c190();
    }
    if (*(longlong *)(unaff_RDI + 0x60) == 0) goto LAB_012df812;
    pvVar2 = _pthread_getspecific(param_1);
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x58) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125ef90();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0128c190();
    }
    if (*(longlong *)(unaff_RDI + 0x60) == 0) goto LAB_012df812;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125ef90();
LAB_012df7d7:
    pvVar2 = _pthread_getspecific(param_1);
  }
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0128c190();
LAB_012df812:
  FUN_00d654d0();
  return;
}


