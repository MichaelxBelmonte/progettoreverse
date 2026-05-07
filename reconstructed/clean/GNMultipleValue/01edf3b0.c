// Function: FUN_01edf3b0
// Address: 01edf3b0
// Size: 534 bytes
// Class: GNMultipleValue

void FUN_01edf3b0(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  int64_t lVar10;
  int64_t *this_ptr;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t in_XMM0_Qb;
  uint8_t auVar14 [16];
  float fVar15;
  uint64_t in_XMM1_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  uint8_t auVar21 [16];
  float fVar22;
  float local_78;
  float fStack_74;
  float local_38;
  float fStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  float local_28;
  float fStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  
  local_28 = (float)param_1;
  fStack_24 = (float)((uint64_t)param_1 >> 0x20);
  uStack_20 = (uint32_t)in_XMM0_Qb;
  uStack_1c = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
  lVar3 = *this_ptr;
  if (lVar3 != 0) {
    local_38 = (float)param_2;
    fStack_34 = (float)((uint64_t)param_2 >> 0x20);
    uStack_30 = (uint32_t)in_XMM1_Qb;
    uStack_2c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
    if (0 < *(int *)(lVar3 + 0xc)) {
      fVar11 = local_28 + local_38 + g_02390d00;
      fVar18 = fStack_24 + fStack_34 + g_02390d00;
      lVar10 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar10 * 8);
        uVar1 = *(uint64_t *)(lVar4 + 0xc);
        fVar19 = (float)(uVar1 >> 0x20);
        uVar2 = *(uint64_t *)(lVar4 + 0x14);
        fVar22 = (float)(uVar2 >> 0x20);
        auVar14._8_4_ = uStack_30;
        auVar14._0_8_ = param_2;
        auVar14._12_4_ = uStack_2c;
        auVar21 = auVar14;
        if (local_38 <= (float)uVar2) {
LAB_01edf476:
          if (fVar22 < auVar14._4_4_) {
            if (*(char *)(lVar4 + 0x1f) == '\0') goto LAB_01edf430;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar2;
            auVar21 = blendps(auVar21,auVar7,2);
          }
          fVar22 = fVar19 + fVar22;
          fVar15 = (float)uVar1 + (float)uVar2 + g_02390d00;
          auVar17._8_4_ = uStack_20;
          auVar17._0_8_ = param_1;
          auVar17._12_4_ = uStack_1c;
          fVar20 = auVar21._0_4_;
          if (fVar15 < fVar11) {
            if (*(char *)(lVar4 + 0x1c) == '\0') goto LAB_01edf430;
            auVar16._0_4_ = fVar15 - fVar20;
            auVar16._4_4_ = fVar22;
            auVar16._8_8_ = 0;
            auVar9._8_4_ = uStack_20;
            auVar9._0_8_ = param_1;
            auVar9._12_4_ = uStack_1c;
            auVar17 = blendps(auVar16,auVar9,0xe);
          }
          fVar15 = auVar21._4_4_;
          if (fVar22 + g_02390d00 < fVar18) {
            if (*(char *)(lVar4 + 0x1d) == '\0') goto LAB_01edf430;
            auVar8._4_4_ = fVar22;
            auVar8._0_4_ = (fVar22 + g_02390d00) - fVar15;
            auVar8._8_8_ = 0;
            auVar17 = insertps(auVar17,auVar8,0x10);
          }
          if (local_28 < (float)uVar1) {
            if (*(char *)(lVar4 + 0x1c) == '\0') goto LAB_01edf430;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar1;
            auVar17 = blendps(auVar17,auVar5,0xd);
          }
          uVar12 = auVar17._0_8_;
          if (fStack_24 < fVar19) {
            if (*(char *)(lVar4 + 0x1d) == '\0') goto LAB_01edf430;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar1;
            auVar14 = blendps(auVar17,auVar6,2);
            uVar12 = auVar14._0_8_;
          }
          uVar13 = FUN_00d05360();
          local_78 = (float)uVar12;
          fStack_74 = (float)((uint64_t)uVar12 >> 0x20);
          if ((((float)uVar13 == local_78) && (!NAN((float)uVar13) && !NAN(local_78))) &&
             ((float)((uint64_t)uVar13 >> 0x20) == fStack_74)) {
            if (((auVar21._0_4_ == fVar20) && (!NAN(auVar21._0_4_) && !NAN(fVar20))) &&
               (auVar21._4_4_ == fVar15)) {
              FUN_01edf7b0();
              return;
            }
          }
        }
        else if (*(char *)(lVar4 + 0x1e) != '\0') {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar2;
          auVar21 = blendps(auVar21,auVar14,2);
          goto LAB_01edf476;
        }
LAB_01edf430:
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(lVar3 + 0xc));
    }
    FUN_01edf7b0();
  }
  return;
}

