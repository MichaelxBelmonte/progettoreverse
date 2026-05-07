// Function: FUN_01a0f430
// Address: 01a0f430
// Size: 2297 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01a0f966) */
/* WARNING: Removing unreachable block (ram,0x01a0f96f) */

void FUN_01a0f430(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 uVar20;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  longlong local_148;
  char local_140;
  longlong *local_120;
  char local_118;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  uint local_ac;
  undefined8 local_a8;
  float local_88;
  float local_60;
  float local_58;
  float local_54;
  longlong *local_48;
  char local_40;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b620(), iVar6 == 2)) {
    FUN_01d3abf0();
    local_a8 = FUN_01e466c0();
    (**(code **)(*unaff_RDI + 0xaf8))();
    cVar4 = FUN_00d05410();
    if (cVar4 == '\0') {
      return;
    }
    FUN_00d403d0();
    lVar3 = DAT_026fe3e0;
    if (DAT_026fe3e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_f0 = 0;
    local_e8 = '\0';
    FUN_00d40470(&local_f0,&stack0xffffffffffffff68,1,3);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == '\0') {
      return;
    }
    if (local_48 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  iVar6 = FUN_01d3a5a0();
  if (iVar6 != 1) {
    local_c0 = *unaff_RSI;
    local_b8 = '\0';
    FUN_01d924f0();
    if (local_b8 == '\0') {
      return;
    }
    if (local_c0 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (unaff_RDI[0x48] == 0) {
    if ((char)unaff_RDI[0x47] != '\0') {
      FUN_01a18460();
      if (local_48 == (longlong *)0x0) {
        bVar7 = false;
      }
      else {
        FUN_01a18460();
        (**(code **)(*local_120 + 0x958))();
        bVar7 = local_148 != 0;
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar7) goto LAB_01a0f5d5;
    }
    FUN_01d3abf0();
    fVar8 = (float)FUN_01e466c0();
    fVar9 = (float)(**(code **)(*unaff_RDI + 0xb48))();
    uVar11 = (**(code **)(*unaff_RDI + 0xaf8))();
    fVar10 = in_XMM1._4_4_;
    auVar14._4_4_ = fVar10;
    auVar14._0_4_ = fVar10;
    auVar14._8_4_ = in_XMM1._12_4_;
    auVar14._12_4_ = in_XMM1._12_4_;
    if (in_XMM1._0_4_ < fVar10 + fVar10) {
      auVar16._4_12_ = auVar14._4_12_;
      auVar16._0_4_ = fVar10 * DAT_0239426c;
      blendps(auVar16,in_XMM1,0xe);
    }
    auVar22._8_4_ = (int)extraout_XMM0_Qb;
    auVar22._0_8_ = uVar11;
    auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    bVar5 = FUN_00d05410();
    uVar11 = (**(code **)(*unaff_RDI + 0xaf8))();
    uVar20 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    if (bVar5 == 0) {
      fVar10 = auVar22._4_4_;
      if (auVar22._0_4_ < fVar10 + fVar10) {
        fVar10 = DAT_0239426c * fVar10;
        blendps(ZEXT416((uint)fVar10),auVar22,0xe);
      }
      auVar25._4_4_ = (int)((ulonglong)uVar11 >> 0x20);
      auVar25._0_4_ = (float)uVar11 + (auVar22._0_4_ - fVar10);
      auVar25._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar25._12_4_ = uVar20;
      cVar4 = FUN_00d05410();
      if (cVar4 == '\0') {
        local_d0 = *unaff_RSI;
        local_c8 = '\0';
        FUN_01d924f0();
        if (local_c8 == '\0') {
          return;
        }
        if (local_d0 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      fVar10 = (float)(**(code **)(*unaff_RDI + 0xaf8))();
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = auVar25._0_4_ + fVar10 + DAT_02390d00;
      auVar14 = roundss(ZEXT816(0),auVar26,9);
      local_a8 = CONCAT44(local_a8._4_4_,auVar14._0_4_);
      auVar18._0_8_ = (**(code **)(*unaff_RDI + 0xaf8))();
      auVar18._8_8_ = extraout_XMM0_Qb_03;
      auVar14 = roundss(auVar18,auVar18,9);
      auVar16 = ZEXT416((uint)(fVar9 + auVar14._0_4_));
      auVar14 = roundss(ZEXT816(0),auVar16,9);
      fVar9 = (float)(**(code **)(*unaff_RDI + 0xb00))();
      auVar27._4_12_ = auVar16._4_12_;
      auVar27._0_4_ = auVar16._0_4_ + fVar9 + DAT_02390d00;
      auVar16 = roundss(ZEXT816(0),auVar27,9);
      local_60 = auVar16._0_4_;
      local_88 = (float)local_a8;
      if (auVar14._0_4_ <= (float)local_a8) {
        local_88 = auVar14._0_4_;
      }
      auVar19._0_8_ = (**(code **)(*unaff_RDI + 0xb00))();
      auVar19._8_8_ = extraout_XMM0_Qb_04;
      roundss(ZEXT816(0),auVar19,9);
    }
    else {
      auVar2._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar2._0_8_ = uVar11;
      auVar2._12_4_ = uVar20;
      auVar14 = roundss(ZEXT816(0),auVar2,9);
      local_a8 = CONCAT44(local_a8._4_4_,auVar14._0_4_);
      fVar10 = (float)(**(code **)(*unaff_RDI + 0xaf8))();
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = auVar22._0_4_ + fVar10 + DAT_02390d00;
      auVar14 = roundss(ZEXT816(0),auVar23,9);
      auVar15._0_8_ = (**(code **)(*unaff_RDI + 0xb00))();
      auVar15._8_8_ = extraout_XMM0_Qb_01;
      auVar16 = roundss(auVar15,auVar15,9);
      local_88 = auVar16._0_4_;
      auVar14 = ZEXT416((uint)(auVar14._0_4_ - fVar9));
      auVar14 = roundss(auVar14,auVar14,9);
      local_60 = (float)local_a8;
      if ((float)local_a8 <= auVar14._0_4_) {
        local_60 = auVar14._0_4_;
      }
      auVar14 = ZEXT416((uint)local_60);
      auVar17._0_8_ = (**(code **)(*unaff_RDI + 0xb00))();
      auVar17._8_8_ = extraout_XMM0_Qb_02;
      roundss(auVar17,auVar17,9);
      fVar9 = (float)(**(code **)(*unaff_RDI + 0xb00))();
      auVar24._4_12_ = auVar14._4_12_;
      auVar24._0_4_ = auVar14._0_4_ + fVar9 + DAT_02390d00;
      roundss(ZEXT816(0),auVar24,9);
    }
    FUN_01a18460();
    if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    dVar12 = (double)(**(code **)(*local_48 + 0x918))();
    dVar13 = (double)(**(code **)(*local_48 + 0x940))();
    local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8 - fVar8);
    local_ac = (uint)(bVar5 ^ 1);
    local_54 = 0.0;
    dVar21 = 0.0;
LAB_01a0fa00:
    (**(code **)(*unaff_RDI + 0x658))();
    plVar1 = (longlong *)*unaff_RSI;
    if (plVar1 == local_48) {
      if (((char)unaff_RSI[1] == '\0') && (local_48 != (longlong *)0x0)) {
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_01a0fa9c;
        }
        goto LAB_01a0fa52;
      }
LAB_01a0fa5b:
      lVar3 = *unaff_RSI;
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_40 != '\0') {
        *unaff_RSI = (longlong)local_48;
        if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a0fa52:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_40 = '\0';
        goto LAB_01a0fa5b;
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_48;
      if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a0fa9c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      lVar3 = *unaff_RSI;
    }
    if (lVar3 != 0) {
      iVar6 = FUN_01d3a5a0();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar6 == 6) goto LAB_01a0fcd2;
      iVar6 = FUN_01d3a5a0();
      if (iVar6 == 5) {
        FUN_01d3abf0();
        fVar8 = (float)FUN_01e466c0();
        fVar9 = (float)local_a8 + fVar8;
        if (local_88 <= fVar9) {
          local_58 = 0.0;
          if (local_60 < fVar9) {
            local_58 = fVar9 - local_60;
          }
        }
        else {
          local_58 = local_88 - fVar9;
        }
        if (bVar5 == 0) {
          fVar9 = local_58;
          fVar10 = (float)(**(code **)(*unaff_RDI + 0xb00))();
          if (fVar8 < fVar10 + fVar9 + DAT_02390d00) {
            local_58 = 0.0;
          }
        }
        else {
          fVar9 = (float)(**(code **)(*unaff_RDI + 0xb00))();
          if (fVar9 < fVar8) {
            local_58 = 0.0;
          }
        }
        (**(code **)(*local_48 + 0xc68))();
        if ((local_58 != DAT_0239424c) || (NAN(local_58) || NAN(DAT_0239424c))) {
          dVar28 = dVar21 + DAT_0238fee8;
          if (local_58 <= local_54) {
            dVar28 = dVar21;
          }
          if (bVar5 != 0) {
            (**(code **)(*local_48 + 0x948))(dVar13 - dVar28);
          }
          (**(code **)(*local_48 + 0x920))(dVar12 + dVar28);
          local_54 = local_58;
          dVar21 = dVar28;
        }
        else {
          local_54 = local_58;
          if (DAT_02390448 < dVar21) {
            dVar21 = dVar21 + DAT_023b19a0;
            if (bVar5 != 0) {
              (**(code **)(*local_48 + 0x948))(dVar13 - dVar21);
            }
            (**(code **)(*local_48 + 0x920))(dVar12 + dVar21);
          }
        }
      }
      goto LAB_01a0fa00;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01a0fcd2:
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
LAB_01a0f5d5:
    local_e0 = *unaff_RSI;
    local_d8 = '\0';
    FUN_01a0fff0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


