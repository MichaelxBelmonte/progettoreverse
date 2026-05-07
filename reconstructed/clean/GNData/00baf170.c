// Function: FUN_00baf170
// Address: 00baf170
// Size: 895 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00baf170(int param_1,int param_2,int64_t param_3,int param_4)

{
  uint16_t uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  ushort uVar12;
  short sVar13;
  ushort uVar15;
  short sVar16;
  int iVar17;
  int64_t arg1;
  byte bVar18;
  short sVar19;
  uint uVar20;
  int64_t this_ptr;
  uint uVar21;
  ushort uVar22;
  float fVar23;
  ushort auStack_34 [2];
  ushort uVar14;
  
  ___bzero();
  uVar6 = (uint64_t)*(ushort *)(this_ptr + 0x3c);
  if (0 < (short)*(ushort *)(this_ptr + 0x3c)) {
    lVar8 = *(int64_t *)(this_ptr + 0x78);
    lVar10 = 0;
    do {
      uVar1 = *(void*)(arg1 + lVar10 * 4);
      bVar18 = *(byte *)(arg1 + 2 + lVar10 * 4);
      if (0x57 < bVar18) {
        bVar18 = 0x58;
      }
      auStack_34[lVar10] = (ushort)bVar18;
      *(void*)(lVar8 + lVar10 * 2) = uVar1;
      lVar10 = lVar10 + 1;
      uVar6 = (uint64_t)*(short *)(this_ptr + 0x3c);
    } while (lVar10 < (int64_t)uVar6);
  }
  uVar21 = (uint)(short)uVar6;
  iVar17 = uVar21 * 4;
  uVar5 = (uint)*(short *)(this_ptr + 0x70);
  uVar20 = uVar21;
  if (iVar17 < (int)uVar5) {
    do {
      if (0 < (short)uVar6) {
        lVar8 = *(int64_t *)(this_ptr + 0x78);
        lVar10 = 0;
        uVar20 = uVar21;
        do {
          lVar7 = (int64_t)iVar17;
          bVar18 = *(byte *)(arg1 + lVar7);
          *(ushort *)(lVar8 + (int64_t)(int)uVar21 * 2 + lVar10 * 2) = bVar18 & 0xf;
          sVar16 = *(short *)(this_ptr + 0x3c);
          *(ushort *)(lVar8 + (int64_t)(int)(uVar20 + (int)sVar16) * 2) = (ushort)(bVar18 >> 4);
          iVar9 = (int)*(short *)(this_ptr + 0x3c) + (int)sVar16;
          bVar18 = *(byte *)(arg1 + 1 + lVar7);
          *(ushort *)(lVar8 + (int64_t)(int)(uVar20 + iVar9) * 2) = bVar18 & 0xf;
          iVar9 = *(short *)(this_ptr + 0x3c) + iVar9;
          *(ushort *)(lVar8 + (int64_t)(int)(uVar20 + iVar9) * 2) = (ushort)(bVar18 >> 4);
          iVar9 = *(short *)(this_ptr + 0x3c) + iVar9;
          bVar18 = *(byte *)(arg1 + 2 + lVar7);
          *(ushort *)(lVar8 + (int64_t)(int)(uVar20 + iVar9) * 2) = bVar18 & 0xf;
          iVar9 = *(short *)(this_ptr + 0x3c) + iVar9;
          *(ushort *)(lVar8 + (int64_t)(int)(uVar20 + iVar9) * 2) = (ushort)(bVar18 >> 4);
          iVar9 = *(short *)(this_ptr + 0x3c) + iVar9;
          iVar17 = iVar17 + 4;
          bVar18 = *(byte *)(arg1 + 3 + lVar7);
          *(ushort *)(lVar8 + (int64_t)(int)(uVar20 + iVar9) * 2) = bVar18 & 0xf;
          *(ushort *)(lVar8 + (int64_t)(int)(*(short *)(this_ptr + 0x3c) + iVar9 + uVar20) * 2) =
               (ushort)(bVar18 >> 4);
          lVar10 = lVar10 + 1;
          uVar6 = (uint64_t)*(short *)(this_ptr + 0x3c);
          uVar20 = uVar20 + 1;
        } while (lVar10 < (int64_t)uVar6);
        uVar5 = (uint)*(ushort *)(this_ptr + 0x70);
      }
      uVar21 = uVar21 + (short)uVar6 * 8;
      uVar20 = (int)(short)uVar6;
    } while (iVar17 < (short)uVar5);
  }
  uVar22 = (ushort)uVar6;
  sVar16 = *(short *)(this_ptr + 0x6e);
  uVar21 = (uint)sVar16;
  if ((int)uVar20 < (int)(uVar20 * uVar21)) {
    lVar8 = *(int64_t *)(this_ptr + 0x78);
    uVar11 = (uint64_t)(short)uVar22;
    do {
      uVar22 = *(ushort *)(lVar8 + uVar11 * 2);
      lVar7 = 0;
      lVar10 = (int64_t)
               (int)((int)uVar11 - (((uint)(uVar11 >> 0x1f) & 1) + (int)uVar11 & 0xfffffffe));
      if ((short)uVar6 < 2) {
        lVar10 = lVar7;
      }
      uVar2 = *(ushort *)(&g_023d8d70 + (int64_t)(short)auStack_34[lVar10] * 2);
      uVar12 = (short)uVar2 >> 2;
      if ((uVar22 & 1) == 0) {
        uVar12 = uVar22 & 1;
      }
      uVar15 = (short)uVar2 >> 1;
      if ((uVar22 & 2) == 0) {
        uVar15 = uVar22 & 2;
      }
      uVar14 = uVar22 & 4;
      if ((uVar22 & 4) != 0) {
        uVar14 = uVar2;
      }
      sVar13 = uVar14 + uVar15 + uVar12 + ((short)uVar2 >> 3);
      sVar16 = -sVar13;
      if ((uVar22 & 8) == 0) {
        sVar16 = sVar13;
      }
      sVar13 = *(short *)(lVar8 + (int64_t)(int)uVar20 * -2 + uVar11 * 2);
      sVar19 = sVar16 + sVar13;
      if (SCARRY2(sVar16,sVar13)) {
        sVar19 = (-1 < (short)(sVar16 + sVar13)) + 0x7fff;
      }
      uVar22 = auStack_34[lVar10] + *(short *)(&g_023d8e30 + (uint64_t)(uVar22 & 0xf) * 2);
      auStack_34[lVar10] = uVar22;
      if (((short)uVar22 < 0) || (lVar7 = 0x58, 0x58 < (short)uVar22)) {
        auStack_34[lVar10] = (ushort)lVar7;
      }
      *(short *)(lVar8 + uVar11 * 2) = sVar19;
      uVar11 = uVar11 + 1;
      uVar22 = *(ushort *)(this_ptr + 0x3c);
      uVar6 = (uint64_t)uVar22;
      sVar16 = *(short *)(this_ptr + 0x6e);
      uVar21 = (uint)sVar16;
      uVar20 = (uint)(short)uVar22;
    } while ((int64_t)uVar11 < (int64_t)(int)(uVar20 * uVar21));
  }
  fVar4 = g_023d8d50;
  fVar3 = g_023d4ff4;
  if ((0 < sVar16) && (0 < (short)uVar22)) {
    lVar8 = 0;
    uVar6 = 0;
    do {
      if (((int64_t)param_2 <= (int64_t)uVar6) && ((int64_t)uVar6 < (int64_t)param_1)) {
        uVar11 = 0;
        do {
          lVar10 = *(int64_t *)(param_3 + uVar11 * 8);
          if (lVar10 != 0) {
            sVar16 = *(short *)(*(int64_t *)(this_ptr + 0x78) + lVar8 + uVar11 * 2);
            fVar23 = (float)(int)sVar16;
            if (sVar16 < 1) {
              fVar23 = fVar23 * fVar3;
            }
            else {
              fVar23 = fVar23 / fVar4;
            }
            *(float *)(lVar10 + (int64_t)((param_4 - param_2) + (int)uVar6) * 4) = fVar23;
          }
          uVar11 = uVar11 + 1;
        } while (uVar20 != uVar11);
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + (int64_t)(int)uVar20 * 2;
    } while (uVar6 != uVar21);
  }
  return;
}

