// Function: FUN_01514120
// Address: 01514120
// Size: 852 bytes
// Class: MUPercussivePitchSystem

uint64_t FUN_01514120(double param_1,uint64_t param_2,int64_t *param_3,char param_4)

{
  void *pvVar1;
  uint64_t uVar2;
  void* in_ECX;
  uint64_t arg1;
  int unaff_EDI;
  uint64_t uVar3;
  double dVar4;
  
  if (arg1 >> 0x20 == 0) {
    return arg1;
  }
  if (*param_3 == 0) {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_016c98e0();
    dVar4 = dVar4 + param_1;
    if (unaff_EDI == 2) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7bcc0();
      uVar2 = FUN_016cb9d0(dVar4,4);
      return uVar2;
    }
    if (unaff_EDI == 1) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb5f0(dVar4,0);
      return uVar2;
    }
    if (unaff_EDI == 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb690(dVar4,0);
      return uVar2;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (param_4 == '\0') {
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      uVar3 = FUN_012f91f0();
    }
    else {
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      uVar3 = FUN_012f9260();
    }
    if (unaff_EDI == 2) {
      FUN_012f92d0();
      uVar2 = FUN_00e7cd00(uVar3);
      return uVar2;
    }
    if (unaff_EDI == 1) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb070(uVar3,0);
      return uVar2;
    }
    if (unaff_EDI == 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016cb1a0(uVar3,0);
      return uVar2;
    }
  }
  uVar2 = FUN_00e7bdb0();
  return uVar2;
}

