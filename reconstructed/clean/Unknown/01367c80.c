// Function: FUN_01367c80
// Address: 01367c80
// Size: 1438 bytes
// Class: Unknown

void FUN_01367c80(void* param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int iVar6;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  if (*arg1 == 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfdd0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 == 0) {
LAB_01367d99:
    bVar2 = true;
    bVar1 = false;
LAB_01367dab:
    cVar3 = FUN_01366cc0(0,0,param_3,param_4,0);
    if (cVar3 == '\0') {
      uVar5 = 0;
      goto LAB_01367e57;
    }
    local_78 = *arg1;
    local_48 = *param_2;
    local_70 = '\0';
    local_40 = '\0';
    cVar3 = FUN_01346520(local_48,1);
    uVar5 = 0;
    if (cVar3 == '\0') goto LAB_01367e57;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013e5500();
    if (local_78 == 0) goto LAB_01367d99;
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
    if (*arg1 != local_78) {
      bVar1 = true;
      bVar2 = false;
      goto LAB_01367dab;
    }
    uVar5 = FUN_0133aef0();
    uVar5 = uVar5 & 0xffffffff;
    bVar1 = true;
    bVar2 = false;
LAB_01367e57:
    if ((char)uVar5 == '\0') goto LAB_013681e0;
  }
  FUN_013359c0();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_013357a0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((void*)uVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar4 = _pthread_getspecific((void*)uVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      iVar6 = 0;
      do {
        pvVar4 = _pthread_getspecific((void*)uVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar4 = _pthread_getspecific((void*)uVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126f610();
        pvVar4 = _pthread_getspecific((void*)uVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a5f0();
        FUN_0039e8b0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_00e7bdb0();
        FUN_01287c80();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_78 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
  }
LAB_013681e0:
  if (bVar1 && !bVar2) {
    FUN_00d50b20();
  }
  return;
}

