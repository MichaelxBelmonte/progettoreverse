// Function: FUN_01dc4200
// Address: 01dc4200
// Size: 2482 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01dc4b9e) */
/* WARNING: Removing unreachable block (ram,0x01dc4bae) */
/* WARNING: Removing unreachable block (ram,0x01dc43cd) */
/* WARNING: Removing unreachable block (ram,0x01dc43d9) */
/* WARNING: Removing unreachable block (ram,0x01dc4952) */
/* WARNING: Removing unreachable block (ram,0x01dc495e) */
/* WARNING: Removing unreachable block (ram,0x01dc4a29) */
/* WARNING: Removing unreachable block (ram,0x01dc4a39) */
/* WARNING: Removing unreachable block (ram,0x01dc4aa8) */
/* WARNING: Removing unreachable block (ram,0x01dc4ab1) */
/* WARNING: Removing unreachable block (ram,0x01dc4875) */
/* WARNING: Removing unreachable block (ram,0x01dc487e) */
/* WARNING: Removing unreachable block (ram,0x01dc4389) */
/* WARNING: Removing unreachable block (ram,0x01dc4392) */
/* WARNING: Removing unreachable block (ram,0x01dc466f) */
/* WARNING: Removing unreachable block (ram,0x01dc4678) */
/* WARNING: Removing unreachable block (ram,0x01dc482b) */
/* WARNING: Removing unreachable block (ram,0x01dc4838) */
/* WARNING: Removing unreachable block (ram,0x01dc4b20) */
/* WARNING: Removing unreachable block (ram,0x01dc4afb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4200(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *unaff_RDI;
  int iVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 in_XMM1 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  float local_f8;
  float fStack_f4;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar7 = local_58;
  DAT_028b8a58 = -1;
  DAT_028b8a5c = -1;
  if (unaff_RDI[0x28] != 0) {
    unaff_RDI[0x28] = 0;
    FUN_00d50b20();
  }
  FUN_01dc0d60();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  for (iVar14 = 0; plVar8 = local_58, iVar10 = FUN_01dca080(), iVar11 = DAT_028b8a58,
      iVar14 < iVar10; iVar14 = iVar14 + 1) {
    uVar18 = FUN_01dc1b40();
    fStack_70 = (float)extraout_XMM0_Qb;
    fStack_6c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    FUN_01e3f820();
    auVar24._8_4_ = fStack_70;
    auVar24._0_8_ = uVar18;
    auVar24._12_4_ = fStack_6c;
    auVar23._4_12_ = auVar24._4_12_;
    auVar23._0_4_ = (float)uVar18 + DAT_023b1d84;
    auVar24 = blendps(auVar23,_DAT_0238ff00,0xe);
    blendps(in_XMM1,_DAT_023b5520,0xd);
    cVar9 = FUN_00d05410();
    iVar11 = iVar14;
    if (cVar9 != '\0') break;
    uVar18 = FUN_01dc1b40();
    local_78 = (float)uVar18;
    fStack_70 = (float)extraout_XMM0_Qb_00;
    fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    uVar19 = FUN_01dc1b40();
    FUN_01e3f820();
    auVar2._8_4_ = fStack_70;
    auVar2._0_8_ = uVar18;
    auVar2._12_4_ = fStack_6c;
    auVar4._8_8_ = extraout_XMM0_Qb_01;
    auVar4._0_8_ = uVar19;
    auVar20._4_12_ = auVar2._4_12_;
    auVar20._0_4_ = local_78 - (float)uVar19;
    in_XMM1 = blendps(ZEXT816(0),auVar4,1);
    blendps(auVar24,auVar20,1);
    cVar9 = FUN_00d05410();
    if (cVar9 != '\0') {
      FUN_01dcc290();
      if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      cVar9 = FUN_01dd3d00();
      if (cVar9 != '\0') {
        FUN_01dd4f40();
      }
      DAT_028b8a5c = iVar14;
      cVar9 = FUN_01db9b00();
      if (cVar9 == '\0') {
LAB_01dc44d0:
        cVar9 = FUN_01db9fa0();
        bVar5 = true;
        if ((cVar9 != '\0') && (cVar9 = FUN_01dcca60(), cVar9 != '\0')) {
          uVar18 = FUN_01db9a50();
          fStack_70 = (float)extraout_XMM0_Qb_04;
          fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
          fVar16 = (float)FUN_01dce580();
          uVar17 = (**(code **)(*unaff_RDI + 0x918))();
          plVar12 = (longlong *)FUN_00e8fc40();
          FUN_00152930();
          (**(code **)(*plVar12 + 0x18))();
          if (DAT_028b8a48 == plVar12) {
            bVar6 = false;
            bVar5 = false;
          }
          else {
            bVar6 = true;
            bVar5 = true;
            bVar15 = DAT_028b8a48 != (longlong *)0x0;
            DAT_028b8a48 = plVar12;
            if (bVar15) {
              FUN_00d50b20();
            }
          }
          if (DAT_028b8a50 == '\0') {
            DAT_028b8a50 = '\x01';
            FUN_00e8cb90();
            bVar5 = bVar6;
          }
          if (!bVar5) {
            FUN_00d50b20();
          }
          auVar3._8_4_ = fStack_70;
          auVar3._0_8_ = uVar18;
          auVar3._12_4_ = fStack_6c;
          auVar21._4_12_ = auVar3._4_12_;
          auVar21._0_4_ = (float)uVar18 + fVar16;
          auVar24 = insertps(auVar21,uVar17,0x10);
          uVar18 = FUN_01d4ed60(auVar24._0_8_);
          DAT_028b8a60 = 0.0;
          if (0 < DAT_028b8a5c) {
            iVar11 = 0;
            do {
              FUN_01dcc290(uVar18,iVar11);
              fVar16 = (float)FUN_01db9a50();
              uVar18 = FUN_01dce580();
              DAT_028b8a60 = fVar16 + (float)uVar18 + DAT_028b8a60;
              in_XMM1 = ZEXT416((uint)DAT_028b8a60);
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < DAT_028b8a5c);
          }
          FUN_01db99d0();
          if (local_58 == (longlong *)0x0) {
            bVar5 = true;
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = local_58;
            if (local_50 == '\0') {
              FUN_00d50b00();
              bVar5 = false;
            }
            else {
              bVar5 = false;
            }
          }
          FUN_01db9ab0();
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*plVar12 + 0x958))();
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar12 + 0x918))();
          FUN_01d530c0();
          (**(code **)(*plVar12 + 0x4d0))();
          FUN_01d52700();
          FUN_01d52740();
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_01e3f820();
          (**(code **)(*plVar12 + 0x610))();
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          cVar9 = FUN_01db9d40();
          plVar12 = local_58;
          if (cVar9 == '\0') {
            (**(code **)(*unaff_RDI + 0x920))(extraout_XMM0_Qa,0xffffffff);
            if (local_58 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else if (local_50 == '\0') {
              FUN_00d50b00();
            }
LAB_01dc48bc:
            if (plVar12 != (longlong *)0x0) {
              uVar18 = FUN_01e3f820();
              local_f8 = (float)uVar18;
              fStack_f4 = (float)((ulonglong)uVar18 >> 0x20);
              FUN_01d526f0();
              local_a8 = in_XMM1._0_4_;
              fStack_a4 = in_XMM1._4_4_;
              fStack_a0 = in_XMM1._8_4_;
              fStack_9c = in_XMM1._12_4_;
              in_XMM1._4_4_ = fStack_a4;
              in_XMM1._0_4_ = fStack_a4;
              in_XMM1._8_4_ = fStack_9c;
              in_XMM1._12_4_ = fStack_9c;
              auVar1._8_8_ = extraout_XMM0_Qb_05;
              auVar1._0_8_ = uVar18;
              auVar22._0_4_ = (local_a8 - fStack_a4) + local_f8;
              auVar22._4_4_ = (fStack_a4 - fStack_a4) + fStack_f4;
              auVar22._8_4_ = (fStack_a0 - fStack_9c) + (float)extraout_XMM0_Qb_05;
              auVar22._12_4_ =
                   (fStack_9c - fStack_9c) + (float)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
              auVar24 = blendps(auVar22,auVar1,2);
              FUN_00d05510(auVar24._0_8_);
              FUN_01d52740();
              (**(code **)(*local_58 + 0x400))();
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            uVar17 = FUN_01db9f80();
            (**(code **)(*unaff_RDI + 0x920))(*unaff_RDI,uVar17);
            if (local_58 != (longlong *)0x0) {
              if (local_50 == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01dc48bc;
            }
          }
          FUN_01d52770();
          (**(code **)(*unaff_RDI + 0x620))();
          if (!bVar5) {
            FUN_00d50b20();
          }
          goto LAB_01dc49a9;
        }
      }
      else {
        fVar16 = (float)FUN_01db9a50();
        FUN_01e3f820();
        fVar25 = in_XMM1._4_4_;
        in_XMM1 = ZEXT416((uint)fVar16);
        if (fVar16 <= fVar25 + fVar25) goto LAB_01dc44d0;
        uVar18 = FUN_01dc1b40();
        local_78 = (float)uVar18;
        fStack_74 = (float)((ulonglong)uVar18 >> 0x20);
        fStack_70 = (float)extraout_XMM0_Qb_02;
        fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
        uVar18 = FUN_01dc1b40();
        FUN_01e3f820();
        local_a8 = (float)uVar18;
        fStack_a4 = (float)((ulonglong)uVar18 >> 0x20);
        fStack_a0 = (float)extraout_XMM0_Qb_03;
        fStack_9c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
        auVar26._0_4_ = ((local_78 - local_a8) - in_XMM1._4_4_) + local_a8;
        auVar26._4_4_ = (fStack_74 - in_XMM1._4_4_) + fStack_a4;
        auVar26._8_4_ = (fStack_70 - in_XMM1._12_4_) + fStack_a0;
        auVar26._12_4_ = (fStack_6c - in_XMM1._12_4_) + fStack_9c;
        in_XMM1 = blendps(auVar26,_DAT_0238ff00,2);
        cVar9 = FUN_00d05410();
        if (cVar9 == '\0') goto LAB_01dc44d0;
        DAT_028b8a5c = -1;
        if ((char)unaff_RDI[0x29] == '\0') {
          cVar9 = FUN_01db9d40();
          if (cVar9 == '\0') {
            FUN_01dd3ac0();
            FUN_01dcd4e0();
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_01dc4ab6;
              }
            }
            else if (local_58 != (longlong *)0x0) {
LAB_01dc4ab6:
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_40 = -1;
              while( true ) {
                lVar13 = (longlong)local_40;
                local_40 = local_40 + 1;
                if (*(int *)((longlong)plVar8 + 0xc) <= local_40) break;
                local_58 = *(longlong **)(plVar8[2] + 8 + lVar13 * 8);
                FUN_01db9b10();
              }
              FUN_01de6a30();
              FUN_00d50b20();
            }
            FUN_01db9d50();
            FUN_01db9b10();
            FUN_01dd3ad0();
            (**(code **)(*plVar7 + 0x980))();
            bVar5 = false;
          }
          else {
            iVar11 = FUN_01db9f80();
            if (iVar11 == 0) {
              FUN_01db9d50();
              goto LAB_01dc49a9;
            }
            bVar5 = false;
            FUN_01db9d50();
          }
          goto LAB_01dc49ab;
        }
        cVar9 = FUN_01db9d40();
        if (cVar9 == '\0') {
          FUN_01dd3ac0();
          FUN_01db9d50();
          FUN_01db9b10();
          FUN_01dd3ad0();
          (**(code **)(*plVar7 + 0x980))();
          bVar5 = false;
          goto LAB_01dc49ab;
        }
        iVar11 = FUN_01db9f80();
        if (iVar11 != 0) {
          bVar5 = false;
          FUN_01db9b10();
          goto LAB_01dc49ab;
        }
        FUN_01db9d50();
LAB_01dc49a9:
        bVar5 = false;
      }
LAB_01dc49ab:
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      iVar11 = DAT_028b8a58;
      if (!bVar5) break;
    }
  }
  DAT_028b8a58 = iVar11;
  FUN_00d50b20();
  return;
}


