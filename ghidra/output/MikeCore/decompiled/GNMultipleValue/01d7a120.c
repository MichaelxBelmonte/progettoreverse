// Function: FUN_01d7a120
// Address: 01d7a120
// Size: 1554 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01d7a37d) */
/* WARNING: Removing unreachable block (ram,0x01d7a371) */
/* WARNING: Removing unreachable block (ram,0x01d7a401) */
/* WARNING: Removing unreachable block (ram,0x01d7a40d) */
/* WARNING: Removing unreachable block (ram,0x01d7a319) */
/* WARNING: Removing unreachable block (ram,0x01d7a322) */
/* WARNING: Removing unreachable block (ram,0x01d7a5e1) */
/* WARNING: Removing unreachable block (ram,0x01d7a5ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d7a120(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar5;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  undefined1 auVar6 [16];
  float fVar7;
  float in_XMM1_Dd;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_40;
  char local_38;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  if (unaff_RDI[0x48] != 0) {
    FUN_01d7c320();
    return;
  }
  (**(code **)(*unaff_RDI + 0xad0))();
  (**(code **)(*unaff_RDI + 0x3a0))();
  FUN_01e42250();
  FUN_00d403d0();
  FUN_00d3fc60();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x46];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01e53c20();
  FUN_01e3f820();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  FUN_01e3f820();
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar5;
  auVar6._4_4_ = fVar7 + extraout_XMM0_Db;
  auVar6._0_4_ = fVar7 + extraout_XMM0_Db + DAT_02390d00;
  auVar6._8_4_ = in_XMM1_Dd + extraout_XMM0_Dd;
  auVar6._12_4_ = in_XMM1_Dd + extraout_XMM0_Dd;
  auVar6 = insertps(auVar2,auVar6,0x10);
  FUN_01e46ed0(auVar6._0_8_);
  FUN_00d50b00();
  FUN_01d7c6e0();
  plVar3 = (longlong *)unaff_RDI[0x48];
  plVar4 = plVar3;
  if (plVar3 == local_40) goto LAB_01d7a2c8;
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_01d7a27d;
    }
    FUN_00d50b00();
    plVar3 = (longlong *)unaff_RDI[0x48];
    unaff_RDI[0x48] = (longlong)local_40;
  }
  else {
    local_38 = '\0';
LAB_01d7a27d:
    unaff_RDI[0x48] = (longlong)plVar4;
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar4 = local_40;
  }
LAB_01d7a2c8:
  if ((local_38 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_88 = local_40;
  FUN_01e5ba50();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar3 = (longlong)&DAT_026890a8;
  plVar3[2] = (longlong)&DAT_026899d0;
  FUN_00d500e0();
  (**(code **)(*plVar3 + 0x4d0))();
  FUN_01e5ca90();
  (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)unaff_RDI[0x46];
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01e5ca90();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x4d8))();
  FUN_00d05530();
  (**(code **)(*plVar4 + 0x4c8))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d403d0();
  lVar1 = DAT_026fc520;
  if (DAT_026fc520 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_c8 = 0;
  local_c0 = '\0';
  FUN_00d40470(&local_c8,&stack0xffffffffffffff90,3,3);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d7bb00();
  (**(code **)(*unaff_RDI + 0x6b0))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_b8 = 0;
  local_b0 = '\0';
  (**(code **)(*unaff_RDI + 0x6a8))();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)unaff_RDI[0x46];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00d50b00();
  local_a8 = *unaff_RSI;
  local_a0 = '\0';
  (**(code **)(*plVar3 + 0x5a8))(uVar5,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_98 = local_40;
  local_90 = '\0';
  (**(code **)(*unaff_RDI + 0x6a8))();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


