// Function: FUN_018728b0
// Address: 018728b0
// Size: 2827 bytes
// Class: Unknown

void FUN_018728b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint uVar9;
  int64_t lVar10;
  void *pvVar11;
  uint64_t uVar12;
  void*puVar13;
  void* pVar15;
  int iVar16;
  uint uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  void*arg1;
  int64_t *this_ptr;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  uint64_t local_180;
  uint8_t local_178;
  int64_t local_170;
  uint8_t local_168;
  uint64_t local_160;
  uint8_t local_158;
  uint64_t local_150;
  void*local_148;
  code *local_140;
  uint64_t local_138;
  uint64_t local_130;
  char local_128;
  int64_t local_120;
  int64_t local_118;
  int iStack_cc;
  int iStack_9c;
  int iStack_64;
  uint local_60;
  uint local_50;
  char local_38;
  uint64_t uVar14;
  
  lVar10 = *this_ptr;
  if (0 < *(int *)(lVar10 + 0xc)) {
    local_140 = g_025683d8;
    local_50 = 0;
    local_148 = &g_025683c0;
    local_150 = param_1;
    do {
      lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + (int64_t)(int)local_50 * 8);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      if ((*(int *)(*(int64_t *)(lVar10 + 0x20) + 0xc) != 0) &&
         (lVar21 = *(int64_t *)(**(int64_t **)(*(int64_t *)(lVar10 + 0x20) + 0x10) + 0x10),
         lVar21 != 0)) {
        local_118 = (int64_t)(int)local_50;
        FUN_00d50b00();
        uVar12 = *(void*)(lVar10 + 0xc);
        FUN_00e7b820();
        uVar14 = *(uint64_t *)(lVar10 + 0x14);
        FUN_00e7b820();
        iVar6 = (int)(param_3 >> 0x20);
        iStack_64 = (int)((uint64_t)uVar12 >> 0x20);
        uVar18 = uVar14;
        if (param_3 >> 0x20 == 0) {
LAB_01872a30:
          pVar15 = (void*)uVar18;
          iVar6 = (int)(param_4 >> 0x20);
          if ((param_4 >> 0x20 == 0) ||
             ((((iStack_64 == 0 || (iVar6 == 0)) || (cVar5 = FUN_00e7c000(), cVar5 == '\0')) &&
              (((iStack_9c = (int)(uVar14 >> 0x20), iStack_9c == 0 || (iVar6 == 0)) ||
               (cVar5 = FUN_00e7c000(), cVar5 == '\0')))))) {
            FUN_00e7b970();
            local_138 = uVar14;
            pvVar11 = _pthread_getspecific(pVar15);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar15 = 0;
            uVar12 = FUN_016c4630(0,1);
            pvVar11 = _pthread_getspecific(pVar15);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016c47d0(0,uVar12);
            FUN_0123ffa0();
            uVar18 = FUN_00e7bcc0();
            if ((local_38 != '\0') && (uVar14 != 0)) {
              FUN_00d50b20();
            }
            FUN_00e7c3c0();
            local_130 = uVar18;
            local_60 = local_50;
            if (((local_138._4_4_ == 0) || (uVar18 >> 0x20 == 0)) ||
               (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
              uVar7 = FUN_00e7cea0();
              uVar8 = FUN_00e7cea0();
              local_180 = *arg1;
              local_178 = 0;
              FUN_0185df90(1,uVar8,&local_180);
              if ((local_38 == '\0') && (uVar18 != 0)) {
                FUN_00d50b00();
              }
              local_168 = 0;
              local_160 = *arg1;
              local_158 = 0;
              local_170 = lVar21;
              FUN_01878fb0(uVar8,uVar7,&local_160);
              uVar14 = local_130;
              if (local_128 == '\0') {
                if (local_130 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_128 = '\0';
              }
              FUN_018da560();
              if (local_38 == '\0') {
                if (uVar18 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              if (uVar14 != 0) {
                FUN_00d50b20();
              }
              puVar13 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar13 = local_148;
              (*local_140)();
              FUN_00c92170();
              uVar7 = FUN_00c92160();
              if (3 < *(int *)(uVar18 + 0x18)) {
                lVar21 = 0;
                do {
                  iVar6 = *(int *)(*(int64_t *)(uVar18 + 0x10) + lVar21 * 4);
                  lVar2 = *(int64_t *)(uVar18 + 0x10);
                  iVar16 = *(int *)(puVar13 + 3);
                  FUN_00c8e340(uVar7,1);
                  uVar7 = *(void*)(lVar2 + (int64_t)iVar6 * 4);
                  *(void*)(puVar13[2] + (int64_t)iVar16) = uVar7;
                  lVar21 = lVar21 + 1;
                  iVar6 = *(int *)(uVar18 + 0x18);
                  iVar16 = iVar6 + 3;
                  if (-1 < iVar6) {
                    iVar16 = iVar6;
                  }
                } while (lVar21 < iVar16 >> 2);
              }
              uVar17 = local_50 + 1;
              local_120 = (int64_t)(int)uVar17;
              uVar9 = local_50 - 1;
              uVar14 = (uint64_t)uVar9;
              bVar24 = false;
              bVar4 = true;
              do {
                bVar3 = bVar4;
                if (bVar3) {
                  if (((0 < (int)local_50) &&
                      (lVar21 = *(int64_t *)
                                 (*(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + uVar14 * 8) +
                                 0x20), *(int *)(lVar21 + 0xc) != 0)) &&
                     (*(int64_t *)(**(int64_t **)(lVar21 + 0x10) + 0x10) != 0)) {
                    FUN_00d50b00();
                    goto LAB_01872ebf;
                  }
                }
                else {
                  if (((*(int *)(*this_ptr + 0xc) + -1 <= (int)local_50) ||
                      (lVar21 = *(int64_t *)
                                 (*(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + local_120 * 8) +
                                 0x20), *(int *)(lVar21 + 0xc) == 0)) ||
                     (*(int64_t *)(**(int64_t **)(lVar21 + 0x10) + 0x10) == 0)) break;
                  FUN_00d50b00();
LAB_01872ebf:
                  FUN_018da560();
                  if (local_38 == '\0') {
                    if (uVar18 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  uVar1 = *(uint *)(uVar18 + 0x18);
                  uVar22 = uVar1;
                  if ((int)uVar1 < 0) {
                    uVar22 = uVar1 + 3;
                  }
                  uVar22 = (int)uVar22 >> 2;
                  if ((int)uVar1 < 4) {
                    fVar26 = 0.0;
                    uVar23 = 0;
                  }
                  else {
                    iVar6 = *(int *)(uVar18 + 0x18);
                    iVar16 = iVar6 + 3;
                    if (-1 < iVar6) {
                      iVar16 = iVar6;
                    }
                    if (iVar6 < 4) {
                      lVar21 = puVar13[2];
                      if ((uint64_t)uVar22 - 1 < 7) {
                        fVar26 = 0.0;
                        uVar19 = 0;
                      }
                      else {
                        fVar26 = 0.0;
                        uVar19 = 0;
                        do {
                          fVar26 = fVar26 + *(float *)(lVar21 + uVar19 * 4) +
                                   *(float *)(lVar21 + 4 + uVar19 * 4) +
                                   *(float *)(lVar21 + 8 + uVar19 * 4) +
                                   *(float *)(lVar21 + 0xc + uVar19 * 4) +
                                   *(float *)(lVar21 + 0x10 + uVar19 * 4) +
                                   *(float *)(lVar21 + 0x14 + uVar19 * 4) +
                                   *(float *)(lVar21 + 0x18 + uVar19 * 4) +
                                   *(float *)(lVar21 + 0x1c + uVar19 * 4);
                          uVar19 = uVar19 + 8;
                        } while ((uVar22 & 0xfffffff8) != uVar19);
                      }
                      uVar23 = uVar22;
                      if ((uint64_t)(uVar22 & 7) != 0) {
                        uVar20 = 0;
                        do {
                          fVar26 = fVar26 + *(float *)(lVar21 + uVar19 * 4 + uVar20 * 4);
                          uVar20 = uVar20 + 1;
                        } while ((uVar22 & 7) != uVar20);
                      }
                    }
                    else {
                      uVar19 = 0;
                      fVar26 = 0.0;
                      uVar23 = 0;
                      do {
                        lVar21 = 0;
                        do {
                          if (*(int *)(*(int64_t *)(uVar18 + 0x10) + lVar21 * 4) ==
                              *(int *)(*(int64_t *)(uVar18 + 0x10) + uVar19 * 4))
                          goto LAB_01872f60;
                          lVar21 = lVar21 + 1;
                        } while (iVar16 >> 2 != (int)lVar21);
                        uVar23 = uVar23 + 1;
                        fVar26 = fVar26 + *(float *)(puVar13[2] + uVar19 * 4);
LAB_01872f60:
                        uVar19 = uVar19 + 1;
                      } while (uVar19 != uVar22);
                    }
                  }
                  if (6 < uVar1 + 3) {
                    fVar25 = (float)_powf(g_02390124 / (float)(int)uVar22,g_02390128);
                    fVar26 = fVar26 * fVar25;
                  }
                  if ((uVar23 == 0) || ((uVar23 == 1 && (fVar26 < g_023b294c)))) {
                    bVar24 = true;
                  }
                  if (uVar18 != 0) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  if (bVar24) break;
                }
                bVar4 = false;
              } while (bVar3);
              if (((!bVar24) && (0 < (int)local_50)) &&
                 ((int)local_50 < *(int *)(*this_ptr + 0xc) + -1)) {
                lVar21 = *(int64_t *)(*this_ptr + 0x10);
                lVar2 = *(int64_t *)(*(int64_t *)(lVar21 + uVar14 * 8) + 0x20);
                if ((*(int *)(lVar2 + 0xc) != 0) &&
                   (*(int *)(*(int64_t *)(*(int64_t *)(lVar21 + (uint64_t)uVar17 * 8) + 0x20) +
                            0xc) != 0)) {
                  lVar2 = *(int64_t *)(**(int64_t **)(lVar2 + 0x10) + 0x10);
                  if (lVar2 != 0) {
                    FUN_00d50b00();
                    lVar21 = *(int64_t *)(*this_ptr + 0x10);
                  }
                  lVar21 = *(int64_t *)
                            (**(int64_t **)
                               (*(int64_t *)(*(int64_t *)(lVar21 + (uint64_t)uVar17 * 8) + 0x20)
                               + 0x10) + 0x10);
                  if (lVar21 != 0) {
                    FUN_00d50b00();
                  }
                  cVar5 = FUN_018da750();
                  bVar24 = cVar5 != '\0';
                  if (lVar21 != 0) {
                    FUN_00d50b20();
                  }
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              if (bVar24) {
                if (((iStack_64 == 0) ||
                    (iStack_cc = (int)((uint64_t)uVar12 >> 0x20), iStack_cc == 0)) ||
                   (cVar5 = FUN_00e7c000(), cVar5 == '\0')) {
                  if (0 < (int)local_50) {
                    *(void*)
                     (*(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + uVar14 * 8) + 0x14) =
                         *(void*)
                          (*(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + local_118 * 8) + 0x14);
                    FUN_00d23620();
                    local_60 = uVar9;
                  }
                }
                else if ((int)local_50 < *(int *)(*this_ptr + 0xc) + -1) {
                  lVar21 = *(int64_t *)(*this_ptr + 0x10);
                  *(void*)(*(int64_t *)(lVar21 + local_120 * 8) + 0xc) =
                       *(void*)(*(int64_t *)(lVar21 + local_118 * 8) + 0xc);
                  FUN_00d23620();
                  local_60 = uVar9;
                }
              }
              if (puVar13 != (void*)0x0) {
                FUN_00d50b20();
              }
              if (uVar18 != 0) {
                FUN_00d50b20();
                FUN_00d50b20();
              }
            }
            local_50 = local_60;
          }
        }
        else {
          uVar18 = uVar14 >> 0x20;
          if ((iStack_64 == 0) || (iVar6 == 0)) {
LAB_01872a0b:
            if ((((int)uVar18 == 0) || (iVar6 == 0)) || (cVar5 = FUN_00e7c000(), cVar5 == '\0'))
            goto LAB_01872a30;
          }
          else {
            cVar5 = FUN_00e7c000();
            if (cVar5 == '\0') {
              uVar18 = uVar14 >> 0x20;
              goto LAB_01872a0b;
            }
          }
        }
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      local_50 = local_50 + 1;
      lVar10 = *this_ptr;
    } while ((int)local_50 < *(int *)(lVar10 + 0xc));
  }
  return;
}

