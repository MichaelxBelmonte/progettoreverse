// Function: FUN_013168e0
// Address: 013168e0
// Size: 889 bytes
// Class: MUSampledFunction

uint64_t FUN_013168e0(void* param_1)

{
  uint uVar1;
  void *pvVar2;
  void* pVar3;
  byte unaff_SIL;
  uint64_t unaff_R12;
  undefined7 uVar5;
  uint64_t uVar4;
  bool bVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  uVar5 = (undefined7)((uint64_t)unaff_R12 >> 8);
  if (local_40 == 0) {
    bVar6 = true;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    bVar6 = local_70 == 0;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = CONCAT71(uVar5,bVar6) ^ 1;
  if (((char)uVar4 == '\0') && ((unaff_SIL ^ 1) == 0)) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150cac0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = CONCAT71(uVar5,1);
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar3 = 0;
  uVar1 = (uint)uVar4 & 0xff;
  if (local_40 == 0) {
    uVar1 = 0;
  }
  if (local_40 == 0 && (unaff_SIL ^ 1) == 0) {
    pvVar2 = _pthread_getspecific(0);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150cb90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar4 = (uint64_t)uVar1;
  }
  return uVar4 & 0xffffffff;
}

