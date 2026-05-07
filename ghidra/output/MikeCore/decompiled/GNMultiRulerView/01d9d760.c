// Function: FUN_01d9d760
// Address: 01d9d760
// Size: 1030 bytes
// Class: GNMultiRulerView


/* WARNING: Removing unreachable block (ram,0x01d9da25) */
/* WARNING: Removing unreachable block (ram,0x01d9da2e) */
/* WARNING: Removing unreachable block (ram,0x01d9d9f3) */
/* WARNING: Removing unreachable block (ram,0x01d9d9fc) */
/* WARNING: Removing unreachable block (ram,0x01d9d857) */
/* WARNING: Removing unreachable block (ram,0x01d9d860) */
/* WARNING: Removing unreachable block (ram,0x01d9d818) */
/* WARNING: Removing unreachable block (ram,0x01d9d821) */
/* WARNING: Removing unreachable block (ram,0x01d9d960) */
/* WARNING: Removing unreachable block (ram,0x01d9d9e1) */
/* WARNING: Removing unreachable block (ram,0x01d9d975) */
/* WARNING: Removing unreachable block (ram,0x01d9da59) */
/* WARNING: Removing unreachable block (ram,0x01d9da62) */
/* WARNING: Removing unreachable block (ram,0x01d9d7de) */
/* WARNING: Removing unreachable block (ram,0x01d9d7e7) */

void FUN_01d9d760(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  float fVar12;
  undefined8 uVar11;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong local_40;
  char local_38;
  
  fVar12 = (float)((ulonglong)param_1 >> 0x20);
  if (DAT_028b8978 != '\0') {
    return;
  }
  DAT_028b8978 = 1;
  (**(code **)(*unaff_RDI + 0x918))();
  if (local_40 == 0) {
    bVar3 = 1;
    lVar8 = 0;
    bVar4 = false;
  }
  else {
    lVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = 0;
      bVar4 = true;
    }
    else {
      bVar3 = 0;
      bVar4 = true;
    }
  }
  local_40 = *unaff_RSI;
  cVar5 = FUN_00d24090();
  if (cVar5 != '\0') {
    local_40 = *unaff_RSI;
    FUN_00d23d90();
    if (0 < *(int *)(lVar8 + 0xc)) {
      lVar7 = 0;
      lVar6 = 0;
      bVar9 = false;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar7 * 8);
        if (lVar6 == lVar1) {
          lVar1 = lVar6;
          bVar10 = bVar9;
          if ((!bVar9) && (lVar6 != 0)) {
            FUN_00d50b00();
            bVar10 = true;
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          bVar10 = true;
          if ((bVar9) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar9 = bVar10;
        lVar6 = lVar1;
        uVar11 = FUN_01cf5cf0();
        auVar13._0_4_ = (float)uVar11 + (float)param_1;
        auVar13._4_4_ = (float)((ulonglong)uVar11 >> 0x20) + fVar12;
        auVar13._8_4_ = extraout_XMM0_Dc + in_XMM0_Dc;
        auVar13._12_4_ = extraout_XMM0_Dd + in_XMM0_Dd;
        auVar14._8_4_ = extraout_XMM0_Dc;
        auVar14._0_8_ = uVar11;
        auVar14._12_4_ = extraout_XMM0_Dd;
        auVar14 = blendps(auVar13,auVar14,2);
        FUN_01cf5ff0(auVar14._0_4_);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 0xc));
      goto LAB_01d9d938;
    }
  }
  bVar9 = false;
  lVar6 = 0;
LAB_01d9d938:
  (**(code **)(*unaff_RDI + 0x920))();
  if (local_40 == lVar8) {
    bVar10 = local_40 != 0;
    local_40 = lVar8;
    if ((bool)(bVar3 & bVar10)) {
      bVar4 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar10 = (bool)(bVar4 & lVar8 != 0);
    bVar4 = true;
    if (bVar10) {
      FUN_00d50b20();
    }
  }
  cVar5 = FUN_00d24090();
  if ((cVar5 != '\0') && (FUN_00d23d90(), 0 < *(int *)(local_40 + 0xc))) {
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar8 * 8);
      if (lVar6 == lVar7) {
        lVar7 = lVar6;
        bVar10 = bVar9;
        if ((!bVar9) && (lVar6 != 0)) {
          FUN_00d50b00();
          bVar10 = true;
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        bVar10 = true;
        if ((bVar9) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar9 = bVar10;
      lVar6 = lVar7;
      uVar11 = FUN_01cf5cf0();
      auVar15._0_4_ = (float)uVar11 + (float)param_1;
      auVar15._4_4_ = (float)((ulonglong)uVar11 >> 0x20) + fVar12;
      auVar15._8_4_ = extraout_XMM0_Dc_00 + in_XMM0_Dc;
      auVar15._12_4_ = extraout_XMM0_Dd_00 + in_XMM0_Dd;
      auVar2._8_4_ = extraout_XMM0_Dc_00;
      auVar2._0_8_ = uVar11;
      auVar2._12_4_ = extraout_XMM0_Dd_00;
      auVar14 = blendps(auVar15,auVar2,0xd);
      FUN_01cf5ff0(auVar14._0_4_);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(local_40 + 0xc));
  }
  DAT_028b8978 = 0;
  if ((bVar9) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


