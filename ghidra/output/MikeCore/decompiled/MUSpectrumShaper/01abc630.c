// Function: FUN_01abc630
// Address: 01abc630
// Size: 5077 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01abd99c) */
/* WARNING: Removing unreachable block (ram,0x01abd9ac) */
/* WARNING: Removing unreachable block (ram,0x01abcd77) */
/* WARNING: Removing unreachable block (ram,0x01abcd80) */
/* WARNING: Removing unreachable block (ram,0x01abccab) */
/* WARNING: Removing unreachable block (ram,0x01abccb4) */
/* WARNING: Removing unreachable block (ram,0x01abcbb5) */
/* WARNING: Removing unreachable block (ram,0x01abcbbe) */
/* WARNING: Removing unreachable block (ram,0x01abcc45) */
/* WARNING: Removing unreachable block (ram,0x01abcc4e) */
/* WARNING: Removing unreachable block (ram,0x01abcd11) */
/* WARNING: Removing unreachable block (ram,0x01abcd1a) */
/* WARNING: Removing unreachable block (ram,0x01abce07) */
/* WARNING: Removing unreachable block (ram,0x01abce10) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01abc630(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  char *pcVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  pthread_key_t pVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *unaff_RSI;
  int iVar19;
  longlong unaff_RDI;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 in_XMM0_Qb;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [12];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar39;
  float fVar40;
  float fVar41;
  undefined8 in_XMM1_Qb;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 in_XMM2 [16];
  undefined1 auVar45 [16];
  undefined1 in_XMM3 [16];
  float fVar46;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_80;
  char local_78;
  void *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  fVar26 = in_XMM2._0_4_;
  local_148 = (float)param_2;
  fStack_144 = (float)((ulonglong)param_2 >> 0x20);
  uStack_140 = (undefined4)in_XMM1_Qb;
  uStack_13c = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  local_158 = (float)param_1;
  fStack_154 = (float)((ulonglong)param_1 >> 0x20);
  uStack_150 = (undefined4)in_XMM0_Qb;
  uStack_14c = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  FUN_01ab5cd0();
  if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (local_40 != (void *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1);
  lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + 0x10);
  auVar30 = (undefined1  [16])0x0;
  lVar12 = 0;
  auVar42 = (undefined1  [16])0x0;
  do {
    auVar45 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar13 + lVar12));
    in_XMM2._0_4_ = auVar45._0_4_ + auVar30._0_4_;
    in_XMM2._4_4_ = auVar45._4_4_ + auVar30._4_4_;
    in_XMM2._8_4_ = auVar45._8_4_ + auVar30._8_4_;
    in_XMM2._12_4_ = auVar45._12_4_ + auVar30._12_4_;
    auVar45 = pmovzxbd(in_XMM3,*(undefined4 *)(lVar13 + 4 + lVar12));
    in_XMM3._0_4_ = auVar45._0_4_ + auVar42._0_4_;
    in_XMM3._4_4_ = auVar45._4_4_ + auVar42._4_4_;
    in_XMM3._8_4_ = auVar45._8_4_ + auVar42._8_4_;
    in_XMM3._12_4_ = auVar45._12_4_ + auVar42._12_4_;
    auVar45 = pmovzxbd(auVar30,*(undefined4 *)(lVar13 + 8 + lVar12));
    auVar43 = pmovzxbd(auVar42,*(undefined4 *)(lVar13 + 0xc + lVar12));
    auVar30._0_4_ = auVar45._0_4_ + in_XMM2._0_4_;
    auVar30._4_4_ = auVar45._4_4_ + in_XMM2._4_4_;
    auVar30._8_4_ = auVar45._8_4_ + in_XMM2._8_4_;
    auVar30._12_4_ = auVar45._12_4_ + in_XMM2._12_4_;
    auVar42._0_4_ = auVar43._0_4_ + in_XMM3._0_4_;
    auVar42._4_4_ = auVar43._4_4_ + in_XMM3._4_4_;
    auVar42._8_4_ = auVar43._8_4_ + in_XMM3._8_4_;
    auVar42._12_4_ = auVar43._12_4_ + in_XMM3._12_4_;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x200);
  uVar39 = auVar42._12_4_ + auVar30._12_4_ + auVar42._4_4_ + auVar30._4_4_ +
           auVar42._8_4_ + auVar30._8_4_ + auVar42._0_4_ + auVar30._0_4_;
  if (2 < uVar39) {
    lVar12 = 0;
    do {
      if (*(char *)(lVar13 + lVar12) != '\0') goto LAB_01abc79f;
      if (*(char *)(lVar13 + 1 + lVar12) != '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01abc79f;
      }
      if (*(char *)(lVar13 + 2 + lVar12) != '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01abc79f;
      }
      if (*(char *)(lVar13 + 3 + lVar12) != '\0') {
        lVar12 = lVar12 + 3;
        goto LAB_01abc79f;
      }
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0x200);
    lVar12 = 0xffffffff;
LAB_01abc79f:
    uVar39 = (uint)lVar12;
    uVar16 = 0x1ff;
    do {
      if (*(char *)(lVar13 + uVar16) != '\0') {
LAB_01abc7f9:
        pVar15 = (pthread_key_t)uVar16;
        goto joined_r0x01abc7fc;
      }
      iVar6 = (int)uVar16;
      if (*(char *)(lVar13 + -1 + uVar16) != '\0') {
        pVar15 = iVar6 - 1;
        goto joined_r0x01abc7fc;
      }
      if (*(char *)(lVar13 + -2 + uVar16) != '\0') {
        uVar16 = (ulonglong)(iVar6 - 2);
        goto LAB_01abc7f9;
      }
      if (*(char *)(lVar13 + (ulonglong)(iVar6 - 3)) != '\0') {
        pVar15 = iVar6 - 3;
        goto joined_r0x01abc7fc;
      }
      uVar16 = uVar16 - 4;
    } while ((int)uVar16 != -1);
    pVar15 = 0xffffffff;
joined_r0x01abc7fc:
    if (uVar39 != 0xffffffff) {
      if ((int)uVar39 <= (int)pVar15) {
        lVar12 = (longlong)(int)uVar39;
        do {
          pcVar1 = (char *)(lVar13 + lVar12);
          if (*pcVar1 == '\0') break;
          bVar23 = (int)pVar15 != lVar12;
          lVar12 = lVar12 + 1;
        } while (bVar23);
        uVar39 = pVar15;
        if (*pcVar1 == '\0') goto LAB_01abc988;
      }
      lVar12 = 0;
      do {
        if (*(char *)(lVar13 + lVar12) != '\0') goto LAB_01abc87e;
        if (*(char *)(lVar13 + 1 + lVar12) != '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_01abc87e;
        }
        if (*(char *)(lVar13 + 2 + lVar12) != '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_01abc87e;
        }
        if (*(char *)(lVar13 + 3 + lVar12) != '\0') {
          lVar12 = lVar12 + 3;
          goto LAB_01abc87e;
        }
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x200);
      lVar12 = -1;
LAB_01abc87e:
      lVar9 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + 0x10);
      fVar24 = *(float *)(lVar9 + (longlong)(int)lVar12 * 4);
      uVar16 = 0x1ff;
      do {
        if (*(char *)(lVar13 + uVar16) != '\0') goto LAB_01abc8da;
        iVar6 = (int)uVar16;
        if (*(char *)(lVar13 + -1 + uVar16) != '\0') {
          uVar16 = (ulonglong)(iVar6 - 1);
          goto LAB_01abc8da;
        }
        if (*(char *)(lVar13 + -2 + uVar16) != '\0') {
          uVar16 = (ulonglong)(iVar6 - 2);
          goto LAB_01abc8da;
        }
        if (*(char *)(lVar13 + (ulonglong)(iVar6 - 3)) != '\0') {
          uVar16 = (ulonglong)(iVar6 - 3);
          goto LAB_01abc8da;
        }
        uVar16 = uVar16 - 4;
      } while ((int)uVar16 != -1);
      uVar16 = 0xffffffff;
LAB_01abc8da:
      fVar40 = *(float *)(lVar9 + 4 + (longlong)(int)uVar16 * 4);
      FUN_01ab5e70();
      uVar39 = (uint)lVar9;
      if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (local_40 != (void *)0x0) {
        FUN_00d50b20();
      }
      auVar45._8_4_ = uStack_150;
      auVar45._0_8_ = param_1;
      auVar45._12_4_ = uStack_14c;
      auVar30 = blendps(auVar45,ZEXT416((uint)fVar24),1);
      auVar43._8_4_ = uStack_140;
      auVar43._0_8_ = param_2;
      auVar43._12_4_ = uStack_13c;
      auVar42 = blendps(ZEXT416((uint)(fVar40 - fVar24)),auVar43,0xe);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar30._0_8_,auVar42._0_8_);
    }
  }
LAB_01abc988:
  pvVar8 = _pthread_getspecific(uVar39);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  pvVar8 = _pthread_getspecific(uVar39);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ed3a0();
  if ((local_38 != '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  fVar24 = DAT_02390124;
  if (local_40 != (void *)0x0) {
    pvVar8 = _pthread_getspecific(uVar39);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b7b80();
    pvVar8 = _pthread_getspecific(uVar39);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ed3a0();
    pvVar8 = _pthread_getspecific(uVar39);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    auVar31._0_8_ = FUN_012c6af0();
    auVar31._8_8_ = extraout_XMM0_Qb;
    auVar32._4_12_ = auVar31._4_12_;
    auVar32._0_4_ = (float)auVar31._0_8_ * DAT_023941f4;
    fVar24 = (float)_exp2f(auVar32._0_8_);
    if ((local_38 != '\0') && (local_40 != (void *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    fVar24 = DAT_02390124 / fVar24;
  }
  pvVar8 = _pthread_getspecific(uVar39);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b9440();
  if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(uVar39);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_015b7ba0();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)((longlong)local_40 + 0x18)) {
    _memset_pattern16(local_40,(void *)((ulonglong)((*(uint *)((longlong)local_40 + 0x18) >> 2) - 1)
                                        * 4 + 4),param_3);
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < *(int *)(unaff_RDI + 0x19c)) {
    lVar13 = *(longlong *)(unaff_RDI + 0x178);
    lVar12 = 1;
    if (iVar6 == 3) {
      do {
        fVar40 = *(float *)(*(longlong *)(lVar13 + 0x10) + lVar12 * 4);
        fVar25 = (float)_logf(*(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4) *
                              fVar24);
        fVar25 = (float)(int)lVar12 + fVar25 * DAT_02394208 * DAT_02394254;
        uVar39 = FUN_00e7d780();
        if ((int)uVar39 < 1) {
          lVar13 = *(longlong *)(unaff_RDI + 0x178);
          fVar25 = (fVar25 + DAT_02390d00) * fVar26 + *(float *)(*(longlong *)(lVar13 + 0x10) + 4);
        }
        else if ((int)uVar39 < 0x1ff) {
          lVar13 = *(longlong *)(unaff_RDI + 0x178);
          fVar25 = (fVar25 - (float)(int)uVar39) *
                   *(float *)(*(longlong *)(lVar13 + 0x10) + 4 + (ulonglong)uVar39 * 4) +
                   (DAT_02390124 - (fVar25 - (float)(int)uVar39)) *
                   *(float *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)uVar39 * 4);
        }
        else {
          lVar13 = *(longlong *)(unaff_RDI + 0x178);
          fVar25 = (fVar25 + _DAT_0241c62c) * fVar26 +
                   *(float *)(*(longlong *)(lVar13 + 0x10) + 0x800);
        }
        auVar30 = ZEXT416((uint)((float)((uint)fVar25 & _DAT_023945e0 | DAT_02394dc8) + fVar25));
        auVar30 = roundss(auVar30,auVar30,0xb);
        auVar42 = ZEXT416((uint)((float)((uint)fVar40 & _DAT_023945e0 | DAT_02394dc8) + fVar40));
        auVar42 = roundss(auVar42,auVar42,0xb);
        *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4) = auVar30._0_4_;
        *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4) = auVar42._0_4_;
        *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4) =
             (auVar42._0_4_ + auVar30._0_4_) * DAT_0239011c;
        lVar9 = (longlong)*(int *)(unaff_RDI + 0x19c);
        bVar23 = lVar12 < lVar9;
        lVar12 = lVar12 + 1;
      } while (bVar23);
    }
    else {
      do {
        fVar40 = *(float *)(*(longlong *)(lVar13 + 0x10) + lVar12 * 4);
        fVar25 = (float)(int)lVar12 *
                 *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4) * fVar24;
        iVar6 = FUN_00e7d780();
        if (iVar6 < 0x1ff) {
          fVar25 = fVar25 - (float)iVar6;
          lVar13 = *(longlong *)(unaff_RDI + 0x178);
          fVar25 = fVar25 * *(float *)(*(longlong *)(lVar13 + 0x10) + 4 + (longlong)iVar6 * 4) +
                   (DAT_02390124 - fVar25) *
                   *(float *)(*(longlong *)(lVar13 + 0x10) + (longlong)iVar6 * 4);
        }
        else {
          lVar13 = *(longlong *)(unaff_RDI + 0x178);
          fVar25 = (fVar25 + _DAT_0241c62c) * fVar26 +
                   *(float *)(*(longlong *)(lVar13 + 0x10) + 0x800);
        }
        auVar30 = ZEXT416((uint)((float)((uint)fVar25 & _DAT_023945e0 | DAT_02394dc8) + fVar25));
        auVar30 = roundss(auVar30,auVar30,0xb);
        auVar42 = ZEXT416((uint)((float)((uint)fVar40 & _DAT_023945e0 | DAT_02394dc8) + fVar40));
        auVar42 = roundss(auVar42,auVar42,0xb);
        *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4) = auVar30._0_4_;
        *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4) = auVar42._0_4_;
        *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4) =
             (auVar42._0_4_ + auVar30._0_4_) * DAT_0239011c;
        lVar9 = (longlong)*(int *)(unaff_RDI + 0x19c);
        bVar23 = lVar12 < lVar9;
        lVar12 = lVar12 + 1;
      } while (bVar23);
    }
    fVar26 = DAT_02390d2c;
    if (0 < (int)lVar9) {
      lVar12 = 2;
      uVar16 = 1;
      lVar13 = 0;
      while (iVar6 = (int)lVar9, (longlong)uVar16 < (longlong)iVar6) {
        fVar24 = *(float *)(*(longlong *)((longlong)local_40 + 0x10) + uVar16 * 4);
        lVar9 = 0;
        while ((*(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar12 * 4 + lVar9 * 4) -
                fVar24 <= fVar26 ||
               (*(float *)(lVar12 * 4 + *(longlong *)((longlong)local_40 + 0x10) + lVar9 * 4) -
                fVar24 <= fVar26))) {
          lVar9 = lVar9 + 1;
          if ((int)lVar9 + (1 - iVar6) + (int)lVar13 == 0) goto LAB_01abd3c3;
        }
        if ((int)lVar13 + (int)lVar9 == -3) break;
        uVar39 = 1;
        do {
          uVar7 = uVar39;
          uVar20 = (ulonglong)uVar7;
          uVar39 = uVar7 * 2;
        } while ((int)uVar7 < (int)lVar9 + 1);
        if (0xf < uVar7) {
          uVar20 = 0x10;
        }
        lVar9 = *(longlong *)((longlong)local_40 + 0x10);
        iVar6 = (int)uVar20;
        *(int *)(lVar9 + uVar16 * 4) = iVar6;
        uVar39 = (int)uVar16 - (int)((uVar16 & 0xffffffff) % uVar20);
        uVar10 = (ulonglong)uVar39;
        if ((int)uVar39 < iVar6) {
          uVar10 = uVar20;
        }
        if (uVar10 < uVar16) {
          uVar10 = (ulonglong)uVar39;
          if ((int)uVar39 < iVar6) {
            uVar10 = uVar20;
          }
          uVar20 = (lVar13 + 1) - uVar10;
          if (7 < uVar20) {
            uVar21 = uVar20 & 0xfffffffffffffff8;
            uVar17 = 0;
            do {
              lVar14 = uVar17 + uVar10;
              piVar2 = (int *)(lVar9 + lVar14 * 4);
              iVar18 = piVar2[1];
              iVar19 = piVar2[2];
              iVar4 = piVar2[3];
              if (*piVar2 < iVar6) {
                *(int *)(lVar9 + lVar14 * 4) = iVar6;
              }
              if (iVar18 < iVar6) {
                *(int *)(lVar9 + 4 + lVar14 * 4) = iVar6;
              }
              if (iVar19 < iVar6) {
                *(int *)(lVar9 + 8 + lVar14 * 4) = iVar6;
              }
              if (iVar4 < iVar6) {
                *(int *)(lVar9 + 0xc + lVar14 * 4) = iVar6;
              }
              auVar30 = *(undefined1 (*) [16])(lVar9 + 0x10 + lVar14 * 4);
              if (auVar30._0_4_ < iVar6) {
                *(int *)(lVar9 + 0x10 + lVar14 * 4) = iVar6;
              }
              if (auVar30._4_4_ < iVar6) {
                *(int *)(lVar9 + 0x14 + lVar14 * 4) = iVar6;
              }
              if (auVar30._8_4_ < iVar6) {
                *(int *)(lVar9 + 0x18 + lVar14 * 4) = iVar6;
              }
              if (auVar30._12_4_ < iVar6) {
                *(int *)(lVar9 + 0x1c + lVar14 * 4) = iVar6;
              }
              uVar17 = uVar17 + 8;
            } while (uVar17 != uVar21);
            uVar10 = uVar21 + uVar10;
            if (uVar20 == uVar21) goto LAB_01abd390;
          }
          do {
            if (*(int *)(lVar9 + uVar10 * 4) < iVar6) {
              *(int *)(lVar9 + uVar10 * 4) = iVar6;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar16);
        }
LAB_01abd390:
        iVar6 = *(int *)(unaff_RDI + 0x19c);
        lVar9 = (longlong)iVar6;
        lVar12 = lVar12 + 1;
        bVar23 = lVar9 <= (longlong)uVar16;
        uVar16 = uVar16 + 1;
        lVar13 = lVar13 + 1;
        if (bVar23) break;
      }
LAB_01abd3c3:
      fVar26 = DAT_02390124;
      if (0 < iVar6) {
        lVar13 = *(longlong *)((longlong)local_40 + 0x10);
        lVar12 = *(longlong *)((longlong)local_40 + 0x10);
        iVar18 = 1;
        do {
          lVar9 = (longlong)iVar18;
          *(undefined4 *)(lVar13 + lVar9 * 4) = 0x3f800000;
          iVar19 = *(int *)(lVar12 + lVar9 * 4);
          uVar39 = (uint)(1 < iVar19 && iVar18 % 2 == 1) + iVar19;
          if (((uVar39 & 1) == 0) && (iVar19 = (int)uVar39 / 2 + iVar18, iVar19 < iVar6)) {
            lVar14 = (longlong)iVar19;
            fVar24 = *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar9 * 4);
            fVar40 = *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar14 * 4) - fVar24;
            fVar24 = *(float *)(*(longlong *)((longlong)local_40 + 0x10) + lVar14 * 4) - fVar24;
            if (fVar40 <= fVar24) {
              fVar24 = fVar40;
            }
            lVar9 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + 0x10);
            fVar40 = fVar24 / (*(float *)(lVar9 + 4 + lVar14 * 4) - *(float *)(lVar9 + lVar14 * 4))
                     + fVar26;
            fVar24 = fVar26;
            if (fVar40 <= fVar26) {
              fVar24 = fVar40;
            }
            fVar40 = 0.0;
            if (0.0 <= fVar24) {
              fVar40 = fVar24;
            }
            *(float *)(lVar13 + lVar14 * 4) = fVar40;
          }
          iVar18 = iVar18 + uVar39;
        } while (iVar18 <= iVar6);
      }
    }
  }
  FUN_01d48b40();
  FUN_01ab5cd0();
  fVar26 = *(float *)((longlong)local_40 + 0x10);
  fVar24 = *(float *)((longlong)local_40 + 0x14);
  fVar40 = *(float *)((longlong)local_40 + 0x18);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_01ab5b30();
  fVar25 = *(float *)((longlong)local_40 + 0x10);
  fVar27 = *(float *)((longlong)local_40 + 0x14);
  fVar28 = *(float *)((longlong)local_40 + 0x18);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  pcVar5 = DAT_02680418;
  fVar44 = fStack_154 + DAT_02390124;
  fVar41 = fStack_144 + fStack_154 + DAT_02390d00;
  local_f8 = CONCAT44(fStack_154,fVar44);
  uStack_f0._0_4_ = uStack_14c;
  uStack_f0._4_4_ = uStack_14c;
  fVar46 = fVar41 - fVar44;
  iVar18 = (int)fVar46;
  iVar6 = -iVar18;
  if (0 < iVar18) {
    iVar6 = iVar18;
  }
  if (0 < *(int *)(unaff_RDI + 0x19c)) {
    fVar24 = (fVar26 + fVar24 + fVar40) / DAT_02394298;
    fVar40 = (fVar25 + fVar27 + fVar28) / DAT_02394298;
    fVar26 = local_148 + local_158 + DAT_02390d00;
    bVar23 = false;
    uVar16 = 1;
    puVar22 = (undefined8 *)0x0;
    do {
      fVar25 = 0.0;
      if (((uVar16 < 0x200) &&
          (lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + 0x10),
          fVar27 = *(float *)(lVar13 + 4 + uVar16 * 4) - *(float *)(lVar13 + uVar16 * 4),
          fVar25 = DAT_02390124, fVar27 <= DAT_02390d30)) && (fVar25 = 0.0, DAT_02394298 <= fVar27))
      {
        fVar25 = (DAT_02390d30 - fVar27) / DAT_023b1d84 + DAT_02390124;
      }
      fVar25 = fVar25 * *(float *)(*(longlong *)((longlong)local_40 + 0x10) + uVar16 * 4);
      puVar11 = puVar22;
      if (DAT_0239424c < fVar25) {
        fVar27 = *(float *)(*(longlong *)((longlong)local_40 + 0x10) + uVar16 * 4) + DAT_02390d00;
        if (fVar27 < fVar26) {
          fVar28 = *(float *)(*(longlong *)((longlong)local_40 + 0x10) + uVar16 * 4) + DAT_02390d00;
          puVar11 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &DAT_02680400;
          *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
          puVar11[6] = 0;
          puVar11[7] = 0;
          *(undefined8 *)((longlong)puVar11 + 0x39) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x41) = 0;
          (*pcVar5)();
          if ((bVar23) && (puVar22 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          auVar30 = insertps(ZEXT416((uint)fVar28),fVar44,0x10);
          FUN_01d39180(auVar30._0_8_);
          uStack_90 = uStack_f0;
          local_98 = local_f8;
          iVar18 = iVar6 + 1;
          do {
            local_98._0_4_ = (float)local_98 + fVar46 / (float)iVar6;
            auVar33._0_4_ = (float)((uint)(((float)local_98 - fVar44) / fVar46) & _DAT_02390140);
            auVar33._4_4_ = local_98._4_4_ & _UNK_02390144;
            auVar33._8_4_ = (uint)uStack_90 & _UNK_02390148;
            auVar33._12_4_ = uStack_90._4_4_ & _UNK_0239014c;
            auVar34._4_12_ = auVar33._4_12_;
            if (DAT_0239011c <= auVar33._0_4_) {
              auVar36._0_8_ = _powf();
              auVar36._8_8_ = extraout_XMM0_Qb_01;
              auVar38 = auVar36._4_12_;
              fVar29 = (float)auVar36._0_8_ * DAT_02390118 + DAT_02390124;
            }
            else {
              auVar34._0_4_ = auVar33._0_4_ + auVar33._0_4_;
              auVar35._0_8_ = _powf(auVar34._0_8_);
              auVar35._8_8_ = extraout_XMM0_Qb_00;
              auVar38 = auVar35._4_12_;
              fVar29 = (float)auVar35._0_8_ * DAT_0239011c;
            }
            auVar37._0_4_ = fVar29 * fVar27 + (DAT_02390124 - fVar29) * fVar28;
            auVar37._4_12_ = auVar38;
            auVar30 = insertps(auVar37,(float)local_98,0x10);
            FUN_01d38830(auVar30._0_8_);
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
          auVar30 = insertps(ZEXT416((uint)fVar27),fVar41,0x10);
          FUN_01d38830(auVar30._0_8_);
          if (DAT_02390124 <= fVar25) {
            FUN_01ab5b30();
            if ((local_38 == '\0') && (local_40 != (void *)0x0)) {
              FUN_00d50b00();
            }
            FUN_01d488d0();
            if (local_40 != (void *)0x0) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01cfc6a0(fVar25 * (fVar40 - fVar24) + fVar24);
            if (local_38 == '\0') {
              if (local_40 != (void *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            FUN_01d488d0();
            if (local_40 != (void *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (void *)0x0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
          bVar23 = true;
        }
      }
      bVar3 = (longlong)uVar16 < (longlong)*(int *)(unaff_RDI + 0x19c);
      uVar16 = uVar16 + 1;
      puVar22 = puVar11;
    } while (bVar3);
    if ((bVar23) && (puVar11 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (void *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


