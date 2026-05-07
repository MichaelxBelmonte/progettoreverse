// Function: FUN_00e3d570
// Address: 00e3d570
// Size: 810 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00e3d570(float *param_1,uint64_t param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  float *pfVar22;
  float *pfVar23;
  int64_t this_ptr;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  int64_t lVar27;
  float *pfVar28;
  uint32_t uVar29;
  float fVar30;
  
  lVar27 = (int64_t)*(int *)(this_ptr + 0xc);
  pfVar2 = param_1 + lVar27;
  (**(code **)(g_02786500 + 0x20))((float)(*(int *)(this_ptr + 0xc) >> 1));
  FUN_00e83530();
  uVar29 = (**(code **)(g_02786500 + 0x20))((float)(*(int *)(this_ptr + 0xc) >> 1));
  FUN_00e83530(uVar29,param_2);
  uVar5 = *(uint *)(this_ptr + 0xc);
  uVar20 = (uint64_t)uVar5;
  fVar30 = g_02390124 / (float)((int)uVar5 >> 1);
  *param_1 = *param_1 * param_1[lVar27] * fVar30;
  param_1[1] = param_1[1] * param_1[lVar27 + 1] * fVar30;
  uVar19 = _UNK_023945ec;
  uVar18 = _UNK_023945e8;
  uVar17 = _UNK_023945e4;
  uVar16 = g_023945e0;
  if (2 < (int)uVar5) {
    uVar24 = 4;
    if (4 < uVar20) {
      uVar24 = uVar20;
    }
    uVar24 = uVar24 - 3;
    uVar21 = 2;
    uVar5 = g_023945e0;
    if (5 < uVar24) {
      uVar25 = (uVar24 >> 1) * 8;
      if ((uVar25 <= -(int64_t)pfVar2 - 9U) && (uVar25 <= -(int64_t)pfVar2 - 0xdU)) {
        pfVar23 = param_1 + 2;
        uVar25 = uVar24 & 0xfffffffffffffffe;
        pfVar22 = param_1 + uVar25 + 3;
        pfVar1 = param_1 + 3;
        pfVar28 = param_1 + uVar25 + 4;
        if (((pfVar28 <= pfVar23 || pfVar22 <= pfVar1) &&
            (((param_1 + uVar25 + lVar27 + 3 <= pfVar23 || pfVar22 <= param_1 + lVar27 + 2 &&
              (param_1 + uVar25 + lVar27 + 4 <= pfVar23 || pfVar22 <= param_1 + lVar27 + 3)) &&
             (param_1 + uVar25 + lVar27 + 3 <= pfVar1 || pfVar28 <= param_1 + lVar27 + 2)))) &&
           (param_1 + uVar25 + lVar27 + 4 <= pfVar1 || pfVar28 <= param_1 + lVar27 + 3)) {
          uVar26 = (uVar24 >> 1) + 1;
          uVar25 = uVar26 & 0x7ffffffffffffffc;
          uVar21 = uVar25 * 2 + 2;
          uVar24 = uVar25;
          do {
            fVar3 = *pfVar23;
            fVar4 = pfVar23[2];
            fVar6 = pfVar23[4];
            fVar7 = pfVar23[6];
            pfVar1 = pfVar23 + lVar27;
            fVar8 = *pfVar1;
            fVar9 = pfVar1[1];
            fVar10 = pfVar1[2];
            fVar11 = pfVar1[3];
            pfVar1 = pfVar23 + lVar27 + 4;
            fVar12 = *pfVar1;
            fVar13 = pfVar1[1];
            fVar14 = pfVar1[2];
            fVar15 = pfVar1[3];
            *pfVar23 = (fVar3 * fVar8 + pfVar23[1] * fVar9) * fVar30;
            pfVar23[1] = (float)((uint)(fVar9 * fVar3 - fVar8 * pfVar23[1]) ^ uVar16) * fVar30;
            pfVar23[2] = (fVar4 * fVar10 + pfVar23[3] * fVar11) * fVar30;
            pfVar23[3] = (float)((uint)(fVar11 * fVar4 - fVar10 * pfVar23[3]) ^ uVar17) * fVar30;
            pfVar23[4] = (fVar6 * fVar12 + pfVar23[5] * fVar13) * fVar30;
            pfVar23[5] = (float)((uint)(fVar13 * fVar6 - fVar12 * pfVar23[5]) ^ uVar18) * fVar30;
            pfVar23[6] = (fVar7 * fVar14 + pfVar23[7] * fVar15) * fVar30;
            pfVar23[7] = (float)((uint)(fVar15 * fVar7 - fVar14 * pfVar23[7]) ^ uVar19) * fVar30;
            pfVar23 = pfVar23 + 8;
            uVar24 = uVar24 - 4;
          } while (uVar24 != 0);
          uVar5 = g_023945e0;
          if (uVar26 == uVar25) goto LAB_00e3d87c;
        }
      }
    }
    do {
      fVar3 = param_1[uVar21];
      uVar24 = uVar21 * 4 | 4;
      fVar4 = *(float *)((int64_t)param_1 + uVar24);
      param_1[uVar21] =
           (*(float *)((int64_t)pfVar2 + uVar24) * fVar4 + pfVar2[uVar21] * fVar3) * fVar30;
      *(float *)((int64_t)param_1 + uVar24) =
           (float)((uint)(fVar3 * *(float *)((int64_t)pfVar2 + uVar24) - fVar4 * pfVar2[uVar21]) ^
                  uVar5) * fVar30;
      uVar21 = uVar21 + 2;
    } while (uVar21 < uVar20);
  }
LAB_00e3d87c:
  FUN_00e83640(fVar30,param_1);
  return;
}

