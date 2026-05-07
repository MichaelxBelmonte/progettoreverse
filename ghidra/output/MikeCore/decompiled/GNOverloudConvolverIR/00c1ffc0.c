// Function: FUN_00c1ffc0
// Address: 00c1ffc0
// Size: 2479 bytes
// Class: GNOverloudConvolverIR
// String references:
//   "_title"
//   "_samples"
//   "_sampleRate"
//   "_updateIR"
//   "_changeCount"
//   "GNOverloudConvolverIR"
//   "vI"


/* WARNING: Removing unreachable block (ram,0x00c20558) */
/* WARNING: Removing unreachable block (ram,0x00c20564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1ffc0(float param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  longlong local_128;
  char local_120;
  undefined8 *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 *local_80;
  undefined4 local_78;
  int local_74;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar8 = FUN_00d470c0(SUB84((double)param_1,0));
  puVar4 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (undefined8 *)0x0)) {
    uVar8 = FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  if (*param_4 == 0) goto LAB_00c204d2;
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_78 = 1;
  local_80 = &DAT_024cc6f0;
  local_74 = param_3;
  uVar8 = FUN_00db2930("vI","_updateIR",&local_80);
  if (unaff_RDI != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar7 = (longlong)param_3;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + lVar7 * 8);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  if ((DAT_0276df80 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_07, iVar5 != 0)) {
    _DAT_0276ded0 = FUN_00d4fe50();
    _DAT_0276deb8 = "GNOverloudConvolverIR";
    _DAT_0276dec0 = 0x38;
    _DAT_0276dec8 = FUN_00c40fb0;
    _DAT_0276ded8 = 0;
    uRam000000000276dee0 = 0;
    _DAT_0276dee8 = 0;
    uRam000000000276def0 = 0;
    _DAT_0276def8 = 0;
    uRam000000000276df00 = 0;
    _DAT_0276df08 = 0;
    uRam000000000276df10 = 0;
    _DAT_0276df18 = 0;
    uRam000000000276df20 = 0;
    _DAT_0276df28 = 0;
    uRam000000000276df30 = 0;
    _DAT_0276df38 = 0;
    uRam000000000276df40 = 0;
    _DAT_0276df48 = 0;
    uRam000000000276df50 = 0;
    _DAT_0276df58 = 0;
    uRam000000000276df60 = 0;
    _DAT_0276df68 = 0;
    uRam000000000276df70 = 0;
    _DAT_0276df78 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    lVar6 = FUN_00e858c0(extraout_XMM0_Da,1);
    uVar8 = extraout_XMM0_Da_00;
    if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_00c20159;
LAB_00c2014b:
    local_68 = 0;
    uVar8 = FUN_00d50b00();
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x30);
    uVar8 = extraout_XMM0_Da;
    if (lVar6 != 0) goto LAB_00c2014b;
LAB_00c20159:
    lVar6 = 0;
  }
  local_68 = '\x01';
  local_70 = lVar6;
  uVar8 = FUN_00db2960(uVar8,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + lVar7 * 8);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  if ((DAT_0276df80 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_08, iVar5 != 0)) {
    _DAT_0276ded0 = FUN_00d4fe50();
    _DAT_0276deb8 = "GNOverloudConvolverIR";
    _DAT_0276dec0 = 0x38;
    _DAT_0276dec8 = FUN_00c40fb0;
    _DAT_0276ded8 = 0;
    uRam000000000276dee0 = 0;
    _DAT_0276dee8 = 0;
    uRam000000000276def0 = 0;
    _DAT_0276def8 = 0;
    uRam000000000276df00 = 0;
    _DAT_0276df08 = 0;
    uRam000000000276df10 = 0;
    _DAT_0276df18 = 0;
    uRam000000000276df20 = 0;
    _DAT_0276df28 = 0;
    uRam000000000276df30 = 0;
    _DAT_0276df38 = 0;
    uRam000000000276df40 = 0;
    _DAT_0276df48 = 0;
    uRam000000000276df50 = 0;
    _DAT_0276df58 = 0;
    uRam000000000276df60 = 0;
    _DAT_0276df68 = 0;
    uRam000000000276df70 = 0;
    _DAT_0276df78 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    lVar6 = FUN_00e858c0(extraout_XMM0_Da_01,1);
    uVar8 = extraout_XMM0_Da_02;
    if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_00c2024b;
LAB_00c2023d:
    local_58 = 0;
    uVar8 = FUN_00d50b00();
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x30);
    uVar8 = extraout_XMM0_Da_01;
    if (lVar6 != 0) goto LAB_00c2023d;
LAB_00c2024b:
    lVar6 = 0;
  }
  local_58 = '\x01';
  local_60 = lVar6;
  uVar8 = FUN_00db2960(uVar8,&local_60);
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + lVar7 * 8);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  if ((DAT_0276df80 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_09, iVar5 != 0)) {
    _DAT_0276ded0 = FUN_00d4fe50();
    _DAT_0276deb8 = "GNOverloudConvolverIR";
    _DAT_0276dec0 = 0x38;
    _DAT_0276dec8 = FUN_00c40fb0;
    _DAT_0276ded8 = 0;
    uRam000000000276dee0 = 0;
    _DAT_0276dee8 = 0;
    uRam000000000276def0 = 0;
    _DAT_0276def8 = 0;
    uRam000000000276df00 = 0;
    _DAT_0276df08 = 0;
    uRam000000000276df10 = 0;
    _DAT_0276df18 = 0;
    uRam000000000276df20 = 0;
    _DAT_0276df28 = 0;
    uRam000000000276df30 = 0;
    _DAT_0276df38 = 0;
    uRam000000000276df40 = 0;
    _DAT_0276df48 = 0;
    uRam000000000276df50 = 0;
    _DAT_0276df58 = 0;
    uRam000000000276df60 = 0;
    _DAT_0276df68 = 0;
    uRam000000000276df70 = 0;
    _DAT_0276df78 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    lVar6 = FUN_00e858c0(extraout_XMM0_Da_03,1);
    uVar8 = extraout_XMM0_Da_04;
    if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_00c2033d;
LAB_00c2032f:
    local_48 = 0;
    uVar8 = FUN_00d50b00();
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x30);
    uVar8 = extraout_XMM0_Da_03;
    if (lVar6 != 0) goto LAB_00c2032f;
LAB_00c2033d:
    lVar6 = 0;
  }
  local_48 = '\x01';
  local_50 = lVar6;
  uVar8 = FUN_00db2960(uVar8,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + lVar7 * 8);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  if ((DAT_0276df80 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_10, iVar5 != 0)) {
    _DAT_0276ded0 = FUN_00d4fe50();
    _DAT_0276deb8 = "GNOverloudConvolverIR";
    _DAT_0276dec0 = 0x38;
    _DAT_0276dec8 = FUN_00c40fb0;
    _DAT_0276ded8 = 0;
    uRam000000000276dee0 = 0;
    _DAT_0276dee8 = 0;
    uRam000000000276def0 = 0;
    _DAT_0276def8 = 0;
    uRam000000000276df00 = 0;
    _DAT_0276df08 = 0;
    uRam000000000276df10 = 0;
    _DAT_0276df18 = 0;
    uRam000000000276df20 = 0;
    _DAT_0276df28 = 0;
    uRam000000000276df30 = 0;
    _DAT_0276df38 = 0;
    uRam000000000276df40 = 0;
    _DAT_0276df48 = 0;
    uRam000000000276df50 = 0;
    _DAT_0276df58 = 0;
    uRam000000000276df60 = 0;
    _DAT_0276df68 = 0;
    uRam000000000276df70 = 0;
    _DAT_0276df78 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar7 = FUN_00e85ef0(uVar8,1);
  if (lVar7 == 0) {
    lVar7 = FUN_00e858c0(extraout_XMM0_Da_05,1);
    uVar8 = extraout_XMM0_Da_06;
    if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 0x28), lVar7 == 0)) goto LAB_00c2042f;
LAB_00c20421:
    local_38 = 0;
    uVar8 = FUN_00d50b00();
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    uVar8 = extraout_XMM0_Da_05;
    if (lVar7 != 0) goto LAB_00c20421;
LAB_00c2042f:
    lVar7 = 0;
  }
  local_38 = '\x01';
  local_40 = lVar7;
  FUN_00db2960(uVar8,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0276c9f8;
  if (DAT_0276c9f8 != 0) {
    FUN_00d50b00();
  }
  FUN_00db3140();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00db32a0();
LAB_00c204d2:
  lVar2 = DAT_027feca0;
  lVar7 = (longlong)param_3;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + lVar7 * 8);
  if (DAT_027feca0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_128 = lVar2;
  local_120 = '\x01';
  uVar8 = (**(code **)(*plVar3 + 0x80))(uVar8,&local_128);
  if ((local_120 != '\0') && (local_128 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027c76d0;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + lVar7 * 8);
  local_118 = puVar4;
  local_110 = '\0';
  if (DAT_027c76d0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_108 = lVar2;
  local_100 = '\x01';
  uVar8 = (**(code **)(*plVar3 + 0x80))(uVar8,&local_108);
  if ((local_100 != '\0') && (local_108 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_0276ca00;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + lVar7 * 8);
  local_f8 = *unaff_RSI;
  local_f0 = '\0';
  if (DAT_0276ca00 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_e8 = lVar2;
  local_e0 = '\x01';
  (**(code **)(*plVar3 + 0x80))(uVar8,&local_e8);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  piVar1 = (int *)(*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10) + lVar7 * 8) +
                  0x2c);
  *piVar1 = *piVar1 + 1;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


