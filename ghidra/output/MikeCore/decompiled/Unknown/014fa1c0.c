// Function: FUN_014fa1c0
// Address: 014fa1c0
// Size: 507 bytes
// Class: Unknown


undefined8 FUN_014fa1c0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x430))();
  if (cVar1 != '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152c0c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_014f9e20();
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152c0c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_014f9e20();
      if (cVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152c0c0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_014f9e20();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar1 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


