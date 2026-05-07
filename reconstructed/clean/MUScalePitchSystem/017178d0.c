// Function: FUN_017178d0
// Address: 017178d0
// Size: 2215 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"
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


int64_t * FUN_017178d0(void* param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  void* pVar8;
  int64_t *plVar9;
  void*puVar10;
  int64_t *plVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  uint local_34;
  
  lVar12 = *arg1;
  if (lVar12 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar12 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar12 + 0x50) != 0) {
    lVar12 = *arg1;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      lVar12 = *arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 1) = 0;
    lVar12 = *(int64_t *)(lVar12 + 0x50);
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar12;
    goto LAB_01718097;
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025fbbb0;
  *(void*)((int64_t)puVar7 + 0xc) = 0;
  puVar7[3] = 0;
  FUN_00d500e0();
  plVar9 = (int64_t *)*arg1;
  if ((g_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0270ab28 = FUN_0015ea50();
    g_0270ab10 = "MUScalePitchSystem";
    g_0270ab18 = 0x78;
    g_0270ab20 = FUN_0015ecf0;
    g_0270ab30 = 0;
    ram_000000000270ab38 = 0;
    g_0270ab40 = 0;
    ram_000000000270ab48 = 0;
    g_0270ab50 = 0;
    ram_000000000270ab58 = 0;
    g_0270ab60 = 0;
    ram_000000000270ab68 = 0;
    g_0270ab70 = 0;
    ram_000000000270ab78 = 0;
    g_0270ab80 = 0;
    ram_000000000270ab88 = 0;
    g_0270ab90 = 0;
    ram_000000000270ab98 = 0;
    g_0270aba0 = 0;
    ram_000000000270aba8 = 0;
    g_0270abb0 = 0;
    ram_000000000270abb8 = 0;
    g_0270abc0 = 0;
    ram_000000000270abc8 = 0;
    g_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01717a0f:
    plVar9 = &g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar9 = arg1;
    if (cVar2 == '\0') goto LAB_01717a0f;
  }
  lVar12 = plVar9[1];
  if (((char)lVar12 == '\0') || (*plVar9 == 0)) {
    if (*plVar9 != 0) goto LAB_01717a3a;
    plVar11 = (int64_t *)*arg1;
    pvVar5 = _pthread_getspecific((void*)plVar9);
    pVar8 = (void*)plVar9;
    if (pvVar5 != (void *)0x0) {
      plVar11 = (int64_t *)*arg1;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
    }
    local_34 = 0;
    cVar2 = (**(code **)(*plVar11 + 1000))();
    if (cVar2 == '\0') {
      plVar9 = (int64_t *)*arg1;
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (int64_t *)*arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      local_34 = 1;
      cVar2 = (**(code **)(*plVar9 + 1000))();
      if (cVar2 == '\0') {
        plVar9 = (int64_t *)*arg1;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          plVar9 = (int64_t *)*arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
        }
        local_34 = 2;
        cVar2 = (**(code **)(*plVar9 + 1000))();
        if (cVar2 == '\0') {
          plVar9 = (int64_t *)*arg1;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            plVar9 = (int64_t *)*arg1;
            lVar12 = FUN_00e8b990();
            if (lVar12 != 0) {
              plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
            }
          }
          local_34 = 3;
          cVar2 = (**(code **)(*plVar9 + 1000))();
          if (cVar2 == '\0') {
            plVar9 = (int64_t *)*arg1;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              plVar9 = (int64_t *)*arg1;
              lVar12 = FUN_00e8b990();
              if (lVar12 != 0) {
                plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
              }
            }
            local_34 = 4;
            cVar2 = (**(code **)(*plVar9 + 1000))();
            if (cVar2 == '\0') {
              plVar9 = (int64_t *)*arg1;
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                plVar9 = (int64_t *)*arg1;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                }
              }
              local_34 = 5;
              cVar2 = (**(code **)(*plVar9 + 1000))();
              if (cVar2 == '\0') {
                plVar9 = (int64_t *)*arg1;
                pvVar5 = _pthread_getspecific(pVar8);
                if (pvVar5 != (void *)0x0) {
                  plVar9 = (int64_t *)*arg1;
                  lVar12 = FUN_00e8b990();
                  if (lVar12 != 0) {
                    plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                  }
                }
                local_34 = 6;
                cVar2 = (**(code **)(*plVar9 + 1000))();
                if (cVar2 == '\0') {
                  plVar9 = (int64_t *)*arg1;
                  pvVar5 = _pthread_getspecific(pVar8);
                  if (pvVar5 != (void *)0x0) {
                    plVar9 = (int64_t *)*arg1;
                    lVar12 = FUN_00e8b990();
                    if (lVar12 != 0) {
                      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                    }
                  }
                  local_34 = 7;
                  cVar2 = (**(code **)(*plVar9 + 1000))();
                  if (cVar2 == '\0') {
                    plVar9 = (int64_t *)*arg1;
                    pvVar5 = _pthread_getspecific(pVar8);
                    if (pvVar5 != (void *)0x0) {
                      plVar9 = (int64_t *)*arg1;
                      lVar12 = FUN_00e8b990();
                      if (lVar12 != 0) {
                        plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                      }
                    }
                    local_34 = 8;
                    cVar2 = (**(code **)(*plVar9 + 1000))();
                    if (cVar2 == '\0') {
                      plVar9 = (int64_t *)*arg1;
                      pvVar5 = _pthread_getspecific(pVar8);
                      if (pvVar5 != (void *)0x0) {
                        plVar9 = (int64_t *)*arg1;
                        lVar12 = FUN_00e8b990();
                        if (lVar12 != 0) {
                          plVar9 = (int64_t *)
                                   plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                        }
                      }
                      local_34 = 9;
                      cVar2 = (**(code **)(*plVar9 + 1000))();
                      if (cVar2 == '\0') {
                        plVar9 = (int64_t *)*arg1;
                        pvVar5 = _pthread_getspecific(pVar8);
                        if (pvVar5 != (void *)0x0) {
                          plVar9 = (int64_t *)*arg1;
                          lVar12 = FUN_00e8b990();
                          if (lVar12 != 0) {
                            plVar9 = (int64_t *)
                                     plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                          }
                        }
                        local_34 = 10;
                        cVar2 = (**(code **)(*plVar9 + 1000))();
                        if (cVar2 == '\0') {
                          plVar9 = (int64_t *)*arg1;
                          pvVar5 = _pthread_getspecific((void*)arg1);
                          if (pvVar5 != (void *)0x0) {
                            plVar9 = (int64_t *)*arg1;
                            lVar12 = FUN_00e8b990();
                            if (lVar12 != 0) {
                              plVar9 = (int64_t *)
                                       plVar9[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                            }
                          }
                          local_34 = 0xb;
                          cVar2 = (**(code **)(*plVar9 + 1000))();
                          if (cVar2 == '\0') {
                            *(void*)(this_ptr + 1) = 0;
                            *this_ptr = 0;
                            FUN_00d50b20();
                            return this_ptr;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar3 = ((char)local_34 + ((byte)(local_34 / 3) & 0xfc) * -3) * '\a';
    bVar3 = bVar3 + (bVar3 / 3 & 0xfc) * -3 + 6;
    uVar1 = (bVar3 / 3 & 0xfffffffc) * 3;
    puVar10 = (void*)(uint64_t)uVar1;
    *(uint *)((int64_t)puVar7 + 0xc) = (byte)(bVar3 - (char)uVar1) - 6;
  }
  else {
    FUN_00d50b00();
LAB_01717a3a:
    pvVar5 = _pthread_getspecific((void*)plVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01743720();
    *(int *)((int64_t)puVar7 + 0xc) = iVar4;
    iVar4 = iVar4 * 7;
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    puVar10 = (void*)(uint64_t)((iVar4 >> 0x1f & 0xcU) + iVar4);
    if ((char)lVar12 != '\0') {
      FUN_00d50b20();
    }
  }
  *(void*)(puVar7 + 2) = 0;
  bVar3 = 0;
  lVar12 = 0;
  do {
    plVar9 = (int64_t *)*arg1;
    pvVar5 = _pthread_getspecific((void*)puVar10);
    if (pvVar5 != (void *)0x0) {
      plVar9 = (int64_t *)*arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar9 + 0x378))();
    plVar9 = (int64_t *)*arg1;
    pvVar5 = _pthread_getspecific((void*)puVar10);
    if (pvVar5 != (void *)0x0) {
      plVar9 = (int64_t *)*arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    cVar2 = (**(code **)(*plVar9 + 0x3b8))();
    if (cVar2 != '\0') {
      puVar7[3] = puVar7[3] & ~(0xfL << (bVar3 & 0x3f));
      puVar10 = puVar7;
    }
    pVar8 = (void*)puVar10;
    lVar12 = lVar12 + 1;
    bVar3 = bVar3 + 4;
  } while (lVar12 != 0xc);
  FUN_01715d80();
  lVar12 = *arg1;
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    lVar12 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  puVar10 = *(void**)(lVar12 + 0x50);
  if (puVar10 != puVar7) {
    if (puVar7 != (void*)0x0) {
      FUN_00d50b00();
    }
    *(void**)(lVar12 + 0x50) = puVar7;
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = (int64_t)puVar7;
LAB_01718097:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

