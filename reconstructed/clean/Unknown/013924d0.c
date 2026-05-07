// Function: FUN_013924d0
// Address: 013924d0
// Size: 3295 bytes
// Class: Unknown

void FUN_013924d0(float param_1,uint32_t param_2,int64_t param_3,uint param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint32_t uVar3;
  double dVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  float *pfVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t in_RDX;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar16;
  bool bVar17;
  int iVar18;
  uint64_t uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char local_res8;
  byte local_res10;
  int64_t local_100;
  char local_f8;
  int64_t local_68;
  int64_t local_50;
  
  FUN_014b9ce0();
  if ((local_f8 == '\0') && (local_100 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *(int64_t *)(this_ptr + 0x1a0);
  if (lVar6 == 0) {
    FUN_0132d640();
    lVar6 = *(int64_t *)(this_ptr + 0x1a0);
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  uVar5 = *(uint *)(*arg1 + 0xc);
  uVar15 = (uint64_t)uVar5;
  if (uVar15 == 0) {
    bVar17 = false;
    local_50 = 0;
  }
  else {
    uVar3 = *(void*)(lVar6 + 0x2c);
    dVar4 = *(double *)(lVar6 + 0x50);
    lVar8 = FUN_00e83010();
    if ((int)uVar5 < 1) {
      bVar17 = false;
      local_50 = 0;
    }
    else {
      fVar20 = (float)dVar4;
      fVar24 = (float)(int)param_4 * fVar20;
      lVar16 = (int64_t)(int)param_4;
      uVar12 = 0;
      local_50 = 0;
      if (local_res8 == '\0') {
        bVar17 = false;
        do {
          lVar7 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar12 * 8);
          if (local_50 == lVar7) {
            if ((!bVar17) && (local_50 != 0)) {
              bVar17 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            if ((bVar17) && (local_50 != 0)) {
              FUN_00d50b20();
              bVar17 = true;
              local_50 = lVar7;
            }
            else {
              bVar17 = true;
              local_50 = lVar7;
            }
          }
          ___bzero();
          if (NAN(*(float *)(local_50 + 0x20))) {
            FUN_014eecb0(param_1,in_RDX,uVar3);
          }
          if (NAN(*(float *)(local_50 + 0x10))) {
            FUN_014eed60(fVar20,*(void*)(lVar6 + 0x20));
          }
          fVar21 = (float)_exp2f(*(float *)(local_50 + 0x14) * g_023941f4);
          fVar21 = fVar21 * g_023941f8;
          if (fVar21 <= fVar24) {
            iVar18 = 2;
            fVar25 = fVar21;
            fVar22 = g_02390124;
            do {
              fVar23 = (float)_powf(fVar22,param_2);
              fVar23 = fVar23 * fVar21 * param_1;
              fVar22 = fVar20;
              if (fVar20 <= fVar23) {
                fVar22 = fVar23;
              }
              FUN_014b74f0(fVar25,fVar22,fVar20,uVar3);
              fVar22 = (float)iVar18;
              fVar25 = fVar21 * fVar22;
              iVar18 = iVar18 + 1;
            } while (fVar25 <= fVar24);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar15);
      }
      else {
        bVar17 = false;
        do {
          lVar7 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar12 * 8);
          if (local_50 == lVar7) {
            if ((!bVar17) && (local_50 != 0)) {
              bVar17 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            if ((bVar17) && (local_50 != 0)) {
              FUN_00d50b20();
              bVar17 = true;
              local_50 = lVar7;
            }
            else {
              bVar17 = true;
              local_50 = lVar7;
            }
          }
          ___bzero(lVar8);
          if (NAN(*(float *)(local_50 + 0x20))) {
            FUN_014eecb0(param_1,in_RDX,uVar3);
          }
          if (NAN(*(float *)(local_50 + 0x10))) {
            FUN_014eed60(fVar20,*(void*)(lVar6 + 0x20));
          }
          fVar21 = (float)_exp2f(*(float *)(local_50 + 0x14) * g_023941f4);
          fVar21 = fVar21 * g_023941f8;
          if (fVar21 <= fVar24) {
            iVar18 = 2;
            fVar25 = fVar21;
            fVar22 = g_02390124;
            do {
              fVar23 = (float)_powf(fVar22,param_2);
              fVar23 = fVar23 * fVar21 * param_1;
              fVar22 = fVar20;
              if (fVar20 <= fVar23) {
                fVar22 = fVar23;
              }
              FUN_014b74f0(fVar25,fVar22,fVar20,uVar3);
              fVar22 = (float)iVar18;
              fVar25 = fVar21 * fVar22;
              iVar18 = iVar18 + 1;
            } while (fVar25 <= fVar24);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar15);
      }
      fVar20 = g_02394274;
      if ((int)param_4 < 2) {
        uVar12 = 0;
        do {
          lVar8 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar12 * 8);
          if (local_50 == lVar8) {
            if ((!bVar17) && (local_50 != 0)) {
              bVar17 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            if ((bVar17) && (local_50 != 0)) {
              FUN_00d50b20();
              bVar17 = true;
              local_50 = lVar8;
            }
            else {
              bVar17 = true;
              local_50 = lVar8;
            }
          }
          *(void*)(local_50 + 0x28) = 0;
          uVar12 = uVar12 + 1;
        } while (uVar15 != uVar12);
      }
      else {
        uVar19 = (uint64_t)param_4;
        lVar7 = lVar8 + lVar16 * 0xc;
        lVar1 = lVar8 + lVar16 * 8;
        lVar2 = lVar8 + lVar16 * 4;
        uVar12 = 1;
        do {
          fVar24 = 0.0;
          uVar9 = uVar12;
          if (2 < uVar5 - 1) {
            fVar24 = 0.0;
            uVar14 = uVar12;
            iVar18 = -(uVar5 & 0xfffffffc);
            do {
              uVar9 = uVar14 + lVar16 * 4;
              fVar24 = fVar24 + *(float *)(lVar8 + uVar14 * 4) + *(float *)(lVar2 + uVar14 * 4) +
                       *(float *)(lVar1 + uVar14 * 4) + *(float *)(lVar7 + uVar14 * 4);
              iVar18 = iVar18 + 4;
              uVar14 = uVar9;
            } while (iVar18 != 0);
          }
          if ((uVar5 & 3) != 0) {
            pfVar10 = (float *)(lVar8 + uVar9 * 4);
            uVar11 = uVar5 & 3;
            do {
              fVar24 = fVar24 + *pfVar10;
              pfVar10 = pfVar10 + lVar16;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (fVar20 <= fVar24) {
            fVar24 = g_02390124 / fVar24;
            uVar9 = uVar12;
            uVar14 = uVar12;
            iVar18 = -(uVar5 & 0xfffffffc);
            if (2 < uVar5 - 1) {
              do {
                *(float *)(lVar8 + uVar14 * 4) = *(float *)(lVar8 + uVar14 * 4) * fVar24;
                uVar9 = uVar14 + lVar16 * 4;
                *(float *)(lVar2 + uVar14 * 4) = *(float *)(lVar2 + uVar14 * 4) * fVar24;
                *(float *)(lVar1 + uVar14 * 4) = *(float *)(lVar1 + uVar14 * 4) * fVar24;
                *(float *)(lVar7 + uVar14 * 4) = *(float *)(lVar7 + uVar14 * 4) * fVar24;
                iVar18 = iVar18 + 4;
                uVar14 = uVar9;
              } while (iVar18 != 0);
            }
            if ((uVar5 & 3) != 0) {
              pfVar10 = (float *)(lVar8 + uVar9 * 4);
              uVar11 = uVar5 & 3;
              do {
                *pfVar10 = *pfVar10 * fVar24;
                pfVar10 = pfVar10 + lVar16;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar19);
        if ((param_3 != 0 & local_res10) == 0) {
          uVar9 = (uint64_t)((uint)(uVar19 - 1) & 3);
          iVar18 = 0;
          uVar12 = 0;
          do {
            local_68 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar12 * 8);
            if (local_50 == local_68) {
              local_68 = local_50;
              if ((!bVar17) && (local_50 != 0)) {
                bVar17 = true;
                FUN_00d50b00();
              }
LAB_01393140:
              if (uVar19 - 2 < 3) goto LAB_0139314b;
LAB_01393185:
              lVar16 = lVar8 + 0x10 + (int64_t)iVar18 * 4;
              fVar20 = 0.0;
              uVar14 = 0;
              do {
                uVar13 = uVar14;
                fVar20 = *(float *)(in_RDX + 0x10 + uVar13 * 4) * *(float *)(lVar16 + uVar13 * 4) +
                         *(float *)(in_RDX + 0xc + uVar13 * 4) *
                         *(float *)(lVar16 + -4 + uVar13 * 4) +
                         *(float *)(in_RDX + 8 + uVar13 * 4) * *(float *)(lVar16 + -8 + uVar13 * 4)
                         + *(float *)(in_RDX + 4 + uVar13 * 4) *
                           *(float *)(lVar16 + -0xc + uVar13 * 4) + fVar20;
                uVar14 = uVar13 + 4;
              } while ((uVar19 - 1 & 0xfffffffffffffffc) != uVar13 + 4);
              lVar16 = uVar13 + 5;
              local_50 = local_68;
            }
            else {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
              if ((bVar17) && (local_50 != 0)) {
                FUN_00d50b20();
                bVar17 = true;
                goto LAB_01393140;
              }
              bVar17 = true;
              if (2 < uVar19 - 2) goto LAB_01393185;
LAB_0139314b:
              fVar20 = 0.0;
              lVar16 = 1;
              local_50 = local_68;
            }
            if (uVar9 != 0) {
              uVar14 = 0;
              do {
                fVar20 = fVar20 + *(float *)(in_RDX + lVar16 * 4 + uVar14 * 4) *
                                  *(float *)(lVar8 + (iVar18 + lVar16) * 4 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar9 != uVar14);
            }
            *(float *)(local_50 + 0x28) = fVar20;
            uVar12 = uVar12 + 1;
            iVar18 = iVar18 + param_4;
          } while (uVar12 != uVar15);
        }
        else {
          iVar18 = 0;
          uVar12 = 0;
          do {
            lVar16 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar12 * 8);
            if (local_50 == lVar16) {
              if (bVar17) goto joined_r0x0139303f;
              if (local_50 != 0) {
                FUN_00d50b00();
                goto LAB_01392f08;
              }
              if (param_4 == 2) goto LAB_01392f0e;
LAB_01392f5f:
              lVar7 = lVar8 + 4 + (int64_t)iVar18 * 4;
              fVar20 = 0.0;
              lVar16 = 1;
              do {
                fVar24 = *(float *)(param_3 + lVar16 * 4);
                fVar21 = g_02390124;
                if (fVar24 <= g_02390124) {
                  fVar21 = fVar24;
                }
                fVar24 = *(float *)(param_3 + 4 + lVar16 * 4);
                fVar22 = g_02390124;
                if (fVar24 <= g_02390124) {
                  fVar22 = fVar24;
                }
                fVar20 = *(float *)(in_RDX + 4 + lVar16 * 4) * *(float *)(lVar7 + lVar16 * 4) *
                         fVar22 + *(float *)(in_RDX + lVar16 * 4) *
                                  *(float *)(lVar7 + -4 + lVar16 * 4) * fVar21 + fVar20;
                lVar1 = lVar16 - (uVar19 - 1 & 0xfffffffffffffffe);
                lVar16 = lVar16 + 2;
              } while (lVar1 != -1);
            }
            else {
              if (lVar16 != 0) {
                FUN_00d50b00();
              }
              if ((bVar17) && (local_50 != 0)) {
                FUN_00d50b20();
                local_50 = lVar16;
LAB_01392f08:
                bVar17 = true;
              }
              else {
                bVar17 = true;
                local_50 = lVar16;
              }
joined_r0x0139303f:
              if (param_4 != 2) goto LAB_01392f5f;
LAB_01392f0e:
              fVar20 = 0.0;
              lVar16 = 1;
            }
            if ((uVar19 - 1 & 1) != 0) {
              fVar24 = *(float *)(param_3 + lVar16 * 4);
              fVar21 = g_02390124;
              if (fVar24 <= g_02390124) {
                fVar21 = fVar24;
              }
              fVar20 = fVar20 + *(float *)(in_RDX + lVar16 * 4) *
                                *(float *)(lVar8 + ((int)((int)uVar12 * param_4) + lVar16) * 4) *
                                fVar21;
            }
            *(float *)(local_50 + 0x28) = fVar20;
            uVar12 = uVar12 + 1;
            iVar18 = iVar18 + param_4;
          } while (uVar12 != uVar15);
        }
      }
    }
    FUN_00e83070();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_100 != 0) {
    FUN_00d50b20();
  }
  if ((bVar17) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}

