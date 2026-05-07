// Function: FUN_01a32100
// Address: 01a32100
// Size: 2195 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a32640) */
/* WARNING: Removing unreachable block (ram,0x01a3264c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a32100(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((DAT_028b2a80 == 0) || (DAT_028b2a89 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2a80 == 0) {
      FUN_01cfcdc0();
      lVar5 = DAT_028b2a80;
      if (DAT_028b2a80 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar5 = local_38;
        }
        bVar3 = DAT_028b2a80 != 0;
        DAT_028b2a80 = lVar5;
        if (bVar3) {
          FUN_00d50b20();
          lVar5 = local_38;
        }
      }
      if ((lVar5 != 0) && (DAT_028b2a88 == '\0')) {
        DAT_028b2a88 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_38;
      }
      if ((local_30 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      in_XMM1 = ZEXT416((uint)DAT_0239011c);
      FUN_01cfcdc0();
      lVar5 = DAT_028b2a70;
      if (DAT_028b2a70 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar5 = local_38;
        }
        bVar3 = DAT_028b2a70 != 0;
        DAT_028b2a70 = lVar5;
        if (bVar3) {
          FUN_00d50b20();
          lVar5 = local_38;
        }
      }
      if ((lVar5 != 0) && (DAT_028b2a78 == '\0')) {
        DAT_028b2a78 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_38;
      }
      if ((local_30 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b2a89 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2a89 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar6 = FUN_01e3f820();
  uStack_d0 = (undefined4)extraout_XMM0_Qb;
  uStack_cc = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar12 = DAT_02394240;
  if (unaff_RDI[0x28] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_48 + 0x378))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d48a10();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    lVar5 = unaff_RDI[0x28];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    uVar7 = FUN_01d43d10();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    local_58 = (float)uVar7;
    fStack_54 = (float)((ulonglong)uVar7 >> 0x20);
    fStack_54 = fStack_54 * fStack_54;
    auVar8._4_4_ = fStack_54;
    auVar8._0_4_ = fStack_54;
    auVar8._8_4_ = extraout_XMM0_Dd * extraout_XMM0_Dd;
    auVar8._12_4_ = extraout_XMM0_Dd * extraout_XMM0_Dd;
    auVar11._4_12_ = auVar8._4_12_;
    auVar11._0_4_ = SQRT(fStack_54 + local_58 * local_58) * DAT_0239011c + DAT_02390124;
    auVar8 = roundss(auVar11,auVar11,10);
    fVar12 = DAT_02394240;
    if (DAT_02394240 <= auVar8._0_4_) {
      fVar12 = auVar8._0_4_;
    }
  }
  lVar5 = DAT_028b2a80;
  if (DAT_028b2a80 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  auVar10._4_12_ = in_XMM1._4_12_;
  auVar10._0_4_ = in_XMM1._0_4_ * DAT_0239011c;
  auVar2._8_4_ = uStack_d0;
  auVar2._0_8_ = uVar6;
  auVar2._12_4_ = uStack_cc;
  auVar8 = insertps(auVar2,fVar12,0x10);
  auVar11 = blendps(auVar10,_DAT_023b45e0,0xe);
  FUN_01d48b40();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))();
  lVar5 = DAT_028b2a70;
  if (DAT_028b2a70 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(float *)(unaff_RDI + 0x27) <= 0.0) {
    FUN_01d48b40();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    lVar5 = unaff_RDI[0x28];
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
    (*DAT_02680418)();
    FUN_01d39400();
    FUN_01d39310();
    FUN_01d38ba0();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    FUN_00d50b20();
    lVar5 = unaff_RDI[0x28];
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_48 + 0x378))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d48a10();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    lVar5 = unaff_RDI[0x28];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    uVar6 = FUN_01d43d10();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    local_58 = (float)uVar6;
    fStack_54 = (float)((ulonglong)uVar6 >> 0x20);
    fStack_50 = (float)extraout_XMM0_Qb_00;
    fStack_4c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    fVar12 = auVar11._0_4_ + auVar8._0_4_ + local_58 * _DAT_023b5dd0;
    fVar13 = auVar11._4_4_ + auVar8._4_4_ + fStack_54 * _UNK_023b5dd4;
    fVar14 = auVar11._8_4_ + auVar8._8_4_ + fStack_50 * _UNK_023b5dd8;
    fVar15 = auVar11._12_4_ + auVar8._12_4_ + fStack_4c * _UNK_023b5ddc;
    auVar9._0_4_ = (float)(_DAT_023945e0 & (uint)fVar12 | _DAT_023945f0) + fVar12;
    auVar9._4_4_ = (float)(_UNK_023945e4 & (uint)fVar13 | _UNK_023945f4) + fVar13;
    auVar9._8_4_ = (float)(_UNK_023945e8 & (uint)fVar14 | _UNK_023945f8) + fVar14;
    auVar9._12_4_ = (float)(_UNK_023945ec & (uint)fVar15 | _UNK_023945fc) + fVar15;
    auVar8 = roundps(auVar9,auVar9,0xb);
    FUN_00d05530(auVar8._0_8_);
    lVar5 = DAT_028b2a80;
    if (DAT_028b2a80 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_48 + 0x398))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    lVar5 = unaff_RDI[0x28];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3f8))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


