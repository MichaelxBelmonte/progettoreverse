// Function: FUN_0044cc50
// Address: 0044cc50
// Size: 1174 bytes
// Class: MDMetaWindowController


void FUN_0044cc50(pthread_key_t param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong lVar6;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  pthread_key_t local_48;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  local_48 = param_1;
  local_44 = param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01240a80();
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = *unaff_RSI;
  local_90 = '\0';
  pVar5 = 0;
  FUN_01240490(0,&local_98);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fae0();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124a800();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = *unaff_RSI;
  local_80 = '\0';
  pVar5 = 1;
  FUN_01240490(1,&local_88);
  lVar6 = local_40;
  if (lVar2 == local_40) {
LAB_0044ce92:
    lVar6 = lVar2;
    if (local_38 != '\0') {
LAB_0044ce98:
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar2 = lVar6;
        goto LAB_0044ce92;
      }
      if (local_38 == '\0') goto LAB_0044cea6;
      goto LAB_0044ce98;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_0044cea6:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 2) {
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_024cc370;
      puVar4[7] = 0;
      puVar4[8] = 0;
      FUN_00d500e0();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fae0();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fa90();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = *unaff_RSI;
      local_70 = '\0';
      FUN_0123fb40();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = '\0';
      local_68 = puVar4;
      FUN_01240230();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0044d0b8;
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123fae0();
  }
  else {
    if (lVar6 == 0) goto LAB_0044d0b8;
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = '\0';
    local_58 = lVar6;
    FUN_01240360();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0044d0b8:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


