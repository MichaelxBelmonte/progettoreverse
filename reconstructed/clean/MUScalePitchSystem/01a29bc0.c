// Function: FUN_01a29bc0
// Address: 01a29bc0
// Size: 4474 bytes
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


void FUN_01a29bc0(uint param_1,int64_t *param_2,uint param_3,uint32_t param_4)

{
  int64_t *****ppppplVar1;
  int64_t ****pppplVar2;
  int64_t ****pppplVar3;
  int64_t ****pppplVar4;
  int64_t ****pppplVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t *****ppppplVar11;
  byte bVar12;
  int64_t *****ppppplVar13;
  int64_t ****pppplVar14;
  int64_t ****pppplVar15;
  uint uVar16;
  uint64_t uVar17;
  bool bVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  float fVar21;
  float fVar22;
  int64_t ****local_b8;
  char local_b0;
  int local_a8;
  uint32_t local_a4;
  float local_a0;
  uint local_9c;
  uint64_t local_98;
  int64_t ****local_40;
  char local_38;
  
  uVar16 = param_3;
  local_a4 = param_4;
  uVar19 = FUN_01a295a0();
  pppplVar2 = local_40;
  ppppplVar11 = (int64_t *****)*param_2;
  if (ppppplVar11 == (int64_t *****)local_40) {
    if (((char)param_2[1] != '\0') || ((int64_t *****)local_40 == (int64_t *****)0x0)) {
      if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      goto LAB_01a29c94;
    }
    if (local_38 == '\0') {
      uVar19 = FUN_00d50b00();
    }
  }
  else {
    lVar9 = param_2[1];
    if (local_38 == '\0') {
      if ((int64_t *****)local_40 != (int64_t *****)0x0) {
        uVar19 = FUN_00d50b00();
      }
      *param_2 = (int64_t)pppplVar2;
      if (((char)lVar9 != '\0') && (ppppplVar11 != (int64_t *****)0x0)) {
        uVar19 = FUN_00d50b20();
      }
    }
    else {
      *param_2 = (int64_t)local_40;
      if (((char)lVar9 != '\0') && (ppppplVar11 != (int64_t *****)0x0)) {
        uVar19 = FUN_00d50b20();
      }
    }
  }
  *(void*)(param_2 + 1) = 1;
LAB_01a29c94:
  FUN_01a296f0(uVar19,0);
  if (param_1 != 0) {
    local_98 = (uint64_t)*(uint *)(*param_2 + 0xc);
    local_9c = -param_1;
    if (0 < (int)param_1) {
      local_9c = param_1;
    }
    ppppplVar11 = (int64_t *****)(uint64_t)local_9c;
    FUN_00c8e690();
    pppplVar2 = local_40;
    if ((((local_38 == '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) &&
        (FUN_00d50b00(), local_38 != '\0')) && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (3 < (int)*(uint *)(pppplVar2 + 3)) {
      _memset_pattern16(ppppplVar11,
                        (void *)((uint64_t)((*(uint *)(pppplVar2 + 3) >> 2) - 1) * 4 + 4),uVar16);
    }
    FUN_00c8e690();
    pppplVar3 = local_40;
    if (((local_38 == '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && ((int64_t *****)local_40 != (int64_t *****)0x0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (3 < (int)*(uint *)(pppplVar3 + 3)) {
      _memset_pattern16(ppppplVar11,
                        (void *)((uint64_t)((*(uint *)(pppplVar3 + 3) >> 2) - 1) * 4 + 4),uVar16);
    }
    if (0 < (int)local_98) {
      local_a8 = (uint)(0 < (int)param_1) * 2 + -1;
      local_a0 = (float)(int)param_1 * g_023908e0;
      uVar17 = 0;
      do {
        ppppplVar1 = *(int64_t ******)(*(int64_t *)(*param_2 + 0x10) + uVar17 * 8);
        if (ppppplVar1 != (int64_t *****)0x0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((void*)ppppplVar11);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          ppppplVar11 = ppppplVar1;
        }
        cVar6 = FUN_0125a2d0();
        bVar12 = 0;
        if (cVar6 != '\0') {
          pvVar8 = _pthread_getspecific((void*)ppppplVar11);
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            ppppplVar11 = ppppplVar1;
          }
          cVar6 = FUN_01263cf0();
          pVar10 = (void*)ppppplVar11;
          if (cVar6 == '\0') {
            pvVar8 = _pthread_getspecific(pVar10);
            if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pVar10 = (void*)ppppplVar1;
            }
            FUN_0125e930();
            pppplVar4 = local_40;
            if ((((local_38 == '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) &&
               ((int64_t *****)local_40 != (int64_t *****)0x0)) {
              FUN_00d50b20();
            }
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar19 = FUN_0152ebe0();
            pppplVar5 = local_40;
            if (((local_38 == '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) &&
               ((uVar19 = FUN_00d50b00(), local_38 != '\0' &&
                ((int64_t *****)local_40 != (int64_t *****)0x0)))) {
              uVar19 = FUN_00d50b20();
            }
            local_b0 = '\0';
            local_b8 = (int64_t ****)ppppplVar1;
            FUN_019d4fe0(uVar19,&local_b8);
            pppplVar15 = local_40;
            if ((g_027c0160 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
            ppppplVar11 = (int64_t *****)&g_02802688;
            if ((int64_t *****)pppplVar15 != (int64_t *****)0x0) {
              (*(*pppplVar15)[0x6c])();
              cVar6 = FUN_00e85ea0();
              ppppplVar11 = &local_40;
              if (cVar6 == '\0') {
                ppppplVar11 = (int64_t *****)&g_02802688;
              }
            }
            pppplVar15 = *ppppplVar11;
            if (*(char *)(ppppplVar11 + 1) == '\0') {
              if (pppplVar15 != (int64_t ****)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(ppppplVar11 + 1) = 0;
            }
            if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && ((int64_t *****)local_b8 != (int64_t *****)0x0)) {
              FUN_00d50b20();
            }
            if (pppplVar15 == (int64_t ****)0x0) {
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                ppppplVar11 = (int64_t *****)pppplVar5;
              }
              FUN_01507e40();
              pppplVar15 = local_40;
              if ((((local_38 == '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) &&
                  (FUN_00d50b00(), local_38 != '\0')) &&
                 ((int64_t *****)local_40 != (int64_t *****)0x0)) {
                FUN_00d50b20();
              }
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                ppppplVar11 = ppppplVar1;
              }
              fVar21 = (float)FUN_0125a2c0();
              fVar21 = fVar21 + local_a0;
              *(float *)((int64_t)pppplVar2[2] + uVar17 * 4) = fVar21;
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              ppppplVar13 = (int64_t *****)pppplVar15;
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                ppppplVar13 = (int64_t *****)
                              pppplVar15[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
              }
              fVar22 = (float)(*(*ppppplVar13)[0x72])();
              bVar12 = 1;
              if (fVar22 <= fVar21) {
                fVar21 = *(float *)((int64_t)pppplVar2[2] + uVar17 * 4);
                pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                ppppplVar13 = (int64_t *****)pppplVar15;
                if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  ppppplVar13 = (int64_t *****)
                                pppplVar15[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                }
                fVar22 = (float)(*(*ppppplVar13)[0x73])();
                bVar12 = (fVar21 <= fVar22) * '\x03' + 1;
              }
              if ((int64_t *****)pppplVar15 != (int64_t *****)0x0) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0173b790();
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                ppppplVar11 = ppppplVar1;
              }
              uVar19 = FUN_0125a2c0();
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                ppppplVar11 = (int64_t *****)pppplVar5;
              }
              FUN_01507f00();
              uVar19 = FUN_01775300(uVar19);
              if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
                FUN_00d50b20();
              }
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                ppppplVar11 = (int64_t *****)pppplVar5;
              }
              FUN_01507f00();
              if ((char)local_a4 == '\0') {
                if ((param_3 & 0xfffffffe) == 2) {
                  uVar16 = 0;
                  bVar18 = true;
                  do {
                    do {
                      pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01740240();
                      pppplVar14 = local_40;
                      if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((int64_t *****)pppplVar14 == (int64_t *****)0x0) {
                        bVar12 = 1;
                        if (bVar18) goto LAB_01a2a833;
                        goto LAB_01a2a60f;
                      }
                      pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                      pppplVar14 = pppplVar15;
                      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                        pppplVar14 = (int64_t ****)
                                     pppplVar15[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                      }
                      cVar6 = (*(*pppplVar14)[0x87])();
                    } while (cVar6 == '\0');
                    uVar16 = uVar16 + 1;
                    bVar18 = uVar16 < local_9c;
                  } while (uVar16 != local_9c);
                }
              }
              else {
                pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                pppplVar14 = pppplVar15;
                if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  pppplVar14 = (int64_t ****)
                               pppplVar15[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                }
                (*(*pppplVar14)[0x6e])();
                pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar20 = FUN_0173fbe0();
                if ((param_3 & 0xfffffffe) == 2) {
                  pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                  pppplVar14 = pppplVar15;
                  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    pppplVar14 = (int64_t ****)
                                 pppplVar15[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                  }
                  (*(*pppplVar14)[0x76])(uVar20);
                }
                else {
                  pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                  pppplVar14 = pppplVar15;
                  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    pppplVar14 = (int64_t ****)
                                 pppplVar15[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                  }
                  (*(*pppplVar14)[0x75])(uVar20);
                }
              }
LAB_01a2a60f:
              pvVar8 = _pthread_getspecific((void*)ppppplVar11);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01740240();
              pppplVar14 = local_40;
              if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
                FUN_00d50b20();
              }
              bVar12 = 1;
              if ((int64_t *****)pppplVar14 != (int64_t *****)0x0) {
                pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0173b790();
                pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar21 = (float)FUN_01775370(uVar19);
                if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
                  FUN_00d50b20();
                }
                pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  ppppplVar11 = ppppplVar1;
                }
                fVar22 = (float)FUN_0125a2c0();
                if ((float)((uint)(fVar21 - fVar22) & g_02390140) <= g_02394254) {
                  *(void*)((int64_t)pppplVar2[2] + uVar17 * 4) = 0x7f7fffff;
LAB_01a2a7b3:
                  *(void*)((int64_t)pppplVar3[2] + uVar17 * 4) = 0;
                  bVar12 = 0;
                }
                else {
                  *(float *)((int64_t)pppplVar2[2] + uVar17 * 4) = fVar21;
                  pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                  pppplVar14 = pppplVar15;
                  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    pppplVar14 = (int64_t ****)
                                 pppplVar15[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                  }
                  fVar22 = (float)(*(*pppplVar14)[0x72])();
                  if (fVar22 <= fVar21) {
                    fVar21 = *(float *)((int64_t)pppplVar2[2] + uVar17 * 4);
                    pvVar8 = _pthread_getspecific((void*)ppppplVar11);
                    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                      pppplVar15 = (int64_t ****)
                                   pppplVar15[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                    }
                    fVar22 = (float)(*(*pppplVar15)[0x73])();
                    if (fVar21 <= fVar22) goto LAB_01a2a7b3;
                  }
                }
              }
LAB_01a2a833:
              FUN_00d50b20();
            }
            if ((int64_t *****)pppplVar5 != (int64_t *****)0x0) {
              FUN_00d50b20();
            }
            if ((int64_t *****)pppplVar4 != (int64_t *****)0x0) {
              FUN_00d50b20();
            }
          }
        }
        if (ppppplVar1 != (int64_t *****)0x0) {
          FUN_00d50b20();
        }
        if ((bVar12 & 0xfb) != 0) goto LAB_01a2ad56;
        uVar17 = uVar17 + 1;
      } while (uVar17 != local_98);
    }
    if (0 < (int)local_98) {
      uVar17 = 0;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + uVar17 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((void*)ppppplVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pppplVar4 = local_40;
        if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
          FUN_00d50b20();
        }
        fVar21 = *(float *)((int64_t)pppplVar2[2] + uVar17 * 4);
        if ((int64_t *****)pppplVar4 == (int64_t *****)0x0) {
          if ((fVar21 != g_02391078) || (NAN(fVar21) || NAN(g_02391078))) {
            FUN_01a26360();
          }
        }
        else {
          if ((fVar21 != g_02391078) || (NAN(fVar21) || NAN(g_02391078))) {
            FUN_01a26360();
          }
          fVar21 = *(float *)((int64_t)pppplVar3[2] + uVar17 * 4);
          if ((fVar21 != g_02391078) || (NAN(fVar21) || NAN(g_02391078))) {
            pvVar8 = _pthread_getspecific((void*)ppppplVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar8 = _pthread_getspecific((void*)ppppplVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152df60();
            if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        fVar21 = *(float *)((int64_t)pppplVar2[2] + uVar17 * 4);
        if ((fVar21 != g_02391078) || (NAN(fVar21) || NAN(g_02391078))) {
          pvVar8 = _pthread_getspecific((void*)ppppplVar11);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pppplVar4 = local_40;
          if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
            FUN_00d50b20();
          }
          if ((int64_t *****)pppplVar4 != (int64_t *****)0x0) {
            pvVar8 = _pthread_getspecific((void*)ppppplVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar8 = _pthread_getspecific((void*)ppppplVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ec70();
            if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
              FUN_00d50b20();
            }
            pvVar8 = _pthread_getspecific((void*)ppppplVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar8 = _pthread_getspecific((void*)ppppplVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152dc80();
            if ((local_38 != '\0') && ((int64_t *****)local_40 != (int64_t *****)0x0)) {
              FUN_00d50b20();
            }
          }
          if (param_3 == 0) {
            pvVar8 = _pthread_getspecific((void*)ppppplVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e970();
          }
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        uVar17 = uVar17 + 1;
      } while (local_98 != uVar17);
    }
LAB_01a2ad56:
    if ((int64_t *****)pppplVar3 != (int64_t *****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t *****)pppplVar2 != (int64_t *****)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

