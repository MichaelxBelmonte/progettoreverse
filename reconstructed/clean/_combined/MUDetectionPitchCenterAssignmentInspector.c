// ===================================================================
// MUDetectionPitchCenterAssignmentInspector — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 01c163e0
// ============================================================
// Function: FUN_01c163e0
// Address: 01c163e0
// Size: 1420 bytes
// Class: MUDetectionPitchCenterAssignmentInspector

uint64_t FUN_01c163e0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  undefined7 uVar3;
  int64_t lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  undefined7 uVar11;
  int64_t lVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar14;
  uint64_t uVar15;
  float extraout_XMM0_Db;
  float fStack_b4;
  int64_t local_78;
  char local_70;
  float local_64;
  int64_t *local_60;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_60 = param_1;
  FUN_01a58dc0();
  if (local_40 == (int64_t *)0x0) {
    bVar5 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_50))();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = bVar5 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5 == 0) {
    uVar13 = FUN_01a58dc0();
    if (local_40 != (int64_t *)0x0) {
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 1) {
        iVar7 = FUN_01d3b630();
        uVar13 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (iVar7 == 1) {
          FUN_01a58dc0();
          FUN_01d3abf0();
          uVar15 = FUN_01e466c0();
          fStack_b4 = (float)((uint64_t)uVar15 >> 0x20);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar11 = (undefined7)((uint64_t)local_40 >> 8);
          if ((*param_2 != 0) && (iVar7 = FUN_01d3b620(), iVar7 == 2)) {
            FUN_01a58dc0();
            local_60 = (int64_t *)(**(code **)(*local_40 + 0x930))((int)uVar15);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01c16c70((int)local_60);
            uVar9 = CONCAT71(uVar11,1);
            goto LAB_01c165e2;
          }
          FUN_01a58dc0();
          (**(code **)(*local_50 + 0xe20))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            if ((*(int *)((int64_t)local_40 + 0xc) != 0) &&
               (cVar6 = (**(code **)(*this_ptr + 0x488))(), cVar6 != '\0')) {
LAB_01c166a0:
              lVar10 = *local_60;
              cVar6 = (char)local_60[1];
              lVar1 = *arg1;
              if (lVar1 == lVar10) {
                if (cVar6 != '\0') {
                  if (((char)arg1[1] == '\0') && (lVar10 != 0)) {
                    cVar6 = '\x01';
                    FUN_00d50b00();
                    goto LAB_01c16710;
                  }
                  goto LAB_01c16714;
                }
              }
              else {
                lVar4 = arg1[1];
                if ((cVar6 != '\0') && (lVar10 != 0)) {
                  FUN_00d50b00();
                }
                *arg1 = lVar10;
                if (((char)lVar4 != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                }
LAB_01c16710:
                *(char *)(arg1 + 1) = cVar6;
LAB_01c16714:
                lVar10 = *arg1;
              }
              if (lVar10 == 0) {
                FUN_01a58dc0();
                (**(code **)(*local_50 + 0x658))();
                plVar2 = (int64_t *)*arg1;
                if (plVar2 == local_40) {
                  if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                      goto LAB_01c167d1;
                    }
                    goto LAB_01c16781;
                  }
LAB_01c1678a:
                  if (*arg1 != 0) goto LAB_01c16792;
LAB_01c167de:
                  bVar12 = false;
                  uVar3 = 0;
                }
                else {
                  lVar1 = arg1[1];
                  if (local_38 != '\0') {
                    *arg1 = (int64_t)local_40;
                    if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01c16781:
                    *(void*)(arg1 + 1) = 1;
                    local_38 = '\0';
                    goto LAB_01c1678a;
                  }
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  *arg1 = (int64_t)local_40;
                  if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01c167d1:
                  *(void*)(arg1 + 1) = 1;
                  if (*arg1 == 0) goto LAB_01c167de;
LAB_01c16792:
                  iVar7 = FUN_01d3a5a0();
                  bVar12 = iVar7 != 6;
                  uVar3 = uVar11;
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar2 = local_60;
                if (!bVar12) goto LAB_01c16943;
              }
              iVar7 = FUN_01d3a5a0();
              if (iVar7 == 5) {
                FUN_01a58dc0();
                FUN_01d3abf0();
                FUN_01e466c0();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01a58dc0();
                local_64 = (float)(**(code **)(*local_40 + 3000))();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar9 = FUN_01d3b590();
                fVar14 = (fStack_b4 - extraout_XMM0_Db) / local_64;
                if ((uVar9 & 8) != 0) {
                  fVar14 = fVar14 * g_02391090;
                }
                fStack_b4 = extraout_XMM0_Db;
                if (g_02394274 < (float)((uint)fVar14 & g_02390140)) {
                  FUN_01c17760();
                }
              }
              goto LAB_01c166a0;
            }
            uVar9 = 0;
            goto LAB_01c16969;
          }
          goto LAB_01c16470;
        }
      }
      else {
        uVar13 = extraout_XMM0_Da;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
    }
    local_78 = *param_2;
    local_70 = '\0';
    uVar8 = FUN_01a58d30(uVar13,&local_78);
    uVar9 = (uint64_t)uVar8;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01c16470:
    uVar9 = 0;
  }
LAB_01c165e2:
  return uVar9 & 0xffffffff;
LAB_01c16943:
  uVar9 = CONCAT71(uVar3,1);
  if (*local_60 != 0) {
    *local_60 = 0;
    if ((char)local_60[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(plVar2 + 1) = 0;
  }
LAB_01c16969:
  FUN_00d50b20();
  goto LAB_01c165e2;
}



// ============================================================
// 01c16c70
// ============================================================
// Function: FUN_01c16c70
// Address: 01c16c70
// Size: 2015 bytes
// Class: MUDetectionPitchCenterAssignmentInspector

bool FUN_01c16c70(double param_1)

{
  int64_t lVar1;
  bool bVar2;
  code *pcVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void* in_ECX;
  code *pcVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  uint64_t uVar14;
  double dVar15;
  int64_t *local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc090();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (int64_t *)0x0) {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_0125a280();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_012685b0(param_1 - dVar13);
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar8 + 0x378))();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01327990();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc090();
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      dVar15 = (double)(**(code **)(*plVar8 + 0x380))(uVar14);
      fVar10 = (float)_logf((float)((dVar13 / (double)(float)dVar15) * g_0240de70));
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      fVar11 = (float)(**(code **)(*plVar8 + 0x3e0))();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed740();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      fVar12 = (float)(**(code **)(*plVar8 + 0x3e0))();
      fVar11 = fVar10 * g_02394208 - fVar11;
      FUN_014bd3c0(fVar12 + fVar11);
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pcVar3 = g_02572370;
      if (local_80 != (int64_t *)0x0) {
        if (*(int *)((int64_t)local_80 + 0xc) < 1) {
          bVar2 = false;
          puVar6 = (void*)0x0;
        }
        else {
          iVar9 = 0;
          puVar6 = (void*)0x0;
          bVar2 = false;
          pcVar7 = g_02572370;
          do {
            pvVar4 = _pthread_getspecific((void*)pcVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
                goto LAB_01c17290;
              }
            }
            else if (local_58 != 0) {
LAB_01c17290:
              pvVar4 = _pthread_getspecific((void*)pcVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar4 = _pthread_getspecific((void*)pcVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar10 = (float)FUN_0125a2c0();
              FUN_012595a0(fVar10 + fVar11);
              if (puVar6 == (void*)0x0) {
                puVar6 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar6 = &g_02572358;
                (*pcVar3)();
                bVar2 = true;
              }
              local_50 = '\0';
              FUN_00d21140();
              FUN_012879b0();
              FUN_00d23740();
              FUN_00d50b20();
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)((int64_t)local_80 + 0xc));
        }
        FUN_0015edf0();
        FUN_00d50b20();
        if ((bVar2) && (puVar6 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return lVar1 != 0;
}



// ============================================================
// 01c17760
// ============================================================
// Function: FUN_01c17760
// Address: 01c17760
// Size: 1729 bytes
// Class: MUDetectionPitchCenterAssignmentInspector

uint64_t FUN_01c17760(float param_1)

{
  bool bVar1;
  code *pcVar2;
  int64_t *plVar3;
  uint uVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  void* pVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t lVar11;
  byte unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar12;
  uint64_t uVar13;
  float fVar14;
  int64_t local_e0;
  char local_d8;
  int64_t *local_78;
  char local_70;
  int local_60;
  uint64_t local_50;
  char local_48;
  
  FUN_01a58dc0();
  (**(code **)(*local_78 + 0xe20))();
  if ((local_d8 == '\0') && (local_e0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e0 == 0) {
    uVar13 = 0;
  }
  else {
    if (*(int *)(local_e0 + 0xc) == 0) {
      uVar13 = 0;
    }
    else {
      uVar4 = (**(code **)(*this_ptr + 0x488))();
      pcVar2 = g_02572370;
      uVar13 = (uint64_t)uVar4;
      if (((byte)uVar4 & unaff_SIL) != 0) {
        if (*(int *)(local_e0 + 0xc) < 1) {
          bVar1 = false;
          puVar7 = (void*)0x0;
        }
        else {
          plVar10 = (int64_t *)0x0;
          puVar7 = (void*)0x0;
          bVar1 = false;
          do {
            plVar3 = local_78;
            pVar8 = (void*)plVar10;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((void*)plVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((void*)plVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
            }
            FUN_014ed740();
            pvVar5 = _pthread_getspecific((void*)plVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
            }
            pvVar5 = _pthread_getspecific((void*)plVar10);
            plVar12 = local_78;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
              plVar12 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            pVar9 = (void*)plVar10;
            fVar14 = (float)(**(code **)(*plVar12 + 0x3e0))();
            FUN_014bd3c0(fVar14 + param_1);
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_70 == '\0') {
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_78 != (int64_t *)0x0) {
              local_70 = '\0';
              local_78 = (int64_t *)0x0;
              local_60 = -1;
LAB_01c17b73:
              while( true ) {
                lVar6 = (int64_t)local_60;
                local_60 = local_60 + 1;
                if (*(int *)((int64_t)plVar3 + 0xc) <= local_60) break;
                lVar11 = plVar3[2];
                local_78 = *(int64_t **)(lVar11 + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((void*)lVar11);
                pVar9 = (void*)lVar11;
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if (local_48 == '\0') goto LAB_01c17c20;
                if (local_50 != 0) goto LAB_01c17c50;
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            if (plVar3 != (int64_t *)0x0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
            uVar4 = pVar8 + 1;
            plVar10 = (int64_t *)(uint64_t)uVar4;
          } while ((int)uVar4 < *(int *)(local_e0 + 0xc));
        }
        FUN_001159b0();
        uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
        if ((bVar1) && (puVar7 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return uVar13 & 0xffffffff;
LAB_01c17c20:
  if (local_50 != 0) {
    FUN_00d50b00();
LAB_01c17c50:
    pvVar5 = _pthread_getspecific(pVar9);
    uVar13 = local_50;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      uVar13 = *(uint64_t *)(local_50 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar14 = (float)FUN_0125a2c0();
    FUN_012595a0(fVar14 + param_1);
    if (puVar7 == (void*)0x0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*pcVar2)();
      bVar1 = true;
    }
    local_48 = '\0';
    FUN_00d21140();
    FUN_012879b0();
    FUN_00d23740();
    FUN_00d50b20();
  }
  goto LAB_01c17b73;
}



// ============================================================
// 01c15fa0
// ============================================================
// Function: FUN_01c15fa0
// Address: 01c15fa0
// Size: 505 bytes
// Class: MUDetectionPitchCenterAssignmentInspector

void FUN_01c15fa0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b6310 == 0) || (g_028b6319 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e8fa8;
    if (g_028b6310 == 0) {
      if (g_027e8fa8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b6310;
      if (g_028b6310 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b6310 != 0;
        g_028b6310 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b6318 == '\0')) {
        g_028b6318 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b6319 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b6319 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b6310 == 0) {
      lVar3 = 0;
      goto LAB_01c16159;
    }
  }
  lVar3 = g_028b6310;
  FUN_00d50b00();
LAB_01c16159:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c15c90
// ============================================================
// Function: FUN_01c15c90
// Address: 01c15c90
// Size: 544 bytes
// Class: MUDetectionPitchCenterAssignmentInspector
// String references:
//   "MUDetectionPitchCenterAssignmentInspector"

void FUN_01c15c90(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_120;
  int64_t local_118;
  
  if ((g_027e9078 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027e8fc8 = FUN_00335590();
    g_027e8fb0 = "MUDetectionPitchCenterAssignmentInspector";
    g_027e8fb8 = 0xe8;
    g_027e8fc0 = FUN_01c18410;
    g_027e8fd0 = 0;
    ram_00000000027e8fd8 = 0;
    g_027e8fe0 = 0;
    g_027e9058 = 0;
    ram_00000000027e9060 = 0;
    g_027e9068 = 0;
    g_027e906a = 1;
    g_027e8fe8 = 0;
    ram_00000000027e8ff0 = 0;
    g_027e8ff8 = 0;
    ram_00000000027e9000 = 0;
    g_027e9008 = 0;
    ram_00000000027e9010 = 0;
    g_027e9018 = 0;
    ram_00000000027e9020 = 0;
    g_027e9028 = 0;
    ram_00000000027e9030 = 0;
    g_027e9038 = 0;
    ram_00000000027e9040 = 0;
    g_027e9048 = 0;
    ram_00000000027e9050 = 0;
    g_027e9073 = 0;
    g_027e906b = 0;
    ___cxa_guard_release();
  }
  if (g_027e906b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_01c18480();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01c2fd80();
    FUN_00e87920(uVar2,0);
    if (local_118 != 0) {
      FUN_00d50b20();
    }
    if (local_120 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}

