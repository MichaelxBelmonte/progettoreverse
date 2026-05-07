// Function: FUN_00b20410
// Address: 00b20410
// Size: 1367 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b20874) */
/* WARNING: Removing unreachable block (ram,0x00b20880) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b20410(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar11;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar12;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  float local_80;
  float local_7c;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  longlong local_58;
  char local_50;
  float local_44;
  longlong local_40;
  char local_31;
  undefined8 uVar10;
  
  fVar12 = (float)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined4)param_2;
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    uVar10 = FUN_01d3abf0();
    uVar3 = (ulonglong)uVar10 >> 0x20;
    fVar7 = (float)uVar10;
    FUN_01e466c0();
    FUN_00b1d6b0();
    local_40 = local_58;
    if (local_58 != 0) {
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      lVar1 = DAT_027c79a0;
      if (DAT_027c79a0 != 0) {
        FUN_00d50b00();
      }
      local_31 = FUN_00d50f90();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_68 = (float)FUN_00b39c60();
      FUN_01e3f820();
      local_78._4_4_ = fVar12;
      local_78._0_4_ = uVar13;
      uStack_70 = in_XMM1_Dc;
      uStack_6c = in_XMM1_Dd;
      local_44 = (float)_logf(DAT_028a0e34);
      local_80 = (float)_logf(DAT_028a0e38);
      uVar11 = _logf(local_68);
      local_68 = (float)FUN_00b39c60();
      FUN_01e3f820();
      fVar14 = fVar12;
      local_68 = (float)FUN_00b398f0(local_68);
      local_7c = DAT_028a0e30;
      FUN_01e3f820();
      lVar1 = unaff_RDI[0x3c];
      if (lVar1 != local_40) {
        FUN_00d50b00();
        unaff_RDI[0x3c] = local_40;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x620))();
      auVar2._8_4_ = extraout_XMM0_Dc_00;
      auVar2._0_8_ = uVar11;
      auVar2._12_4_ = extraout_XMM0_Dd_00;
      auVar15._4_12_ = auVar2._4_12_;
      auVar15._0_4_ =
           (((float)uVar11 / DAT_0241c6f0 - local_44 / DAT_0241c6f0) * (float)local_78._0_4_) /
           (local_80 / DAT_0241c6f0 - local_44 / DAT_0241c6f0);
      fVar12 = fVar14 * DAT_0239011c + (0.0 - (local_68 / local_7c) * fVar12 * DAT_0239011c);
      auVar16._4_4_ = fVar14;
      auVar16._0_4_ = fVar12;
      auVar16._8_4_ = in_XMM1_Dd;
      auVar16._12_4_ = in_XMM1_Dd;
      auVar16 = insertps(auVar15,auVar16,0x10);
      uVar13 = in_XMM1_Dd;
      fStack_d0 = extraout_XMM0_Dc;
      fStack_cc = extraout_XMM0_Dd;
LAB_00b20640:
      (**(code **)(*unaff_RDI + 0x658))();
      lVar5 = local_58;
      lVar1 = *unaff_RSI;
      if (lVar1 == local_58) {
        if (((char)unaff_RSI[1] == '\0') && (local_58 != 0)) {
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_00b206db;
          }
LAB_00b20692:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_50 = '\0';
        }
        lVar1 = *unaff_RSI;
      }
      else {
        lVar4 = unaff_RSI[1];
        if (local_50 != '\0') {
          *unaff_RSI = local_58;
          if (((char)lVar4 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00b20692;
        }
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = lVar5;
        if (((char)lVar4 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_00b206db:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        lVar1 = *unaff_RSI;
      }
      if (lVar1 != 0) {
        iVar6 = FUN_01d3a5a0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 6) goto LAB_00b20957;
        iVar6 = FUN_01d3a5a0();
        if (iVar6 == 5) {
          uVar10 = FUN_01d3abf0();
          uVar10 = CONCAT44((float)((ulonglong)uVar10 >> 0x20) + (auVar16._4_4_ - (float)uVar3),
                            (float)uVar10 + (auVar16._0_4_ - fVar7));
          fStack_d0 = extraout_XMM0_Dc_01 + (auVar16._8_4_ - extraout_XMM0_Dc);
          fStack_cc = extraout_XMM0_Dd_01 + (auVar16._12_4_ - extraout_XMM0_Dd);
        }
        fStack_d4 = (float)((ulonglong)uVar10 >> 0x20);
        local_d8 = (float)uVar10;
        FUN_01e3f820();
        local_68 = fVar12;
        fStack_64 = fVar14;
        fStack_60 = (float)in_XMM1_Dd;
        fStack_5c = (float)uVar13;
        fVar12 = (float)_logf(DAT_028a0e34);
        local_78._0_4_ = fVar12 / DAT_0241c6f0;
        fVar8 = (float)_logf(DAT_028a0e38);
        local_d8 = local_d8 / local_68;
        fVar12 = fStack_d4;
        fVar14 = fStack_d0;
        fVar9 = fStack_cc;
        local_44 = (float)_exp2f((fVar8 / DAT_0241c6f0 - (float)local_78._0_4_) * local_d8 +
                                 (float)local_78._0_4_);
        FUN_01e3f820();
        _local_78 = ZEXT416((uint)DAT_028a0e30);
        local_68 = local_d8;
        fStack_64 = fVar12;
        fStack_60 = fVar14;
        fStack_5c = fVar9;
        FUN_01e3f820();
        fVar12 = ((float)local_78._0_4_ *
                 (float)((uint)(fStack_d4 - fStack_64 * DAT_0239011c) ^ _DAT_023945e0)) /
                 (fVar12 * DAT_0239011c);
        if (local_31 == '\0') {
          fVar12 = fVar12 + fVar12;
        }
        fVar14 = fVar12;
        if ((DAT_028a0e3c < (float)((uint)fVar12 & _DAT_02390140)) &&
           (fVar14 = DAT_028a0e3c, fVar12 <= DAT_0239424c)) {
          fVar14 = (float)((uint)DAT_028a0e3c ^ _DAT_023945e0);
        }
        local_78._0_4_ = DAT_028a0e34;
        local_68 = DAT_028a0e38;
        FUN_00b32070(fVar14,0);
        fVar14 = 0.0;
        in_XMM1_Dd = 0;
        uVar13 = 0;
        fVar12 = (float)local_78._0_4_;
        if ((float)local_78._0_4_ <= local_44) {
          fVar12 = local_44;
        }
        fVar9 = local_68;
        if (fVar12 <= local_68) {
          fVar9 = fVar12;
        }
        FUN_00b39c40(fVar9);
        local_98 = '\0';
        local_a0 = 0;
        FUN_00b32070(&local_a0,0);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RDI[0x28] != 0) && (unaff_RDI[0x2c] != 0)) {
          FUN_01d11e80();
        }
        goto LAB_00b20640;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
LAB_00b20957:
      FUN_00d50b20();
    }
  }
  else {
    local_90 = *unaff_RSI;
    local_88 = '\0';
    FUN_01d122b0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


