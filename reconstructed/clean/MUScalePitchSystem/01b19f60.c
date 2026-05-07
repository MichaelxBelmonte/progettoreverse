// Function: FUN_01b19f60
// Address: 01b19f60
// Size: 4402 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01b19f60(void* param_1,char param_2)

{
  void* pVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  int64_t lVar9;
  void*puVar10;
  void*puVar11;
  int64_t this_ptr;
  bool bVar12;
  void*local_80;
  char local_78;
  int64_t in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this_ptr + 0x315) != '\0') && (*(char *)(this_ptr + 0x316) != '\0')) {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 != 0) {
        FUN_00d50b00();
        goto LAB_01b19fcc;
      }
    }
    else if (in_stack_ffffffffffffffa0 != 0) {
LAB_01b19fcc:
      FUN_01caeae0();
      if (local_58 == '\0') {
        if (in_stack_ffffffffffffffa0 != 0) {
          FUN_00d50b00();
          goto LAB_01b1a011;
        }
      }
      else if (in_stack_ffffffffffffffa0 != 0) {
LAB_01b1a011:
        FUN_01d66ab0();
        FUN_00d50b20();
      }
      if ((*(int *)(this_ptr + 0x194) == -1000000) && (*(int *)(this_ptr + 400) == -1000000)) {
        puVar11 = (void*)0x0;
      }
      else {
        puVar10 = &g_02802558;
        pvVar8 = _pthread_getspecific(param_1);
        pVar1 = (void*)in_stack_ffffffffffffffa0;
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          param_1 = pVar1;
        }
        FUN_01740240();
        if (local_58 == '\0') {
          if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b1a1b1;
          FUN_00d50b00();
LAB_01b1a0cc:
          if (*(int64_t *)(this_ptr + 0x1a0) == 0) {
            puVar11 = (void*)0x0;
            bVar12 = false;
            bVar3 = false;
            goto joined_r0x01b1a1b6;
          }
          if (param_2 == '\0') {
            FUN_01b18590();
            FUN_01caeae0();
            if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != 0)) {
              FUN_00d50b00();
            }
            iVar5 = FUN_01d654a0();
            if (iVar5 == 0) {
              FUN_01d654a0();
              puVar11 = &g_02802501;
              FUN_01d66ab0();
            }
            else {
              iVar5 = FUN_01d654a0();
              if (iVar5 == 4) {
                FUN_01d654a0();
                FUN_01d66ab0();
                pvVar8 = _pthread_getspecific(param_1);
                if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  param_1 = pVar1;
                }
                FUN_0173b6f0();
                pvVar8 = _pthread_getspecific(param_1);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar5 = FUN_01737820();
                pvVar8 = _pthread_getspecific(param_1);
                if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  param_1 = pVar1;
                }
                FUN_0173b6f0();
                pvVar8 = _pthread_getspecific(param_1);
                puVar10 = local_80;
                if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  puVar10 = (void*)local_80[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                }
                iVar6 = FUN_01736dd0();
                puVar11 = (void*)CONCAT71((int7)((uint64_t)puVar10 >> 8),iVar5 != iVar6);
                if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                iVar5 = FUN_01d654a0();
                if (iVar5 == 1) {
                  FUN_01d654a0();
                  FUN_01d66ab0();
                  pvVar8 = _pthread_getspecific(param_1);
                  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    param_1 = pVar1;
                  }
                  FUN_0173b6f0();
                  pvVar8 = _pthread_getspecific(param_1);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  iVar5 = FUN_01737820();
                  pvVar8 = _pthread_getspecific(param_1);
                  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    param_1 = pVar1;
                  }
                  FUN_0173b6f0();
                  pvVar8 = _pthread_getspecific(param_1);
                  puVar10 = local_80;
                  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    puVar10 = (void*)local_80[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                  }
                  iVar6 = FUN_01736dd0();
                  puVar11 = (void*)CONCAT71((int7)((uint64_t)puVar10 >> 8),iVar5 != iVar6);
                  if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  iVar5 = FUN_01d654a0();
                  if (iVar5 == 5) {
                    FUN_01d654a0();
                    FUN_01d66ab0();
                    pvVar8 = _pthread_getspecific(param_1);
                    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                      param_1 = pVar1;
                    }
                    FUN_0173b6f0();
                    pvVar8 = _pthread_getspecific(param_1);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    iVar5 = FUN_01737820();
                    pvVar8 = _pthread_getspecific(param_1);
                    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                      param_1 = pVar1;
                    }
                    FUN_0173b6f0();
                    pvVar8 = _pthread_getspecific(param_1);
                    puVar10 = local_80;
                    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                      puVar10 = (void*)
                                local_80[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                    }
                    iVar6 = FUN_01736dd0();
                    puVar11 = (void*)CONCAT71((int7)((uint64_t)puVar10 >> 8),iVar5 != iVar6)
                    ;
                    if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    iVar5 = FUN_01d654a0();
                    if (iVar5 == 2) {
                      FUN_01d654a0();
                      FUN_01d66ab0();
                      pvVar8 = _pthread_getspecific(param_1);
                      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                        param_1 = pVar1;
                      }
                      FUN_0173b6f0();
                      pvVar8 = _pthread_getspecific(param_1);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      iVar5 = FUN_01737820();
                      pvVar8 = _pthread_getspecific(param_1);
                      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                        param_1 = pVar1;
                      }
                      FUN_0173b6f0();
                      pvVar8 = _pthread_getspecific(param_1);
                      puVar10 = local_80;
                      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                        puVar10 = (void*)
                                  local_80[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                      }
                      iVar6 = FUN_01736dd0();
                      puVar11 = (void*)
                                CONCAT71((int7)((uint64_t)puVar10 >> 8),iVar5 != iVar6);
                      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      iVar5 = FUN_01d654a0();
                      if (iVar5 == 3) {
                        pvVar8 = _pthread_getspecific(param_1);
                        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                          param_1 = pVar1;
                        }
                        FUN_0173b6f0();
                        pvVar8 = _pthread_getspecific(param_1);
                        if (pvVar8 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_01737820();
                        pvVar8 = _pthread_getspecific(param_1);
                        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                          param_1 = pVar1;
                        }
                        FUN_0173b6f0();
                        pvVar8 = _pthread_getspecific(param_1);
                        if (pvVar8 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_01736dd0();
                        FUN_01d66ab0();
                        if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
                          FUN_00d50b20();
                        }
                        pvVar8 = _pthread_getspecific(param_1);
                        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                          param_1 = pVar1;
                        }
                        cVar4 = FUN_01739620();
                        if (cVar4 != '\0') {
                          pvVar8 = _pthread_getspecific(param_1);
                          if (pvVar8 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          uVar7 = FUN_01739960();
                          puVar11 = (void*)((uint64_t)uVar7 ^ 1);
                          goto LAB_01b1b04a;
                        }
                      }
                      puVar11 = (void*)0x0;
                    }
                  }
                }
              }
            }
LAB_01b1b04a:
            if (in_stack_ffffffffffffffa0 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d50b00();
            *(int *)(this_ptr + 0x2fc) = *(int *)(this_ptr + 0x2fc) + 1;
            FUN_01caeae0();
            if ((local_78 == '\0') && (local_80 != (void*)0x0)) {
              FUN_00d50b00();
            }
            iVar5 = FUN_01d654a0();
            if (iVar5 == 0) {
              pvVar8 = _pthread_getspecific(param_1);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar10 = g_027cd560;
              if (g_027cd560 != (void*)0x0) {
                FUN_00d50b00();
              }
              FUN_017395b0();
              if (puVar10 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            else {
              iVar5 = FUN_01d654a0();
              if (iVar5 == 1) {
                pvVar8 = _pthread_getspecific(param_1);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                puVar10 = g_027e3b50;
                if (g_027e3b50 != (void*)0x0) {
                  FUN_00d50b00();
                }
                FUN_017395b0();
                if (puVar10 != (void*)0x0) {
                  FUN_00d50b20();
                }
              }
              else {
                iVar5 = FUN_01d654a0();
                if (iVar5 == 2) {
                  pvVar8 = _pthread_getspecific(param_1);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  puVar10 = g_027cd580;
                  if (g_027cd580 != (void*)0x0) {
                    FUN_00d50b00();
                  }
                  FUN_017395b0();
                  if (puVar10 != (void*)0x0) {
                    FUN_00d50b20();
                  }
                }
                else {
                  iVar5 = FUN_01d654a0();
                  if (iVar5 == 4) {
                    pvVar8 = _pthread_getspecific(param_1);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    puVar10 = g_027e3b58;
                    if (g_027e3b58 != (void*)0x0) {
                      FUN_00d50b00();
                    }
                    FUN_017395b0();
                    if (puVar10 != (void*)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    iVar5 = FUN_01d654a0();
                    if (iVar5 == 5) {
                      pvVar8 = _pthread_getspecific(param_1);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      puVar10 = g_027e3b60;
                      if (g_027e3b60 != (void*)0x0) {
                        FUN_00d50b00();
                      }
                      FUN_017395b0();
                      if (puVar10 != (void*)0x0) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      iVar5 = FUN_01d654a0();
                      if (iVar5 == 3) {
                        pvVar8 = _pthread_getspecific(param_1);
                        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                          param_1 = pVar1;
                        }
                        FUN_0173b6f0();
                        pvVar8 = _pthread_getspecific(param_1);
                        puVar10 = local_80;
                        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                          puVar10 = (void*)
                                    local_80[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                        }
                        FUN_01737a50();
                        if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
                          FUN_00d50b20();
                        }
                        pvVar8 = _pthread_getspecific(param_1);
                        if (pvVar8 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0174bd90();
                      }
                    }
                  }
                }
              }
            }
            FUN_01ad6540();
            if (local_80 != (void*)0x0) {
              FUN_00d50b20();
            }
            FUN_01af6500();
            FUN_00d50b20();
            puVar11 = (void*)CONCAT71((int7)((uint64_t)puVar10 >> 8),1);
          }
        }
        else {
          if (in_stack_ffffffffffffffa0 != 0) goto LAB_01b1a0cc;
LAB_01b1a1b1:
          puVar11 = &g_02802501;
          bVar12 = true;
          bVar3 = true;
joined_r0x01b1a1b6:
          if (param_2 == '\0') {
            FUN_01caeae0();
            if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != 0)) {
              FUN_00d50b00();
            }
            iVar5 = FUN_01d654a0();
            if (iVar5 == 3) {
              puVar11 = (void*)0x0;
            }
            else {
              iVar5 = FUN_01d654a0();
              puVar11 = (void*)CONCAT71((int7)((uint64_t)puVar11 >> 8),iVar5 < 6);
            }
            if (in_stack_ffffffffffffffa0 != 0) {
              FUN_00d50b20();
            }
            if (bVar12) goto LAB_01b1b060;
          }
          else {
            FUN_00d50b00();
            *(int *)(this_ptr + 0x2fc) = *(int *)(this_ptr + 0x2fc) + 1;
            FUN_01caeae0();
            if ((local_78 == '\0') && (local_80 != (void*)0x0)) {
              FUN_00d50b00();
            }
            iVar5 = FUN_01d654a0();
            puVar10 = g_027cd560;
            if (iVar5 == 0) {
              if (g_027cd560 != (void*)0x0) {
                FUN_00d50b00();
              }
LAB_01b1a7e7:
              bVar12 = puVar10 != (void*)0x0;
            }
            else {
              iVar5 = FUN_01d654a0();
              puVar10 = g_027e3b50;
              if (iVar5 == 1) {
                if (g_027e3b50 != (void*)0x0) {
                  FUN_00d50b00();
                }
                goto LAB_01b1a7e7;
              }
              iVar5 = FUN_01d654a0();
              puVar10 = g_027cd580;
              if (iVar5 == 2) {
                if (g_027cd580 != (void*)0x0) {
                  FUN_00d50b00();
                }
                goto LAB_01b1a7e7;
              }
              iVar5 = FUN_01d654a0();
              puVar10 = g_027e3b58;
              if (iVar5 == 4) {
                if (g_027e3b58 != (void*)0x0) {
                  FUN_00d50b00();
                }
                goto LAB_01b1a7e7;
              }
              iVar5 = FUN_01d654a0();
              puVar10 = g_027e3b60;
              if (iVar5 == 5) {
                if (g_027e3b60 != (void*)0x0) {
                  FUN_00d50b00();
                }
                goto LAB_01b1a7e7;
              }
              puVar10 = (void*)0x0;
              bVar12 = false;
            }
            pvVar8 = _pthread_getspecific(param_1);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0174d370();
            FUN_01ad6540();
            if (local_80 != (void*)0x0) {
              FUN_00d50b20();
            }
            if ((bVar12) && (puVar10 != (void*)0x0)) {
              FUN_00d50b20();
            }
            FUN_01af6500();
            FUN_00d50b20();
            puVar11 = (void*)0x1;
            if (bVar3) goto LAB_01b1b060;
          }
        }
        FUN_00d50b20();
      }
LAB_01b1b060:
      FUN_00d50b20();
      goto LAB_01b1b069;
    }
  }
  puVar11 = (void*)0x0;
LAB_01b1b069:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar2) {
                        ___stack_chk_fail();
  }
  return (uint64_t)puVar11 & 0xffffffff;
}

