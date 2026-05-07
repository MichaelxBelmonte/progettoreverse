// Function: FUN_01ed0d70
// Address: 01ed0d70
// Size: 623 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed0e76) */
/* WARNING: Removing unreachable block (ram,0x01ed0e7f) */
/* WARNING: Removing unreachable block (ram,0x01ed0e33) */
/* WARNING: Removing unreachable block (ram,0x01ed0e3c) */
/* WARNING: Removing unreachable block (ram,0x01ed0ef9) */
/* WARNING: Removing unreachable block (ram,0x01ed0f02) */
/* WARNING: Removing unreachable block (ram,0x01ed0f31) */
/* WARNING: Removing unreachable block (ram,0x01ed0f3a) */

void FUN_01ed0d70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  longlong *unaff_RDI;
  float fVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar11 [16];
  undefined1 in_register_00001284 [12];
  float local_98;
  longlong local_30;
  char local_28;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar12 = (float)((ulonglong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if (unaff_RDI[8] == 0) {
    (**(code **)(*unaff_RDI + 0x508))();
  }
  FUN_01e5b880();
  uVar7 = FUN_01e3f820();
  FUN_01e3f820();
  auVar8._8_8_ = extraout_XMM0_Qb;
  auVar8._0_8_ = uVar7;
  auVar11._0_4_ = fVar6 + (float)uVar7;
  auVar11._4_4_ = fVar12 + (float)((ulonglong)uVar7 >> 0x20);
  auVar11._8_4_ = in_XMM1_Dc + (float)extraout_XMM0_Qb;
  auVar11._12_4_ = in_XMM1_Dd + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar8 = blendps(auVar8,auVar11,2);
  FUN_01e46ed0(auVar8._0_8_);
  FUN_01e3f820();
  iVar5 = 4;
  if (*(int *)(unaff_RDI[5] + 0xc) < 4) {
    iVar5 = *(int *)(unaff_RDI[5] + 0xc);
  }
  auVar3._4_12_ = in_register_00001284;
  auVar3._0_4_ = (float)iVar5 * auVar11._4_4_ + auVar11._4_4_;
  auVar8 = insertps(auVar11,auVar3,0x10);
  FUN_01e5ba50();
  FUN_01e5d9c0();
  lVar1 = unaff_RDI[5];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d2a8f0();
  FUN_01dd4c60();
  FUN_01ddd080();
  FUN_01dcb680();
  fVar6 = (float)FUN_01dd38e0();
  local_98 = auVar11._0_4_;
  if (local_98 < fVar6) {
    auVar9._0_8_ = FUN_01dd38e0();
    auVar9._8_8_ = extraout_XMM0_Qb_00;
    auVar10._4_12_ = auVar9._4_12_;
    auVar10._0_4_ = ((float)auVar9._0_8_ - local_98) + local_98;
    blendps(auVar8,auVar10,1);
    FUN_01e5ba50();
  }
  FUN_01e42030();
  if (local_30 == 0) {
    lVar2 = unaff_RDI[10];
    lVar4 = 0;
  }
  else {
    if (local_28 == '\0') {
      FUN_00d50b00();
    }
    lVar2 = unaff_RDI[10];
    lVar4 = local_30;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d8c820();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  FUN_01e5d9c0();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


