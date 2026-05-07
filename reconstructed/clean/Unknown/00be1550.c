// Function: FUN_00be1550
// Address: 00be1550
// Size: 6264 bytes
// Class: Unknown
// String references:
//   "ARA"
//   "audioSources"
//   "audioSource"
//   "documentArchiveID"
//   "openAutomatically"
//   "suggestedPlugIn"
//   "plugInName"
//   "lowestSupportedVersion"
//   "manufacturerName"
//   "informationURL"
//   "persistentID"
//   "archiveData"

void* FUN_00be1550(uint64_t param_1,int64_t param_2)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar14;
  bool bVar15;
  int64_t *local_2b0;
  uint8_t local_2a8;
  int64_t *local_2a0;
  uint8_t local_298;
  int64_t *local_290;
  uint8_t local_288;
  int64_t *local_280;
  uint8_t local_278;
  int64_t *local_270;
  uint8_t local_268;
  int64_t *local_260;
  uint8_t local_258;
  int64_t local_238;
  int64_t *local_120;
  int64_t *local_118;
  int64_t *local_110;
  int64_t local_108;
  char local_100;
  int local_f0;
  int64_t *local_d0;
  int64_t local_c0;
  char local_b8;
  int64_t *local_a8;
  char local_a0;
  int local_90;
  int64_t *local_80;
  char local_78;
  int local_68;
  int64_t *local_58;
  int64_t *local_40;
  char local_38;
  
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_007b8c30();
  (**(code **)(*plVar8 + 0x18))();
  plVar8[3] = arg1;
  plVar8[4] = param_2;
  FUN_00d6b2c0();
  if (local_100 == '\0') {
    if (local_108 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_100 = '\0';
  }
  FUN_00d6c240();
  if (local_100 == '\0') {
    if (local_108 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_100 = '\0';
  }
  if (local_108 != 0) {
    FUN_00d91a70();
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    FUN_00d6c8f0();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_108 != 0) {
    FUN_00d91a70();
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    FUN_00d6c8f0();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_108 != 0) {
      FUN_00d6be50();
      if (local_100 == '\0') {
        if (local_108 != 0) {
          FUN_00d50b00();
          goto LAB_00be1960;
        }
      }
      else if (local_108 != 0) {
LAB_00be1960:
        local_f0 = -1;
        while (plVar3 = local_80, local_f0 = local_f0 + 1, local_f0 < *(int *)(local_108 + 0xc)) {
          FUN_00d6c870();
          FUN_00d91a70();
          if (local_a0 == '\0') {
            if (local_a8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          cVar6 = (**(code **)(*local_80 + 0x50))();
          if (local_a8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar6 != '\0') {
            FUN_00d8ede0();
            if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            local_120 = local_80;
            FUN_00d8ede0();
            if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            local_118 = local_80;
            FUN_00d8ede0();
            local_d0 = local_80;
            if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            FUN_00d8ede0();
            if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            local_110 = local_80;
            FUN_00d6be50();
            if (local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_00be1c60;
              }
LAB_00be2bf3:
              local_238 = 0;
              bVar7 = 0;
              bVar1 = false;
              plVar14 = (int64_t *)0x0;
              local_58 = (int64_t *)0x0;
              bVar15 = false;
            }
            else {
              if (local_80 == (int64_t *)0x0) goto LAB_00be2bf3;
LAB_00be1c60:
              local_78 = '\0';
              local_80 = (int64_t *)0x0;
              local_68 = -1;
              local_58 = (int64_t *)0x0;
              bVar7 = 0;
              local_238 = 0;
              plVar13 = (int64_t *)0x0;
              plVar12 = local_58;
              bVar4 = false;
              bVar5 = false;
LAB_00be1cd9:
              bVar1 = bVar5;
              bVar15 = bVar4;
              local_58 = plVar12;
              plVar14 = plVar13;
              plVar2 = local_a8;
              lVar9 = (int64_t)local_68;
              local_68 = local_68 + 1;
              if (local_68 < *(int *)((int64_t)plVar3 + 0xc)) {
                local_80 = *(int64_t **)(plVar3[2] + 8 + lVar9 * 8);
                FUN_00d6c870();
                FUN_00d91a70();
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                cVar6 = (**(code **)(*local_a8 + 0x50))();
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar13 = plVar14;
                plVar12 = local_58;
                bVar5 = bVar1;
                if (cVar6 != '\0') {
                  uVar10 = FUN_00d6cad0();
                  uVar11 = FUN_00d6cae0();
                  FUN_00d6a250(uVar11,uVar10);
                  if (local_58 == local_a8) {
                    if ((!bVar15) && (local_58 != (int64_t *)0x0)) {
                      bVar4 = true;
                      if (local_a0 == '\0') {
                        FUN_00d50b00();
                        goto LAB_00be2a9b;
                      }
                      goto LAB_00be1cd9;
                    }
                  }
                  else {
                    if (local_a0 != '\0') {
                      bVar4 = true;
                      plVar12 = local_a8;
                      if ((bVar15) && (plVar12 = local_a8, local_58 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                        plVar12 = local_a8;
                      }
                      goto LAB_00be1cd9;
                    }
                    if (local_a8 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    plVar12 = local_a8;
                    if ((bVar15) && (local_58 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_00be2a9b:
                    bVar15 = true;
                    local_58 = plVar12;
                  }
                  plVar12 = local_58;
                  bVar4 = bVar15;
                  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00be1cd9;
                }
                FUN_00d6c870();
                FUN_00d91a70();
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                cVar6 = (**(code **)(*local_a8 + 0x50))();
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                bVar4 = bVar15;
                if (cVar6 != '\0') {
                  uVar10 = FUN_00d6cad0();
                  uVar11 = FUN_00d6cae0();
                  FUN_00d6a250(uVar11,uVar10);
                  if (local_a0 == '\0') {
                    if (local_a8 == (int64_t *)0x0) goto LAB_00be1cd9;
                    FUN_00d50b00();
                  }
                  else if (local_a8 == (int64_t *)0x0) goto LAB_00be1cd9;
                  bVar7 = FUN_00c70bc0();
                  FUN_00d50b20();
                  goto LAB_00be1cd9;
                }
                FUN_00d6c870();
                FUN_00d91a70();
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                cVar6 = (**(code **)(*local_a8 + 0x50))();
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar6 != '\0') {
                  FUN_00d6be50();
                  if (local_a0 == '\0') {
                    if (local_a8 != (int64_t *)0x0) {
                      FUN_00d50b00();
                      goto LAB_00be21a2;
                    }
                  }
                  else if (local_a8 != (int64_t *)0x0) {
LAB_00be21a2:
                    local_a0 = '\0';
                    local_a8 = (int64_t *)0x0;
                    local_90 = -1;
LAB_00be21e8:
                    lVar9 = (int64_t)local_90;
                    local_90 = local_90 + 1;
                    if (local_90 < *(int *)((int64_t)plVar2 + 0xc)) {
                      local_a8 = *(int64_t **)(plVar2[2] + 8 + lVar9 * 8);
                      FUN_00d6c870();
                      FUN_00d91a70();
                      if (local_b8 == '\0') {
                        if (local_c0 != 0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        local_b8 = '\0';
                      }
                      cVar6 = (**(code **)(*local_40 + 0x50))();
                      if (local_c0 != 0) {
                        FUN_00d50b20();
                      }
                      if ((local_b8 != '\0') && (local_c0 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (cVar6 == '\0') {
                        FUN_00d6c870();
                        FUN_00d91a70();
                        if (local_b8 == '\0') {
                          if (local_c0 != 0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_b8 = '\0';
                        }
                        cVar6 = (**(code **)(*local_40 + 0x50))();
                        if (local_c0 != 0) {
                          FUN_00d50b20();
                        }
                        if ((local_b8 != '\0') && (local_c0 != 0)) {
                          FUN_00d50b20();
                        }
                        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (cVar6 == '\0') {
                          FUN_00d6c870();
                          FUN_00d91a70();
                          if (local_b8 == '\0') {
                            if (local_c0 != 0) {
                              FUN_00d50b00();
                            }
                          }
                          else {
                            local_b8 = '\0';
                          }
                          cVar6 = (**(code **)(*local_40 + 0x50))();
                          if (local_c0 != 0) {
                            FUN_00d50b20();
                          }
                          if ((local_b8 != '\0') && (local_c0 != 0)) {
                            FUN_00d50b20();
                          }
                          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if (cVar6 == '\0') {
                            FUN_00d6c870();
                            FUN_00d91a70();
                            if (local_b8 == '\0') {
                              if (local_c0 != 0) {
                                FUN_00d50b00();
                              }
                            }
                            else {
                              local_b8 = '\0';
                            }
                            cVar6 = (**(code **)(*local_40 + 0x50))();
                            if (local_c0 != 0) {
                              FUN_00d50b20();
                            }
                            if ((local_b8 != '\0') && (local_c0 != 0)) {
                              FUN_00d50b20();
                            }
                            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (cVar6 != '\0') {
                              uVar10 = FUN_00d6cad0();
                              uVar11 = FUN_00d6cae0();
                              FUN_00d6a250(uVar11,uVar10);
                              if (local_110 != local_40) {
                                if (local_38 != '\0') {
                                  bVar15 = local_110 != (int64_t *)0x0;
                                  local_110 = local_40;
                                  if (bVar15) {
                                    FUN_00d50b20();
                                  }
                                  goto LAB_00be21e8;
                                }
                                if (local_40 != (int64_t *)0x0) {
                                  FUN_00d50b00();
                                }
                                bVar15 = local_110 != (int64_t *)0x0;
                                local_110 = local_40;
                                if (bVar15) {
                                  FUN_00d50b20();
                                }
                              }
                              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                            }
                            goto LAB_00be21e8;
                          }
                          uVar10 = FUN_00d6cad0();
                          uVar11 = FUN_00d6cae0();
                          FUN_00d6a250(uVar11,uVar10);
                          if (local_d0 != local_40) {
                            if (local_38 != '\0') {
                              bVar15 = local_d0 != (int64_t *)0x0;
                              local_d0 = local_40;
                              if (bVar15) {
                                FUN_00d50b20();
                              }
                              goto LAB_00be21e8;
                            }
                            if (local_40 != (int64_t *)0x0) {
                              FUN_00d50b00();
                            }
                            bVar15 = local_d0 != (int64_t *)0x0;
                            local_d0 = local_40;
                            if (bVar15) {
                              FUN_00d50b20();
                            }
                          }
                          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_00be21e8;
                        }
                        uVar10 = FUN_00d6cad0();
                        uVar11 = FUN_00d6cae0();
                        FUN_00d6a250(uVar11,uVar10);
                        if (local_118 != local_40) {
                          if (local_38 != '\0') {
                            bVar15 = local_118 != (int64_t *)0x0;
                            local_118 = local_40;
                            if (bVar15) {
                              FUN_00d50b20();
                            }
                            goto LAB_00be21e8;
                          }
                          if (local_40 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                          bVar15 = local_118 != (int64_t *)0x0;
                          local_118 = local_40;
                          if (bVar15) {
                            FUN_00d50b20();
                          }
                        }
                        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_00be21e8;
                      }
                      uVar10 = FUN_00d6cad0();
                      uVar11 = FUN_00d6cae0();
                      FUN_00d6a250(uVar11,uVar10);
                      if (local_120 == local_40) {
LAB_00be27c1:
                        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        if (local_38 == '\0') {
                          if (local_40 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                          bVar15 = local_120 != (int64_t *)0x0;
                          local_120 = local_40;
                          if (bVar15) {
                            FUN_00d50b20();
                          }
                          goto LAB_00be27c1;
                        }
                        bVar15 = local_120 != (int64_t *)0x0;
                        local_120 = local_40;
                        if (bVar15) {
                          FUN_00d50b20();
                        }
                      }
                      goto LAB_00be21e8;
                    }
                    FUN_00bea5a0();
                    FUN_00d50b20();
                  }
                }
                FUN_00d6c870();
                FUN_00d91a70();
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                cVar6 = (**(code **)(*local_a8 + 0x50))();
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar6 != '\0') {
                  uVar10 = FUN_00d6cad0();
                  uVar11 = FUN_00d6cae0();
                  FUN_00d6a250(uVar11,uVar10);
                  if (plVar14 == local_a8) {
                    if ((!bVar1) && (plVar14 != (int64_t *)0x0)) {
                      bVar5 = true;
                      if (local_a0 != '\0') goto LAB_00be1cd9;
                      FUN_00d50b00();
                      bVar5 = true;
                    }
                  }
                  else {
                    plVar13 = local_a8;
                    if (local_a0 != '\0') {
                      bVar5 = true;
                      if ((bVar1) && (plVar14 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_00be1cd9;
                    }
                    if (local_a8 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    bVar5 = true;
                    if ((bVar1) && (plVar14 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00be1cd9;
                }
                FUN_00d6c870();
                FUN_00d91a70();
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                cVar6 = (**(code **)(*local_a8 + 0x50))();
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar6 != '\0') {
                  FUN_00d6cad0();
                  local_238 = FUN_00d6cae0();
                }
                goto LAB_00be1cd9;
              }
              FUN_00bea5a0();
              FUN_00d50b20();
            }
            local_2a8 = 0;
            local_298 = 0;
            local_290 = local_120;
            local_288 = 0;
            local_280 = local_118;
            local_278 = 0;
            local_270 = local_d0;
            local_268 = 0;
            local_260 = local_110;
            local_258 = 0;
            local_2b0 = local_58;
            local_2a0 = plVar14;
            FUN_00bdfbb0(&local_2b0,local_238 + arg1,&local_2a0,bVar7 & 1);
            if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            local_78 = '\0';
            FUN_00d21140();
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((bVar1) && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_110 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (local_d0 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (local_118 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (local_120 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((bVar15) && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00bea5a0();
        FUN_00d50b20();
      }
      *this_ptr = plVar8;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      goto LAB_00be2e0c;
    }
  }
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
LAB_00be2e0c:
  if (local_108 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

