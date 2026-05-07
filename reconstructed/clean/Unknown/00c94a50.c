// Function: FUN_00c94a50
// Address: 00c94a50
// Size: 4509 bytes
// Class: Unknown
// String references:
//   "%I"
//   "%@"
//   "%02I"
//   "%03I"
//   "%04I"
//   "AM"
//   "PM"

void* FUN_00c94a50(void*param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  void*puVar6;
  tm *ptVar7;
  time_t *ptVar8;
  time_t tVar9;
  int64_t **pplVar10;
  int iVar11;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar12;
  double dVar13;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t uVar14;
  uint64_t local_270;
  uint8_t local_268;
  uint64_t local_260;
  uint8_t local_258;
  uint64_t local_250;
  uint8_t local_248;
  uint64_t local_240;
  uint8_t local_238;
  void*local_80;
  uint32_t local_78;
  int local_74;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  void*local_58;
  int64_t *local_50;
  uint local_48;
  int local_44;
  void*local_40;
  char local_38;
  
  FUN_00ddb860();
  plVar3 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  ptVar8 = (time_t *)&g_025795a8;
  *puVar6 = &g_025795a8;
  (*g_025795c0)();
  local_58 = puVar6;
  (**(code **)(*plVar3 + 0x380))();
  uVar14 = g_025908a0;
  local_68 = '\0';
  local_70 = (int64_t *)0x0;
  local_60 = arg1 + 0x10;
  while( true ) {
    lVar1 = g_0276bc70;
    if (g_0276bc70 != 0) {
      FUN_00d50b00();
    }
    uVar12 = FUN_006e17f0();
    plVar2 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    cVar5 = (**(code **)(*plVar3 + 0x3c0))(uVar12,&local_70);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') break;
    FUN_00d8dbf0();
    pplVar10 = &local_70;
    cVar5 = (**(code **)(*plVar3 + 0x3d0))();
    plVar2 = local_70;
    lVar1 = g_02772f60;
    tVar9 = (time_t)pplVar10;
    if (cVar5 != '\0') {
      if (g_02772f60 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar2 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar2 = local_70;
      lVar1 = g_02772f68;
      if (cVar5 == '\0') {
        if (g_02772f68 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar2 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        plVar2 = local_70;
        lVar1 = g_02772f70;
        if (cVar5 == '\0') {
          if (g_02772f70 != 0) {
            FUN_00d50b00();
          }
          cVar5 = (**(code **)(*plVar2 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          plVar2 = local_70;
          lVar1 = g_02772f78;
          if (cVar5 == '\0') {
            if (g_02772f78 != 0) {
              FUN_00d50b00();
            }
            cVar5 = (**(code **)(*plVar2 + 0x50))();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            plVar2 = local_70;
            lVar1 = g_02772f80;
            if (cVar5 == '\0') {
              if (g_02772f80 != 0) {
                FUN_00d50b00();
              }
              cVar5 = (**(code **)(*plVar2 + 0x50))();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              plVar2 = local_70;
              lVar1 = g_02772f88;
              if (cVar5 == '\0') {
                if (g_02772f88 != 0) {
                  FUN_00d50b00();
                }
                cVar5 = (**(code **)(*plVar2 + 0x50))();
                uVar12 = extraout_XMM0_Qa;
                if (lVar1 != 0) {
                  uVar12 = FUN_00d50b20();
                }
                plVar2 = local_70;
                lVar1 = g_02772f90;
                if (cVar5 == '\0') {
                  if (g_02772f90 != 0) {
                    FUN_00d50b00();
                  }
                  cVar5 = (**(code **)(*plVar2 + 0x50))();
                  uVar12 = extraout_XMM0_Qa_00;
                  if (lVar1 != 0) {
                    uVar12 = FUN_00d50b20();
                  }
                  plVar2 = local_70;
                  lVar1 = g_02772f98;
                  if (cVar5 == '\0') {
                    if (g_02772f98 != 0) {
                      FUN_00d50b00();
                    }
                    cVar5 = (**(code **)(*plVar2 + 0x50))();
                    if (lVar1 != 0) {
                      FUN_00d50b20();
                    }
                    plVar2 = local_70;
                    lVar1 = g_02772fa0;
                    if (cVar5 == '\0') {
                      if (g_02772fa0 != 0) {
                        FUN_00d50b00();
                      }
                      cVar5 = (**(code **)(*plVar2 + 0x50))();
                      uVar12 = extraout_XMM0_Qa_01;
                      if (lVar1 != 0) {
                        uVar12 = FUN_00d50b20();
                      }
                      plVar2 = local_70;
                      lVar1 = g_02772fa8;
                      if (cVar5 == '\0') {
                        if (g_02772fa8 != 0) {
                          FUN_00d50b00();
                        }
                        cVar5 = (**(code **)(*plVar2 + 0x50))();
                        uVar12 = extraout_XMM0_Qa_02;
                        if (lVar1 != 0) {
                          uVar12 = FUN_00d50b20();
                        }
                        plVar2 = local_70;
                        lVar1 = g_02772fb0;
                        if (cVar5 == '\0') {
                          if (g_02772fb0 != 0) {
                            FUN_00d50b00();
                          }
                          cVar5 = (**(code **)(*plVar2 + 0x50))();
                          if (lVar1 != 0) {
                            FUN_00d50b20();
                          }
                          plVar2 = local_70;
                          lVar1 = g_02772fb8;
                          if (cVar5 == '\0') {
                            if (g_02772fb8 != 0) {
                              FUN_00d50b00();
                            }
                            cVar5 = (**(code **)(*plVar2 + 0x50))();
                            if (lVar1 != 0) {
                              FUN_00d50b20();
                            }
                            plVar2 = local_70;
                            lVar1 = g_02772fc0;
                            if (cVar5 == '\0') {
                              if (g_02772fc0 != 0) {
                                FUN_00d50b00();
                              }
                              cVar5 = (**(code **)(*plVar2 + 0x50))();
                              if (lVar1 != 0) {
                                FUN_00d50b20();
                              }
                              plVar2 = local_70;
                              lVar1 = g_027e3b70;
                              if (cVar5 == '\0') {
                                if (g_027e3b70 != 0) {
                                  FUN_00d50b00();
                                }
                                cVar5 = (**(code **)(*plVar2 + 0x50))();
                                if (lVar1 != 0) {
                                  FUN_00d50b20();
                                }
                                plVar2 = local_70;
                                lVar1 = g_02772fd0;
                                if (cVar5 == '\0') {
                                  if (g_02772fd0 != 0) {
                                    FUN_00d50b00();
                                  }
                                  cVar5 = (**(code **)(*plVar2 + 0x50))();
                                  if (lVar1 != 0) {
                                    FUN_00d50b20();
                                  }
                                  plVar2 = local_70;
                                  lVar1 = g_02772fd8;
                                  if (cVar5 == '\0') {
                                    if (g_02772fd8 != 0) {
                                      FUN_00d50b00();
                                    }
                                    cVar5 = (**(code **)(*plVar2 + 0x50))();
                                    if (lVar1 != 0) {
                                      FUN_00d50b20();
                                    }
                                    plVar2 = local_70;
                                    lVar1 = g_02772fe0;
                                    if (cVar5 == '\0') {
                                      if (g_02772fe0 != 0) {
                                        FUN_00d50b00();
                                      }
                                      cVar5 = (**(code **)(*plVar2 + 0x50))();
                                      if (lVar1 != 0) {
                                        FUN_00d50b20();
                                      }
                                      plVar2 = local_70;
                                      lVar1 = g_02772fe8;
                                      if (cVar5 == '\0') {
                                        if (g_02772fe8 != 0) {
                                          FUN_00d50b00();
                                        }
                                        cVar5 = (**(code **)(*plVar2 + 0x50))();
                                        if (lVar1 != 0) {
                                          FUN_00d50b20();
                                        }
                                        lVar1 = g_0276bc70;
                                        if (cVar5 != '\0') {
                                          if (g_0276bc70 != 0) {
                                            FUN_00d50b00();
                                          }
                                          FUN_00d8dbf0();
                                          if (lVar1 != 0) {
                                            FUN_00d50b20();
                                          }
                                        }
                                      }
                                      else {
                                        ptVar7 = _localtime(ptVar8);
                                        if (ptVar7 == (tm *)0x0) {
                                          local_44 = 0;
                                        }
                                        else {
                                          local_44 = ptVar7->tm_sec;
                                        }
                                        local_48 = 1;
                                        ptVar8 = (time_t *)&g_024cc6f0;
                                        local_50 = &g_024cc6f0;
                                        FUN_00d94d80(&g_024cc6f0,&local_50);
                                      }
                                    }
                                    else {
                                      ptVar7 = _localtime(ptVar8);
                                      if (ptVar7 == (tm *)0x0) {
                                        local_44 = 0;
                                      }
                                      else {
                                        local_44 = ptVar7->tm_min;
                                      }
                                      local_48 = 1;
                                      ptVar8 = (time_t *)&g_024cc6f0;
                                      local_50 = &g_024cc6f0;
                                      FUN_00d94d80(&g_024cc6f0,&local_50);
                                    }
                                  }
                                  else {
                                    ptVar7 = _localtime(ptVar8);
                                    if ((ptVar7 == (tm *)0x0) || (ptVar7->tm_hour < 0xd)) {
                                      FUN_00d94d80();
                                    }
                                    else {
                                      FUN_00d94d80();
                                    }
                                  }
                                }
                                else {
                                  ptVar7 = _localtime(ptVar8);
                                  if ((ptVar7 == (tm *)0x0) || (ptVar7->tm_hour < 0xd)) {
                                    ptVar7 = _localtime(ptVar8);
                                    if (ptVar7 == (tm *)0x0) {
                                      local_44 = 0;
                                    }
                                    else {
                                      local_44 = ptVar7->tm_hour;
                                    }
                                    local_48 = 1;
                                    ptVar8 = (time_t *)&g_024cc6f0;
                                    local_50 = &g_024cc6f0;
                                    FUN_00d94d80(&g_024cc6f0,&local_50);
                                  }
                                  else {
                                    ptVar7 = _localtime(ptVar8);
                                    if (ptVar7 == (tm *)0x0) {
                                      local_44 = 0;
                                    }
                                    else {
                                      local_44 = ptVar7->tm_hour;
                                    }
                                    local_44 = local_44 + -0xc;
                                    local_48 = 1;
                                    ptVar8 = (time_t *)&g_024cc6f0;
                                    local_50 = &g_024cc6f0;
                                    FUN_00d94d80(&g_024cc6f0,&local_50);
                                  }
                                }
                              }
                              else {
                                ptVar7 = _localtime(ptVar8);
                                if (ptVar7 == (tm *)0x0) {
                                  local_44 = 0;
                                }
                                else {
                                  local_44 = ptVar7->tm_hour;
                                }
                                local_48 = 1;
                                ptVar8 = (time_t *)&g_024cc6f0;
                                local_50 = &g_024cc6f0;
                                FUN_00d94d80(&g_024cc6f0,&local_50);
                              }
                            }
                            else {
                              ptVar7 = _localtime(ptVar8);
                              if (ptVar7 == (tm *)0x0) {
                                local_74 = 0;
                              }
                              else {
                                local_74 = ptVar7->tm_year + 0x76c;
                              }
                              local_78 = 1;
                              ptVar8 = (time_t *)&g_024cc6f0;
                              local_80 = &g_024cc6f0;
                              uVar12 = FUN_00d8cb40(&g_024cc6f0,&local_80);
                              plVar2 = local_50;
                              if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
                                uVar12 = FUN_00d50b00();
                                if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                                  uVar12 = FUN_00d50b20();
                                }
                              }
                              uVar12 = FUN_00d8f140(uVar12,2);
                              plVar4 = local_50;
                              if ((char)local_48 == '\0') {
                                if (local_50 != (int64_t *)0x0) {
                                  uVar12 = FUN_00d50b00();
                                }
                              }
                              else {
                                local_48 = local_48 & 0xffffff00;
                              }
                              FUN_00d93870(uVar12,uVar14);
                              if (plVar4 != (int64_t *)0x0) {
                                FUN_00d50b20();
                              }
                              if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (plVar2 != (int64_t *)0x0) {
                                FUN_00d50b20();
                              }
                            }
                          }
                          else {
                            ptVar7 = _localtime(ptVar8);
                            if (ptVar7 == (tm *)0x0) {
                              local_44 = 0;
                            }
                            else {
                              local_44 = ptVar7->tm_year + 0x76c;
                            }
                            local_48 = 1;
                            ptVar8 = (time_t *)&g_024cc6f0;
                            local_50 = &g_024cc6f0;
                            FUN_00d94d80(&g_024cc6f0,&local_50);
                          }
                        }
                        else {
                          local_240 = *param_1;
                          local_238 = 0;
                          uVar12 = FUN_00c967f0(uVar12,&local_240);
                          puVar6 = local_80;
                          local_48 = 1;
                          local_50 = &g_024c5048;
                          local_38 = 0;
                          if (local_80 != (void*)0x0) {
                            uVar12 = FUN_00d50b00();
                          }
                          local_40 = puVar6;
                          local_38 = '\x01';
                          FUN_00d94d80(uVar12,&local_50);
                          local_50 = &g_024c5048;
                          if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
                            FUN_00d50b20();
                          }
                          if (((char)local_78 != '\0') && (puVar6 != (void*)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                      }
                      else {
                        local_250 = *param_1;
                        local_248 = 0;
                        uVar12 = FUN_00c96730(uVar12,&local_250);
                        puVar6 = local_80;
                        local_48 = 1;
                        local_50 = &g_024c5048;
                        local_38 = 0;
                        if (local_80 != (void*)0x0) {
                          uVar12 = FUN_00d50b00();
                        }
                        local_40 = puVar6;
                        local_38 = '\x01';
                        FUN_00d94d80(uVar12,&local_50);
                        local_50 = &g_024c5048;
                        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
                          FUN_00d50b20();
                        }
                        if (((char)local_78 != '\0') && (puVar6 != (void*)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      ptVar7 = _localtime(ptVar8);
                      if (ptVar7 == (tm *)0x0) {
                        local_44 = 0;
                      }
                      else {
                        local_44 = ptVar7->tm_mon + 1;
                      }
                      local_48 = 1;
                      ptVar8 = (time_t *)&g_024cc6f0;
                      local_50 = &g_024cc6f0;
                      FUN_00d94d80(&g_024cc6f0,&local_50);
                    }
                  }
                  else {
                    local_260 = *param_1;
                    local_258 = 0;
                    uVar12 = FUN_00c96670(uVar12,&local_260);
                    puVar6 = local_80;
                    local_48 = 1;
                    local_50 = &g_024c5048;
                    local_38 = 0;
                    if (local_80 != (void*)0x0) {
                      uVar12 = FUN_00d50b00();
                    }
                    local_40 = puVar6;
                    local_38 = '\x01';
                    FUN_00d94d80(uVar12,&local_50);
                    local_50 = &g_024c5048;
                    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
                      FUN_00d50b20();
                    }
                    if (((char)local_78 != '\0') && (puVar6 != (void*)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_270 = *param_1;
                  local_268 = 0;
                  uVar12 = FUN_00c965b0(uVar12,&local_270);
                  puVar6 = local_80;
                  local_48 = 1;
                  local_50 = &g_024c5048;
                  local_38 = 0;
                  if (local_80 != (void*)0x0) {
                    uVar12 = FUN_00d50b00();
                  }
                  local_40 = puVar6;
                  local_38 = '\x01';
                  FUN_00d94d80(uVar12,&local_50);
                  local_50 = &g_024c5048;
                  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                  if (((char)local_78 != '\0') && (puVar6 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                ptVar7 = _localtime(ptVar8);
                if (ptVar7 == (tm *)0x0) {
                  local_44 = 0;
                }
                else {
                  local_44 = ptVar7->tm_wday;
                }
                local_48 = 1;
                ptVar8 = (time_t *)&g_024cc6f0;
                local_50 = &g_024cc6f0;
                FUN_00d94d80(&g_024cc6f0,&local_50);
              }
            }
            else {
              ptVar7 = _localtime(ptVar8);
              if (ptVar7 == (tm *)0x0) {
                local_44 = 0;
              }
              else {
                local_44 = ptVar7->tm_yday + 1;
              }
              local_48 = 1;
              ptVar8 = (time_t *)&g_024cc6f0;
              local_50 = &g_024cc6f0;
              FUN_00d94d80(&g_024cc6f0,&local_50);
            }
          }
          else {
            ptVar7 = _localtime(ptVar8);
            if (ptVar7 == (tm *)0x0) {
              local_44 = 0;
            }
            else {
              local_44 = ptVar7->tm_mday;
            }
            local_48 = 1;
            ptVar8 = (time_t *)&g_024cc6f0;
            local_50 = &g_024cc6f0;
            FUN_00d94d80(&g_024cc6f0,&local_50);
          }
        }
        else {
          _time(ptVar8);
          dVar13 = _difftime((time_t)ptVar8,tVar9);
          dVar13 = ((dVar13 / g_023b4df8) / g_023b4df8) / g_024111d0;
          iVar11 = (int)dVar13;
          if (-1 < iVar11) {
            dVar13 = (double)FUN_00d94d80(dVar13,uVar14);
          }
          local_48 = 1;
          local_50 = &g_024cc6f0;
          local_44 = iVar11;
          FUN_00d94d80(dVar13,&local_50);
        }
      }
      else {
        ptVar7 = _localtime(ptVar8);
        if (ptVar7 == (tm *)0x0) {
          local_44 = 0;
        }
        else {
          local_44 = ptVar7->tm_mday;
        }
        local_48 = 1;
        ptVar8 = (time_t *)&g_024cc6f0;
        local_50 = &g_024cc6f0;
        FUN_00d94d80(&g_024cc6f0,&local_50);
      }
    }
    (**(code **)(*plVar3 + 0x380))();
  }
  (**(code **)(*plVar3 + 0x380))();
  uVar14 = (**(code **)(*plVar3 + 0x378))();
  cVar5 = (**(code **)(*plVar3 + 0x3d0))(uVar14,&local_70);
  puVar6 = local_58;
  if (cVar5 != '\0') {
    FUN_00d8dbf0();
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

