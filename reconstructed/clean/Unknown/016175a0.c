// Function: FUN_016175a0
// Address: 016175a0
// Size: 1734 bytes
// Class: Unknown

void FUN_016175a0(uint32_t param_1,int64_t *param_2,uint param_3)

{
  uint64_t uVar1;
  float *pfVar2;
  float *pfVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  float fVar7;
  uint64_t uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint in_ECX;
  int64_t lVar21;
  int64_t lVar22;
  int iVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t *arg1;
  int64_t lVar28;
  uint64_t uVar29;
  int64_t lVar30;
  int64_t lVar31;
  float fVar32;
  float fVar33;
  uint32_t uVar34;
  uint32_t uVar35;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  int64_t local_b8;
  int64_t local_b0;
  int64_t local_98;
  char local_90;
  int64_t local_50;
  int64_t local_38;
  
  iVar13 = FUN_01483930();
  lVar15 = FUN_01483940();
  if ((((lVar15 != 0) && (lVar16 = FUN_01483950(), lVar16 != 0)) &&
      (lVar17 = FUN_01483960(), lVar17 != 0)) && (___bzero(), 0 < (int)in_ECX)) {
    lVar21 = (int64_t)(int)param_3;
    uVar18 = (uint64_t)param_3;
    uVar24 = (uint64_t)(param_3 & 0xfffffffc);
    local_b8 = 1;
    local_b0 = 0;
    uVar26 = 0;
    local_38 = 0;
    bVar10 = false;
    local_50 = 0;
    bVar11 = false;
    lVar28 = 0;
    bVar9 = false;
    do {
      lVar25 = uVar26 * lVar21;
      if (*param_2 == 0) {
        uVar29 = 0;
      }
      else {
        uVar29 = lVar25 * 4 + *(int64_t *)(*param_2 + 0x10);
      }
      lVar4 = *(int64_t *)(*arg1 + 0x10);
      FUN_015fe030(param_1,uVar26 & 0xffffffff);
      if (local_98 == local_38) {
        if ((bVar10) || (local_98 == 0)) {
joined_r0x01617813:
          lVar22 = local_38;
          bVar12 = bVar10;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar22 = local_38;
          bVar12 = true;
          if (local_90 == '\0') {
            FUN_00d50b00();
            goto LAB_016177f7;
          }
        }
      }
      else {
        lVar22 = local_98;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
          bVar12 = true;
          if ((bVar10) && (local_38 != 0)) {
            FUN_00d50b20();
            local_38 = local_98;
LAB_016177f7:
            bVar10 = true;
            goto joined_r0x01617813;
          }
        }
        else {
          bVar12 = true;
          if ((bVar10) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar10 = bVar12;
      uVar1 = lVar4 + lVar25 * 4;
      if (0 < *(int *)(lVar22 + 0xc)) {
        lVar31 = 0;
        do {
          lVar30 = *(int64_t *)(*(int64_t *)(lVar22 + 0x10) + lVar31 * 8);
          if (local_50 == lVar30) {
            if ((!bVar11) && (local_50 != 0)) {
              bVar11 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar30 != 0) {
              FUN_00d50b00();
            }
            if ((bVar11) && (local_50 != 0)) {
              FUN_00d50b20();
              bVar11 = true;
              local_50 = lVar30;
            }
            else {
              bVar11 = true;
              local_50 = lVar30;
            }
          }
          lVar19 = (int64_t)*(int *)(lVar22 + 0xc);
          lVar30 = lVar31;
          if (lVar31 < lVar19) {
            do {
              lVar19 = *(int64_t *)(*(int64_t *)(lVar22 + 0x10) + lVar30 * 8);
              if (lVar28 == lVar19) {
                if ((!bVar9) && (lVar28 != 0)) {
                  bVar9 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar19 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar9) && (lVar28 != 0)) {
                  FUN_00d50b20();
                  bVar9 = true;
                  lVar28 = lVar19;
                }
                else {
                  bVar9 = true;
                  lVar28 = lVar19;
                }
              }
              iVar23 = *(int *)(lVar28 + 0x10) - *(int *)(local_50 + 0x10);
              if (iVar23 < iVar13) {
                lVar19 = (int64_t)iVar23;
                fVar33 = *(float *)(lVar15 + lVar19 * 4);
                if (g_0239424c < fVar33) {
                  uVar14 = FUN_00e7d780(((float)(*(int *)(lVar28 + 0x10) -
                                                *(int *)(lVar17 + lVar19 * 4)) *
                                         *(float *)(lVar28 + 0x1c) +
                                        (float)(*(int *)(local_50 + 0x10) -
                                               *(int *)(lVar16 + lVar19 * 4)) *
                                        *(float *)(local_50 + 0x1c)) /
                                        (*(float *)(local_50 + 0x1c) + *(float *)(lVar28 + 0x1c)));
                  if (-1 < (int)uVar14) {
                    fVar32 = (float)_powf(*(float *)(local_50 + 0x1c) + *(float *)(lVar28 + 0x1c));
                    *(float *)(uVar1 + (uint64_t)uVar14 * 4) =
                         fVar33 * fVar32 + *(float *)(uVar1 + (uint64_t)uVar14 * 4);
                  }
                }
              }
              lVar30 = lVar30 + 1;
              lVar19 = (int64_t)*(int *)(lVar22 + 0xc);
            } while ((int)lVar30 < *(int *)(lVar22 + 0xc));
          }
          lVar31 = lVar31 + 1;
        } while (lVar31 < lVar19);
      }
      if ((uVar29 != 0) && (0 < (int)param_3)) {
        if ((param_3 < 4) ||
           ((uVar1 < uVar29 + uVar18 * 4 && (uVar29 < lVar4 + (lVar25 + uVar18) * 4)))) {
          uVar27 = 0;
        }
        else {
          lVar25 = lVar4 + local_b0 * 4;
          uVar27 = 0;
          do {
            lVar31 = uVar29 + uVar27 * 4;
            uVar34 = *(void*)(lVar31 + 4);
            uVar6 = *(void*)(lVar31 + 0xc);
            uVar8 = _powf();
            uVar34 = _powf(uVar34);
            uVar35 = _powf(*(void*)(uVar29 + 8 + uVar27 * 4));
            uVar5 = _powf(uVar6);
            auVar37._8_4_ = extraout_XMM0_Dc;
            auVar37._0_8_ = uVar8;
            auVar37._12_4_ = extraout_XMM0_Dd;
            auVar36 = insertps(auVar37,uVar34,0x10);
            auVar37 = insertps(auVar36,uVar35,0x20);
            auVar36._8_4_ = extraout_XMM0_Dc_00;
            auVar36._0_8_ = uVar5;
            auVar36._12_4_ = extraout_XMM0_Dd_00;
            auVar36 = insertps(auVar37,auVar36,0x30);
            pfVar2 = (float *)(lVar25 + uVar27 * 4);
            fVar33 = pfVar2[1];
            fVar32 = pfVar2[2];
            fVar7 = pfVar2[3];
            pfVar3 = (float *)(lVar25 + uVar27 * 4);
            *pfVar3 = *pfVar2 * auVar36._0_4_;
            pfVar3[1] = fVar33 * auVar36._4_4_;
            pfVar3[2] = fVar32 * auVar36._8_4_;
            pfVar3[3] = fVar7 * auVar36._12_4_;
            uVar27 = uVar27 + 4;
          } while (uVar24 != uVar27);
          uVar27 = uVar24;
          if (uVar24 == uVar18) goto LAB_016176c0;
        }
        uVar20 = uVar27;
        if ((param_3 & 1) != 0) {
          fVar33 = (float)_powf(*(void*)(uVar29 + uVar27 * 4));
          *(float *)(uVar1 + uVar27 * 4) = fVar33 * *(float *)(uVar1 + uVar27 * 4);
          uVar20 = uVar27 | 1;
        }
        if (~uVar27 != -uVar18) {
          lVar4 = lVar4 + (local_b8 + uVar20) * 4;
          lVar25 = uVar29 + uVar20 * 4;
          lVar31 = 0;
          do {
            fVar33 = (float)_powf(*(void*)(lVar25 + lVar31 * 4));
            *(float *)(lVar4 + -4 + lVar31 * 4) = fVar33 * *(float *)(lVar4 + -4 + lVar31 * 4);
            fVar33 = (float)_powf(*(void*)(lVar25 + 4 + lVar31 * 4));
            *(float *)(lVar4 + lVar31 * 4) = fVar33 * *(float *)(lVar4 + lVar31 * 4);
            lVar31 = lVar31 + 2;
          } while (uVar18 - uVar20 != lVar31);
        }
      }
LAB_016176c0:
      uVar26 = uVar26 + 1;
      local_b0 = local_b0 + lVar21;
      local_b8 = local_b8 + lVar21;
      local_38 = lVar22;
    } while (uVar26 != in_ECX);
    if ((bVar9) && (lVar28 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar11) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar10) && (lVar22 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

