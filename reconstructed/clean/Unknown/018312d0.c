// Function: FUN_018312d0
// Address: 018312d0
// Size: 3567 bytes
// Class: Unknown

void FUN_018312d0(uint32_t param_1,float param_2,size_t param_3)

{
  uint64_t uVar1;
  uint uVar2;
  int64_t lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void*puVar8;
  void*puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int iVar12;
  void *pvVar13;
  int64_t lVar14;
  void *pvVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint64_t uVar18;
  int iVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int64_t *arg1;
  uint64_t uVar22;
  int64_t *this_ptr;
  uint64_t uVar23;
  uint64_t uVar24;
  float fVar25;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar26;
  float extraout_XMM0_Da_00;
  float fVar27;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  float local_110;
  int local_10c;
  int64_t local_108;
  void *local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  int64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  int64_t local_d0;
  uint64_t local_c8;
  float local_c0;
  int local_bc;
  uint64_t local_b8;
  uint64_t local_b0;
  int local_54;
  int64_t local_40;
  char local_38;
  
  local_b8 = CONCAT44(local_b8._4_4_,param_1);
  uVar2 = *(uint *)(**(int64_t **)(*arg1 + 0x10) + 0x18);
  local_f8 = (uint64_t)uVar2;
  uVar4 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar4 = uVar2;
  }
  local_c8 = (uint64_t)*(uint *)(*arg1 + 0xc);
  if (g_02390124 < param_2) {
    param_2 = (float)_powf(local_f8,g_02394298);
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025f0d98;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  (*g_025f0db0)();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  local_f0 = (uint64_t)(uint)((int)uVar4 >> 2);
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  (*g_02572370)();
  if (0 < (int)local_c8) {
    uVar20 = 0;
    do {
      lVar10 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar20 * 8);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      FUN_00c8e4f0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_38 = '\0';
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      uVar20 = uVar20 + 1;
    } while (local_c8 != uVar20);
  }
  lVar10 = *this_ptr;
  if (0 < *(int *)(lVar10 + 0xc)) {
    local_c0 = (float)(g_02390108 / (double)(float)local_b8);
    fVar25 = g_0239011c * param_2 + g_02390d34;
    pvVar13 = (void *)(int64_t)(((int)uVar4 >> 2) * 4);
    uVar20 = 2;
    if (2 < (int)local_f0) {
      uVar20 = local_f0 & 0xffffffff;
    }
    uVar1 = uVar20 - 1;
    local_d8 = (uint64_t)((uint)uVar1 & 7);
    uVar24 = uVar1 & 0xfffffffffffffff8;
    local_10c = (int)uVar20 + -1;
    lVar17 = 0;
    local_110 = fVar25;
    local_e0 = uVar24;
    do {
      lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar17 * 8);
      if (lVar10 != 0) {
        fVar25 = (float)FUN_00d50b00();
      }
      local_138 = '\0';
      local_140 = lVar10;
      local_d0 = lVar10;
      FUN_0133ae40(fVar25,&local_140);
      cVar5 = FUN_00d45ad0();
      uVar18 = local_d8;
      uVar26 = extraout_XMM0_Da;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar26 = FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        uVar26 = FUN_00d50b20();
      }
      local_130 = local_d0;
      local_128 = '\0';
      FUN_0133ae40(uVar26,&local_130);
      iVar6 = FUN_00d45870();
      fVar25 = extraout_XMM0_Da_00;
      if ((local_38 != '\0') && (local_40 != 0)) {
        fVar25 = (float)FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        fVar25 = (float)FUN_00d50b20();
      }
      if ((cVar5 != '\0') && (iVar6 != -1)) {
        local_120 = local_d0;
        local_118 = '\0';
        FUN_0133ae40(fVar25,&local_120);
        iVar7 = FUN_00d45870();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        iVar12 = iVar7 + 1;
        if ((int)local_c8 <= iVar7) {
          iVar12 = (int)local_c8;
        }
        iVar7 = iVar12 - iVar6;
        uVar11 = (uint64_t)iVar6;
        local_bc = iVar7;
        if (7 < (int)local_f8) {
          iVar19 = local_10c;
          if (iVar6 < iVar12) {
            uVar21 = (uint64_t)iVar12;
            local_b0 = ~uVar11 + uVar21;
            local_b8 = (uint64_t)(iVar12 - iVar6 & 3);
            uVar23 = 1;
            do {
              lVar10 = puVar9[2];
              lVar16 = *(int64_t *)(local_40 + 0x10);
              uVar18 = uVar11;
              for (uVar22 = local_b8; uVar22 != 0; uVar22 = uVar22 - 1) {
                *(void*)(lVar16 + uVar18 * 4) =
                     *(void*)
                      (*(int64_t *)(*(int64_t *)(lVar10 + uVar18 * 8) + 0x10) + uVar23 * 4);
                uVar18 = uVar18 + 1;
              }
              if (2 < local_b0) {
                do {
                  *(void*)(lVar16 + uVar18 * 4) =
                       *(void*)
                        (*(int64_t *)(*(int64_t *)(lVar10 + uVar18 * 8) + 0x10) + uVar23 * 4);
                  *(void*)(lVar16 + 4 + uVar18 * 4) =
                       *(void*)
                        (*(int64_t *)(*(int64_t *)(lVar10 + 8 + uVar18 * 8) + 0x10) + uVar23 * 4);
                  *(void*)(lVar16 + 8 + uVar18 * 4) =
                       *(void*)
                        (*(int64_t *)(*(int64_t *)(lVar10 + 0x10 + uVar18 * 8) + 0x10) +
                        uVar23 * 4);
                  *(void*)(lVar16 + 0xc + uVar18 * 4) =
                       *(void*)
                        (*(int64_t *)(*(int64_t *)(lVar10 + 0x18 + uVar18 * 8) + 0x10) +
                        uVar23 * 4);
                  uVar18 = uVar18 + 4;
                } while (uVar21 != uVar18);
              }
              local_108 = uVar11 * 4 + *(int64_t *)(local_40 + 0x10);
              FUN_015c15b0(local_c0,local_bc);
              lVar10 = *(int64_t *)(local_40 + 0x10);
              lVar16 = puVar9[2];
              uVar18 = uVar11;
              for (uVar22 = local_b8; uVar22 != 0; uVar22 = uVar22 - 1) {
                *(void*)
                 (*(int64_t *)(*(int64_t *)(lVar16 + uVar18 * 8) + 0x10) + uVar23 * 4) =
                     *(void*)(lVar10 + uVar18 * 4);
                uVar18 = uVar18 + 1;
              }
              if (2 < local_b0) {
                do {
                  *(void*)
                   (*(int64_t *)(*(int64_t *)(lVar16 + uVar18 * 8) + 0x10) + uVar23 * 4) =
                       *(void*)(lVar10 + uVar18 * 4);
                  *(void*)
                   (*(int64_t *)(*(int64_t *)(lVar16 + 8 + uVar18 * 8) + 0x10) + uVar23 * 4) =
                       *(void*)(lVar10 + 4 + uVar18 * 4);
                  *(void*)
                   (*(int64_t *)(*(int64_t *)(lVar16 + 0x10 + uVar18 * 8) + 0x10) + uVar23 * 4) =
                       *(void*)(lVar10 + 8 + uVar18 * 4);
                  *(void*)
                   (*(int64_t *)(*(int64_t *)(lVar16 + 0x18 + uVar18 * 8) + 0x10) + uVar23 * 4) =
                       *(void*)(lVar10 + 0xc + uVar18 * 4);
                  uVar18 = uVar18 + 4;
                } while (uVar21 != uVar18);
              }
              uVar23 = uVar23 + 1;
              uVar18 = local_d8;
            } while (uVar23 != uVar20);
          }
          else {
            do {
              local_108 = uVar11 * 4 + *(int64_t *)(local_40 + 0x10);
              FUN_015c15b0(local_c0,iVar7);
              iVar19 = iVar19 + -1;
              uVar24 = local_e0;
              uVar18 = local_d8;
            } while (iVar19 != 0);
          }
        }
        uVar21 = uVar11;
        if (iVar6 < iVar12) {
          do {
            lVar10 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar21 * 8);
            local_b0 = uVar21;
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            fVar25 = g_02394274;
            if (7 < (int)local_f8) {
              lVar16 = *(int64_t *)(lVar10 + 0x10);
              lVar14 = 1;
              if (6 < uVar20 - 2) {
                uVar21 = 0;
                do {
                  uVar23 = uVar21;
                  fVar25 = fVar25 + *(float *)(lVar16 + 4 + uVar23 * 4) +
                           *(float *)(lVar16 + 8 + uVar23 * 4) +
                           *(float *)(lVar16 + 0xc + uVar23 * 4) +
                           *(float *)(lVar16 + 0x10 + uVar23 * 4) +
                           *(float *)(lVar16 + 0x14 + uVar23 * 4) +
                           *(float *)(lVar16 + 0x18 + uVar23 * 4) +
                           *(float *)(lVar16 + 0x1c + uVar23 * 4) +
                           *(float *)(lVar16 + 0x20 + uVar23 * 4);
                  uVar21 = uVar23 + 8;
                } while (uVar24 != uVar23 + 8);
                lVar14 = uVar23 + 9;
              }
              if (uVar18 != 0) {
                uVar24 = 0;
                do {
                  fVar25 = fVar25 + *(float *)(lVar16 + lVar14 * 4 + uVar24 * 4);
                  uVar24 = uVar24 + 1;
                } while (uVar18 != uVar24);
              }
            }
            *(float *)(*(int64_t *)(local_40 + 0x10) + local_b0 * 4) = fVar25;
            pvVar15 = *(void **)(puVar9[2] + local_b0 * 8);
            local_e8 = lVar10;
            if (pvVar15 != (void *)0x0) {
              FUN_00d50b00();
            }
            local_100 = pvVar15;
            _memcpy(pvVar15,pvVar13,param_3);
            _memcpy(pvVar15,pvVar13,param_3);
            FUN_015c15b0(g_0241fd58,local_f0);
            fVar25 = g_02394274;
            if (7 < (int)local_f8) {
              lVar10 = *(int64_t *)(local_40 + 0x10);
              lVar16 = *(int64_t *)(local_40 + 0x10);
              lVar14 = *(int64_t *)((int64_t)local_100 + 0x10);
              lVar3 = *(int64_t *)
                       (*(int64_t *)(*(int64_t *)(*arg1 + 0x10) + local_b0 * 8) + 0x10);
              uVar24 = 1;
              do {
                fVar25 = *(float *)(lVar10 + uVar24 * 4);
                fVar27 = *(float *)(lVar16 + uVar24 * 4);
                if (g_02394274 < fVar25) {
                  local_b8 = CONCAT44(local_b8._4_4_,fVar25);
                  fVar25 = (float)_powf(fVar27 / fVar25,param_2);
                  fVar27 = *(float *)(lVar14 + uVar24 * 4) * local_110;
                  if (fVar25 * (float)local_b8 <= fVar27) {
                    fVar27 = fVar25 * (float)local_b8;
                  }
                  *(float *)(lVar16 + uVar24 * 4) = fVar27;
                }
                *(float *)(lVar3 + uVar24 * 4) =
                     (fVar27 / *(float *)(lVar14 + uVar24 * 4)) * *(float *)(lVar3 + uVar24 * 4);
                uVar24 = uVar24 + 1;
              } while (uVar20 != uVar24);
              lVar10 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(*arg1 + 0x10) + local_b0 * 8) + 0x10);
              lVar16 = 1;
              fVar25 = g_02394274;
              if (6 < uVar20 - 2) {
                uVar24 = 0;
                do {
                  uVar18 = uVar24;
                  fVar25 = fVar25 + *(float *)(lVar10 + 4 + uVar18 * 4) +
                           *(float *)(lVar10 + 8 + uVar18 * 4) +
                           *(float *)(lVar10 + 0xc + uVar18 * 4) +
                           *(float *)(lVar10 + 0x10 + uVar18 * 4) +
                           *(float *)(lVar10 + 0x14 + uVar18 * 4) +
                           *(float *)(lVar10 + 0x18 + uVar18 * 4) +
                           *(float *)(lVar10 + 0x1c + uVar18 * 4) +
                           *(float *)(lVar10 + 0x20 + uVar18 * 4);
                  uVar24 = uVar18 + 8;
                } while (local_e0 != uVar18 + 8);
                lVar16 = uVar18 + 9;
              }
              uVar18 = local_d8;
              if ((uVar1 & 7) != 0) {
                uVar24 = 0;
                do {
                  fVar25 = fVar25 + *(float *)(lVar10 + lVar16 * 4 + uVar24 * 4);
                  uVar24 = uVar24 + 1;
                } while (local_d8 != uVar24);
              }
            }
            uVar21 = local_b0;
            uVar24 = local_e0;
            *(float *)(*(int64_t *)(local_40 + 0x10) + local_b0 * 4) = fVar25;
            if (local_100 != (void *)0x0) {
              FUN_00d50b20();
            }
            if (local_e8 != 0) {
              FUN_00d50b20();
            }
            uVar21 = uVar21 + 1;
          } while (iVar12 != (int)uVar21);
        }
        iVar7 = local_bc;
        FUN_015c15b0(g_02390d34,local_bc);
        fVar25 = (float)FUN_015c15b0(g_02390d34,iVar7);
        uVar24 = local_e0;
        local_54 = iVar12 - iVar6;
        if (local_54 != 0 && iVar6 <= iVar12) {
          do {
            fVar25 = (float)(**(code **)(g_02786500 + 0x20))
                                      (*(float *)(*(int64_t *)(local_40 + 0x10) + uVar11 * 4) /
                                       *(float *)(*(int64_t *)(local_40 + 0x10) + uVar11 * 4));
            uVar11 = uVar11 + 1;
            local_54 = local_54 + -1;
          } while (local_54 != 0);
        }
      }
      if (local_d0 != 0) {
        fVar25 = (float)FUN_00d50b20();
      }
      lVar17 = lVar17 + 1;
      lVar10 = *this_ptr;
    } while (lVar17 < *(int *)(lVar10 + 0xc));
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

