// ===================================================================
// MUThirdsCircle — Complete reconstructed pseudocode
// 13 functions
// ===================================================================

// Registered properties (4):
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


// ============================================================
// 011eb620
// ============================================================
// Function: FUN_011eb620
// Address: 011eb620
// Size: 1972 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011eb620(int64_t *param_1,float param_2,int64_t *param_3)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint32_t uVar9;
  uint32_t uVar10;
  uint uVar11;
  uint uVar12;
  int in_EDX;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint32_t uVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint8_t in_XMM0 [16];
  uint32_t extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  uint8_t auVar34 [16];
  float fVar36;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  float fVar39;
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  float local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  
  iVar2 = *(int *)(*arg1 + 0xc);
  fVar29 = (float)*(double *)(*(int64_t *)(this_ptr + 0x1d0) + 0x50);
  auVar34._4_12_ = in_XMM0._4_12_;
  auVar34._0_4_ = in_XMM0._0_4_ / fVar29;
  iVar3 = *(int *)(*(int64_t *)(this_ptr + 0x1d0) + 0x28);
  uVar11 = FUN_00e7d780(auVar34._0_8_);
  uVar12 = FUN_00e7d780(param_2 / fVar29);
  if (iVar2 <= (int)uVar11) {
    uVar11 = iVar2 - 1U;
  }
  uVar5 = iVar2 - 1U;
  if ((int)uVar12 < iVar2) {
    uVar5 = uVar12;
  }
  fVar29 = (float)iVar3 / g_02394278;
  *(void*)(**(int64_t **)(*arg1 + 0x10) + 0x20) = 0;
  *(void*)(*(int64_t *)(*(int64_t *)(*arg1 + 0x10) + 8) + 0x20) = 0;
  *(void*)
   (*(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (int64_t)(int)uVar11 * 8) + 0x20) = 0;
  uVar10 = _UNK_023945ec;
  uVar9 = _UNK_023945e8;
  uVar19 = _UNK_023945e4;
  if (in_EDX == 0) {
    if (2 < (int)uVar11) {
      lVar13 = 0x18;
      uVar14 = 2;
      do {
        lVar15 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + -0x10 + lVar13);
        lVar4 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + lVar13);
        uVar20 = _logf();
        local_68 = (float)uVar20;
        uStack_64 = (uint32_t)((uint64_t)uVar20 >> 0x20);
        uStack_60 = (uint32_t)extraout_XMM0_Qb_02;
        uStack_5c = (uint32_t)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
        fVar30 = (float)_logf();
        auVar25._0_8_ = FUN_015b4cb0(*(float *)(lVar15 + 0x1c) - *(float *)(lVar4 + 0x1c));
        auVar25._8_8_ = extraout_XMM0_Qb_03;
        auVar34 = insertps(ZEXT416((uint)(fVar30 - local_68)),auVar25,0x10);
        fVar31 = auVar34._0_4_ * g_023945d0 * fVar29;
        fVar17 = auVar34._4_4_ * _UNK_023945d4 * fVar29;
        if ((int64_t)uVar14 < (int64_t)(int)uVar5) {
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
          if (g_02394274 <= (float)((uint)(local_68 + g_0239011c) & g_02390140)) {
            auVar27._4_12_ = auVar26._4_12_;
            auVar27._0_4_ = (float)auVar26._0_8_ * fVar29;
            auVar28._8_4_ = (uint32_t)extraout_XMM0_Qb_04;
            fVar35 = auVar27._0_4_ * auVar27._0_4_;
            fVar32 = local_68 * local_68 + g_0239426c + local_68 + fVar35;
            fVar30 = g_02390118;
            if (g_0239424c <= fVar32) {
              fVar30 = g_02390118 - SQRT(fVar32);
            }
            fVar32 = g_02390d34;
            if (g_02394274 <= (float)((uint)fVar30 & g_02390140)) {
              fVar32 = g_02390d00 / fVar30;
            }
            if (g_02390118 <= local_68) {
              fVar30 = fVar30 - local_68;
              fVar35 = fVar35 + fVar30 * fVar30;
              fVar18 = g_0241c730;
              fVar33 = _UNK_0241c734;
              if ((g_0239424c <= fVar35) &&
                 (auVar38._0_4_ = SQRT(fVar35),
                 g_02394274 <= (float)((uint)auVar38._0_4_ & g_02390140))) {
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
              auVar41._0_4_ = local_68 + fVar30 + g_02390124;
              fVar35 = fVar35 + auVar41._0_4_ * auVar41._0_4_;
              fVar18 = g_02390d00;
              fVar33 = 0.0;
              if (g_0239424c <= fVar35) {
                fVar35 = SQRT(fVar35);
                fVar33 = 0.0;
                if (g_02394274 <= (float)((uint)fVar35 & g_02390140)) {
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
        lVar15 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar14 * 8);
        if (g_02394274 <= (float)(int)uVar14 + fVar31) {
          *(float *)(lVar15 + 0x20) = fVar17;
          *(float *)(lVar15 + 0x24) = fVar31;
          uVar19 = _atan2f();
        }
        else {
          *(void*)(lVar15 + 0x20) = 0;
          lVar15 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar14 * 8);
          uVar19 = 0;
        }
        *(void*)(lVar15 + 0x28) = uVar19;
        lVar13 = lVar13 + 8;
        uVar14 = uVar1;
      } while (uVar11 != uVar1);
    }
  }
  else if (2 < (int)uVar11) {
    fVar30 = g_02390124 / fVar29;
    fVar31 = (float)((uint)fVar30 ^ g_023945e0);
    uVar14 = 2;
    do {
      while( true ) {
        lVar13 = *(int64_t *)(*(int64_t *)(*param_1 + 0x10) + uVar14 * 8);
        lVar15 = *(int64_t *)(*(int64_t *)(*param_3 + 0x10) + uVar14 * 8);
        fVar17 = (float)_logf();
        _logf();
        auVar21._0_8_ =
             FUN_015b4cb0((*(float *)(lVar15 + 0x1c) - *(float *)(lVar13 + 0x1c)) -
                          (fVar30 + fVar30) * (float)(int)uVar14);
        auVar21._8_8_ = extraout_XMM0_Qb_00;
        auVar7._4_4_ = extraout_XMM0_Db;
        auVar7._0_4_ = extraout_XMM0_Da - fVar17;
        auVar7._8_4_ = (int)extraout_XMM0_Qb;
        auVar7._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar34 = insertps(auVar7,auVar21,0x10);
        fVar32 = auVar34._0_4_ * g_023945d0 * fVar29;
        fVar35 = auVar34._4_4_ * _UNK_023945d4 * fVar29;
        if ((int64_t)uVar14 < (int64_t)(int)uVar5) {
          fVar18 = (float)_logf();
          auVar6._4_4_ = uVar19;
          auVar6._0_4_ = fVar31;
          auVar6._8_4_ = uVar9;
          auVar6._12_4_ = uVar10;
          auVar22._0_8_ = FUN_015b4cb0();
          auVar22._8_8_ = extraout_XMM0_Qb_01;
          fVar17 = (fVar31 - (fVar17 + (extraout_XMM0_Da - (fVar18 + fVar18)))) * fVar29;
          if (g_02394274 <= (float)((uint)(fVar17 + g_0239011c) & g_02390140)) {
            auVar23._4_12_ = auVar22._4_12_;
            auVar23._0_4_ = (float)auVar22._0_8_ * fVar29;
            auVar24._8_4_ = (uint32_t)extraout_XMM0_Qb_01;
            fVar36 = auVar23._0_4_ * auVar23._0_4_;
            fVar33 = fVar17 * fVar17 + g_0239426c + fVar17 + fVar36;
            fVar18 = g_02390118;
            if (g_0239424c <= fVar33) {
              fVar18 = g_02390118 - SQRT(fVar33);
            }
            fVar33 = g_02390d34;
            if (g_02394274 <= (float)((uint)fVar18 & g_02390140)) {
              fVar33 = g_02390d00 / fVar18;
            }
            if (g_02390118 <= fVar17) {
              fVar18 = fVar18 - fVar17;
              fVar36 = fVar36 + fVar18 * fVar18;
              fVar39 = 0.0;
              fVar17 = g_02390d00;
              if (g_0239424c <= fVar36) {
                fVar36 = SQRT(fVar36);
                fVar39 = 0.0;
                if (g_02394274 <= (float)((uint)fVar36 & g_02390140)) {
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
              auVar40._0_4_ = fVar17 + fVar18 + g_02390124;
              auVar40._4_12_ = auVar6._4_12_;
              fVar36 = fVar36 + auVar40._0_4_ * auVar40._0_4_;
              fVar17 = g_0241c730;
              fVar39 = _UNK_0241c734;
              if ((g_0239424c <= fVar36) &&
                 (auVar37._0_4_ = SQRT(fVar36),
                 g_02394274 <= (float)((uint)auVar37._0_4_ & g_02390140))) {
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
        lVar13 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar14 * 8);
        if (g_02394274 <= (float)(int)uVar14 + fVar35) break;
        *(void*)(lVar13 + 0x20) = 0;
        *(void*)(*(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar14 * 8) + 0x28) = 0;
        uVar14 = uVar14 + 1;
        if (uVar11 == uVar14) {
          return;
        }
      }
      *(float *)(lVar13 + 0x20) = fVar32;
      *(float *)(lVar13 + 0x24) = fVar35;
      uVar16 = _atan2f();
      *(void*)(lVar13 + 0x28) = uVar16;
      uVar14 = uVar14 + 1;
    } while (uVar11 != uVar14);
  }
  return;
}



// ============================================================
// 011ec5f0
// ============================================================
// Function: FUN_011ec5f0
// Address: 011ec5f0
// Size: 1782 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011ec5f0(uint32_t param_1,uint32_t param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  void*puVar11;
  int64_t *in_RCX;
  int64_t *in_RDX;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar16;
  float fVar17;
  int64_t local_58;
  char local_50;
  
  uVar2 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  uVar10 = (uint64_t)uVar2;
  uVar3 = *(uint *)(*(int64_t *)(this_ptr + 0x1d0) + 0x24);
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_025f0d98;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  (*g_025f0db0)();
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
      uVar15 = (uint64_t)uVar16;
    } while (uVar16 != 0);
    uVar15 = 0;
    if ((int)uVar3 < 2) {
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(*(int64_t *)(*in_RCX + 0x10) + uVar15 * 8) != 0) {
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
        lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(int64_t *)(*(int64_t *)(*in_RCX + 0x10) + uVar15 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        uVar14 = 1;
        do {
          fVar17 = *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x10) + uVar14 * 8) + 0x14);
          fVar1 = *(float *)(*(int64_t *)(*in_RDX + 0x10) + uVar14 * 4);
          iVar8 = FUN_00e7d780(*(void*)(*(int64_t *)(*arg1 + 0x10) + uVar14 * 4));
          lVar6 = *(int64_t *)(lVar5 + 0x10);
          *(float *)(lVar6 + (int64_t)iVar8 * 4) =
               fVar17 * fVar1 + *(float *)(lVar6 + (int64_t)iVar8 * 4);
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
      uVar14 = (uint64_t)(uVar2 & 3);
      uVar15 = 0;
      do {
        lVar4 = *(int64_t *)(*in_RCX + 0x10);
        lVar5 = *(int64_t *)(local_58 + 0x10);
        uVar12 = 0;
        if (2 < uVar10 - 1) {
          do {
            *(void*)(lVar5 + uVar12 * 4) =
                 *(void*)
                  (*(int64_t *)(*(int64_t *)(lVar4 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(void*)(lVar5 + 4 + uVar12 * 4) =
                 *(void*)
                  (*(int64_t *)(*(int64_t *)(lVar4 + 8 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(void*)(lVar5 + 8 + uVar12 * 4) =
                 *(void*)
                  (*(int64_t *)(*(int64_t *)(lVar4 + 0x10 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(void*)(lVar5 + 0xc + uVar12 * 4) =
                 *(void*)
                  (*(int64_t *)(*(int64_t *)(lVar4 + 0x18 + uVar12 * 8) + 0x10) + uVar15 * 4);
            uVar12 = uVar12 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar12);
        }
        if (uVar14 != 0) {
          uVar13 = 0;
          do {
            *(void*)(lVar5 + uVar12 * 4 + uVar13 * 4) =
                 *(void*)
                  (*(int64_t *)(*(int64_t *)(lVar4 + uVar12 * 8 + uVar13 * 8) + 0x10) + uVar15 * 4
                  );
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        FUN_015c15b0(param_2,uVar10);
        lVar4 = *(int64_t *)(local_58 + 0x10);
        lVar5 = *(int64_t *)(*in_RCX + 0x10);
        uVar12 = 0;
        if (2 < uVar10 - 1) {
          do {
            *(void*)(*(int64_t *)(*(int64_t *)(lVar5 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(void*)(lVar4 + uVar12 * 4);
            *(void*)
             (*(int64_t *)(*(int64_t *)(lVar5 + 8 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(void*)(lVar4 + 4 + uVar12 * 4);
            *(void*)
             (*(int64_t *)(*(int64_t *)(lVar5 + 0x10 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(void*)(lVar4 + 8 + uVar12 * 4);
            *(void*)
             (*(int64_t *)(*(int64_t *)(lVar5 + 0x18 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(void*)(lVar4 + 0xc + uVar12 * 4);
            uVar12 = uVar12 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar12);
        }
        if ((uVar2 & 3) != 0) {
          uVar13 = 0;
          do {
            *(void*)
             (*(int64_t *)(*(int64_t *)(lVar5 + uVar12 * 8 + uVar13 * 8) + 0x10) + uVar15 * 4) =
                 *(void*)(lVar4 + uVar12 * 4 + uVar13 * 4);
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
        lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(*(int64_t *)(*in_RCX + 0x10) + uVar15 * 8) != 0) {
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
        lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(int64_t *)(*(int64_t *)(*in_RCX + 0x10) + uVar15 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        uVar14 = 1;
        do {
          fVar17 = *(float *)(*(int64_t *)(*arg1 + 0x10) + uVar14 * 4);
          iVar9 = FUN_00e7d780();
          fVar17 = fVar17 - (float)iVar9;
          iVar8 = iVar9 + 1;
          if ((int)uVar7 <= iVar9 + 1) {
            iVar8 = iVar9;
          }
          lVar6 = *(int64_t *)(lVar5 + 0x10);
          *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x10) + uVar14 * 8) + 0x38) =
               fVar17 * *(float *)(lVar6 + (int64_t)iVar8 * 4) +
               (g_02390124 - fVar17) * *(float *)(lVar6 + (int64_t)iVar9 * 4);
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
  if (puVar11 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 011ebe10
// ============================================================
// Function: FUN_011ebe10
// Address: 011ebe10
// Size: 1500 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011ebe10(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int64_t this_ptr;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  uVar14 = (uint64_t)uVar1;
  uVar2 = *(uint *)(*(int64_t *)(this_ptr + 0x1d0) + 0x24);
  uVar12 = (uint64_t)uVar2;
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
        lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar11 * 8);
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
            iVar7 = FUN_00e7d850(*(void*)
                                  (*(int64_t *)(*(int64_t *)(local_40 + 0x10) + uVar13 * 8) + 0x10
                                  ));
            *(void*)(*(int64_t *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar7 * 8) + 0x3c)
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
      uVar11 = (uint64_t)((uint)(uVar12 - 1) & 3);
      uVar13 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar13 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(int64_t *)(lVar4 + 0x10);
        lVar6 = *(int64_t *)(local_40 + 0x10);
        lVar8 = 1;
        if (2 < uVar12 - 2) {
          uVar10 = 0;
          do {
            uVar9 = uVar10;
            *(void*)(lVar6 + 4 + uVar9 * 4) =
                 *(void*)(*(int64_t *)(lVar5 + 8 + uVar9 * 8) + 0x14);
            *(void*)(lVar6 + 8 + uVar9 * 4) =
                 *(void*)(*(int64_t *)(lVar5 + 0x10 + uVar9 * 8) + 0x14);
            *(void*)(lVar6 + 0xc + uVar9 * 4) =
                 *(void*)(*(int64_t *)(lVar5 + 0x18 + uVar9 * 8) + 0x14);
            *(void*)(lVar6 + 0x10 + uVar9 * 4) =
                 *(void*)(*(int64_t *)(lVar5 + 0x20 + uVar9 * 8) + 0x14);
            uVar10 = uVar9 + 4;
          } while ((uVar12 - 1 & 0xfffffffffffffffc) != uVar9 + 4);
          lVar8 = uVar9 + 5;
        }
        if (uVar11 != 0) {
          uVar10 = 0;
          do {
            *(void*)(lVar6 + lVar8 * 4 + uVar10 * 4) =
                 *(void*)(*(int64_t *)(lVar5 + lVar8 * 8 + uVar10 * 8) + 0x14);
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
            iVar7 = FUN_00e7d850(*(void*)
                                  (*(int64_t *)(*(int64_t *)(local_40 + 0x10) + uVar10 * 8) + 0x10
                                  ));
            *(void*)(*(int64_t *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar7 * 8) + 0x3c)
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
            iVar7 = FUN_00e7d850(*(void*)
                                  (*(int64_t *)(*(int64_t *)(local_40 + 0x10) + uVar13 * 8) + 0x10
                                  ));
            *(void*)
             (*(int64_t *)
               (*(int64_t *)
                 (*(int64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + (int64_t)iVar7 * 8) +
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
        lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10);
        lVar5 = *(int64_t *)(local_40 + 0x10);
        uVar11 = 0;
        if (uVar1 != 1) {
          do {
            *(void*)(lVar5 + uVar11 * 4) =
                 *(void*)
                  (*(int64_t *)
                    (*(int64_t *)(*(int64_t *)(lVar4 + uVar11 * 8) + 0x10) + uVar14 * 8) + 0x14);
            *(void*)(lVar5 + 4 + uVar11 * 4) =
                 *(void*)
                  (*(int64_t *)
                    (*(int64_t *)(*(int64_t *)(lVar4 + 8 + uVar11 * 8) + 0x10) + uVar14 * 8) +
                  0x14);
            uVar11 = uVar11 + 2;
          } while ((uVar1 & 0xfffffffe) != uVar11);
        }
        if ((uVar1 & 1) != 0) {
          *(void*)(lVar5 + uVar11 * 4) =
               *(void*)
                (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar4 + uVar11 * 8) + 0x10) + uVar14 * 8)
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
            iVar7 = FUN_00e7d850(*(void*)
                                  (*(int64_t *)(*(int64_t *)(local_40 + 0x10) + uVar11 * 8) + 0x10
                                  ));
            *(void*)
             (*(int64_t *)
               (*(int64_t *)
                 (*(int64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + (int64_t)iVar7 * 8) +
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



// ============================================================
// 011ee630
// ============================================================
// Function: FUN_011ee630
// Address: 011ee630
// Size: 961 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011ee630(int param_1,uint64_t param_2,uint param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint uVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t arg1;
  uint64_t uVar13;
  int64_t this_ptr;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int iVar17;
  int iVar18;
  uint32_t uVar20;
  uint8_t auVar19 [16];
  int64_t lVar21;
  uint8_t auVar22 [16];
  int64_t lVar23;
  int64_t local_1038 [256];
  int64_t local_838 [256];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar3 = *(uint *)(this_ptr + 0x20);
  uVar10 = (int64_t)(int)*(uint *)(this_ptr + 0x1c) & param_2;
  iVar4 = *(int *)(this_ptr + 0x18);
  iVar17 = iVar4 - ((uint)param_2 & *(uint *)(this_ptr + 0x1c));
  iVar6 = iVar17;
  if ((int64_t)(uVar10 + (int64_t)param_1) <= (int64_t)iVar4) {
    iVar6 = param_1;
  }
  uVar15 = (uint64_t)(byte)uVar3;
  iVar18 = 0;
  if ((int64_t)iVar4 < (int64_t)(uVar10 + (int64_t)param_1)) {
    iVar18 = param_1 - iVar17;
  }
  if (uVar15 != 0) {
    plVar5 = *(int64_t **)(this_ptr + 0x28);
    if (((uVar3 & 0xff) < 4) || ((local_838 < plVar5 + uVar15 && (plVar5 < local_838 + uVar15)))) {
      uVar13 = 0;
    }
    else {
      uVar13 = (uint64_t)(uVar3 & 0xfc);
      uVar14 = (uVar13 - 4 >> 2) + 1;
      uVar16 = (uint64_t)((uint)uVar14 & 3);
      uVar20 = (uint32_t)(uVar10 >> 0x20);
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
          plVar2 = (int64_t *)((int64_t)plVar5 + lVar12 + lVar11 * 8);
          lVar23 = plVar2[1];
          plVar1 = (int64_t *)((int64_t)plVar5 + lVar12 + lVar11 * 8 + 0x10);
          lVar7 = *plVar1;
          lVar8 = plVar1[1];
          plVar1 = (int64_t *)((int64_t)local_838 + lVar12 + lVar11 * 8);
          *plVar1 = *plVar2 + uVar10 * 4;
          plVar1[1] = lVar23 + lVar21;
          plVar1 = (int64_t *)((int64_t)local_838 + lVar12 + lVar11 * 8 + 0x10);
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
      lVar11 = (int64_t)iVar6;
      if ((uint64_t)(param_3 & 0xff) - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          lVar21 = *(int64_t *)(arg1 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10] = lVar12;
          lVar21 = *(int64_t *)(arg1 + 8 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 1] = lVar12;
          lVar21 = *(int64_t *)(arg1 + 0x10 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 2] = lVar12;
          lVar21 = *(int64_t *)(arg1 + 0x18 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 3] = lVar12;
          uVar10 = uVar10 + 4;
        } while ((param_3 & 0xfc) != uVar10);
      }
      if ((uint64_t)(param_3 & 3) != 0) {
        uVar15 = 0;
        do {
          lVar21 = *(int64_t *)(arg1 + uVar10 * 8 + uVar15 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + uVar15] = lVar12;
          uVar15 = uVar15 + 1;
        } while ((param_3 & 3) != uVar15);
      }
    }
    FUN_00aea110(iVar18,0x44,*(void*)(this_ptr + 0x20),param_3);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 011eaca0
// ============================================================
// Function: FUN_011eaca0
// Address: 011eaca0
// Size: 1080 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011eaca0(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  code *pcVar6;
  uint64_t uVar7;
  void*puVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint uVar14;
  int64_t this_ptr;
  uint uVar15;
  uint64_t uVar16;
  int64_t local_70;
  char local_68;
  
  uVar14 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  uVar7 = (uint64_t)uVar14;
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x1d0) + 0x24);
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  pcVar6 = g_02572370;
  (*g_02572370)();
  lVar2 = *(int64_t *)(this_ptr + 0x280);
  *(void**)(this_ptr + 0x280) = puVar8;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  if (0 < (int)uVar14) {
    if ((int)uVar1 < 1) {
      do {
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02572358;
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
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02572358;
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
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar14);
    }
    if ((int)uVar1 < 1) {
      uVar16 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + uVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar16 * 8);
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
        lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + uVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar16 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        lVar9 = FUN_015c6b60();
        lVar10 = FUN_015c6310();
        lVar4 = *(int64_t *)(lVar3 + 0x10);
        if ((uint64_t)uVar1 - 1 < 3) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            lVar5 = *(int64_t *)(lVar4 + uVar11 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + uVar11 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + uVar11 * 4);
            lVar5 = *(int64_t *)(lVar4 + 8 + uVar11 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + 4 + uVar11 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + 4 + uVar11 * 4);
            lVar5 = *(int64_t *)(lVar4 + 0x10 + uVar11 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + 8 + uVar11 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + 8 + uVar11 * 4);
            lVar5 = *(int64_t *)(lVar4 + 0x18 + uVar11 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + 0xc + uVar11 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + 0xc + uVar11 * 4);
            uVar11 = uVar11 + 4;
          } while ((uVar1 & 0xfffffffc) != uVar11);
        }
        if ((uint64_t)(uVar1 & 3) != 0) {
          uVar12 = 0;
          do {
            lVar5 = *(int64_t *)(lVar4 + uVar11 * 8 + uVar12 * 8);
            *(void*)(lVar5 + 0x14) = *(void*)(lVar9 + uVar11 * 4 + uVar12 * 4);
            *(void*)(lVar5 + 0x1c) = *(void*)(lVar10 + uVar11 * 4 + uVar12 * 4);
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



// ============================================================
// 011eded0
// ============================================================
// Function: FUN_011eded0
// Address: 011eded0
// Size: 619 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011eded0(int64_t param_1,int *param_2,int *param_3,int param_4)

{
  int64_t lVar1;
  byte bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  
  if (*(char *)(this_ptr + 0x30) == '\0') {
    uVar4 = *(uint64_t *)(this_ptr + 0x10);
    bVar2 = *(byte *)(this_ptr + 0x20);
    if ((int64_t)*(int *)(this_ptr + 0x18) <
        (int64_t)((int64_t)param_4 + (uVar4 & (int64_t)(int)*(uint *)(this_ptr + 0x1c)))) {
      iVar5 = *(int *)(this_ptr + 0x18) - ((uint)uVar4 & *(uint *)(this_ptr + 0x1c));
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
    uVar4 = uVar4 & (int64_t)*(int *)(this_ptr + 0x1c);
    uVar6 = (uint64_t)(bVar2 & 3);
    if ((uint64_t)bVar2 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      lVar1 = uVar4 * 4;
      do {
        *(int64_t *)(arg1 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + uVar3 * 8) + lVar1;
        *(int64_t *)(arg1 + 8 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 8 + uVar3 * 8) + lVar1;
        *(int64_t *)(arg1 + 0x10 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10 + uVar3 * 8) + lVar1;
        *(int64_t *)(arg1 + 0x18 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x18 + uVar3 * 8) + lVar1;
        uVar3 = uVar3 + 4;
      } while ((bVar2 & 0xfffffffc) != uVar3);
    }
    if (uVar6 != 0) {
      do {
        *(uint64_t *)(arg1 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + uVar3 * 8) + uVar4 * 4;
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_4 != 0) {
      uVar4 = (uint64_t)(bVar2 & 3);
      if ((uint64_t)bVar2 - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(void*)(param_1 + uVar6 * 8) =
               *(void*)(*(int64_t *)(this_ptr + 0x28) + uVar6 * 8);
          *(void*)(param_1 + 8 + uVar6 * 8) =
               *(void*)(*(int64_t *)(this_ptr + 0x28) + 8 + uVar6 * 8);
          *(void*)(param_1 + 0x10 + uVar6 * 8) =
               *(void*)(*(int64_t *)(this_ptr + 0x28) + 0x10 + uVar6 * 8);
          *(void*)(param_1 + 0x18 + uVar6 * 8) =
               *(void*)(*(int64_t *)(this_ptr + 0x28) + 0x18 + uVar6 * 8);
          uVar6 = uVar6 + 4;
        } while ((bVar2 & 0xfffffffc) != uVar6);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(void*)(param_1 + uVar6 * 8) =
             *(void*)(*(int64_t *)(this_ptr + 0x28) + uVar6 * 8);
        uVar6 = uVar6 + 1;
      }
    }
  }
  else {
    bVar2 = *(byte *)(this_ptr + 0x20);
    if ((uint64_t)bVar2 != 0) {
      uVar6 = (int64_t)*(int *)(this_ptr + 0x1c) & *(uint64_t *)(this_ptr + 0x10);
      uVar4 = (uint64_t)(bVar2 & 3);
      if ((uint64_t)bVar2 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        lVar1 = uVar6 * 4;
        do {
          *(int64_t *)(arg1 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + uVar3 * 8) + lVar1;
          *(int64_t *)(arg1 + 8 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 8 + uVar3 * 8) + lVar1;
          *(int64_t *)(arg1 + 0x10 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10 + uVar3 * 8) + lVar1;
          *(int64_t *)(arg1 + 0x18 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x18 + uVar3 * 8) + lVar1;
          uVar3 = uVar3 + 4;
        } while ((bVar2 & 0xfffffffc) != uVar3);
      }
      if (uVar4 != 0) {
        do {
          *(uint64_t *)(arg1 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + uVar3 * 8) + uVar6 * 4;
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



// ============================================================
// 011eb250
// ============================================================
// Function: FUN_011eb250
// Address: 011eb250
// Size: 724 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011eb250(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t local_e0;
  uint8_t local_d8;
  int64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  uint8_t local_88;
  int64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  uint8_t local_68;
  uint64_t local_60;
  uint8_t local_58;
  uint64_t local_50;
  uint8_t local_48;
  int64_t local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  local_38 = param_2;
  local_34 = param_1;
  if (unaff_ESI == 0) {
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar6 * 8);
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
    lVar5 = **(int64_t **)(*(int64_t *)(this_ptr + 0x280) + 0x10);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_e0 = 0;
    local_d8 = 0;
    FUN_011eb620(local_34,local_38,&local_e0);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) +
             (int64_t)(int)(uVar1 - 1) * 8);
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
      local_40 = (uint64_t)(uVar1 - 1) - 1;
      lVar5 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10);
        lVar2 = *(int64_t *)(lVar4 + 8 + lVar5 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10);
        }
        local_98 = 1;
        lVar3 = *(int64_t *)(lVar4 + lVar5 * 8);
        local_a0 = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b00();
          lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10);
        }
        local_88 = 1;
        lVar4 = *(int64_t *)(lVar4 + 0x10 + lVar5 * 8);
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



// ============================================================
// 011ecf60
// ============================================================
// Function: FUN_011ecf60
// Address: 011ecf60
// Size: 977 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011ecf60(float param_1)

{
  uint uVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  int64_t local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  uVar5 = FUN_00e7d780(param_1 / (float)*(double *)(*(int64_t *)(this_ptr + 0x1d0) + 0x50));
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  puVar2 = *(void**)(this_ptr + 0x288);
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x288) = puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (0 < (int)uVar1) {
    if ((int)uVar5 < 2) {
      uVar7 = 0;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar7 * 8);
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
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar7 * 8);
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
          lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar8 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          if (*(char *)(lVar4 + 0x3c) != '\0') {
            *(void*)(*(int64_t *)(local_40 + 0x10) + uVar8 * 4) =
                 *(void*)(lVar4 + 0x14);
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
  lVar3 = *(int64_t *)(this_ptr + 0x290);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x290) = local_40;
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
  lVar3 = *(int64_t *)(this_ptr + 0x298);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x298) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 011ed4f0
// ============================================================
// Function: FUN_011ed4f0
// Address: 011ed4f0
// Size: 1046 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011ed4f0(float param_1)

{
  uint uVar1;
  void*puVar2;
  int64_t lVar3;
  uint uVar4;
  void*puVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  uVar4 = FUN_00e7d780(param_1 / (float)*(double *)(*(int64_t *)(this_ptr + 0x1d0) + 0x50));
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  puVar2 = *(void**)(this_ptr + 0x2a0);
  if (puVar2 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x2a0) = puVar5;
    if (puVar2 != (void*)0x0) {
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
          lVar3 = *(int64_t *)
                   (*(int64_t *)
                     (*(int64_t *)
                       (*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar6 * 8) + 0x10)
                   + uVar7 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if (*(char *)(lVar3 + 0x3d) != '\0') {
            *(void*)(*(int64_t *)(local_40 + 0x10) + uVar6 * 4) =
                 *(void*)(lVar3 + 0x14);
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
  lVar3 = *(int64_t *)(this_ptr + 0x2a8);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x2a8) = local_40;
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
  lVar3 = *(int64_t *)(this_ptr + 0x2b0);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x2b0) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 011eeeb0
// ============================================================
// Function: FUN_011eeeb0
// Address: 011eeeb0
// Size: 706 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


uint64_t FUN_011eeeb0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  bool bVar4;
  int64_t *local_60;
  char local_58;
  uint64_t local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  local_50 = 0;
  if ((*(int64_t *)(this_ptr + 0x48) != 0) && (*(int64_t *)(this_ptr + 0x50) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264180();
    if (local_38 == (int64_t *)0x0) {
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
        plVar3 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar3 + 0x378))();
      bVar4 = local_48 != (int64_t *)0x0;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
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
        plVar3 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar3 + 0x378))();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_38;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd200();
      local_50 = (**(code **)(*plVar3 + 0x380))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
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



// ============================================================
// 011efc00
// ============================================================
// Function: FUN_011efc00
// Address: 011efc00
// Size: 753 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void* FUN_011efc00(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t local_a0;
  char local_98;
  int64_t *local_40;
  char local_38;
  
  plVar6 = *(int64_t **)(arg1 + 0x98);
  if (plVar6 == (int64_t *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = g_026d83d0;
  if (g_026d83d0 != 0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  FUN_01e57490();
  plVar1 = local_40;
  FUN_00081d60();
  if (plVar1 == (int64_t *)0x0) {
    pplVar7 = &g_02802688;
    plVar1 = g_02802688;
    cVar4 = g_02802690;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar7 = &g_02802688;
    }
    plVar1 = *pplVar7;
    cVar4 = *(char *)(pplVar7 + 1);
  }
  if (cVar4 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_01d2a770();
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 011e95b0
// ============================================================
// Function: FUN_011e95b0
// Address: 011e95b0
// Size: 559 bytes
// Class: MUThirdsCircle
// String references:
//   "MUThirdsCircle"
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011e95b0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025f4940;
  FUN_011e9840();
  FUN_011e9ac0();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc8d3 == '\0') {
    FUN_011e9d40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc8d3 == '\0') {
    FUN_011e9eb0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 011e89a0
// ============================================================
// Function: FUN_011e89a0
// Address: 011e89a0
// Size: 1119 bytes
// Class: MUThirdsCircle
// String references:
//   "PNTestChord"
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011e89a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025f45c8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e8e30();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e8fa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e9110();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e9280();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bc69b == '\0') {
    FUN_011e93f0();
    FUN_00e87980();
  }
  return;
}

