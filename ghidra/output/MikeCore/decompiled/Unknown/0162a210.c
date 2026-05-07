// Function: FUN_0162a210
// Address: 0162a210
// Size: 1752 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0162a210(float param_1,int param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *in_RCX;
  float *pfVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong unaff_RSI;
  longlong lVar13;
  longlong lVar14;
  longlong unaff_RDI;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  uint local_res8;
  uint local_res10;
  uint local_res20;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_68 [16];
  
  if ((int)param_4 < (int)local_res20) {
    local_res20 = param_4;
  }
  if ((int)local_res20 < 0) {
    local_res20 = param_4;
  }
  uVar3 = local_res8;
  if ((int)local_res20 < (int)local_res8) {
    uVar3 = local_res20;
  }
  lVar1 = *param_3;
  lVar4 = param_3[1];
  if (((char)lVar4 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  if (0 < (int)local_res10) {
    uVar18 = *(ulonglong *)(lVar1 + 0x10);
    uVar16 = (ulonglong)local_res10;
    if ((local_res10 < 4) ||
       ((uVar18 < uVar16 * 4 + unaff_RSI && (unaff_RSI < uVar18 + uVar16 * 4)))) {
      uVar12 = 0;
    }
    else {
      uVar12 = (ulonglong)(local_res10 & 0xfffffffc);
      uVar17 = 0;
      do {
        auVar28 = maxps(_DAT_02411090,*(undefined1 (*) [16])(unaff_RSI + uVar17 * 4));
        local_68._0_8_ = _logf(auVar28._0_4_);
        local_68._8_4_ = extraout_XMM0_Dc;
        local_68._12_4_ = extraout_XMM0_Dd;
        uStack_84 = auVar28._4_4_;
        uVar2 = _logf(uStack_84);
        auVar24._8_4_ = extraout_XMM0_Dc_00;
        auVar24._0_8_ = uVar2;
        auVar24._12_4_ = extraout_XMM0_Dd_00;
        auVar24 = insertps(local_68,auVar24,0x10);
        uStack_80 = auVar28._8_4_;
        uVar2 = _logf(uStack_80);
        auVar27._8_4_ = extraout_XMM0_Dc_01;
        auVar27._0_8_ = uVar2;
        auVar27._12_4_ = extraout_XMM0_Dd_01;
        auVar24 = insertps(auVar24,auVar27,0x20);
        uStack_7c = auVar28._12_4_;
        uVar2 = _logf(uStack_7c);
        auVar28._8_4_ = extraout_XMM0_Dc_02;
        auVar28._0_8_ = uVar2;
        auVar28._12_4_ = extraout_XMM0_Dd_02;
        auVar24 = insertps(auVar24,auVar28,0x30);
        *(undefined1 (*) [16])(uVar18 + uVar17 * 4) = auVar24;
        uVar17 = uVar17 + 4;
      } while (uVar12 != uVar17);
      if (uVar12 == uVar16) goto LAB_0162a3d0;
    }
    uVar17 = ~uVar12;
    if ((local_res10 & 1) != 0) {
      fVar33 = *(float *)(unaff_RSI + uVar12 * 4);
      fVar34 = DAT_02394274;
      if (DAT_02394274 <= fVar33) {
        fVar34 = fVar33;
      }
      uVar19 = _logf(fVar34);
      *(undefined4 *)(uVar18 + uVar12 * 4) = uVar19;
      uVar12 = uVar12 | 1;
    }
    if (uVar17 + uVar16 != 0) {
      do {
        fVar33 = *(float *)(unaff_RSI + uVar12 * 4);
        fVar34 = DAT_02394274;
        if (DAT_02394274 <= fVar33) {
          fVar34 = fVar33;
        }
        uVar19 = _logf(fVar34);
        *(undefined4 *)(uVar18 + uVar12 * 4) = uVar19;
        fVar33 = *(float *)(unaff_RSI + 4 + uVar12 * 4);
        fVar34 = DAT_02394274;
        if (DAT_02394274 <= fVar33) {
          fVar34 = fVar33;
        }
        uVar19 = _logf(fVar34);
        *(undefined4 *)(uVar18 + 4 + uVar12 * 4) = uVar19;
        uVar12 = uVar12 + 2;
      } while (uVar16 != uVar12);
    }
  }
LAB_0162a3d0:
  iVar5 = param_2 + -1;
  if (0 < (int)uVar3) {
    uVar18 = 0;
    do {
      fVar33 = *(float *)(*(longlong *)(*in_RCX + 0x10) + uVar18 * 4);
      uVar6 = FUN_00e7d780();
      uVar16 = (ulonglong)uVar6;
      uVar19 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < param_2)) {
        lVar8 = *(longlong *)(lVar1 + 0x10);
        fVar34 = *(float *)(lVar8 + uVar16 * 4);
        fVar22 = fVar34;
        if (0 < (int)uVar6) {
          fVar22 = *(float *)(lVar8 + (ulonglong)(uVar6 - 1) * 4);
        }
        fVar35 = fVar34;
        if ((int)uVar6 < iVar5) {
          fVar35 = *(float *)(lVar8 + 4 + uVar16 * 4);
        }
        fVar33 = fVar33 - (float)(int)uVar6;
        fVar21 = fVar35;
        if ((int)uVar6 < param_2 + -2) {
          fVar21 = *(float *)(lVar8 + 8 + uVar16 * 4);
        }
        auVar23._0_4_ = fVar34 * DAT_02394298 - fVar22;
        auVar23._4_4_ = fVar34 * DAT_02394298 - fVar22;
        auVar23._8_8_ = 0;
        auVar27 = blendps(ZEXT416((uint)(fVar22 + fVar22)),auVar23,2);
        auVar24 = insertps(ZEXT416((uint)fVar34),ZEXT416((uint)fVar35),0x10);
        auVar28 = insertps(ZEXT416((uint)(fVar35 * DAT_02390d2c)),ZEXT416((uint)fVar21),0x10);
        fVar26 = auVar28._0_4_ + auVar24._0_4_ * _DAT_02411520 + auVar27._0_4_;
        fVar30 = auVar28._4_4_ + auVar24._4_4_ * _UNK_02411524 + auVar27._4_4_;
        fVar31 = auVar28._8_4_ + auVar24._8_4_ * _UNK_02411528 + auVar27._8_4_;
        fVar32 = auVar28._12_4_ + auVar24._12_4_ * _UNK_0241152c + auVar27._12_4_;
        auVar25._0_4_ = fVar26 - fVar21;
        auVar25._4_4_ = fVar30 - 0.0;
        auVar25._8_4_ = fVar31 - 0.0;
        auVar25._12_4_ = fVar32 - 0.0;
        auVar29._0_4_ = fVar26 * _DAT_02422a60;
        auVar29._4_4_ = fVar30 * _UNK_02422a64;
        auVar29._8_4_ = fVar31 * _UNK_02422a68;
        auVar29._12_4_ = fVar32 * _UNK_02422a6c;
        auVar27 = blendps(auVar29,auVar25,0xd);
        auVar24 = insertps(_DAT_0241b210,ZEXT416((uint)fVar33),0x10);
        uVar19 = _expf((fVar35 - fVar22) * DAT_0239011c * fVar33 +
                       auVar24._4_4_ * auVar27._4_4_ * fVar33 * fVar33 +
                       auVar24._0_4_ * auVar27._0_4_ * fVar33 * fVar33 + fVar34);
      }
      *(undefined4 *)(unaff_RDI + uVar18 * 4) = uVar19;
      uVar18 = uVar18 + 1;
    } while (uVar3 != uVar18);
  }
  if ((int)local_res8 < (int)local_res20) {
    lVar8 = *(longlong *)(*in_RCX + 0x10);
    lVar15 = (longlong)(int)uVar3;
    do {
      fVar33 = *(float *)(lVar8 + lVar15 * 4);
      iVar7 = FUN_00e7d780();
      fVar30 = fVar33 - (float)iVar7;
      fVar26 = DAT_02390124 - fVar30;
      fVar34 = *(float *)(unaff_RSI + (longlong)iVar7 * 4);
      iVar10 = iVar7 + 1;
      fVar22 = *(float *)(unaff_RSI + (longlong)iVar10 * 4);
      lVar8 = *(longlong *)(*in_RCX + 0x10);
      fVar21 = fVar30 * fVar22 + fVar26 * fVar34;
      fVar35 = *(float *)(lVar8 + -4 + lVar15 * 4);
      if (fVar35 < (float)(iVar7 + -1)) {
        lVar13 = (longlong)(iVar7 + -1);
        fVar21 = fVar21 + (DAT_02390124 - DAT_02390124 / (fVar33 - fVar35)) *
                          (fVar34 * fVar30 + *(float *)(unaff_RSI + lVar13 * 4) * fVar26);
        if (fVar35 < (float)(iVar7 + -2)) {
          iVar11 = iVar7 + -3;
          pfVar9 = (float *)((unaff_RSI - 4) + lVar13 * 4);
          lVar13 = lVar13 << 0x20;
          fVar34 = DAT_02390124;
          do {
            fVar34 = fVar34 + DAT_02390124;
            fVar21 = fVar21 + (DAT_02390124 - fVar34 / (fVar33 - fVar35)) *
                              (*(float *)(unaff_RSI + (lVar13 >> 0x1e)) * fVar30 + *pfVar9 * fVar26)
            ;
            fVar31 = (float)iVar11;
            lVar13 = lVar13 + -0x100000000;
            iVar11 = iVar11 + -1;
            pfVar9 = pfVar9 + -1;
          } while (fVar35 < fVar31);
        }
      }
      lVar13 = lVar15 + 1;
      if (lVar15 < (int)(param_4 - 1)) {
        fVar34 = *(float *)(lVar8 + lVar13 * 4);
        if (((float)(iVar7 + 2) < fVar34) && (iVar10 < iVar5)) {
          pfVar9 = (float *)(unaff_RSI + 4 + (longlong)iVar10 * 4);
          iVar10 = iVar7 + 3;
          fVar35 = DAT_02390124;
          for (lVar14 = (longlong)(iVar7 + 2);
              (fVar21 = (DAT_02390124 - fVar35 / (fVar34 - fVar33)) *
                        (*(float *)(unaff_RSI + lVar14 * 4) * fVar30 + fVar22 * fVar26) + fVar21,
              (float)iVar10 < fVar34 && (lVar14 < iVar5)); lVar14 = lVar14 + 1) {
            fVar35 = fVar35 + DAT_02390124;
            fVar22 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            iVar10 = iVar10 + 1;
          }
        }
      }
      *(float *)(unaff_RDI + lVar15 * 4) = fVar21;
      lVar15 = lVar13;
    } while (local_res20 != (uint)lVar13);
  }
  if ((int)local_res20 < (int)param_4) {
    lVar8 = (longlong)(int)local_res20;
    uVar19 = *(undefined4 *)(unaff_RDI + -4 + lVar8 * 4);
    uVar18 = (int)param_4 - lVar8;
    if (7 < uVar18) {
      uVar12 = uVar18 & 0xfffffffffffffff8;
      auVar20._4_4_ = uVar19;
      auVar20._0_4_ = uVar19;
      auVar20._8_4_ = uVar19;
      auVar20._12_4_ = uVar19;
      uVar16 = (uVar12 - 8 >> 3) + 1;
      uVar17 = (ulonglong)((uint)uVar16 & 3);
      if (uVar12 - 8 < 0x18) {
        lVar13 = 0;
      }
      else {
        lVar15 = unaff_RDI + lVar8 * 4;
        lVar14 = -(uVar16 & 0xfffffffffffffffc);
        lVar13 = 0;
        do {
          *(undefined1 (*) [16])(lVar15 + lVar13 * 4) = auVar20;
          *(undefined1 (*) [16])(lVar15 + 0x10 + lVar13 * 4) = auVar20;
          *(undefined1 (*) [16])(lVar15 + 0x20 + lVar13 * 4) = auVar20;
          *(undefined1 (*) [16])(lVar15 + 0x30 + lVar13 * 4) = auVar20;
          *(undefined1 (*) [16])(lVar15 + 0x40 + lVar13 * 4) = auVar20;
          *(undefined1 (*) [16])(lVar15 + 0x50 + lVar13 * 4) = auVar20;
          *(undefined1 (*) [16])(lVar15 + 0x60 + lVar13 * 4) = auVar20;
          *(undefined1 (*) [16])(lVar15 + 0x70 + lVar13 * 4) = auVar20;
          lVar13 = lVar13 + 0x20;
          lVar14 = lVar14 + 4;
        } while (lVar14 != 0);
      }
      if (uVar17 != 0) {
        lVar15 = unaff_RDI + (lVar13 + lVar8) * 4;
        lVar13 = 0;
        do {
          *(undefined1 (*) [16])(lVar15 + lVar13) = auVar20;
          *(undefined1 (*) [16])(lVar15 + 0x10 + lVar13) = auVar20;
          lVar13 = lVar13 + 0x20;
        } while (uVar17 << 5 != lVar13);
      }
      if (uVar18 == uVar12) goto LAB_0162a8ae;
      lVar8 = lVar8 + uVar12;
    }
    do {
      *(undefined4 *)(unaff_RDI + lVar8 * 4) = uVar19;
      lVar8 = lVar8 + 1;
    } while ((int)param_4 != lVar8);
  }
LAB_0162a8ae:
  if (0.0 < param_1) {
    FUN_015c15b0(param_1);
  }
  if (((char)lVar4 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return;
}


