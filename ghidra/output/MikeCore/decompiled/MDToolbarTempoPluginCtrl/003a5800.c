// Function: FUN_003a5800
// Address: 003a5800
// Size: 3044 bytes
// Class: MDToolbarTempoPluginCtrl


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a5800(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RDI;
  double dVar9;
  undefined8 uVar10;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  code *local_70;
  undefined *local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
    return;
  }
  FUN_01d77960();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026d8938;
  if (lVar1 == 0) {
    return;
  }
  if (DAT_026d8938 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar9 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_80 = lVar2;
  local_78 = '\0';
  FUN_000175c0(uVar10,&local_80);
  lVar1 = local_40;
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
  if (lVar1 != 0) {
    local_38 = '\0';
    local_40 = lVar1;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027050b8;
  if ((lVar1 != 0 & bVar3) != 0) {
    if (*(longlong *)(unaff_RDI + 0xb0) == 0) {
      return;
    }
    if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
      FUN_01d77960();
      local_98 = 0;
      local_a0 = *(longlong *)(unaff_RDI + 0xb8);
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_01d5dde0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_01d77960();
    local_c0 = 0;
    local_c8 = *(longlong *)(unaff_RDI + 0xb0);
    if (local_c8 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_01d5d7f0(uVar10,1);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
      *(undefined8 *)(unaff_RDI + 0xb0) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xb8) == 0) {
      return;
    }
    *(undefined8 *)(unaff_RDI + 0xb8) = 0;
    FUN_00d50b20();
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    return;
  }
  if (DAT_027050b8 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  uVar10 = FUN_01d77960();
  local_128 = lVar2;
  local_120 = '\0';
  FUN_01d5e6e0(uVar10,&local_128);
  lVar1 = *(longlong *)(unaff_RDI + 0xb0);
  lVar8 = lVar1;
  if (lVar1 == local_40) goto LAB_003a5bc3;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar8 = 0;
      goto LAB_003a5b75;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0xb0);
    *(longlong *)(unaff_RDI + 0xb0) = local_40;
    lVar8 = local_40;
  }
  else {
    local_38 = '\0';
    lVar8 = local_40;
LAB_003a5b75:
    *(longlong *)(unaff_RDI + 0xb0) = lVar8;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = local_40;
  }
LAB_003a5bc3:
  if ((local_38 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    FUN_01d77960();
    local_118 = lVar2;
    local_110 = '\0';
    FUN_01d5e640();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_68 = &DAT_026846d0;
  *puVar5 = &DAT_026846d0;
  puVar5[2] = &DAT_02684a60;
  *(undefined1 *)(puVar5 + 3) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x42) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  *(undefined2 *)(puVar5 + 0xe) = 0;
  local_70 = DAT_026846e8;
  (*DAT_026846e8)();
  puVar7 = *(undefined8 **)(unaff_RDI + 0xb8);
  if (puVar7 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xb8) = puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027296a0;
  if (DAT_027296a0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027050c0;
  local_108 = lVar1;
  local_100 = '\x01';
  if (DAT_027050c0 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar2;
  local_f0 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  FUN_00d31230(&local_e8,&local_f8);
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  FUN_01d64eb0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar6 + 0x18))();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  local_60 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_68;
  puVar7[2] = &DAT_02684a60;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x42) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  *(undefined2 *)(puVar7 + 0xe) = 0;
  (*local_70)();
  lVar1 = DAT_027050c8;
  if (DAT_027050c8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01d65120();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d65490();
  local_48 = '\0';
  local_50 = puVar7;
  FUN_01d5d8d0();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_d0 = '\0';
  local_d8 = plVar6;
  FUN_01d654e0();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01d77960();
  local_b0 = 0;
  local_b8 = *(longlong *)(unaff_RDI + 0xb8);
  if (local_b8 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_b0 = '\x01';
  FUN_01d5d7f0(uVar10,1);
  lVar1 = local_a8;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


