// Function: FUN_016f9740
// Address: 016f9740
// Size: 1790 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x016f98ff) */

void FUN_016f9740(pthread_key_t param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  pthread_key_t pVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int extraout_var;
  undefined8 uVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 *unaff_RSI;
  longlong lVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int iStack_74;
  longlong local_70;
  char local_68;
  longlong local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_98 = param_2;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_90 = FUN_01909dc0();
  local_f0 = *unaff_RSI;
  local_e8 = 0;
  uVar14 = FUN_016ebbb0(extraout_XMM0_Da,&local_f0);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if (local_48 == 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = FUN_019079b0();
    FUN_00e7c260();
    bVar2 = false;
    local_50 = 0;
    local_88 = local_70;
  }
  else {
    local_e0 = *unaff_RSI;
    local_d8 = 0;
    FUN_016ebbb0(uVar14,&local_e0);
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = FUN_01909dc0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_016d7110(0,local_88);
    local_50 = local_48;
    if (local_48 == 0) {
      local_50 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
      }
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &DAT_02572358;
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00e7b970();
  FUN_00e7bdc0();
  FUN_00e7cea0();
  FUN_00d21370();
  uVar9 = local_90;
  do {
    do {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fcb10();
      FUN_01907b60();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e7b820();
      iStack_74 = (int)((ulonglong)uVar9 >> 0x20);
    } while ((iStack_74 == 0) || (local_88._4_4_ == 0));
    cVar3 = FUN_00e7c020();
    pVar5 = (pthread_key_t)puVar10;
  } while (cVar3 != '\0');
  if (*(int *)((longlong)puVar7 + 0xc) != 0) {
    pvVar6 = _pthread_getspecific(pVar5);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar5);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_019079b0();
    uVar9 = 0;
    FUN_018fef60(0,uVar8);
    if (local_70 == 0) {
      bVar1 = true;
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      lVar13 = 1;
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar1 = false;
      lVar12 = local_70;
    }
    if ((bVar2) && (local_50 != 0)) {
      FUN_00d50b00();
    }
    cVar3 = (char)lVar13;
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00d23340();
      pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar9 >> 8),local_40[0]);
      pcVar11 = local_38;
      if (local_40[0] != '\0') {
        pcVar11 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar11 = '\0';
      if ((local_40[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar5);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = FUN_019079b0();
      cVar4 = '\0';
      if ((extraout_var != 0) && (local_a0 >> 0x20 != 0)) {
        cVar4 = FUN_00e7c020();
      }
      if ((local_38[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        lVar13 = 0;
        lVar12 = 0;
      }
      cVar3 = (char)lVar13;
      if (!bVar1 && cVar4 == '\x01') {
        cVar3 = '\0';
        lVar12 = 0;
        FUN_00d50b20();
      }
    }
    local_c8 = 0;
    local_c0 = local_50;
    local_b8 = 0;
    local_d0 = lVar12;
    pVar5 = FUN_00e7bdb0();
    local_a8 = 0;
    local_b0 = puVar7;
    uVar9 = FUN_00e7bdb0();
    FUN_016e9760(0,&local_c0,&local_b0,uVar9);
    pvVar6 = _pthread_getspecific(pVar5);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018f9310();
    if ((bVar2) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar3 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if ((bVar2) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}


