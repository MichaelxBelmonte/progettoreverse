// Function: FUN_01ed4f50
// Address: 01ed4f50
// Size: 1002 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed530d) */
/* WARNING: Removing unreachable block (ram,0x01ed5319) */
/* WARNING: Removing unreachable block (ram,0x01ed5003) */
/* WARNING: Removing unreachable block (ram,0x01ed500c) */
/* WARNING: Removing unreachable block (ram,0x01ed5088) */
/* WARNING: Removing unreachable block (ram,0x01ed5094) */

void FUN_01ed4f50(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  float fVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong local_88;
  char local_80;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar1 = *(float *)(unaff_RDI + 0x5a);
  auVar6._4_12_ = in_XMM0._4_12_;
  auVar6._0_4_ = in_XMM0._0_4_ - fVar1;
  uVar5 = auVar6._0_8_;
  fVar10 = in_XMM1._4_4_;
  auVar12._4_4_ = fVar10;
  auVar12._0_4_ = fVar10;
  auVar12._8_4_ = in_XMM1._12_4_;
  auVar12._12_4_ = in_XMM1._12_4_;
  auVar8 = blendps(in_XMM1,ZEXT416((uint)fVar1),1);
  if (fVar1 < fVar10) {
    auVar11._4_12_ = auVar12._4_12_;
    auVar11._0_4_ = (fVar10 - fVar1) * DAT_0239011c;
    auVar12 = roundss(auVar11,auVar11,9);
    auVar6 = insertps(auVar6,auVar12,0x10);
    uVar5 = auVar6._0_8_;
    auVar9._0_4_ = auVar8._0_4_;
    auVar9._4_4_ = auVar9._0_4_;
    auVar9._8_4_ = auVar8._8_4_;
    auVar9._12_4_ = auVar9._8_4_;
    auVar8 = auVar9;
  }
  iVar2 = (int)param_2;
  if (*(char *)(*(longlong *)(unaff_RDI[0x58] + 0x10) + 4 + (longlong)iVar2 * 8) != '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x3f0))
              (0,0x14,*(undefined1 *)
                       (*(longlong *)(unaff_RDI[0x58] + 0x10) + 5 + (longlong)iVar2 * 8),1);
    if (*(int *)((longlong)unaff_RDI + 0x2cc) == iVar2) {
      (**(code **)(*local_40 + 0x390))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      plVar3 = (longlong *)*unaff_RSI;
      uVar5 = (**(code **)(*unaff_RDI + 0xa68))();
      auVar6 = auVar8;
      auVar7._0_8_ = (**(code **)(*unaff_RDI + 0xa68))();
      auVar7._8_8_ = extraout_XMM0_Qb_00;
      blendps(auVar6,auVar8,2);
      auVar8._8_8_ = extraout_XMM0_Qb;
      auVar8._0_8_ = uVar5;
      blendps(auVar8,auVar7,2);
      (**(code **)(*plVar3 + 0x3c8))();
    }
    FUN_00d50b20();
    return;
  }
  if (unaff_RDI[0x3e] == 0) {
    return;
  }
  plVar3 = (longlong *)unaff_RDI[0x55];
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FUN_00d50b00(uVar5,param_2,param_3,param_4,auVar8);
  if ((iVar2 < 0) || (*(int *)(unaff_RDI[0x57] + 0xc) <= iVar2)) {
    local_88 = 0;
  }
  else {
    local_88 = *(longlong *)(*(longlong *)(unaff_RDI[0x57] + 0x10) + (param_2 & 0xffffffff) * 8);
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  local_80 = '\x01';
  (**(code **)(*plVar3 + 0x50))(&local_88,&stack0xffffffffffffffb0);
  if (local_40 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    if (local_38 != '\0') {
      bVar4 = false;
      goto LAB_01ed5290;
    }
    FUN_00d50b00();
    plVar3 = local_40;
  }
  bVar4 = plVar3 == (longlong *)0x0;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ed5290:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_01d526f0();
    FUN_00d05510();
    (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


