// Function: FUN_01306840
// Address: 01306840
// Size: 832 bytes
// Class: Unknown


ulonglong FUN_01306840(pthread_key_t param_1)

{
  double dVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar1 = (double)FUN_0125a280();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar5 = (double)FUN_0125a280();
  if (dVar5 <= dVar1) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar1 = (double)FUN_0125a280();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_0125a280();
    if (dVar5 < dVar1) {
      return 1;
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar1 = (double)FUN_01264170();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_01264170();
    if (dVar5 <= dVar1) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar1 = (double)FUN_01264170();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_01264170();
      if (dVar5 < dVar1) {
        return 1;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar3 = (float)FUN_0125a2c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar4 = (float)FUN_0125a2c0();
      if (fVar3 < fVar4) {
        return 0xffffffff;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar3 = (float)FUN_0125a2c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar4 = (float)FUN_0125a2c0();
      return (ulonglong)(fVar4 < fVar3);
    }
  }
  return 0xffffffff;
}


