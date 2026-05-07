// Function: FUN_0127e4d0
// Address: 0127e4d0
// Size: 4361 bytes
// Class: Unknown

void FUN_0127e4d0(double param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar11;
  uint64_t uVar12;
  int64_t local_90;
  char local_88;
  int local_78;
  int64_t local_68;
  char local_60;
  int local_50;
  double local_40;
  double local_38;
  
  lVar10 = *this_ptr;
  if (lVar10 == 0) {
    return;
  }
  lVar8 = *arg1;
  if (lVar8 != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = -1;
    while( true ) {
      lVar10 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar8 + 0xc) <= local_50) break;
      local_68 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + 8 + lVar10 * 8);
      if (local_68 != 0) {
        local_88 = '\0';
        local_90 = 0;
        local_78 = -1;
        lVar10 = 0;
        while( true ) {
          lVar5 = (int64_t)local_78;
          local_78 = local_78 + 1;
          if (*(int *)(local_68 + 0xc) <= local_78) break;
          lVar7 = *(int64_t *)(local_68 + 0x10);
          local_90 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
          if (lVar10 != 0) {
            pvVar6 = _pthread_getspecific((void*)lVar7);
            pVar9 = (void*)lVar7;
            lVar5 = local_90;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar5 = *(int64_t *)(local_90 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8)
              ;
            }
            local_38 = *(double *)(lVar5 + 0xe8);
            pvVar6 = _pthread_getspecific(pVar9);
            lVar5 = lVar10;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar5 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            local_38 = local_38 - *(double *)(lVar5 + 0xe8);
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            if (local_38 < g_0241b6a8) {
              pvVar6 = _pthread_getspecific(pVar9);
              if ((pvVar6 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                lVar5 = *(int64_t *)(lVar10 + 0xa0);
              }
              else {
                lVar5 = *(int64_t *)
                         (*(int64_t *)
                           (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0xa0);
              }
              if (lVar5 != 0) {
                FUN_00d50b00();
                FUN_00d50b20();
                pvVar6 = _pthread_getspecific(pVar9);
                if ((pvVar6 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                  lVar5 = *(int64_t *)(lVar10 + 0xa0);
                }
                else {
                  lVar5 = *(int64_t *)
                           (*(int64_t *)
                             (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0xa0)
                  ;
                }
                if (lVar5 != 0) {
                  FUN_00d50b00();
                }
                pvVar6 = _pthread_getspecific(pVar9);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dffb0();
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
              }
              pvVar6 = _pthread_getspecific(pVar9);
              local_38 = g_0241b6a8;
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
                local_38 = g_0241b6a8;
              }
            }
            pvVar6 = _pthread_getspecific(pVar9);
            lVar5 = lVar10;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar5 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            if (param_1 < (double)((uint64_t)(*(double *)(lVar5 + 0xf0) - local_38) & g_023908f0
                                  )) {
              pvVar6 = _pthread_getspecific(pVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar6 = _pthread_getspecific(pVar9);
              lVar5 = lVar10;
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                lVar5 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8)
                ;
              }
              FUN_012756a0(local_38 - *(double *)(lVar5 + 0xf0));
            }
          }
          if (local_90 != lVar10) {
            lVar10 = local_90;
          }
        }
        FUN_001159b0();
      }
    }
    FUN_01a02020();
    lVar10 = *this_ptr;
  }
  uVar11 = *(uint *)(lVar10 + 0xc);
  uVar12 = (uint64_t)uVar11;
  if ((int)uVar11 < 1) {
    return;
  }
  lVar8 = 0;
  bVar4 = false;
  do {
    uVar11 = uVar11 - 1;
    lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + (uint64_t)uVar11 * 8);
    pVar9 = uVar11;
    if (lVar8 == lVar10) {
      lVar10 = lVar8;
      bVar3 = bVar4;
      if ((!bVar4) && (lVar8 != 0)) {
        FUN_00d50b00();
        bVar3 = true;
      }
    }
    else {
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar4) && (lVar8 != 0)) {
        FUN_00d50b20();
      }
    }
    bVar4 = bVar3;
    lVar8 = lVar10;
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      lVar10 = *(int64_t *)(lVar8 + 0xa0);
    }
    else {
      lVar10 = *(int64_t *)
                (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) + 0xa0
                );
    }
    if (lVar10 != 0) {
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      if (local_68 == 0) {
        bVar3 = false;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar9);
        lVar10 = lVar8;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar10 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        dVar1 = *(double *)(lVar10 + 0xe8);
        dVar2 = *(double *)(lVar10 + 0xf0);
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          if (*(int64_t *)(lVar8 + 0xa0) == 0) goto LAB_0127eab3;
LAB_0127eadf:
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
        }
        else {
          if (*(int64_t *)
               (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) + 0xa0)
              != 0) goto LAB_0127eadf;
LAB_0127eab3:
          local_88 = '\0';
          local_90 = 0;
        }
        pvVar6 = _pthread_getspecific(pVar9);
        lVar10 = local_90;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar10 = *(int64_t *)(local_90 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        bVar3 = dVar1 + dVar2 != *(double *)(lVar10 + 0xe8);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (bVar3) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          if (*(int64_t *)(lVar8 + 0xa0) == 0) goto LAB_0127ec05;
LAB_0127ec24:
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
        }
        else {
          if (*(int64_t *)
               (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) + 0xa0)
              != 0) goto LAB_0127ec24;
LAB_0127ec05:
          local_60 = '\0';
          local_68 = 0;
        }
        pvVar6 = _pthread_getspecific(pVar9);
        lVar10 = local_68;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar10 = *(int64_t *)(local_68 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        local_40 = *(double *)(lVar10 + 0xe8);
        pvVar6 = _pthread_getspecific(pVar9);
        lVar10 = lVar8;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar10 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        local_40 = local_40 - *(double *)(lVar10 + 0xe8);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (local_40 < g_0241b6a8) {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            lVar10 = *(int64_t *)(lVar8 + 0xa0);
          }
          else {
            lVar10 = *(int64_t *)
                      (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8)
                      + 0xa0);
          }
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          local_40 = g_0241b6a8;
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
            local_40 = g_0241b6a8;
          }
        }
        pvVar6 = _pthread_getspecific(pVar9);
        lVar10 = lVar8;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar10 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        if (param_1 < (double)((uint64_t)(*(double *)(lVar10 + 0xf0) - local_40) & g_023908f0))
        {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          lVar10 = lVar8;
          if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar10 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          FUN_012756a0(local_40 - *(double *)(lVar10 + 0xf0));
        }
      }
    }
    if ((int64_t)uVar12 < 2) break;
    uVar12 = uVar12 - 1;
    lVar10 = *this_ptr;
  } while( true );
  lVar10 = *this_ptr;
  uVar11 = *(uint *)(lVar10 + 0xc);
  local_40 = (double)(uint64_t)uVar11;
  lVar5 = lVar8;
  if ((int)uVar11 < 1) {
LAB_0127f61f:
    if ((bVar4) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
    return;
  }
  do {
    uVar11 = uVar11 - 1;
    lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + (uint64_t)uVar11 * 8);
    pVar9 = uVar11;
    pvVar6 = _pthread_getspecific(uVar11);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    if (*(int64_t *)(lVar10 + 0xa8) == 0) {
      local_60 = '\0';
      local_68 = 0;
      if (lVar5 == 0) goto LAB_0127f003;
LAB_0127efc1:
      lVar8 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar4) && (lVar5 != 0)) {
          FUN_00d50b20();
          lVar5 = local_68;
LAB_0127f058:
          bVar4 = true;
          lVar8 = lVar5;
joined_r0x0127f06c:
          bVar3 = bVar4;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        bVar3 = true;
        if ((bVar4) && (lVar5 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      if (local_68 != lVar5) goto LAB_0127efc1;
LAB_0127f003:
      lVar8 = lVar5;
      if ((bVar4) || (local_68 == 0)) goto joined_r0x0127f06c;
      bVar3 = true;
      if (local_60 == '\0') {
        FUN_00d50b00();
        goto LAB_0127f058;
      }
    }
    bVar4 = bVar3;
    if (lVar8 != 0) {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        lVar10 = *(int64_t *)(lVar8 + 0xa0);
      }
      else {
        lVar10 = *(int64_t *)
                  (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) +
                  0xa0);
      }
      if (lVar10 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        if (local_68 == 0) {
          bVar3 = false;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar9);
          lVar10 = lVar8;
          if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar10 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          dVar1 = *(double *)(lVar10 + 0xe8);
          dVar2 = *(double *)(lVar10 + 0xf0);
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            if (*(int64_t *)(lVar8 + 0xa0) == 0) goto LAB_0127f1d6;
LAB_0127f1f8:
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
          }
          else {
            if (*(int64_t *)
                 (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) +
                 0xa0) != 0) goto LAB_0127f1f8;
LAB_0127f1d6:
            local_88 = '\0';
            local_90 = 0;
          }
          pvVar6 = _pthread_getspecific(pVar9);
          lVar10 = local_90;
          if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar10 = *(int64_t *)(local_90 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          bVar3 = dVar1 + dVar2 != *(double *)(lVar10 + 0xe8);
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (bVar3) {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            if (*(int64_t *)(lVar8 + 0xa0) == 0) goto LAB_0127f312;
LAB_0127f331:
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
          }
          else {
            if (*(int64_t *)
                 (*(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) +
                 0xa0) != 0) goto LAB_0127f331;
LAB_0127f312:
            local_60 = '\0';
            local_68 = 0;
          }
          pvVar6 = _pthread_getspecific(pVar9);
          lVar10 = local_68;
          if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar10 = *(int64_t *)(local_68 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          local_38 = *(double *)(lVar10 + 0xe8);
          pvVar6 = _pthread_getspecific(pVar9);
          lVar10 = lVar8;
          if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar10 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          local_38 = local_38 - *(double *)(lVar10 + 0xe8);
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          if (local_38 < g_0241b6a8) {
            pvVar6 = _pthread_getspecific(pVar9);
            if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
              lVar10 = *(int64_t *)(lVar8 + 0xa0);
            }
            else {
              lVar10 = *(int64_t *)
                        (*(int64_t *)
                          (lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) + 0xa0);
            }
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dffb0();
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar9);
            local_38 = g_0241b6a8;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
              local_38 = g_0241b6a8;
            }
          }
          pvVar6 = _pthread_getspecific(pVar9);
          lVar10 = lVar8;
          if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar10 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          if (param_1 < (double)((uint64_t)(*(double *)(lVar10 + 0xf0) - local_38) & g_023908f0)
             ) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar6 = _pthread_getspecific(pVar9);
            lVar10 = lVar8;
            if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              lVar10 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
            FUN_012756a0(local_38 - *(double *)(lVar10 + 0xf0));
          }
        }
      }
    }
    if ((int64_t)local_40 < 2) goto LAB_0127f61f;
    local_40 = (double)((int64_t)local_40 - 1);
    lVar10 = *this_ptr;
    lVar5 = lVar8;
  } while( true );
}

