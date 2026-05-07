// Function: FUN_01ca29a0
// Address: 01ca29a0
// Size: 956 bytes
// Class: GNValue


ulonglong FUN_01ca29a0(pthread_key_t param_1,undefined8 param_2)

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *unaff_RSI;
  ulonglong local_80;
  char local_78;
  ulonglong local_70;
  char local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  ulonglong local_40;
  char local_38;
  
  local_60 = param_2;
  if (*unaff_RSI == 0) goto LAB_01ca2aea;
  local_78 = '\0';
  local_80 = *unaff_RSI;
  FUN_01c957d0(param_1,&local_80);
  uVar4 = local_40;
  uVar3 = *unaff_RSI;
  if (uVar3 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01ca2a5d;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = uVar4;
      if (((char)uVar5 != '\0') && (uVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = local_40;
      if (((char)uVar5 != '\0') && (uVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01ca2a5d:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) {
    FUN_01ca25e0();
    uVar3 = local_40;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    uVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (uVar4 == 0) {
      uVar4 = FUN_00e7bdb0();
    }
    else {
      local_48 = uVar3;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_01a8c310();
      uVar3 = local_48;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c98e0();
      uVar4 = FUN_01a8fc90();
      local_58 = uVar4;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_70 = *unaff_RSI;
      local_68 = '\0';
      uVar5 = FUN_01ca2090();
      local_40 = uVar5;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (((uVar4 >> 0x20 != 0) && (uVar5 >> 0x20 != 0)) &&
         (cVar1 = FUN_00e7c020(), uVar4 = local_58, cVar1 == '\0')) {
        uVar4 = FUN_01a8fc00();
      }
    }
    if (uVar3 != 0) {
      FUN_00d50b20();
    }
    return uVar4;
  }
LAB_01ca2aea:
  uVar3 = FUN_00e7bdb0();
  return uVar3;
}


