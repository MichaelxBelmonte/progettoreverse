// Function: FUN_0198e770
// Address: 0198e770
// Size: 3751 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0198eedf) */
/* WARNING: Removing unreachable block (ram,0x0198eee8) */
/* WARNING: Removing unreachable block (ram,0x0198f193) */
/* WARNING: Removing unreachable block (ram,0x0198f19c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0198e770(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *unaff_RDI;
  undefined4 uVar13;
  float fVar14;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  FUN_01a195d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_026286f0;
  puVar9[2] = &DAT_02628a78;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  uVar6 = _UNK_0239372c;
  uVar5 = _UNK_02393728;
  uVar13 = _UNK_02393724;
  *(undefined4 *)(puVar9 + 6) = _DAT_02393720;
  *(undefined4 *)((longlong)puVar9 + 0x34) = uVar13;
  *(undefined4 *)(puVar9 + 7) = uVar5;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar6;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  FUN_00d500e0();
  puVar9[8] = unaff_RDI;
  puVar1 = (undefined8 *)unaff_RDI[0xa5];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0xa5] = (longlong)puVar9;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  *(undefined1 *)((longlong)unaff_RDI + 0x4dd) = 1;
  uVar13 = FUN_00d6f370();
  lVar4 = DAT_027e1348;
  if (DAT_027e1348 != 0) {
    uVar13 = FUN_00d50b00();
  }
  uVar13 = FUN_00d708a0(uVar13,1);
  *(undefined4 *)(unaff_RDI + 0x5e) = uVar13;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  iVar12 = 1;
  if ((int)unaff_RDI[0x5e] != 0) {
    iVar12 = (int)unaff_RDI[0x5e];
  }
  *(int *)((longlong)unaff_RDI + 0x2f4) = iVar12;
  *(undefined4 *)(unaff_RDI + 0x43) = 0x3e4ccccd;
  lVar4 = CONCAT44(DAT_023dccf4._4_4_,(undefined4)DAT_023dccf4);
  unaff_RDI[0x3f] = CONCAT44(DAT_023dccec._4_4_,(undefined4)DAT_023dccec);
  unaff_RDI[0x40] = lVar4;
  *(undefined1 *)(unaff_RDI + 0x50) = 1;
  unaff_RDI[0x53] = 0x7ff8000000000000;
  lVar4 = CONCAT44(DAT_023dccf4._4_4_,(undefined4)DAT_023dccf4);
  unaff_RDI[0x5c] = CONCAT44(DAT_023dccec._4_4_,(undefined4)DAT_023dccec);
  unaff_RDI[0x5d] = lVar4;
  *(undefined8 *)((longlong)unaff_RDI + 0x28c) = DAT_023dccdc;
  uVar6 = DAT_023dccf4._4_4_;
  uVar5 = (undefined4)DAT_023dccf4;
  uVar13 = DAT_023dccec._4_4_;
  *(undefined4 *)(unaff_RDI + 100) = (undefined4)DAT_023dccec;
  *(undefined4 *)((longlong)unaff_RDI + 0x324) = uVar13;
  *(undefined4 *)(unaff_RDI + 0x65) = uVar5;
  *(undefined4 *)((longlong)unaff_RDI + 0x32c) = uVar6;
  *(undefined2 *)((longlong)unaff_RDI + 0x352) = 0x101;
  *(undefined1 *)((longlong)unaff_RDI + 0x354) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x35c) = 0;
  unaff_RDI[0x55] = 0x7ff8000000000000;
  *(undefined4 *)(unaff_RDI + 0x56) = 0x7fc00000;
  unaff_RDI[0x57] = 0x7ff8000000000000;
  *(undefined4 *)(unaff_RDI + 0x4e) = 0;
  *(undefined4 *)(unaff_RDI + 0x79) = 0x3f800000;
  *(undefined4 *)(unaff_RDI + 0x85) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x42c) = 1;
  fVar14 = (float)(**(code **)(*unaff_RDI + 0xc40))();
  *(float *)(unaff_RDI + 0x44) = fVar14 + DAT_02394218;
  fVar14 = (float)(**(code **)(*unaff_RDI + 0xc40))();
  *(float *)((longlong)unaff_RDI + 0x224) = fVar14 + DAT_0239394c;
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar9 = &DAT_026359a0;
  puVar9[2] = &DAT_02635e60;
  (*DAT_026359b8)();
  puVar1 = (undefined8 *)unaff_RDI[0x82];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x82] = (longlong)puVar9;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar9 = &DAT_02630fb8;
  puVar9[2] = &DAT_02631478;
  (*DAT_02630fd0)();
  puVar1 = (undefined8 *)unaff_RDI[0x83];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x83] = (longlong)puVar9;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar9 = &DAT_0261bc38;
  puVar9[2] = &DAT_0261c0f8;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  (*DAT_0261bc50)();
  puVar1 = (undefined8 *)unaff_RDI[0x84];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x84] = (longlong)puVar9;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar10 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar10 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[0x7a];
  if (plVar2 == plVar10) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x7a] = (longlong)plVar10;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01ca6970();
  lVar4 = local_e0;
  if (local_d8 == '\0') {
    if (local_e0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d8 = '\0';
  }
  FUN_01c92fe0();
  lVar3 = unaff_RDI[0x77];
  lVar11 = lVar3;
  if (lVar3 == local_40) goto LAB_0198ebe1;
  lVar11 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar11 = 0;
      goto LAB_0198eb96;
    }
    FUN_00d50b00();
    lVar3 = unaff_RDI[0x77];
    unaff_RDI[0x77] = local_40;
  }
  else {
    local_38 = '\0';
LAB_0198eb96:
    unaff_RDI[0x77] = lVar11;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    lVar11 = local_40;
  }
LAB_0198ebe1:
  if ((local_38 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  uVar13 = FUN_00d6f370();
  lVar4 = DAT_02705950;
  if (DAT_02705950 != 0) {
    uVar13 = FUN_00d50b00();
  }
  uVar13 = FUN_00d708a0(uVar13,0);
  *(undefined4 *)(unaff_RDI + 0x9c) = uVar13;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025823b0;
  puVar9[4] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x12) = 0;
  (*DAT_025823c8)();
  puVar1 = (undefined8 *)unaff_RDI[0x67];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x67] = (longlong)puVar9;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00df2b00();
  local_c8 = 0;
  (**(code **)(unaff_RDI[0x29] + 0x10))();
  FUN_00d50b00();
  local_c8 = '\x01';
  local_d0 = unaff_RDI + 0x29;
  FUN_00df2b40();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    (**(code **)(*local_d0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00df2c50();
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025e2bf8;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  (*DAT_025e2c10)();
  puVar1 = (undefined8 *)unaff_RDI[0x6f];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x6f] = (longlong)puVar9;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_0258a670;
  pcVar7 = DAT_0258a688;
  (*DAT_0258a688)();
  puVar1 = (undefined8 *)unaff_RDI[0x45];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x45] = (longlong)puVar9;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(1,1,1);
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_0258a670;
  (*pcVar7)();
  puVar1 = (undefined8 *)unaff_RDI[0x47];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x47] = (longlong)puVar9;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(1,1,1);
  uVar13 = FUN_00d6f370();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar13 = FUN_00d50b00();
  }
  lVar4 = DAT_027e1350;
  plVar2 = (longlong *)unaff_RDI[0x27];
  if (DAT_027e1350 != 0) {
    uVar13 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar13,1);
  (**(code **)(*plVar2 + 0x3d0))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(&DAT_00001480 + *unaff_RDI))();
  uVar13 = (**(code **)(&UNK_00001498 + *unaff_RDI))();
  *(undefined4 *)(unaff_RDI + 0x6b) = uVar13;
  *(undefined4 *)((longlong)unaff_RDI + 0x51c) = 0x3f800000;
  *(undefined4 *)((longlong)unaff_RDI + 0x2fc) = 0;
  FUN_00d6f370();
  lVar4 = DAT_027e1358;
  if (DAT_027e1358 != 0) {
    FUN_00d50b00();
  }
  cVar8 = FUN_00d70700();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar8 != '\0') {
    uVar13 = FUN_00d6f370();
    lVar4 = DAT_027e1358;
    if (DAT_027e1358 != 0) {
      uVar13 = FUN_00d50b00();
    }
    uVar13 = FUN_00d708a0(uVar13,0);
    *(undefined4 *)((longlong)unaff_RDI + 0x2fc) = uVar13;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(unaff_RDI + 0x60) = 0;
  FUN_00d6f370();
  lVar4 = DAT_027e1360;
  if (DAT_027e1360 != 0) {
    FUN_00d50b00();
  }
  cVar8 = FUN_00d70700();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar8 != '\0') {
    uVar13 = FUN_00d6f370();
    lVar4 = DAT_027e1360;
    if (DAT_027e1360 != 0) {
      uVar13 = FUN_00d50b00();
    }
    uVar13 = FUN_00d708a0(uVar13,0);
    *(undefined4 *)(unaff_RDI + 0x60) = uVar13;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_180 = DAT_02702db8;
  if (DAT_02702db8 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  local_170 = 0;
  local_168 = '\0';
  FUN_00d41430(&local_170,&local_180);
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_160 = DAT_027e1368;
  if (DAT_027e1368 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  FUN_00d41430(&local_150,&local_160);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_140 = DAT_027ebc60;
  if (DAT_027ebc60 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  local_88 = 0;
  lVar4 = unaff_RDI[0x27];
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_90 = lVar4;
  FUN_00d41430(&local_90,&local_140);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_130 = DAT_026fe3e0;
  if (DAT_026fe3e0 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_00d41430(&local_120,&local_130);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_110 = DAT_027e1370;
  if (DAT_027e1370 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d41430(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(unaff_RDI[0x2a] + 0x10))();
  uVar13 = FUN_00d50b00();
  local_f0 = 0;
  local_e8 = '\0';
  FUN_01f47190(uVar13,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI + 0x2a != (longlong *)0x0) {
    (**(code **)(unaff_RDI[0x2a] + 0x10))();
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x9f) = 0;
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


