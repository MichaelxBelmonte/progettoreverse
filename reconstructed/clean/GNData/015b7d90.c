// Function: FUN_015b7d90
// Address: 015b7d90
// Size: 511 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015b7d90(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  float fVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  float fVar11;
  uint8_t auVar12 [16];
  float fVar13;
  uint8_t auVar14 [16];
  int64_t local_30;
  char local_28;
  
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  auVar12 = g_02416630;
  uVar1 = *(uint *)(arg1 + 0x44);
  uVar10 = (uint64_t)uVar1;
  if ((int)uVar1 < 1) goto LAB_015b7f6f;
  uVar2 = *(uint64_t *)(*(int64_t *)(arg1 + 0x50) + 0x10);
  uVar3 = *(uint64_t *)(*(int64_t *)(arg1 + 0x58) + 0x10);
  uVar4 = *(uint64_t *)(local_30 + 0x10);
  if (uVar1 < 4) {
    uVar9 = 0;
  }
  else {
    uVar6 = uVar4 + uVar10 * 4;
    uVar9 = 0;
    if ((uVar2 + uVar10 * 4 <= uVar4 || uVar6 <= uVar2) &&
       (uVar3 + uVar10 * 4 <= uVar4 || uVar6 <= uVar3)) {
      uVar9 = (uint64_t)(uVar1 & 0xfffffffc);
      uVar6 = (uVar9 - 4 >> 2) + 1;
      if (uVar9 - 4 == 0) {
        lVar8 = 0;
LAB_015b7f4d:
        auVar12 = divps(*(uint8_t (*) [16])(uVar2 + lVar8 * 4),
                        *(uint8_t (*) [16])(uVar3 + lVar8 * 4));
        auVar12 = maxps(g_02416630,auVar12);
        *(uint8_t (*) [16])(uVar4 + lVar8 * 4) = auVar12;
      }
      else {
        lVar7 = -(uVar6 & 0xfffffffffffffffe);
        lVar8 = 0;
        do {
          auVar14 = divps(*(uint8_t (*) [16])(uVar2 + lVar8 * 4),
                          *(uint8_t (*) [16])(uVar3 + lVar8 * 4));
          auVar14 = maxps(auVar12,auVar14);
          *(uint8_t (*) [16])(uVar4 + lVar8 * 4) = auVar14;
          auVar14 = divps(*(uint8_t (*) [16])(uVar2 + 0x10 + lVar8 * 4),
                          *(uint8_t (*) [16])(uVar3 + 0x10 + lVar8 * 4));
          auVar14 = maxps(auVar12,auVar14);
          *(uint8_t (*) [16])(uVar4 + 0x10 + lVar8 * 4) = auVar14;
          lVar8 = lVar8 + 8;
          lVar7 = lVar7 + 2;
        } while (lVar7 != 0);
        if ((uVar6 & 1) != 0) goto LAB_015b7f4d;
      }
      if (uVar9 == uVar10) goto LAB_015b7f6f;
    }
  }
  uVar6 = ~uVar9;
  if ((uVar1 & 1) != 0) {
    fVar11 = *(float *)(uVar2 + uVar9 * 4) / *(float *)(uVar3 + uVar9 * 4);
    fVar5 = g_0240d16c;
    if (g_0240d16c <= fVar11) {
      fVar5 = fVar11;
    }
    *(float *)(uVar4 + uVar9 * 4) = fVar5;
    uVar9 = uVar9 | 1;
  }
  fVar5 = g_0240d16c;
  if (uVar6 + uVar10 != 0) {
    do {
      fVar13 = *(float *)(uVar2 + uVar9 * 4) / *(float *)(uVar3 + uVar9 * 4);
      fVar11 = fVar5;
      if (fVar5 <= fVar13) {
        fVar11 = fVar13;
      }
      *(float *)(uVar4 + uVar9 * 4) = fVar11;
      fVar13 = *(float *)(uVar2 + 4 + uVar9 * 4) / *(float *)(uVar3 + 4 + uVar9 * 4);
      fVar11 = fVar5;
      if (fVar5 <= fVar13) {
        fVar11 = fVar13;
      }
      *(float *)(uVar4 + 4 + uVar9 * 4) = fVar11;
      uVar9 = uVar9 + 2;
    } while (uVar10 != uVar9);
  }
LAB_015b7f6f:
  *this_ptr = local_30;
  *(void*)(this_ptr + 1) = 1;
  return;
}

