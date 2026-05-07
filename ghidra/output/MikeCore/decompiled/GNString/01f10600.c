// Function: FUN_01f10600
// Address: 01f10600
// Size: 2166 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01f1064c) */
/* WARNING: Removing unreachable block (ram,0x01f10658) */
/* WARNING: Removing unreachable block (ram,0x01f10bbd) */
/* WARNING: Removing unreachable block (ram,0x01f10bc6) */
/* WARNING: Removing unreachable block (ram,0x01f10a55) */
/* WARNING: Removing unreachable block (ram,0x01f10a5e) */
/* WARNING: Removing unreachable block (ram,0x01f10b38) */
/* WARNING: Removing unreachable block (ram,0x01f10b41) */

void FUN_01f10600(undefined8 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *unaff_RDI;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  undefined8 *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined4 local_dc;
  longlong local_d8;
  char local_d0;
  undefined1 local_a8 [80];
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  iVar5 = FUN_01d5e2e0();
  lVar7 = unaff_RDI[0x30];
  lVar12 = *(longlong *)(unaff_RDI[0x2d] + 0x10);
  lVar11 = (longlong)iVar5 * 0x10;
  uVar1 = *(ulonglong *)(lVar12 + lVar11);
  local_a8._8_8_ = 0;
  local_a8._0_8_ = uVar1;
  auVar16 = local_a8._0_16_;
  fVar17 = *(float *)(lVar12 + 8 + lVar11);
  fVar14 = *(float *)(lVar12 + 0xc + lVar11);
  local_dc = param_2;
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x18) < 8)) ||
     (**(int **)(lVar7 + 0x10) != (int)unaff_RDI[0x28])) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    uVar13 = FUN_00c92160();
    lVar7 = unaff_RDI[0x30];
    if (7 < *(int *)(lVar7 + 0x18)) {
      lVar12 = 1;
      do {
        lVar7 = *(longlong *)(lVar7 + 0x10);
        iVar5 = *(int *)(puVar6 + 3);
        uVar13 = FUN_00c8e340(uVar13,1);
        *(undefined4 *)(puVar6[2] + (longlong)iVar5) = *(undefined4 *)(lVar7 + lVar12 * 4);
        lVar12 = lVar12 + 1;
        lVar7 = unaff_RDI[0x30];
        iVar5 = *(int *)(lVar7 + 0x18);
        iVar10 = iVar5 + 3;
        if (-1 < iVar5) {
          iVar10 = iVar5;
        }
      } while (lVar12 < iVar10 >> 2);
    }
  }
  FUN_01d64cb0();
  unaff_RDI[0x29] = (longlong)local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_a8._4_4_ = (undefined4)(uVar1 >> 0x20);
  if (*(int *)((longlong)unaff_RDI + 0x17c) == 3) {
    auVar3._4_4_ = local_a8._4_4_;
    auVar3._0_4_ = (float)local_a8._4_4_ + fVar14 + DAT_02390d00;
    auVar3._8_8_ = 0;
    auVar16 = insertps(auVar16,auVar3,0x10);
  }
  else if (*(int *)((longlong)unaff_RDI + 0x17c) == 2) {
    local_a8._0_4_ = (undefined4)uVar1;
    local_a8._0_4_ = (float)local_a8._0_4_ + fVar17;
    local_a8._8_8_ = 0;
    auVar16 = local_a8._0_16_;
  }
  local_a8._0_16_ = auVar16;
  (**(code **)(*unaff_RDI + 0x960))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d62b10();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0018ea70();
  (**(code **)(*unaff_RDI + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar9 = unaff_RDI;
  if (cVar4 == '\0') {
    plVar9 = DAT_02802688;
  }
  fVar17 = local_a8._4_4_;
  auVar16._4_12_ = local_a8._4_12_;
  if (plVar9 == (longlong *)0x0) {
    uVar13 = (**(code **)(*unaff_RDI + 0x640))();
    fVar14 = (float)(**(code **)(*local_40 + 0x3c8))(uVar13,0);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(*unaff_RDI + 0x640))();
    fVar15 = (float)(**(code **)(*local_40 + 0x3c8))(uVar13,2);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar15 = fVar17 - fVar15;
  }
  else {
    uVar13 = (**(code **)(*unaff_RDI + 0x640))();
    fVar14 = (float)(**(code **)(*local_40 + 0x3c8))(uVar13,0);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(*unaff_RDI + 0x640))();
    fVar15 = (float)(**(code **)(*local_40 + 0x3c8))(uVar13,2);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar15 = fVar17 + fVar15;
  }
  auVar16._0_4_ = local_a8._0_4_ - fVar14;
  auVar2._4_4_ = fVar17;
  auVar2._0_4_ = fVar15;
  auVar2._8_4_ = local_a8._12_4_;
  auVar2._12_4_ = local_a8._12_4_;
  auVar16 = insertps(auVar16,auVar2,0x10);
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01d3a560();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_a8._0_4_ = auVar16._0_4_;
  uVar13 = FUN_01e46ed0(local_a8._0_4_);
  if ((local_40 != (longlong *)0x0) &&
     (((iVar5 = FUN_01d3a5a0(), iVar5 == 6 || (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) ||
      (iVar5 = FUN_01d3a5a0(), iVar5 == 5)))) {
    uVar13 = FUN_01d3abf0();
  }
  FUN_01e49570();
  FUN_01f514b0(uVar13);
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e49570();
  lVar7 = local_d8;
  if (local_d0 == '\0') {
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  FUN_01f51370();
  FUN_01ede360(0,0,0);
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_00d50b00();
  local_130 = unaff_RDI[0x2b];
  local_128 = '\0';
  local_120 = unaff_RDI[0x2e];
  local_118 = '\0';
  local_108 = '\0';
  local_100 = 0;
  local_f8 = '\0';
  local_e8 = '\0';
  local_110 = puVar6;
  local_f0 = puVar8;
  FUN_01d5f100(local_a8._0_4_,local_dc,&local_130,(int)unaff_RDI[0x2c],&local_f0);
  if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (unaff_RDI[0x29] != 0) {
    FUN_01d62b80();
  }
  (**(code **)(*unaff_RDI + 0x938))();
  (**(code **)(*unaff_RDI + 0x4e0))();
  (**(code **)(*unaff_RDI + 0x618))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


