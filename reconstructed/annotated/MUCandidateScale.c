// ===== MUCandidateScale — Annotated small functions =====
// 2 readable functions

// ==================================================
// @0187bc30 (2676 bytes) — math_loop

{
  longlong lVar1;
  ulonglong uVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *arg1;
  ulonglong uVar15;
  longlong *this;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  float fVar41;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_b0;
  char local_a8;
  undefined1 local_48 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  
  if ((*this != 0) && (*arg1 != 0)) {
    uVar4 = *(uint *)(*this + 0x18);
    uVar18 = uVar4 + 3;
    if (-1 < (int)uVar4) {
      uVar18 = uVar4;
    }
    uVar18 = (int)uVar18 >> 2;
    uVar15 = (ulonglong)uVar18;
    if (param_2 == 0) {
      if ((3 < (int)uVar4) && ((uVar4 & 0xfffffffc) != 4)) {
        uVar15 = 0;
        do {
          uVar15 = uVar15 + 2;
        } while ((uVar18 & 0xfffffffe) != uVar15);
      }
    }
    else {
      uVar22 = 0;
      if (7 < (int)uVar4) {
        uVar22 = 2;
        if (2 < (int)uVar18) {
          uVar22 = uVar18;
        }
        uVar22 = ((int)((ulonglong)(uVar22 - 3) * (ulonglong)(uVar22 - 2) >> 1) + uVar22 * 2) - 3;
      }
      FUN_00c8e690();
      if ((local_a8 == '\0') && (local_b0 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      uVar10 = uVar18 - 1;
      if (7 < (int)uVar4) {
        lVar5 = *(longlong *)(*this + 0x10);
        uVar12 = 1;
        if (1 < (int)uVar10) {
          uVar12 = (ulonglong)uVar10;
        }
        uVar16 = 1;
        lVar17 = 0;
        uVar11 = 0;
        lVar19 = lVar5 + 4;
        uVar21 = uVar15;
        fVar24 = DAT_02394254;
        fVar36 = _DAT_0240dfd0;
        fVar38 = _UNK_0240dfd4;
        fVar39 = _UNK_0240dfd8;
        fVar40 = _UNK_0240dfdc;
        do {
          uVar21 = uVar21 - 1;
          uVar13 = uVar11 + 1;
          fVar41 = *(float *)(lVar5 + uVar11 * 4) + fVar24;
          if ((longlong)uVar13 < (longlong)(int)uVar18) {
            uVar23 = ~uVar11 + uVar15;
            lVar6 = *(longlong *)(local_b0 + 0x10);
            lVar17 = (longlong)(int)lVar17;
            uVar20 = uVar16;
            if ((3 < uVar23) &&
               ((uVar2 = lVar6 + lVar17 * 4, lVar5 + uVar15 * 4 <= uVar2 ||
                (lVar6 + (uVar23 + lVar17) * 4 <= lVar5 + uVar11 * 4 + 4)))) {
              uVar11 = uVar23 & 0xfffffffffffffffc;
              lVar17 = lVar17 + uVar11;
              uVar20 = 0;
              do {
                pfVar3 = (float *)(lVar19 + uVar20 * 4);
                auVar37._0_4_ = *pfVar3 + fVar36;
                auVar37._4_4_ = pfVar3[1] + fVar38;
                auVar37._8_4_ = pfVar3[2] + fVar39;
                auVar37._12_4_ = pfVar3[3] + fVar40;
                auVar31._4_4_ = fVar41;
                auVar31._0_4_ = fVar41;
                auVar31._8_4_ = fVar41;
                auVar31._12_4_ = fVar41;
                auVar31 = divps(auVar37,auVar31);
                local_48._0_8_ = _logf();
                local_48._8_8_ = extraout_XMM0_Qb;
                auVar26._0_8_ = _logf();
                auVar26._8_8_ = extraout_XMM0_Qb_00;
                auVar37 = insertps(local_48,auVar26,0x10);
                uStack_f4 = auVar31._4_4_;
                uStack_f0 = auVar31._8_4_;
                uStack_ec = auVar31._12_4_;
                auVar7._4_8_ = extraout_XMM0_Qb_00;
                auVar7._0_4_ = uStack_f4;
                auVar27._0_8_ = auVar7._0_8_ << 0x20;
                auVar27._8_4_ = uStack_f0;
                auVar27._12_4_ = uStack_ec;
                auVar28._0_8_ = _logf(auVar27._8_8_);
                auVar28._8_8_ = extraout_XMM0_Qb_01;
                auVar31 = insertps(auVar37,auVar28,0x20);
                auVar29._0_8_ = _logf();
                fVar40 = _UNK_0240dfdc;
                fVar39 = _UNK_0240dfd8;
                fVar38 = _UNK_0240dfd4;
                fVar36 = _DAT_0240dfd0;
                auVar29._8_8_ = extraout_XMM0_Qb_02;
                auVar31 = insertps(auVar31,auVar29,0x30);
                *(undefined1 (*) [16])(uVar2 + uVar20 * 4) = auVar31;
                uVar20 = uVar20 + 4;
              } while ((uVar21 & 0xfffffffffffffffc) != uVar20);
              uVar20 = uVar11 + uVar16;
              fVar24 = DAT_02394254;
              if (uVar23 == uVar11) goto LAB_0187bdd0;
            }
            uVar11 = uVar20;
            if ((uVar18 - (int)uVar20 & 1) != 0) {
              uVar25 = _logf((*(float *)(lVar5 + uVar20 * 4) + DAT_02394254) / fVar41);
              fVar40 = _UNK_0240dfdc;
              fVar39 = _UNK_0240dfd8;
              fVar38 = _UNK_0240dfd4;
              fVar36 = _DAT_0240dfd0;
              *(undefined4 *)(lVar6 + lVar17 * 4) = uVar25;
              lVar17 = lVar17 + 1;
              uVar11 = uVar20 + 1;
              fVar24 = DAT_02394254;
            }
            if (~uVar20 != -uVar15) {
              lVar6 = lVar6 + lVar17 * 4;
              lVar1 = lVar5 + 4 + uVar11 * 4;
              lVar14 = 0;
              do {
                uVar25 = _logf((*(float *)(lVar1 + -4 + lVar14 * 4) + DAT_02394254) / fVar41);
                *(undefined4 *)(lVar6 + lVar14 * 4) = uVar25;
                uVar25 = _logf((*(float *)(lVar1 + lVar14 * 4) + DAT_02394254) / fVar41);
                *(undefined4 *)(lVar6 + 4 + lVar14 * 4) = uVar25;
                lVar14 = lVar14 + 2;
              } while (uVar15 - uVar11 != lVar14);
              lVar17 = lVar17 + lVar14;
              fVar24 = DAT_02394254;
              fVar36 = _DAT_0240dfd0;
              fVar38 = _UNK_0240dfd4;
              fVar39 = _UNK_0240dfd8;
              fVar40 = _UNK_0240dfdc;
            }
          }
LAB_0187bdd0:
          uVar16 = uVar16 + 1;
          lVar19 = lVar19 + 4;
          uVar11 = uVar13;
        } while (uVar13 != uVar12);
      }
      FUN_00c8e690();
      if ((local_a8 == '\0') && (local_b0 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (7 < (int)uVar4) {
        lVar5 = *(longlong *)(*arg1 + 0x10);
        uVar12 = 1;
        if (1 < (int)uVar10) {
          uVar12 = (ulonglong)uVar10;
        }
        uVar16 = 1;
        lVar17 = 0;
        uVar11 = 0;
        lVar19 = lVar5 + 4;
        uVar21 = uVar15;
        fVar24 = DAT_02394254;
        fVar36 = _DAT_0240dfd0;
        fVar38 = _UNK_0240dfd4;
        fVar39 = _UNK_0240dfd8;
        fVar40 = _UNK_0240dfdc;
        do {
          uVar21 = uVar21 - 1;
          uVar13 = uVar11 + 1;
          fVar41 = *(float *)(lVar5 + uVar11 * 4) + fVar24;
          if ((longlong)uVar13 < (longlong)(int)uVar18) {
            uVar23 = ~uVar11 + uVar15;
            lVar6 = *(longlong *)(local_b0 + 0x10);
            lVar17 = (longlong)(int)lVar17;
            uVar20 = uVar16;
            if ((3 < uVar23) &&
               ((uVar2 = lVar6 + lVar17 * 4, lVar5 + uVar15 * 4 <= uVar2 ||
                (lVar6 + (uVar23 + lVar17) * 4 <= lVar5 + uVar11 * 4 + 4)))) {
              uVar11 = uVar23 & 0xfffffffffffffffc;
              lVar17 = lVar17 + uVar11;
              uVar20 = 0;
              do {
                pfVar3 = (float *)(lVar19 + uVar20 * 4);
                auVar30._0_4_ = *pfVar3 + fVar36;
                auVar30._4_4_ = pfVar3[1] + fVar38;
                auVar30._8_4_ = pfVar3[2] + fVar39;
                auVar30._12_4_ = pfVar3[3] + fVar40;
                auVar9._4_4_ = fVar41;
                auVar9._0_4_ = fVar41;
                auVar9._8_4_ = fVar41;
                auVar9._12_4_ = fVar41;
                auVar31 = divps(auVar30,auVar9);
                local_48._0_8_ = _logf();
                local_48._8_8_ = extraout_XMM0_Qb_03;
                auVar32._0_8_ = _logf();
                auVar32._8_8_ = extraout_XMM0_Qb_04;
                auVar37 = insertps(local_48,auVar32,0x10);
                uStack_f4 = auVar31._4_4_;
                uStack_f0 = auVar31._8_4_;
                uStack_ec = auVar31._12_4_;
                auVar8._4_8_ = extraout_XMM0_Qb_04;
                auVar8._0_4_ = uStack_f4;
                auVar33._0_8_ = auVar8._0_8_ << 0x20;
                auVar33._8_4_ = uStack_f0;
                auVar33._12_4_ = uStack_ec;
                auVar34._0_8_ = _logf(auVar33._8_8_);
                auVar34._8_8_ = extraout_XMM0_Qb_05;
                auVar31 = insertps(auVar37,auVar34,0x20);
                auVar35._0_8_ = _logf();
                fVar40 = _UNK_0240dfdc;
                fVar39 = _UNK_0240dfd8;
                fVar38 = _UNK_0240dfd4;
                fVar36 = _DAT_0240dfd0;
                auVar35._8_8_ = extraout_XMM0_Qb_06;
                auVar31 = insertps(auVar31,auVar35,0x30);
                *(undefined1 (*) [16])(uVar2 + uVar20 * 4) = auVar31;
                uVar20 = uVar20 + 4;
              } while ((uVar21 & 0xfffffffffffffffc) != uVar20);
              uVar20 = uVar11 + uVar16;
              fVar24 = DAT_02394254;
              if (uVar23 == uVar11) goto LAB_0187c210;
            }
            uVar11 = uVar20;
            if ((uVar18 - (int)uVar20 & 1) != 0) {
              uVar25 = _logf((*(float *)(lVar5 + uVar20 * 4) + DAT_02394254) / fVar41);
              fVar40 = _UNK_0240dfdc;
              fVar39 = _UNK_0240dfd8;
              fVar38 = _UNK_0240dfd4;
              fVar36 = _DAT_0240dfd0;
              *(undefined4 *)(lVar6 + lVar17 * 4) = uVar25;
              lVar17 = lVar17 + 1;
              uVar11 = uVar20 + 1;
              fVar24 = DAT_02394254;
            }
            if (~uVar20 != -uVar15) {
              lVar6 = lVar6 + lVar17 * 4;
              lVar1 = lVar5 + 4 + uVar11 * 4;
              lVar14 = 0;
              do {
                uVar25 = _logf((*(float *)(lVar1 + -4 + lVar14 * 4) + DAT_02394254) / fVar41);
                *(undefined4 *)(lVar6 + lVar14 * 4) = uVar25;
                uVar25 = _logf((*(float *)(lVar1 + lVar14 * 4) + DAT_02394254) / fVar41);
                *(undefined4 *)(lVar6 + 4 + lVar14 * 4) = uVar25;
                lVar14 = lVar14 + 2;
              } while (uVar15 - uVar11 != lVar14);
              lVar17 = lVar17 + lVar14;
              fVar24 = DAT_02394254;
              fVar36 = _DAT_0240dfd0;
              fVar38 = _UNK_0240dfd4;
              fVar39 = _UNK_0240dfd8;
              fVar40 = _UNK_0240dfdc;
            }
          }
LAB_0187c210:
          uVar16 = uVar16 + 1;
          lVar19 = lVar19 + 4;
          uVar11 = uVar13;
        } while (uVar13 != uVar12);
      }
      if ((uVar22 != 0) && (uVar22 != 1)) {
        uVar15 = 0;
        do {
          uVar15 = uVar15 + 2;
        } while ((uVar22 & 0xfffffffe) != uVar15);
      }
      if (local_b0 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @0187cd90 (898 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_0260d210;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  if (DAT_027d6d18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027d6c68 = FUN_00d4fe50();
      _DAT_027d6c50 = "MUCandidateScale";
      _DAT_027d6c58 = 0x20;
      _DAT_027d6c60 = FUN_0187cc50;
      _DAT_027d6c70 = 0;
      uRam00000000027d6c78 = 0;
      _DAT_027d6c80 = 0;
      uRam00000000027d6c88 = 0;
      _DAT_027d6c90 = 0;
      uRam00000000027d6c98 = 0;
      _DAT_027d6ca0 = 0;
      uRam00000000027d6ca8 = 0;
      _DAT_027d6cb0 = 0;
      uRam00000000027d6cb8 = 0;
      _DAT_027d6cc0 = 0;
      uRam00000000027d6cc8 = 0;
      _DAT_027d6cd0 = 0;
      uRam00000000027d6cd8 = 0;
      _DAT_027d6ce0 = 0;
      uRam00000000027d6ce8 = 0;
      _DAT_027d6cf0 = 0;
      uRam00000000027d6cf8 = 0;
      _DAT_027d6d00 = 0;
      _uRam00000000027d6d08 = 0;
      _DAT_027d6d10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027d6d0b == '\0') {
    FUN_0187d140();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 2) = 0;
  if (DAT_027d6d18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027d6c68 = FUN_00d4fe50();
      _DAT_027d6c50 = "MUCandidateScale";
      _DAT_027d6c58 = 0x20;
      _DAT_027d6c60 = FUN_0187cc50;
      _DAT_027d6c70 = 0;
      uRam00000000027d6c78 = 0;
      _DAT_027d6c80 = 0;
      uRam00000000027d6c88 = 0;
      _DAT_027d6c90 = 0;
      uRam00000000027d6c98 = 0;
      _DAT_027d6ca0 = 0;
      uRam00000000027d6ca8 = 0;
      _DAT_027d6cb0 = 0;
      uRam00000000027d6cb8 = 0;
      _DAT_027d6cc0 = 0;
      uRam00000000027d6cc8 = 0;
      _DAT_027d6cd0 = 0;
      uRam00000000027d6cd8 = 0;
      _DAT_027d6ce0 = 0;
      uRam00000000027d6ce8 = 0;
      _DAT_027d6cf0 = 0;
      uRam00000000027d6cf8 = 0;
      _DAT_027d6d00 = 0;
      _uRam00000000027d6d08 = 0;
      _DAT_027d6d10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027d6d0b == '\0') {
    FUN_0187d2b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x14) = 0;
  if (DAT_027d6d18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027d6c68 = FUN_00d4fe50();
      _DAT_027d6c50 = "MUCandidateScale";
      _DAT_027d6c58 = 0x20;
      _DAT_027d6c60 = FUN_0187cc50;
      _DAT_027d6c70 = 0;
      uRam00000000027d6c78 = 0;
      _DAT_027d6c80 = 0;
      uRam00000000027d6c88 = 0;
      _DAT_027d6c90 = 0;
      uRam00000000027d6c98 = 0;
      _DAT_027d6ca0 = 0;
      uRam00000000027d6ca8 = 0;
      _DAT_027d6cb0 = 0;
      uRam00000000027d6cb8 = 0;
      _DAT_027d6cc0 = 0;
      uRam00000000027d6cc8 = 0;
      _DAT_027d6cd0 = 0;
      uRam00000000027d6cd8 = 0;
      _DAT_027d6ce0 = 0;
      uRam00000000027d6ce8 = 0;
      _DAT_027d6cf0 = 0;
      uRam00000000027d6cf8 = 0;
      _DAT_027d6d00 = 0;
      _uRam00000000027d6d08 = 0;
      _DAT_027d6d10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027d6d0b == '\0') {
    FUN_0187d420();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 3) = 0;
  if (DAT_027d6d18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027d6c68 = FUN_00d4fe50();
      _DAT_027d6c50 = "MUCandidateScale";
      _DAT_027d6c58 = 0x20;
      _DAT_027d6c60 = FUN_0187cc50;
      _DAT_027d6c70 = 0;
      uRam00000000027d6c78 = 0;
      _DAT_027d6c80 = 0;
      uRam00000000027d6c88 = 0;
      _DAT_027d6c90 = 0;
      uRam00000000027d6c98 = 0;
      _DAT_027d6ca0 = 0;
      uRam00000000027d6ca8 = 0;
      _DAT_027d6cb0 = 0;
      uRam00000000027d6cb8 = 0;
      _DAT_027d6cc0 = 0;
      uRam00000000027d6cc8 = 0;
      _DAT_027d6cd0 = 0;
      uRam00000000027d6cd8 = 0;
      _DAT_027d6ce0 = 0;
      uRam00000000027d6ce8 = 0;
      _DAT_027d6cf0 = 0;
      uRam00000000027d6cf8 = 0;
      _DAT_027d6d00 = 0;
      _uRam00000000027d6d08 = 0;
      _DAT_027d6d10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027d6d0b == '\0') {
    FUN_0187d590();
    FUN_00e87980();
  }
  return;
}



