// Function: FUN_01b02c30
// Address: 01b02c30
// Size: 1587 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b03064) */
/* WARNING: Removing unreachable block (ram,0x01b02dc5) */
/* WARNING: Removing unreachable block (ram,0x01b02dd1) */
/* WARNING: Removing unreachable block (ram,0x01b03212) */
/* WARNING: Removing unreachable block (ram,0x01b0321e) */
/* WARNING: Removing unreachable block (ram,0x01b02e6a) */
/* WARNING: Removing unreachable block (ram,0x01b02e77) */
/* WARNING: Removing unreachable block (ram,0x01b0302c) */
/* WARNING: Removing unreachable block (ram,0x01b03035) */
/* WARNING: Removing unreachable block (ram,0x01b02d0c) */
/* WARNING: Removing unreachable block (ram,0x01b03070) */
/* WARNING: Removing unreachable block (ram,0x01b03090) */
/* WARNING: Removing unreachable block (ram,0x01b03072) */
/* WARNING: Removing unreachable block (ram,0x01b03092) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b02c30(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float extraout_XMM0_Db;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  uint extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fStack_134;
  undefined4 uStack_12c;
  longlong *local_100;
  char local_f8;
  longlong local_c8;
  char local_c0;
  longlong *local_a8;
  char local_a0;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  
  plVar2 = local_58;
  FUN_01a1d6e0();
  (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              *local_68 + 0x38))();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              *local_a8 + 0x38))();
  FUN_00d51d20();
  if (local_58 == (longlong *)0x0) {
    bVar1 = false;
    plVar7 = (longlong *)0x0;
    if (local_50 != '\0') {
      plVar7 = (longlong *)0x0;
      bVar1 = false;
    }
  }
  else {
    plVar7 = local_58;
    if (local_50 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_50 = '\0';
      bVar1 = true;
    }
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  (**(code **)((longlong)&dylib_command_00001220.cmd + *local_68))();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  uStack_12c = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_01d5dc80();
    FUN_01d5d8d0();
    FUN_01d66790();
    FUN_00d50b20();
  }
  uVar8 = FUN_01adabe0();
  uVar9 = (**(code **)(*unaff_RDI + 0x640))();
  FUN_01d5b240(uVar9,0);
  FUN_01d65230();
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_100 + 0x370))();
  if (local_c0 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = '\0';
  }
  (**(code **)(*local_58 + 0x5d0))();
  if (local_c8 != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01a1d6e0();
  iVar3 = (**(code **)(*local_58 + 0xd08))();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d5e2b0();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01b030ea;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) {
LAB_01b030ea:
    iVar5 = -1;
    goto LAB_01b030ef;
  }
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  iVar6 = -1;
  iVar5 = -1;
  while ((iVar6 = iVar6 + 1, iVar6 < *(int *)((longlong)plVar2 + 0xc) &&
         (local_58 = *(longlong **)(plVar2[2] + (longlong)iVar6 * 8), iVar6 < 3))) {
    iVar4 = FUN_01d654a0();
    if (iVar4 == iVar3) {
      iVar5 = iVar6;
    }
  }
  FUN_002a0a30();
  FUN_00d50b20();
LAB_01b030ef:
  FUN_01a1d6e0();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_01d62b10();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  auVar16._8_8_ = extraout_XMM0_Qb;
  auVar16._0_8_ = uVar8;
  auVar10._4_12_ = auVar16._4_12_;
  auVar10._0_4_ = (float)uVar8 + DAT_02390d34;
  auVar11._0_4_ = _DAT_023945e0 & (uint)(extraout_XMM0_Db * DAT_02390120);
  auVar11._4_4_ = _UNK_023945e4 & (uint)extraout_XMM0_Db;
  auVar11._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd;
  auVar11._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
  auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
  auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + extraout_XMM0_Db * DAT_02390120;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16 = roundss(auVar15,auVar12,0xb);
  fStack_134 = (float)((ulonglong)param_1 >> 0x20);
  auVar13._4_4_ = fStack_134;
  auVar13._0_4_ = fStack_134;
  auVar13._8_4_ = uStack_12c;
  auVar13._12_4_ = uStack_12c;
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = fStack_134 - auVar16._0_4_;
  auVar16 = insertps(auVar10,auVar14,0x10);
  FUN_01d5ef60(auVar16._0_8_,iVar5);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_01d62b80();
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}


