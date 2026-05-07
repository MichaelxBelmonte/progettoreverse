// Function: FUN_01ca2090
// Address: 01ca2090
// Size: 975 bytes
// Class: GNValue


undefined8 FUN_01ca2090(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong *unaff_RSI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI == 0) goto LAB_01ca21e4;
  local_68 = '\0';
  local_70 = *unaff_RSI;
  FUN_01c957d0(param_1,&local_70);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
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
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = local_40;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01ca2147:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = *unaff_RSI;
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


