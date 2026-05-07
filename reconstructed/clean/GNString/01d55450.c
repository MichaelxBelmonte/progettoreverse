// Function: FUN_01d55450
// Address: 01d55450
// Size: 673 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d55450(void)

{
  byte bVar1;
  byte bVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int64_t lVar10;
  int64_t this_ptr;
  ushort uVar11;
  int iVar12;
  byte unaff_R14B;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  
  if (*(int64_t *)(this_ptr + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(*(int64_t *)(this_ptr + 0x20) + 0xc);
  }
  lVar3 = *(int64_t *)(this_ptr + 0x10);
  fVar13 = *(float *)(lVar3 + 0x20) * *(float *)(lVar3 + 0x48);
  if (0.0 < fVar13) {
    fVar16 = *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x1c);
    fVar19 = 0.0;
    iVar12 = 0;
    fVar17 = g_02394220;
    dVar18 = g_023942d0;
    do {
      if (g_0239424c < fVar16) {
        iVar9 = 0;
        fVar14 = 0.0;
        do {
          lVar3 = *(int64_t *)(this_ptr + 0x10);
          fVar15 = *(float *)(lVar3 + 0x1c) * *(float *)(lVar3 + 0x48);
          if ((fVar14 < fVar15) && (fVar19 < *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x20))) {
            lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x50) + 8);
            lVar10 = (int64_t)((int)fVar15 * iVar12 + iVar9);
            bVar6 = *(byte *)(lVar4 + lVar10 * 4);
            bVar1 = *(byte *)(lVar4 + 1 + lVar10 * 4);
            bVar5 = *(byte *)(lVar4 + 2 + lVar10 * 4);
            bVar2 = *(byte *)(lVar4 + 3 + lVar10 * 4);
            if ((byte)(bVar2 + 1) < 2) {
              lVar3 = *(int64_t *)(lVar3 + 0x28);
            }
            else {
              uVar11 = (ushort)bVar2;
              bVar5 = (byte)(((uint)(ushort)bVar5 * 0x100 - (uint)(ushort)bVar5 & 0xffff) /
                            (uint)uVar11);
              bVar1 = (byte)(((uint)bVar1 * 0xff) / (uint)uVar11);
              bVar6 = (byte)(((uint)bVar6 * 0xff) / (uint)uVar11);
              lVar3 = *(int64_t *)(lVar3 + 0x28);
            }
            unaff_R14B = bVar2;
            if ((((lVar3 != 0) &&
                 (bVar5 == (byte)(int)((double)(*(float *)(lVar3 + 0x18) * fVar17) + dVar18))) &&
                (bVar1 == (byte)(int)((double)(*(float *)(lVar3 + 0x14) * fVar17) + dVar18))) &&
               (unaff_R14B = 0,
               bVar6 != (byte)(int)((double)(*(float *)(lVar3 + 0x10) * fVar17) + dVar18))) {
              unaff_R14B = bVar2;
            }
          }
          lVar3 = *(int64_t *)(this_ptr + 0x18);
          fVar15 = *(float *)(lVar3 + 0x1c) * *(float *)(lVar3 + 0x48);
          if ((fVar14 < fVar15) && (fVar19 < *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x20))) {
            lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x50) + 8);
            lVar10 = (int64_t)((int)fVar15 * iVar12 + iVar9);
            uVar8 = (uint)unaff_R14B;
            *(char *)(lVar4 + lVar10 * 4) = (char)(((uVar7 >> 0x10 & 0xff) * uVar8) / 0xff);
            *(char *)(lVar4 + 1 + lVar10 * 4) = (char)(((uVar7 >> 8 & 0xff) * uVar8) / 0xff);
            *(char *)(lVar4 + 2 + lVar10 * 4) = (char)(((uVar7 & 0xff) * uVar8) / 0xff);
            *(byte *)(lVar4 + 3 + lVar10 * 4) = unaff_R14B;
            if (**(int64_t **)(lVar3 + 0x50) != 0) {
              _CGImageRelease();
              dVar18 = g_023942d0;
              fVar17 = g_02394220;
              **(void**)(lVar3 + 0x50) = 0;
            }
          }
          iVar9 = iVar9 + 1;
          fVar14 = (float)iVar9;
        } while (fVar14 < fVar16);
      }
      iVar12 = iVar12 + 1;
      fVar19 = (float)iVar12;
    } while (fVar19 < fVar13);
  }
  return;
}

