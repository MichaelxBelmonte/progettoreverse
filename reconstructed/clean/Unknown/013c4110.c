// Function: FUN_013c4110
// Address: 013c4110
// Size: 2025 bytes
// Class: Unknown

void FUN_013c4110(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
                 uint param_5,uint param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  int iVar12;
  int64_t lVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint64_t uVar20;
  int unaff_ESI;
  uint64_t uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint32_t uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int64_t *local_res8;
  int64_t *local_res10;
  int64_t *local_res18;
  int64_t *local_res20;
  int64_t local_c8;
  char local_c0;
  float local_94;
  int64_t local_90;
  int64_t local_88;
  int64_t local_80;
  
  lVar13 = (int64_t)unaff_ESI;
  uVar2 = *(uint *)(*(int64_t *)(*param_2 + 0x10) + lVar13 * 4);
  iVar3 = *(int *)(*(int64_t *)(*param_1 + 0x10) + lVar13 * 4);
  uVar16 = iVar3 - uVar2;
  if ((1 < (int)uVar16) &&
     (uVar4 = *(uint *)(*(int64_t *)(*param_3 + 0x10) + lVar13 * 4), 0 < (int)uVar4)) {
    uVar18 = uVar2 + 1;
    fVar26 = g_02390124 / (float)(int)uVar16;
    lVar5 = *(int64_t *)(*(int64_t *)(*param_4 + 0x10) + lVar13 * 8);
    lVar6 = *(int64_t *)(*(int64_t *)(*local_res8 + 0x10) + lVar13 * 8);
    lVar13 = *(int64_t *)(*(int64_t *)(*local_res10 + 0x10) + lVar13 * 8);
    uVar22 = 0;
    lVar23 = 0;
    local_88 = 0;
    local_80 = 0;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + uVar22 * 8);
      lVar8 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + uVar22 * 8);
      lVar9 = *(int64_t *)(*(int64_t *)(lVar13 + 0x10) + uVar22 * 8);
      if (0 < (int)param_5) {
        uVar21 = 0;
        do {
          lVar10 = *(int64_t *)(*(int64_t *)(*local_res20 + 0x10) + uVar21 * 8);
          if (local_88 != lVar10) {
            local_88 = lVar10;
          }
          uVar20 = (int64_t)(int)uVar18;
          if ((int)uVar18 < iVar3) {
            do {
              if (*(int64_t *)(*(int64_t *)(local_88 + 0x10) + uVar20 * 8) == 0) {
                FUN_00c8e690();
                if ((local_c0 == '\0') && (local_c8 != 0)) {
                  FUN_00d50b00();
                }
                FUN_00c92170();
                FUN_00c92160();
                uVar25 = ___bzero();
                local_c0 = '\0';
                FUN_00d233f0(uVar25,uVar20 & 0xffffffff);
                FUN_00d50b20();
              }
              uVar20 = uVar20 + 1;
            } while (iVar3 != (int)uVar20);
          }
          plVar14 = *(int64_t **)(lVar9 + 0x10);
          lVar10 = plVar14[uVar16];
          if ((((lVar10 == 0) || ((int64_t)*(int *)(lVar10 + 0xc) <= (int64_t)uVar21)) ||
              (uVar17 = iVar3 - *(int *)(*(int64_t *)(lVar8 + 0x10) + (uint64_t)uVar16 * 4),
              (int)uVar17 < 0)) ||
             (lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + uVar21 * 8),
             *(int *)(lVar10 + 0xc) <= (int)uVar17)) {
            local_90 = 0;
          }
          else {
            local_90 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + (uint64_t)uVar17 * 8);
          }
          if (1 < (int)param_6) {
            uVar20 = 1;
            do {
              if (local_90 == 0) {
                fVar27 = 0.0;
              }
              else {
                fVar27 = *(float *)(*(int64_t *)(local_90 + 0x10) + uVar20 * 4);
              }
              local_94 = *(float *)(*(int64_t *)
                                     (*(int64_t *)
                                       (*(int64_t *)
                                         (*(int64_t *)(*(int64_t *)(*plVar14 + 0x10) + uVar21 * 8)
                                         + 0x10) +
                                       ((int64_t)(int)uVar2 - (int64_t)**(int **)(lVar8 + 0x10)) *
                                       8) + 0x10) + uVar20 * 4);
              lVar10 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + 8);
              if (lVar23 != lVar10) {
                lVar23 = lVar10;
              }
              iVar19 = *(int *)(*(int64_t *)(lVar8 + 0x10) + 4);
              lVar10 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar9 + 0x10) + 8) + 0x10) +
                        uVar21 * 8);
              if (local_80 != lVar10) {
                local_80 = lVar10;
              }
              if ((int)uVar18 < iVar3) {
                bVar11 = local_94 < fVar27;
                fVar27 = fVar27 - local_94;
                uVar24 = 0;
                do {
                  lVar10 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + 8 + uVar24 * 8);
                  if (lVar23 != lVar10) {
                    if (lVar10 == 0) break;
                    lVar23 = *(int64_t *)
                              (*(int64_t *)
                                (*(int64_t *)(*(int64_t *)(lVar9 + 0x10) + 8 + uVar24 * 8) + 0x10)
                              + uVar21 * 8);
                    if (local_80 != lVar23) {
                      local_80 = lVar23;
                    }
                    iVar19 = *(int *)(*(int64_t *)(lVar8 + 0x10) + 4 + uVar24 * 4);
                    lVar23 = lVar10;
                  }
                  local_94 = local_94 + (float)((uint)(fVar27 * fVar26) & -(uint)bVar11);
                  if (local_80 != 0) {
                    uVar15 = (uint64_t)(uint)-iVar19 + uVar18 + uVar24;
                    iVar12 = (int)uVar15;
                    if (((-1 < iVar12) && (iVar12 < *(int *)(local_80 + 0xc))) &&
                       (lVar10 = *(int64_t *)
                                  (*(int64_t *)(local_80 + 0x10) + (uVar15 & 0xffffffff) * 8),
                       lVar10 != 0)) {
                      lVar10 = *(int64_t *)(lVar10 + 0x10);
                      fVar1 = *(float *)(lVar10 + uVar20 * 4);
                      if (local_94 < fVar1) {
                        fVar28 = (fVar1 - local_94) *
                                 *(float *)(*(int64_t *)(*local_res18 + 0x10) + uVar24 * 4);
                        *(float *)(lVar10 + uVar20 * 4) = fVar1 - fVar28;
                        lVar10 = *(int64_t *)
                                  (*(int64_t *)
                                    (*(int64_t *)(local_88 + 0x10) + (int64_t)(int)uVar18 * 8 +
                                    uVar24 * 8) + 0x10);
                        *(float *)(lVar10 + uVar20 * 4) = fVar28 + *(float *)(lVar10 + uVar20 * 4);
                      }
                    }
                  }
                  uVar24 = uVar24 + 1;
                } while (~uVar2 + iVar3 != uVar24);
              }
              uVar20 = uVar20 + 1;
              if (uVar20 == param_6) break;
              plVar14 = *(int64_t **)(lVar9 + 0x10);
            } while( true );
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != param_5);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar4);
  }
  return;
}

