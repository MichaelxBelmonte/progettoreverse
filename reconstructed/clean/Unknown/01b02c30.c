// Function: FUN_01b02c30
// Address: 01b02c30
// Size: 1587 bytes
// Class: Unknown

void FUN_01b02c30(uint64_t param_1)

{
  bool bVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float extraout_XMM0_Db;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint extraout_XMM0_Dd;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  float fStack_134;
  uint32_t uStack_12c;
  int64_t *local_100;
  char local_f8;
  int64_t local_c8;
  char local_c0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  
  plVar2 = local_58;
  FUN_01a1d6e0();
  (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              *local_68 + 0x38))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (int64_t *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              *local_a8 + 0x38))();
  FUN_00d51d20();
  if (local_58 == (int64_t *)0x0) {
    bVar1 = false;
    plVar7 = (int64_t *)0x0;
    if (local_50 != '\0') {
      plVar7 = (int64_t *)0x0;
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
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  (**(code **)((int64_t)&dylib_command_00001220.cmd + *local_68))();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  uStack_12c = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_01d5dc80();
    FUN_01d5d8d0();
    FUN_01d66790();
    FUN_00d50b20();
  }
  uVar8 = FUN_01adabe0();
  uVar9 = (**(code **)(*this_ptr + 0x640))();
  FUN_01d5b240(uVar9,0);
  FUN_01d65230();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  (**(code **)(*this_ptr + 0x640))();
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
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01a1d6e0();
  iVar3 = (**(code **)(*local_58 + 0xd08))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d5e2b0();
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_01b030ea;
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) {
LAB_01b030ea:
    iVar5 = -1;
    goto LAB_01b030ef;
  }
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  iVar6 = -1;
  iVar5 = -1;
  while ((iVar6 = iVar6 + 1, iVar6 < *(int *)((int64_t)plVar2 + 0xc) &&
         (local_58 = *(int64_t **)(plVar2[2] + (int64_t)iVar6 * 8), iVar6 < 3))) {
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
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_01d62b10();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  auVar16._8_8_ = extraout_XMM0_Qb;
  auVar16._0_8_ = uVar8;
  auVar10._4_12_ = auVar16._4_12_;
  auVar10._0_4_ = (float)uVar8 + g_02390d34;
  auVar11._0_4_ = g_023945e0 & (uint)(extraout_XMM0_Db * g_02390120);
  auVar11._4_4_ = _UNK_023945e4 & (uint)extraout_XMM0_Db;
  auVar11._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd;
  auVar11._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
  auVar12._4_12_ = SUB1612(auVar11 | g_023945f0,4);
  auVar12._0_4_ = SUB164(auVar11 | g_023945f0,0) + extraout_XMM0_Db * g_02390120;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16 = roundss(auVar15,auVar12,0xb);
  fStack_134 = (float)((uint64_t)param_1 >> 0x20);
  auVar13._4_4_ = fStack_134;
  auVar13._0_4_ = fStack_134;
  auVar13._8_4_ = uStack_12c;
  auVar13._12_4_ = uStack_12c;
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = fStack_134 - auVar16._0_4_;
  auVar16 = insertps(auVar10,auVar14,0x10);
  FUN_01d5ef60(auVar16._0_8_,iVar5);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01d62b80();
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}

