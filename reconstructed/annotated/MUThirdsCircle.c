// ===== MUThirdsCircle — Annotated small functions =====
// 13 readable functions

// ==================================================
// @011eb620 (1972 bytes) — math_loop

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
  longlong *arg1;
  longlong this;
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
  
  iVar2 = *(int *)(*arg1 + 0xc);
  fVar29 = (float)*(double *)(*(longlong *)(this + 0x1d0) + 0x50);
  auVar34._4_12_ = in_XMM0._4_12_;
  auVar34._0_4_ = in_XMM0._0_4_ / fVar29;
  iVar3 = *(int *)(*(longlong *)(this + 0x1d0) + 0x28);
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
  *(undefined8 *)(**(longlong **)(*arg1 + 0x10) + 0x20) = 0;
  *(undefined8 *)(*(longlong *)(*(longlong *)(*arg1 + 0x10) + 8) + 0x20) = 0;
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(*arg1 + 0x10) + (longlong)(int)uVar11 * 8) + 0x20) = 0;
  uVar10 = _UNK_023945ec;
  uVar9 = _UNK_023945e8;
  uVar19 = _UNK_023945e4;
  if (in_EDX == 0) {
    if (2 < (int)uVar11) {
      lVar13 = 0x18;
      uVar14 = 2;
      do {
        lVar15 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + -0x10 + lVar13);
        lVar4 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + lVar13);
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
        lVar15 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar14 * 8);
        if (DAT_02394274 <= (float)(int)uVar14 + fVar31) {
          *(float *)(lVar15 + 0x20) = fVar17;
          *(float *)(lVar15 + 0x24) = fVar31;
          uVar19 = _atan2f();
        }
        else {
          *(undefined8 *)(lVar15 + 0x20) = 0;
          lVar15 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar14 * 8);
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
        lVar13 = *(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar14 * 8);
        if (DAT_02394274 <= (float)(int)uVar14 + fVar35) break;
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *(undefined4 *)(*(longlong *)(*(longlong *)(*arg1 + 0x10) + uVar14 * 8) + 0x28) = 0;
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




// ==================================================
// @011ec5f0 (1782 bytes) — math_loop

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *in_RCX;
  longlong *in_RDX;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *arg1;
  longlong this;
  uint uVar16;
  float fVar17;
  longlong local_58;
  char local_50;
  
  uVar2 = *(uint *)(*(longlong *)(this + 0x160) + 0xc);
  uVar10 = (ulonglong)uVar2;
  uVar3 = *(uint *)(*(longlong *)(this + 0x1d0) + 0x24);
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_025f0d98;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  (*DAT_025f0db0)();
  uVar7 = FUN_014832c0();
  FUN_00d216c0();
  uVar15 = uVar10;
  if (0 < (int)uVar2) {
    do {
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_50 = '\0';
      FUN_00d21140();
      FUN_00d50b20();
      uVar16 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar16;
    } while (uVar16 != 0);
    uVar15 = 0;
    if ((int)uVar3 < 2) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if (*(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar15 * 8) != 0) {
          FUN_00d50b00();
        }
        FUN_015c15b0(param_1);
        FUN_00d50b20();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        uVar15 = uVar15 + 1;
      } while (uVar10 != uVar15);
    }
    else {
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar15 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        uVar14 = 1;
        do {
          fVar17 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar14 * 8) + 0x14);
          fVar1 = *(float *)(*(longlong *)(*in_RDX + 0x10) + uVar14 * 4);
          iVar8 = FUN_00e7d780(*(undefined4 *)(*(longlong *)(*arg1 + 0x10) + uVar14 * 4));
          lVar6 = *(longlong *)(lVar5 + 0x10);
          *(float *)(lVar6 + (longlong)iVar8 * 4) =
               fVar17 * fVar1 + *(float *)(lVar6 + (longlong)iVar8 * 4);
          uVar14 = uVar14 + 1;
        } while (uVar3 != uVar14);
        FUN_015c15b0(param_1);
        FUN_00d50b20();
        FUN_00d50b20();
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar10);
    }
  }
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (0 < (int)uVar7) {
    uVar16 = uVar7;
    if ((int)uVar2 < 1) {
      do {
        FUN_015c15b0(param_2,uVar10);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    else {
      uVar14 = (ulonglong)(uVar2 & 3);
      uVar15 = 0;
      do {
        lVar4 = *(longlong *)(*in_RCX + 0x10);
        lVar5 = *(longlong *)(local_58 + 0x10);
        uVar12 = 0;
        if (2 < uVar10 - 1) {
          do {
            *(undefined4 *)(lVar5 + uVar12 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(undefined4 *)(lVar5 + 4 + uVar12 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + 8 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(undefined4 *)(lVar5 + 8 + uVar12 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(undefined4 *)(lVar5 + 0xc + uVar12 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x18 + uVar12 * 8) + 0x10) + uVar15 * 4);
            uVar12 = uVar12 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar12);
        }
        if (uVar14 != 0) {
          uVar13 = 0;
          do {
            *(undefined4 *)(lVar5 + uVar12 * 4 + uVar13 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + uVar12 * 8 + uVar13 * 8) + 0x10) + uVar15 * 4
                  );
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        FUN_015c15b0(param_2,uVar10);
        lVar4 = *(longlong *)(local_58 + 0x10);
        lVar5 = *(longlong *)(*in_RCX + 0x10);
        uVar12 = 0;
        if (2 < uVar10 - 1) {
          do {
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + uVar12 * 4);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar5 + 8 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + 4 + uVar12 * 4);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + 8 + uVar12 * 4);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x18 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + 0xc + uVar12 * 4);
            uVar12 = uVar12 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar12);
        }
        if ((uVar2 & 3) != 0) {
          uVar13 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar5 + uVar12 * 8 + uVar13 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + uVar12 * 4 + uVar13 * 4);
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar7);
    }
  }
  if (0 < (int)uVar2) {
    if ((int)uVar3 < 2) {
      uVar15 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if (*(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar15 * 8) != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        uVar15 = uVar15 + 1;
      } while (uVar10 != uVar15);
    }
    else {
      uVar15 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar15 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        uVar14 = 1;
        do {
          fVar17 = *(float *)(*(longlong *)(*arg1 + 0x10) + uVar14 * 4);
          iVar9 = FUN_00e7d780();
          fVar17 = fVar17 - (float)iVar9;
          iVar8 = iVar9 + 1;
          if ((int)uVar7 <= iVar9 + 1) {
            iVar8 = iVar9;
          }
          lVar6 = *(longlong *)(lVar5 + 0x10);
          *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar14 * 8) + 0x38) =
               fVar17 * *(float *)(lVar6 + (longlong)iVar8 * 4) +
               (DAT_02390124 - fVar17) * *(float *)(lVar6 + (longlong)iVar9 * 4);
          uVar14 = uVar14 + 1;
        } while (uVar3 != uVar14);
        FUN_00d50b20();
        FUN_00d50b20();
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar10);
    }
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @011ebe10 (1500 bytes) — math_loop

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong this;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(longlong *)(this + 0x160) + 0xc);
  uVar14 = (ulonglong)uVar1;
  uVar2 = *(uint *)(*(longlong *)(this + 0x1d0) + 0x24);
  uVar12 = (ulonglong)uVar2;
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < (int)uVar1) {
    if ((int)uVar2 < 2) {
      uVar11 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar11 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_015b4130(0,uVar12);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        uVar3 = *(uint *)(local_40 + 0xc);
        if (0 < (int)uVar3) {
          uVar13 = 0;
          do {
            iVar7 = FUN_00e7d850(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar13 * 8) + 0x10
                                  ));
            *(undefined1 *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 8) + 0x3c)
                 = 1;
            uVar13 = uVar13 + 1;
          } while (uVar3 != uVar13);
        }
        FUN_00d50b20();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar14);
    }
    else {
      uVar11 = (ulonglong)((uint)(uVar12 - 1) & 3);
      uVar13 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar13 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(longlong *)(lVar4 + 0x10);
        lVar6 = *(longlong *)(local_40 + 0x10);
        lVar8 = 1;
        if (2 < uVar12 - 2) {
          uVar10 = 0;
          do {
            uVar9 = uVar10;
            *(undefined4 *)(lVar6 + 4 + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + 8 + uVar9 * 8) + 0x14);
            *(undefined4 *)(lVar6 + 8 + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + 0x10 + uVar9 * 8) + 0x14);
            *(undefined4 *)(lVar6 + 0xc + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + 0x18 + uVar9 * 8) + 0x14);
            *(undefined4 *)(lVar6 + 0x10 + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + 0x20 + uVar9 * 8) + 0x14);
            uVar10 = uVar9 + 4;
          } while ((uVar12 - 1 & 0xfffffffffffffffc) != uVar9 + 4);
          lVar8 = uVar9 + 5;
        }
        if (uVar11 != 0) {
          uVar10 = 0;
          do {
            *(undefined4 *)(lVar6 + lVar8 * 4 + uVar10 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + lVar8 * 8 + uVar10 * 8) + 0x14);
            uVar10 = uVar10 + 1;
          } while (uVar11 != uVar10);
        }
        FUN_015b4130(0,uVar12);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        uVar3 = *(uint *)(local_40 + 0xc);
        if (0 < (int)uVar3) {
          uVar10 = 0;
          do {
            iVar7 = FUN_00e7d850(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar10 * 8) + 0x10
                                  ));
            *(undefined1 *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 8) + 0x3c)
                 = 1;
            uVar10 = uVar10 + 1;
          } while (uVar3 != uVar10);
        }
        FUN_00d50b20();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar14);
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (1 < (int)uVar2) {
    if ((int)uVar1 < 1) {
      uVar11 = 1;
      do {
        FUN_015b4130(0,uVar14);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        uVar1 = *(uint *)(local_40 + 0xc);
        if (0 < (int)uVar1) {
          uVar13 = 0;
          do {
            iVar7 = FUN_00e7d850(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar13 * 8) + 0x10
                                  ));
            *(undefined1 *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + (longlong)iVar7 * 8) +
                 0x10) + uVar11 * 8) + 0x3d) = 1;
            uVar13 = uVar13 + 1;
          } while (uVar1 != uVar13);
        }
        FUN_00d50b20();
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar12);
    }
    else {
      uVar14 = 1;
      do {
        lVar4 = *(longlong *)(*(longlong *)(this + 0x280) + 0x10);
        lVar5 = *(longlong *)(local_40 + 0x10);
        uVar11 = 0;
        if (uVar1 != 1) {
          do {
            *(undefined4 *)(lVar5 + uVar11 * 4) =
                 *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar4 + uVar11 * 8) + 0x10) + uVar14 * 8) + 0x14);
            *(undefined4 *)(lVar5 + 4 + uVar11 * 4) =
                 *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar4 + 8 + uVar11 * 8) + 0x10) + uVar14 * 8) +
                  0x14);
            uVar11 = uVar11 + 2;
          } while ((uVar1 & 0xfffffffe) != uVar11);
        }
        if ((uVar1 & 1) != 0) {
          *(undefined4 *)(lVar5 + uVar11 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + uVar11 * 8) + 0x10) + uVar14 * 8)
                + 0x14);
        }
        FUN_015b4130(0);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        uVar2 = *(uint *)(local_40 + 0xc);
        if (0 < (int)uVar2) {
          uVar11 = 0;
          do {
            iVar7 = FUN_00e7d850(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar11 * 8) + 0x10
                                  ));
            *(undefined1 *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + (longlong)iVar7 * 8) +
                 0x10) + uVar14 * 8) + 0x3d) = 1;
            uVar11 = uVar11 + 1;
          } while (uVar2 != uVar11);
        }
        FUN_00d50b20();
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar12);
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @011e89a0 (1119 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_025f45c8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  if (DAT_027bc6a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bc5f8 = FUN_00d4fe50();
      _DAT_027bc5e0 = "PNTestChord";
      _DAT_027bc5e8 = 0x20;
      _DAT_027bc5f0 = FUN_011e8950;
      _DAT_027bc600 = 0;
      uRam00000000027bc608 = 0;
      _DAT_027bc610 = 0;
      uRam00000000027bc618 = 0;
      _DAT_027bc620 = 0;
      uRam00000000027bc628 = 0;
      _DAT_027bc630 = 0;
      uRam00000000027bc638 = 0;
      _DAT_027bc640 = 0;
      uRam00000000027bc648 = 0;
      _DAT_027bc650 = 0;
      uRam00000000027bc658 = 0;
      _DAT_027bc660 = 0;
      uRam00000000027bc668 = 0;
      _DAT_027bc670 = 0;
      uRam00000000027bc678 = 0;
      _DAT_027bc680 = 0;
      uRam00000000027bc688 = 0;
      _DAT_027bc690 = 0;
      _uRam00000000027bc698 = 0;
      _DAT_027bc6a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bc69b == '\0') {
    FUN_011e8e30();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 2) = 0;
  if (DAT_027bc6a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bc5f8 = FUN_00d4fe50();
      _DAT_027bc5e0 = "PNTestChord";
      _DAT_027bc5e8 = 0x20;
      _DAT_027bc5f0 = FUN_011e8950;
      _DAT_027bc600 = 0;
      uRam00000000027bc608 = 0;
      _DAT_027bc610 = 0;
      uRam00000000027bc618 = 0;
      _DAT_027bc620 = 0;
      uRam00000000027bc628 = 0;
      _DAT_027bc630 = 0;
      uRam00000000027bc638 = 0;
      _DAT_027bc640 = 0;
      uRam00000000027bc648 = 0;
      _DAT_027bc650 = 0;
      uRam00000000027bc658 = 0;
      _DAT_027bc660 = 0;
      uRam00000000027bc668 = 0;
      _DAT_027bc670 = 0;
      uRam00000000027bc678 = 0;
      _DAT_027bc680 = 0;
      uRam00000000027bc688 = 0;
      _DAT_027bc690 = 0;
      _uRam00000000027bc698 = 0;
      _DAT_027bc6a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bc69b == '\0') {
    FUN_011e8fa0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x14) = 0;
  if (DAT_027bc6a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bc5f8 = FUN_00d4fe50();
      _DAT_027bc5e0 = "PNTestChord";
      _DAT_027bc5e8 = 0x20;
      _DAT_027bc5f0 = FUN_011e8950;
      _DAT_027bc600 = 0;
      uRam00000000027bc608 = 0;
      _DAT_027bc610 = 0;
      uRam00000000027bc618 = 0;
      _DAT_027bc620 = 0;
      uRam00000000027bc628 = 0;
      _DAT_027bc630 = 0;
      uRam00000000027bc638 = 0;
      _DAT_027bc640 = 0;
      uRam00000000027bc648 = 0;
      _DAT_027bc650 = 0;
      uRam00000000027bc658 = 0;
      _DAT_027bc660 = 0;
      uRam00000000027bc668 = 0;
      _DAT_027bc670 = 0;
      uRam00000000027bc678 = 0;
      _DAT_027bc680 = 0;
      uRam00000000027bc688 = 0;
      _DAT_027bc690 = 0;
      _uRam00000000027bc698 = 0;
      _DAT_027bc6a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bc69b == '\0') {
    FUN_011e9110();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 3) = 0;
  if (DAT_027bc6a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bc5f8 = FUN_00d4fe50();
      _DAT_027bc5e0 = "PNTestChord";
      _DAT_027bc5e8 = 0x20;
      _DAT_027bc5f0 = FUN_011e8950;
      _DAT_027bc600 = 0;
      uRam00000000027bc608 = 0;
      _DAT_027bc610 = 0;
      uRam00000000027bc618 = 0;
      _DAT_027bc620 = 0;
      uRam00000000027bc628 = 0;
      _DAT_027bc630 = 0;
      uRam00000000027bc638 = 0;
      _DAT_027bc640 = 0;
      uRam00000000027bc648 = 0;
      _DAT_027bc650 = 0;
      uRam00000000027bc658 = 0;
      _DAT_027bc660 = 0;
      uRam00000000027bc668 = 0;
      _DAT_027bc670 = 0;
      uRam00000000027bc678 = 0;
      _DAT_027bc680 = 0;
      uRam00000000027bc688 = 0;
      _DAT_027bc690 = 0;
      _uRam00000000027bc698 = 0;
      _DAT_027bc6a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bc69b == '\0') {
    FUN_011e9280();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x1c) = 0;
  if (DAT_027bc6a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bc5f8 = FUN_00d4fe50();
      _DAT_027bc5e0 = "PNTestChord";
      _DAT_027bc5e8 = 0x20;
      _DAT_027bc5f0 = FUN_011e8950;
      _DAT_027bc600 = 0;
      uRam00000000027bc608 = 0;
      _DAT_027bc610 = 0;
      uRam00000000027bc618 = 0;
      _DAT_027bc620 = 0;
      uRam00000000027bc628 = 0;
      _DAT_027bc630 = 0;
      uRam00000000027bc638 = 0;
      _DAT_027bc640 = 0;
      uRam00000000027bc648 = 0;
      _DAT_027bc650 = 0;
      uRam00000000027bc658 = 0;
      _DAT_027bc660 = 0;
      uRam00000000027bc668 = 0;
      _DAT_027bc670 = 0;
      uRam00000000027bc678 = 0;
      _DAT_027bc680 = 0;
      uRam00000000027bc688 = 0;
      _DAT_027bc690 = 0;
      _uRam00000000027bc698 = 0;
      _DAT_027bc6a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bc69b == '\0') {
    FUN_011e93f0();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @011eaca0 (1080 bytes) — math_loop

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong this;
  uint uVar15;
  ulonglong uVar16;
  longlong local_70;
  char local_68;
  
  uVar14 = *(uint *)(*(longlong *)(this + 0x160) + 0xc);
  uVar7 = (ulonglong)uVar14;
  uVar1 = *(uint *)(*(longlong *)(this + 0x1d0) + 0x24);
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  pcVar6 = DAT_02572370;
  (*DAT_02572370)();
  lVar2 = *(longlong *)(this + 0x280);
  *(undefined8 **)(this + 0x280) = puVar8;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  if (0 < (int)uVar14) {
    if ((int)uVar1 < 1) {
      do {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar6)();
        FUN_00d21370();
        FUN_00d21140();
        FUN_00d50b20();
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    else {
      uVar13 = 0;
      do {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar6)();
        FUN_00d21370();
        FUN_00d21140();
        uVar15 = 0;
        do {
          FUN_0181de80();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          uVar15 = uVar15 + 1;
        } while (uVar1 != uVar15);
        if (puVar8 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar14);
    }
    if ((int)uVar1 < 1) {
      uVar16 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x160) + 0x10) + uVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar16 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_015c6b60();
        FUN_015c6310();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
    }
    else {
      uVar16 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x160) + 0x10) + uVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar16 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        lVar9 = FUN_015c6b60();
        lVar10 = FUN_015c6310();
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if ((ulonglong)uVar1 - 1 < 3) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + uVar11 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + uVar11 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + uVar11 * 4);
            lVar5 = *(longlong *)(lVar4 + 8 + uVar11 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + 4 + uVar11 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + 4 + uVar11 * 4);
            lVar5 = *(longlong *)(lVar4 + 0x10 + uVar11 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + 8 + uVar11 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + 8 + uVar11 * 4);
            lVar5 = *(longlong *)(lVar4 + 0x18 + uVar11 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + 0xc + uVar11 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + 0xc + uVar11 * 4);
            uVar11 = uVar11 + 4;
          } while ((uVar1 & 0xfffffffc) != uVar11);
        }
        if ((ulonglong)(uVar1 & 3) != 0) {
          uVar12 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + uVar11 * 8 + uVar12 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + uVar11 * 4 + uVar12 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + uVar11 * 4 + uVar12 * 4);
            uVar12 = uVar12 + 1;
          } while ((uVar1 & 3) != uVar12);
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar7);
    }
  }
  return;
}




// ==================================================
// @011ed4f0 (1046 bytes) — math_loop

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong this;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(longlong *)(this + 0x160) + 0xc);
  uVar4 = FUN_00e7d780(param_1 / (float)*(double *)(*(longlong *)(this + 0x1d0) + 0x50));
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  puVar2 = *(undefined8 **)(this + 0x2a0);
  if (puVar2 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(this + 0x2a0) = puVar5;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00d21140();
  FUN_00d50b20();
  if (1 < (int)uVar4) {
    if ((int)uVar1 < 1) {
      iVar8 = uVar4 - 1;
      do {
        FUN_00c8e690();
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        FUN_00d21140();
        FUN_00d50b20();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    else {
      uVar7 = 1;
      do {
        FUN_00c8e690();
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        FUN_00d21140();
        uVar6 = 0;
        do {
          lVar3 = *(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar6 * 8) + 0x10)
                   + uVar7 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if (*(char *)(lVar3 + 0x3d) != '\0') {
            *(undefined4 *)(*(longlong *)(local_40 + 0x10) + uVar6 * 4) =
                 *(undefined4 *)(lVar3 + 0x14);
          }
          FUN_00d50b20();
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar4);
    }
  }
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(this + 0x2a8);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(this + 0x2a8) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(this + 0x2b0);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(this + 0x2b0) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @011ecf60 (977 bytes) — math_loop

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong this;
  ulonglong uVar8;
  longlong local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(longlong *)(this + 0x160) + 0xc);
  uVar5 = FUN_00e7d780(param_1 / (float)*(double *)(*(longlong *)(this + 0x1d0) + 0x50));
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  puVar2 = *(undefined8 **)(this + 0x288);
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(this + 0x288) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (0 < (int)uVar1) {
    if ((int)uVar5 < 2) {
      uVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar7 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_38 = '\0';
        FUN_00d21140();
        FUN_00d50b20();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    else {
      uVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar7 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_38 = '\0';
        FUN_00d21140();
        uVar8 = 1;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar8 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          if (*(char *)(lVar4 + 0x3c) != '\0') {
            *(undefined4 *)(*(longlong *)(local_40 + 0x10) + uVar8 * 4) =
                 *(undefined4 *)(lVar4 + 0x14);
          }
          FUN_00d50b20();
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(this + 0x290);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(this + 0x290) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(this + 0x298);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(this + 0x298) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @011ee630 (961 bytes) — math_loop

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong arg1;
  ulonglong uVar13;
  longlong this;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar20;
  undefined1 auVar19 [16];
  longlong lVar21;
  undefined1 auVar22 [16];
  longlong lVar23;
  longlong local_1038 [256];
  longlong local_838 [256];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar3 = *(uint *)(this + 0x20);
  uVar10 = (longlong)(int)*(uint *)(this + 0x1c) & param_2;
  iVar4 = *(int *)(this + 0x18);
  iVar17 = iVar4 - ((uint)param_2 & *(uint *)(this + 0x1c));
  iVar6 = iVar17;
  if ((longlong)(uVar10 + (longlong)param_1) <= (longlong)iVar4) {
    iVar6 = param_1;
  }
  uVar15 = (ulonglong)(byte)uVar3;
  iVar18 = 0;
  if ((longlong)iVar4 < (longlong)(uVar10 + (longlong)param_1)) {
    iVar18 = param_1 - iVar17;
  }
  if (uVar15 != 0) {
    plVar5 = *(longlong **)(this + 0x28);
    if (((uVar3 & 0xff) < 4) || ((local_838 < plVar5 + uVar15 && (plVar5 < local_838 + uVar15)))) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulonglong)(uVar3 & 0xfc);
      uVar14 = (uVar13 - 4 >> 2) + 1;
      uVar16 = (ulonglong)((uint)uVar14 & 3);
      uVar20 = (undefined4)(uVar10 >> 0x20);
      if (uVar13 - 4 < 0xc) {
        lVar11 = 0;
      }
      else {
        lVar12 = -(uVar14 & 0xfffffffffffffffc);
        lVar11 = 0;
        auVar22._8_4_ = (int)uVar10;
        auVar22._0_8_ = uVar10;
        auVar22._12_4_ = uVar20;
        lVar21 = uVar10 * 4;
        lVar23 = auVar22._8_8_ * 4;
        do {
          lVar7 = (plVar5 + lVar11)[1];
          lVar8 = plVar5[lVar11 + 2];
          lVar9 = (plVar5 + lVar11 + 2)[1];
          local_838[lVar11] = plVar5[lVar11] + lVar21;
          local_838[lVar11 + 1] = lVar7 + lVar23;
          local_838[lVar11 + 2] = lVar8 + lVar21;
          local_838[lVar11 + 3] = lVar9 + lVar23;
          lVar7 = (plVar5 + lVar11 + 4)[1];
          lVar8 = plVar5[lVar11 + 6];
          lVar9 = (plVar5 + lVar11 + 6)[1];
          local_838[lVar11 + 4] = plVar5[lVar11 + 4] + lVar21;
          local_838[lVar11 + 5] = lVar7 + lVar23;
          local_838[lVar11 + 6] = lVar8 + lVar21;
          local_838[lVar11 + 7] = lVar9 + lVar23;
          lVar7 = (plVar5 + lVar11 + 8)[1];
          lVar8 = plVar5[lVar11 + 10];
          lVar9 = (plVar5 + lVar11 + 10)[1];
          local_838[lVar11 + 8] = plVar5[lVar11 + 8] + lVar21;
          local_838[lVar11 + 9] = lVar7 + lVar23;
          local_838[lVar11 + 10] = lVar8 + lVar21;
          local_838[lVar11 + 0xb] = lVar9 + lVar23;
          lVar7 = (plVar5 + lVar11 + 0xc)[1];
          lVar8 = plVar5[lVar11 + 0xe];
          lVar9 = (plVar5 + lVar11 + 0xe)[1];
          local_838[lVar11 + 0xc] = plVar5[lVar11 + 0xc] + lVar21;
          local_838[lVar11 + 0xd] = lVar7 + lVar23;
          local_838[lVar11 + 0xe] = lVar8 + lVar21;
          local_838[lVar11 + 0xf] = lVar9 + lVar23;
          lVar11 = lVar11 + 0x10;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar16 != 0) {
        lVar12 = 0;
        auVar19._8_4_ = (int)uVar10;
        auVar19._0_8_ = uVar10;
        auVar19._12_4_ = uVar20;
        lVar21 = auVar19._8_8_ * 4;
        do {
          plVar2 = (longlong *)((longlong)plVar5 + lVar12 + lVar11 * 8);
          lVar23 = plVar2[1];
          plVar1 = (longlong *)((longlong)plVar5 + lVar12 + lVar11 * 8 + 0x10);
          lVar7 = *plVar1;
          lVar8 = plVar1[1];
          plVar1 = (longlong *)((longlong)local_838 + lVar12 + lVar11 * 8);
          *plVar1 = *plVar2 + uVar10 * 4;
          plVar1[1] = lVar23 + lVar21;
          plVar1 = (longlong *)((longlong)local_838 + lVar12 + lVar11 * 8 + 0x10);
          *plVar1 = lVar7 + uVar10 * 4;
          plVar1[1] = lVar8 + lVar21;
          lVar12 = lVar12 + 0x20;
        } while (uVar16 << 5 != lVar12);
      }
      if (uVar13 == uVar15) goto LAB_011ee8b0;
    }
    uVar16 = ~uVar13;
    uVar14 = uVar15 & 3;
    if ((uVar3 & 3) != 0) {
      do {
        local_838[uVar13] = plVar5[uVar13] + uVar10 * 4;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (2 < uVar16 + uVar15) {
      lVar11 = uVar10 * 4;
      do {
        local_838[uVar13] = plVar5[uVar13] + lVar11;
        local_838[uVar13 + 1] = plVar5[uVar13 + 1] + lVar11;
        local_838[uVar13 + 2] = plVar5[uVar13 + 2] + lVar11;
        local_838[uVar13 + 3] = plVar5[uVar13 + 3] + lVar11;
        uVar13 = uVar13 + 4;
      } while (uVar15 != uVar13);
    }
  }
LAB_011ee8b0:
  FUN_00aea110(iVar6,0x44,uVar3,param_3);
  if (iVar18 != 0) {
    if ((param_3 & 0xff) != 0) {
      lVar11 = (longlong)iVar6;
      if ((ulonglong)(param_3 & 0xff) - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          lVar21 = *(longlong *)(arg1 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10] = lVar12;
          lVar21 = *(longlong *)(arg1 + 8 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 1] = lVar12;
          lVar21 = *(longlong *)(arg1 + 0x10 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 2] = lVar12;
          lVar21 = *(longlong *)(arg1 + 0x18 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 3] = lVar12;
          uVar10 = uVar10 + 4;
        } while ((param_3 & 0xfc) != uVar10);
      }
      if ((ulonglong)(param_3 & 3) != 0) {
        uVar15 = 0;
        do {
          lVar21 = *(longlong *)(arg1 + uVar10 * 8 + uVar15 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + uVar15] = lVar12;
          uVar15 = uVar15 + 1;
        } while ((param_3 & 3) != uVar15);
      }
    }
    FUN_00aea110(iVar18,0x44,*(undefined4 *)(this + 0x20),param_3);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




// ==================================================
// @011efc00 (753 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  longlong arg1;
  undefined8 *this;
  longlong *plVar6;
  longlong **pplVar7;
  longlong local_a0;
  char local_98;
  longlong *local_40;
  char local_38;
  
  plVar6 = *(longlong **)(arg1 + 0x98);
  if (plVar6 == (longlong *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
    FUN_00d50b00();
  }
  FUN_01e51a60();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = DAT_026d83d0;
  if (DAT_026d83d0 != 0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  FUN_01e57490();
  plVar1 = local_40;
  FUN_00081d60();
  if (plVar1 == (longlong *)0x0) {
    pplVar7 = &DAT_02802688;
    plVar1 = DAT_02802688;
    cVar4 = DAT_02802690;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar7 = &DAT_02802688;
    }
    plVar1 = *pplVar7;
    cVar4 = *(char *)(pplVar7 + 1);
  }
  if (cVar4 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    *this = plVar3;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    FUN_01d2a770();
    *this = plVar3;
    *(undefined1 *)(this + 1) = 1;
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @011eb250 (724 bytes) — math_loop

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int unaff_ESI;
  longlong this;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar1 = *(uint *)(*(longlong *)(this + 0x160) + 0xc);
  local_38 = param_2;
  local_34 = param_1;
  if (unaff_ESI == 0) {
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(this + 0x280) + 0x10) + uVar6 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_68 = 1;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_70 = lVar5;
        FUN_011eb620(local_34,local_38,&local_50);
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
  }
  else {
    lVar5 = **(longlong **)(*(longlong *)(this + 0x280) + 0x10);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_e0 = 0;
    local_d8 = 0;
    FUN_011eb620(local_34,local_38,&local_e0);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(this + 0x280) + 0x10) +
             (longlong)(int)(uVar1 - 1) * 8);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_c8 = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_d0 = lVar5;
    FUN_011eb620(local_34,local_38,&local_b0);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (2 < (int)uVar1) {
      local_40 = (ulonglong)(uVar1 - 1) - 1;
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(this + 0x280) + 0x10);
        lVar2 = *(longlong *)(lVar4 + 8 + lVar5 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar4 = *(longlong *)(*(longlong *)(this + 0x280) + 0x10);
        }
        local_98 = 1;
        lVar3 = *(longlong *)(lVar4 + lVar5 * 8);
        local_a0 = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b00();
          lVar4 = *(longlong *)(*(longlong *)(this + 0x280) + 0x10);
        }
        local_88 = 1;
        lVar4 = *(longlong *)(lVar4 + 0x10 + lVar5 * 8);
        local_90 = lVar3;
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        local_78 = 1;
        local_80 = lVar4;
        FUN_011eb620(local_34,local_38,&local_80);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (local_40 != lVar5);
    }
  }
  return;
}




// ==================================================
// @011eeeb0 (706 bytes) — calculation

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong this;
  bool bVar4;
  longlong *local_60;
  char local_58;
  undefined8 local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  local_50 = 0;
  if ((*(longlong *)(this + 0x48) != 0) && (*(longlong *)(this + 0x50) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264180();
    if (local_38 == (longlong *)0x0) {
      bVar4 = false;
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_60;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar3 + 0x378))();
      bVar4 = local_48 != (longlong *)0x0;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar4) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_48;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar3 + 0x378))();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_38;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd200();
      local_50 = (**(code **)(*plVar3 + 0x380))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = FUN_013dd200();
    }
  }
  return local_50;
}




// ==================================================
// @011eded0 (619 bytes) — math_loop

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong arg1;
  longlong this;
  ulonglong uVar6;
  
  if (*(char *)(this + 0x30) == '\0') {
    uVar4 = *(ulonglong *)(this + 0x10);
    bVar2 = *(byte *)(this + 0x20);
    if ((longlong)*(int *)(this + 0x18) <
        (longlong)((longlong)param_4 + (uVar4 & (longlong)(int)*(uint *)(this + 0x1c)))) {
      iVar5 = *(int *)(this + 0x18) - ((uint)uVar4 & *(uint *)(this + 0x1c));
      *param_2 = iVar5;
      param_4 = param_4 - iVar5;
      *param_3 = param_4;
      if (bVar2 == 0) {
        return;
      }
    }
    else {
      *param_2 = param_4;
      param_4 = 0;
      *param_3 = 0;
      if (bVar2 == 0) {
        return;
      }
    }
    uVar4 = uVar4 & (longlong)*(int *)(this + 0x1c);
    uVar6 = (ulonglong)(bVar2 & 3);
    if ((ulonglong)bVar2 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      lVar1 = uVar4 * 4;
      do {
        *(longlong *)(arg1 + uVar3 * 8) =
             *(longlong *)(*(longlong *)(this + 0x28) + uVar3 * 8) + lVar1;
        *(longlong *)(arg1 + 8 + uVar3 * 8) =
             *(longlong *)(*(longlong *)(this + 0x28) + 8 + uVar3 * 8) + lVar1;
        *(longlong *)(arg1 + 0x10 + uVar3 * 8) =
             *(longlong *)(*(longlong *)(this + 0x28) + 0x10 + uVar3 * 8) + lVar1;
        *(longlong *)(arg1 + 0x18 + uVar3 * 8) =
             *(longlong *)(*(longlong *)(this + 0x28) + 0x18 + uVar3 * 8) + lVar1;
        uVar3 = uVar3 + 4;
      } while ((bVar2 & 0xfffffffc) != uVar3);
    }
    if (uVar6 != 0) {
      do {
        *(ulonglong *)(arg1 + uVar3 * 8) =
             *(longlong *)(*(longlong *)(this + 0x28) + uVar3 * 8) + uVar4 * 4;
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_4 != 0) {
      uVar4 = (ulonglong)(bVar2 & 3);
      if ((ulonglong)bVar2 - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(undefined8 *)(param_1 + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(this + 0x28) + uVar6 * 8);
          *(undefined8 *)(param_1 + 8 + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(this + 0x28) + 8 + uVar6 * 8);
          *(undefined8 *)(param_1 + 0x10 + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(this + 0x28) + 0x10 + uVar6 * 8);
          *(undefined8 *)(param_1 + 0x18 + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(this + 0x28) + 0x18 + uVar6 * 8);
          uVar6 = uVar6 + 4;
        } while ((bVar2 & 0xfffffffc) != uVar6);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined8 *)(param_1 + uVar6 * 8) =
             *(undefined8 *)(*(longlong *)(this + 0x28) + uVar6 * 8);
        uVar6 = uVar6 + 1;
      }
    }
  }
  else {
    bVar2 = *(byte *)(this + 0x20);
    if ((ulonglong)bVar2 != 0) {
      uVar6 = (longlong)*(int *)(this + 0x1c) & *(ulonglong *)(this + 0x10);
      uVar4 = (ulonglong)(bVar2 & 3);
      if ((ulonglong)bVar2 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        lVar1 = uVar6 * 4;
        do {
          *(longlong *)(arg1 + uVar3 * 8) =
               *(longlong *)(*(longlong *)(this + 0x28) + uVar3 * 8) + lVar1;
          *(longlong *)(arg1 + 8 + uVar3 * 8) =
               *(longlong *)(*(longlong *)(this + 0x28) + 8 + uVar3 * 8) + lVar1;
          *(longlong *)(arg1 + 0x10 + uVar3 * 8) =
               *(longlong *)(*(longlong *)(this + 0x28) + 0x10 + uVar3 * 8) + lVar1;
          *(longlong *)(arg1 + 0x18 + uVar3 * 8) =
               *(longlong *)(*(longlong *)(this + 0x28) + 0x18 + uVar3 * 8) + lVar1;
          uVar3 = uVar3 + 4;
        } while ((bVar2 & 0xfffffffc) != uVar3);
      }
      if (uVar4 != 0) {
        do {
          *(ulonglong *)(arg1 + uVar3 * 8) =
               *(longlong *)(*(longlong *)(this + 0x28) + uVar3 * 8) + uVar6 * 4;
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    *param_2 = param_4;
    *param_3 = 0;
  }
  return;
}




// ==================================================
// @011e95b0 (559 bytes) — calculation

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025f4940;
  FUN_011e9840();
  FUN_011e9ac0();
  *(undefined4 *)(this + 9) = 0;
  if (DAT_027bc8e0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027bc830 = FUN_00e8b690();
      _DAT_027bc818 = "MUThirdsCircle";
      _DAT_027bc820 = 0x50;
      _DAT_027bc828 = FUN_011e9560;
      _DAT_027bc838 = 0;
      uRam00000000027bc840 = 0;
      _DAT_027bc848 = 0;
      uRam00000000027bc850 = 0;
      _DAT_027bc858 = 0;
      uRam00000000027bc860 = 0;
      _DAT_027bc868 = 0;
      uRam00000000027bc870 = 0;
      _DAT_027bc878 = 0;
      uRam00000000027bc880 = 0;
      _DAT_027bc888 = 0;
      uRam00000000027bc890 = 0;
      _DAT_027bc898 = 0;
      uRam00000000027bc8a0 = 0;
      _DAT_027bc8a8 = 0;
      uRam00000000027bc8b0 = 0;
      _DAT_027bc8b8 = 0;
      uRam00000000027bc8c0 = 0;
      _DAT_027bc8c8 = 0;
      _uRam00000000027bc8d0 = 0;
      _DAT_027bc8d8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bc8d3 == '\0') {
    FUN_011e9d40();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  if (DAT_027bc8e0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027bc830 = FUN_00e8b690();
      _DAT_027bc818 = "MUThirdsCircle";
      _DAT_027bc820 = 0x50;
      _DAT_027bc828 = FUN_011e9560;
      _DAT_027bc838 = 0;
      uRam00000000027bc840 = 0;
      _DAT_027bc848 = 0;
      uRam00000000027bc850 = 0;
      _DAT_027bc858 = 0;
      uRam00000000027bc860 = 0;
      _DAT_027bc868 = 0;
      uRam00000000027bc870 = 0;
      _DAT_027bc878 = 0;
      uRam00000000027bc880 = 0;
      _DAT_027bc888 = 0;
      uRam00000000027bc890 = 0;
      _DAT_027bc898 = 0;
      uRam00000000027bc8a0 = 0;
      _DAT_027bc8a8 = 0;
      uRam00000000027bc8b0 = 0;
      _DAT_027bc8b8 = 0;
      uRam00000000027bc8c0 = 0;
      _DAT_027bc8c8 = 0;
      _uRam00000000027bc8d0 = 0;
      _DAT_027bc8d8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bc8d3 == '\0') {
    FUN_011e9eb0();
    FUN_00e87980();
  }
  return;
}



