// Function: FUN_017178d0
// Address: 017178d0
// Size: 2215 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_017178d0(pthread_key_t param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  uint local_34;
  
  lVar12 = *unaff_RSI;
  if (lVar12 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar12 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar12 + 0x50) != 0) {
    lVar12 = *unaff_RSI;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      lVar12 = *unaff_RSI;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar12 = *(longlong *)(lVar12 + 0x50);
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar12;
    goto LAB_01718097;
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025fbbb0;
  *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
  puVar7[3] = 0;
  FUN_00d500e0();
  plVar9 = (longlong *)*unaff_RSI;
  if ((DAT_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01717a0f:
    plVar9 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar9 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_01717a0f;
  }
  lVar12 = plVar9[1];
  if (((char)lVar12 == '\0') || (*plVar9 == 0)) {
    if (*plVar9 != 0) goto LAB_01717a3a;
    plVar11 = (longlong *)*unaff_RSI;
    pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
    pVar8 = (pthread_key_t)plVar9;
    if (pvVar5 != (void *)0x0) {
      plVar11 = (longlong *)*unaff_RSI;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
    }
    local_34 = 0;
    cVar2 = (**(code **)(*plVar11 + 1000))();
    if (cVar2 == '\0') {
      plVar9 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (longlong *)*unaff_RSI;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      local_34 = 1;
      cVar2 = (**(code **)(*plVar9 + 1000))();
      if (cVar2 == '\0') {
        plVar9 = (longlong *)*unaff_RSI;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          plVar9 = (longlong *)*unaff_RSI;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
        }
        local_34 = 2;
        cVar2 = (**(code **)(*plVar9 + 1000))();
        if (cVar2 == '\0') {
          plVar9 = (longlong *)*unaff_RSI;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            plVar9 = (longlong *)*unaff_RSI;
            lVar12 = FUN_00e8b990();
            if (lVar12 != 0) {
              plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
            }
          }
          local_34 = 3;
          cVar2 = (**(code **)(*plVar9 + 1000))();
          if (cVar2 == '\0') {
            plVar9 = (longlong *)*unaff_RSI;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              plVar9 = (longlong *)*unaff_RSI;
              lVar12 = FUN_00e8b990();
              if (lVar12 != 0) {
                plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
              }
            }
            local_34 = 4;
            cVar2 = (**(code **)(*plVar9 + 1000))();
            if (cVar2 == '\0') {
              plVar9 = (longlong *)*unaff_RSI;
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                plVar9 = (longlong *)*unaff_RSI;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                }
              }
              local_34 = 5;
              cVar2 = (**(code **)(*plVar9 + 1000))();
              if (cVar2 == '\0') {
                plVar9 = (longlong *)*unaff_RSI;
                pvVar5 = _pthread_getspecific(pVar8);
                if (pvVar5 != (void *)0x0) {
                  plVar9 = (longlong *)*unaff_RSI;
                  lVar12 = FUN_00e8b990();
                  if (lVar12 != 0) {
                    plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                  }
                }
                local_34 = 6;
                cVar2 = (**(code **)(*plVar9 + 1000))();
                if (cVar2 == '\0') {
                  plVar9 = (longlong *)*unaff_RSI;
                  pvVar5 = _pthread_getspecific(pVar8);
                  if (pvVar5 != (void *)0x0) {
                    plVar9 = (longlong *)*unaff_RSI;
                    lVar12 = FUN_00e8b990();
                    if (lVar12 != 0) {
                      plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                    }
                  }
                  local_34 = 7;
                  cVar2 = (**(code **)(*plVar9 + 1000))();
                  if (cVar2 == '\0') {
                    plVar9 = (longlong *)*unaff_RSI;
                    pvVar5 = _pthread_getspecific(pVar8);
                    if (pvVar5 != (void *)0x0) {
                      plVar9 = (longlong *)*unaff_RSI;
                      lVar12 = FUN_00e8b990();
                      if (lVar12 != 0) {
                        plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                      }
                    }
                    local_34 = 8;
                    cVar2 = (**(code **)(*plVar9 + 1000))();
                    if (cVar2 == '\0') {
                      plVar9 = (longlong *)*unaff_RSI;
                      pvVar5 = _pthread_getspecific(pVar8);
                      if (pvVar5 != (void *)0x0) {
                        plVar9 = (longlong *)*unaff_RSI;
                        lVar12 = FUN_00e8b990();
                        if (lVar12 != 0) {
                          plVar9 = (longlong *)
                                   plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                        }
                      }
                      local_34 = 9;
                      cVar2 = (**(code **)(*plVar9 + 1000))();
                      if (cVar2 == '\0') {
                        plVar9 = (longlong *)*unaff_RSI;
                        pvVar5 = _pthread_getspecific(pVar8);
                        if (pvVar5 != (void *)0x0) {
                          plVar9 = (longlong *)*unaff_RSI;
                          lVar12 = FUN_00e8b990();
                          if (lVar12 != 0) {
                            plVar9 = (longlong *)
                                     plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                          }
                        }
                        local_34 = 10;
                        cVar2 = (**(code **)(*plVar9 + 1000))();
                        if (cVar2 == '\0') {
                          plVar9 = (longlong *)*unaff_RSI;
                          pvVar5 = _pthread_getspecific((pthread_key_t)unaff_RSI);
                          if (pvVar5 != (void *)0x0) {
                            plVar9 = (longlong *)*unaff_RSI;
                            lVar12 = FUN_00e8b990();
                            if (lVar12 != 0) {
                              plVar9 = (longlong *)
                                       plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                            }
                          }
                          local_34 = 0xb;
                          cVar2 = (**(code **)(*plVar9 + 1000))();
                          if (cVar2 == '\0') {
                            *(undefined1 *)(unaff_RDI + 1) = 0;
                            *unaff_RDI = 0;
                            FUN_00d50b20();
                            return unaff_RDI;
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
    puVar10 = (undefined8 *)(ulonglong)uVar1;
    *(uint *)((longlong)puVar7 + 0xc) = (byte)(bVar3 - (char)uVar1) - 6;
  }
  else {
    FUN_00d50b00();
LAB_01717a3a:
    pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01743720();
    *(int *)((longlong)puVar7 + 0xc) = iVar4;
    iVar4 = iVar4 * 7;
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    puVar10 = (undefined8 *)(ulonglong)((iVar4 >> 0x1f & 0xcU) + iVar4);
    if ((char)lVar12 != '\0') {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(puVar7 + 2) = 0;
  bVar3 = 0;
  lVar12 = 0;
  do {
    plVar9 = (longlong *)*unaff_RSI;
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
    if (pvVar5 != (void *)0x0) {
      plVar9 = (longlong *)*unaff_RSI;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar9 + 0x378))();
    plVar9 = (longlong *)*unaff_RSI;
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
    if (pvVar5 != (void *)0x0) {
      plVar9 = (longlong *)*unaff_RSI;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    cVar2 = (**(code **)(*plVar9 + 0x3b8))();
    if (cVar2 != '\0') {
      puVar7[3] = puVar7[3] & ~(0xfL << (bVar3 & 0x3f));
      puVar10 = puVar7;
    }
    pVar8 = (pthread_key_t)puVar10;
    lVar12 = lVar12 + 1;
    bVar3 = bVar3 + 4;
  } while (lVar12 != 0xc);
  FUN_01715d80();
  lVar12 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    lVar12 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  puVar10 = *(undefined8 **)(lVar12 + 0x50);
  if (puVar10 != puVar7) {
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    *(undefined8 **)(lVar12 + 0x50) = puVar7;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = (longlong)puVar7;
LAB_01718097:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


