// ===================================================================
// GNOverloudConvolver — Complete reconstructed pseudocode
// 11 functions
// ===================================================================


// ============================================================
// 00c27bd0
// ============================================================
// Function: FUN_00c27bd0
// Address: 00c27bd0
// Size: 5114 bytes
// Class: GNOverloudConvolver

void FUN_00c27bd0(uint64_t param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t in_XMM2 [16];
  uint8_t auVar24 [16];
  uint8_t in_XMM3 [16];
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5d0))();
  if (local_60 == '\0') {
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_68 == 0) {
    return;
  }
  lVar7 = *arg1;
  if (lVar7 != 0) {
    if (param_2 == 0) {
      lVar9 = 0;
      while( true ) {
        iVar4 = *(int *)(lVar7 + 0x18);
        iVar6 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 >> 2 <= (int)lVar9) break;
        iVar4 = *(int *)(*(int64_t *)(lVar7 + 0x10) + lVar9 * 4);
        lVar8 = *(int64_t *)(local_68 + 0xd8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *(void*)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar4) = 0;
        lVar9 = lVar9 + 1;
        FUN_00d50b20();
      }
    }
    else {
      lVar9 = 0;
      while( true ) {
        iVar4 = *(int *)(lVar7 + 0x18);
        iVar6 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 >> 2 <= (int)lVar9) break;
        iVar4 = *(int *)(*(int64_t *)(lVar7 + 0x10) + lVar9 * 4);
        lVar8 = *(int64_t *)(local_68 + 0xd8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *(void*)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar4) = 1;
        lVar9 = lVar9 + 1;
        FUN_00d50b20();
      }
    }
  }
  lVar7 = *(int64_t *)(local_68 + 0xd8);
  if ((*(uint *)(*arg1 + 0x18) & 0xfffffffc) == 4) {
    if (lVar7 != 0) {
      uVar3 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar3) {
        lVar9 = *(int64_t *)(lVar7 + 0x10);
        if (7 < uVar3) {
          uVar11 = (uint64_t)(uVar3 & 0xfffffff8);
          uVar10 = (uVar11 - 8 >> 3) + 1;
          if (uVar11 - 8 == 0) {
            auVar15 = (uint8_t  [16])0x0;
            lVar8 = 0;
            auVar19 = (uint8_t  [16])0x0;
          }
          else {
            lVar13 = -(uVar10 & 0xfffffffffffffffe);
            auVar15 = (uint8_t  [16])0x0;
            lVar8 = 0;
            auVar19 = (uint8_t  [16])0x0;
            do {
              auVar24 = pmovzxbd(in_XMM2,*(void*)(lVar9 + lVar8));
              in_XMM2._0_4_ = auVar24._0_4_ + auVar15._0_4_;
              in_XMM2._4_4_ = auVar24._4_4_ + auVar15._4_4_;
              in_XMM2._8_4_ = auVar24._8_4_ + auVar15._8_4_;
              in_XMM2._12_4_ = auVar24._12_4_ + auVar15._12_4_;
              auVar24 = pmovzxbd(in_XMM3,*(void*)(lVar9 + 4 + lVar8));
              in_XMM3._0_4_ = auVar24._0_4_ + auVar19._0_4_;
              in_XMM3._4_4_ = auVar24._4_4_ + auVar19._4_4_;
              in_XMM3._8_4_ = auVar24._8_4_ + auVar19._8_4_;
              in_XMM3._12_4_ = auVar24._12_4_ + auVar19._12_4_;
              auVar24 = pmovzxbd(auVar15,*(void*)(lVar9 + 8 + lVar8));
              auVar22 = pmovzxbd(auVar19,*(void*)(lVar9 + 0xc + lVar8));
              auVar15._0_4_ = auVar24._0_4_ + in_XMM2._0_4_;
              auVar15._4_4_ = auVar24._4_4_ + in_XMM2._4_4_;
              auVar15._8_4_ = auVar24._8_4_ + in_XMM2._8_4_;
              auVar15._12_4_ = auVar24._12_4_ + in_XMM2._12_4_;
              auVar19._0_4_ = auVar22._0_4_ + in_XMM3._0_4_;
              auVar19._4_4_ = auVar22._4_4_ + in_XMM3._4_4_;
              auVar19._8_4_ = auVar22._8_4_ + in_XMM3._8_4_;
              auVar19._12_4_ = auVar22._12_4_ + in_XMM3._12_4_;
              lVar8 = lVar8 + 0x10;
              lVar13 = lVar13 + 2;
            } while (lVar13 != 0);
            auVar16 = auVar15;
            auVar20 = auVar19;
            if ((uVar10 & 1) == 0) goto LAB_00c27df0;
          }
          auVar24 = pmovzxbd(in_XMM2,*(void*)(lVar9 + 4 + lVar8));
          auVar20._0_4_ = auVar19._0_4_ + auVar24._0_4_;
          auVar20._4_4_ = auVar19._4_4_ + auVar24._4_4_;
          auVar20._8_4_ = auVar19._8_4_ + auVar24._8_4_;
          auVar20._12_4_ = auVar19._12_4_ + auVar24._12_4_;
          in_XMM2 = pmovzxbd(auVar24,*(void*)(lVar9 + lVar8));
          auVar16._0_4_ = auVar15._0_4_ + in_XMM2._0_4_;
          auVar16._4_4_ = auVar15._4_4_ + in_XMM2._4_4_;
          auVar16._8_4_ = auVar15._8_4_ + in_XMM2._8_4_;
          auVar16._12_4_ = auVar15._12_4_ + in_XMM2._12_4_;
LAB_00c27df0:
          iVar4 = auVar16._12_4_ + auVar20._12_4_ + auVar16._4_4_ + auVar20._4_4_ +
                  auVar16._8_4_ + auVar20._8_4_ + auVar16._0_4_ + auVar20._0_4_;
          goto joined_r0x00c27e0d;
        }
        uVar11 = 0;
        iVar4 = 0;
        do {
          iVar4 = iVar4 + (uint)*(byte *)(lVar9 + uVar11);
          uVar11 = uVar11 + 1;
joined_r0x00c27e0d:
        } while (uVar11 != uVar3);
        if (iVar4 == 0) goto LAB_00c27e39;
        lVar7 = *(int64_t *)(lVar7 + 0x10);
        if (7 < uVar3) {
          uVar11 = (uint64_t)(uVar3 & 0xfffffff8);
          uVar10 = (uVar11 - 8 >> 3) + 1;
          if (uVar11 - 8 == 0) {
            auVar17 = (uint8_t  [16])0x0;
            lVar9 = 0;
            auVar21 = (uint8_t  [16])0x0;
          }
          else {
            lVar8 = -(uVar10 & 0xfffffffffffffffe);
            auVar17 = (uint8_t  [16])0x0;
            lVar9 = 0;
            auVar21 = (uint8_t  [16])0x0;
            do {
              auVar24 = pmovzxbd(in_XMM2,*(void*)(lVar7 + lVar9));
              in_XMM2._0_4_ = auVar24._0_4_ + auVar17._0_4_;
              in_XMM2._4_4_ = auVar24._4_4_ + auVar17._4_4_;
              in_XMM2._8_4_ = auVar24._8_4_ + auVar17._8_4_;
              in_XMM2._12_4_ = auVar24._12_4_ + auVar17._12_4_;
              auVar24 = pmovzxbd(in_XMM3,*(void*)(lVar7 + 4 + lVar9));
              in_XMM3._0_4_ = auVar24._0_4_ + auVar21._0_4_;
              in_XMM3._4_4_ = auVar24._4_4_ + auVar21._4_4_;
              in_XMM3._8_4_ = auVar24._8_4_ + auVar21._8_4_;
              in_XMM3._12_4_ = auVar24._12_4_ + auVar21._12_4_;
              auVar24 = pmovzxbd(auVar17,*(void*)(lVar7 + 8 + lVar9));
              auVar22 = pmovzxbd(auVar21,*(void*)(lVar7 + 0xc + lVar9));
              auVar17._0_4_ = auVar24._0_4_ + in_XMM2._0_4_;
              auVar17._4_4_ = auVar24._4_4_ + in_XMM2._4_4_;
              auVar17._8_4_ = auVar24._8_4_ + in_XMM2._8_4_;
              auVar17._12_4_ = auVar24._12_4_ + in_XMM2._12_4_;
              auVar21._0_4_ = auVar22._0_4_ + in_XMM3._0_4_;
              auVar21._4_4_ = auVar22._4_4_ + in_XMM3._4_4_;
              auVar21._8_4_ = auVar22._8_4_ + in_XMM3._8_4_;
              auVar21._12_4_ = auVar22._12_4_ + in_XMM3._12_4_;
              lVar9 = lVar9 + 0x10;
              lVar8 = lVar8 + 2;
            } while (lVar8 != 0);
          }
          auVar18 = auVar17;
          auVar23 = auVar21;
          if ((uVar10 & 1) != 0) {
            auVar24 = pmovzxbd(in_XMM2,*(void*)(lVar7 + 4 + lVar9));
            auVar23._0_4_ = auVar21._0_4_ + auVar24._0_4_;
            auVar23._4_4_ = auVar21._4_4_ + auVar24._4_4_;
            auVar23._8_4_ = auVar21._8_4_ + auVar24._8_4_;
            auVar23._12_4_ = auVar21._12_4_ + auVar24._12_4_;
            auVar24 = pmovzxbd(auVar24,*(void*)(lVar7 + lVar9));
            auVar18._0_4_ = auVar17._0_4_ + auVar24._0_4_;
            auVar18._4_4_ = auVar17._4_4_ + auVar24._4_4_;
            auVar18._8_4_ = auVar17._8_4_ + auVar24._8_4_;
            auVar18._12_4_ = auVar17._12_4_ + auVar24._12_4_;
          }
          iVar4 = auVar18._12_4_ + auVar23._12_4_ + auVar18._4_4_ + auVar23._4_4_ +
                  auVar18._8_4_ + auVar23._8_4_ + auVar18._0_4_ + auVar23._0_4_;
          goto joined_r0x00c28749;
        }
        uVar11 = 0;
        iVar4 = 0;
        do {
          iVar4 = iVar4 + (uint)*(byte *)(lVar7 + uVar11);
          uVar11 = uVar11 + 1;
joined_r0x00c28749:
        } while (uVar11 != uVar3);
        if (iVar4 != 1) {
          iVar4 = **(int **)(*arg1 + 0x10);
          if (param_2 == 0) {
            FUN_00c8e690();
            if ((local_60 == '\0') && (local_68 != 0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            FUN_00c92160();
            if (iVar4 == 0) {
              ___bzero();
            }
            else {
              iVar6 = *(int *)(local_68 + 0x18);
              iVar5 = iVar6 + 3;
              if (-1 < iVar6) {
                iVar5 = iVar6;
              }
              if (3 < iVar6) {
                lVar7 = *(int64_t *)(local_68 + 0x10);
                uVar3 = (iVar5 >> 2) - 1;
                uVar11 = 0;
                if (6 < uVar3) {
                  uVar14 = (uint64_t)uVar3 + 1;
                  uVar11 = uVar14 & 0xfffffffffffffff8;
                  uVar12 = (uVar11 - 8 >> 3) + 1;
                  uVar10 = (uint64_t)((uint)uVar12 & 7);
                  if (uVar11 - 8 < 0x38) {
                    lVar9 = 0;
                  }
                  else {
                    lVar8 = -(uVar12 & 0xfffffffffffffff8);
                    lVar9 = 0;
                    do {
                      piVar1 = (int *)(lVar7 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x10 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x20 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x30 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x40 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x50 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x60 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x70 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x80 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x90 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xa0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xb0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xc0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xd0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xe0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xf0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      lVar9 = lVar9 + 0x40;
                      lVar8 = lVar8 + 8;
                    } while (lVar8 != 0);
                  }
                  if (uVar10 != 0) {
                    lVar9 = lVar7 + lVar9 * 4;
                    lVar8 = 0;
                    do {
                      piVar1 = (int *)(lVar9 + lVar8);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar9 + 0x10 + lVar8);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      lVar8 = lVar8 + 0x20;
                    } while (uVar10 << 5 != lVar8);
                  }
                  if (uVar14 == uVar11) goto LAB_00c28fec;
                  lVar7 = lVar7 + uVar11 * 4;
                }
                lVar9 = 0;
                do {
                  *(int *)(lVar7 + lVar9 * 4) = iVar4;
                  lVar9 = lVar9 + 1;
                } while ((iVar5 >> 2) - (int)uVar11 != (int)lVar9);
              }
            }
LAB_00c28fec:
            FUN_00c29420();
            if (local_68 != 0) {
              FUN_00d50b20();
            }
            goto LAB_00c28c4e;
          }
          FUN_00c8e690();
          if ((local_60 == '\0') && (local_68 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          if (iVar4 == 0) {
            ___bzero();
          }
          else {
            iVar6 = *(int *)(local_68 + 0x18);
            iVar5 = iVar6 + 3;
            if (-1 < iVar6) {
              iVar5 = iVar6;
            }
            if (3 < iVar6) {
              lVar7 = *(int64_t *)(local_68 + 0x10);
              uVar3 = (iVar5 >> 2) - 1;
              uVar11 = 0;
              if (6 < uVar3) {
                uVar14 = (uint64_t)uVar3 + 1;
                uVar11 = uVar14 & 0xfffffffffffffff8;
                uVar12 = (uVar11 - 8 >> 3) + 1;
                uVar10 = (uint64_t)((uint)uVar12 & 7);
                if (uVar11 - 8 < 0x38) {
                  lVar9 = 0;
                }
                else {
                  lVar8 = -(uVar12 & 0xfffffffffffffff8);
                  lVar9 = 0;
                  do {
                    piVar1 = (int *)(lVar7 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x10 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x20 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x30 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x40 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x50 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x60 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x70 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x80 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x90 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xa0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xb0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xc0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xd0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xe0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xf0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    lVar9 = lVar9 + 0x40;
                    lVar8 = lVar8 + 8;
                  } while (lVar8 != 0);
                }
                if (uVar10 != 0) {
                  lVar9 = lVar7 + lVar9 * 4;
                  lVar8 = 0;
                  do {
                    piVar1 = (int *)(lVar9 + lVar8);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar9 + 0x10 + lVar8);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    lVar8 = lVar8 + 0x20;
                  } while (uVar10 << 5 != lVar8);
                }
                if (uVar14 == uVar11) goto LAB_00c28ee8;
                lVar7 = lVar7 + uVar11 * 4;
              }
              lVar9 = 0;
              do {
                *(int *)(lVar7 + lVar9 * 4) = iVar4;
                lVar9 = lVar9 + 1;
              } while ((iVar5 >> 2) - (int)uVar11 != (int)lVar9);
            }
          }
LAB_00c28ee8:
          FUN_00c29420();
          if (local_68 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00c28c4e;
        }
        lVar7 = *(int64_t *)(local_68 + 200);
        if (lVar7 == 0) goto LAB_00c28c4e;
        local_50 = -1;
        while( true ) {
          lVar9 = (int64_t)local_50;
          local_50 = local_50 + 1;
          if (*(int *)(lVar7 + 0xc) <= local_50) break;
          if ((*(int *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x10) + 8 + lVar9 * 8) + 0x28) != 2) ||
             (local_50 == **(int **)(*arg1 + 0x10))) {
            lVar9 = *(int64_t *)(local_68 + 0xd8);
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            cVar2 = *(char *)(*(int64_t *)(lVar9 + 0x10) + (int64_t)local_50);
            FUN_00d50b20();
            if (cVar2 == '\0') {
              FUN_00c8e690();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              if (local_50 == 0) {
                ___bzero();
              }
              else {
                iVar4 = *(int *)(local_40 + 0x18);
                iVar6 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar6 = iVar4;
                }
                if (3 < iVar4) {
                  lVar9 = *(int64_t *)(local_40 + 0x10);
                  uVar3 = (iVar6 >> 2) - 1;
                  uVar11 = 0;
                  if (6 < uVar3) {
                    uVar14 = (uint64_t)uVar3 + 1;
                    uVar11 = uVar14 & 0x1fffffff8;
                    uVar12 = (uVar11 - 8 >> 3) + 1;
                    uVar10 = (uint64_t)((uint)uVar12 & 7);
                    if (uVar11 - 8 < 0x38) {
                      lVar8 = 0;
                    }
                    else {
                      lVar13 = -(uVar12 & 0xfffffffffffffff8);
                      lVar8 = 0;
                      do {
                        piVar1 = (int *)(lVar9 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        lVar8 = lVar8 + 0x40;
                        lVar13 = lVar13 + 8;
                      } while (lVar13 != 0);
                    }
                    if (uVar10 != 0) {
                      lVar8 = lVar9 + lVar8 * 4;
                      lVar13 = 0;
                      do {
                        piVar1 = (int *)(lVar8 + lVar13);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        lVar13 = lVar13 + 0x20;
                      } while (uVar10 << 5 != lVar13);
                    }
                    if (uVar14 == uVar11) goto LAB_00c28c0c;
                    lVar9 = lVar9 + uVar11 * 4;
                  }
                  lVar8 = 0;
                  do {
                    *(int *)(lVar9 + lVar8 * 4) = local_50;
                    lVar8 = lVar8 + 1;
                  } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
                }
              }
LAB_00c28c0c:
              FUN_00c29420();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_00c8e690();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              if (local_50 == 0) {
                ___bzero();
              }
              else {
                iVar4 = *(int *)(local_40 + 0x18);
                iVar6 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar6 = iVar4;
                }
                if (3 < iVar4) {
                  lVar9 = *(int64_t *)(local_40 + 0x10);
                  uVar3 = (iVar6 >> 2) - 1;
                  uVar11 = 0;
                  if (6 < uVar3) {
                    uVar14 = (uint64_t)uVar3 + 1;
                    uVar11 = uVar14 & 0x1fffffff8;
                    uVar12 = (uVar11 - 8 >> 3) + 1;
                    uVar10 = (uint64_t)((uint)uVar12 & 7);
                    if (uVar11 - 8 < 0x38) {
                      lVar8 = 0;
                    }
                    else {
                      lVar13 = -(uVar12 & 0xfffffffffffffff8);
                      lVar8 = 0;
                      do {
                        piVar1 = (int *)(lVar9 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        lVar8 = lVar8 + 0x40;
                        lVar13 = lVar13 + 8;
                      } while (lVar13 != 0);
                    }
                    if (uVar10 != 0) {
                      lVar8 = lVar9 + lVar8 * 4;
                      lVar13 = 0;
                      do {
                        piVar1 = (int *)(lVar8 + lVar13);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        lVar13 = lVar13 + 0x20;
                      } while (uVar10 << 5 != lVar13);
                    }
                    if (uVar14 == uVar11) goto LAB_00c28aec;
                    lVar9 = lVar9 + uVar11 * 4;
                  }
                  lVar8 = 0;
                  do {
                    *(int *)(lVar9 + lVar8 * 4) = local_50;
                    lVar8 = lVar8 + 1;
                  } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
                }
              }
LAB_00c28aec:
              FUN_00c29420();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        goto LAB_00c28c45;
      }
    }
LAB_00c27e39:
    lVar7 = *(int64_t *)(local_68 + 200);
    if (lVar7 == 0) goto LAB_00c28c4e;
    local_50 = -1;
    while( true ) {
      lVar9 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_50) break;
      if ((*(int *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x10) + 8 + lVar9 * 8) + 0x28) != 2) ||
         (local_50 == **(int **)(*arg1 + 0x10))) {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        if (local_50 == 0) {
          ___bzero();
        }
        else {
          iVar4 = *(int *)(local_40 + 0x18);
          iVar6 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          if (3 < iVar4) {
            lVar9 = *(int64_t *)(local_40 + 0x10);
            uVar3 = (iVar6 >> 2) - 1;
            uVar11 = 0;
            if (6 < uVar3) {
              uVar14 = (uint64_t)uVar3 + 1;
              uVar11 = uVar14 & 0x1fffffff8;
              uVar12 = (uVar11 - 8 >> 3) + 1;
              uVar10 = (uint64_t)((uint)uVar12 & 7);
              if (uVar11 - 8 < 0x38) {
                lVar8 = 0;
              }
              else {
                lVar13 = -(uVar12 & 0xfffffffffffffff8);
                lVar8 = 0;
                do {
                  piVar1 = (int *)(lVar9 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar8 = lVar8 + 0x40;
                  lVar13 = lVar13 + 8;
                } while (lVar13 != 0);
              }
              if (uVar10 != 0) {
                lVar8 = lVar9 + lVar8 * 4;
                lVar13 = 0;
                do {
                  piVar1 = (int *)(lVar8 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar13 = lVar13 + 0x20;
                } while (uVar10 << 5 != lVar13);
              }
              if (uVar14 == uVar11) goto LAB_00c280bb;
              lVar9 = lVar9 + uVar11 * 4;
            }
            lVar8 = 0;
            do {
              *(int *)(lVar9 + lVar8 * 4) = local_50;
              lVar8 = lVar8 + 1;
            } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
          }
        }
LAB_00c280bb:
        FUN_00c29420();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (lVar7 != 0) {
      uVar3 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar3) {
        lVar7 = *(int64_t *)(lVar7 + 0x10);
        if (uVar3 < 8) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint64_t)(uVar3 & 0xfffffff8);
          uVar10 = (uVar11 - 8 >> 3) + 1;
          if (uVar11 - 8 == 0) {
            lVar9 = 0;
LAB_00c2815a:
            auVar24 = pmovzxbd(in_XMM2,*(void*)(lVar7 + 4 + lVar9));
            pmovzxbd(auVar24,*(void*)(lVar7 + lVar9));
          }
          else {
            lVar8 = -(uVar10 & 0xfffffffffffffffe);
            auVar24 = (uint8_t  [16])0x0;
            lVar9 = 0;
            auVar22 = (uint8_t  [16])0x0;
            do {
              auVar15 = pmovzxbd(in_XMM2,*(void*)(lVar7 + lVar9));
              in_XMM2._0_4_ = auVar15._0_4_ + auVar24._0_4_;
              in_XMM2._4_4_ = auVar15._4_4_ + auVar24._4_4_;
              in_XMM2._8_4_ = auVar15._8_4_ + auVar24._8_4_;
              in_XMM2._12_4_ = auVar15._12_4_ + auVar24._12_4_;
              auVar15 = pmovzxbd(in_XMM3,*(void*)(lVar7 + 4 + lVar9));
              in_XMM3._0_4_ = auVar15._0_4_ + auVar22._0_4_;
              in_XMM3._4_4_ = auVar15._4_4_ + auVar22._4_4_;
              in_XMM3._8_4_ = auVar15._8_4_ + auVar22._8_4_;
              in_XMM3._12_4_ = auVar15._12_4_ + auVar22._12_4_;
              auVar15 = pmovzxbd(auVar24,*(void*)(lVar7 + 8 + lVar9));
              auVar19 = pmovzxbd(auVar22,*(void*)(lVar7 + 0xc + lVar9));
              auVar24._0_4_ = auVar15._0_4_ + in_XMM2._0_4_;
              auVar24._4_4_ = auVar15._4_4_ + in_XMM2._4_4_;
              auVar24._8_4_ = auVar15._8_4_ + in_XMM2._8_4_;
              auVar24._12_4_ = auVar15._12_4_ + in_XMM2._12_4_;
              auVar22._0_4_ = auVar19._0_4_ + in_XMM3._0_4_;
              auVar22._4_4_ = auVar19._4_4_ + in_XMM3._4_4_;
              auVar22._8_4_ = auVar19._8_4_ + in_XMM3._8_4_;
              auVar22._12_4_ = auVar19._12_4_ + in_XMM3._12_4_;
              lVar9 = lVar9 + 0x10;
              lVar8 = lVar8 + 2;
            } while (lVar8 != 0);
            if ((uVar10 & 1) != 0) goto LAB_00c2815a;
          }
          if (uVar11 == uVar3) goto LAB_00c2819f;
        }
        do {
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
    }
LAB_00c2819f:
    lVar7 = *(int64_t *)(local_68 + 200);
    if (lVar7 == 0) goto LAB_00c28c4e;
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar7 + 0xc)) {
      lVar9 = *(int64_t *)(local_68 + 0xd8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      cVar2 = *(char *)(*(int64_t *)(lVar9 + 0x10) + (int64_t)local_50);
      FUN_00d50b20();
      if (cVar2 == '\0') {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        if (local_50 == 0) {
          ___bzero();
        }
        else {
          iVar4 = *(int *)(local_40 + 0x18);
          iVar6 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          if (3 < iVar4) {
            lVar9 = *(int64_t *)(local_40 + 0x10);
            uVar3 = (iVar6 >> 2) - 1;
            uVar11 = 0;
            if (6 < uVar3) {
              uVar14 = (uint64_t)uVar3 + 1;
              uVar11 = uVar14 & 0x1fffffff8;
              uVar12 = (uVar11 - 8 >> 3) + 1;
              uVar10 = (uint64_t)((uint)uVar12 & 7);
              if (uVar11 - 8 < 0x38) {
                lVar8 = 0;
              }
              else {
                lVar13 = -(uVar12 & 0xfffffffffffffff8);
                lVar8 = 0;
                do {
                  piVar1 = (int *)(lVar9 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar8 = lVar8 + 0x40;
                  lVar13 = lVar13 + 8;
                } while (lVar13 != 0);
              }
              if (uVar10 != 0) {
                lVar8 = lVar9 + lVar8 * 4;
                lVar13 = 0;
                do {
                  piVar1 = (int *)(lVar8 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar13 = lVar13 + 0x20;
                } while (uVar10 << 5 != lVar13);
              }
              if (uVar14 == uVar11) goto LAB_00c2863c;
              lVar9 = lVar9 + uVar11 * 4;
            }
            lVar8 = 0;
            do {
              *(int *)(lVar9 + lVar8 * 4) = local_50;
              lVar8 = lVar8 + 1;
            } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
          }
        }
LAB_00c2863c:
        FUN_00c29420();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        if (local_50 == 0) {
          ___bzero();
        }
        else {
          iVar4 = *(int *)(local_40 + 0x18);
          iVar6 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          if (3 < iVar4) {
            lVar9 = *(int64_t *)(local_40 + 0x10);
            uVar3 = (iVar6 >> 2) - 1;
            uVar11 = 0;
            if (6 < uVar3) {
              uVar14 = (uint64_t)uVar3 + 1;
              uVar11 = uVar14 & 0x1fffffff8;
              uVar12 = (uVar11 - 8 >> 3) + 1;
              uVar10 = (uint64_t)((uint)uVar12 & 7);
              if (uVar11 - 8 < 0x38) {
                lVar8 = 0;
              }
              else {
                lVar13 = -(uVar12 & 0xfffffffffffffff8);
                lVar8 = 0;
                do {
                  piVar1 = (int *)(lVar9 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar8 = lVar8 + 0x40;
                  lVar13 = lVar13 + 8;
                } while (lVar13 != 0);
              }
              if (uVar10 != 0) {
                lVar8 = lVar9 + lVar8 * 4;
                lVar13 = 0;
                do {
                  piVar1 = (int *)(lVar8 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar13 = lVar13 + 0x20;
                } while (uVar10 << 5 != lVar13);
              }
              if (uVar14 == uVar11) goto LAB_00c2851c;
              lVar9 = lVar9 + uVar11 * 4;
            }
            lVar8 = 0;
            do {
              *(int *)(lVar9 + lVar8 * 4) = local_50;
              lVar8 = lVar8 + 1;
            } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
          }
        }
LAB_00c2851c:
        FUN_00c29420();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
LAB_00c28c45:
  FUN_00c4d4e0();
LAB_00c28c4e:
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c1aae0
// ============================================================
// Function: FUN_00c1aae0
// Address: 00c1aae0
// Size: 9593 bytes
// Class: GNOverloudConvolver

void FUN_00c1aae0(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_898;
  uint8_t local_890;
  int64_t local_888;
  uint8_t local_880;
  int64_t local_878;
  uint8_t local_870;
  int64_t local_868;
  uint8_t local_860;
  int64_t local_858;
  uint8_t local_850;
  int64_t local_848;
  uint8_t local_840;
  int64_t local_838;
  uint8_t local_830;
  int64_t local_828;
  uint8_t local_820;
  int64_t local_818;
  uint8_t local_810;
  int64_t local_808;
  uint8_t local_800;
  int64_t local_7f8;
  uint8_t local_7f0;
  int64_t local_7e8;
  uint8_t local_7e0;
  int64_t local_7d8;
  uint8_t local_7d0;
  int64_t local_7c8;
  uint8_t local_7c0;
  int64_t local_7b8;
  uint8_t local_7b0;
  int64_t local_7a8;
  uint8_t local_7a0;
  int64_t local_798;
  uint8_t local_790;
  int64_t local_788;
  uint8_t local_780;
  int64_t local_778;
  uint8_t local_770;
  int64_t local_768;
  uint8_t local_760;
  int64_t local_758;
  uint8_t local_750;
  int64_t local_748;
  uint8_t local_740;
  int64_t local_738;
  uint8_t local_730;
  int64_t local_728;
  uint8_t local_720;
  int64_t local_718;
  uint8_t local_710;
  int64_t local_708;
  uint8_t local_700;
  int64_t local_6f8;
  uint8_t local_6f0;
  int64_t local_6e8;
  uint8_t local_6e0;
  int64_t local_6d8;
  uint8_t local_6d0;
  int64_t local_6c8;
  uint8_t local_6c0;
  int64_t local_6b8;
  uint8_t local_6b0;
  int64_t local_6a8;
  uint8_t local_6a0;
  int64_t local_698;
  uint8_t local_690;
  int64_t local_688;
  uint8_t local_680;
  int64_t local_678;
  uint8_t local_670;
  int64_t local_668;
  uint8_t local_660;
  int64_t local_658;
  uint8_t local_650;
  int64_t local_648;
  uint8_t local_640;
  int64_t local_638;
  uint8_t local_630;
  int64_t local_628;
  uint8_t local_620;
  int64_t local_618;
  uint8_t local_610;
  int64_t local_608;
  uint8_t local_600;
  int64_t local_5f8;
  uint8_t local_5f0;
  int64_t local_5e8;
  uint8_t local_5e0;
  int64_t local_5d8;
  uint8_t local_5d0;
  int64_t local_5c8;
  uint8_t local_5c0;
  int64_t local_5b8;
  uint8_t local_5b0;
  int64_t local_5a8;
  uint8_t local_5a0;
  int64_t local_598;
  uint8_t local_590;
  int64_t local_588;
  uint8_t local_580;
  int64_t local_578;
  uint8_t local_570;
  int64_t local_568;
  uint8_t local_560;
  int64_t local_558;
  uint8_t local_550;
  int64_t local_548;
  uint8_t local_540;
  int64_t local_538;
  uint8_t local_530;
  int64_t local_528;
  uint8_t local_520;
  int64_t local_518;
  uint8_t local_510;
  int64_t local_508;
  uint8_t local_500;
  int64_t local_4f8;
  uint8_t local_4f0;
  int64_t local_4e8;
  uint8_t local_4e0;
  int64_t local_4d8;
  uint8_t local_4d0;
  int64_t local_4c8;
  uint8_t local_4c0;
  int64_t local_4b8;
  uint8_t local_4b0;
  int64_t local_4a8;
  uint8_t local_4a0;
  int64_t local_498;
  uint8_t local_490;
  int64_t local_488;
  uint8_t local_480;
  int64_t local_478;
  uint8_t local_470;
  int64_t local_468;
  uint8_t local_460;
  int64_t local_458;
  uint8_t local_450;
  int64_t local_448;
  uint8_t local_440;
  int64_t local_438;
  uint8_t local_430;
  int64_t local_428;
  uint8_t local_420;
  int64_t local_418;
  uint8_t local_410;
  int64_t local_408;
  uint8_t local_400;
  int64_t local_3f8;
  uint8_t local_3f0;
  int64_t local_3e8;
  uint8_t local_3e0;
  int64_t local_3d8;
  uint8_t local_3d0;
  int64_t local_3c8;
  uint8_t local_3c0;
  int64_t local_3b8;
  uint8_t local_3b0;
  int64_t local_3a8;
  uint8_t local_3a0;
  int64_t local_398;
  uint8_t local_390;
  int64_t local_388;
  uint8_t local_380;
  int64_t local_378;
  uint8_t local_370;
  int64_t local_368;
  uint8_t local_360;
  int64_t local_358;
  uint8_t local_350;
  int64_t local_348;
  uint8_t local_340;
  int64_t local_338;
  uint8_t local_330;
  int64_t local_328;
  uint8_t local_320;
  int64_t local_318;
  uint8_t local_310;
  int64_t local_308;
  uint8_t local_300;
  int64_t local_2f8;
  uint8_t local_2f0;
  int64_t local_2e8;
  uint8_t local_2e0;
  int64_t local_2d8;
  uint8_t local_2d0;
  int64_t local_2c8;
  uint8_t local_2c0;
  int64_t local_2b8;
  uint8_t local_2b0;
  int64_t local_2a8;
  uint8_t local_2a0;
  int64_t local_298;
  uint8_t local_290;
  int64_t local_288;
  uint8_t local_280;
  int64_t local_278;
  uint8_t local_270;
  int64_t local_268;
  uint8_t local_260;
  int64_t local_258;
  uint8_t local_250;
  int64_t local_248;
  uint8_t local_240;
  int64_t local_238;
  uint8_t local_230;
  int64_t local_228;
  uint8_t local_220;
  int64_t local_218;
  uint8_t local_210;
  int64_t local_208;
  uint8_t local_200;
  int64_t local_1f8;
  uint8_t local_1f0;
  int64_t local_1e8;
  uint8_t local_1e0;
  int64_t local_1d8;
  uint8_t local_1d0;
  int64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  int64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  void*local_38;
  char local_30;
  
  *(void*)(this_ptr + 0xb8) = 0x11;
  lVar2 = g_0276c5c0;
  if (g_0276c5c0 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c1ab49;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar2) {
      FUN_00d50b20();
      goto LAB_00c1ab49;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar2;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c1ab49:
  *(void*)(this_ptr + 0xa8) = 6;
  if ((g_028a5e68 == (void*)0x0) || (g_028a5e71 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5e68 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5e68 == (void*)0x0;
      g_028a5e68 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = g_0276bcc0, g_028a5e68 != (void*)0x0)) &&
         (lVar2 = g_0276bcc0, g_028a5e70 == '\0')) {
        g_028a5e70 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_0276bcc0;
      }
      g_0276bcc0 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bcc8;
      local_890 = 1;
      local_898 = lVar2;
      if (g_0276bcc8 != 0) {
        FUN_00d50b00();
      }
      local_888 = lVar4;
      local_880 = 1;
      FUN_00bf1030(&local_888,&local_898);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276bcd0;
      if (g_0276bcd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bcd8;
      local_878 = lVar2;
      local_870 = 1;
      if (g_0276bcd8 != 0) {
        FUN_00d50b00();
      }
      local_868 = lVar4;
      local_860 = 1;
      FUN_00bf1030(&local_868,&local_878);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c5c8;
      if (g_0276c5c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c5d0;
      local_858 = lVar2;
      local_850 = 1;
      if (g_0276c5d0 != 0) {
        FUN_00d50b00();
      }
      local_848 = lVar4;
      local_840 = 1;
      FUN_00bf1030(&local_848,&local_858);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c5d8;
      if (g_0276c5d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c5e0;
      local_838 = lVar2;
      local_830 = 1;
      if (g_0276c5e0 != 0) {
        FUN_00d50b00();
      }
      local_828 = lVar4;
      local_820 = 1;
      FUN_00bf1030(&local_828,&local_838);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c5e8;
      if (g_0276c5e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c5f0;
      local_818 = lVar2;
      local_810 = 1;
      if (g_0276c5f0 != 0) {
        FUN_00d50b00();
      }
      local_808 = lVar4;
      local_800 = 1;
      FUN_00bf1030(&local_808,&local_818);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c5f8;
      if (g_0276c5f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c600;
      local_7f8 = lVar2;
      local_7f0 = 1;
      if (g_0276c600 != 0) {
        FUN_00d50b00();
      }
      local_7e8 = lVar4;
      local_7e0 = 1;
      FUN_00bf1030(&local_7e8,&local_7f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c608;
      if (g_0276c608 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c610;
      local_7d8 = lVar2;
      local_7d0 = 1;
      if (g_0276c610 != 0) {
        FUN_00d50b00();
      }
      local_7c8 = lVar4;
      local_7c0 = 1;
      FUN_00bf1030(&local_7c8,&local_7d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c618;
      if (g_0276c618 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c620;
      local_7b8 = lVar2;
      local_7b0 = 1;
      if (g_0276c620 != 0) {
        FUN_00d50b00();
      }
      local_7a8 = lVar4;
      local_7a0 = 1;
      FUN_00bf1030(&local_7a8,&local_7b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c628;
      if (g_0276c628 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c630;
      local_798 = lVar2;
      local_790 = 1;
      if (g_0276c630 != 0) {
        FUN_00d50b00();
      }
      local_788 = lVar4;
      local_780 = 1;
      FUN_00bf1030(&local_788,&local_798);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c638;
      if (g_0276c638 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c640;
      local_778 = lVar2;
      local_770 = 1;
      if (g_0276c640 != 0) {
        FUN_00d50b00();
      }
      local_768 = lVar4;
      local_760 = 1;
      FUN_00bf1030(&local_768,&local_778);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c648;
      if (g_0276c648 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c650;
      local_758 = lVar2;
      local_750 = 1;
      if (g_0276c650 != 0) {
        FUN_00d50b00();
      }
      local_748 = lVar4;
      local_740 = 1;
      FUN_00bf1030(&local_748,&local_758);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c658;
      if (g_0276c658 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c660;
      local_738 = lVar2;
      local_730 = 1;
      if (g_0276c660 != 0) {
        FUN_00d50b00();
      }
      local_728 = lVar4;
      local_720 = 1;
      FUN_00bf1030(&local_728,&local_738);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c668;
      if (g_0276c668 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c670;
      local_718 = lVar2;
      local_710 = 1;
      if (g_0276c670 != 0) {
        FUN_00d50b00();
      }
      local_708 = lVar4;
      local_700 = 1;
      FUN_00bf1030(&local_708,&local_718);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c678;
      if (g_0276c678 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c680;
      local_6f8 = lVar2;
      local_6f0 = 1;
      if (g_0276c680 != 0) {
        FUN_00d50b00();
      }
      local_6e8 = lVar4;
      local_6e0 = 1;
      FUN_00bf1030(&local_6e8,&local_6f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c688;
      if (g_0276c688 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c690;
      local_6d8 = lVar2;
      local_6d0 = 1;
      if (g_0276c690 != 0) {
        FUN_00d50b00();
      }
      local_6c8 = lVar4;
      local_6c0 = 1;
      FUN_00bf1030(&local_6c8,&local_6d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c698;
      if (g_0276c698 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c6a0;
      local_6b8 = lVar2;
      local_6b0 = 1;
      if (g_0276c6a0 != 0) {
        FUN_00d50b00();
      }
      local_6a8 = lVar4;
      local_6a0 = 1;
      FUN_00bf1030(&local_6a8,&local_6b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c6a8;
      if (g_0276c6a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c6b0;
      local_698 = lVar2;
      local_690 = 1;
      if (g_0276c6b0 != 0) {
        FUN_00d50b00();
      }
      local_688 = lVar4;
      local_680 = 1;
      FUN_00bf1030(&local_688,&local_698);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c6b8;
      if (g_0276c6b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c6c0;
      local_678 = lVar2;
      local_670 = 1;
      if (g_0276c6c0 != 0) {
        FUN_00d50b00();
      }
      local_668 = lVar4;
      local_660 = 1;
      FUN_00bf1030(&local_668,&local_678);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c6c8;
      if (g_0276c6c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c6d0;
      local_658 = lVar2;
      local_650 = 1;
      if (g_0276c6d0 != 0) {
        FUN_00d50b00();
      }
      local_648 = lVar4;
      local_640 = 1;
      FUN_00bf1030(&local_648,&local_658);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c6d8;
      if (g_0276c6d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c6e0;
      local_638 = lVar2;
      local_630 = 1;
      if (g_0276c6e0 != 0) {
        FUN_00d50b00();
      }
      local_628 = lVar4;
      local_620 = 1;
      FUN_00bf1030(&local_628,&local_638);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c6e8;
      if (g_0276c6e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c6f0;
      local_618 = lVar2;
      local_610 = 1;
      if (g_0276c6f0 != 0) {
        FUN_00d50b00();
      }
      local_608 = lVar4;
      local_600 = 1;
      FUN_00bf1030(&local_608,&local_618);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c6f8;
      if (g_0276c6f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c700;
      local_5f8 = lVar2;
      local_5f0 = 1;
      if (g_0276c700 != 0) {
        FUN_00d50b00();
      }
      local_5e8 = lVar4;
      local_5e0 = 1;
      FUN_00bf1030(&local_5e8,&local_5f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c708;
      if (g_0276c708 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c710;
      local_5d8 = lVar2;
      local_5d0 = 1;
      if (g_0276c710 != 0) {
        FUN_00d50b00();
      }
      local_5c8 = lVar4;
      local_5c0 = 1;
      FUN_00bf1030(&local_5c8,&local_5d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c718;
      if (g_0276c718 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c720;
      local_5b8 = lVar2;
      local_5b0 = 1;
      if (g_0276c720 != 0) {
        FUN_00d50b00();
      }
      local_5a8 = lVar4;
      local_5a0 = 1;
      FUN_00bf1030(&local_5a8,&local_5b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c728;
      if (g_0276c728 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c730;
      local_598 = lVar2;
      local_590 = 1;
      if (g_0276c730 != 0) {
        FUN_00d50b00();
      }
      local_588 = lVar4;
      local_580 = 1;
      FUN_00bf1030(&local_588,&local_598);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c738;
      if (g_0276c738 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c740;
      local_578 = lVar2;
      local_570 = 1;
      if (g_0276c740 != 0) {
        FUN_00d50b00();
      }
      local_568 = lVar4;
      local_560 = 1;
      FUN_00bf1030(&local_568,&local_578);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c748;
      if (g_0276c748 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c750;
      local_558 = lVar2;
      local_550 = 1;
      if (g_0276c750 != 0) {
        FUN_00d50b00();
      }
      local_548 = lVar4;
      local_540 = 1;
      FUN_00bf1030(&local_548,&local_558);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c758;
      if (g_0276c758 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c760;
      local_538 = lVar2;
      local_530 = 1;
      if (g_0276c760 != 0) {
        FUN_00d50b00();
      }
      local_528 = lVar4;
      local_520 = 1;
      FUN_00bf1030(&local_528,&local_538);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c768;
      if (g_0276c768 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c770;
      local_518 = lVar2;
      local_510 = 1;
      if (g_0276c770 != 0) {
        FUN_00d50b00();
      }
      local_508 = lVar4;
      local_500 = 1;
      FUN_00bf1030(&local_508,&local_518);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c778;
      if (g_0276c778 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c780;
      local_4f8 = lVar2;
      local_4f0 = 1;
      if (g_0276c780 != 0) {
        FUN_00d50b00();
      }
      local_4e8 = lVar4;
      local_4e0 = 1;
      FUN_00bf1030(&local_4e8,&local_4f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c788;
      if (g_0276c788 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c790;
      local_4d8 = lVar2;
      local_4d0 = 1;
      if (g_0276c790 != 0) {
        FUN_00d50b00();
      }
      local_4c8 = lVar4;
      local_4c0 = 1;
      FUN_00bf1030(&local_4c8,&local_4d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c798;
      if (g_0276c798 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c7a0;
      local_4b8 = lVar2;
      local_4b0 = 1;
      if (g_0276c7a0 != 0) {
        FUN_00d50b00();
      }
      local_4a8 = lVar4;
      local_4a0 = 1;
      FUN_00bf1030(&local_4a8,&local_4b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c7a8;
      if (g_0276c7a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c7b0;
      local_498 = lVar2;
      local_490 = 1;
      if (g_0276c7b0 != 0) {
        FUN_00d50b00();
      }
      local_488 = lVar4;
      local_480 = 1;
      FUN_00bf1030(&local_488,&local_498);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c7b8;
      if (g_0276c7b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c7c0;
      local_478 = lVar2;
      local_470 = 1;
      if (g_0276c7c0 != 0) {
        FUN_00d50b00();
      }
      local_468 = lVar4;
      local_460 = 1;
      FUN_00bf1030(&local_468,&local_478);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c7c8;
      if (g_0276c7c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c7d0;
      local_458 = lVar2;
      local_450 = 1;
      if (g_0276c7d0 != 0) {
        FUN_00d50b00();
      }
      local_448 = lVar4;
      local_440 = 1;
      FUN_00bf1030(&local_448,&local_458);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c7d8;
      if (g_0276c7d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c7e0;
      local_438 = lVar2;
      local_430 = 1;
      if (g_0276c7e0 != 0) {
        FUN_00d50b00();
      }
      local_428 = lVar4;
      local_420 = 1;
      FUN_00bf1030(&local_428,&local_438);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c7e8;
      if (g_0276c7e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c7f0;
      local_418 = lVar2;
      local_410 = 1;
      if (g_0276c7f0 != 0) {
        FUN_00d50b00();
      }
      local_408 = lVar4;
      local_400 = 1;
      FUN_00bf1030(&local_408,&local_418);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c7f8;
      if (g_0276c7f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c800;
      local_3f8 = lVar2;
      local_3f0 = 1;
      if (g_0276c800 != 0) {
        FUN_00d50b00();
      }
      local_3e8 = lVar4;
      local_3e0 = 1;
      FUN_00bf1030(&local_3e8,&local_3f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c808;
      if (g_0276c808 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c810;
      local_3d8 = lVar2;
      local_3d0 = 1;
      if (g_0276c810 != 0) {
        FUN_00d50b00();
      }
      local_3c8 = lVar4;
      local_3c0 = 1;
      FUN_00bf1030(&local_3c8,&local_3d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c818;
      if (g_0276c818 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c820;
      local_3b8 = lVar2;
      local_3b0 = 1;
      if (g_0276c820 != 0) {
        FUN_00d50b00();
      }
      local_3a8 = lVar4;
      local_3a0 = 1;
      FUN_00bf1030(&local_3a8,&local_3b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c828;
      if (g_0276c828 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c830;
      local_398 = lVar2;
      local_390 = 1;
      if (g_0276c830 != 0) {
        FUN_00d50b00();
      }
      local_388 = lVar4;
      local_380 = 1;
      FUN_00bf1030(&local_388,&local_398);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c838;
      if (g_0276c838 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c840;
      local_378 = lVar2;
      local_370 = 1;
      if (g_0276c840 != 0) {
        FUN_00d50b00();
      }
      local_368 = lVar4;
      local_360 = 1;
      FUN_00bf1030(&local_368,&local_378);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c848;
      if (g_0276c848 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c850;
      local_358 = lVar2;
      local_350 = 1;
      if (g_0276c850 != 0) {
        FUN_00d50b00();
      }
      local_348 = lVar4;
      local_340 = 1;
      FUN_00bf1030(&local_348,&local_358);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c858;
      if (g_0276c858 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c860;
      local_338 = lVar2;
      local_330 = 1;
      if (g_0276c860 != 0) {
        FUN_00d50b00();
      }
      local_328 = lVar4;
      local_320 = 1;
      FUN_00bf1030(&local_328,&local_338);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c868;
      if (g_0276c868 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c870;
      local_318 = lVar2;
      local_310 = 1;
      if (g_0276c870 != 0) {
        FUN_00d50b00();
      }
      local_308 = lVar4;
      local_300 = 1;
      FUN_00bf1030(&local_308,&local_318);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c878;
      if (g_0276c878 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c880;
      local_2f8 = lVar2;
      local_2f0 = 1;
      if (g_0276c880 != 0) {
        FUN_00d50b00();
      }
      local_2e8 = lVar4;
      local_2e0 = 1;
      FUN_00bf1030(&local_2e8,&local_2f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c888;
      if (g_0276c888 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c890;
      local_2d8 = lVar2;
      local_2d0 = 1;
      if (g_0276c890 != 0) {
        FUN_00d50b00();
      }
      local_2c8 = lVar4;
      local_2c0 = 1;
      FUN_00bf1030(&local_2c8,&local_2d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c898;
      if (g_0276c898 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c8a0;
      local_2b8 = lVar2;
      local_2b0 = 1;
      if (g_0276c8a0 != 0) {
        FUN_00d50b00();
      }
      local_2a8 = lVar4;
      local_2a0 = 1;
      FUN_00bf1030(&local_2a8,&local_2b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c8a8;
      if (g_0276c8a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c8b0;
      local_298 = lVar2;
      local_290 = 1;
      if (g_0276c8b0 != 0) {
        FUN_00d50b00();
      }
      local_288 = lVar4;
      local_280 = 1;
      FUN_00bf1030(&local_288,&local_298);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c8b8;
      if (g_0276c8b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c8c0;
      local_278 = lVar2;
      local_270 = 1;
      if (g_0276c8c0 != 0) {
        FUN_00d50b00();
      }
      local_268 = lVar4;
      local_260 = 1;
      FUN_00bf1030(&local_268,&local_278);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c8c8;
      if (g_0276c8c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c8d0;
      local_258 = lVar2;
      local_250 = 1;
      if (g_0276c8d0 != 0) {
        FUN_00d50b00();
      }
      local_248 = lVar4;
      local_240 = 1;
      FUN_00bf1030(&local_248,&local_258);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c8d8;
      if (g_0276c8d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c8e0;
      local_238 = lVar2;
      local_230 = 1;
      if (g_0276c8e0 != 0) {
        FUN_00d50b00();
      }
      local_228 = lVar4;
      local_220 = 1;
      FUN_00bf1030(&local_228,&local_238);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c8e8;
      if (g_0276c8e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c8f0;
      local_218 = lVar2;
      local_210 = 1;
      if (g_0276c8f0 != 0) {
        FUN_00d50b00();
      }
      local_208 = lVar4;
      local_200 = 1;
      FUN_00bf1030(&local_208,&local_218);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c8f8;
      if (g_0276c8f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c900;
      local_1f8 = lVar2;
      local_1f0 = 1;
      if (g_0276c900 != 0) {
        FUN_00d50b00();
      }
      local_1e8 = lVar4;
      local_1e0 = 1;
      FUN_00bf1030(&local_1e8,&local_1f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c908;
      if (g_0276c908 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c910;
      local_1d8 = lVar2;
      local_1d0 = 1;
      if (g_0276c910 != 0) {
        FUN_00d50b00();
      }
      local_1c8 = lVar4;
      local_1c0 = 1;
      FUN_00bf1030(&local_1c8,&local_1d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c918;
      if (g_0276c918 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c920;
      local_1b8 = lVar2;
      local_1b0 = 1;
      if (g_0276c920 != 0) {
        FUN_00d50b00();
      }
      local_1a8 = lVar4;
      local_1a0 = 1;
      FUN_00bf1030(&local_1a8,&local_1b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c928;
      if (g_0276c928 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c930;
      local_198 = lVar2;
      local_190 = 1;
      if (g_0276c930 != 0) {
        FUN_00d50b00();
      }
      local_188 = lVar4;
      local_180 = 1;
      FUN_00bf1030(&local_188,&local_198);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c938;
      if (g_0276c938 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c940;
      local_178 = lVar2;
      local_170 = 1;
      if (g_0276c940 != 0) {
        FUN_00d50b00();
      }
      local_168 = lVar4;
      local_160 = 1;
      FUN_00bf1030(&local_168,&local_178);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c948;
      if (g_0276c948 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c950;
      local_158 = lVar2;
      local_150 = 1;
      if (g_0276c950 != 0) {
        FUN_00d50b00();
      }
      local_148 = lVar4;
      local_140 = 1;
      FUN_00bf1030(&local_148,&local_158);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c958;
      if (g_0276c958 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c960;
      local_138 = lVar2;
      local_130 = 1;
      if (g_0276c960 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar4;
      local_120 = 1;
      FUN_00bf1030(&local_128,&local_138);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c968;
      if (g_0276c968 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c970;
      local_118 = lVar2;
      local_110 = 1;
      if (g_0276c970 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar4;
      local_100 = 1;
      FUN_00bf1030(&local_108,&local_118);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c978;
      if (g_0276c978 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c980;
      local_f8 = lVar2;
      local_f0 = 1;
      if (g_0276c980 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar4;
      local_e0 = 1;
      FUN_00bf1030(&local_e8,&local_f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c988;
      if (g_0276c988 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c990;
      local_d8 = lVar2;
      local_d0 = 1;
      if (g_0276c990 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar4;
      local_c0 = 1;
      FUN_00bf1030(&local_c8,&local_d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c998;
      if (g_0276c998 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c9a0;
      local_b8 = lVar2;
      local_b0 = 1;
      if (g_0276c9a0 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = 1;
      FUN_00bf1030(&local_a8,&local_b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c9a8;
      if (g_0276c9a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c9b0;
      local_98 = lVar2;
      local_90 = 1;
      if (g_0276c9b0 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar4;
      local_80 = 1;
      FUN_00bf1030(&local_88,&local_98);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c9b8;
      if (g_0276c9b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c9c0;
      local_78 = lVar2;
      local_70 = 1;
      if (g_0276c9c0 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar4;
      local_60 = 1;
      FUN_00bf1030(&local_68,&local_78);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_0276c9c8;
      if (g_0276c9c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c9d0;
      local_58 = lVar2;
      local_50 = 1;
      if (g_0276c9d0 != 0) {
        FUN_00d50b00();
      }
      local_48 = lVar4;
      local_40 = 1;
      FUN_00bf1030(&local_48,&local_58);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      g_028a5e71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5e71 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar1 = g_028a5e68;
  puVar3 = *(void**)(this_ptr + 0xb0);
  if (puVar3 != g_028a5e68) {
    if (g_028a5e68 != (void*)0x0) {
      FUN_00d50b00();
    }
    *(void**)(this_ptr + 0xb0) = puVar1;
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(void*)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(void*)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(void*)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(void*)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(void*)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00c8e690();
  puVar3 = local_38;
  if ((((local_30 == '\0') && (local_38 != (void*)0x0)) && (FUN_00d50b00(), local_30 != '\0')
      ) && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar1 = *(void**)(this_ptr + 0xd0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xd0) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  puVar3 = local_38;
  if (((local_30 == '\0') && (local_38 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_30 != '\0' && (local_38 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  ___bzero();
  puVar1 = *(void**)(this_ptr + 0xd8);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xd8) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00c251f0
// ============================================================
// Function: FUN_00c251f0
// Address: 00c251f0
// Size: 3521 bytes
// Class: GNOverloudConvolver
// String references:
//   "ir%I_%@"
//   "GNOverloudConvolver"

void FUN_00c251f0(int64_t *param_1,uint64_t param_2,void*param_3)

{
  double dVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  bool bVar8;
  bool bVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  int64_t local_180;
  char local_178;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_68;
  uint local_60;
  uint32_t local_5c;
  int64_t local_58;
  char local_50;
  char local_41;
  int64_t *local_40;
  char local_31;
  
  lVar2 = g_0276ca70;
  if (g_0276ca70 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_0276ca78;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,6);
    local_b0 = local_68;
    local_a8 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_a8 = '\x01';
    iVar4 = FUN_00c716c0();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)
             (*(int64_t *)
               (*(int64_t *)(*(int64_t *)(*param_1 + 200) + 0x10) + (int64_t)iVar4 * 8) + 0x20);
    if (((dVar1 != 0.0) || (NAN(dVar1))) &&
       (param_3 = *(void**)(*param_1 + 0xd8), param_3 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d46300();
    plVar6 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar6;
        *(void*)(this_ptr + 1) = 1;
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = (int64_t)local_68;
      *(void*)(this_ptr + 1) = 1;
      local_60 = local_60 & 0xffffff00;
    }
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      return;
    }
    if (param_3 == (void*)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (g_0276ca78 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_00;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_0276ca60;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,7);
    local_a0 = local_68;
    local_98 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_98 = '\x01';
    iVar4 = FUN_00c716c0();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)
             (*(int64_t *)
               (*(int64_t *)(*(int64_t *)(*param_1 + 200) + 0x10) + (int64_t)iVar4 * 8) + 0x20);
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      FUN_00d50b00();
    }
    FUN_00d46300();
    plVar6 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar6;
        *(void*)(this_ptr + 1) = 1;
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = (int64_t)local_68;
      *(void*)(this_ptr + 1) = 1;
      local_60 = local_60 & 0xffffff00;
    }
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (g_0276ca60 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d46530();
    plVar6 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar6;
        *(void*)(this_ptr + 1) = 1;
        if ((char)local_60 == '\0') {
          return;
        }
        if (local_68 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      local_68 = (int64_t *)0x0;
    }
    *this_ptr = (int64_t)local_68;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  plVar6 = (int64_t *)*param_1;
  if ((g_0276e120 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0276e070 = FUN_00b10020();
    g_0276e058 = "GNOverloudConvolver";
    g_0276e060 = 0xe0;
    g_0276e068 = FUN_00c41070;
    g_0276e078 = 0;
    ram_000000000276e080 = 0;
    g_0276e088 = 0;
    ram_000000000276e090 = 0;
    g_0276e098 = 0;
    ram_000000000276e0a0 = 0;
    g_0276e0a8 = 0;
    ram_000000000276e0b0 = 0;
    g_0276e0b8 = 0;
    ram_000000000276e0c0 = 0;
    g_0276e0c8 = 0;
    ram_000000000276e0d0 = 0;
    g_0276e0d8 = 0;
    ram_000000000276e0e0 = 0;
    g_0276e0e8 = 0;
    ram_000000000276e0f0 = 0;
    g_0276e0f8 = 0;
    ram_000000000276e100 = 0;
    g_0276e108 = 0;
    ram_000000000276e110 = 0;
    g_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c2551c:
    param_1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c2551c;
  }
  plVar6 = (int64_t *)*param_1;
  local_41 = (char)param_1[1];
  if ((local_41 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pplVar5 = &local_68;
  local_78 = plVar6;
  FUN_00b37610();
  plVar6 = local_68;
  if ((g_0276e120 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0276e070 = FUN_00b10020();
    g_0276e058 = "GNOverloudConvolver";
    g_0276e060 = 0xe0;
    g_0276e068 = FUN_00c41070;
    g_0276e078 = 0;
    ram_000000000276e080 = 0;
    g_0276e088 = 0;
    ram_000000000276e090 = 0;
    g_0276e098 = 0;
    ram_000000000276e0a0 = 0;
    g_0276e0a8 = 0;
    ram_000000000276e0b0 = 0;
    g_0276e0b8 = 0;
    ram_000000000276e0c0 = 0;
    g_0276e0c8 = 0;
    ram_000000000276e0d0 = 0;
    g_0276e0d8 = 0;
    ram_000000000276e0e0 = 0;
    g_0276e0e8 = 0;
    ram_000000000276e0f0 = 0;
    g_0276e0f8 = 0;
    ram_000000000276e100 = 0;
    g_0276e108 = 0;
    ram_000000000276e110 = 0;
    g_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c2558a:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c2558a;
  }
  local_80 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (int64_t *)*param_3;
  local_31 = *(char *)(param_3 + 1);
  bVar8 = local_31 == '\0';
  bVar9 = local_40 == (int64_t *)0x0;
  if (!bVar9 && !bVar8) {
    FUN_00d50b00();
  }
  lVar2 = g_0276ca68;
  if (g_0276ca68 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_01;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  plVar6 = local_40;
  lVar2 = g_0276ca80;
  if (cVar3 == '\0') {
    if (g_0276ca80 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90870();
    plVar6 = local_40;
    uVar10 = extraout_XMM0_Qa_02;
    if (lVar2 != 0) {
      uVar10 = FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d8f140(uVar10,9);
      plVar7 = local_68;
      if (plVar6 == local_68) {
        plVar7 = plVar6;
        cVar3 = local_31;
        if ((local_31 == '\0') && (plVar6 != (int64_t *)0x0)) {
          if ((char)local_60 != '\0') goto LAB_00c25917;
          FUN_00d50b00();
          cVar3 = '\x01';
        }
      }
      else {
        if ((char)local_60 != '\0') {
          cVar3 = '\x01';
          if (bVar9 || bVar8) goto LAB_00c258cf;
          FUN_00d50b20();
          goto LAB_00c25981;
        }
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar3 = '\x01';
        if (!bVar9 && !bVar8) {
          FUN_00d50b20();
        }
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00c25981;
    }
    bVar9 = false;
    bVar8 = false;
    lVar2 = g_0276ca88;
  }
  else {
    FUN_00d8f140(uVar10,8);
    plVar7 = local_68;
    if (plVar6 == local_68) {
      plVar7 = plVar6;
      cVar3 = local_31;
      if ((local_31 == '\0') && (plVar6 != (int64_t *)0x0)) {
        if ((char)local_60 != '\0') {
LAB_00c25917:
          cVar3 = '\x01';
          goto LAB_00c25981;
        }
        FUN_00d50b00();
        cVar3 = '\x01';
      }
    }
    else {
      if ((char)local_60 != '\0') {
        cVar3 = '\x01';
        if (bVar9 || bVar8) {
LAB_00c258cf:
          cVar3 = '\x01';
          plVar7 = local_68;
        }
        else {
          FUN_00d50b20();
        }
        goto LAB_00c25981;
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      cVar3 = '\x01';
      if (!bVar9 && !bVar8) {
        FUN_00d50b20();
      }
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00c25981:
    bVar9 = true;
    bVar8 = true;
    lVar2 = g_0276ca88;
    local_40 = plVar7;
    local_31 = cVar3;
  }
  g_0276ca88 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
    bVar8 = bVar9;
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_03;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_0276ca90;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,8);
    local_90 = local_68;
    plVar6 = local_78;
    local_88 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_88 = '\x01';
    iVar4 = FUN_00c716c0();
    lVar2 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(plVar6[0x19] + 0x10) + (int64_t)iVar4 * 8) + 0x10);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = local_31;
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
      cVar3 = local_31;
    }
    goto LAB_00c25c36;
  }
  if (g_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_04;
  if (cVar3 == '\0') {
    cVar3 = local_31;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar10 = FUN_00d50b20();
      cVar3 = local_31;
    }
  }
  else {
    iVar4 = *(int *)(arg1 + 0xb0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    cVar3 = local_31;
    if (iVar4 != 0) {
      uVar10 = FUN_00d8f140(uVar10,4);
      local_60 = 2;
      local_5c = *(void*)(arg1 + 0xb0);
      local_68 = &g_0263cdb0;
      local_50 = 0;
      if (local_180 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_58 = local_180;
      local_50 = '\x01';
      uVar10 = FUN_00d8cb40(uVar10,&local_68);
      plVar6 = local_c0;
      if (local_c0 == local_40) {
        cVar3 = local_31;
        if ((local_31 == '\0') && (local_c0 != (int64_t *)0x0)) {
          plVar6 = local_40;
          if (local_b8 != '\0') goto LAB_00c25d9c;
          uVar10 = FUN_00d50b00();
          cVar3 = '\x01';
        }
LAB_00c25dee:
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        if (local_b8 == '\0') {
          if (local_c0 != (int64_t *)0x0) {
            uVar10 = FUN_00d50b00();
          }
          cVar3 = '\x01';
          if ((local_31 == '\0') || (local_40 == (int64_t *)0x0)) {
            local_40 = plVar6;
          }
          else {
            local_40 = plVar6;
            uVar10 = FUN_00d50b20();
          }
          goto LAB_00c25dee;
        }
        if ((local_31 != '\0') && (local_40 != (int64_t *)0x0)) {
          local_40 = local_c0;
          uVar10 = FUN_00d50b20();
        }
LAB_00c25d9c:
        local_b8 = '\0';
        cVar3 = '\x01';
        local_40 = plVar6;
      }
      local_68 = &g_0263cdb0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        uVar10 = FUN_00d50b20();
      }
    }
  }
  plVar6 = local_78;
  if (local_80 == (int64_t *)0x0) {
    if (bVar8) {
      local_f0 = local_40;
      local_e8 = '\0';
      (**(code **)(*local_78 + 0x608))(uVar10,&local_f0);
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_e0 = local_40;
      local_d8 = '\0';
      (**(code **)(*local_78 + 0x88))(uVar10,&local_e0);
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else if (bVar8) {
    local_110 = local_40;
    local_108 = '\0';
    (**(code **)(*local_80 + 0x608))(uVar10,&local_110);
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_100 = local_40;
    local_f8 = '\0';
    (**(code **)(*local_80 + 0x88))(uVar10,&local_100);
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00c25c36:
  if ((cVar3 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_41 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c271c0
// ============================================================
// Function: FUN_00c271c0
// Address: 00c271c0
// Size: 1723 bytes
// Class: GNOverloudConvolver
// String references:
//   "ir%I_%@"

uint64_t FUN_00c271c0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint32_t uVar7;
  uint uVar8;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  int64_t local_1b8;
  uint8_t local_1b0;
  void*local_1a8;
  uint8_t local_1a0;
  void*local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  void*local_168;
  uint8_t local_160;
  void*local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  uint32_t local_60;
  uint32_t local_5c;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  
  lVar1 = g_0276ca68;
  local_48 = param_3;
  if (g_0276ca68 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar1;
  local_120 = '\x01';
  cVar5 = FUN_00d90870();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276ca70;
  uVar9 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
  if (cVar5 != '\0') goto LAB_00c27866;
  if (g_0276ca70 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar1;
  local_110 = '\x01';
  cVar5 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa;
  if ((local_110 != '\0') && (local_118 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar1 = g_0276ca78;
  if (cVar5 != '\0') {
    local_1b8 = *param_1;
    local_1b0 = 0;
    FUN_00c26750(uVar10,&local_1b8);
    if (((char)local_60 == '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b00();
    }
    local_108 = *local_48;
    local_100 = '\0';
    iVar6 = FUN_00c716c0();
    uVar10 = extraout_XMM0_Qa_00;
    if ((local_100 != '\0') && (local_108 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 == 0) {
      local_198 = local_68;
      local_190 = 0;
      FUN_00c27bd0(uVar10,0);
    }
    else {
      local_1a8 = local_68;
      local_1a0 = 0;
      FUN_00c27bd0(uVar10,2);
    }
    FUN_01d243a0();
    if (local_68 != (void*)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00c27866;
  }
  if (g_0276ca78 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar1;
  local_f0 = '\x01';
  cVar5 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_01;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar1 = g_0276ca60;
  if (cVar5 != '\0') {
    local_188 = *param_2;
    local_180 = 0;
    local_178 = *param_1;
    local_170 = 0;
    FUN_00c26750(uVar10,&local_178);
    if (((char)local_60 == '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b00();
    }
    local_e8 = *local_48;
    local_e0 = '\0';
    iVar6 = FUN_00c716c0();
    uVar10 = extraout_XMM0_Qa_02;
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 == 0) {
      local_158 = local_68;
      local_150 = 0;
      FUN_00c29420(uVar10,0);
    }
    else {
      local_168 = local_68;
      local_160 = 0;
      FUN_00c29420(uVar10,2);
    }
    FUN_01d243a0();
    if (local_68 != (void*)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00c27866;
  }
  if (g_0276ca60 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  cVar5 = FUN_00d90870();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = local_48;
  lVar1 = g_0276ca90;
  if (cVar5 != '\0') {
    lVar1 = *param_2;
    local_c8 = *local_48;
    local_c0 = '\0';
    iVar6 = FUN_00c716c0();
    local_40 = *(int64_t **)
                (*(int64_t *)
                  (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar6 * 8) + 0x20);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (((double)local_40 != 0.0) || (NAN((double)local_40))) {
      local_b8 = *plVar4;
      local_b0 = '\0';
      uVar7 = FUN_00c716c0();
      *(void*)(this_ptr + 0xb0) = uVar7;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d243a0();
    }
    goto LAB_00c27866;
  }
  if (g_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  cVar5 = FUN_00d90870();
  if (cVar5 == '\0') {
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar6 = *(int *)(this_ptr + 0xb0);
    uVar10 = extraout_XMM0_Qa_03;
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 != 0) {
      uVar10 = FUN_00d8f140(uVar10,4);
      local_58 = local_138;
      local_60 = 2;
      local_5c = *(void*)(this_ptr + 0xb0);
      local_68 = &g_0263cdb0;
      local_50 = 0;
      if (local_138 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_50 = '\x01';
      FUN_00d8cb40(uVar10,&local_68);
      lVar3 = local_78;
      lVar1 = *param_1;
      if (lVar1 == local_78) {
        if (((char)param_1[1] != '\0') || (local_78 == 0)) goto LAB_00c2778c;
        local_40 = param_1 + 1;
        if (local_70 == '\0') {
          FUN_00d50b00();
          goto LAB_00c27785;
        }
LAB_00c2774c:
        *(void*)local_40 = 1;
        local_70 = '\0';
      }
      else {
        local_40 = param_1 + 1;
        lVar2 = param_1[1];
        if (local_70 != '\0') {
          *param_1 = local_78;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00c2774c;
        }
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        *param_1 = lVar3;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_00c27785:
        *(void*)local_40 = 1;
LAB_00c2778c:
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      local_68 = &g_0263cdb0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_148 = *param_2;
  local_140 = 0;
  local_a8 = *param_1;
  local_a0 = '\0';
  local_98 = *local_48;
  local_90 = '\0';
  uVar8 = FUN_00c17aa0(&local_a8,&local_148,&local_98);
  uVar9 = (uint64_t)uVar8;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_00c27866:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 00c29420
// ============================================================
// Function: FUN_00c29420
// Address: 00c29420
// Size: 704 bytes
// Class: GNOverloudConvolver

void FUN_00c29420(uint64_t param_1,int param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t in_XMM2 [16];
  uint8_t auVar15 [16];
  uint8_t in_XMM3 [16];
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5d0))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  lVar2 = *arg1;
  if (lVar2 != 0) {
    lVar11 = 0;
    while( true ) {
      iVar10 = *(int *)(lVar2 + 0x18);
      iVar5 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      if (iVar5 >> 2 <= (int)lVar11) break;
      lVar3 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(local_40 + 200) + 0x10) +
               (int64_t)*(int *)(*(int64_t *)(lVar2 + 0x10) + lVar11 * 4) * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      if (*(int *)(lVar3 + 0x28) != param_2) {
        *(int *)(lVar3 + 0x28) = param_2;
        *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
      }
      lVar11 = lVar11 + 1;
      FUN_00d50b20();
    }
    lVar2 = *arg1;
    if (lVar2 != 0) {
      if (param_2 == 0) {
        iVar10 = -1;
        while( true ) {
          iVar10 = iVar10 + 1;
          iVar5 = *(int *)(lVar2 + 0x18);
          iVar7 = iVar5 + 3;
          if (-1 < iVar5) {
            iVar7 = iVar5;
          }
          if (iVar7 >> 2 <= iVar10) break;
          iVar5 = *(int *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar10 * 4);
          lVar11 = *(int64_t *)(local_40 + 0xd8);
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (0 < (int)uVar1) {
              lVar3 = *(int64_t *)(lVar11 + 0x10);
              if (7 < uVar1) {
                uVar8 = (uint64_t)(uVar1 & 0xfffffff8);
                uVar9 = (uVar8 - 8 >> 3) + 1;
                if (uVar8 - 8 == 0) {
                  auVar12 = (uint8_t  [16])0x0;
                  lVar6 = 0;
                  auVar13 = (uint8_t  [16])0x0;
                  goto LAB_00c2963e;
                }
                lVar4 = -(uVar9 & 0xfffffffffffffffe);
                auVar12 = (uint8_t  [16])0x0;
                lVar6 = 0;
                auVar13 = (uint8_t  [16])0x0;
                do {
                  auVar15 = pmovzxbd(in_XMM2,*(void*)(lVar3 + lVar6));
                  in_XMM2._0_4_ = auVar15._0_4_ + auVar12._0_4_;
                  in_XMM2._4_4_ = auVar15._4_4_ + auVar12._4_4_;
                  in_XMM2._8_4_ = auVar15._8_4_ + auVar12._8_4_;
                  in_XMM2._12_4_ = auVar15._12_4_ + auVar12._12_4_;
                  auVar15 = pmovzxbd(in_XMM3,*(void*)(lVar3 + 4 + lVar6));
                  in_XMM3._0_4_ = auVar15._0_4_ + auVar13._0_4_;
                  in_XMM3._4_4_ = auVar15._4_4_ + auVar13._4_4_;
                  in_XMM3._8_4_ = auVar15._8_4_ + auVar13._8_4_;
                  in_XMM3._12_4_ = auVar15._12_4_ + auVar13._12_4_;
                  auVar15 = pmovzxbd(auVar12,*(void*)(lVar3 + 8 + lVar6));
                  auVar14 = pmovzxbd(auVar13,*(void*)(lVar3 + 0xc + lVar6));
                  auVar12._0_4_ = auVar15._0_4_ + in_XMM2._0_4_;
                  auVar12._4_4_ = auVar15._4_4_ + in_XMM2._4_4_;
                  auVar12._8_4_ = auVar15._8_4_ + in_XMM2._8_4_;
                  auVar12._12_4_ = auVar15._12_4_ + in_XMM2._12_4_;
                  auVar13._0_4_ = auVar14._0_4_ + in_XMM3._0_4_;
                  auVar13._4_4_ = auVar14._4_4_ + in_XMM3._4_4_;
                  auVar13._8_4_ = auVar14._8_4_ + in_XMM3._8_4_;
                  auVar13._12_4_ = auVar14._12_4_ + in_XMM3._12_4_;
                  lVar6 = lVar6 + 0x10;
                  lVar4 = lVar4 + 2;
                } while (lVar4 != 0);
                auVar15 = auVar12;
                auVar14 = auVar13;
                if ((uVar9 & 1) != 0) {
LAB_00c2963e:
                  auVar15 = pmovzxbd(in_XMM2,*(void*)(lVar3 + 4 + lVar6));
                  auVar14._0_4_ = auVar13._0_4_ + auVar15._0_4_;
                  auVar14._4_4_ = auVar13._4_4_ + auVar15._4_4_;
                  auVar14._8_4_ = auVar13._8_4_ + auVar15._8_4_;
                  auVar14._12_4_ = auVar13._12_4_ + auVar15._12_4_;
                  in_XMM2 = pmovzxbd(auVar15,*(void*)(lVar3 + lVar6));
                  auVar15._0_4_ = auVar12._0_4_ + in_XMM2._0_4_;
                  auVar15._4_4_ = auVar12._4_4_ + in_XMM2._4_4_;
                  auVar15._8_4_ = auVar12._8_4_ + in_XMM2._8_4_;
                  auVar15._12_4_ = auVar12._12_4_ + in_XMM2._12_4_;
                }
                iVar7 = auVar15._12_4_ + auVar14._12_4_ + auVar15._4_4_ + auVar14._4_4_ +
                        auVar15._8_4_ + auVar14._8_4_ + auVar15._0_4_ + auVar14._0_4_;
                goto joined_r0x00c29670;
              }
              uVar8 = 0;
              iVar7 = 0;
              do {
                iVar7 = iVar7 + (uint)*(byte *)(lVar3 + uVar8);
                uVar8 = uVar8 + 1;
joined_r0x00c29670:
              } while (uVar8 != uVar1);
              if (iVar7 != 0) {
                FUN_00d50b00();
                *(void*)(*(int64_t *)(lVar11 + 0x10) + (int64_t)iVar5) = 1;
                FUN_00d50b20();
              }
            }
          }
          FUN_00c29780();
        }
      }
      else {
        lVar11 = 0;
        while( true ) {
          iVar10 = *(int *)(lVar2 + 0x18);
          iVar5 = iVar10 + 3;
          if (-1 < iVar10) {
            iVar5 = iVar10;
          }
          if (iVar5 >> 2 <= (int)lVar11) break;
          iVar10 = *(int *)(*(int64_t *)(lVar2 + 0x10) + lVar11 * 4);
          lVar3 = *(int64_t *)(local_40 + 0xd8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          *(void*)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar10) = 0;
          FUN_00d50b20();
          lVar11 = lVar11 + 1;
          FUN_00c29780();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c29bd0
// ============================================================
// Function: FUN_00c29bd0
// Address: 00c29bd0
// Size: 1663 bytes
// Class: GNOverloudConvolver

uint64_t FUN_00c29bd0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint32_t uVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  uint8_t local_108 [8];
  uint8_t local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int local_b4;
  int64_t local_58;
  char local_50;
  
  if (param_2 != 0) {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    FUN_01caea40();
    FUN_00d46530();
    lVar1 = g_0276cab0;
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      lVar1 = g_0276cab0;
    }
    g_0276cab0 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d46300();
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    plVar2 = g_0276cab8;
    if (g_0276cab8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_f8 = g_0276cac0;
    if (g_0276cac0 != 0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_e0 = '\0';
    local_e8 = plVar6;
    FUN_00d40470(&local_e8,&stack0xffffffffffffff60,3,0);
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    plVar6 = g_0276cab8;
    if (g_0276cab8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_d8 = plVar6;
    local_d0 = '\x01';
    FUN_000175c0();
    cVar3 = FUN_00d45ad0();
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_01f4e930();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x388))();
      FUN_00b7ace0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x368))();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      iVar4 = FUN_01f4eb70();
      if (iVar4 == 0) {
        (**(code **)(*plVar2 + 0x380))();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_c0 = '\0';
        local_c8 = plVar2;
        FUN_00b810f0();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x5d0))();
        iVar4 = FUN_01caea40();
        lVar1 = *(int64_t *)(*(int64_t *)(plVar2[0x19] + 0x10) + (int64_t)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        iVar4 = *(int *)(lVar1 + 0x28);
        FUN_00d50b20();
        local_b4 = iVar4;
        (**(code **)(*this_ptr + 0x5d0))();
        uVar5 = FUN_01caea40();
        (**(code **)(*this_ptr + 0x608))();
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_100 = 1;
        FUN_00c1f910(local_108,uVar5,local_b4 != 0);
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        FUN_01caea40();
        FUN_00c29780();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x600))();
      FUN_01d114f0();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 00c26b60
// ============================================================
// Function: FUN_00c26b60
// Address: 00c26b60
// Size: 998 bytes
// Class: GNOverloudConvolver
// String references:
//   "ir%I_%@"

void FUN_00c26b60(int64_t *param_1,void*param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t this_ptr;
  int64_t local_108;
  int64_t local_100;
  uint64_t local_f8;
  void*local_f0;
  void*local_e8;
  uint32_t local_e0;
  uint32_t local_dc;
  int64_t local_d8;
  char local_d0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_0276ca90;
  local_f0 = param_2;
  if (g_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  cVar4 = FUN_00d90870();
  if (cVar4 == '\0') {
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00c26d52;
  }
  iVar1 = *(int *)(this_ptr + 0xb0);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 == 0) goto LAB_00c26d52;
  FUN_00d8f140();
  local_d8 = local_78;
  local_e0 = 2;
  local_dc = *(void*)(this_ptr + 0xb0);
  local_e8 = &g_0263cdb0;
  local_d0 = 0;
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  FUN_00d8cb40();
  lVar2 = *param_1;
  if (lVar2 == local_40) {
    if (((char)param_1[1] == '\0') && (local_40 != 0)) {
      local_68 = param_1 + 1;
      if (local_38 != '\0') goto LAB_00c26cc1;
      FUN_00d50b00();
      goto LAB_00c26cfb;
    }
LAB_00c26d02:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = param_1 + 1;
    lVar3 = param_1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_1 = local_40;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_00c26cfb:
      *(void*)local_68 = 1;
      goto LAB_00c26d02;
    }
    *param_1 = local_40;
    if (((char)lVar3 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_00c26cc1:
    *(void*)local_68 = 1;
    local_38 = '\0';
  }
  local_e8 = &g_0263cdb0;
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_00c26d52:
  lVar2 = g_0276ca98;
  if (g_0276ca98 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0276caa0;
  if (g_0276caa0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_108 = *param_1;
  local_100 = lVar3;
  local_f8 = *local_f0;
  FUN_002d73e0(&local_100,&local_108,&local_f8,4);
  FUN_0036bfe0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_002d10d0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_98 = g_0276caa8;
  if (g_0276caa8 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_88 = local_40;
  local_80 = '\0';
  FUN_00d40470(&local_88,&stack0xffffffffffffffb0,3,3);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_e0 != '\0') && (local_e8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d243a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c26750
// ============================================================
// Function: FUN_00c26750
// Address: 00c26750
// Size: 817 bytes
// Class: GNOverloudConvolver

void FUN_00c26750(void)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  void*puVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  uint64_t extraout_XMM0_Qa;
  int64_t local_50;
  char local_48;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  FUN_01d3a560();
  if (local_48 == '\0') {
    if (local_50 == 0) goto LAB_00c26801;
    FUN_00d50b00();
LAB_00c267ec:
    uVar6 = FUN_01d3b590();
    if ((uVar6 & 8) != 0) {
      plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      dVar1 = *(double *)(*plVar7 + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(*plVar7,1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 0;
        plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[1] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[1],1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 1;
        plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[2] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[2],1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 2;
        plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[3] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[3],1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 3;
        plVar7 = *(int64_t **)(*(int64_t *)(*arg1 + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[4] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(dVar1,1);
        *(void*)(puVar5[2] + (int64_t)iVar4) = 4;
      }
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_00c26a67;
    }
    bVar3 = false;
  }
  else {
    if (local_50 != 0) goto LAB_00c267ec;
LAB_00c26801:
    bVar3 = true;
  }
  iVar4 = FUN_00d8c7a0();
  FUN_00d8f140(extraout_XMM0_Qa,iVar4 + -1);
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  iVar4 = FUN_00c716c0();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  dVar1 = *(double *)
           (*(int64_t *)
             (*(int64_t *)(*(int64_t *)(*arg1 + 200) + 0x10) + (int64_t)iVar4 * 8) + 0x20);
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    iVar2 = *(int *)(puVar5 + 3);
    FUN_00c8e340((int64_t)iVar4,1);
    *(int *)(puVar5[2] + (int64_t)iVar2) = iVar4;
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  if (bVar3) {
    return;
  }
LAB_00c26a67:
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c29780
// ============================================================
// Function: FUN_00c29780
// Address: 00c29780
// Size: 629 bytes
// Class: GNOverloudConvolver

void FUN_00c29780(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_f8;
  char local_f0;
  int64_t local_a0;
  int64_t local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  (**(code **)(*this_ptr + 0x5d0))();
  piVar1 = (int *)(*(int64_t *)
                    (*(int64_t *)(*(int64_t *)(local_f8 + 200) + 0x10) + (int64_t)unaff_ESI * 8)
                  + 0x2c);
  *piVar1 = *piVar1 + 1;
  if (local_f0 != '\0') {
    FUN_00d50b20();
  }
  lVar2 = g_0276ca98;
  if (g_0276ca98 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_0276cac8;
  if (g_0276cac8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0276caa0;
  if (g_0276caa0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x5d0))();
  local_a0 = lVar4;
  local_98 = lVar3;
  local_90 = local_88;
  FUN_002d73e0(&local_98,&local_a0,&local_90,4);
  FUN_0036bfe0();
  lVar5 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_002d10d0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_78 = g_0276caa8;
  if (g_0276caa8 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_00d50b00();
  local_68 = lVar5;
  local_60 = '\0';
  FUN_00d40470(&local_68,&stack0xffffffffffffffb8,3,3);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00bf3f50
// ============================================================
// Function: FUN_00bf3f50
// Address: 00bf3f50
// Size: 635 bytes
// Class: GNOverloudConvolver
// String references:
//   "GNOverloudConvolver"

void FUN_00bf3f50(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_110;
  int64_t local_108;
  int64_t local_100;
  void*puStack_30;
  
  if ((g_0276e120 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0276e070 = FUN_00b10020();
    g_0276e058 = "GNOverloudConvolver";
    g_0276e060 = 0xe0;
    g_0276e068 = FUN_00c41070;
    g_0276e078 = 0;
    ram_000000000276e080 = 0;
    g_0276e088 = 0;
    ram_000000000276e090 = 0;
    g_0276e098 = 0;
    ram_000000000276e0a0 = 0;
    g_0276e0a8 = 0;
    ram_000000000276e0b0 = 0;
    g_0276e0b8 = 0;
    ram_000000000276e0c0 = 0;
    g_0276e0c8 = 0;
    ram_000000000276e0d0 = 0;
    g_0276e0d8 = 0;
    ram_000000000276e0e0 = 0;
    g_0276e0e8 = 0;
    ram_000000000276e0f0 = 0;
    g_0276e0f8 = 0;
    ram_000000000276e100 = 0;
    g_0276e108 = 0;
    _ram_000000000276e110 = 0;
    g_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (g_0276e113 == '\0') {
    FUN_00af3fa0();
    FUN_00e87760();
    FUN_00d4ff40();
    puStack_30 = (void*)0x0;
    if (1 < g_02802630) {
      puStack_30 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puStack_30 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00c46990();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00c1a890();
    FUN_00e87920(uVar2,0);
    FUN_00c226d0();
    FUN_00c228b0();
    FUN_00c22b10();
    if (local_100 != 0) {
      FUN_00d50b20();
    }
    if (local_108 != 0) {
      FUN_00d50b20();
    }
    if (local_110 != 0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
    if (puStack_30 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
  }
  return;
}



// ============================================================
// 00c1a890
// ============================================================
// Function: FUN_00c1a890
// Address: 00c1a890
// Size: 536 bytes
// Class: GNOverloudConvolver
// String references:
//   "_updateIR"
//   "GNOverloudConvolver"

void FUN_00c1a890(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87cb0();
  // [STATIC_INIT: property registration]
      g_028a5e20 = "_updateIR";
      g_028a5e28 = &g_0276e058;
      g_028a5e30 = 0;
      g_028a5e38 = &g_02771018;
      g_028a5e40 = FUN_00c4d4c0;
      g_028a5e48 = FUN_00c1aad0;
      g_028a5e50 = 0;
      ram_00000000028a5e58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

