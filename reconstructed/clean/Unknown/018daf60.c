// Function: FUN_018daf60
// Address: 018daf60
// Size: 3485 bytes
// Class: Unknown

void* FUN_018daf60(char param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  float fVar1;
  uint uVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  void*puVar13;
  void*puVar14;
  uint64_t uVar15;
  int iVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t *arg1;
  int64_t lVar20;
  int64_t lVar21;
  void*this_ptr;
  bool bVar22;
  float fVar23;
  int64_t *local_res8;
  int64_t *local_res10;
  void*local_170;
  uint8_t local_168;
  void*local_160;
  uint8_t local_158;
  void*local_150;
  uint8_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  code *local_130;
  void*local_128;
  uint64_t local_120;
  void*local_118;
  code *local_110;
  uint64_t local_108;
  void*local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  uint32_t local_bc;
  void*local_b8;
  int local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  int64_t local_98;
  void*local_90;
  float local_84;
  void*local_60;
  void*local_58;
  void*local_48;
  char local_40;
  
  local_bc = param_3;
  local_a0 = param_4;
  local_9c = param_2;
  FUN_018d8790();
  if ((local_40 == '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_108 = (uint64_t)*(uint *)((int64_t)local_48 + 0xc);
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_128 = &g_02572358;
  *puVar13 = &g_02572358;
  local_130 = g_02572370;
  (*g_02572370)();
  local_b8 = local_48;
  local_90 = puVar13;
  if ((int)local_108 < 1) {
    local_84 = g_02391078;
    bVar7 = false;
    local_60 = (void*)0x0;
    bVar8 = false;
    local_58 = (void*)0x0;
  }
  else {
    local_110 = g_025683d8;
    bVar9 = (byte)local_a0;
    local_140 = 0xc;
    if (param_1 != '\0') {
      local_140 = 1;
    }
    local_84 = g_02391078;
    uVar17 = 0;
    local_118 = &g_025683c0;
    local_58 = (void*)0x0;
    bVar8 = false;
    local_60 = (void*)0x0;
    bVar7 = false;
    do {
      lVar19 = *(int64_t *)(local_b8[2] + uVar17 * 8);
      local_138 = uVar17;
      if (lVar19 != 0) {
        FUN_00d50b00();
      }
      uVar17 = 0;
      local_98 = lVar19;
      do {
        puVar13 = local_48;
        if (*(char *)(*(int64_t *)(*arg1 + 0x10) + uVar17) == '\0') {
          uVar17 = uVar17 + 1;
        }
        else {
          FUN_00c8e690();
          if ((local_40 == '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          lVar20 = *(int64_t *)(*arg1 + 0x10);
          puVar3 = (void*)local_48[2];
          iVar12 = (int)uVar17;
          *puVar3 = *(void*)
                     (lVar20 + (uint64_t)(uint)(iVar12 + (int)((uVar17 & 0xffffffff) / 0xc) * -0xc)
                     );
          local_120 = uVar17 + 1;
          puVar3[1] = *(void*)
                       (lVar20 + (uint64_t)
                                 (uint)((int)local_120 +
                                       (int)((local_120 & 0xffffffff) / 0xc) * -0xc));
          puVar3[2] = *(void*)
                       (lVar20 + (uint64_t)(((iVar12 + 2U) / 0xc) * -0xc + iVar12 + 2));
          puVar3[3] = *(void*)
                       (lVar20 + (uint64_t)(((iVar12 + 3U) / 0xc) * -0xc + iVar12 + 3));
          puVar3[4] = *(void*)
                       (lVar20 + (uint64_t)(((iVar12 + 4U) / 0xc) * -0xc + iVar12 + 4));
          puVar3[5] = *(void*)
                       (lVar20 + (uint64_t)(((iVar12 + 5U) / 0xc) * -0xc + iVar12 + 5));
          puVar3[6] = *(void*)
                       (lVar20 + (uint64_t)(((iVar12 + 6U) / 0xc) * -0xc + iVar12 + 6));
          puVar3[7] = *(void*)
                       (lVar20 + (uint64_t)(((iVar12 + 7U) / 0xc) * -0xc + iVar12 + 7));
          puVar3[8] = *(void*)
                       (lVar20 + (uint64_t)(((iVar12 + 8U) / 0xc) * -0xc + iVar12 + 8));
          puVar3[9] = *(void*)
                       (lVar20 + (uint64_t)(((iVar12 + 9U) / 0xc) * -0xc + iVar12 + 9));
          puVar3[10] = *(void*)
                        (lVar20 + (uint64_t)(((iVar12 + 10U) / 0xc) * -0xc + iVar12 + 10));
          puVar3[0xb] = *(void*)
                         (lVar20 + (uint64_t)(((iVar12 + 0xbU) / 0xc) * -0xc + iVar12 + 0xb));
          if ((char)local_bc == '\0') {
LAB_018db357:
          }
          else {
            puVar14 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = local_118;
            (*local_110)();
            FUN_00c92170();
            FUN_00c92160();
            if ((bVar8) && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
              local_58 = puVar14;
              bVar8 = true;
              goto LAB_018db357;
            }
            local_58 = puVar14;
            bVar8 = true;
          }
          puVar14 = local_60;
          bVar22 = bVar7;
          if ((char)local_a0 != '\0') {
            puVar14 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = local_118;
            (*local_110)();
            FUN_00c92170();
            FUN_00c92160();
            bVar22 = true;
            if ((bVar7) && (local_60 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          local_a4 = 0;
          local_168 = 0;
          local_158 = 0;
          local_170 = local_58;
          local_160 = puVar14;
          iVar11 = FUN_018e1f10(&local_160,&local_170,&local_a4);
          fVar23 = local_84;
          if ((-1 < iVar11) && (((bVar9 ^ 1) & iVar11 == 0) == 0)) {
            local_48 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_48 = &g_02614f50;
            local_48[2] = 0;
            local_48[3] = 0;
            local_48[4] = 0;
            local_48[5] = 0;
            local_48[6] = 0;
            FUN_00d500e0();
            lVar20 = local_48[2];
            if (lVar20 != lVar19) {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
              local_48[2] = local_98;
              if (lVar20 != 0) {
                FUN_00d50b20();
              }
            }
            *(int *)(local_48 + 3) = iVar12;
            *(void*)((int64_t)local_48 + 0x1c) = local_9c;
            *(int *)(local_48 + 4) = iVar11;
            puVar4 = (void*)local_48[5];
            if (puVar4 != local_58) {
              if (local_58 != (void*)0x0) {
                FUN_00d50b00();
              }
              local_48[5] = local_58;
              if (puVar4 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            puVar4 = (void*)local_48[6];
            if (puVar4 != puVar14) {
              if (puVar14 != (void*)0x0) {
                FUN_00d50b00();
              }
              local_48[6] = puVar14;
              if (puVar4 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            *(void*)((int64_t)local_48 + 0x24) = 0;
            if (puVar14 == (void*)0x0) {
              fVar23 = 0.0;
            }
            else {
              uVar2 = *(uint *)(puVar14 + 3);
              uVar6 = uVar2;
              if ((int)uVar2 < 0) {
                uVar6 = uVar2 + 3;
              }
              if ((((6 < uVar2 + 3) && (lVar19 = *local_res8, lVar19 != 0)) &&
                  (iVar11 = *(int *)(lVar19 + 0x18), 6 < iVar11 + 3U)) &&
                 ((3 < (int)uVar2 && (3 < iVar11)))) {
                uVar17 = (uint64_t)(uint)((int)uVar6 >> 2);
                do {
                  iVar16 = iVar11 + 3;
                  if (-1 < iVar11) {
                    iVar16 = iVar11;
                  }
                  if (3 < iVar11) {
                    iVar11 = *(int *)(puVar14[2] + (uVar17 - 1 & 0xffffffff) * 4);
                    iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                      (iVar11 >> 0x1f)) * -0xc + iVar12;
                    lVar20 = 0;
                    do {
                      if (*(int *)(*(int64_t *)(lVar19 + 0x10) + lVar20 * 4) ==
                          iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f))
                                   * -0xc) {
                        FUN_00e7b4e0();
                        FUN_00c921e0();
                        break;
                      }
                      lVar20 = lVar20 + 1;
                    } while (iVar16 >> 2 != (int)lVar20);
                  }
                  if ((int64_t)uVar17 < 2) break;
                  lVar19 = *local_res8;
                  iVar11 = *(int *)(lVar19 + 0x18);
                  uVar17 = uVar17 - 1;
                } while( true );
              }
              if (local_58 == (void*)0x0) {
                fVar23 = *(float *)((int64_t)local_48 + 0x24);
              }
              else {
                iVar12 = *(int *)(puVar14 + 3);
                iVar11 = iVar12 + 3;
                if (-1 < iVar12) {
                  iVar11 = iVar12;
                }
                iVar12 = *(int *)(local_58 + 3);
                iVar16 = iVar12 + 3;
                if (-1 < iVar12) {
                  iVar16 = iVar12;
                }
                fVar23 = (float)(iVar16 >> 2) +
                         (float)(iVar11 >> 2) * g_0239011c + (float)local_a4 * g_0239011c;
                *(float *)((int64_t)local_48 + 0x24) = fVar23;
              }
            }
            lVar19 = local_98;
            local_40 = '\0';
            FUN_00d21140();
            FUN_00d50b20();
            if (local_84 <= fVar23) {
              fVar23 = local_84;
            }
          }
          local_84 = fVar23;
          uVar17 = local_120;
          local_60 = puVar14;
          bVar7 = bVar22;
          if (puVar13 != (void*)0x0) {
            FUN_00d50b20();
            uVar17 = local_120;
          }
        }
      } while (uVar17 != local_140);
      if (lVar19 != 0) {
        FUN_00d50b20();
      }
      uVar17 = local_138 + 1;
    } while (uVar17 != local_108);
  }
  puVar13 = local_48;
  puVar14 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = local_128;
  (*local_130)();
  if (*(int *)((int64_t)local_90 + 0xc) == 0) {
    *this_ptr = puVar14;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (*local_res10 != 0) {
      local_100 = local_90;
      local_f8 = '\0';
      FUN_018e4140();
      if (local_40 == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
        FUN_00d50b20();
      }
      do {
        iVar12 = *(int *)((int64_t)puVar13 + 0xc);
        if (iVar12 == 0) break;
        local_48 = *(void**)puVar13[2];
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
          iVar12 = *(int *)((int64_t)puVar13 + 0xc);
        }
        if (0 < iVar12) {
          lVar19 = 0;
          fVar23 = g_02391078;
          do {
            puVar4 = *(void**)(puVar13[2] + lVar19 * 8);
            fVar1 = *(float *)((int64_t)puVar4 + 0x24);
            if (((fVar1 < fVar23) && (fVar23 = fVar1, local_48 != puVar4)) &&
               (FUN_00d50b00(), bVar22 = local_48 != (void*)0x0, local_48 = puVar4, bVar22))
            {
              FUN_00d50b20();
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)((int64_t)puVar13 + 0xc));
        }
        lVar19 = local_48[2];
        lVar20 = *local_res10;
        if (lVar19 == lVar20) {
          FUN_00d21140();
        }
        else {
          FUN_00d23f50();
        }
        local_40 = '\0';
        FUN_00d50b20();
      } while (lVar19 != lVar20);
      FUN_00d50b20();
    }
    iVar12 = *(int *)((int64_t)puVar14 + 0xc);
    if (iVar12 == 0) {
      if (0 < *(int *)((int64_t)local_90 + 0xc)) {
        lVar19 = 0;
        do {
          puVar13 = *(void**)(local_90[2] + lVar19 * 8);
          fVar23 = *(float *)((int64_t)puVar13 + 0x24);
          if ((fVar23 == local_84) && (!NAN(fVar23) && !NAN(local_84))) {
            FUN_00d50b00();
            local_40 = '\0';
            FUN_00d21140();
            FUN_00d50b20();
            local_48 = puVar13;
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)((int64_t)local_90 + 0xc));
      }
      local_148 = 0;
      local_150 = puVar14;
      FUN_018e4230();
      iVar12 = *(int *)((int64_t)puVar14 + 0xc);
    }
    if (0 < iVar12) {
      lVar19 = 0;
      do {
        lVar20 = *(int64_t *)(puVar14[2] + lVar19 * 8);
        if (lVar20 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(lVar20 + 0x28) != 0) {
          lVar5 = **(int64_t **)(*(int64_t *)(*(int64_t *)(lVar20 + 0x10) + 0x18) + 0x10);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          lVar21 = g_027cc8c0;
          if (g_027cc8c0 != 0) {
            FUN_00d50b00();
          }
          local_f0 = lVar21;
          local_e8 = '\x01';
          cVar10 = FUN_00d90eb0();
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          lVar21 = g_027cc8c0;
          if (cVar10 != '\0') {
            if (g_027cc8c0 != 0) {
              FUN_00d50b00();
            }
            local_e0 = lVar21;
            local_d8 = '\x01';
            uVar15 = FUN_00d90650();
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            iVar12 = FUN_00d8c7a0();
            if ((int)((uint64_t)uVar15 >> 0x20) + (int)uVar15 < iVar12) {
              FUN_00d8f140();
              if ((local_40 == '\0') && (local_48 != (void*)0x0)) {
                FUN_00d50b00();
              }
              local_c8 = '\0';
              local_d0 = local_48;
              iVar12 = FUN_018d7dd0();
              if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if (iVar12 != -1) {
                iVar11 = *(int *)(local_58 + 3);
                lVar21 = (int64_t)iVar11;
                iVar16 = iVar11 + 3;
                if (-1 < lVar21) {
                  iVar16 = iVar11;
                }
                if (3 < lVar21) {
                  iVar16 = iVar16 >> 2;
                  lVar18 = 0;
                  do {
                    if (*(int *)(local_58[2] + lVar18 * 4) == iVar12) goto LAB_018dbc42;
                    lVar18 = lVar18 + 1;
                  } while (iVar16 != (int)lVar18);
                }
                FUN_00c8e340(iVar16,1);
                *(int *)(local_58[2] + lVar21) = iVar12;
              }
LAB_018dbc42:
              if (local_48 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar20 != 0) {
          FUN_00d50b20();
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((int64_t)puVar14 + 0xc));
    }
    *this_ptr = puVar14;
    *(void*)(this_ptr + 1) = 1;
    if (local_90 == (void*)0x0) goto LAB_018dbca6;
  }
  FUN_00d50b20();
LAB_018dbca6:
  if ((bVar7) && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_b8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

