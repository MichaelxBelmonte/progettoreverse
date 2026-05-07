// Function: FUN_005565f0
// Address: 005565f0
// Size: 1397 bytes
// Class: MDTimeGridController


/* WARNING: Removing unreachable block (ram,0x00556a99) */
/* WARNING: Removing unreachable block (ram,0x00556aa5) */
/* WARNING: Removing unreachable block (ram,0x00556751) */
/* WARNING: Removing unreachable block (ram,0x0055675d) */
/* WARNING: Removing unreachable block (ram,0x0055668b) */
/* WARNING: Removing unreachable block (ram,0x00556697) */
/* WARNING: Removing unreachable block (ram,0x0055689d) */
/* WARNING: Removing unreachable block (ram,0x005568a9) */
/* WARNING: Removing unreachable block (ram,0x0055698f) */
/* WARNING: Removing unreachable block (ram,0x0055699b) */
/* WARNING: Removing unreachable block (ram,0x00556af9) */
/* WARNING: Removing unreachable block (ram,0x00556b05) */
/* WARNING: Removing unreachable block (ram,0x005566ec) */
/* WARNING: Removing unreachable block (ram,0x005566f5) */
/* WARNING: Removing unreachable block (ram,0x0055663d) */
/* WARNING: Removing unreachable block (ram,0x00556646) */
/* WARNING: Removing unreachable block (ram,0x00556942) */
/* WARNING: Removing unreachable block (ram,0x0055694b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_005565f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *unaff_RDI;
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar3 [16];
  longlong local_78;
  char local_70;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*param_2 + 0x370))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar2 = FUN_01d43d10();
  local_58 = (float)uVar2;
  fStack_54 = (float)((ulonglong)uVar2 >> 0x20);
  fStack_50 = (float)extraout_XMM0_Qb;
  fStack_4c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar3._0_4_ = local_58 + _DAT_023b5550;
  auVar3._4_4_ = fStack_54 + _UNK_023b5554;
  auVar3._8_4_ = fStack_50 + _UNK_023b5558;
  auVar3._12_4_ = fStack_4c + _UNK_023b555c;
  auVar3 = roundps(auVar3,auVar3,10);
  FUN_01d4ed90(auVar3._0_8_,DAT_02390124);
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d52700();
  FUN_01d52740();
  FUN_01d48a10();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  FUN_01cfbc00();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01d488d0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x3f8))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  FUN_01d526d0();
  plVar1 = (longlong *)0x0;
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = local_40;
  }
  FUN_01d4ed90();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d52700();
  FUN_01d52740();
  FUN_01d48a10();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  FUN_01cfbc00();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01d488d0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x3f8))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  FUN_01d526d0();
  FUN_01d52660();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((local_40 == (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


