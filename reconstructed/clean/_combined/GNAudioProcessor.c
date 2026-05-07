// ===================================================================
// GNAudioProcessor — Complete reconstructed pseudocode
// 29 functions
// ===================================================================


// ============================================================
// 0168b410
// ============================================================
// Function: FUN_0168b410
// Address: 0168b410
// Size: 7607 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"
//   "GNPlugInHostTrack"

void FUN_0168b410(code *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  char *pcVar11;
  int64_t **pplVar12;
  int64_t *plVar13;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar14;
  uint8_t local_1d0 [8];
  uint8_t local_1c8;
  uint8_t local_1c0 [8];
  uint8_t local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  int64_t *local_a8;
  char local_a0 [8];
  int64_t *local_98;
  uint64_t local_90;
  int local_88;
  int64_t *local_78;
  char local_70;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint local_48;
  int iStack_44;
  int local_40;
  int64_t *local_38;
  
  FUN_00d3ecc0();
  plVar13 = local_60;
  local_1b0 = g_027e3b30;
  if (g_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_1a8 = '\x01';
  cVar5 = (**(code **)(*plVar13 + 0x50))();
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537fd0();
    plVar13 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (int64_t *)0x0) goto LAB_0168cb76;
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (int64_t *)0x0) goto LAB_0168cb76;
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar13;
    local_40 = 0;
    local_48 = 0;
    iStack_44 = 0;
    if (0 < *(int *)((int64_t)plVar13 + 0xc)) {
      do {
        uVar4 = local_48;
        plVar2 = local_a8;
        local_60 = *(int64_t **)(plVar13[2] + (uint64_t)local_48 * 8);
        pvVar6 = _pthread_getspecific(local_48);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164fea0();
        if (local_a0[0] == '\0') {
          if (local_a8 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0168bd70;
          }
        }
        else if (local_a8 != (int64_t *)0x0) {
LAB_0168bd70:
          local_a0[0] = '\0';
          local_a8 = (int64_t *)0x0;
          local_98 = plVar2;
          local_90 = 0xffffffff;
          local_88 = 0;
          while( true ) {
            lVar7 = (int64_t)(int)local_90;
            iVar10 = (int)local_90 + 1;
            local_90 = CONCAT44(local_90._4_4_,iVar10);
            if (*(int *)((int64_t)local_98 + 0xc) <= iVar10) break;
            local_a8 = *(int64_t **)(local_98[2] + 8 + lVar7 * 8);
            pvVar6 = _pthread_getspecific((void*)local_98[2]);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016557b0();
            if (local_90._4_4_ != 0) {
              if (local_90 < 0) {
                iVar10 = -local_90._4_4_;
              }
              else {
                local_90 = CONCAT44(local_90._4_4_,(int)local_90 - local_90._4_4_);
                FUN_00d23690();
                local_88 = local_88 + local_90._4_4_;
                iVar10 = 0;
              }
              local_90 = CONCAT44(iVar10,(int)local_90);
            }
          }
          FUN_00277f20();
          FUN_00d50b20();
        }
        local_48 = uVar4 + 1;
      } while ((int)local_48 < *(int *)((int64_t)plVar13 + 0xc));
    }
    FUN_0049cc10();
    FUN_00d50b20();
    goto LAB_0168cb76;
  }
  FUN_00d3ecc0();
  plVar13 = local_60;
  local_1a0 = g_0277d8e0;
  if (g_0277d8e0 != 0) {
    FUN_00d50b00();
  }
  local_198 = '\x01';
  cVar5 = (**(code **)(*plVar13 + 0x50))();
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    if (*(char *)(this_ptr + 0x75) != '\0') {
      FUN_0167b310();
      *(void*)(this_ptr + 0x75) = 0;
    }
    if (*(char *)(this_ptr + 0x76) != '\0') {
      *(void*)(this_ptr + 0x76) = 0;
      if (*(int64_t **)(this_ptr + 0x78) == (int64_t *)0x0) {
        bVar3 = false;
        local_38 = (int64_t *)0x0;
        plVar13 = *(int64_t **)(this_ptr + 0x68);
      }
      else {
        local_58 = '\0';
        local_60 = (int64_t *)0x0;
        local_48 = 0xffffffff;
        iStack_44 = 0;
        local_40 = 0;
        bVar3 = false;
        local_38 = (int64_t *)0x0;
        local_50 = *(int64_t **)(this_ptr + 0x78);
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              local_40 = local_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar7 = (int64_t)(int)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((int64_t)local_50 + 0xc) <= (int)local_48) break;
          lVar9 = local_50[2];
          local_60 = *(int64_t **)(lVar9 + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific((void*)lVar9);
          pVar8 = (void*)lVar9;
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c9180();
          FUN_00b68bb0();
          if (local_a8 == (int64_t *)0x0) {
            cVar5 = '\0';
          }
          else {
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012c9180();
            FUN_00b68bb0();
            cVar5 = FUN_00d45ad0();
            if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 != '\0') {
            if (local_38 == (int64_t *)0x0) {
              pvVar6 = _pthread_getspecific(pVar8);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c8f20();
              local_e8 = 0;
              if (local_70 == '\0') {
                if (local_78 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_70 = '\0';
              }
              local_e8 = '\x01';
              local_f0 = local_78;
              FUN_000ba510();
              local_38 = local_a8;
              if (local_a8 == (int64_t *)0x0) {
                local_38 = (int64_t *)0x0;
              }
              else if (local_a0[0] == '\0') {
                FUN_00d50b00();
                bVar3 = true;
                if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_a0[0] = '\0';
                bVar3 = true;
              }
              if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar6 = _pthread_getspecific(pVar8);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c9180();
              FUN_00b68e30();
              if (local_a8 == (int64_t *)0x0) {
                cVar5 = '\0';
              }
              else {
                pvVar6 = _pthread_getspecific(pVar8);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012c9180();
                FUN_00b68e30();
                cVar5 = FUN_00d45ad0();
                if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 == '\0') {
                pvVar6 = _pthread_getspecific(pVar8);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012c8f20();
                if (local_70 == '\0') {
                  if (local_78 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                local_a8 = local_78;
                local_a0[0] = '\0';
                FUN_00d21140();
                if ((local_a0[0] != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_78 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar6 = _pthread_getspecific(pVar8);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar14 = FUN_012c8f20();
                if (local_70 == '\0') {
                  if (local_78 != (int64_t *)0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                local_a8 = local_78;
                local_a0[0] = '\0';
                FUN_00d23370(uVar14,0);
                if ((local_a0[0] != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_78 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
        FUN_01714b60();
        plVar13 = *(int64_t **)(this_ptr + 0x68);
      }
      if (plVar13 != (int64_t *)0x0) {
        local_58 = '\0';
        local_60 = (int64_t *)0x0;
        local_40 = 0;
        local_48 = 0;
        iStack_44 = 0;
        local_50 = plVar13;
        if (0 < *(int *)((int64_t)plVar13 + 0xc)) {
          lVar7 = 0;
          do {
            local_60 = *(int64_t **)(plVar13[2] + lVar7 * 8);
            local_190 = 0;
            local_188 = '\0';
            local_180 = local_38;
            local_178 = '\0';
            uVar14 = FUN_00e7b500((int)g_023908c8,0);
            FUN_016914e0(uVar14,&local_180);
            if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_188 != '\0') && (local_190 != 0)) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
            local_48 = (uint)lVar7;
          } while ((int)local_48 < *(int *)((int64_t)plVar13 + 0xc));
        }
        FUN_016be7c0();
      }
      if ((bVar3) && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_0168cb76;
  }
  FUN_00d3ecc0();
  plVar13 = local_60;
  local_170 = g_0270b7b0;
  if (g_0270b7b0 != 0) {
    FUN_00d50b00();
  }
  local_168 = '\x01';
  cVar5 = (**(code **)(*plVar13 + 0x50))();
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_00d3ecc0();
    plVar13 = local_60;
    local_150 = g_0270b7c0;
    if (g_0270b7c0 != 0) {
      FUN_00d50b00();
    }
    local_148 = '\x01';
    cVar5 = (**(code **)(*plVar13 + 0x50))();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_00d3ecc0();
      plVar13 = local_60;
      local_140 = g_0270b7d0;
      if (g_0270b7d0 != 0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      cVar5 = (**(code **)(*plVar13 + 0x50))();
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        FUN_00d3ecc0();
        plVar13 = local_60;
        local_130 = g_02763340;
        if (g_02763340 != 0) {
          FUN_00d50b00();
        }
        local_128 = '\x01';
        cVar5 = (**(code **)(*plVar13 + 0x50))();
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          FUN_00d3ecc0();
          plVar13 = local_60;
          local_120 = g_02763350;
          if (g_02763350 != 0) {
            FUN_00d50b00();
          }
          local_118 = '\x01';
          cVar5 = (**(code **)(*plVar13 + 0x50))();
          if ((local_118 != '\0') && (local_120 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') goto LAB_0168cb76;
          pplVar12 = &local_60;
          FUN_00d3ecf0();
          plVar13 = local_60;
          if ((g_02766820 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
            g_02766770 = FUN_00d4fe50();
            g_02766758 = "GNPlugInHostTrack";
            g_02766760 = 0x50;
            param_1 = FUN_00bdbf20;
            g_02766768 = FUN_00bdbf20;
            g_02766778 = 0;
            ram_0000000002766780 = 0;
            g_02766788 = 0;
            g_02766800 = 0;
            ram_0000000002766808 = 0;
            g_02766810 = 0;
            g_02766812 = 1;
            g_02766790 = 0;
            ram_0000000002766798 = 0;
            g_027667a0 = 0;
            ram_00000000027667a8 = 0;
            g_027667b0 = 0;
            ram_00000000027667b8 = 0;
            g_027667c0 = 0;
            ram_00000000027667c8 = 0;
            g_027667d0 = 0;
            ram_00000000027667d8 = 0;
            g_027667e0 = 0;
            ram_00000000027667e8 = 0;
            g_027667f0 = 0;
            ram_00000000027667f8 = 0;
            g_0276681b = 0;
            g_02766813 = 0;
            ___cxa_guard_release();
          }
          if (plVar13 == (int64_t *)0x0) {
LAB_0168c752:
            pplVar12 = (int64_t **)&g_02802688;
          }
          else {
            (**(code **)(*plVar13 + 0x360))();
            cVar5 = FUN_00e85ea0();
            if (cVar5 == '\0') goto LAB_0168c752;
          }
          plVar13 = *pplVar12;
          if (*(char *)(pplVar12 + 1) == '\0') {
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar12 + 1) = 0;
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar2 = *(int64_t **)(this_ptr + 0x78);
          if (plVar2 != (int64_t *)0x0) {
            local_58 = '\0';
            local_60 = (int64_t *)0x0;
            iStack_44 = 0;
            local_40 = 0;
            lVar7 = 0;
            local_50 = plVar2;
            do {
              local_48 = (uint)lVar7;
              if (*(int *)((int64_t)plVar2 + 0xc) <= (int)local_48) goto LAB_0168cd9d;
              local_60 = *(int64_t **)(plVar2[2] + lVar7 * 8);
              pvVar6 = _pthread_getspecific((void*)param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c9180();
              if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              lVar7 = lVar7 + 1;
            } while (local_a8 != plVar13);
            *(void*)(this_ptr + 0x76) = 1;
LAB_0168cd9d:
            FUN_01714b60();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_0168cb76;
        }
        pplVar12 = &local_60;
        FUN_00d3ecf0();
        plVar13 = local_60;
        if ((g_02766820 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
          g_02766770 = FUN_00d4fe50();
          g_02766758 = "GNPlugInHostTrack";
          g_02766760 = 0x50;
          param_1 = FUN_00bdbf20;
          g_02766768 = FUN_00bdbf20;
          g_02766778 = 0;
          ram_0000000002766780 = 0;
          g_02766788 = 0;
          g_02766800 = 0;
          ram_0000000002766808 = 0;
          g_02766810 = 0;
          g_02766812 = 1;
          g_02766790 = 0;
          ram_0000000002766798 = 0;
          g_027667a0 = 0;
          ram_00000000027667a8 = 0;
          g_027667b0 = 0;
          ram_00000000027667b8 = 0;
          g_027667c0 = 0;
          ram_00000000027667c8 = 0;
          g_027667d0 = 0;
          ram_00000000027667d8 = 0;
          g_027667e0 = 0;
          ram_00000000027667e8 = 0;
          g_027667f0 = 0;
          ram_00000000027667f8 = 0;
          g_0276681b = 0;
          g_02766813 = 0;
          ___cxa_guard_release();
        }
        if (plVar13 == (int64_t *)0x0) {
LAB_0168c3bf:
          pplVar12 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_0168c3bf;
        }
        plVar13 = *pplVar12;
        if (*(char *)(pplVar12 + 1) == '\0') {
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar12 + 1) = 0;
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar2 = *(int64_t **)(this_ptr + 0x78);
        if (plVar2 != (int64_t *)0x0) {
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          iStack_44 = 0;
          local_40 = 0;
          lVar7 = 0;
          local_50 = plVar2;
          local_38 = plVar13;
          do {
            local_48 = (uint)lVar7;
            if (*(int *)((int64_t)plVar2 + 0xc) <= (int)local_48) goto LAB_0168ce1e;
            local_60 = *(int64_t **)(plVar2[2] + lVar7 * 8);
            pvVar6 = _pthread_getspecific((void*)param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012c9180();
            if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar8 = (void*)param_1;
            lVar7 = lVar7 + 1;
          } while (local_a8 != local_38);
          if ((*(char *)(this_ptr + 0x72) == '\0') && (*(char *)(this_ptr + 0x75) == '\0')) {
            *(void*)(this_ptr + 0x75) = 1;
            FUN_0167b270();
          }
          pvVar6 = _pthread_getspecific(pVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00b686a0();
          local_c8 = 0;
          if (local_a0[0] == '\0') {
            if (local_a8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0[0] = '\0';
          }
          local_c8 = '\x01';
          local_d0 = local_a8;
          FUN_012c7f30();
          if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_0168ce1e:
          FUN_01714b60();
          plVar13 = local_38;
        }
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_0168cb76;
      }
      pplVar12 = &local_60;
      FUN_00d3ecf0();
      plVar13 = local_60;
      if ((g_02766820 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        g_02766770 = FUN_00d4fe50();
        g_02766758 = "GNPlugInHostTrack";
        g_02766760 = 0x50;
        param_1 = FUN_00bdbf20;
        g_02766768 = FUN_00bdbf20;
        g_02766778 = 0;
        ram_0000000002766780 = 0;
        g_02766788 = 0;
        g_02766800 = 0;
        ram_0000000002766808 = 0;
        g_02766810 = 0;
        g_02766812 = 1;
        g_02766790 = 0;
        ram_0000000002766798 = 0;
        g_027667a0 = 0;
        ram_00000000027667a8 = 0;
        g_027667b0 = 0;
        ram_00000000027667b8 = 0;
        g_027667c0 = 0;
        ram_00000000027667c8 = 0;
        g_027667d0 = 0;
        ram_00000000027667d8 = 0;
        g_027667e0 = 0;
        ram_00000000027667e8 = 0;
        g_027667f0 = 0;
        ram_00000000027667f8 = 0;
        g_0276681b = 0;
        g_02766813 = 0;
        ___cxa_guard_release();
      }
      if (plVar13 == (int64_t *)0x0) {
LAB_0168c060:
        pplVar12 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_0168c060;
      }
      plVar13 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar12 + 1) = 0;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = *(int64_t **)(this_ptr + 0x78);
      if (plVar2 != (int64_t *)0x0) {
        local_58 = '\0';
        local_60 = (int64_t *)0x0;
        iStack_44 = 0;
        local_40 = 0;
        lVar7 = 0;
        local_50 = plVar2;
        local_38 = plVar13;
        do {
          local_48 = (uint)lVar7;
          if (*(int *)((int64_t)plVar2 + 0xc) <= (int)local_48) goto LAB_0168cca1;
          local_60 = *(int64_t **)(plVar2[2] + lVar7 * 8);
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c9180();
          if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar8 = (void*)param_1;
          lVar7 = lVar7 + 1;
        } while (local_a8 != local_38);
        if ((*(char *)(this_ptr + 0x72) == '\0') && (*(char *)(this_ptr + 0x75) == '\0')) {
          *(void*)(this_ptr + 0x75) = 1;
          FUN_0167b270();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00b68420();
        if (local_a8 != (int64_t *)0x0) {
          FUN_00b68420();
          FUN_00d45870();
        }
        FUN_012c7e50();
        if (((local_a8 != (int64_t *)0x0) && (local_70 != '\0')) && (local_78 != (int64_t *)0x0))
        {
          FUN_00d50b20();
        }
        if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0168cca1:
        FUN_01714b60();
        plVar13 = local_38;
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0168cb76;
    }
    pplVar12 = &local_60;
    FUN_00d3ecf0();
    plVar13 = local_60;
    if ((g_02766820 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      g_02766770 = FUN_00d4fe50();
      g_02766758 = "GNPlugInHostTrack";
      g_02766760 = 0x50;
      param_1 = FUN_00bdbf20;
      g_02766768 = FUN_00bdbf20;
      g_02766778 = 0;
      ram_0000000002766780 = 0;
      g_02766788 = 0;
      g_02766800 = 0;
      ram_0000000002766808 = 0;
      g_02766810 = 0;
      g_02766812 = 1;
      g_02766790 = 0;
      ram_0000000002766798 = 0;
      g_027667a0 = 0;
      ram_00000000027667a8 = 0;
      g_027667b0 = 0;
      ram_00000000027667b8 = 0;
      g_027667c0 = 0;
      ram_00000000027667c8 = 0;
      g_027667d0 = 0;
      ram_00000000027667d8 = 0;
      g_027667e0 = 0;
      ram_00000000027667e8 = 0;
      g_027667f0 = 0;
      ram_00000000027667f8 = 0;
      g_0276681b = 0;
      g_02766813 = 0;
      ___cxa_guard_release();
    }
    if (plVar13 == (int64_t *)0x0) {
LAB_0168bf54:
      pplVar12 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_0168bf54;
    }
    plVar13 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(this_ptr + 0x78);
    if (plVar2 != (int64_t *)0x0) {
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      iStack_44 = 0;
      local_40 = 0;
      lVar7 = 0;
      local_50 = plVar2;
      local_38 = plVar13;
      do {
        local_48 = (uint)lVar7;
        if (*(int *)((int64_t)plVar2 + 0xc) <= (int)local_48) goto LAB_0168c96d;
        local_60 = *(int64_t **)(plVar2[2] + lVar7 * 8);
        pvVar6 = _pthread_getspecific((void*)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c9180();
        if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar8 = (void*)param_1;
        lVar7 = lVar7 + 1;
      } while (local_a8 != local_38);
      if ((*(char *)(this_ptr + 0x72) == '\0') && (*(char *)(this_ptr + 0x75) == '\0')) {
        *(void*)(this_ptr + 0x75) = 1;
        FUN_0167b270();
      }
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00b68190();
      local_d8 = 0;
      if (local_a0[0] == '\0') {
        if (local_a8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0[0] = '\0';
      }
      local_d8 = '\x01';
      local_e0 = local_a8;
      FUN_012c7b60();
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_0168c96d:
      FUN_01714b60();
      plVar13 = local_38;
    }
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_0168cb76;
  }
  pplVar12 = &local_60;
  FUN_00d3ecf0();
  plVar13 = local_60;
  if ((g_02723170 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
    g_0270ba18 = FUN_00d4fe50();
    g_0270ba00 = "GNAudioProcessor";
    g_0270ba08 = 0x90;
    param_1 = FUN_00370f50;
    g_0270ba10 = FUN_00370f50;
    g_0270ba20 = 0;
    ram_000000000270ba28 = 0;
    g_0270ba30 = 0;
    ram_000000000270ba38 = 0;
    g_0270ba40 = 0;
    ram_000000000270ba48 = 0;
    g_0270ba50 = 0;
    ram_000000000270ba58 = 0;
    g_0270ba60 = 0;
    ram_000000000270ba68 = 0;
    g_0270ba70 = 0;
    ram_000000000270ba78 = 0;
    g_0270ba80 = 0;
    ram_000000000270ba88 = 0;
    g_0270ba90 = 0;
    ram_000000000270ba98 = 0;
    g_0270baa0 = 0;
    ram_000000000270baa8 = 0;
    g_0270bab0 = 0;
    ram_000000000270bab8 = 0;
    g_0270bac0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (int64_t *)0x0) {
LAB_0168bc4e:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0168bc4e;
  }
  plVar13 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar12 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00b34cb0();
  plVar2 = local_60;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00b34cb0();
    (**(code **)(*local_a8 + 0x90))();
    plVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x50);
    if (plVar1 != (int64_t *)0x0) {
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      iStack_44 = 0;
      local_40 = 0;
      lVar7 = 0;
      local_50 = plVar1;
      local_38 = plVar13;
      do {
        local_48 = (uint)lVar7;
        if (*(int *)((int64_t)plVar1 + 0xc) <= (int)local_48) goto LAB_0168cb4a;
        local_60 = *(int64_t **)(plVar1[2] + lVar7 * 8);
        FUN_0168f670();
        if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while (local_a8 != local_38);
      FUN_0168e8e0();
      FUN_00d23310();
      pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_a0[0]);
      pcVar11 = &local_c0;
      if (local_a0[0] != '\0') {
        pcVar11 = local_a0;
      }
      local_c0 = local_a0[0];
      *pcVar11 = '\0';
      if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 == '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (int64_t *)0x0) {
        if ((*(char *)(this_ptr + 0x72) == '\0') && (*(char *)(this_ptr + 0x75) == '\0')) {
          *(void*)(this_ptr + 0x75) = 1;
          FUN_0167b270();
        }
        local_160 = plVar2;
        local_158 = '\0';
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016573a0();
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_1b8 = 1;
        uVar14 = FUN_0168a170(local_1c0,&local_160);
        if ((local_a0[0] == '\0') && (local_a8 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b00();
        }
        if (local_78 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        local_1c8 = 0;
        FUN_0168a900(uVar14,local_1d0);
        if (local_a8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
LAB_0168cb4a:
      FUN_016be7c0();
      plVar13 = local_38;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0168cb76:
  local_110 = *arg1;
  local_108 = '\0';
  FUN_00d530a0();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b38fc0
// ============================================================
// Function: FUN_00b38fc0
// Address: 00b38fc0
// Size: 2182 bytes
// Class: GNAudioProcessor

void FUN_00b38fc0(uint param_1,uint64_t *param_2)

{
  void*puVar1;
  void*puVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  float *pfVar11;
  int64_t lVar12;
  uint64_t *arg1;
  float *pfVar13;
  int64_t lVar14;
  int64_t this_ptr;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint8_t auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_XMM6_Da;
  float fVar33;
  float fVar34;
  float fVar35;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  
  iVar8 = FUN_00b33520();
  if ((iVar8 == 1) && (iVar8 = FUN_00b33590(), iVar8 == 1)) {
    uVar10 = *arg1;
    uVar19 = *param_2;
    if ((*(float *)(this_ptr + 0x90) != 0.0) || (NAN(*(float *)(this_ptr + 0x90)))) {
      uVar18 = *(uint64_t *)(this_ptr + 0xb0);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar18;
      uVar15 = *(uint64_t *)(this_ptr + 0xb8);
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar15;
      if ((int)param_1 < 1) {
        fVar23 = (float)(uVar18 >> 0x20);
        fVar26 = (float)(uVar15 >> 0x20);
        fVar24 = (float)uVar18;
        fVar38 = (float)uVar15;
      }
      else {
        fVar3 = *(float *)(this_ptr + 0x9c);
        uVar5 = *(void*)(this_ptr + 0xa0);
        uVar6 = *(void*)(this_ptr + 0xa8);
        iVar8 = param_1 + 1;
        lVar12 = 0;
        do {
          fVar23 = auVar29._0_4_;
          fVar26 = auVar37._0_4_;
          fVar24 = *(float *)(uVar10 + lVar12);
          auVar36._4_4_ = (float)((uint64_t)uVar5 >> 0x20) * auVar29._4_4_;
          auVar36._12_4_ = auVar29._12_4_ * 0.0;
          fVar38 = ((auVar36._4_4_ + fVar3 * fVar24 + (float)uVar5 * fVar23) - (float)uVar6 * fVar26
                   ) - (float)((uint64_t)uVar6 >> 0x20) * auVar37._4_4_;
          *(float *)(uVar19 + lVar12) = fVar38;
          auVar36._0_4_ = fVar38;
          auVar36._8_4_ = auVar36._12_4_;
          auVar37 = insertps(auVar36,auVar37,0x1c);
          auVar29 = insertps(ZEXT416((uint)fVar24),auVar29,0x1c);
          iVar8 = iVar8 + -1;
          lVar12 = lVar12 + 4;
        } while (1 < iVar8);
      }
      *(float *)(this_ptr + 0xb0) = fVar24;
      *(float *)(this_ptr + 0xb8) = fVar38;
      *(float *)(this_ptr + 0xb4) = fVar23;
      *(float *)(this_ptr + 0xbc) = fVar26;
      return;
    }
    if (uVar10 == uVar19) {
      return;
    }
    if ((int)param_1 < 1) {
      return;
    }
    if ((6 < param_1 - 1) &&
       ((uVar18 = (uint64_t)(param_1 - 1) + 1, uVar10 + uVar18 * 4 <= uVar19 ||
        (uVar19 + uVar18 * 4 <= uVar10)))) {
      uVar17 = uVar18 & 0xfffffffffffffff8;
      uVar15 = (uVar17 - 8 >> 3) + 1;
      uVar20 = (uint64_t)((uint)uVar15 & 3);
      if (uVar17 - 8 < 0x18) {
        lVar12 = 0;
      }
      else {
        lVar16 = -(uVar15 & 0xfffffffffffffffc);
        lVar12 = 0;
        do {
          puVar1 = (void*)(uVar10 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (void*)(uVar10 + 0x10 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (void*)(uVar19 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (void*)(uVar19 + 0x10 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (void*)(uVar10 + 0x20 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (void*)(uVar10 + 0x30 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (void*)(uVar19 + 0x20 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (void*)(uVar19 + 0x30 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (void*)(uVar10 + 0x40 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (void*)(uVar10 + 0x50 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (void*)(uVar19 + 0x40 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (void*)(uVar19 + 0x50 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (void*)(uVar10 + 0x60 + lVar12 * 4);
          uVar5 = puVar1[1];
          puVar2 = (void*)(uVar10 + 0x70 + lVar12 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (void*)(uVar19 + 0x60 + lVar12 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (void*)(uVar19 + 0x70 + lVar12 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
          lVar16 = lVar16 + 4;
        } while (lVar16 != 0);
      }
      if (uVar20 != 0) {
        lVar16 = uVar10 + lVar12 * 4;
        lVar12 = uVar19 + lVar12 * 4;
        lVar14 = 0;
        do {
          puVar2 = (void*)(lVar16 + lVar14);
          uVar5 = puVar2[1];
          puVar1 = (void*)(lVar16 + 0x10 + lVar14);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (void*)(lVar12 + lVar14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (void*)(lVar12 + 0x10 + lVar14);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar14 = lVar14 + 0x20;
        } while (uVar20 << 5 != lVar14);
      }
      if (uVar18 == uVar17) {
        return;
      }
      param_1 = param_1 - (int)uVar17;
      uVar19 = uVar19 + uVar17 * 4;
      uVar10 = uVar10 + uVar17 * 4;
    }
    iVar8 = param_1 + 1;
    lVar12 = 0;
    do {
      *(void*)(uVar19 + lVar12) = *(void*)(uVar10 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
    return;
  }
  iVar8 = FUN_00b33520();
  if (iVar8 != 2) {
    return;
  }
  iVar8 = FUN_00b33590();
  if (iVar8 != 2) {
    return;
  }
  pfVar11 = (float *)*arg1;
  pfVar21 = (float *)arg1[1];
  pfVar13 = (float *)*param_2;
  pfVar22 = (float *)param_2[1];
  fVar24 = *(float *)(this_ptr + 0x90);
  if ((fVar24 != 0.0) || (NAN(fVar24))) {
    fVar23 = *(float *)(this_ptr + 0x9c);
    fVar26 = *(float *)(this_ptr + 0xa0);
    fVar38 = *(float *)(this_ptr + 0xa4);
    fVar3 = *(float *)(this_ptr + 0xa8);
    fVar4 = *(float *)(this_ptr + 0xac);
    fVar25 = *(float *)(this_ptr + 0xb0);
    fVar34 = *(float *)(this_ptr + 0xb8);
    fVar27 = *(float *)(this_ptr + 0xb4);
    fVar31 = *(float *)(this_ptr + 0xbc);
    fVar35 = fVar25;
    fVar32 = fVar31;
    if (0 < (int)param_1) {
      fVar39 = fVar25;
      uVar9 = param_1;
      fVar28 = fVar27;
      fVar33 = fVar34;
      if ((param_1 & 1) != 0) {
        fVar24 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        unaff_XMM6_Da =
             ((fVar27 * fVar38 + fVar26 * fVar25 + fVar23 * fVar24) - fVar3 * fVar34) -
             fVar31 * fVar4;
        *pfVar13 = unaff_XMM6_Da;
        pfVar13 = pfVar13 + 1;
        fVar31 = fVar34;
        fVar39 = fVar24;
        uVar9 = param_1 - 1;
        fVar28 = fVar25;
        fVar33 = unaff_XMM6_Da;
      }
      fVar35 = fVar24;
      fVar27 = fVar25;
      fVar32 = fVar34;
      fVar34 = unaff_XMM6_Da;
      if (param_1 != 1) {
        iVar8 = uVar9 + 2;
        lVar12 = 0;
        do {
          fVar27 = *(float *)((int64_t)pfVar11 + lVar12);
          fVar31 = ((fVar28 * fVar38 + fVar26 * fVar39 + fVar23 * fVar27) - fVar3 * fVar33) -
                   fVar31 * fVar4;
          *(float *)((int64_t)pfVar13 + lVar12) = fVar31;
          fVar35 = *(float *)((int64_t)pfVar11 + lVar12 + 4);
          fVar33 = ((fVar39 * fVar38 + fVar26 * fVar27 + fVar23 * fVar35) - fVar3 * fVar31) -
                   fVar33 * fVar4;
          *(float *)((int64_t)pfVar13 + lVar12 + 4) = fVar33;
          iVar8 = iVar8 + -2;
          lVar12 = lVar12 + 8;
          fVar39 = fVar35;
          fVar32 = fVar31;
          fVar28 = fVar27;
          fVar34 = fVar33;
        } while (2 < iVar8);
      }
    }
    *(float *)(this_ptr + 0xb0) = fVar35;
    *(float *)(this_ptr + 0xb8) = fVar34;
    *(float *)(this_ptr + 0xb4) = fVar27;
    *(float *)(this_ptr + 0xbc) = fVar32;
    fVar24 = *(float *)(this_ptr + 0xc0);
    fVar25 = *(float *)(this_ptr + 0xc4);
    fVar34 = *(float *)(this_ptr + 200);
    fVar35 = *(float *)(this_ptr + 0xcc);
    fVar28 = fVar24;
    fVar33 = fVar34;
    fVar32 = fVar25;
    fVar39 = fVar35;
    if (0 < (int)param_1) {
      fVar40 = fVar24;
      fVar30 = fVar34;
      uVar9 = param_1;
      if ((param_1 & 1) != 0) {
        fVar27 = *pfVar21;
        pfVar21 = pfVar21 + 1;
        fVar31 = ((fVar25 * fVar38 + fVar26 * fVar24 + fVar23 * fVar27) - fVar3 * fVar34) -
                 fVar35 * fVar4;
        *pfVar22 = fVar31;
        pfVar22 = pfVar22 + 1;
        fVar25 = fVar24;
        fVar40 = fVar27;
        fVar30 = fVar31;
        uVar9 = param_1 - 1;
        fVar35 = fVar34;
      }
      fVar28 = fVar27;
      fVar33 = fVar31;
      fVar32 = fVar24;
      fVar39 = fVar34;
      if (param_1 != 1) {
        iVar8 = uVar9 + 2;
        lVar12 = 0;
        do {
          fVar32 = *(float *)((int64_t)pfVar21 + lVar12);
          fVar35 = ((fVar25 * fVar38 + fVar26 * fVar40 + fVar23 * fVar32) - fVar3 * fVar30) -
                   fVar35 * fVar4;
          *(float *)((int64_t)pfVar22 + lVar12) = fVar35;
          fVar28 = *(float *)((int64_t)pfVar21 + lVar12 + 4);
          fVar30 = ((fVar40 * fVar38 + fVar26 * fVar32 + fVar23 * fVar28) - fVar3 * fVar35) -
                   fVar30 * fVar4;
          *(float *)((int64_t)pfVar22 + lVar12 + 4) = fVar30;
          iVar8 = iVar8 + -2;
          lVar12 = lVar12 + 8;
          fVar25 = fVar32;
          fVar33 = fVar30;
          fVar40 = fVar28;
          fVar39 = fVar35;
        } while (2 < iVar8);
      }
    }
    *(float *)(this_ptr + 0xc0) = fVar28;
    *(float *)(this_ptr + 200) = fVar33;
    *(float *)(this_ptr + 0xc4) = fVar32;
    *(float *)(this_ptr + 0xcc) = fVar39;
    return;
  }
  if ((pfVar11 != pfVar13) && (0 < (int)param_1)) {
    uVar9 = param_1;
    if ((6 < param_1 - 1) &&
       ((uVar19 = (uint64_t)(param_1 - 1) + 1, pfVar11 + uVar19 <= pfVar13 ||
        (pfVar13 + uVar19 <= pfVar11)))) {
      uVar18 = uVar19 & 0xfffffffffffffff8;
      uVar10 = (uVar18 - 8 >> 3) + 1;
      uVar15 = (uint64_t)((uint)uVar10 & 3);
      if (uVar18 - 8 < 0x18) {
        lVar16 = 0;
      }
      else {
        lVar12 = -(uVar10 & 0xfffffffffffffffc);
        lVar16 = 0;
        do {
          uVar5 = *(void*)(pfVar11 + lVar16 + 2);
          uVar6 = *(void*)(pfVar11 + lVar16 + 4);
          uVar7 = *(void*)(pfVar11 + lVar16 + 4 + 2);
          *(void*)(pfVar13 + lVar16) = *(void*)(pfVar11 + lVar16);
          *(void*)(pfVar13 + lVar16 + 2) = uVar5;
          *(void*)(pfVar13 + lVar16 + 4) = uVar6;
          *(void*)(pfVar13 + lVar16 + 4 + 2) = uVar7;
          uVar5 = *(void*)(pfVar11 + lVar16 + 8 + 2);
          uVar6 = *(void*)(pfVar11 + lVar16 + 0xc);
          uVar7 = *(void*)(pfVar11 + lVar16 + 0xc + 2);
          *(void*)(pfVar13 + lVar16 + 8) = *(void*)(pfVar11 + lVar16 + 8);
          *(void*)(pfVar13 + lVar16 + 8 + 2) = uVar5;
          *(void*)(pfVar13 + lVar16 + 0xc) = uVar6;
          *(void*)(pfVar13 + lVar16 + 0xc + 2) = uVar7;
          uVar5 = *(void*)(pfVar11 + lVar16 + 0x10 + 2);
          uVar6 = *(void*)(pfVar11 + lVar16 + 0x14);
          uVar7 = *(void*)(pfVar11 + lVar16 + 0x14 + 2);
          *(void*)(pfVar13 + lVar16 + 0x10) = *(void*)(pfVar11 + lVar16 + 0x10);
          *(void*)(pfVar13 + lVar16 + 0x10 + 2) = uVar5;
          *(void*)(pfVar13 + lVar16 + 0x14) = uVar6;
          *(void*)(pfVar13 + lVar16 + 0x14 + 2) = uVar7;
          uVar5 = *(void*)(pfVar11 + lVar16 + 0x18 + 2);
          uVar6 = *(void*)(pfVar11 + lVar16 + 0x1c);
          uVar7 = *(void*)(pfVar11 + lVar16 + 0x1c + 2);
          *(void*)(pfVar13 + lVar16 + 0x18) = *(void*)(pfVar11 + lVar16 + 0x18);
          *(void*)(pfVar13 + lVar16 + 0x18 + 2) = uVar5;
          *(void*)(pfVar13 + lVar16 + 0x1c) = uVar6;
          *(void*)(pfVar13 + lVar16 + 0x1c + 2) = uVar7;
          lVar16 = lVar16 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar15 != 0) {
        lVar12 = 0;
        do {
          puVar2 = (void*)((int64_t)pfVar11 + lVar12 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar1 = (void*)((int64_t)pfVar11 + lVar12 + lVar16 * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (void*)((int64_t)pfVar13 + lVar12 + lVar16 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (void*)((int64_t)pfVar13 + lVar12 + lVar16 * 4 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (uVar15 << 5 != lVar12);
      }
      if (uVar19 == uVar18) goto LAB_00b39126;
      pfVar13 = pfVar13 + uVar18;
      pfVar11 = pfVar11 + uVar18;
      uVar9 = param_1 - (int)uVar18;
    }
    iVar8 = uVar9 + 1;
    lVar12 = 0;
    do {
      *(void*)((int64_t)pfVar13 + lVar12) = *(void*)((int64_t)pfVar11 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
  }
LAB_00b39126:
  if ((pfVar21 != pfVar22) && (0 < (int)param_1)) {
    if ((6 < param_1 - 1) &&
       ((uVar19 = (uint64_t)(param_1 - 1) + 1, pfVar21 + uVar19 <= pfVar22 ||
        (pfVar22 + uVar19 <= pfVar21)))) {
      uVar15 = uVar19 & 0xfffffffffffffff8;
      uVar10 = (uVar15 - 8 >> 3) + 1;
      uVar18 = (uint64_t)((uint)uVar10 & 3);
      if (uVar15 - 8 < 0x18) {
        lVar16 = 0;
      }
      else {
        lVar12 = -(uVar10 & 0xfffffffffffffffc);
        lVar16 = 0;
        do {
          uVar5 = *(void*)(pfVar21 + lVar16 + 2);
          uVar6 = *(void*)(pfVar21 + lVar16 + 4);
          uVar7 = *(void*)(pfVar21 + lVar16 + 4 + 2);
          *(void*)(pfVar22 + lVar16) = *(void*)(pfVar21 + lVar16);
          *(void*)(pfVar22 + lVar16 + 2) = uVar5;
          *(void*)(pfVar22 + lVar16 + 4) = uVar6;
          *(void*)(pfVar22 + lVar16 + 4 + 2) = uVar7;
          uVar5 = *(void*)(pfVar21 + lVar16 + 8 + 2);
          uVar6 = *(void*)(pfVar21 + lVar16 + 0xc);
          uVar7 = *(void*)(pfVar21 + lVar16 + 0xc + 2);
          *(void*)(pfVar22 + lVar16 + 8) = *(void*)(pfVar21 + lVar16 + 8);
          *(void*)(pfVar22 + lVar16 + 8 + 2) = uVar5;
          *(void*)(pfVar22 + lVar16 + 0xc) = uVar6;
          *(void*)(pfVar22 + lVar16 + 0xc + 2) = uVar7;
          uVar5 = *(void*)(pfVar21 + lVar16 + 0x10 + 2);
          uVar6 = *(void*)(pfVar21 + lVar16 + 0x14);
          uVar7 = *(void*)(pfVar21 + lVar16 + 0x14 + 2);
          *(void*)(pfVar22 + lVar16 + 0x10) = *(void*)(pfVar21 + lVar16 + 0x10);
          *(void*)(pfVar22 + lVar16 + 0x10 + 2) = uVar5;
          *(void*)(pfVar22 + lVar16 + 0x14) = uVar6;
          *(void*)(pfVar22 + lVar16 + 0x14 + 2) = uVar7;
          uVar5 = *(void*)(pfVar21 + lVar16 + 0x18 + 2);
          uVar6 = *(void*)(pfVar21 + lVar16 + 0x1c);
          uVar7 = *(void*)(pfVar21 + lVar16 + 0x1c + 2);
          *(void*)(pfVar22 + lVar16 + 0x18) = *(void*)(pfVar21 + lVar16 + 0x18);
          *(void*)(pfVar22 + lVar16 + 0x18 + 2) = uVar5;
          *(void*)(pfVar22 + lVar16 + 0x1c) = uVar6;
          *(void*)(pfVar22 + lVar16 + 0x1c + 2) = uVar7;
          lVar16 = lVar16 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar18 != 0) {
        lVar12 = 0;
        do {
          puVar2 = (void*)((int64_t)pfVar21 + lVar12 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar1 = (void*)((int64_t)pfVar21 + lVar12 + lVar16 * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (void*)((int64_t)pfVar22 + lVar12 + lVar16 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (void*)((int64_t)pfVar22 + lVar12 + lVar16 * 4 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (uVar18 << 5 != lVar12);
      }
      if (uVar19 == uVar15) {
        return;
      }
      param_1 = param_1 - (int)uVar15;
      pfVar22 = pfVar22 + uVar15;
      pfVar21 = pfVar21 + uVar15;
    }
    iVar8 = param_1 + 1;
    lVar12 = 0;
    do {
      *(void*)((int64_t)pfVar22 + lVar12) = *(void*)((int64_t)pfVar21 + lVar12);
      iVar8 = iVar8 + -1;
      lVar12 = lVar12 + 4;
    } while (1 < iVar8);
  }
  return;
}



// ============================================================
// 00b3bc60
// ============================================================
// Function: FUN_00b3bc60
// Address: 00b3bc60
// Size: 1305 bytes
// Class: GNAudioProcessor

uint64_t FUN_00b3bc60(void)

{
  char cVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  int64_t *plVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint32_t uVar11;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint64_t uVar12;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dc_03;
  uint32_t extraout_XMM0_Dc_04;
  uint32_t extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  float extraout_XMM0_Dc_07;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  uint32_t extraout_XMM0_Dd_03;
  uint32_t extraout_XMM0_Dd_04;
  uint32_t extraout_XMM0_Dd_05;
  uint32_t extraout_XMM0_Dd_06;
  float extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float fVar15;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  int64_t local_e0;
  char local_d8;
  uint8_t local_c8 [16];
  int64_t *local_88;
  char local_80;
  uint8_t local_78 [16];
  uint8_t local_68 [8];
  float fStack_60;
  float fStack_5c;
  int64_t *local_50;
  uint64_t local_48;
  int64_t *local_38;
  
  plVar6 = (int64_t *)*arg1;
  cVar1 = (char)arg1[1];
  bVar9 = cVar1 == '\0';
  bVar10 = plVar6 == (int64_t *)0x0;
  plVar7 = plVar6;
  if (!bVar10 && !bVar9) {
    FUN_00d50b00();
    plVar7 = (int64_t *)*arg1;
  }
  local_50 = plVar6;
  (**(code **)(*plVar7 + 0x570))();
  iVar5 = (**(code **)(*(int64_t *)this_ptr[0xf] + 0x448))();
  local_68 = (uint8_t  [8])(**(code **)(*this_ptr + 0x618))();
  fStack_60 = (float)extraout_XMM0_Dc;
  fStack_5c = (float)extraout_XMM0_Dd;
  (**(code **)(*this_ptr + 0x620))();
  local_48 = (**(code **)(*this_ptr + 0x620))();
  local_78._0_8_ = (**(code **)(*this_ptr + 0x628))();
  local_78._8_4_ = extraout_XMM0_Dc_00;
  local_78._12_4_ = extraout_XMM0_Dd_00;
  (**(code **)(*this_ptr + 0x628))();
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00074c30();
  (**(code **)(*plVar6 + 0x18))();
  local_38 = plVar6;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar6 + 0x18))();
  fVar15 = extraout_XMM0_Db + (float)local_68._4_4_;
  local_78._0_4_ = local_78._0_4_ + local_78._0_4_ + (float)local_68._0_4_;
  auVar13._4_4_ = extraout_XMM0_Db_00;
  auVar13._0_4_ = extraout_XMM0_Db_00;
  auVar13._8_4_ = extraout_XMM0_Dd_01;
  auVar13._12_4_ = extraout_XMM0_Dd_01;
  register0x00001284 = auVar13._4_12_;
  local_68._0_4_ =
       extraout_XMM0_Db_00 + extraout_XMM0_Db_00 + ((float)iVar5 * fVar15 - local_48._4_4_);
  insertps(local_78,_local_68,0x10);
  (**(code **)(*plVar6 + 0x4d0))(0);
  if ((float)local_68._0_4_ <= g_0241b640) {
    FUN_01d94ee0();
    FUN_01d95060();
    (**(code **)(*local_38 + 0x4d0))(0);
    if (local_50 != plVar6) {
      FUN_00d50b00();
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      local_50 = plVar6;
      if (!bVar10 && !bVar9) {
        FUN_00d50b20();
      }
      goto LAB_00b3beec;
    }
    uVar12 = local_48;
    if ((cVar1 == '\0') && (local_50 != (int64_t *)0x0)) {
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      FUN_00d50b00();
      goto LAB_00b3beec;
    }
  }
  else {
    uVar11 = FUN_01d91900();
    local_68._0_4_ = uVar11;
    FUN_01d94ee0();
    FUN_01d95060();
    auVar14._4_12_ = local_78._4_12_;
    auVar14._0_4_ = local_78._0_4_ + (float)local_68._0_4_;
    auVar13 = blendps(auVar14,g_023d5dd0,0xe);
    (**(code **)(*local_38 + 0x4d0))(0,auVar13._0_8_);
    if (local_50 != local_38) {
      FUN_00d50b00();
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      if (bVar10 || bVar9) {
        local_50 = local_38;
      }
      else {
        local_50 = local_38;
        FUN_00d50b20();
      }
      goto LAB_00b3beec;
    }
    uVar12 = local_48;
    if ((cVar1 == '\0') && (local_50 != (int64_t *)0x0)) {
      local_48._0_4_ = CONCAT31(local_48._1_3_,1);
      FUN_00d50b00();
      goto LAB_00b3beec;
    }
  }
  local_48._4_4_ = (float)((uint64_t)uVar12 >> 0x20);
  local_48._1_3_ = (undefined3)((uint64_t)uVar12 >> 8);
  local_48._0_4_ = CONCAT31(local_48._1_3_,cVar1);
LAB_00b3beec:
  FUN_01d97870();
  FUN_01cf3e00();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x450))();
  FUN_01d978b0();
  local_68 = (uint8_t  [8])(**(code **)(*this_ptr + 0x628))();
  fStack_60 = (float)extraout_XMM0_Dc_01;
  fStack_5c = (float)extraout_XMM0_Dd_02;
  local_c8._0_8_ = (**(code **)(*this_ptr + 0x628))();
  local_c8._8_4_ = extraout_XMM0_Dc_02;
  local_c8._12_4_ = extraout_XMM0_Dd_03;
  local_78._0_8_ = (**(code **)(*this_ptr + 0x618))();
  local_78._8_4_ = extraout_XMM0_Dc_03;
  local_78._12_4_ = extraout_XMM0_Dd_04;
  uVar12 = (**(code **)(*this_ptr + 0x618))();
  auVar13 = blendps(_local_68,local_c8,2);
  if (0 < iVar5) {
    auVar3._8_4_ = extraout_XMM0_Dc_04;
    auVar3._0_8_ = uVar12;
    auVar3._12_4_ = extraout_XMM0_Dd_05;
    auVar14 = blendps(local_78,auVar3,2);
    iVar8 = 0;
    do {
      local_80 = '\0';
      local_88 = plVar6;
      local_68 = (uint8_t  [8])(**(code **)(*this_ptr + 0x638))(auVar13._0_4_,&local_88);
      fStack_60 = (float)extraout_XMM0_Dc_05;
      fStack_5c = (float)extraout_XMM0_Dd_06;
      local_78 = auVar14;
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar12 = (**(code **)(*this_ptr + 0x620))();
      auVar16._0_4_ = (float)uVar12 + local_78._0_4_ + local_68._0_4_;
      auVar16._4_4_ = (float)((uint64_t)uVar12 >> 0x20) + local_78._4_4_ + local_68._4_4_;
      auVar16._8_4_ = extraout_XMM0_Dc_06 + local_78._8_4_ + local_68._8_4_;
      auVar16._12_4_ = extraout_XMM0_Dd_07 + local_78._12_4_ + local_68._12_4_;
      auVar13 = blendps(auVar16,_local_68,0xd);
      iVar8 = iVar8 + 1;
      auVar14 = local_78;
    } while (iVar5 != iVar8);
  }
  _local_68 = auVar13;
  (**(code **)(*plVar6 + 0x4d8))();
  plVar4 = local_38;
  plVar7 = local_50;
  uVar12 = (**(code **)(*this_ptr + 0x628))();
  auVar17._0_4_ = (float)local_68._0_4_ + (float)uVar12;
  auVar17._4_4_ = (float)local_68._4_4_ + (float)((uint64_t)uVar12 >> 0x20);
  auVar17._8_4_ = fStack_60 + extraout_XMM0_Dc_07;
  auVar17._12_4_ = fStack_5c + extraout_XMM0_Dd_08;
  auVar13 = blendps(local_78,auVar17,2);
  (**(code **)(*plVar6 + 0x4d0))(0);
  if (plVar6 == plVar7) {
    (**(code **)(*plVar6 + 0x4d8))();
    (**(code **)(*plVar4 + 0x4d0))();
    plVar2 = (int64_t *)*arg1;
    (**(code **)(*plVar6 + 0x4d8))();
    (**(code **)(*plVar2 + 0x4d0))();
  }
  (**(code **)(*plVar7 + 0x4d8))();
  local_78 = auVar13;
  FUN_00d50b20();
  if ((char)local_48 != '\0') {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return local_78._0_8_;
}



// ============================================================
// 0168a900
// ============================================================
// Function: FUN_0168a900
// Address: 0168a900
// Size: 1862 bytes
// Class: GNAudioProcessor

void FUN_0168a900(void* param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar2 = local_60;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01653bd0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  if (local_60 == *arg1) goto LAB_0168b056;
  if (local_60 == 0) {
LAB_0168aa03:
    lVar7 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c8a10();
    lVar7 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_0168aa03;
      FUN_00d50b00();
    }
  }
  if (*arg1 == 0) {
LAB_0168aa82:
    local_68 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c8a10();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_0168aa82;
      local_68 = local_60;
      FUN_00d50b00();
    }
    else {
      local_68 = local_60;
    }
  }
  if (local_60 != 0) {
    lVar6 = *(int64_t *)(this_ptr + 0x60);
    if (lVar6 != 0) {
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar5 = (int64_t)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_48) break;
        local_60 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar5 * 8);
        local_100 = *param_2;
        local_f8 = '\0';
        FUN_01694e10(*(int64_t *)(lVar6 + 0x10),&local_100);
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_016be7c0();
      param_1 = (void*)lVar6;
    }
    if (lVar7 != local_68) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e8 = '\0';
      local_f0 = lVar7;
      FUN_01657d60();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = *param_2;
    local_d8 = '\0';
    FUN_012c85c0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_d0 = *arg1;
  local_c8 = '\0';
  FUN_01658140();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c0 = *param_2;
    local_b8 = '\0';
    FUN_012c8210();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != local_68) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b0 = local_68;
      local_a8 = '\0';
      FUN_01657410();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar6 = *(int64_t *)(this_ptr + 0x60);
    if (lVar6 != 0) {
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar5 = (int64_t)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_48) break;
        local_60 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar5 * 8);
        local_a0 = *arg1;
        local_98 = '\0';
        local_90 = *param_2;
        local_88 = '\0';
        FUN_01694d70(*(int64_t *)(lVar6 + 0x10),&local_90);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_016be7c0();
      param_1 = (void*)lVar6;
    }
  }
  cVar3 = FUN_016ae5f0();
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c81e0();
    iVar1 = *(int *)(local_60 + 0xc);
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      FUN_00d23d90();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = '\0';
      local_80 = 0;
      FUN_012c8a40();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
LAB_0168b056:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b3d310
// ============================================================
// Function: FUN_00b3d310
// Address: 00b3d310
// Size: 1369 bytes
// Class: GNAudioProcessor
// String references:
//   "%@:"

void FUN_00b3d310(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *this_ptr;
  uint64_t unaff_R13;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t local_110;
  char local_108;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  uint local_34;
  
  lVar2 = g_0275e910;
  if (g_0275e910 != 0) {
    FUN_00d50b00();
  }
  local_f0 = 0;
  local_e8 = '\0';
  (**(code **)(*this_ptr + 0x508))(param_1,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_b0 = (int64_t *)0x0;
  (**(code **)(*(int64_t *)this_ptr[0xf] + 0x5d0))();
  plVar6 = local_58;
  if (local_58 == (int64_t *)0x0) {
    uVar5 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
    plVar6 = (int64_t *)0x0;
  }
  else {
    if ((char)local_50 == '\0') {
      FUN_00d50b00();
      local_b0 = plVar6;
      uVar5 = 0;
      if (((char)local_50 == '\0') || (local_58 == (int64_t *)0x0)) goto LAB_00b3d410;
      FUN_00d50b20();
    }
    else {
      local_b0 = local_58;
    }
    uVar5 = 0;
  }
LAB_00b3d410:
  plVar1 = (int64_t *)this_ptr[0x10];
  if (plVar1 != (int64_t *)0x0) {
    local_34 = (uint)uVar5;
    (**(code **)(*plVar6 + 0x478))(param_1,(int)this_ptr[0xe]);
    local_50 = 1;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (local_110 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_110;
    local_40 = '\x01';
    FUN_00d8cb40(param_1,&local_58);
    lVar2 = local_a8;
    if (local_a0 == '\0') {
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    (**(code **)(*plVar1 + 0x968))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = (uint64_t)local_34;
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x13];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x4a0))(param_1,(int)this_ptr[0xe]);
    plVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    (**(code **)(*plVar1 + 0x968))();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x11];
  if (plVar1 == (int64_t *)0x0) goto LAB_00b3d738;
  (**(code **)(*plVar6 + 0x460))();
  (**(code **)(*plVar1 + 0xab8))();
  plVar1 = (int64_t *)this_ptr[0x11];
  (**(code **)(*plVar6 + 0x468))();
  (**(code **)(*plVar1 + 0xac8))();
  (**(code **)(*plVar6 + 0x470))(param_1,(int)this_ptr[0xe]);
  plVar1 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00b3d659;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_00b3d659:
    local_e0 = plVar1;
    local_d8 = '\0';
    (**(code **)(*(int64_t *)this_ptr[0x11] + 0x988))();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)this_ptr[0x11];
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0xa20))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = g_0275e918;
  plVar1 = (int64_t *)this_ptr[0x11];
  if (g_0275e918 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  (**(code **)(*plVar1 + 0xa10))();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
LAB_00b3d738:
  if (this_ptr[0x12] != 0) {
    FUN_01e058a0();
    FUN_00b10020();
    plVar1 = g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar1 = g_02802688;
      if (cVar4 != '\0') {
        plVar1 = local_b0;
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      plVar1 = (int64_t *)this_ptr[0x12];
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0xa20))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = g_0275e920;
      plVar1 = (int64_t *)this_ptr[0x12];
      if (g_0275e920 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar2;
      local_b8 = '\x01';
      (**(code **)(*plVar1 + 0xa10))();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((char)uVar5 == '\0' && plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 008f1210
// ============================================================
// Function: FUN_008f1210
// Address: 008f1210
// Size: 1073 bytes
// Class: GNAudioProcessor

int FUN_008f1210(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0x50;
  lVar8 = this_ptr + 0x4c;
  lVar9 = this_ptr + 0x48;
  lVar10 = this_ptr + 0x44;
  lVar11 = this_ptr + 0x40;
  lVar12 = this_ptr + 0x28;
  lVar13 = this_ptr + 0x10;
  lVar14 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,uVar15,uVar16,uVar17);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar15 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x70) = 1;
      goto LAB_008f159b;
    case 2:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x71) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x72) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x73) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x74) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x75) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x76) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_44 == 0xf) {
        *(void*)(this_ptr + 0x58) = *(void*)(this_ptr + 0x50);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008f1300::switchdataD_008f166c,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x58) - *(int64_t *)(this_ptr + 0x50);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x58) = *(int64_t *)(this_ptr + 0x50) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x77) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x78) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x79) = 1;
        goto LAB_008f159b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008f159b:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}



// ============================================================
// 00b3df40
// ============================================================
// Function: FUN_00b3df40
// Address: 00b3df40
// Size: 1000 bytes
// Class: GNAudioProcessor

uint64_t FUN_00b3df40(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t **pplVar9;
  uint32_t extraout_XMM0_Da;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar1 = local_40;
  lVar3 = g_0275e918;
  if (g_0275e918 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 != '\0') {
    uVar8 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
    if (param_2 != '\0') {
      plVar1 = *(int64_t **)(this_ptr + 0x78);
      uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x930))();
      local_58 = (int64_t *)CONCAT44(local_58._4_4_,uVar5);
      FUN_00b3d240();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_01caecd0();
      lVar3 = *plVar1;
      (**(code **)(lVar3 + 0x5e0))(local_58._0_4_,&local_78);
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_00b3e314;
  }
  FUN_01cae990();
  plVar1 = local_40;
  lVar3 = g_0275e920;
  if (g_0275e920 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*plVar1 + 0x50))();
  uVar5 = extraout_XMM0_Da;
  if (lVar3 != 0) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    uVar7 = FUN_01e54290(uVar5,param_2);
    uVar8 = (uint64_t)uVar7;
    goto LAB_00b3e314;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
  if (param_2 == '\0') goto LAB_00b3e314;
  pplVar9 = &local_40;
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x5d0))();
  plVar1 = local_40;
  FUN_00b10020();
  if (plVar1 == (int64_t *)0x0) {
LAB_00b3e0ec:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00b3e0ec;
  }
  plVar2 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  uVar8 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_58 = plVar2;
    uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x970))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    uVar5 = FUN_00bf87d0(uVar5,*(void*)(this_ptr + 0x70));
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    FUN_00b3d240();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    FUN_01caecd0();
    lVar3 = *plVar1;
    (**(code **)(lVar3 + 0x5e0))(uVar5,&local_68);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_00b3e314:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 0168a170
// ============================================================
// Function: FUN_0168a170
// Address: 0168a170
// Size: 1311 bytes
// Class: GNAudioProcessor

int64_t * FUN_0168a170(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *plVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  if (*param_2 != 0) {
    plVar5 = *(int64_t **)(arg1 + 0x78);
    if (plVar5 == (int64_t *)0x0) {
LAB_0168a2b1:
      pVar4 = (void*)param_1;
      lVar1 = *param_2;
    }
    else {
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      do {
        local_50 = '\0';
        lVar1 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)plVar5 + 0xc) <= local_40) {
          FUN_01714b60();
          param_1 = plVar5;
          goto LAB_0168a2b1;
        }
        plVar3 = (int64_t *)plVar5[2];
        local_58 = (int64_t *)plVar3[lVar1 + 1];
        pvVar2 = _pthread_getspecific((void*)plVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c9180();
        lVar1 = *param_2;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      } while (local_88 != lVar1);
      pvVar2 = _pthread_getspecific((void*)plVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      lVar1 = *param_1;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 == lVar1) {
        *(void*)(this_ptr + 1) = 0;
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *this_ptr = (int64_t)local_58;
        *(void*)(this_ptr + 1) = 1;
        FUN_01714b60();
        return this_ptr;
      }
      FUN_01714b60();
      pVar4 = (void*)plVar3;
      lVar1 = *param_2;
      param_1 = plVar3;
    }
    if (lVar1 != 0) goto LAB_0168a486;
  }
  pVar4 = (void*)param_1;
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00bdbf50();
  (**(code **)(*plVar3 + 0x18))();
  plVar5 = (int64_t *)*param_2;
  if (plVar5 == plVar3) {
    if ((char)param_2[1] == '\0') goto LAB_0168a309;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)plVar3;
    if (((char)param_2[1] != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0168a309:
    *(void*)(param_2 + 1) = 1;
  }
  FUN_00d9bb60();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b69200();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d46300();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b68960();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0168a486:
  FUN_016ae690();
  FUN_00c811e0();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  plVar5 = local_58;
  if ((pvVar2 != (void *)0x0) && (lVar1 = FUN_00e8b990(), lVar1 != 0)) {
    plVar5 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar1 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c78d0();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a40();
  FUN_00d21140();
  *this_ptr = (int64_t)local_58;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 00b34ce0
// ============================================================
// Function: FUN_00b34ce0
// Address: 00b34ce0
// Size: 949 bytes
// Class: GNAudioProcessor

uint64_t FUN_00b34ce0(uint64_t param_1,uint32_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  byte bVar7;
  uint64_t uVar8;
  bool bVar9;
  uint32_t extraout_XMM0_Da;
  float fVar10;
  int64_t local_48;
  char local_40;
  
  iVar5 = (**(code **)(*this_ptr + 0x4b0))();
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      (**(code **)(*this_ptr + 0x4b8))(extraout_XMM0_Da,param_2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          goto LAB_00b34d9e;
        }
      }
      else if (local_48 != 0) {
LAB_00b34d9e:
        uVar1 = *(uint *)(local_48 + 0xc);
        if ((int)uVar1 < 1) {
          uVar8 = 0;
          lVar6 = 0;
          bVar3 = false;
        }
        else {
          uVar8 = 0;
          lVar6 = 0;
          bVar3 = false;
          do {
            lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + uVar8 * 8);
            if (lVar6 == lVar2) {
              lVar2 = lVar6;
              bVar4 = bVar3;
              if ((!bVar3) && (lVar6 != 0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            else {
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              if ((bVar3) && (lVar6 != 0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar4;
            lVar6 = lVar2;
            iVar5 = FUN_00d92520();
            if (iVar5 == 0) {
              *arg1 = (float)(int)uVar8;
              uVar8 = 1;
              goto LAB_00b34fb2;
            }
            uVar8 = uVar8 + 1;
          } while (uVar1 != uVar8);
          uVar8 = 0;
        }
LAB_00b34fb2:
        FUN_00d50b20();
        goto joined_r0x00b35069;
      }
    }
    uVar8 = 0;
    goto LAB_00b35078;
  }
  (**(code **)(*this_ptr + 0x490))(0,param_2);
  lVar6 = local_48;
  if (local_48 == 0) {
    bVar7 = 1;
    lVar6 = 0;
    bVar3 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar7 = 0;
    bVar3 = true;
  }
  else {
    bVar7 = 0;
    bVar3 = true;
  }
  iVar5 = FUN_00d92520();
  if (iVar5 == 0) {
    fVar10 = 0.0;
LAB_00b3505c:
    *arg1 = fVar10;
    uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
  }
  else {
    (**(code **)(*this_ptr + 0x490))(g_02390124,param_2);
    if (local_48 == lVar6) {
      if ((bool)(bVar7 & local_48 != 0)) {
        bVar4 = true;
        if (local_40 != '\0') goto LAB_00b35016;
        bVar3 = true;
        FUN_00d50b00();
      }
LAB_00b35002:
      bVar4 = bVar3;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar9 = (bool)(bVar3 & lVar6 != 0);
      bVar3 = true;
      lVar6 = local_48;
      bVar4 = true;
      if (bVar9) {
        FUN_00d50b20();
        goto LAB_00b35002;
      }
    }
    else {
      bVar9 = lVar6 != 0;
      lVar6 = local_48;
      bVar4 = true;
      if ((bool)(bVar3 & bVar9)) {
        FUN_00d50b20();
      }
    }
LAB_00b35016:
    bVar3 = bVar4;
    iVar5 = FUN_00d92520();
    if (iVar5 == 0) {
      this_ptr = (int64_t *)0x0;
      fVar10 = g_02390124;
      goto LAB_00b3505c;
    }
    uVar8 = 0;
  }
joined_r0x00b35069:
  if ((bVar3) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
LAB_00b35078:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 00b38870
// ============================================================
// Function: FUN_00b38870
// Address: 00b38870
// Size: 878 bytes
// Class: GNAudioProcessor

void FUN_00b38870(int *param_1,uint64_t *param_2,size_t param_3)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  uint64_t uVar10;
  int *piVar11;
  void *pvVar12;
  uint64_t uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  iVar5 = (int)param_1;
  uVar6 = FUN_00b33120();
  if (iVar5 < 1) goto LAB_00b3899b;
  piVar11 = (int *)*param_2;
  dVar4 = *(double *)(this_ptr + 0x18);
  iVar24 = *(int *)(this_ptr + 0x98);
  uVar9 = 0;
  param_1 = piVar11;
  if ((iVar5 - 1U < 3) ||
     ((uVar10 = (uint64_t)(iVar5 - 1U) + 1, piVar11 < (int *)(this_ptr + 0x98U) &&
      (param_1 = piVar11 + uVar10, (int *)(this_ptr + 0x90U) < param_1)))) {
LAB_00b38902:
    lVar8 = 0;
    do {
      dVar17 = (double)(iVar24 + (int)lVar8);
      fVar2 = *(float *)(this_ptr + 0x94);
      dVar17 = (double)_sin((double)*(float *)(this_ptr + 0x90) *
                            (((dVar17 + dVar17) * g_023d5c20) / dVar4));
      piVar11[lVar8] = (int)(float)((double)fVar2 * dVar17);
      lVar8 = lVar8 + 1;
    } while (iVar5 - (int)uVar9 != (int)lVar8);
    iVar7 = iVar24 + (int)lVar8;
  }
  else {
    uVar9 = uVar10 & 0xfffffffffffffffc;
    iVar7 = iVar24 + (int)uVar9;
    iVar21 = iVar24 + g_0238fcc0;
    iVar22 = iVar24 + _UNK_0238fcc4;
    iVar23 = iVar24 + _UNK_0238fcc8;
    iVar24 = iVar24 + _UNK_0238fccc;
    fVar2 = *(float *)(this_ptr + 0x90);
    fVar3 = *(float *)(this_ptr + 0x94);
    uVar13 = 0;
    do {
      auVar18._0_8_ = ((double)iVar23 + (double)iVar23) * g_023d5c10;
      auVar18._8_8_ = ((double)iVar24 + (double)iVar24) * _UNK_023d5c18;
      auVar20._0_8_ = ((double)iVar21 + (double)iVar21) * g_023d5c10;
      auVar20._8_8_ = ((double)iVar22 + (double)iVar22) * _UNK_023d5c18;
      auVar19._8_8_ = dVar4;
      auVar19._0_8_ = dVar4;
      auVar20 = divpd(auVar20,auVar19);
      auVar19 = divpd(auVar18,auVar19);
      dVar17 = (double)_sin(auVar20._0_8_ * (double)fVar2);
      dVar14 = (double)_sin(auVar20._8_8_ * (double)fVar2);
      dVar15 = (double)_sin();
      dVar16 = (double)_sin(auVar19._8_8_ * (double)fVar2);
      *(uint64_t *)(piVar11 + uVar13) =
           CONCAT44((float)(dVar14 * (double)fVar3),(float)(dVar17 * (double)fVar3));
      *(uint64_t *)(piVar11 + uVar13 + 2) =
           CONCAT44((float)(dVar16 * (double)fVar3),(float)(dVar15 * (double)fVar3));
      uVar13 = uVar13 + 4;
      iVar21 = iVar21 + g_02394180;
      iVar22 = iVar22 + _UNK_02394184;
      iVar23 = iVar23 + _UNK_02394188;
      iVar24 = iVar24 + _UNK_0239418c;
    } while (uVar9 != uVar13);
    piVar11 = piVar11 + uVar9;
    iVar24 = iVar7;
    if (uVar10 != uVar9) goto LAB_00b38902;
  }
  *(int *)(this_ptr + 0x98U) = iVar7;
LAB_00b3899b:
  if (1 < (int)uVar6) {
    pvVar12 = (void *)((int64_t)iVar5 << 2);
    if (uVar6 != 2) {
      lVar8 = 1;
      do {
        _memcpy(param_1,pvVar12,param_3);
        _memcpy(param_1,pvVar12,param_3);
        lVar1 = lVar8 - ((uint64_t)uVar6 - 1 & 0xfffffffffffffffe);
        lVar8 = lVar8 + 2;
      } while (lVar1 != -1);
    }
    if (((uint64_t)uVar6 - 1 & 1) != 0) {
      _memcpy(param_1,pvVar12,param_3);
      return;
    }
  }
  return;
}



// ============================================================
// 00b32d70
// ============================================================
// Function: FUN_00b32d70
// Address: 00b32d70
// Size: 938 bytes
// Class: GNAudioProcessor

void FUN_00b32d70(uint64_t param_1,uint32_t param_2)

{
  byte bVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  int64_t *plVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  bVar1 = *(byte *)((int64_t)this_ptr + 0x14);
  cVar8 = arg1 == 0;
  if ((uint64_t)bVar1 != 0) {
    uVar3 = (uint64_t)(bVar1 & 3);
    if ((uint64_t)bVar1 - 1 < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        if (*(int64_t *)(arg1 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(int64_t *)(arg1 + 8 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(int64_t *)(arg1 + 0x10 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(int64_t *)(arg1 + 0x18 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        uVar2 = uVar2 + 4;
      } while ((bVar1 & 0xfffffffc) != uVar2);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (*(int64_t *)(arg1 + uVar2 * 8 + uVar4 * 8) == 0) {
          cVar8 = '\x02';
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  if (cVar8 != '\0') {
    return;
  }
  plVar5 = (int64_t *)this_ptr[7];
  uVar7 = (uint)bVar1;
  uVar6 = (uint)bVar1;
  if (plVar5 == (int64_t *)0x0) {
    bVar1 = *(byte *)(this_ptr + 2);
    if (uVar6 != 0) {
      if (6 < (uint64_t)uVar7 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar7 & 0xfffffff8) != uVar3);
      }
      if ((uint64_t)(uVar7 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar7 & 7) != uVar3);
      }
    }
    uVar7 = (uint)bVar1;
    if (uVar7 != 0) {
      if (6 < (uint64_t)bVar1 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar7 & 0xfffffff8) != uVar3);
      }
      if ((uint64_t)(uVar7 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar7 & 7) != uVar3);
      }
    }
  }
  else {
    if (uVar7 != 0) {
      if (6 < (uint64_t)uVar6 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar6 & 0xfffffff8) != uVar3);
      }
      if ((uint64_t)(uVar6 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar6 & 7) != uVar3);
      }
      plVar5 = (int64_t *)this_ptr[7];
    }
    (**(code **)(*plVar5 + 0x538))();
  }
                                          (**(code **)(*this_ptr + 0x400))(param_2);
  return;
}



// ============================================================
// 00b2f6b0
// ============================================================
// Function: FUN_00b2f6b0
// Address: 00b2f6b0
// Size: 658 bytes
// Class: GNAudioProcessor

void FUN_00b2f6b0(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  void*arg1;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  FUN_00d50cd0();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x28);
        *(int64_t *)(this_ptr + 0x28) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x28) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x30) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x30);
        *(int64_t *)(this_ptr + 0x30) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x30) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x40) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x40);
        *(int64_t *)(this_ptr + 0x40) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x40) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        *(void*)(this_ptr + 0x38) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x38);
        *(int64_t *)(this_ptr + 0x38) = local_30;
      }
    }
    else {
      local_28 = '\0';
      *(int64_t *)(this_ptr + 0x38) = local_30;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x18) = uVar2;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x48) = uVar3;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x4c) = uVar3;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  FUN_00e88810();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x50) = uVar3;
  return;
}



// ============================================================
// 00b324d0
// ============================================================
// Function: FUN_00b324d0
// Address: 00b324d0
// Size: 948 bytes
// Class: GNAudioProcessor
// String references:
//   "editValueForKey"
//   "Edit %@"
//   "v@@I@"

void FUN_00b324d0(uint64_t param_1,int64_t *param_2,int64_t *param_3)

{
  void*puVar1;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int local_c4;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  uint local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_78;
  char local_70;
  char local_50;
  
  local_c4 = (int)param_1;
  if (((*param_3 != 0) && (local_c4 != 3)) && (local_c4 != 2)) {
    local_108 = *param_2;
    local_100 = '\0';
    (**(code **)(*this_ptr + 0x88))(param_1,&local_108);
    puVar1 = local_b0;
    if ((char)local_a8 == '\0') {
      if (local_b0 != (void*)0x0) {
        FUN_00d50b00();
        if (((char)local_a8 != '\0') && (local_b0 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_a8 = local_a8 & 0xffffff00;
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_c0 = *param_2;
    local_110 = *param_3;
    FUN_00b359e0(&local_c4,&local_c0,&local_110,4);
    FUN_00db2930("v@@I@","editValueForKey",&local_b0);
    local_b0 = (void*)&g_02532370;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_b0 = (void*)&g_0253d630;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_b0 = &g_024c5048;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_f8 = *param_2;
    local_f0 = '\0';
    FUN_00d9a330();
    local_a0 = local_c0;
    local_a8 = 1;
    local_b0 = &g_024c5048;
    local_98 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (puVar1 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00db3140();
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (puVar1 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_b0 = &g_024c5048;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  local_e8 = *arg1;
  local_e0 = '\0';
  local_d8 = *param_2;
  local_d0 = '\0';
  (**(code **)(*this_ptr + 0x80))();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b3e5a0
// ============================================================
// Function: FUN_00b3e5a0
// Address: 00b3e5a0
// Size: 703 bytes
// Class: GNAudioProcessor
// String references:
//   "%@:"

void FUN_00b3e5a0(uint64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t local_c0;
  char local_b8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_0275e928;
  if (g_0275e928 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 0;
  local_98 = '\0';
  (**(code **)(*this_ptr + 0x508))(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0xf] + 0x5d0))();
  plVar4 = local_60;
  if (local_60 == (int64_t *)0x0) {
    bVar2 = true;
    plVar4 = (int64_t *)0x0;
    plVar1 = (int64_t *)this_ptr[0x10];
  }
  else {
    if ((char)local_58 == '\0') {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = false;
    plVar1 = (int64_t *)this_ptr[0x10];
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x478))(param_1,(int)this_ptr[0xe]);
    local_58 = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_50 = local_c0;
    local_48 = '\x01';
    FUN_00d8cb40(param_1,&local_60);
    local_40 = local_80;
    local_38 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_38 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x11];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0xa20))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar3 = g_0275e930;
    plVar1 = (int64_t *)this_ptr[0x11];
    if (g_0275e930 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    (**(code **)(*plVar1 + 0xa10))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2 && plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b3ee10
// ============================================================
// Function: FUN_00b3ee10
// Address: 00b3ee10
// Size: 734 bytes
// Class: GNAudioProcessor
// String references:
//   "%@:"

void FUN_00b3ee10(uint64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t local_c0;
  char local_b8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  
  lVar3 = g_0275e938;
  if (g_0275e938 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 0;
  local_98 = '\0';
  (**(code **)(*this_ptr + 0x508))(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0xf] + 0x5d0))();
  plVar4 = local_70;
  if (local_70 == (int64_t *)0x0) {
    bVar2 = true;
    plVar4 = (int64_t *)0x0;
    plVar1 = (int64_t *)this_ptr[0x10];
  }
  else {
    if ((char)local_68 == '\0') {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = false;
    plVar1 = (int64_t *)this_ptr[0x10];
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x478))(param_1,(int)this_ptr[0xe]);
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_60 = local_c0;
    local_58 = '\x01';
    FUN_00d8cb40(param_1,&local_70);
    lVar3 = local_80;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    (**(code **)(*plVar1 + 0x968))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x11];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0xa20))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar3 = g_0275e940;
    plVar1 = (int64_t *)this_ptr[0x11];
    if (g_0275e940 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    (**(code **)(*plVar1 + 0xa10))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d6f8d0();
    (**(code **)(*(int64_t *)this_ptr[0x11] + 0x998))();
  }
  if (!bVar2 && plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b32070
// ============================================================
// Function: FUN_00b32070
// Address: 00b32070
// Size: 672 bytes
// Class: GNAudioProcessor
// String references:
//   "editParameterAtIndex"
//   "vfII@"
//   "Edit %@"

void FUN_00b32070(uint32_t param_1,int param_2)

{
  int64_t *plVar1;
  uint64_t *in_RCX;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t local_b8;
  char local_b0;
  int64_t local_98;
  char local_90;
  void*local_78;
  uint32_t local_70;
  uint32_t local_6c;
  uint64_t local_68;
  uint64_t local_60;
  char local_58;
  uint32_t local_4c;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  local_4c = param_1;
  if (((*in_RCX != 0) && (param_2 != 3)) && (param_2 != 2)) {
    local_34 = (**(code **)(*this_ptr + 0x458))();
    FUN_00d50b00();
    local_60 = *in_RCX;
    local_70 = 4;
    local_6c = local_34;
    local_68 = CONCAT44(param_2,unaff_ESI);
    local_78 = (void*)&g_02532338;
    local_58 = 0;
    local_34 = unaff_ESI;
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    uVar2 = FUN_00db2930("vfII@","editParameterAtIndex",&local_78);
    uVar3 = local_34;
    local_78 = (void*)&g_02532338;
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar2 = FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      uVar2 = FUN_00d50b20();
    }
    uVar3 = (**(code **)(*this_ptr + 0x478))(uVar2,uVar3);
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = local_60 & 0xffffffffffffff00;
    if (local_b8 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = local_b8;
    local_60 = CONCAT71(local_60._1_7_,1);
    FUN_00d8cb40(uVar3,&local_78);
    local_40 = 0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_98;
    FUN_00db3140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &g_024c5048;
    if (((char)local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    unaff_ESI = local_34;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[8];
  if (plVar1 == (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x450))(local_4c);
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x18))(local_4c,unaff_ESI);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00b3ce60
// ============================================================
// Function: FUN_00b3ce60
// Address: 00b3ce60
// Size: 629 bytes
// Class: GNAudioProcessor

void FUN_00b3ce60(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_38;
  char local_30;
  
  if (this_ptr[0x27] == *arg1) {
    return;
  }
  if ((int64_t *)this_ptr[0x28] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d0))();
    FUN_00d50130();
    if (this_ptr[0x28] != 0) {
      this_ptr[0x28] = 0;
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = this_ptr[0x27];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x27] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)*arg1 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x4e0))();
  plVar3 = (int64_t *)this_ptr[0x28];
  plVar4 = plVar3;
  if (plVar3 == local_38) goto LAB_00b3cf70;
  plVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_00b3cf25;
    }
    FUN_00d50b00();
    plVar3 = (int64_t *)this_ptr[0x28];
    this_ptr[0x28] = (int64_t)local_38;
  }
  else {
    local_30 = '\0';
LAB_00b3cf25:
    this_ptr[0x28] = (int64_t)plVar4;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar4 = local_38;
  }
LAB_00b3cf70:
  if ((local_30 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] == 0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00afe870();
    (**(code **)(*plVar4 + 0x18))();
    plVar3 = (int64_t *)this_ptr[0x28];
    if (plVar3 == plVar4) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x28] = (int64_t)plVar4;
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x5c8))();
  }
  FUN_01e53c20();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 == (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4c0))();
  }
  FUN_01e53c20();
  (**(code **)(*local_38 + 0x4d8))();
  (**(code **)(*this_ptr + 0x4e8))(param_2);
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)this_ptr[0x28];
  FUN_00d50b00();
  FUN_01e3f820();
  (**(code **)(*plVar3 + 0x4c8))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b38500
// ============================================================
// Function: FUN_00b38500
// Address: 00b38500
// Size: 549 bytes
// Class: GNAudioProcessor

void FUN_00b38500(double param_1)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint unaff_ESI;
  int64_t this_ptr;
  double dVar9;
  double dVar10;
  
  *(uint *)(this_ptr + 8) = unaff_ESI;
  *(void*)(this_ptr + 0xc) = 0;
  dVar10 = g_023d5b98;
  if (unaff_ESI < 5) {
    dVar10 = *(double *)(&g_023d5bc0 + (int64_t)(int)unaff_ESI * 8);
  }
  dVar10 = g_0238fee8 / dVar10;
  dVar9 = 0.0;
  if (0.0 <= param_1) {
    dVar9 = param_1;
  }
  iVar3 = FUN_00e7d850(dVar9 * dVar10);
  if (unaff_ESI == 2) {
    uVar7 = (short)(iVar3 / 0x1a574) * 0x2aab;
    *(char *)(this_ptr + 0x10) =
         (char)(iVar3 / 0x1a574) + ((char)(uVar7 >> 0x12) - (char)((int)uVar7 >> 0x1f)) * -0x18;
    iVar4 = (iVar3 % 0x1a574) % 0x463e;
    cVar8 = (char)((iVar3 % 0x1a574) / 0x463e);
    if (iVar4 < 0x708) {
      *(char *)(this_ptr + 0x11) = cVar8 * '\n';
      uVar7 = ((uint)((short)iVar4 * -0x7777) >> 0x10) + iVar4;
      cVar8 = (char)((short)uVar7 >> 4) + (char)((uVar7 & 0xffff) >> 0xf);
      *(char *)(this_ptr + 0x12) = cVar8;
      *(char *)(this_ptr + 0x13) = cVar8 * -0x1e + (char)iVar4;
    }
    else {
      uVar7 = iVar4 - 0x708U & 0xffff;
      uVar5 = uVar7 % 0x706;
      *(char *)(this_ptr + 0x11) = (char)(uVar7 / 0x706) + cVar8 * '\n' + '\x01';
      if ((ushort)uVar5 < 0x1c) {
        *(void*)(this_ptr + 0x12) = 0;
        *(char *)(this_ptr + 0x13) = (char)uVar5 + '\x02';
      }
      else {
        uVar7 = (uVar5 - 0x1c & 0xffff) / 0x1e;
        cVar8 = (char)uVar7;
        *(char *)(this_ptr + 0x12) = cVar8 + '\x01';
        *(char *)(this_ptr + 0x13) = (char)uVar5 + (cVar8 * '\x02' - (char)(uVar7 << 5)) + -0x1c;
      }
    }
  }
  else {
    iVar6 = FUN_00e7d850(dVar10);
    *(char *)(this_ptr + 0x13) = (char)(iVar3 % iVar6);
    iVar4 = (int)((int64_t)iVar3 / (int64_t)iVar6);
    iVar2 = iVar4 / 0x3c;
    cVar8 = (char)iVar2;
    *(char *)(this_ptr + 0x12) = (char)((int64_t)iVar3 / (int64_t)iVar6) + cVar8 * -0x3c;
    lVar1 = (int64_t)iVar2 * 0x88888889;
    *(char *)(this_ptr + 0x11) =
         cVar8 + ((char)(uint)((uint64_t)lVar1 >> 0x25) - (char)(lVar1 >> 0x3f)) * -0x3c;
    iVar4 = iVar4 / 0xe10;
    *(char *)(this_ptr + 0x10) =
         (char)iVar4 +
         ((char)((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 2) - (char)(iVar4 >> 0x1f)) * -0x18;
  }
  return;
}



// ============================================================
// 00b30e80
// ============================================================
// Function: FUN_00b30e80
// Address: 00b30e80
// Size: 509 bytes
// Class: GNAudioProcessor

void FUN_00b30e80(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028a4e88;
  if ((g_028a4e88 == (int64_t *)0x0) || (g_028a4e91 == '\0')) {
    FUN_00e8cb50();
    if (g_028a4e88 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028a4e88 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028a4e88 != (int64_t *)0x0;
        g_028a4e88 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028a4e90 == '\0') {
        g_028a4e90 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0275e490;
      if (g_0275e490 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0275e498;
      if (g_0275e498 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0275e4a0;
      if (g_0275e4a0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_0275e4a8;
      if (g_0275e4a8 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028a4e91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a4e91 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028a4e88;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_00b31063;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b31063:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 005fea00
// ============================================================
// Function: FUN_005fea00
// Address: 005fea00
// Size: 3072 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"

void FUN_005fea00(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02531d60;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_005ff740();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_005ff8b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_005ffa20();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_005ffb90();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_005ffd00();
    FUN_00e87980();
  }
  FUN_005ffe70();
  FUN_00600160();
  FUN_00600450();
  FUN_00600740();
  FUN_00600a80();
  FUN_00600dc0();
  this_ptr[0xb] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_006010b0();
    FUN_00e87980();
  }
  FUN_00601220();
  FUN_00601510();
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_00601800();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_00601970();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x75) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_00601ae0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x76) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_00601c50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x77) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_00601dc0();
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_00601f30();
    FUN_00e87980();
  }
  FUN_006020a0();
  this_ptr[0x11] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270babb == '\0') {
    FUN_00602320();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00b37610
// ============================================================
// Function: FUN_00b37610
// Address: 00b37610
// Size: 506 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"

void FUN_00b37610(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar4;
  int64_t *local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  plVar1 = *(int64_t **)(arg1 + 0x90);
  if ((plVar1 == (int64_t *)0x0) || (*(int64_t *)(arg1 + 0x78) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00d50b00();
  local_38 = *(int64_t *)(arg1 + 0x78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  pplVar4 = &local_58;
  (**(code **)(*plVar1 + 0x18))(&local_38,&stack0xffffffffffffffb8);
  plVar1 = local_58;
  if ((g_02723170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_0270ba18 = FUN_00d4fe50();
    g_0270ba00 = "GNAudioProcessor";
    g_0270ba08 = 0x90;
    g_0270ba10 = FUN_00370f50;
    g_0270ba20 = 0;
    ram_000000000270ba28 = 0;
    g_0270ba30 = 0;
    ram_000000000270ba38 = 0;
    g_0270ba40 = 0;
    ram_000000000270ba48 = 0;
    g_0270ba50 = 0;
    ram_000000000270ba58 = 0;
    g_0270ba60 = 0;
    ram_000000000270ba68 = 0;
    g_0270ba70 = 0;
    ram_000000000270ba78 = 0;
    g_0270ba80 = 0;
    ram_000000000270ba88 = 0;
    g_0270ba90 = 0;
    ram_000000000270ba98 = 0;
    g_0270baa0 = 0;
    ram_000000000270baa8 = 0;
    g_0270bab0 = 0;
    ram_000000000270bab8 = 0;
    g_0270bac0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00b376c6;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_00b376c6:
  *(void*)(this_ptr + 1) = 0;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b31a30
// ============================================================
// Function: FUN_00b31a30
// Address: 00b31a30
// Size: 556 bytes
// Class: GNAudioProcessor

void FUN_00b31a30(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_0275e470;
  plVar1 = (int64_t *)*arg1;
  if (g_0275e470 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027637d0;
  if (iVar4 == 0) {
    plVar1 = (int64_t *)*arg1;
    if (g_027637d0 != 0) {
      FUN_00d50b00();
    }
    iVar4 = (**(code **)(*plVar1 + 0x598))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    iVar4 = (uint)(iVar4 == 3) * 3;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = this_ptr[6];
  if (lVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        this_ptr[6] = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = this_ptr[6];
        this_ptr[6] = local_40;
      }
    }
    else {
      local_38 = '\0';
      this_ptr[6] = local_40;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = this_ptr[7];
  if (lVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        this_ptr[7] = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = this_ptr[7];
        this_ptr[7] = local_40;
      }
    }
    else {
      local_38 = '\0';
      this_ptr[7] = local_40;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  if ((cVar3 != '\0') && (iVar5 = (**(code **)(*(int64_t *)*arg1 + 0x428))(), 0 < iVar5)) {
    iVar6 = 0;
    do {
      (**(code **)(*(int64_t *)*arg1 + 0x430))();
      (**(code **)(*this_ptr + 0x450))();
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  if (((iVar4 == 3) && ((**(code **)(*(int64_t *)*arg1 + 0x470))(), local_68 != '\0')) &&
     (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b2fa60
// ============================================================
// Function: FUN_00b2fa60
// Address: 00b2fa60
// Size: 567 bytes
// Class: GNAudioProcessor

void FUN_00b2fa60(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t this_ptr;
  
  lVar2 = g_027c7968;
  plVar1 = (int64_t *)*arg1;
  if (g_027c7968 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))(param_1,2);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50de0();
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x28);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x30);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x38);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
  return;
}



// ============================================================
// 00b31d20
// ============================================================
// Function: FUN_00b31d20
// Address: 00b31d20
// Size: 501 bytes
// Class: GNAudioProcessor

void FUN_00b31d20(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void*arg1;
  int64_t *this_ptr;
  
  lVar2 = g_0275e470;
  plVar1 = (int64_t *)*arg1;
  if (g_0275e470 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*this_ptr + 0x548))();
  plVar1 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x400))();
  }
  else {
    lVar2 = this_ptr[6];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*this_ptr + 0x550))();
  plVar1 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x400))();
  }
  else {
    lVar2 = this_ptr[7];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x558))();
  (**(code **)(*plVar1 + 0x3a8))();
  cVar3 = (**(code **)(*this_ptr + 0x558))();
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*this_ptr + 0x448))();
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        plVar1 = (int64_t *)*arg1;
        (**(code **)(*this_ptr + 0x458))();
        (**(code **)(*plVar1 + 0x3c0))();
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
  }
  return;
}



// ============================================================
// 01689980
// ============================================================
// Function: FUN_01689980
// Address: 01689980
// Size: 526 bytes
// Class: GNAudioProcessor
// String references:
//   "false && \"playback region still in use by playback plug-in extension!\""
//   "false && \"playback region still in use by preview plug-in extension!\""

void FUN_01689980(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t this_ptr;
  int iVar3;
  int local_60;
  int64_t local_50;
  char local_48;
  
  cVar2 = FUN_016be350();
  if (cVar2 != '\0') {
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != 0) {
      local_60 = -1;
      while (local_60 = local_60 + 1, local_60 < *(int *)(lVar1 + 0xc)) {
        FUN_0168e8e0();
        cVar2 = FUN_00d24090();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_016aea20();
          FUN_00e82970();
        }
      }
      FUN_016be7c0();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x60);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar3 = 0;
        do {
          FUN_0168fda0();
          cVar2 = FUN_00d24090();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_016aea20();
            FUN_00e82970();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(lVar1 + 0xc));
      }
      FUN_016be7c0();
    }
  }
  return;
}



// ============================================================
// 00b3ca40
// ============================================================
// Function: FUN_00b3ca40
// Address: 00b3ca40
// Size: 888 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"
//   "GNAudioProcessorView"
//   "setAudioProcessor"
//   "getAudioProcessor"

void FUN_00b3ca40(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028a5078 = "setAudioProcessor";
      g_028a5080 = &g_027566c8;
      g_028a5088 = 0;
      g_028a5090 = &g_0275edb8;
      g_028a5098 = FUN_00b41320;
      g_028a50a0 = 0x919;
      g_028a50a8 = 0;
      ram_00000000028a50b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a50c0 = "getAudioProcessor";
      g_028a50c8 = &g_027566c8;
      g_028a50d0 = 0;
      g_028a50d8 = &g_0275edbb;
      g_028a50e0 = FUN_00b413a0;
      g_028a50e8 = g_023d5de0;
      ram_00000000028a50ec = _UNK_023d5de4;
      ram_00000000028a50f0 = _UNK_023d5de8;
      ram_00000000028a50f4 = _UNK_023d5dec;
      // [STATIC_INIT: property registration]
      g_028a50f8 = g_0270ba00;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 011f03e0
// ============================================================
// Function: FUN_011f03e0
// Address: 011f03e0
// Size: 1534 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"
//   "GNString"
//   "MUAudioEffectRenderer"
//   "getLatency"
//   "getTailDuration"
//   "getHeadDuration"
//   "getTitle"
//   "getProcessor"
//   "getDisplayRenderer"

void FUN_011f03e0(void)

{
  int iVar1;
  
  FUN_0044b870();
  FUN_00e87cb0();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ac100 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ac148 = g_0270ba00;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ac190 = g_0278d920;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00b31190
// ============================================================
// Function: FUN_00b31190
// Address: 00b31190
// Size: 685 bytes
// Class: GNAudioProcessor
// String references:
//   "GNAudioProcessor"
//   "editParameterAtIndex"
//   "editValueForKey"
//   "vfie@"
//   "v@@e@"

void FUN_00b31190(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028a4df8 = "editParameterAtIndex";
      g_028a4e00 = &g_0270ba00;
      g_028a4e08 = 0;
      g_028a4e10 = s_vfie__0275e4b0;
      g_028a4e18 = FUN_00b356b0;
      g_028a4e20 = FUN_00b32070;
      g_028a4e28 = 0;
      ram_00000000028a4e30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a4e40 = "editValueForKey";
      g_028a4e48 = &g_0270ba00;
      g_028a4e50 = 0;
      g_028a4e58 = s_v__e__0275e4b6;
      g_028a4e60 = FUN_00b35740;
      g_028a4e68 = FUN_00b324d0;
      g_028a4e70 = 0;
      ram_00000000028a4e78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00b38c20
// ============================================================
// Function: FUN_00b38c20
// Address: 00b38c20
// Size: 623 bytes
// Class: GNAudioProcessor
// String references:
//   "editParameterAtIndex"
//   "setQ"
//   "setFreq"
//   "setDbGain"
//   "vfie@"

void FUN_00b38c20(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}

