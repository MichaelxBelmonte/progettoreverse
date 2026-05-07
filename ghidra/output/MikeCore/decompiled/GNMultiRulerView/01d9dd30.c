// Function: FUN_01d9dd30
// Address: 01d9dd30
// Size: 1502 bytes
// Class: GNMultiRulerView


/* WARNING: Removing unreachable block (ram,0x01d9e113) */
/* WARNING: Removing unreachable block (ram,0x01d9e11c) */
/* WARNING: Removing unreachable block (ram,0x01d9e012) */
/* WARNING: Removing unreachable block (ram,0x01d9e094) */
/* WARNING: Removing unreachable block (ram,0x01d9e02b) */
/* WARNING: Removing unreachable block (ram,0x01d9dde9) */
/* WARNING: Removing unreachable block (ram,0x01d9ddf2) */
/* WARNING: Removing unreachable block (ram,0x01d9de28) */
/* WARNING: Removing unreachable block (ram,0x01d9de31) */
/* WARNING: Removing unreachable block (ram,0x01d9df2b) */
/* WARNING: Removing unreachable block (ram,0x01d9df34) */
/* WARNING: Removing unreachable block (ram,0x01d9e0a7) */
/* WARNING: Removing unreachable block (ram,0x01d9e0b0) */
/* WARNING: Removing unreachable block (ram,0x01d9e0dc) */
/* WARNING: Removing unreachable block (ram,0x01d9e0e5) */
/* WARNING: Removing unreachable block (ram,0x01d9e215) */
/* WARNING: Removing unreachable block (ram,0x01d9e21e) */
/* WARNING: Removing unreachable block (ram,0x01d9df8a) */
/* WARNING: Removing unreachable block (ram,0x01d9df93) */
/* WARNING: Removing unreachable block (ram,0x01d9ddab) */
/* WARNING: Removing unreachable block (ram,0x01d9ddb4) */
/* WARNING: Removing unreachable block (ram,0x01d9e274) */
/* WARNING: Removing unreachable block (ram,0x01d9e27d) */
/* WARNING: Removing unreachable block (ram,0x01d9dfd4) */
/* WARNING: Removing unreachable block (ram,0x01d9dfe1) */
/* WARNING: Removing unreachable block (ram,0x01d9e2c1) */
/* WARNING: Removing unreachable block (ram,0x01d9e2ce) */

void FUN_01d9dd30(void)

{
  longlong *plVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  longlong *local_58;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_02;
  
  if (DAT_028b8979 != '\0') {
    return;
  }
  DAT_028b8979 = 1;
  (**(code **)(*unaff_RDI + 0x918))();
  if (local_40 == (longlong *)0x0) {
    bVar2 = 1;
    plVar8 = (longlong *)0x0;
    bVar3 = false;
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = 0;
      bVar3 = true;
    }
    else {
      bVar2 = 0;
      bVar3 = true;
    }
  }
  local_40 = (longlong *)*unaff_RSI;
  cVar4 = FUN_00d24090();
  if (cVar4 != '\0') {
    local_40 = (longlong *)*unaff_RSI;
    FUN_00d23d90();
    if (0 < *(int *)((longlong)plVar8 + 0xc)) {
      lVar7 = 0;
      plVar9 = (longlong *)0x0;
      bVar6 = false;
      do {
        plVar1 = *(longlong **)(plVar8[2] + lVar7 * 8);
        if (plVar9 == plVar1) {
          if ((!bVar6) && (plVar9 != (longlong *)0x0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar6 = true;
            plVar9 = plVar1;
          }
          else {
            bVar6 = true;
            plVar9 = plVar1;
          }
        }
        local_78 = (undefined1  [8])FUN_01cf5cf0();
        uStack_70 = extraout_XMM0_Qb;
        auVar12._0_8_ = FUN_01cf5cf0();
        auVar12._8_8_ = extraout_XMM0_Qb_00;
        auVar12 = blendps(_local_78,auVar12,2);
        FUN_01cf5c80();
        in_XMM1 = auVar12;
        if (*unaff_RSI == unaff_RDI[0x27]) {
          FUN_01cf3f40();
          (**(code **)(*local_40 + 0x4d8))();
          auVar10 = auVar12;
          (**(code **)(*plVar9 + 0x4d8))();
          auVar11 = auVar10;
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d8))();
          auVar13 = auVar11;
          FUN_01cf3f40();
          (**(code **)(*local_40 + 0x4d8))();
          in_XMM1 = auVar13;
          FUN_01cf3f40();
          local_a8 = auVar10._0_4_;
          fStack_a4 = auVar10._4_4_;
          fStack_a0 = auVar10._8_4_;
          fStack_9c = auVar10._12_4_;
          local_98 = auVar11._0_4_;
          fStack_94 = auVar11._4_4_;
          fStack_90 = auVar11._8_4_;
          fStack_8c = auVar11._12_4_;
          local_78._0_4_ = auVar12._0_4_;
          local_78._4_4_ = auVar12._4_4_;
          uStack_70._0_4_ = auVar12._8_4_;
          uStack_70._4_4_ = auVar12._12_4_;
          auVar10._0_4_ = (local_a8 - local_98) + (float)local_78._0_4_;
          auVar10._4_4_ = (fStack_a4 - fStack_94) + (float)local_78._4_4_;
          auVar10._8_4_ = (fStack_a0 - fStack_90) + (float)uStack_70;
          auVar10._12_4_ = (fStack_9c - fStack_8c) + uStack_70._4_4_;
          auVar12 = blendps(auVar10,auVar13,2);
          (**(code **)(*local_40 + 0x4e8))(auVar12._0_8_);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)((longlong)plVar8 + 0xc));
      goto LAB_01d9dff1;
    }
  }
  bVar6 = false;
  plVar9 = (longlong *)0x0;
LAB_01d9dff1:
  (**(code **)(*unaff_RDI + 0x920))();
  local_58 = local_40;
  if (local_40 == plVar8) {
    local_58 = plVar8;
    if ((bool)(bVar2 & local_40 != (longlong *)0x0)) {
      bVar3 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar5 = (bool)(bVar3 & plVar8 != (longlong *)0x0);
    bVar3 = true;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00d24090();
  if (cVar4 != '\0') {
    plVar8 = (longlong *)*unaff_RSI;
    FUN_00d23d90();
    if (0 < *(int *)((longlong)local_58 + 0xc)) {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(local_58[2] + lVar7 * 8);
        if (plVar9 == plVar1) {
          if ((!bVar6) && (plVar9 != (longlong *)0x0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar6 = true;
            plVar9 = plVar1;
          }
          else {
            bVar6 = true;
            plVar9 = plVar1;
          }
        }
        local_78 = (undefined1  [8])FUN_01cf5cf0();
        uStack_70 = extraout_XMM0_Qb_01;
        auVar11._0_8_ = FUN_01cf5cf0();
        auVar11._8_8_ = extraout_XMM0_Qb_02;
        auVar12 = blendps(auVar11,_local_78,2);
        FUN_01cf5c80(auVar12._0_8_);
        if (*unaff_RSI == unaff_RDI[0x27]) {
          FUN_01cf3f40();
          (**(code **)(*plVar8 + 0x4d8))();
          auVar12 = in_XMM1;
          (**(code **)(*plVar9 + 0x4d8))();
          auVar10 = auVar12;
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d8))();
          auVar11 = auVar10;
          FUN_01cf3f40();
          (**(code **)(*plVar8 + 0x4d8))();
          FUN_01cf3f40();
          local_a8 = auVar12._0_4_;
          fStack_a4 = auVar12._4_4_;
          fStack_a0 = auVar12._8_4_;
          fStack_9c = auVar12._12_4_;
          local_98 = auVar10._0_4_;
          fStack_94 = auVar10._4_4_;
          fStack_90 = auVar10._8_4_;
          fStack_8c = auVar10._12_4_;
          local_78._0_4_ = in_XMM1._0_4_;
          local_78._4_4_ = in_XMM1._4_4_;
          uStack_70._0_4_ = in_XMM1._8_4_;
          uStack_70._4_4_ = in_XMM1._12_4_;
          in_XMM1._0_4_ = (local_a8 - local_98) + (float)local_78._0_4_;
          in_XMM1._4_4_ = (fStack_a4 - fStack_94) + (float)local_78._4_4_;
          in_XMM1._8_4_ = (fStack_a0 - fStack_90) + (float)uStack_70;
          in_XMM1._12_4_ = (fStack_9c - fStack_8c) + uStack_70._4_4_;
          auVar12 = blendps(auVar11,in_XMM1,2);
          (**(code **)(*plVar8 + 0x4e8))(auVar12._0_8_);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)((longlong)local_58 + 0xc));
    }
  }
  DAT_028b8979 = 0;
  if ((bVar6) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


