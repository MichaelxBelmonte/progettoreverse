// Function: FUN_019184e0
// Address: 019184e0
// Size: 617 bytes
// Class: GNUni


uint FUN_019184e0(pthread_key_t param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  longlong local_48;
  char local_40;
  longlong local_30;
  char local_28;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff00();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar4 = (float)FUN_01265b60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff70();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar5 = (float)FUN_01265b60();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((fVar4 != fVar5) || (NAN(fVar4) || NAN(fVar5))) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_0126cd60();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_0126cd60();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      return uVar2 ^ 1;
    }
  }
  return 0;
}


