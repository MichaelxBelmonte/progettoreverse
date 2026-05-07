// Function: FUN_00e7d000
// Address: 00e7d000
// Size: 548 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00e7d000(double param_1,double param_2)

{
  uint8_t auVar1 [16];
  uint64_t uVar2;
  double dVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint64_t uVar18;
  uint64_t in_XMM0_Qb;
  uint8_t auVar19 [16];
  uint32_t uVar20;
  uint32_t uVar21;
  double dVar22;
  double dVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  double dVar26;
  uint8_t unaff_XMM6 [16];
  uint8_t auVar27 [16];
  
  if (NAN(param_1)) {
    return 0;
  }
  if (((g_023e1698 <= (double)(g_023908f0 & (uint64_t)param_1)) || (g_023934c0 <= param_1))
     || (param_1 <= g_023e16a8)) {
    uVar10 = 0x17fffffff;
    if (param_1 < 0.0) {
      return 0x180000000;
    }
  }
  else {
    uVar10 = (_UNK_023945b8 ^ in_XMM0_Qb) & in_XMM0_Qb;
    auVar19._0_8_ = ~-(uint64_t)(param_1 < 0.0) & (uint64_t)param_1;
    auVar19._8_8_ = 0;
    auVar1._8_4_ = (int)uVar10;
    auVar1._0_8_ = (g_023945b0 ^ (uint64_t)param_1) & -(uint64_t)(param_1 < 0.0);
    auVar1._12_4_ = (int)(uVar10 >> 0x20);
    auVar27 = roundsd(unaff_XMM6,auVar19 | auVar1,9);
    uVar10 = 0;
    uVar11 = 1;
    uVar14 = 0;
    uVar4 = (int)(_UNK_023908f8 & in_XMM0_Qb);
    uVar5 = (int)((_UNK_023908f8 & in_XMM0_Qb) >> 0x20);
    dVar22 = g_0238fee8;
    uVar15 = 1;
    uVar12 = 0;
    uVar9 = 0;
    uVar13 = 1;
    dVar3 = (double)(g_023908f0 & (uint64_t)param_1) - auVar27._0_8_;
    uVar24 = 0;
    uVar25 = 0;
    do {
      uVar16 = uVar9;
      uVar9 = uVar15;
      uVar21 = uVar5;
      uVar20 = uVar4;
      if ((double)((uint64_t)
                   ((double)(int)uVar14 / (double)(int)uVar11 - SUB168(auVar19 | auVar1,0)) &
                  g_023908f0) <= param_2) {
        uVar15 = -uVar14;
        if (0.0 <= param_1) {
          uVar15 = uVar14;
        }
        if (uVar15 == 0) {
          uVar15 = 0;
          uVar10 = 1;
          goto LAB_00e7d217;
        }
        uVar12 = -uVar11;
        if (0 < (int)uVar11) {
          uVar12 = uVar11;
        }
        uVar10 = (uint64_t)uVar12;
        uVar12 = -uVar15;
        if (-1 < (int)uVar11) {
          uVar12 = uVar15;
        }
        uVar15 = uVar12;
        if ((uVar12 & 1) == 0) goto LAB_00e7d170;
        goto LAB_00e7d185;
      }
      dVar26 = auVar27._0_8_;
      uVar14 = uVar9 * (int)dVar26 + uVar12;
      auVar27._8_4_ = uVar24;
      auVar27._0_8_ = dVar22 / dVar3;
      auVar27._12_4_ = uVar25;
      auVar27 = roundsd(ZEXT816(0),auVar27,9);
      dVar23 = dVar22 - dVar3 * auVar27._0_8_;
      uVar11 = (int)dVar26 * uVar16 + uVar13;
      uVar4 = uVar24;
      uVar5 = uVar25;
      dVar22 = dVar3;
      uVar15 = uVar14;
      uVar12 = uVar9;
      uVar9 = uVar11;
      uVar13 = uVar16;
      dVar3 = dVar23;
      uVar24 = uVar20;
      uVar25 = uVar21;
    } while (uVar11 != 0);
  }
  return uVar10;
  while( true ) {
    uVar15 = (int)uVar12 >> 1;
    uVar10 = uVar10 >> 1;
    uVar9 = uVar12 & 2;
    uVar12 = uVar15;
    if (uVar9 != 0) break;
LAB_00e7d170:
    uVar15 = uVar12;
    if ((uVar10 & 1) != 0) break;
  }
LAB_00e7d185:
  uVar8 = (uint64_t)-uVar15;
  if (0 < (int)uVar15) {
    uVar8 = (uint64_t)uVar15;
  }
  do {
    uVar18 = uVar8;
    uVar8 = uVar18 >> 1;
    uVar7 = uVar10;
  } while ((uVar18 & 1) == 0);
  do {
    uVar8 = uVar7;
    uVar7 = (uint64_t)(uint)((int)uVar8 >> 1);
  } while ((uVar8 & 1) == 0);
  if (((int)uVar18 != 1) && ((int)uVar8 != 1)) {
    while( true ) {
      iVar17 = (int)uVar18;
      iVar6 = (int)uVar8;
      if (iVar17 == iVar6) break;
      uVar12 = iVar17 - iVar6;
      if (uVar12 == 0 || iVar17 < iVar6) {
        uVar7 = (uint64_t)(uint)(iVar6 - iVar17);
        do {
          uVar8 = (uint64_t)(uint)((int)uVar7 >> 1);
          uVar2 = uVar7 & 2;
          uVar7 = uVar8;
        } while (uVar2 == 0);
      }
      else {
        do {
          uVar13 = (int)uVar12 >> 1;
          uVar9 = uVar12 & 2;
          uVar12 = uVar13;
        } while (uVar9 == 0);
        uVar18 = (uint64_t)uVar13;
      }
    }
    if (1 < iVar17) {
      uVar15 = (int)uVar15 / iVar17;
      uVar10 = (int64_t)(int)uVar10 / (int64_t)iVar17 & 0xffffffff;
    }
  }
LAB_00e7d217:
  return (uint64_t)uVar15 | uVar10 << 0x20;
}

