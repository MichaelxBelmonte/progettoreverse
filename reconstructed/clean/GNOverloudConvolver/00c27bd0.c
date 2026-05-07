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

