// Function: FUN_016d8ab0
// Address: 016d8ab0
// Size: 1630 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016d8ab0(pthread_key_t param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  pthread_key_t pVar11;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025fa538;
  uVar3 = _UNK_0239372c;
  uVar2 = _UNK_02393728;
  uVar1 = _UNK_02393724;
  *(undefined4 *)((longlong)puVar5 + 0xc) = _DAT_02393720;
  *(undefined4 *)(puVar5 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  FUN_00d500e0();
  uVar6 = FUN_00e7bdb0();
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar6;
  *(undefined8 *)((longlong)puVar5 + 0xc) = uVar6;
  if (*(longlong *)(unaff_RSI + 0x78) == 0) goto LAB_016d90f1;
  if (*(char *)(unaff_RSI + 0x80) != '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = 0;
    lVar9 = *(longlong *)(unaff_RSI + 0x78);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    pVar11 = 0;
    local_90 = lVar9;
    FUN_01900ec0(0,&local_90);
    uVar10 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_0165cf20(0,0);
    local_58 = uVar8;
    local_40 = FUN_00e7bdb0();
    if (((uVar8 >> 0x20 == 0) || (local_40 >> 0x20 == 0)) ||
       (cVar4 = FUN_00e7c000(), uVar8 = local_58, cVar4 == '\0')) {
      local_5c = 1;
      local_40 = uVar8;
      FUN_00e7c260();
      uVar8 = local_40;
    }
    else {
      uVar8 = FUN_00e7bdb0();
    }
    *(ulonglong *)((longlong)puVar5 + 0x14) = uVar8;
    uVar6 = FUN_00e7bdb0();
    *(undefined8 *)((longlong)puVar5 + 0xc) = uVar6;
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    goto LAB_016d90f1;
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = 0;
  lVar9 = *(longlong *)(unaff_RSI + 0x78);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  pVar11 = 0;
  local_80 = lVar9;
  FUN_01900ad0(0,&local_80);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_68 = 0;
  lVar9 = *(longlong *)(unaff_RSI + 0x78);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  pVar11 = 0;
  local_70 = lVar9;
  FUN_01900ec0(0,&local_70);
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_018fe5d0();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(pVar11);
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar11 = (pthread_key_t)local_50;
    }
    FUN_019079b0();
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_0165cf20(0,0);
    local_40 = uVar10;
    local_58 = FUN_00e7bdb0();
    pVar11 = (pthread_key_t)(uVar10 >> 0x20);
    if ((uVar10 >> 0x20 == 0) || (local_58 >> 0x20 == 0)) {
LAB_016d8fc2:
      *(ulonglong *)((longlong)puVar5 + 0xc) = uVar10;
    }
    else {
      cVar4 = FUN_00e7c000();
      if (cVar4 != '\0') {
        uVar10 = FUN_00e7bdb0();
        goto LAB_016d8fc2;
      }
      *(ulonglong *)((longlong)puVar5 + 0xc) = local_40;
    }
    if (local_48 != 0) {
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar11 = (pthread_key_t)local_48;
      }
      FUN_019079b0();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_0165cf20(0,0);
      local_58 = uVar10;
      local_40 = FUN_00e7bdb0();
      if (((uVar10 >> 0x20 == 0) || (local_40 >> 0x20 == 0)) ||
         (cVar4 = FUN_00e7c000(), uVar10 = local_58, cVar4 == '\0')) {
        local_5c = 1;
        local_40 = uVar10;
        FUN_00e7c260();
        uVar10 = local_40;
      }
      else {
        uVar10 = FUN_00e7bdb0();
      }
      *(ulonglong *)((longlong)puVar5 + 0x14) = uVar10;
      goto LAB_016d90de;
    }
    uVar6 = FUN_00e7bdb0();
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar6;
  }
  else {
    uVar6 = FUN_00e7bdb0();
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar6;
    *(undefined8 *)((longlong)puVar5 + 0xc) = uVar6;
    if (local_48 != 0) {
LAB_016d90de:
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
LAB_016d90f1:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


