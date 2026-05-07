// Function: FUN_01d68660
// Address: 01d68660
// Size: 1421 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d6873a) */
/* WARNING: Removing unreachable block (ram,0x01d68746) */
/* WARNING: Removing unreachable block (ram,0x01d6895b) */
/* WARNING: Removing unreachable block (ram,0x01d68967) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d68660(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  undefined8 in_XMM1_Qb;
  undefined1 auVar17 [16];
  float fVar19;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  longlong local_b8;
  char local_b0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = FUN_01e07410();
  (**(code **)(*unaff_RDI + 0x640))();
  plVar3 = local_40;
  uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
  FUN_01e3f820();
  uVar6 = (**(code **)(*unaff_RDI + 0x9a0))();
  FUN_01e420b0();
  (**(code **)(*plVar3 + 0x3f0))((uVar8 & 0xff) << 3,uVar1,0,uVar6);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  local_98 = (float)param_2;
  fStack_94 = (float)((ulonglong)param_2 >> 0x20);
  fStack_90 = (float)in_XMM1_Qb;
  fStack_8c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar11 = param_2;
  FUN_01e08670();
  cVar7 = (**(code **)(*unaff_RDI + 0xb30))();
  local_128 = (float)uVar11;
  fStack_124 = (float)((ulonglong)uVar11 >> 0x20);
  fStack_120 = (float)in_XMM1_Qb;
  fStack_11c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar18 = fStack_90;
  fVar19 = fStack_8c;
  if (cVar7 != '\0') {
    local_98 = local_98 - local_128;
    fStack_94 = fStack_94 - fStack_124;
    fVar18 = fStack_90 - fStack_120;
    fVar19 = fStack_8c - fStack_11c;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar3 = local_40;
  uVar1 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
  (**(code **)(*unaff_RDI + 0x960))();
  local_80 = local_50;
  local_78 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  (**(code **)(*unaff_RDI + 0x9e0))();
  local_68 = 0;
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b0 = '\0';
  }
  local_68 = '\x01';
  local_70 = local_b8;
  uVar2 = *(undefined4 *)((longlong)unaff_RDI + 0x174);
  (**(code **)(*unaff_RDI + 0x9a0))();
  FUN_01e420b0();
  auVar15._4_4_ = fStack_94;
  auVar15._0_4_ = local_98;
  auVar15._8_4_ = fVar18;
  auVar15._12_4_ = fVar19;
  auVar5._8_4_ = fStack_90;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = fStack_8c;
  auVar17 = blendps(auVar15,auVar5,2);
  (**(code **)(*plVar3 + 0x400))(&local_80,uVar1,&local_70,uVar2);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = (**(code **)(*unaff_RDI + 0xb30))();
  if (cVar7 != '\0') {
    FUN_01e08690();
    uVar11 = FUN_01d526f0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = (longlong *)*unaff_RSI;
    FUN_01e08690();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    auVar17._8_8_ = extraout_XMM0_Qb;
    auVar17._0_8_ = uVar11;
    auVar12._0_4_ = (local_128 - (float)uVar11) * _DAT_023945d0;
    auVar12._4_4_ = (fStack_124 - (float)((ulonglong)uVar11 >> 0x20)) * _UNK_023945d4;
    auVar12._8_4_ = (fStack_120 - (float)extraout_XMM0_Qb) * _UNK_023945d8;
    auVar12._12_4_ = (fStack_11c - (float)((ulonglong)extraout_XMM0_Qb >> 0x20)) * _UNK_023945dc;
    roundps(auVar12,auVar12,10);
    (**(code **)(*plVar3 + 0x408))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x970))();
  if (local_40 == (longlong *)0x0) {
    bVar10 = unaff_RDI[0x45] != 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0x970))();
    iVar9 = FUN_00d8c7a0();
    if (iVar9 == 0) {
      bVar10 = unaff_RDI[0x45] != 0;
    }
    else {
      bVar10 = false;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    FUN_01d526f0();
    FUN_01e3f820();
    fVar18 = auVar17._4_4_ - extraout_XMM0_Db;
    fVar19 = auVar17._12_4_ - extraout_XMM0_Dd;
    auVar13._4_4_ = fVar18;
    auVar13._0_4_ = fVar18;
    auVar13._8_4_ = fVar19;
    auVar13._12_4_ = fVar19;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = fVar18 * DAT_0239011c;
    auVar15 = roundss(auVar14,auVar14,10);
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = auVar15._0_4_ + DAT_02390d34;
    insertps(_DAT_024215a0,auVar16,0x10);
    plVar3 = (longlong *)*unaff_RSI;
    lVar4 = unaff_RDI[0x45];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar3 + 0x408))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


