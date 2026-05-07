// Function: FUN_015bdbb0
// Address: 015bdbb0
// Size: 831 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015bdbb0(float param_1,uint64_t param_2,uint64_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int64_t lVar4;
  void *pvVar5;
  uint64_t uVar6;
  void *in_RCX;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  size_t sVar11;
  float fVar12;
  uint8_t auVar13 [16];
  float fVar14;
  float fVar15;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  int64_t local_38;
  char local_30;
  
  FUN_015ba3b0();
  lVar4 = *(int64_t *)(this_ptr + 0x50);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = *(int64_t *)(this_ptr + 0x58);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  auVar13 = g_02416630;
  uVar3 = *(uint *)(this_ptr + 0x44);
  uVar6 = (uint64_t)uVar3;
  if ((int)uVar3 < 1) goto LAB_015bde0b;
  in_RCX = *(void **)(lVar4 + 0x10);
  pvVar5 = *(void **)(local_38 + 0x10);
  if ((uVar3 < 8) ||
     ((pvVar5 < (void *)((int64_t)in_RCX + uVar6 * 4) &&
      (in_RCX < (void *)((int64_t)pvVar5 + uVar6 * 4))))) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint64_t)(uVar3 & 0xfffffff8);
    param_3 = (uVar8 - 8 >> 3) + 1;
    if (uVar8 - 8 == 0) {
      lVar10 = 0;
LAB_015bddda:
      pfVar1 = (float *)((int64_t)in_RCX + lVar10 * 4);
      pfVar2 = (float *)((int64_t)in_RCX + lVar10 * 4 + 0x10);
      auVar17._0_4_ = *pfVar2 * param_1;
      auVar17._4_4_ = pfVar2[1] * param_1;
      auVar17._8_4_ = pfVar2[2] * param_1;
      auVar17._12_4_ = pfVar2[3] * param_1;
      auVar13._4_4_ = pfVar1[1] * param_1;
      auVar13._0_4_ = *pfVar1 * param_1;
      auVar13._8_4_ = pfVar1[2] * param_1;
      auVar13._12_4_ = pfVar1[3] * param_1;
      auVar16 = maxps(g_02416630,auVar13);
      auVar13 = maxps(g_02416630,auVar17);
      *(uint8_t (*) [16])((int64_t)pvVar5 + lVar10 * 4) = auVar16;
      *(uint8_t (*) [16])((int64_t)pvVar5 + lVar10 * 4 + 0x10) = auVar13;
    }
    else {
      lVar7 = -(param_3 & 0xfffffffffffffffe);
      lVar10 = 0;
      do {
        pfVar1 = (float *)((int64_t)in_RCX + lVar10 * 4);
        pfVar2 = (float *)((int64_t)in_RCX + lVar10 * 4 + 0x10);
        auVar16._0_4_ = *pfVar1 * param_1;
        auVar16._4_4_ = pfVar1[1] * param_1;
        auVar16._8_4_ = pfVar1[2] * param_1;
        auVar16._12_4_ = pfVar1[3] * param_1;
        auVar18._0_4_ = *pfVar2 * param_1;
        auVar18._4_4_ = pfVar2[1] * param_1;
        auVar18._8_4_ = pfVar2[2] * param_1;
        auVar18._12_4_ = pfVar2[3] * param_1;
        auVar20 = maxps(auVar13,auVar16);
        auVar16 = maxps(auVar13,auVar18);
        *(uint8_t (*) [16])((int64_t)pvVar5 + lVar10 * 4) = auVar20;
        *(uint8_t (*) [16])((int64_t)pvVar5 + lVar10 * 4 + 0x10) = auVar16;
        pfVar1 = (float *)((int64_t)in_RCX + lVar10 * 4 + 0x20);
        pfVar2 = (float *)((int64_t)in_RCX + lVar10 * 4 + 0x30);
        auVar20._0_4_ = *pfVar1 * param_1;
        auVar20._4_4_ = pfVar1[1] * param_1;
        auVar20._8_4_ = pfVar1[2] * param_1;
        auVar20._12_4_ = pfVar1[3] * param_1;
        auVar19._0_4_ = *pfVar2 * param_1;
        auVar19._4_4_ = pfVar2[1] * param_1;
        auVar19._8_4_ = pfVar2[2] * param_1;
        auVar19._12_4_ = pfVar2[3] * param_1;
        auVar20 = maxps(auVar13,auVar20);
        auVar16 = maxps(auVar13,auVar19);
        *(uint8_t (*) [16])((int64_t)pvVar5 + lVar10 * 4 + 0x20) = auVar20;
        *(uint8_t (*) [16])((int64_t)pvVar5 + lVar10 * 4 + 0x30) = auVar16;
        lVar10 = lVar10 + 0x10;
        lVar7 = lVar7 + 2;
      } while (lVar7 != 0);
      if ((param_3 & 1) != 0) goto LAB_015bddda;
    }
    if (uVar8 == uVar6) goto LAB_015bde0b;
  }
  uVar9 = ~uVar8;
  if ((uVar3 & 1) != 0) {
    fVar12 = *(float *)((int64_t)in_RCX + uVar8 * 4) * param_1;
    fVar14 = g_0240d16c;
    if (g_0240d16c <= fVar12) {
      fVar14 = fVar12;
    }
    *(float *)((int64_t)pvVar5 + uVar8 * 4) = fVar14;
    uVar8 = uVar8 | 1;
  }
  fVar14 = g_0240d16c;
  if (uVar9 + uVar6 != 0) {
    do {
      fVar15 = *(float *)((int64_t)in_RCX + uVar8 * 4) * param_1;
      fVar12 = fVar14;
      if (fVar14 <= fVar15) {
        fVar12 = fVar15;
      }
      *(float *)((int64_t)pvVar5 + uVar8 * 4) = fVar12;
      fVar15 = *(float *)((int64_t)in_RCX + uVar8 * 4 + 4) * param_1;
      fVar12 = fVar14;
      if (fVar14 <= fVar15) {
        fVar12 = fVar15;
      }
      *(float *)((int64_t)pvVar5 + uVar8 * 4 + 4) = fVar12;
      uVar8 = uVar8 + 2;
    } while (uVar6 != uVar8);
  }
LAB_015bde0b:
  sVar11 = (size_t)param_3;
  FUN_015b7cb0();
  FUN_00c8e690();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_38 + 0x18)) {
    _memset_pattern16(in_RCX,(void *)((uint64_t)((*(uint *)(local_38 + 0x18) >> 2) - 1) * 4 + 4),
                      sVar11);
  }
  FUN_015b92d0();
  FUN_00d50b20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return;
}

