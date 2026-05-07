// Function: FUN_00efbaff
// Address: 00efbaff
// Size: 763 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00efbaff(int param_1,int64_t param_2,int param_3)

{
  int64_t lVar1;
  uint *puVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  uint8_t auVar7 [16];
  uint uVar8;
  int iVar9;
  int64_t lVar10;
  int iVar11;
  uint uVar12;
  int64_t arg1;
  int64_t this_ptr;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  
  iVar16 = (int)*(int64_t *)(this_ptr + 8);
  if (0xe0000000 < (uint)(param_3 - iVar16)) {
    uVar3 = *(uint *)(param_2 + 0x1c);
    uVar13 = 1 << (*(byte *)(param_2 + 4) & 0x1f);
    uVar12 = 1 << ((char)*(void*)(param_2 + 8) - (5 < uVar3) & 0x1fU);
    uVar14 = param_1 - iVar16;
    uVar8 = uVar12 - 1 & uVar14;
    uVar15 = 2;
    if (2 < uVar12) {
      uVar15 = uVar12;
    }
    iVar16 = 0;
    if (1 < uVar8) {
      uVar15 = 0;
    }
    if (uVar12 < uVar13) {
      uVar12 = uVar13;
    }
    uVar14 = uVar14 - (uVar12 + uVar8 + uVar15);
    *(uint64_t *)(this_ptr + 8) = *(int64_t *)(this_ptr + 8) + (uint64_t)uVar14;
    *(int64_t *)(this_ptr + 0x10) = *(int64_t *)(this_ptr + 0x10) + (uint64_t)uVar14;
    uVar15 = uVar14 + 2;
    iVar11 = *(uint *)(this_ptr + 0x1c) - uVar14;
    if (*(uint *)(this_ptr + 0x1c) < uVar15) {
      iVar11 = 2;
    }
    *(int *)(this_ptr + 0x1c) = iVar11;
    iVar11 = *(uint *)(this_ptr + 0x18) - uVar14;
    if (*(uint *)(this_ptr + 0x18) < uVar15) {
      iVar11 = 2;
    }
    *(int *)(this_ptr + 0x18) = iVar11;
    *(int *)(this_ptr + 0x20) = *(int *)(this_ptr + 0x20) + 1;
    uVar4 = *(uint64_t *)(arg1 + 0x10);
    *(uint64_t *)(arg1 + 0x20) = uVar4;
    iVar9 = 1 << (*(byte *)(param_2 + 0xc) & 0x1f);
    iVar11 = iVar9 + 0xf;
    if (-1 < iVar9) {
      iVar11 = iVar9;
    }
    if (0xf < iVar9) {
      lVar5 = *(int64_t *)(this_ptr + 0x70);
      iVar9 = 0;
      do {
        lVar1 = lVar5 + (int64_t)iVar16 * 4;
        lVar10 = 0;
        do {
          puVar2 = (uint *)(lVar1 + lVar10 * 4);
          uVar12 = *puVar2;
          uVar8 = puVar2[1];
          uVar13 = puVar2[2];
          uVar6 = puVar2[3];
          puVar2 = (uint *)(lVar1 + lVar10 * 4);
          *puVar2 = -(uint)(((uVar12 < uVar15) * uVar15 | (uVar12 >= uVar15) * uVar12) == uVar12) &
                    uVar12 - uVar14;
          puVar2[1] = -(uint)(((uVar8 < uVar15) * uVar15 | (uVar8 >= uVar15) * uVar8) == uVar8) &
                      uVar8 - uVar14;
          puVar2[2] = -(uint)(((uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13) == uVar13)
                      & uVar13 - uVar14;
          puVar2[3] = -(uint)(((uVar6 < uVar15) * uVar15 | (uVar6 >= uVar15) * uVar6) == uVar6) &
                      uVar6 - uVar14;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0x10);
        iVar16 = iVar16 + 0x10;
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar11 >> 4);
    }
    auVar7 = g_0240e2d0;
    if ((*(int *)(this_ptr + 0x8c) != 0) ||
       ((uVar3 != 1 && ((2 < uVar3 - 3 || (*(int *)(param_2 + 0x90) != 1)))))) {
      iVar11 = 1 << (*(byte *)(param_2 + 8) & 0x1f);
      iVar16 = iVar11 + 0xf;
      if (-1 < iVar11) {
        iVar16 = iVar11;
      }
      lVar5 = *(int64_t *)(this_ptr + 0x80);
      if (uVar3 == 6) {
        if (0xf < iVar11) {
          iVar11 = 0;
          iVar9 = 0;
          do {
            lVar1 = lVar5 + (int64_t)iVar11 * 4;
            lVar10 = 0;
            do {
              puVar2 = (uint *)(lVar1 + lVar10 * 4);
              uVar3 = *puVar2;
              uVar12 = puVar2[1];
              uVar8 = puVar2[2];
              uVar13 = puVar2[3];
              auVar18._0_4_ =
                   -(uint)(((uVar3 < uVar15) * uVar15 | (uVar3 >= uVar15) * uVar3) == uVar3);
              auVar18._4_4_ =
                   -(uint)(((uVar12 < uVar15) * uVar15 | (uVar12 >= uVar15) * uVar12) == uVar12);
              auVar18._8_4_ =
                   -(uint)(((uVar8 < uVar15) * uVar15 | (uVar8 >= uVar15) * uVar8) == uVar8);
              auVar18._12_4_ =
                   -(uint)(((uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13) == uVar13);
              auVar19._0_4_ = -(uint)(uVar3 == auVar7._0_4_);
              auVar19._4_4_ = -(uint)(uVar12 == auVar7._4_4_);
              auVar19._8_4_ = -(uint)(uVar8 == auVar7._8_4_);
              auVar19._12_4_ = -(uint)(uVar13 == auVar7._12_4_);
              auVar17._0_4_ = uVar3 - uVar14;
              auVar17._4_4_ = uVar12 - uVar14;
              auVar17._8_4_ = uVar8 - uVar14;
              auVar17._12_4_ = uVar13 - uVar14;
              auVar19 = blendvps(auVar18 & auVar17,auVar7,auVar19);
              *(uint8_t (*) [16])(lVar1 + lVar10 * 4) = auVar19;
              lVar10 = lVar10 + 4;
            } while (lVar10 != 0x10);
            iVar11 = iVar11 + 0x10;
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar16 >> 4);
        }
      }
      else if (0xf < iVar11) {
        iVar11 = 0;
        iVar9 = 0;
        do {
          lVar1 = lVar5 + (int64_t)iVar11 * 4;
          lVar10 = 0;
          do {
            puVar2 = (uint *)(lVar1 + lVar10 * 4);
            uVar3 = *puVar2;
            uVar12 = puVar2[1];
            uVar8 = puVar2[2];
            uVar13 = puVar2[3];
            puVar2 = (uint *)(lVar1 + lVar10 * 4);
            *puVar2 = -(uint)(((uVar3 < uVar15) * uVar15 | (uVar3 >= uVar15) * uVar3) == uVar3) &
                      uVar3 - uVar14;
            puVar2[1] = -(uint)(((uVar12 < uVar15) * uVar15 | (uVar12 >= uVar15) * uVar12) == uVar12
                               ) & uVar12 - uVar14;
            puVar2[2] = -(uint)(((uVar8 < uVar15) * uVar15 | (uVar8 >= uVar15) * uVar8) == uVar8) &
                        uVar8 - uVar14;
            puVar2[3] = -(uint)(((uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13) == uVar13
                               ) & uVar13 - uVar14;
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0x10);
          iVar11 = iVar11 + 0x10;
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar16 >> 4);
      }
    }
    if (*(int *)(this_ptr + 0x30) != 0) {
      iVar11 = 1 << ((byte)*(int *)(this_ptr + 0x30) & 0x1f);
      iVar16 = iVar11 + 0xf;
      if (-1 < iVar11) {
        iVar16 = iVar11;
      }
      if (0xf < iVar11) {
        lVar5 = *(int64_t *)(this_ptr + 0x78);
        iVar11 = 0;
        iVar9 = 0;
        do {
          lVar1 = lVar5 + (int64_t)iVar11 * 4;
          lVar10 = 0;
          do {
            puVar2 = (uint *)(lVar1 + lVar10 * 4);
            uVar3 = *puVar2;
            uVar12 = puVar2[1];
            uVar8 = puVar2[2];
            uVar13 = puVar2[3];
            puVar2 = (uint *)(lVar1 + lVar10 * 4);
            *puVar2 = -(uint)(((uVar3 < uVar15) * uVar15 | (uVar3 >= uVar15) * uVar3) == uVar3) &
                      uVar3 - uVar14;
            puVar2[1] = -(uint)(((uVar12 < uVar15) * uVar15 | (uVar12 >= uVar15) * uVar12) == uVar12
                               ) & uVar12 - uVar14;
            puVar2[2] = -(uint)(((uVar8 < uVar15) * uVar15 | (uVar8 >= uVar15) * uVar8) == uVar8) &
                        uVar8 - uVar14;
            puVar2[3] = -(uint)(((uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13) == uVar13
                               ) & uVar13 - uVar14;
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0x10);
          iVar11 = iVar11 + 0x10;
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar16 >> 4);
      }
    }
    if (uVar4 < *(uint64_t *)(arg1 + 0x18)) {
      *(uint64_t *)(arg1 + 0x20) = *(uint64_t *)(arg1 + 0x18);
    }
    iVar16 = *(uint *)(this_ptr + 0x2c) - uVar14;
    if (*(uint *)(this_ptr + 0x2c) < uVar14) {
      iVar16 = 0;
    }
    *(int *)(this_ptr + 0x2c) = iVar16;
    *(void*)(this_ptr + 0x28) = 0;
    *(void*)(this_ptr + 0xf8) = 0;
  }
  return;
}

