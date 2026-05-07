// Function: FUN_00bbc620
// Address: 00bbc620
// Size: 1012 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


void FUN_00bbc620(int param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint8_t auVar13 [16];
  uint uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t arg1;
  int64_t lVar17;
  int64_t this_ptr;
  uint64_t uVar18;
  int iVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint uVar23;
  uint uVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float fVar29;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  uint8_t auVar36 [16];
  
  uVar14 = FUN_00b33120();
  auVar13 = g_023b2d50;
  uVar12 = _UNK_023945ec;
  uVar11 = _UNK_023945e8;
  uVar23 = _UNK_023945e4;
  uVar10 = g_023945e0;
  fVar9 = g_02390124;
  if ((0 < (int)uVar14) && (param_1 != 0)) {
    if (param_1 - 1U < 3) {
      uVar15 = 0;
      do {
        pfVar3 = *(float **)(arg1 + uVar15 * 8);
        fVar35 = *pfVar3 * *(float *)(this_ptr + 0x94);
        fVar1 = *(float *)(this_ptr + 0x90);
        uVar23 = -(uint)(fVar35 < 0.0);
        fVar35 = (float)(~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23);
        if (fVar1 < fVar35) {
          fVar35 = (fVar9 - fVar9 / ((fVar9 / (fVar9 - fVar1)) * (fVar35 - fVar1) + fVar9)) *
                   (fVar9 - fVar1) + fVar1;
        }
        puVar4 = *(uint **)(param_2 + uVar15 * 8);
        *puVar4 = ~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23;
        if (param_1 != 1) {
          fVar35 = pfVar3[1] * *(float *)(this_ptr + 0x94);
          fVar1 = *(float *)(this_ptr + 0x90);
          uVar23 = -(uint)(fVar35 < 0.0);
          fVar35 = (float)(~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23);
          if (fVar1 < fVar35) {
            fVar35 = (fVar9 - fVar9 / ((fVar9 / (fVar9 - fVar1)) * (fVar35 - fVar1) + fVar9)) *
                     (fVar9 - fVar1) + fVar1;
          }
          puVar4[1] = ~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23;
          if (param_1 != 2) {
            fVar35 = pfVar3[2] * *(float *)(this_ptr + 0x94);
            fVar1 = *(float *)(this_ptr + 0x90);
            uVar23 = -(uint)(fVar35 < 0.0);
            fVar35 = (float)(~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23);
            if (fVar1 < fVar35) {
              fVar35 = (fVar9 - fVar9 / ((fVar9 / (fVar9 - fVar1)) * (fVar35 - fVar1) + fVar9)) *
                       (fVar9 - fVar1) + fVar1;
            }
            puVar4[2] = ~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar14 != uVar15);
    }
    else {
      uVar22 = (uint64_t)(param_1 - 1U) + 1;
      uVar15 = uVar22 & 0xfffffffffffffffc;
      uVar21 = 0;
      fVar1 = (float)g_023b2d50;
      fVar35 = g_023b2d50._4_4_;
      fVar7 = g_023b2d50._8_4_;
      fVar8 = g_023b2d50._12_4_;
      do {
        uVar5 = *(uint64_t *)(arg1 + uVar21 * 8);
        uVar6 = *(uint64_t *)(param_2 + uVar21 * 8);
        uVar20 = uVar6 + uVar22 * 4;
        uVar16 = uVar5;
        uVar18 = uVar6;
        iVar19 = param_1;
        if ((uVar6 < uVar5 + uVar22 * 4 && uVar5 < uVar20) ||
           (uVar6 < this_ptr + 0x98U && this_ptr + 0x90U < uVar20)) {
LAB_00bbc989:
          lVar17 = 0;
          do {
            fVar29 = *(float *)(uVar16 + lVar17 * 4) * *(float *)(this_ptr + 0x94);
            fVar2 = *(float *)(this_ptr + 0x90);
            uVar24 = -(uint)(fVar29 < 0.0);
            fVar29 = (float)(~uVar24 & (uint)fVar29 | ((uint)fVar29 ^ uVar10) & uVar24);
            if (fVar2 < fVar29) {
              fVar29 = (fVar9 - fVar9 / ((fVar9 / (fVar9 - fVar2)) * (fVar29 - fVar2) + fVar9)) *
                       (fVar9 - fVar2) + fVar2;
            }
            *(uint *)(uVar18 + lVar17 * 4) =
                 ~uVar24 & (uint)fVar29 | ((uint)fVar29 ^ uVar10) & uVar24;
            lVar17 = lVar17 + 1;
          } while (iVar19 != (int)lVar17);
        }
        else {
          uVar18 = uVar6 + uVar15 * 4;
          uVar16 = uVar5 + uVar15 * 4;
          fVar2 = *(float *)(this_ptr + 0x94);
          fVar29 = *(float *)(this_ptr + 0x90);
          fVar34 = fVar9 - fVar29;
          fVar33 = fVar9 / fVar34;
          uVar20 = 0;
          do {
            pfVar3 = (float *)(uVar5 + uVar20 * 4);
            auVar26._0_4_ = *pfVar3 * fVar2;
            auVar26._4_4_ = pfVar3[1] * fVar2;
            auVar26._8_4_ = pfVar3[2] * fVar2;
            auVar26._12_4_ = pfVar3[3] * fVar2;
            auVar30._0_4_ = (uint)auVar26._0_4_ ^ uVar10;
            auVar30._4_4_ = (uint)auVar26._4_4_ ^ uVar23;
            auVar30._8_4_ = (uint)auVar26._8_4_ ^ uVar11;
            auVar30._12_4_ = (uint)auVar26._12_4_ ^ uVar12;
            auVar27._4_4_ = -(uint)(auVar26._4_4_ < 0.0);
            auVar27._0_4_ = -(uint)(auVar26._0_4_ < 0.0);
            auVar27._8_4_ = -(uint)(auVar26._8_4_ < 0.0);
            auVar27._12_4_ = -(uint)(auVar26._12_4_ < 0.0);
            auVar27 = blendvps(auVar26,auVar30,auVar27);
            auVar25._4_4_ = -(uint)(auVar27._4_4_ <= fVar29);
            auVar25._0_4_ = -(uint)(auVar27._0_4_ <= fVar29);
            auVar25._8_4_ = -(uint)(auVar27._8_4_ <= fVar29);
            auVar25._12_4_ = -(uint)(auVar27._12_4_ <= fVar29);
            auVar31._0_4_ = (auVar27._0_4_ - fVar29) * fVar33 + fVar1;
            auVar31._4_4_ = (auVar27._4_4_ - fVar29) * fVar33 + fVar35;
            auVar31._8_4_ = (auVar27._8_4_ - fVar29) * fVar33 + fVar7;
            auVar31._12_4_ = (auVar27._12_4_ - fVar29) * fVar33 + fVar8;
            auVar36 = divps(auVar13,auVar31);
            auVar32._0_4_ = (fVar1 - auVar36._0_4_) * fVar34 + fVar29;
            auVar32._4_4_ = (fVar35 - auVar36._4_4_) * fVar34 + fVar29;
            auVar32._8_4_ = (fVar7 - auVar36._8_4_) * fVar34 + fVar29;
            auVar32._12_4_ = (fVar8 - auVar36._12_4_) * fVar34 + fVar29;
            auVar27 = blendvps(auVar32,auVar27,auVar25);
            auVar28._0_4_ = auVar27._0_4_ ^ uVar10;
            auVar28._4_4_ = auVar27._4_4_ ^ uVar23;
            auVar28._8_4_ = auVar27._8_4_ ^ uVar11;
            auVar28._12_4_ = auVar27._12_4_ ^ uVar12;
            auVar36._4_4_ = -(uint)(auVar26._4_4_ < 0.0);
            auVar36._0_4_ = -(uint)(auVar26._0_4_ < 0.0);
            auVar36._8_4_ = -(uint)(auVar26._8_4_ < 0.0);
            auVar36._12_4_ = -(uint)(auVar26._12_4_ < 0.0);
            auVar27 = blendvps(auVar27,auVar28,auVar36);
            *(uint8_t (*) [16])(uVar6 + uVar20 * 4) = auVar27;
            uVar20 = uVar20 + 4;
          } while (uVar15 != uVar20);
          iVar19 = param_1 - (int)uVar15;
          if (uVar22 != uVar15) goto LAB_00bbc989;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar14);
    }
  }
  return;
}

