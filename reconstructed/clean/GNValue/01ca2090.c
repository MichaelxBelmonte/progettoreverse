// Function: FUN_01ca2090
// Address: 01ca2090
// Size: 975 bytes
// Class: GNValue

uint64_t FUN_01ca2090(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*arg1 == 0) goto LAB_01ca21e4;
  local_68 = '\0';
  local_70 = *arg1;
  FUN_01c957d0(param_1,&local_70);
  lVar3 = local_40;
  lVar1 = *arg1;
  if (lVar1 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != 0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01ca2147;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = local_40;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01ca2147:
    *(void*)(arg1 + 1) = 1;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = *arg1;
  if ((local_60 == 0) || (*(int *)(local_60 + 0xc) == 0)) {
LAB_01ca21e4:
    uVar5 = FUN_00e7bdb0();
    return uVar5;
  }
  local_58 = '\0';
  FUN_01266770();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    lVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 == 0) {
        uVar5 = FUN_00e7bdb0();
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507970();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_01a8c310();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c98e0();
        uVar5 = FUN_01a8fc90();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01ca2445;
    }
  }
  uVar5 = FUN_00e7bdb0();
  if (lVar1 == 0) {
    return uVar5;
  }
LAB_01ca2445:
  FUN_00d50b20();
  return uVar5;
}

