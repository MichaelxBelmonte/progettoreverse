// Function: FUN_01a62e90
// Address: 01a62e90
// Size: 2351 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x01a63301) */
/* WARNING: Removing unreachable block (ram,0x01a6330a) */

void FUN_01a62e90(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar10;
  float extraout_XMM0_Db;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar12 [16];
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dd;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar15 [16];
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Dd_02;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar21 [16];
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Dd_04;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Dd_05;
  undefined1 auVar24 [16];
  float extraout_XMM0_Db_07;
  float extraout_XMM0_Db_08;
  undefined8 extraout_XMM0_Qb_02;
  undefined4 extraout_XMM0_Dd_06;
  undefined1 auVar25 [16];
  float extraout_XMM0_Db_09;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_03;
  float fVar33;
  undefined1 in_XMM1 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  float local_cc;
  float local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  float local_98;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_5c;
  longlong *local_58;
  char local_50;
  float local_44;
  
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && (iVar8 = FUN_01d3b620(), iVar8 == 2)) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*unaff_RDI + 0xaf8))();
    cVar6 = FUN_00d05410();
    if (cVar6 != '\0') {
      FUN_00d403d0();
      lVar5 = DAT_027e1370;
      if (DAT_027e1370 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_100 = 0;
      local_f8 = '\0';
      FUN_00d40470(&local_100,&stack0xffffffffffffff58,1,3);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar8 = FUN_01d3a5a0();
    if (iVar8 == 1) {
      FUN_01d3abf0();
      FUN_01e466c0();
      fVar10 = (float)(**(code **)(*unaff_RDI + 0xb50))();
      uVar11 = (**(code **)(*unaff_RDI + 0xaf8))();
      fVar33 = in_XMM1._0_4_;
      if (in_XMM1._4_4_ < fVar33 + fVar33) {
        insertps(in_XMM1,ZEXT416((uint)(DAT_0239426c * fVar33)),0x10);
      }
      auVar32._8_4_ = (int)extraout_XMM0_Qb;
      auVar32._0_8_ = uVar11;
      auVar32._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      bVar7 = FUN_00d05410();
      uVar11 = (**(code **)(*unaff_RDI + 0xaf8))();
      auVar38._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar38._0_8_ = uVar11;
      auVar12._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar38._12_4_ = auVar12._12_4_;
      fVar33 = (float)((ulonglong)uVar11 >> 0x20);
      if (bVar7 == 0) {
        fVar35 = auVar32._0_4_;
        fVar34 = auVar32._4_4_;
        if (fVar35 + fVar35 <= fVar34) {
          auVar29._4_4_ = fVar33;
          auVar29._0_4_ = fVar33;
          auVar29._8_4_ = auVar12._12_4_;
          auVar29._12_4_ = auVar12._12_4_;
          auVar28._4_12_ = auVar29._4_12_;
          auVar28._0_4_ = fVar33 + (fVar34 - fVar35);
          auVar12 = insertps(auVar38,auVar28,0x10);
          auVar39 = auVar12._4_12_;
        }
        else {
          auVar28 = ZEXT416((uint)(DAT_0239426c * fVar35));
          auVar2._4_4_ = fVar33;
          auVar2._0_4_ = fVar33 + (fVar34 - DAT_0239426c * fVar35);
          auVar2._8_4_ = auVar12._12_4_;
          auVar2._12_4_ = auVar12._12_4_;
          auVar12 = insertps(auVar38,auVar2,0x10);
          auVar39 = auVar12._4_12_;
          insertps(auVar32,auVar28,0x10);
        }
        auVar3._4_8_ = auVar28._8_8_;
        auVar3._0_4_ = auVar39._0_4_;
        auVar30._0_8_ = auVar3._0_8_ << 0x20;
        auVar30._8_4_ = auVar39._4_4_;
        auVar30._12_4_ = auVar39._8_4_;
        cVar6 = FUN_00d05410();
        if (cVar6 == '\0') {
          local_f0 = *unaff_RSI;
          local_e8 = '\0';
          FUN_01d924f0();
          if (local_e8 == '\0') {
            return;
          }
          if (local_f0 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        (**(code **)(*unaff_RDI + 0xaf8))();
        fVar33 = auVar30._4_4_ + extraout_XMM0_Db_03;
        fVar35 = auVar30._12_4_ + extraout_XMM0_Dd_02;
        auVar19._4_4_ = fVar33;
        auVar19._0_4_ = fVar33;
        auVar19._8_4_ = fVar35;
        auVar19._12_4_ = fVar35;
        auVar20._4_12_ = auVar19._4_12_;
        auVar20._0_4_ = fVar33 + DAT_02390d00 + DAT_02390124;
        auVar12 = roundss(auVar20,auVar20,9);
        local_44 = auVar12._0_4_;
        (**(code **)(*unaff_RDI + 0xaf8))();
        auVar21._4_4_ = extraout_XMM0_Db_04;
        auVar21._0_4_ = extraout_XMM0_Db_04;
        auVar21._8_4_ = extraout_XMM0_Dd_03;
        auVar21._12_4_ = extraout_XMM0_Dd_03;
        auVar12 = roundss(auVar21,auVar21,9);
        local_5c = auVar12._0_4_;
        auVar32 = ZEXT416((uint)(fVar10 + local_5c));
        auVar12 = roundss(ZEXT816(0),auVar32,9);
        (**(code **)(*unaff_RDI + 0xb00))();
        fVar10 = auVar32._4_4_ + extraout_XMM0_Db_05;
        fVar33 = auVar32._12_4_ + extraout_XMM0_Dd_04;
        auVar22._4_4_ = fVar10;
        auVar22._0_4_ = fVar10;
        auVar22._8_4_ = fVar33;
        auVar22._12_4_ = fVar33;
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ = fVar10 + DAT_02390d00 + DAT_02390124;
        auVar32 = roundss(auVar23,auVar23,9);
        local_84 = auVar32._0_4_;
        local_88 = local_44;
        if (auVar12._0_4_ <= local_44) {
          local_88 = auVar12._0_4_;
        }
        (**(code **)(*unaff_RDI + 0xb00))();
        auVar24._4_4_ = extraout_XMM0_Db_06;
        auVar24._0_4_ = extraout_XMM0_Db_06;
        auVar24._8_4_ = extraout_XMM0_Dd_05;
        auVar24._12_4_ = extraout_XMM0_Dd_05;
        auVar31 = roundss(ZEXT816(0),auVar24,9);
        local_98 = auVar31._0_4_;
        fVar10 = local_84 - local_98;
      }
      else {
        auVar12._4_4_ = fVar33;
        auVar12._0_4_ = fVar33;
        auVar12._8_4_ = auVar12._12_4_;
        auVar12 = roundss(auVar12,auVar12,9);
        local_44 = auVar12._0_4_;
        (**(code **)(*unaff_RDI + 0xaf8))();
        fVar33 = auVar32._4_4_ + extraout_XMM0_Db_00;
        fVar35 = auVar32._12_4_ + extraout_XMM0_Dd;
        auVar13._4_4_ = fVar33;
        auVar13._0_4_ = fVar33;
        auVar13._8_4_ = fVar35;
        auVar13._12_4_ = fVar35;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = fVar33 + DAT_02390d00 + DAT_02390124;
        auVar12 = roundss(auVar14,auVar14,9);
        local_5c = auVar12._0_4_;
        (**(code **)(*unaff_RDI + 0xb00))();
        auVar15._4_4_ = extraout_XMM0_Db_01;
        auVar15._0_4_ = extraout_XMM0_Db_01;
        auVar15._8_4_ = extraout_XMM0_Dd_00;
        auVar15._12_4_ = extraout_XMM0_Dd_00;
        auVar12 = roundss(auVar15,auVar15,9);
        local_88 = auVar12._0_4_;
        auVar12 = roundss(ZEXT416((uint)(local_5c - fVar10)),ZEXT416((uint)(local_5c - fVar10)),9);
        local_84 = local_44;
        if (local_44 <= auVar12._0_4_) {
          local_84 = auVar12._0_4_;
        }
        fVar33 = 0.0;
        fVar35 = 0.0;
        fVar34 = 0.0;
        fVar10 = local_84;
        (**(code **)(*unaff_RDI + 0xb00))();
        auVar16._4_4_ = extraout_XMM0_Db_02;
        auVar16._0_4_ = extraout_XMM0_Db_02;
        auVar16._8_4_ = extraout_XMM0_Dd_01;
        auVar16._12_4_ = extraout_XMM0_Dd_01;
        auVar12 = roundss(auVar16,auVar16,9);
        local_98 = auVar12._0_4_;
        uVar11 = (**(code **)(*unaff_RDI + 0xb00))();
        auVar31._0_4_ = fVar10 + (float)uVar11;
        auVar31._4_4_ = fVar33 + (float)((ulonglong)uVar11 >> 0x20);
        auVar31._8_4_ = fVar35 + (float)extraout_XMM0_Qb_01;
        auVar31._12_4_ = fVar34 + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
        auVar17._4_4_ = auVar31._4_4_;
        auVar17._0_4_ = auVar31._4_4_;
        auVar17._8_4_ = auVar31._12_4_;
        auVar17._12_4_ = auVar31._12_4_;
        auVar18._4_12_ = auVar17._4_12_;
        auVar18._0_4_ = auVar31._4_4_ + DAT_02390d00;
        auVar12 = roundss(auVar18,auVar18,9);
        fVar10 = auVar12._0_4_ - local_98;
      }
      FUN_01a18460();
      if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      uVar11 = (**(code **)(*local_58 + 0xa98))();
      local_128 = (float)uVar11;
      fStack_124 = (float)((ulonglong)uVar11 >> 0x20);
      fStack_120 = (float)extraout_XMM0_Qb_02;
      fStack_11c = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
      FUN_01e3f820();
      _local_b8 = auVar31;
      local_cc = (float)(**(code **)(*local_58 + 0xbc8))();
      local_c8 = (float)(**(code **)(*local_58 + 0xbe0))();
      local_138 = fStack_124 + local_128;
      fStack_134 = fStack_124 + fStack_124;
      fStack_130 = fStack_11c + fStack_120;
      fStack_12c = fStack_11c + fStack_11c;
      local_b8._0_4_ = (local_138 - local_128) / (float)local_b8._4_4_;
      local_b8._4_4_ = fStack_134;
      fStack_b0 = fStack_130;
      fStack_ac = fStack_12c;
      local_c0 = local_5c - local_98;
      local_bc = (fVar10 - local_5c) + local_98;
      local_c4 = (uint)(bVar7 ^ 1);
LAB_01a633e0:
      (**(code **)(*unaff_RDI + 0x658))();
      plVar1 = (longlong *)*unaff_RSI;
      if (plVar1 == local_58) {
        if (((char)unaff_RSI[1] == '\0') && (local_58 != (longlong *)0x0)) {
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01a6347c;
          }
          goto LAB_01a63433;
        }
LAB_01a6343d:
        if (*unaff_RSI == 0) goto LAB_01a63761;
LAB_01a6348f:
        iVar8 = FUN_01d3a5a0();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 == 6) goto LAB_01a63775;
        iVar8 = FUN_01d3a5a0();
        if (iVar8 == 5) {
          FUN_01d3abf0();
          FUN_01e466c0();
          local_7c = (local_44 - extraout_XMM0_Db) + extraout_XMM0_Db_07;
          auVar12 = ZEXT416((uint)local_7c);
          if (local_88 <= local_7c) {
            local_78 = 0.0;
            if (local_84 < local_7c) {
              local_78 = local_7c - local_84;
              auVar12 = ZEXT416((uint)local_78);
              local_7c = local_84;
              goto LAB_01a6352f;
            }
            pcVar9 = *(code **)(*unaff_RDI + 0xb00);
            if (bVar7 == 0) goto LAB_01a635dc;
LAB_01a63548:
            (*pcVar9)();
            if (extraout_XMM0_Db_07 < extraout_XMM0_Db_08) {
              if ((local_78 != DAT_0239424c) || (NAN(local_78) || NAN(DAT_0239424c))) {
                auVar12 = roundss(ZEXT816(0),ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),9);
                fVar35 = auVar12._0_4_ + local_138;
                fVar33 = local_c8;
                if (fVar35 <= local_c8) {
                  fVar33 = fVar35;
                }
                (**(code **)(*local_58 + 0xbf0))();
                auVar25 = ZEXT416((uint)(fVar33 - local_128));
                fVar33 = fVar33 - (fVar33 - local_128);
LAB_01a63656:
                auVar32 = insertps(ZEXT416((uint)fVar33),auVar25,0x10);
                auVar12 = auVar32;
                FUN_01e436c0();
                fStack_74 = auVar32._4_4_;
                fVar33 = auVar12._4_4_;
                auVar26._4_4_ = fVar33;
                auVar26._0_4_ = fVar33;
                auVar26._8_4_ = auVar12._12_4_;
                auVar26._12_4_ = auVar12._12_4_;
                auVar27._4_12_ = auVar26._4_12_;
                auVar27._0_4_ = fVar33 / fStack_74;
                (**(code **)(*local_58 + 0xc08))(auVar27._0_8_);
                (**(code **)(*local_58 + 0xaa0))();
                goto LAB_01a633e0;
              }
            }
            local_98 = local_5c - local_7c;
            fVar35 = extraout_XMM0_Db_07;
            fVar34 = extraout_XMM0_Db_07;
            uVar36 = extraout_XMM0_Dd_06;
            fVar33 = local_bc;
          }
          else {
            local_78 = local_88 - local_7c;
            local_7c = local_88;
LAB_01a6352f:
            pcVar9 = *(code **)(*unaff_RDI + 0xb00);
            if (bVar7 != 0) goto LAB_01a63548;
LAB_01a635dc:
            (*pcVar9)();
            if (extraout_XMM0_Db_09 + auVar12._4_4_ + DAT_02390d00 < extraout_XMM0_Db_07) {
              if ((local_78 == DAT_0239424c) && (!NAN(local_78) && !NAN(DAT_0239424c)))
              goto LAB_01a636c1;
              auVar12 = roundss(ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),
                                ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),9);
              fVar35 = local_128 - auVar12._0_4_;
              fVar33 = local_cc;
              if (local_cc <= fVar35) {
                fVar33 = fVar35;
              }
              (**(code **)(*local_58 + 0xbd8))();
              auVar4._4_4_ = fStack_134;
              auVar4._0_4_ = local_138;
              auVar4._8_4_ = fStack_130;
              auVar4._12_4_ = fStack_12c;
              auVar25._4_12_ = auVar4._4_12_;
              auVar25._0_4_ = local_138 - fVar33;
              goto LAB_01a63656;
            }
LAB_01a636c1:
            local_98 = local_7c - local_5c;
            fVar34 = 0.0;
            uVar36 = 0;
            fVar35 = local_c0;
            fVar33 = local_c0;
          }
          uVar37 = uVar36;
          uVar11 = (**(code **)(*local_58 + 0xa98))();
          local_128 = (float)uVar11;
          fStack_124 = (float)((ulonglong)uVar11 >> 0x20);
          fStack_120 = (float)extraout_XMM0_Qb_03;
          fStack_11c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
          FUN_01e3f820();
          local_b8._4_4_ = fVar34;
          local_b8._0_4_ = fVar35;
          fStack_b0 = (float)uVar36;
          fStack_ac = (float)uVar37;
          (**(code **)(*local_58 + 0xc70))(local_98 / fVar10,fVar33 / fVar10);
          local_138 = fStack_124 + local_128;
          fStack_134 = fStack_124 + fStack_124;
          fStack_130 = fStack_11c + fStack_120;
          fStack_12c = fStack_11c + fStack_11c;
          local_b8._0_4_ = (local_138 - local_128) / (float)local_b8._4_4_;
          local_b8._4_4_ = fStack_134;
          fStack_b0 = fStack_130;
          fStack_ac = fStack_12c;
        }
        goto LAB_01a633e0;
      }
      lVar5 = unaff_RSI[1];
      if (local_50 != '\0') {
        *unaff_RSI = (longlong)local_58;
        if (((char)lVar5 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a63433:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_50 = '\0';
        goto LAB_01a6343d;
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_58;
      if (((char)lVar5 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a6347c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      if (*unaff_RSI != 0) goto LAB_01a6348f;
LAB_01a63761:
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a63775:
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_e0 = *unaff_RSI;
      local_d8 = '\0';
      FUN_01d924f0();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


