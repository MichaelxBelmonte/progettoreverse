// Function: FUN_011eb620
// Address: 011eb620
// Size: 1972 bytes
// Class: MUThirdsCircle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011eb620(longlong *param_1,float param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int in_EDX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined1 in_XMM0 [16];
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  
  iVar2 = *(int *)(*unaff_RSI + 0xc);
  fVar29 = (float)*(double *)(*(longlong *)(unaff_RDI + 0x1d0) + 0x50);
  auVar34._4_12_ = in_XMM0._4_12_;
  auVar34._0_4_ = in_XMM0._0_4_ / fVar29;
  iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x1d0) + 0x28);
  uVar11 = FUN_00e7d780(auVar34._0_8_);
  uVar12 = FUN_00e7d780(param_2 / fVar29);
  if (iVar2 <= (int)uVar11) {
    uVar11 = iVar2 - 1U;
  }
  uVar5 = iVar2 - 1U;
  if ((int)uVar12 < iVar2) {
    uVar5 = uVar12;
  }
  fVar29 = (float)iVar3 / DAT_02394278;
  *(undefined8 *)(**(longlong **)(*unaff_RSI + 0x10) + 0x20) = 0;
  *(undefined8 *)(*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 8) + 0x20) = 0;
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (longlong)(int)uVar11 * 8) + 0x20) = 0;
  uVar10 = _UNK_023945ec;
  uVar9 = _UNK_023945e8;
  uVar19 = _UNK_023945e4;
  if (in_EDX == 0) {
    if (2 < (int)uVar11) {
      lVar13 = 0x18;
      uVar14 = 2;
      do {
        lVar15 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + -0x10 + lVar13);
        lVar4 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + lVar13);
        uVar20 = _logf();
        local_68 = (float)uVar20;
        uStack_64 = (undefined4)((ulonglong)uVar20 >> 0x20);
        uStack_60 = (undefined4)extraout_XMM0_Qb_02;
        uStack_5c = (undefined4)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
        fVar30 = (float)_logf();
        auVar25._0_8_ = FUN_015b4cb0(*(float *)(lVar15 + 0x1c) - *(float *)(lVar4 + 0x1c));
        auVar25._8_8_ = extraout_XMM0_Qb_03;
        auVar34 = insertps(ZEXT416((uint)(fVar30 - local_68)),auVar25,0x10);
        fVar31 = auVar34._0_4_ * _DAT_023945d0 * fVar29;
        fVar17 = auVar34._4_4_ * _UNK_023945d4 * fVar29;
        if ((longlong)uVar14 < (longlong)(int)uVar5) {
          fVar32 = (float)_logf();
          local_68 = local_68 + (fVar30 - (fVar32 + fVar32));
          auVar26._0_8_ = FUN_015b4cb0();
          auVar26._8_8_ = extraout_XMM0_Qb_04;
          auVar8._4_4_ = uStack_64;
          auVar8._0_4_ = local_68;
          auVar8._8_4_ = uStack_60;
          auVar8._12_4_ = uStack_5c;
          auVar41._4_12_ = auVar8._4_12_;
          local_68 = local_68 * fVar29;
          if (DAT_02394274 <= (float)((uint)(local_68 + DAT_0239011c) & _DAT_02390140)) {
            auVar27._4_12_ = auVar26._4_12_;
            auVar27._0_4_ = (float)auVar26._0_8_ * fVar29;
            auVar28._8_4_ = (undefined4)extraout_XMM0_Qb_04;
            fVar35 = auVar27._0_4_ * auVar27._0_4_;
            fVar32 = local_68 * local_68 + DAT_0239426c + local_68 + fVar35;
            fVar30 = DAT_02390118;
            if (DAT_0239424c <= fVar32) {
              fVar30 = DAT_02390118 - SQRT(fVar32);
            }
            fVar32 = DAT_02390d34;
            if (DAT_02394274 <= (float)((uint)fVar30 & _DAT_02390140)) {
              fVar32 = DAT_02390d00 / fVar30;
            }
            if (DAT_02390118 <= local_68) {
              fVar30 = fVar30 - local_68;
              fVar35 = fVar35 + fVar30 * fVar30;
              fVar18 = _DAT_0241c730;
              fVar33 = _UNK_0241c734;
              if ((DAT_0239424c <= fVar35) &&
                 (auVar38._0_4_ = SQRT(fVar35),
                 DAT_02394274 <= (float)((uint)auVar38._0_4_ & _DAT_02390140))) {
                auVar34 = insertps(auVar27,ZEXT416((uint)fVar30),0x10);
                auVar38._4_4_ = auVar38._0_4_;
                auVar38._8_4_ = auVar28._8_4_;
                auVar38._12_4_ = auVar28._8_4_;
                auVar34 = divps(auVar34,auVar38);
                fVar18 = auVar34._0_4_;
                fVar33 = auVar34._4_4_;
              }
            }
            else {
              auVar41._0_4_ = local_68 + fVar30 + DAT_02390124;
              fVar35 = fVar35 + auVar41._0_4_ * auVar41._0_4_;
              fVar18 = DAT_02390d00;
              fVar33 = 0.0;
              if (DAT_0239424c <= fVar35) {
                fVar35 = SQRT(fVar35);
                fVar33 = 0.0;
                if (DAT_02394274 <= (float)((uint)fVar35 & _DAT_02390140)) {
                  auVar34 = insertps(auVar41,auVar27,0x10);
                  auVar28._4_4_ = fVar35;
                  auVar28._0_4_ = fVar35;
                  auVar28._12_4_ = auVar28._8_4_;
                  auVar34 = divps(auVar34,auVar28);
                  fVar18 = auVar34._0_4_;
                  fVar33 = auVar34._4_4_;
                }
              }
            }
            fVar32 = fVar32 * (fVar17 * fVar33 + fVar31 * fVar18);
            fVar31 = fVar32 * fVar18;
            fVar17 = fVar32 * fVar33;
          }
          else {
            fVar31 = fVar31 + fVar31;
            fVar17 = fVar17 + fVar17;
          }
        }
        uVar1 = uVar14 + 1;
        lVar15 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar14 * 8);
        if (DAT_02394274 <= (float)(int)uVar14 + fVar31) {
          *(float *)(lVar15 + 0x20) = fVar17;
          *(float *)(lVar15 + 0x24) = fVar31;
          uVar19 = _atan2f();
        }
        else {
          *(undefined8 *)(lVar15 + 0x20) = 0;
          lVar15 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar14 * 8);
          uVar19 = 0;
        }
        *(undefined4 *)(lVar15 + 0x28) = uVar19;
        lVar13 = lVar13 + 8;
        uVar14 = uVar1;
      } while (uVar11 != uVar1);
    }
  }
  else if (2 < (int)uVar11) {
    fVar30 = DAT_02390124 / fVar29;
    fVar31 = (float)((uint)fVar30 ^ _DAT_023945e0);
    uVar14 = 2;
    do {
      while( true ) {
        lVar13 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + uVar14 * 8);
        lVar15 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + uVar14 * 8);
        fVar17 = (float)_logf();
        _logf();
        auVar21._0_8_ =
             FUN_015b4cb0((*(float *)(lVar15 + 0x1c) - *(float *)(lVar13 + 0x1c)) -
                          (fVar30 + fVar30) * (float)(int)uVar14);
        auVar21._8_8_ = extraout_XMM0_Qb_00;
        auVar7._4_4_ = extraout_XMM0_Db;
        auVar7._0_4_ = extraout_XMM0_Da - fVar17;
        auVar7._8_4_ = (int)extraout_XMM0_Qb;
        auVar7._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar34 = insertps(auVar7,auVar21,0x10);
        fVar32 = auVar34._0_4_ * _DAT_023945d0 * fVar29;
        fVar35 = auVar34._4_4_ * _UNK_023945d4 * fVar29;
        if ((longlong)uVar14 < (longlong)(int)uVar5) {
          fVar18 = (float)_logf();
          auVar6._4_4_ = uVar19;
          auVar6._0_4_ = fVar31;
          auVar6._8_4_ = uVar9;
          auVar6._12_4_ = uVar10;
          auVar22._0_8_ = FUN_015b4cb0();
          auVar22._8_8_ = extraout_XMM0_Qb_01;
          fVar17 = (fVar31 - (fVar17 + (extraout_XMM0_Da - (fVar18 + fVar18)))) * fVar29;
          if (DAT_02394274 <= (float)((uint)(fVar17 + DAT_0239011c) & _DAT_02390140)) {
            auVar23._4_12_ = auVar22._4_12_;
            auVar23._0_4_ = (float)auVar22._0_8_ * fVar29;
            auVar24._8_4_ = (undefined4)extraout_XMM0_Qb_01;
            fVar36 = auVar23._0_4_ * auVar23._0_4_;
            fVar33 = fVar17 * fVar17 + DAT_0239426c + fVar17 + fVar36;
            fVar18 = DAT_02390118;
            if (DAT_0239424c <= fVar33) {
              fVar18 = DAT_02390118 - SQRT(fVar33);
            }
            fVar33 = DAT_02390d34;
            if (DAT_02394274 <= (float)((uint)fVar18 & _DAT_02390140)) {
              fVar33 = DAT_02390d00 / fVar18;
            }
            if (DAT_02390118 <= fVar17) {
              fVar18 = fVar18 - fVar17;
              fVar36 = fVar36 + fVar18 * fVar18;
              fVar39 = 0.0;
              fVar17 = DAT_02390d00;
              if (DAT_0239424c <= fVar36) {
                fVar36 = SQRT(fVar36);
                fVar39 = 0.0;
                if (DAT_02394274 <= (float)((uint)fVar36 & _DAT_02390140)) {
                  auVar34 = insertps(ZEXT416((uint)fVar18),auVar23,0x10);
                  auVar24._4_4_ = fVar36;
                  auVar24._0_4_ = fVar36;
                  auVar24._12_4_ = auVar24._8_4_;
                  auVar34 = divps(auVar34,auVar24);
                  fVar17 = auVar34._0_4_;
                  fVar39 = auVar34._4_4_;
                }
              }
            }
            else {
              auVar40._0_4_ = fVar17 + fVar18 + DAT_02390124;
              auVar40._4_12_ = auVar6._4_12_;
              fVar36 = fVar36 + auVar40._0_4_ * auVar40._0_4_;
              fVar17 = _DAT_0241c730;
              fVar39 = _UNK_0241c734;
              if ((DAT_0239424c <= fVar36) &&
                 (auVar37._0_4_ = SQRT(fVar36),
                 DAT_02394274 <= (float)((uint)auVar37._0_4_ & _DAT_02390140))) {
                auVar34 = insertps(auVar23,auVar40,0x10);
                auVar37._4_4_ = auVar37._0_4_;
                auVar37._8_4_ = auVar24._8_4_;
                auVar37._12_4_ = auVar24._8_4_;
                auVar34 = divps(auVar34,auVar37);
                fVar17 = auVar34._0_4_;
                fVar39 = auVar34._4_4_;
              }
            }
            fVar33 = fVar33 * (fVar35 * fVar39 + fVar32 * fVar17);
            fVar32 = fVar33 * fVar17;
            fVar35 = fVar33 * fVar39;
          }
          else {
            fVar32 = fVar32 + fVar32;
            fVar35 = fVar35 + fVar35;
          }
        }
        lVar13 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar14 * 8);
        if (DAT_02394274 <= (float)(int)uVar14 + fVar35) break;
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *(undefined4 *)(*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar14 * 8) + 0x28) = 0;
        uVar14 = uVar14 + 1;
        if (uVar11 == uVar14) {
          return;
        }
      }
      *(float *)(lVar13 + 0x20) = fVar32;
      *(float *)(lVar13 + 0x24) = fVar35;
      uVar16 = _atan2f();
      *(undefined4 *)(lVar13 + 0x28) = uVar16;
      uVar14 = uVar14 + 1;
    } while (uVar11 != uVar14);
  }
  return;
}


