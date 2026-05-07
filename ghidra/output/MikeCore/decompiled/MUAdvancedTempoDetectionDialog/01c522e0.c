// Function: FUN_01c522e0
// Address: 01c522e0
// Size: 1674 bytes
// Class: MUAdvancedTempoDetectionDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c522e0(void)

{
  longlong lVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
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
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_30;
  char local_28;
  
  FUN_01e3b710();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_0266ddf0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  FUN_00d500e0();
  lVar1 = *(longlong *)(unaff_RDI + 0x2a0);
  *(undefined8 **)(unaff_RDI + 0x2a0) = puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 400) = 1;
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar8 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1d8);
  *(longlong **)(unaff_RDI + 0x1d8) = plVar8;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x22f) = 1;
  *(undefined1 *)(unaff_RDI + 0x1d0) = 1;
  uVar6 = _UNK_0241ea08;
  *(undefined8 *)(unaff_RDI + 0x1b8) = _DAT_0241ea00;
  *(undefined8 *)(unaff_RDI + 0x1c0) = uVar6;
  uVar5 = DAT_023dccf4._4_4_;
  uVar4 = (undefined4)DAT_023dccf4;
  uVar3 = DAT_023dccec._4_4_;
  *(undefined4 *)(unaff_RDI + 0x21c) = (undefined4)DAT_023dccec;
  *(undefined4 *)(unaff_RDI + 0x220) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x224) = uVar4;
  *(undefined4 *)(unaff_RDI + 0x228) = uVar5;
  FUN_016bf040();
  lVar1 = *(longlong *)(unaff_RDI + 0x210);
  lVar10 = lVar1;
  if (lVar1 == local_30) goto LAB_01c52423;
  lVar10 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar10 = 0;
      goto LAB_01c523d8;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x210);
    *(longlong *)(unaff_RDI + 0x210) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01c523d8:
    *(longlong *)(unaff_RDI + 0x210) = lVar10;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar10 = local_30;
  }
LAB_01c52423:
  if ((local_28 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025823b0;
  puVar9[4] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x12) = 0;
  (*DAT_025823c8)();
  puVar7 = *(undefined8 **)(unaff_RDI + 0x150);
  if (puVar7 == puVar9) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x150) = puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00df2b00();
  local_88 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x140) + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_90 = (longlong *)(unaff_RDI + 0x140);
  FUN_00df2b40();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00df2c50();
  FUN_00d403d0();
  FUN_00d50b00();
  local_130 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_110 = DAT_027f0ae0;
  if (DAT_027f0ae0 != 0) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_027ebc50;
  if (DAT_027ebc50 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = -(ulonglong)(*(double *)(unaff_RDI + 0x1c0) == 0.0);
  dVar2 = (double)_log(SUB84(*(double *)(unaff_RDI + 0x1b8) /
                             (double)(~uVar11 & (ulonglong)*(double *)(unaff_RDI + 0x1c0) |
                                     DAT_0238fee8 & uVar11),0));
  *(float *)(unaff_RDI + 0x2a8) = (float)dVar2;
  return;
}


