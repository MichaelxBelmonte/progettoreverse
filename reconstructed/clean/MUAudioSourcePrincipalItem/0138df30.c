// Function: FUN_0138df30
// Address: 0138df30
// Size: 3537 bytes
// Class: MUAudioSourcePrincipalItem

uint64_t FUN_0138df30(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  void*puVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar15;
  int64_t *plVar16;
  uint64_t uVar17;
  bool bVar18;
  uint32_t uVar19;
  uint64_t extraout_XMM0_Qa;
  double dVar20;
  double dVar21;
  double dVar22;
  int64_t *local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  void*local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int local_78;
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  
  if ((((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) &&
      (*(int64_t *)(this_ptr + 0x1f8) == 0)) &&
     ((*(int64_t *)(this_ptr + 0x200) == 0 && (*(int64_t *)(this_ptr + 0x148) != 0)))) {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_0141bab0();
    if (iVar6 == 1) {
      lVar14 = *arg1;
      uVar17 = 0;
      if (lVar14 == 0) goto LAB_0138df6c;
      local_78 = -1;
      bVar2 = false;
      local_40 = (int64_t *)0x0;
      bVar18 = false;
      while (local_78 = local_78 + 1, local_78 < *(int *)(lVar14 + 0xc)) {
        pVar11 = (void*)*(void*)(lVar14 + 0x10);
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        if (local_58 == local_40) {
          if ((!bVar2) && (local_58 != (int64_t *)0x0)) {
            plVar16 = local_40;
            bVar3 = true;
            if (local_50 != '\0') goto LAB_0138e165;
            bVar2 = true;
            FUN_00d50b00();
          }
LAB_0138e151:
          plVar16 = local_40;
          bVar3 = bVar2;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar16 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar2) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_40 = local_58;
              bVar2 = true;
              goto LAB_0138e151;
            }
          }
          else {
            bVar3 = true;
            if ((bVar2) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
LAB_0138e165:
        bVar2 = bVar3;
        pvVar7 = _pthread_getspecific(pVar11);
        plVar15 = plVar16;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar15 = (int64_t *)plVar16[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        uVar19 = (**(code **)(*plVar15 + 0x3e0))();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_014ea7b0(uVar19,g_02390124);
        if (cVar5 != '\0') {
          bVar18 = true;
        }
        local_110 = 0;
        local_118 = plVar16;
        FUN_013699d0(extraout_XMM0_Qa,&local_118);
        if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (0 < *(int *)((int64_t)local_58 + 0xc)) {
          lVar8 = 0;
          do {
            lVar10 = *(int64_t *)(local_58[2] + lVar8 * 8);
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            local_100 = 1;
            local_108 = lVar10;
            FUN_013295b0();
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)((int64_t)local_58 + 0xc));
        }
        FUN_00d50b20();
        local_40 = plVar16;
      }
      FUN_001150f0();
      if (bVar18) {
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        pVar11 = 0x2572358;
        *puVar9 = &g_02572358;
        (*g_02572370)();
        lVar14 = *arg1;
        if (lVar14 == 0) {
          plVar15 = (int64_t *)0x0;
          bVar3 = false;
          bVar18 = false;
          plVar16 = (int64_t *)0x0;
        }
        else {
          local_78 = -1;
          plVar15 = (int64_t *)0x0;
          bVar3 = false;
          bVar18 = false;
          plVar16 = (int64_t *)0x0;
          while( true ) {
            lVar8 = (int64_t)local_78;
            local_78 = local_78 + 1;
            if (*(int *)(lVar14 + 0xc) <= local_78) break;
            lVar10 = *(int64_t *)(lVar14 + 0x10);
            plVar1 = *(int64_t **)(lVar10 + 8 + lVar8 * 8);
            pvVar7 = _pthread_getspecific((void*)lVar10);
            pVar11 = (void*)lVar10;
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_58 == local_40) {
              if ((!bVar2) && (local_58 != (int64_t *)0x0)) {
                bVar2 = true;
                if (local_50 != '\0') goto LAB_0138e4db;
                bVar2 = true;
                FUN_00d50b00();
              }
LAB_0138e4c7:
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_50 == '\0') {
                if (local_58 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar2) && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  local_40 = local_58;
                  bVar2 = true;
                }
                else {
                  local_40 = local_58;
                  bVar2 = true;
                }
                goto LAB_0138e4c7;
              }
              if ((bVar2) && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
                local_40 = local_58;
                bVar2 = true;
              }
              else {
                local_40 = local_58;
                bVar2 = true;
              }
            }
LAB_0138e4db:
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_e0 = '\0';
            local_e8 = 0;
            plVar12 = &local_e8;
            FUN_014c0100(plVar12,1);
            pVar11 = (void*)plVar12;
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfef0();
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e0cc0();
            FUN_00d21140();
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (plVar1 == plVar16) {
              plVar12 = plVar16;
              bVar4 = bVar18;
              if ((!bVar18) && (plVar1 != (int64_t *)0x0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            else {
              if (plVar1 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              plVar12 = plVar1;
              if ((bVar18) && (plVar16 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar18 = bVar4;
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if (0 < *(int *)((int64_t)plVar12 + 0xc)) {
              lVar8 = 0;
              plVar16 = plVar15;
              do {
                plVar13 = plVar12;
                pvVar7 = _pthread_getspecific((void*)plVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if (plVar1 == plVar16) {
                  plVar15 = plVar16;
                  bVar4 = bVar3;
                  if ((!bVar3) && (plVar1 != (int64_t *)0x0)) {
                    FUN_00d50b00();
                    goto LAB_0138e868;
                  }
                }
                else {
                  if (plVar1 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  plVar15 = plVar1;
                  bVar4 = true;
                  if ((bVar3) && (plVar16 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                    plVar16 = plVar1;
LAB_0138e868:
                    plVar15 = plVar16;
                    bVar4 = true;
                  }
                }
                bVar3 = bVar4;
                pvVar7 = _pthread_getspecific((void*)plVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar7 = _pthread_getspecific((void*)plVar13);
                plVar16 = local_40;
                if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  plVar13 = local_40;
                  plVar16 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
                }
                pVar11 = (void*)plVar13;
                (**(code **)(*plVar16 + 0x3e0))();
                FUN_012595a0();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013def20();
                FUN_01264320();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar20 = (double)FUN_013defa0();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar21 = (double)FUN_01264170();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar22 = (double)FUN_013de9b0();
                FUN_01264390((dVar20 + dVar21) - dVar22);
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126f610();
                pvVar7 = _pthread_getspecific(pVar11);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a5f0();
                local_c0 = '\0';
                local_c8 = plVar15;
                FUN_0039e8b0();
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                FUN_012879b0();
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                lVar8 = lVar8 + 1;
                plVar16 = plVar15;
              } while (lVar8 < *(int *)((int64_t)plVar12 + 0xc));
            }
            local_50 = '\0';
            plVar16 = plVar12;
            local_58 = plVar1;
          }
          FUN_001150f0();
          pVar11 = (void*)lVar14;
        }
        if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
           (*(int64_t *)(this_ptr + 0x148) != 0)) {
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_0141bab0();
          if (iVar6 != 3) goto LAB_0138ec7b;
LAB_0138ec8b:
          local_f0 = 0;
          local_f8 = puVar9;
          FUN_013357a0();
        }
        else {
LAB_0138ec7b:
          cVar5 = FUN_01334f30();
          if (cVar5 != '\0') goto LAB_0138ec8b;
        }
        if ((bVar3) && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar18) && (plVar16 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar17 = CONCAT71((int7)((uint64_t)plVar15 >> 8),1);
        if (puVar9 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        uVar17 = 0;
      }
      if ((bVar2) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0138df6c;
    }
  }
  uVar17 = 0;
LAB_0138df6c:
  return uVar17 & 0xffffffff;
}

