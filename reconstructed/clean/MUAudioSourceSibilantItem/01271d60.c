// Function: FUN_01271d60
// Address: 01271d60
// Size: 3478 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01271d60(int64_t *param_1,char param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  void*puVar9;
  int64_t lVar10;
  void *pvVar11;
  int64_t lVar12;
  void*puVar13;
  int64_t lVar14;
  void*puVar15;
  char *pcVar16;
  char *pcVar17;
  int64_t lVar18;
  char *pcVar19;
  void* pVar20;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar21;
  int local_70;
  void*local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  pcVar6 = g_02572370;
  (*g_02572370)();
  FUN_00d21370();
  lVar18 = *arg1;
  if (lVar18 != 0) {
    local_70 = -1;
    while( true ) {
      lVar10 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar18 + 0xc) <= local_70) break;
      lVar14 = *(int64_t *)(lVar18 + 0x10);
      lVar10 = *(int64_t *)(lVar14 + 8 + lVar10 * 8);
      pvVar11 = _pthread_getspecific((void*)lVar14);
      pVar20 = (void*)lVar14;
      lVar14 = lVar10;
      if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        lVar14 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
      if (*(int64_t *)(lVar14 + 0xd8) == 0) {
LAB_01271fb6:
        local_40[0] = '\0';
        FUN_00d21140();
        local_48 = lVar10;
        if ((local_40[0] != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar11 = _pthread_getspecific(pVar20);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef490();
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01271f30;
          }
          goto LAB_01271fb6;
        }
        if (local_48 == 0) goto LAB_01271fb6;
LAB_01271f30:
        pvVar11 = _pthread_getspecific(pVar20);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar8 = FUN_01326de0();
        if (iVar8 != 3) {
          FUN_00d50b20();
          goto LAB_01271fb6;
        }
        if (*param_1 == 0) {
          FUN_00d50b20();
        }
        else {
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          local_48 = lVar10;
        }
      }
    }
    FUN_001159b0();
  }
  FUN_00d242c0();
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02572358;
  (*pcVar6)();
  if (puVar9 == (void*)0x0) {
    bVar5 = false;
    local_60 = (void*)0x0;
  }
  else {
    local_70 = -1;
    bVar5 = false;
    local_60 = (void*)0x0;
    lVar18 = 0;
    while( true ) {
      lVar10 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)((int64_t)puVar9 + 0xc) <= local_70) break;
      lVar14 = puVar9[2];
      local_48 = *(int64_t *)(lVar14 + 8 + lVar10 * 8);
      if (lVar18 == 0) {
LAB_01272192:
        puVar15 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar15 = &g_02572358;
        (*pcVar6)();
        if ((bVar5) && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (puVar15 != (void*)0x0)) {
          FUN_00d50b20();
        }
        bVar5 = true;
        local_60 = puVar15;
      }
      else {
        pvVar11 = _pthread_getspecific((void*)lVar14);
        pVar20 = (void*)lVar14;
        lVar10 = lVar18;
        if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          lVar10 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
        dVar1 = *(double *)(lVar10 + 0xe8);
        dVar2 = *(double *)(lVar10 + 0xf0);
        pvVar11 = _pthread_getspecific(pVar20);
        lVar10 = local_48;
        if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          lVar10 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
        if (g_0240d190 <
            (double)((uint64_t)((dVar1 + dVar2) - *(double *)(lVar10 + 0xe8)) & g_023908f0))
        goto LAB_01272192;
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != lVar18) {
        lVar18 = local_48;
      }
    }
    FUN_001159b0();
  }
  if ((param_2 != '\0') && (puVar13 != (void*)0x0)) {
    if (0 < *(int *)((int64_t)puVar13 + 0xc)) {
      iVar8 = 0;
      do {
        lVar18 = local_48;
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar19 = local_38;
        pcVar16 = local_40;
        if (local_40[0] == '\0') {
          pcVar16 = pcVar19;
        }
        *pcVar16 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar11 = _pthread_getspecific((void*)pcVar19);
        if ((pvVar11 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          pcVar16 = *(char **)(local_48 + 0x100);
        }
        else {
          pcVar16 = *(char **)(*(int64_t *)
                                (local_48 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) +
                              0x100);
        }
        if (pcVar16 != (char *)0x0) {
          FUN_00d50b00();
          pvVar11 = _pthread_getspecific((void*)pcVar19);
          if ((pvVar11 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pcVar19 = pcVar16;
          }
          pVar20 = (void*)pcVar19;
          pvVar11 = _pthread_getspecific(pVar20);
          lVar10 = local_48;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar10 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8)
            ;
          }
          FUN_012ea9e0(*(double *)(lVar10 + 0xe8) + g_0240cff0,g_0240cfd0);
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012724b0;
            }
          }
          else if (local_48 != 0) {
LAB_012724b0:
            lVar10 = local_48;
            if (*(int *)(local_48 + 0xc) == 1) {
              uVar21 = FUN_00d23310();
              local_38[0] = local_40[0];
              pcVar19 = local_40;
              if (local_40[0] == '\0') {
                pcVar19 = local_38;
              }
              *pcVar19 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                uVar21 = FUN_00d50b20();
              }
              if (local_48 == 0) {
                lVar10 = 0;
                bVar4 = false;
              }
              else if (local_38[0] == '\0') {
                bVar4 = true;
                uVar21 = FUN_00d50b00();
              }
              else {
                bVar4 = true;
              }
LAB_01272664:
              if (lVar10 == 0) goto LAB_0127269d;
              local_40[0] = '\0';
              FUN_00d23370(uVar21,0);
              if ((local_40[0] != '\0') && (lVar10 != 0)) {
                FUN_00d50b20();
              }
              bVar3 = false;
              local_48 = lVar10;
            }
            else {
              if (1 < *(int *)(local_48 + 0xc)) {
                pvVar11 = _pthread_getspecific(pVar20);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01268710();
                if (local_40[0] == '\0') {
                  if (local_48 == 0) goto LAB_012725e0;
                  FUN_00d50b00();
LAB_01272599:
                  local_40[0] = '\0';
                  cVar7 = FUN_00d23d70();
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar7 == '\0') {
                    bVar3 = false;
                    goto LAB_012725f1;
                  }
                  FUN_00d50b00();
                  bVar4 = true;
                }
                else {
                  if (local_48 != 0) goto LAB_01272599;
LAB_012725e0:
                  bVar3 = true;
LAB_012725f1:
                  uVar21 = FUN_00d23310();
                  local_38[0] = local_40[0];
                  pcVar19 = local_40;
                  if (local_40[0] == '\0') {
                    pcVar19 = local_38;
                  }
                  *pcVar19 = '\0';
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    uVar21 = FUN_00d50b20();
                  }
                  if (local_48 == 0) {
                    bVar4 = false;
                    lVar10 = 0;
                  }
                  else {
                    bVar4 = true;
                    if (local_38[0] == '\0') {
                      uVar21 = FUN_00d50b00();
                    }
                  }
                  if (bVar3) goto LAB_01272664;
                }
                uVar21 = FUN_00d50b20();
                goto LAB_01272664;
              }
              bVar4 = false;
LAB_0127269d:
              bVar3 = true;
            }
            FUN_00d50b20();
            if (bVar4 && !bVar3) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d23340();
        local_38[0] = local_40[0];
        pcVar19 = local_38;
        pcVar17 = local_40;
        if (local_40[0] == '\0') {
          pcVar17 = pcVar19;
        }
        *pcVar17 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar20 = (void*)pcVar19;
        if (lVar18 == local_48) {
          lVar10 = lVar18;
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar10 = local_48;
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if (lVar18 != 0) {
              FUN_00d50b20();
            }
          }
          else if (lVar18 != 0) {
            FUN_00d50b20();
          }
        }
        pvVar11 = _pthread_getspecific(pVar20);
        if ((pvVar11 == (void *)0x0) || (lVar18 = FUN_00e8b990(), lVar18 == 0)) {
          pcVar19 = *(char **)(lVar10 + 0x100);
        }
        else {
          pcVar19 = *(char **)(*(int64_t *)
                                (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar18 + 0x154) & 1) * 8) +
                              0x100);
        }
        pcVar17 = pcVar16;
        if (pcVar16 != pcVar19) {
          if (pcVar19 != (char *)0x0) {
            FUN_00d50b00();
          }
          pcVar17 = pcVar19;
          if (pcVar16 != (char *)0x0) {
            FUN_00d50b20();
          }
        }
        if (pcVar17 != (char *)0x0) {
          pvVar11 = _pthread_getspecific(pVar20);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar11 = _pthread_getspecific(pVar20);
          lVar18 = lVar10;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar18 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
          FUN_012ea6f0(*(double *)(lVar18 + 0xe8) + *(double *)(lVar18 + 0xf0) + g_0240cff0,
                       g_0240cfd0);
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012728f0;
            }
          }
          else if (local_48 != 0) {
LAB_012728f0:
            lVar18 = local_48;
            if (*(int *)(local_48 + 0xc) == 1) {
              FUN_00d23310();
              local_38[0] = local_40[0];
              pcVar19 = local_40;
              if (local_40[0] == '\0') {
                pcVar19 = local_38;
              }
              *pcVar19 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 == 0) {
                bVar4 = false;
                lVar18 = 0;
              }
              else {
                bVar4 = true;
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                }
              }
LAB_01272abb:
              if (lVar18 == 0) {
                bVar3 = true;
              }
              else {
                local_40[0] = '\0';
                FUN_00d21140();
                if ((local_40[0] != '\0') && (lVar18 != 0)) {
                  FUN_00d50b20();
                }
                bVar3 = false;
                local_48 = lVar18;
              }
            }
            else {
              if (1 < *(int *)(local_48 + 0xc)) {
                pvVar11 = _pthread_getspecific(pVar20);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274c40(g_02391038);
                if (local_40[0] == '\0') {
                  if (local_48 == 0) goto LAB_01272a2d;
                  FUN_00d50b00();
LAB_012729e6:
                  local_40[0] = '\0';
                  cVar7 = FUN_00d23d70();
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar7 == '\0') {
                    bVar3 = false;
                    goto LAB_01272a41;
                  }
                  FUN_00d50b00();
                  bVar4 = true;
                }
                else {
                  if (local_48 != 0) goto LAB_012729e6;
LAB_01272a2d:
                  bVar3 = true;
LAB_01272a41:
                  FUN_00d23310();
                  local_38[0] = local_40[0];
                  pcVar19 = local_40;
                  if (local_40[0] == '\0') {
                    pcVar19 = local_38;
                  }
                  *pcVar19 = '\0';
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_48 == 0) {
                    bVar4 = false;
                    lVar18 = 0;
                  }
                  else {
                    bVar4 = true;
                    if (local_38[0] == '\0') {
                      FUN_00d50b00();
                    }
                  }
                  if (bVar3) goto LAB_01272abb;
                }
                FUN_00d50b20();
                goto LAB_01272abb;
              }
              bVar3 = true;
              bVar4 = false;
            }
            FUN_00d50b20();
            if (bVar4 && !bVar3) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int64_t)puVar13 + 0xc));
    }
    FUN_01a02020();
  }
  *this_ptr = puVar13;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar5) && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

