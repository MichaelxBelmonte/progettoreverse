// ===================================================================
// MDEditorScrollView — Complete reconstructed pseudocode
// 39 functions
// ===================================================================

// Registered properties (1):
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


// ============================================================
// 0022ee90
// ============================================================
// Function: FUN_0022ee90
// Address: 0022ee90
// Size: 5656 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0022ee90(void* param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  uint32_t uVar5;
  void *pvVar6;
  void*puVar7;
  char *pcVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t lVar12;
  char *pcVar13;
  void* pVar14;
  int64_t *plVar15;
  int64_t lVar16;
  int iVar17;
  int64_t this_ptr;
  int64_t *plVar18;
  uint7 uVar21;
  void*puVar19;
  void*puVar20;
  uint64_t extraout_XMM0_Qa;
  double dVar22;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  char local_f0;
  undefined7 uStack_ef;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_b0;
  char local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t *local_90;
  void*local_88;
  uint64_t local_80;
  int64_t *local_78;
  int64_t *local_70;
  void*local_68;
  char local_60 [8];
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    if (*(int64_t *)(this_ptr + 0x1c0) != 0) {
      FUN_006f3f00();
      plVar10 = local_58;
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        if (*(int *)(this_ptr + 0x198) == 1) {
          FUN_00226f20();
          plVar10 = local_58;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 == (int64_t *)0x0) {
            bVar1 = false;
            local_90 = (int64_t *)0x0;
            local_88 = (void*)0x0;
            plVar18 = (int64_t *)0x0;
            uVar11 = 0;
            local_78 = (int64_t *)0x0;
          }
          else {
            FUN_00226f20();
            puVar19 = local_68;
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01657380();
            plVar10 = local_58;
            if (local_50 == '\0') {
              if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50 = '\0';
            }
            if ((local_60[0] != '\0') && (puVar19 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
              local_60[0] = '\0';
              local_68 = (void*)0x0;
            }
            else {
              FUN_006f3f00();
            }
            uVar5 = FUN_0078cda0();
            if ((char)uVar5 == '\0') {
              pvVar6 = _pthread_getspecific(param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650330();
            }
            else {
              pvVar6 = _pthread_getspecific(param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650620();
              pvVar6 = _pthread_getspecific(param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016676f0();
            }
            plVar18 = local_58;
            if (local_50 == '\0') {
              if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50 = '\0';
            }
            if ((((char)uVar5 != '\0') && (local_a8 != '\0')) && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
              FUN_00d50b20();
            }
            FUN_004fa310();
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
            FUN_000ba510();
            local_78 = local_58;
            plVar15 = local_58;
            if (local_58 == (int64_t *)0x0) {
              local_78 = (int64_t *)0x0;
              uVar11 = 0;
            }
            else {
              uVar21 = (uint7)(uint3)((uint)uVar5 >> 8);
              if (local_50 == '\0') {
                FUN_00d50b00();
                uVar11 = CONCAT71(uVar21,1);
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                uVar11 = CONCAT71(uVar21,1);
              }
            }
            pvVar6 = _pthread_getspecific((void*)plVar15);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            local_90 = local_58;
            if (local_58 == (int64_t *)0x0) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
              if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (plVar18 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (plVar10 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_88 = (void*)0x0;
            plVar18 = (int64_t *)0x0;
          }
        }
        else {
          plVar10 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          puVar19 = &g_02572358;
          *plVar10 = (int64_t)&g_02572358;
          pcVar2 = g_02572370;
          local_78 = plVar10;
          (*g_02572370)();
          plVar10 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar10 = (int64_t)&g_02572358;
          uVar11 = (*pcVar2)();
          puVar20 = puVar19;
          if (*(int64_t *)(this_ptr + 0xb8) != 0) {
            uVar11 = FUN_004405c0();
            puVar20 = &g_02572358;
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0022f074;
              }
            }
            else if (local_58 != (int64_t *)0x0) {
LAB_0022f074:
              puVar7 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar7 = &g_02572358;
              (*pcVar2)();
              uVar11 = FUN_004b5af0();
              plVar18 = local_58;
              if (local_50 == '\0') {
                if (local_58 != (int64_t *)0x0) {
                  uVar11 = FUN_00d50b00();
                  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  goto LAB_0022f33c;
                }
LAB_0022f563:
                FUN_00d50b20();
                puVar19 = puVar20;
              }
              else {
                puVar20 = puVar19;
                if (local_58 == (int64_t *)0x0) goto LAB_0022f563;
LAB_0022f33c:
                local_50 = '\0';
                local_58 = (int64_t *)0x0;
                local_90 = plVar18;
                local_48 = plVar18;
                local_40 = 0xffffffff;
                local_38 = 0;
                local_40._4_4_ = 0;
                local_88 = puVar7;
                local_70 = plVar10;
                while( true ) {
                  if (local_40._4_4_ != 0) {
                    if (local_40._4_4_ < 1) {
                      iVar17 = -local_40._4_4_;
                    }
                    else {
                      iVar17 = (int)local_40 - local_40._4_4_;
                      local_40 = CONCAT44(local_40._4_4_,iVar17);
                      uVar11 = FUN_00d23690();
                      local_38 = local_38 + local_40._4_4_;
                      iVar17 = 0;
                    }
                    local_40 = CONCAT44(iVar17,(int)local_40);
                  }
                  lVar12 = (int64_t)(int)local_40;
                  iVar17 = (int)local_40 + 1;
                  local_40 = CONCAT44(local_40._4_4_,iVar17);
                  if (*(int *)((int64_t)local_48 + 0xc) <= iVar17) break;
                  local_58 = *(int64_t **)(local_48[2] + 8 + lVar12 * 8);
                  if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
                    local_a8 = '\0';
                    local_b0 = 0;
                  }
                  else {
                    uVar11 = FUN_006f3f00();
                  }
                  local_188 = '\0';
                  local_190 = local_58;
                  uVar11 = FUN_0078bc40(uVar11,&local_190);
                  puVar19 = local_68;
                  local_a0 = local_60[0];
                  pcVar8 = local_60;
                  if (local_60[0] == '\0') {
                    pcVar8 = &local_a0;
                  }
                  *pcVar8 = '\0';
                  if ((local_60[0] != '\0') && (puVar19 != (void*)0x0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  if (puVar19 != (void*)0x0) {
                    iVar17 = FUN_003b7980();
                    if (iVar17 == 1) {
                      local_60[0] = '\0';
                      local_68 = puVar19;
                      uVar11 = FUN_00d21140();
                      if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
                        uVar11 = FUN_00d50b20();
                      }
                    }
                    else {
                      uVar11 = extraout_XMM0_Qa;
                      if (iVar17 == 2) {
                        local_60[0] = '\0';
                        local_68 = puVar19;
                        uVar11 = FUN_00d21140();
                        if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
                          uVar11 = FUN_00d50b20();
                        }
                      }
                    }
                    if (local_a0 != '\0') {
                      uVar11 = FUN_00d50b20();
                    }
                  }
                }
                plVar10 = local_48;
                FUN_00274d30();
                param_1 = (void*)plVar10;
                FUN_00d50b20();
                plVar10 = local_70;
                puVar20 = puVar19;
                if (local_88 != (void*)0x0) goto LAB_0022f563;
              }
              uVar11 = FUN_00d50b20();
              puVar20 = puVar19;
            }
          }
          if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
            local_60[0] = '\0';
            local_68 = (void*)0x0;
          }
          else {
            uVar11 = FUN_006f3f00();
          }
          plVar18 = local_78;
          local_180 = local_78;
          local_178 = '\0';
          FUN_0078c610(uVar11,&local_180);
          plVar15 = local_58;
          if (plVar18 == local_58) {
LAB_0022f6fc:
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (local_78 == (int64_t *)0x0) {
                local_78 = plVar15;
              }
              else {
                local_78 = plVar15;
                FUN_00d50b20();
              }
              goto LAB_0022f6fc;
            }
            if (local_78 != (int64_t *)0x0) {
              local_78 = local_58;
              FUN_00d50b20();
            }
            local_50 = '\0';
            local_78 = plVar15;
          }
          if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
            local_60[0] = '\0';
            local_68 = (void*)0x0;
          }
          else {
            FUN_006f3f00();
          }
          local_168 = '\0';
          local_170 = plVar10;
          FUN_0078c610();
          plVar18 = plVar10;
          if (plVar10 == local_58) {
LAB_0022f7d6:
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar18 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (plVar10 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_0022f7d6;
            }
            if (plVar10 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_50 = '\0';
          }
          if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
            local_50 = '\0';
            local_58 = (int64_t *)0x0;
          }
          else {
            FUN_006f3f00();
          }
          cVar4 = FUN_00751ba0();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            if (local_78 != (int64_t *)0x0) {
              local_50 = '\0';
              local_58 = (int64_t *)0x0;
              local_48 = local_78;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar17 = -local_40._4_4_;
                  }
                  else {
                    iVar17 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar17);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar17 = 0;
                  }
                  local_40 = CONCAT44(iVar17,(int)local_40);
                }
                lVar12 = (int64_t)(int)local_40;
                iVar17 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar17);
                if (*(int *)((int64_t)local_48 + 0xc) <= iVar17) break;
                local_160 = *(int64_t **)(local_48[2] + 8 + lVar12 * 8);
                local_158 = '\0';
                local_58 = local_160;
                FUN_004fa310();
                if ((local_1d8 != '\0') && (local_1e0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              plVar10 = local_48;
              FUN_000be170();
              param_1 = (void*)plVar10;
            }
            if (plVar18 != (int64_t *)0x0) {
              local_50 = '\0';
              local_58 = (int64_t *)0x0;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              local_48 = plVar18;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar17 = -local_40._4_4_;
                  }
                  else {
                    iVar17 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar17);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar17 = 0;
                  }
                  local_40 = CONCAT44(iVar17,(int)local_40);
                }
                lVar12 = (int64_t)(int)local_40;
                iVar17 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar17);
                if (*(int *)((int64_t)local_48 + 0xc) <= iVar17) break;
                local_150 = *(int64_t **)(local_48[2] + 8 + lVar12 * 8);
                local_148 = '\0';
                local_58 = local_150;
                FUN_004fa310();
                if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              plVar10 = local_48;
              FUN_000be170();
              param_1 = (void*)plVar10;
            }
          }
          FUN_006f3f00();
          (**(code **)(*(int64_t *)CONCAT71(uStack_9f,local_a0) + 0x628))();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a1110();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          local_90 = local_58;
          plVar10 = local_58;
          if (local_58 == (int64_t *)0x0) {
            bVar1 = false;
          }
          else if (local_50 == '\0') {
            plVar10 = (int64_t *)FUN_00d50b00();
            bVar1 = true;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              plVar10 = (int64_t *)FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
            bVar1 = true;
          }
          if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
            plVar10 = (int64_t *)FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            plVar10 = (int64_t *)FUN_00d50b20();
          }
          if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
            plVar10 = (int64_t *)FUN_00d50b20();
          }
          local_88 = (void*)CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
          uVar11 = CONCAT71((int7)((uint64_t)puVar20 >> 8),1);
        }
        lVar12 = g_026f6de0;
        local_80 = uVar11;
        local_70 = plVar18;
        if (g_026f6de0 != 0) {
          FUN_00d50b00();
        }
        dVar22 = (double)FUN_00e7d6f0();
        uVar9 = (uint64_t)(dVar22 * g_023907c0);
        dVar22 = dVar22 * g_023907c0 - g_023907c8;
        pVar14 = 0xaaaaaaab;
        FUN_0071a120();
        if (((local_50 == '\0') && (local_58 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        bVar3 = (byte)(((int64_t)dVar22 & (int64_t)uVar9 >> 0x3f | uVar9) / 3);
        local_68 = (void*)lVar12;
        local_60[0] = '\0';
        FUN_000175c0();
        plVar10 = local_58;
        if (local_50 == '\0') {
          if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
             (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = '\0';
        }
        if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 != (int64_t *)0x0) {
          local_50 = '\0';
          local_58 = plVar10;
          bVar3 = FUN_00c70bc0();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
        if (local_78 != (int64_t *)0x0 && (plVar10 != (int64_t *)0x0 & bVar3) == 0) {
          plVar10 = local_70;
          if (local_70 == (int64_t *)0x0) {
            plVar10 = (int64_t *)FUN_00e8fc40();
            FUN_00d4ff40();
            pVar14 = 0x2572358;
            *plVar10 = (int64_t)&g_02572358;
            uVar11 = (*g_02572370)();
            local_88 = (void*)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          }
          local_58 = local_78;
          local_50 = '\0';
          local_70 = plVar10;
          FUN_00d23480();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d216c0();
        }
        plVar10 = *(int64_t **)(this_ptr + 0x90);
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar10 + 0xa00))();
        plVar10 = local_58;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (plVar10 != local_90) {
          plVar10 = *(int64_t **)(this_ptr + 0x90);
          if (plVar10 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_006f3f00();
          (**(code **)(*(int64_t *)CONCAT71(uStack_ef,local_f0) + 0x628))();
          pvVar6 = _pthread_getspecific(pVar14);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a1110();
          pvVar6 = _pthread_getspecific(pVar14);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          local_d0 = local_58;
          local_c8 = 0;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_c8 = '\x01';
          (**(code **)(*plVar10 + 0xa08))();
          if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (CONCAT71(uStack_ef,local_f0) != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_0021f1f0();
        }
        if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
          local_50 = '\0';
          local_58 = (int64_t *)0x0;
        }
        else {
          FUN_006f3f00();
        }
        plVar10 = local_70;
        cVar4 = FUN_0078cda0();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar4 != '\0') && (local_78 != (int64_t *)0x0)) {
          local_50 = '\0';
          local_58 = (int64_t *)0x0;
          local_48 = local_78;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar17 = -local_40._4_4_;
              }
              else {
                iVar17 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar17);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar17 = 0;
              }
              local_40 = CONCAT44(iVar17,(int)local_40);
            }
            lVar12 = (int64_t)(int)local_40;
            iVar17 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar17);
            if (*(int *)((int64_t)local_48 + 0xc) <= iVar17) break;
            lVar16 = local_48[2];
            local_58 = *(int64_t **)(lVar16 + 8 + lVar12 * 8);
            pvVar6 = _pthread_getspecific((void*)lVar16);
            pVar14 = (void*)lVar16;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            iVar17 = *(int *)((int64_t)local_68 + 0xc);
            if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (iVar17 == 1) {
              pvVar6 = _pthread_getspecific(pVar14);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              FUN_00d23310();
              puVar19 = local_68;
              local_f0 = local_60[0];
              pcVar8 = &local_f0;
              pcVar13 = local_60;
              if (local_60[0] == '\0') {
                pcVar13 = pcVar8;
              }
              *pcVar13 = '\0';
              if ((local_60[0] != '\0') && (puVar19 != (void*)0x0)) {
                FUN_00d50b20();
              }
              pVar14 = (void*)pcVar8;
              if ((local_f0 == '\0') && (puVar19 != (void*)0x0)) {
                FUN_00d50b00();
              }
              if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
                FUN_00d50b20();
              }
              pvVar6 = _pthread_getspecific(pVar14);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0126bcd0();
              puVar20 = local_68;
              if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if (puVar20 == (void*)0x0) {
                pvVar6 = _pthread_getspecific(pVar14);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126bf30();
              }
              if (puVar19 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
          }
          FUN_000be170();
          plVar10 = local_70;
        }
        plVar18 = *(int64_t **)(this_ptr + 0x90);
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar18 + 0x988))();
        local_140 = local_78;
        local_138 = '\0';
        cVar4 = (**(code **)(*local_58 + 0x50))();
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (cVar4 == '\0') {
          FUN_002312f0();
        }
        lVar12 = *(int64_t *)(this_ptr + 0x90);
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        FUN_019a47c0();
        local_128 = '\0';
        local_130 = plVar10;
        cVar4 = (**(code **)(*local_58 + 0x50))();
        if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          lVar12 = *(int64_t *)(this_ptr + 0x90);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          local_118 = '\0';
          local_120 = plVar10;
          FUN_019a4000();
          if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
          FUN_00d403d0();
          lVar12 = g_026e0f08;
          if (g_026e0f08 != 0) {
            FUN_00d50b00();
          }
          local_110 = lVar12;
          local_108 = '\x01';
          local_d8 = 0;
          if (this_ptr != 0) {
            FUN_00d50b00();
          }
          local_d8 = '\x01';
          local_100 = 0;
          local_f8 = '\0';
          local_e0 = this_ptr;
          FUN_00d40470(&local_100,&local_e0,1,1);
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((bVar1) && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_88 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
        if (((char)local_80 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0022ef95;
      }
    }
  }
  uVar9 = 0;
LAB_0022ef95:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 00258910
// ============================================================
// Function: FUN_00258910
// Address: 00258910
// Size: 4361 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_00258910(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t this_ptr;
  bool bVar14;
  uint64_t uVar15;
  int local_7c;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  char local_60 [8];
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  int64_t *local_38;
  
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar13 = local_40;
    local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
    pplVar11 = &local_58;
    if ((char)local_38 != '\0') {
      pplVar11 = &local_38;
    }
    *(void*)pplVar11 = 0;
    if (((char)local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 == (int64_t *)0x0) {
      plVar13 = *(int64_t **)(this_ptr + 0x90);
      if (plVar13 != (int64_t *)0x0) goto LAB_00258991;
    }
    else {
      if ((char)local_58 == '\0') {
LAB_00258991:
        FUN_00d50b00();
      }
      if (plVar13 != (int64_t *)0x0) {
        plVar13 = *(int64_t **)(this_ptr + 0x90);
        if (plVar13 == (int64_t *)0x0) {
LAB_00258a17:
          plVar10 = (int64_t *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar13))();
          plVar10 = local_40;
          local_70 = (char)local_38;
          pplVar11 = (int64_t **)&local_70;
          if ((char)local_38 != '\0') {
            pplVar11 = &local_38;
          }
          *(char *)pplVar11 = '\0';
          if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 == (int64_t *)0x0) {
            plVar10 = *(int64_t **)(this_ptr + 0x90);
            if (plVar10 == (int64_t *)0x0) goto LAB_00258a17;
          }
          else if (local_70 != '\0') goto LAB_00258a1a;
          FUN_00d50b00();
        }
LAB_00258a1a:
        FUN_019f0ee0();
        plVar1 = local_58;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((plVar13 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (plVar1 != (int64_t *)0x0) {
          plVar13 = *(int64_t **)(this_ptr + 0x90);
          (**(code **)(&UNK_00001550 + *plVar13))();
          plVar10 = local_40;
          pplVar11 = &local_58;
          if ((char)local_38 != '\0') {
            pplVar11 = &local_38;
          }
          local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
          *(void*)pplVar11 = 0;
          if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 == (int64_t *)0x0) {
            plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_00258ac2:
            FUN_00d50b00();
          }
          else if ((char)local_58 == '\0') goto LAB_00258ac2;
          (**(code **)(*plVar10 + 0xec0))();
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar13 = *(int64_t **)(this_ptr + 0x90);
          if (plVar13 == (int64_t *)0x0) {
LAB_00258b6a:
            plVar10 = (int64_t *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_40;
            local_70 = (char)local_38;
            pplVar11 = (int64_t **)&local_70;
            if ((char)local_38 != '\0') {
              pplVar11 = &local_38;
            }
            *(char *)pplVar11 = '\0';
            if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (int64_t *)0x0) {
              plVar10 = *(int64_t **)(this_ptr + 0x90);
              if (plVar10 == (int64_t *)0x0) goto LAB_00258b6a;
            }
            else if (local_70 != '\0') goto LAB_00258b6d;
            FUN_00d50b00();
          }
LAB_00258b6d:
          FUN_019f0f90();
          plVar1 = *(int64_t **)(this_ptr + 0x90);
          if (plVar1 == (int64_t *)0x0) {
LAB_00258bf3:
            plVar12 = (int64_t *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar1))();
            plVar12 = local_40;
            pplVar11 = &local_38;
            if ((char)local_38 == '\0') {
              pplVar11 = (int64_t **)local_60;
            }
            local_60[0] = (char)local_38;
            *(char *)pplVar11 = '\0';
            if (((char)local_38 != '\0') && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 == (int64_t *)0x0) {
              plVar12 = *(int64_t **)(this_ptr + 0x90);
              if (plVar12 == (int64_t *)0x0) goto LAB_00258bf3;
            }
            else if (local_60[0] != '\0') goto LAB_00258bf6;
            FUN_00d50b00();
          }
LAB_00258bf6:
          FUN_019f0ee0();
          lVar2 = CONCAT71(uStack_6f,local_70);
          if (local_68 == '\0') {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_01e26eb0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((plVar1 != (int64_t *)0x0) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar13 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
            (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
            plVar13 = local_40;
            if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar10 = g_026f6f08;
            if (plVar13 != (int64_t *)0x0) {
              if (g_026f6f08 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00e7d6f0();
              pVar9 = 0xaaaaaaab;
              uVar15 = FUN_0071a120();
              if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                  (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
              local_58 = plVar10;
              local_50 = '\0';
              FUN_000175c0(uVar15,&local_58);
              plVar13 = local_40;
              if ((char)local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
                   (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38._0_1_ = '\0';
              }
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 != (int64_t *)0x0) {
                local_38._0_1_ = '\0';
                local_40 = plVar13;
                uVar6 = FUN_00c70bc0();
                plVar12 = (int64_t *)(uint64_t)uVar6;
                if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if ((plVar13 != (int64_t *)0x0 & (byte)plVar12) == 0) {
                (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
                (**(code **)(&UNK_00001668 + *local_58))();
                pvVar8 = _pthread_getspecific(pVar9);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar7 = FUN_01326de0();
                bVar14 = iVar7 == 3;
                if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar14 = false;
              }
              if (plVar10 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (!bVar14) goto LAB_00258f18;
              local_38._0_1_ = '\0';
              local_40 = (int64_t *)0x0;
              local_58 = (int64_t *)0x0;
              local_50 = '\0';
              FUN_00228b40(&local_58,&local_40);
            }
          }
          FUN_0022ee90();
        }
      }
    }
  }
LAB_00258f18:
  if ((*(int64_t *)(this_ptr + 0x160) != 0) &&
     (FUN_00d50130(), *(int64_t *)(this_ptr + 0x160) != 0)) {
    *(void*)(this_ptr + 0x160) = 0;
    FUN_00d50b20();
  }
  plVar13 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar10 = local_40;
  local_70 = (char)local_38;
  pplVar11 = (int64_t **)&local_70;
  if ((char)local_38 != '\0') {
    pplVar11 = &local_38;
  }
  *(void*)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_00258fa6:
    FUN_00d50b00();
  }
  else if (local_70 == '\0') goto LAB_00258fa6;
  pplVar11 = &local_58;
  (**(code **)(*plVar10 + 0x970))();
  plVar10 = local_58;
  if ((g_02709e70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_026f8cd8 = FUN_00074a70();
    g_026f8cc0 = "MDEditorScrollView";
    g_026f8cc8 = 0x260;
    g_026f8cd0 = FUN_000749b0;
    g_026f8ce0 = 0;
    ram_00000000026f8ce8 = 0;
    g_026f8cf0 = 0;
    g_026f8d68 = 0;
    ram_00000000026f8d70 = 0;
    g_026f8d78 = 0;
    g_026f8d7a = 1;
    g_026f8cf8 = 0;
    ram_00000000026f8d00 = 0;
    g_026f8d08 = 0;
    ram_00000000026f8d10 = 0;
    g_026f8d18 = 0;
    ram_00000000026f8d20 = 0;
    g_026f8d28 = 0;
    ram_00000000026f8d30 = 0;
    g_026f8d38 = 0;
    ram_00000000026f8d40 = 0;
    g_026f8d48 = 0;
    ram_00000000026f8d50 = 0;
    g_026f8d58 = 0;
    ram_00000000026f8d60 = 0;
    g_026f8d83 = 0;
    g_026f8d7b = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_00258ff8:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00258ff8;
  }
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar13 = g_026f6df0;
  if (plVar1 == (int64_t *)0x0) goto LAB_00259349;
  if (g_026f6df0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar15 = FUN_0071a120();
  if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  local_58 = plVar13;
  local_50 = '\0';
  FUN_000175c0(uVar15,&local_58);
  plVar10 = local_40;
  if ((char)local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38._0_1_ = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    local_7c = 0;
  }
  else {
    local_38._0_1_ = '\0';
    local_40 = plVar10;
    local_7c = FUN_00c716c0();
    if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00504770();
  plVar10 = plVar13;
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) goto LAB_00259349;
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar13 = local_40;
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  *(void*)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 == (int64_t *)0x0) {
    plVar13 = *(int64_t **)(this_ptr + 0x90);
    if (plVar13 == (int64_t *)0x0) goto LAB_00259349;
LAB_0025920a:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_0025920a;
  if (plVar13 == (int64_t *)0x0) goto LAB_00259349;
  plVar13 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar12 = local_40;
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  *(void*)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (int64_t *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x90);
LAB_0025927c:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_0025927c;
  iVar7 = (**(code **)(&g_000015c0 + *plVar12))();
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (iVar7 <= local_7c) goto LAB_00259349;
  plVar13 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar12 = local_40;
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
  *(void*)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (int64_t *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x90);
LAB_00259325:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_00259325;
  (**(code **)(&g_000015b8 + *plVar12))();
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00259349:
  plVar13 = (int64_t *)0x0;
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar13 = *(int64_t **)(this_ptr + 0x90);
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar12 = g_02709e30;
    if (g_02709e30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    plVar10 = local_40;
    if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar12;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar3 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar3;
      FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    (**(code **)(&g_000015c8 + *plVar13))();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar13 = *(int64_t **)(this_ptr + 0x90);
  }
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar13 = local_40;
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar12 = g_02709e30;
    plVar13 = (int64_t *)CONCAT71(uStack_6f,local_70);
    if (g_02709e30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    plVar10 = local_40;
    if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar12;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar3 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar3;
      FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    (**(code **)(&g_000015c8 + *plVar13))();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
  }
  bVar5 = (byte)plVar10;
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar13 = local_40;
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = g_026f6ea0;
  if (plVar13 != (int64_t *)0x0) {
    if (g_026f6ea0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar10;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar13 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (int64_t *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar13;
      bVar5 = FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((plVar13 != (int64_t *)0x0 & bVar5) == 0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_019f7880();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_00212950();
      FUN_019f78b0();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_00212a20();
      FUN_019f7a40();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_00212b00();
      FUN_019f7880();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002323f0
// ============================================================
// Function: FUN_002323f0
// Address: 002323f0
// Size: 4263 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002323f0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    return;
  }
  pplVar8 = &local_48;
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x970))();
  plVar2 = local_48;
  if ((g_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026f8cd8 = FUN_00074a70();
    g_026f8cc0 = "MDEditorScrollView";
    g_026f8cc8 = 0x260;
    g_026f8cd0 = FUN_000749b0;
    g_026f8ce0 = 0;
    ram_00000000026f8ce8 = 0;
    g_026f8cf0 = 0;
    g_026f8d68 = 0;
    ram_00000000026f8d70 = 0;
    g_026f8d78 = 0;
    g_026f8d7a = 1;
    g_026f8cf8 = 0;
    ram_00000000026f8d00 = 0;
    g_026f8d08 = 0;
    ram_00000000026f8d10 = 0;
    g_026f8d18 = 0;
    ram_00000000026f8d20 = 0;
    g_026f8d28 = 0;
    ram_00000000026f8d30 = 0;
    g_026f8d38 = 0;
    ram_00000000026f8d40 = 0;
    g_026f8d48 = 0;
    ram_00000000026f8d50 = 0;
    g_026f8d58 = 0;
    ram_00000000026f8d60 = 0;
    g_026f8d83 = 0;
    g_026f8d7b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_0023245e:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0023245e;
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    (**(code **)(&UNK_00001678 + **(int64_t **)(this_ptr + 0x90)))();
  }
  else {
    FUN_00d50b00();
    FUN_005067d0();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_0197c7a0();
    (**(code **)(*plVar2 + 0x948))();
    (**(code **)(&UNK_00001678 + **(int64_t **)(this_ptr + 0x90)))();
    lVar4 = g_026f6df0;
    if (g_026f6df0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar10 = FUN_0071a120();
    if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_58 = lVar4;
    local_50 = '\0';
    FUN_000175c0(uVar10,&local_58);
    plVar1 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      local_40[0] = '\0';
      local_48 = plVar1;
      FUN_00c716c0();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00504770();
  }
  FUN_00233e40();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00233e40();
    (**(code **)(*local_48 + 0x918))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = *(int64_t **)(this_ptr + 0x90);
  plVar1 = (int64_t *)(*(int64_t *)(this_ptr + 0xc0) + 0x10);
  if (*(int64_t *)(this_ptr + 0xc0) == 0) {
    plVar1 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar3 + 0x18))();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0xef0))();
  (**(code **)(&UNK_00001488 + **(int64_t **)(this_ptr + 0x90)))(g_02390124);
  plVar1 = (int64_t *)(this_ptr + 0x90);
  plVar3 = *(int64_t **)(this_ptr + 0x90);
  if (plVar3 == (int64_t *)0x0) {
LAB_002327f1:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6df8;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_002327f1;
    }
    else {
      lVar4 = g_026f6df8;
      if ((char)local_58 != '\0') goto joined_r0x002327fe;
    }
    FUN_00d50b00();
    lVar4 = g_026f6df8;
  }
joined_r0x002327fe:
  g_026f6df8 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00233fe0();
  (**(code **)(&UNK_00001578 + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_002328c7:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e00;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_002328c7;
    }
    else {
      lVar4 = g_026f6e00;
      if ((char)local_58 != '\0') goto joined_r0x002328d4;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e00;
  }
joined_r0x002328d4:
  g_026f6e00 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" + *plVar9))()
  ;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_0023299e:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e08;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_0023299e;
    }
    else {
      lVar4 = g_026f6e08;
      if ((char)local_58 != '\0') goto joined_r0x002329ab;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e08;
  }
joined_r0x002329ab:
  g_026f6e08 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" + *plVar9 + 0x20)
  )();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232a75:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e10;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232a75;
    }
    else {
      lVar4 = g_026f6e10;
      if ((char)local_58 != '\0') goto joined_r0x00232a82;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e10;
  }
joined_r0x00232a82:
  g_026f6e10 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *plVar9 + 0x48))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232b4c:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e18;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232b4c;
    }
    else {
      lVar4 = g_026f6e18;
      if ((char)local_58 != '\0') goto joined_r0x00232b59;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e18;
  }
joined_r0x00232b59:
  g_026f6e18 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019f77f0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232c24:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e20;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232c24;
    }
    else {
      lVar4 = g_026f6e20;
      if ((char)local_58 != '\0') goto joined_r0x00232c31;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e20;
  }
joined_r0x00232c31:
  g_026f6e20 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019f7820();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232cf0:
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232cf0;
    }
    else if ((char)local_58 != '\0') goto LAB_00232cf2;
    FUN_00d50b00();
  }
LAB_00232cf2:
  FUN_019f7850();
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232d87:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e28;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232d87;
    }
    else {
      lVar4 = g_026f6e28;
      if ((char)local_58 != '\0') goto joined_r0x00232d94;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e28;
  }
joined_r0x00232d94:
  g_026f6e28 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)((int64_t)&dylib_command_00001288.dylib.name.offset + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar10 = FUN_00d6f370();
  lVar4 = g_026f6e30;
  if (g_026f6e30 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,1);
  FUN_002342a0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232ecf:
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232ecf;
    }
    else if ((char)local_58 != '\0') goto LAB_00232ed2;
    FUN_00d50b00();
  }
LAB_00232ed2:
  uVar10 = FUN_00d6f370();
  lVar4 = g_026f6e38;
  if (g_026f6e38 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,0);
  (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" + *plVar9 + 0x10)
  )();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232fc9:
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232fc9;
    }
    else if ((char)local_58 != '\0') goto LAB_00232fcc;
    FUN_00d50b00();
  }
LAB_00232fcc:
  uVar10 = FUN_00d6f370();
  lVar4 = g_026f6e40;
  if (g_026f6e40 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,0);
  FUN_019f1a10();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_002330d7:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_02709e30;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_002330d7;
    }
    else {
      lVar4 = g_02709e30;
      if ((char)local_58 != '\0') goto joined_r0x002330eb;
    }
    FUN_00d50b00();
    lVar4 = g_02709e30;
  }
joined_r0x002330eb:
  g_02709e30 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar10 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = lVar4;
  FUN_000175c0(uVar10,&local_58);
  plVar7 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    local_40[0] = '\0';
    local_48 = plVar7;
    FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  (**(code **)(&g_000015c8 + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_002332c2:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e50;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = (int64_t *)local_40;
    if (local_40[0] == '\0') {
      plVar7 = &local_58;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_002332c2;
    }
    else {
      lVar4 = g_026f6e50;
      if ((char)local_58 != '\0') goto joined_r0x002332cf;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e50;
  }
joined_r0x002332cf:
  g_026f6e50 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019ef470();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_00d6f370();
  lVar4 = g_026f6e58;
  if (g_026f6e58 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,1);
  FUN_002342a0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0021e5f0();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002600f0
// ============================================================
// Function: FUN_002600f0
// Address: 002600f0
// Size: 3549 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002600f0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  byte bVar7;
  uint64_t uVar8;
  char *pcVar9;
  int64_t lVar10;
  void *pvVar11;
  void* pVar12;
  int iVar13;
  int64_t *plVar14;
  int64_t this_ptr;
  int64_t *plVar15;
  int64_t *plVar16;
  double dVar17;
  int64_t *local_98;
  int64_t *local_88;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_38 [8];
  
  plVar5 = local_80;
  if (*(int *)(this_ptr + 0x198) != 0) {
    return;
  }
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_002601ea:
    local_88 = (int64_t *)0x0;
LAB_002601f8:
    bVar2 = true;
    local_98 = (int64_t *)0x0;
LAB_00260201:
    bVar7 = 1;
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      plVar16 = (int64_t *)0x0;
      bVar1 = true;
      plVar15 = (int64_t *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      local_38[0] = local_78[0];
      pcVar9 = local_78;
      if (local_78[0] == '\0') {
        pcVar9 = local_38;
      }
      *pcVar9 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_80 == (int64_t *)0x0) {
        plVar16 = *(int64_t **)(this_ptr + 0x90);
        if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) goto LAB_00260284;
        plVar16 = (int64_t *)0x0;
      }
      else {
        plVar16 = local_80;
        if (local_38[0] == '\0') {
LAB_00260284:
          FUN_00d50b00();
        }
        if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
          (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
          pcVar9 = local_78;
          if (local_78[0] == '\0') {
            pcVar9 = local_38;
          }
          local_38[0] = local_78[0];
          *pcVar9 = '\0';
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_80 == (int64_t *)0x0) {
            plVar15 = *(int64_t **)(this_ptr + 0x90);
            if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) goto LAB_0026039c;
            plVar15 = (int64_t *)0x0;
          }
          else {
            plVar15 = local_80;
            if (local_38[0] == '\0') {
LAB_0026039c:
              FUN_00d50b00();
            }
          }
          bVar1 = false;
          bVar7 = 0;
          goto LAB_002603f5;
        }
      }
      bVar1 = false;
      plVar15 = (int64_t *)0x0;
    }
LAB_002603f5:
    FUN_01e436c0();
    (**(code **)(*plVar16 + 0xb38))();
    local_48 = local_58;
    if (local_98 == local_58) {
      local_48 = local_88;
      local_88 = local_58;
LAB_0026047c:
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        local_88 = local_58;
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        goto LAB_0026047c;
      }
      local_88 = local_58;
      if (!bVar2) {
        FUN_00d50b20();
      }
      local_50 = '\0';
    }
    if (!(bool)(bVar7 | plVar15 == (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1 && plVar16 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    bVar2 = false;
    if (local_48 == (int64_t *)0x0) goto LAB_002604d7;
LAB_002604c9:
    if (*(int *)((int64_t)local_48 + 0xc) == 0) goto LAB_002604d7;
    bVar1 = false;
LAB_002605cc:
    if (*(int *)((int64_t)local_48 + 0xc) == 0) {
      bVar4 = false;
      bVar3 = false;
      plVar15 = g_026f6de0;
      goto joined_r0x002605e6;
    }
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    local_38[0] = local_78[0];
    pcVar9 = local_78;
    if (local_78[0] == '\0') {
      pcVar9 = local_38;
    }
    *pcVar9 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (int64_t *)0x0) {
      plVar15 = *(int64_t **)(this_ptr + 0x90);
      if (plVar15 != (int64_t *)0x0) goto LAB_002601dd;
      goto LAB_002601ea;
    }
    plVar15 = local_80;
    if (local_38[0] == '\0') {
LAB_002601dd:
      FUN_00d50b00();
    }
    if (plVar15 == (int64_t *)0x0) goto LAB_002601ea;
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    pcVar9 = local_78;
    if (local_78[0] == '\0') {
      pcVar9 = local_38;
    }
    local_38[0] = local_78[0];
    *pcVar9 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (int64_t *)0x0) {
      plVar15 = *(int64_t **)(this_ptr + 0x90);
LAB_002602f6:
      FUN_00d50b00();
    }
    else {
      plVar15 = local_80;
      if (local_38[0] == '\0') goto LAB_002602f6;
    }
    (**(code **)(*plVar15 + 0xe20))();
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        local_88 = (int64_t *)0x0;
      }
      else {
        local_88 = local_58;
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_88 = local_58;
      local_50 = '\0';
    }
    FUN_00d50b20();
    FUN_00d50b20();
    local_98 = local_88;
    bVar2 = true;
    if (local_88 == (int64_t *)0x0) goto LAB_002601f8;
    if (*(int *)((int64_t)local_88 + 0xc) == 0) {
      bVar2 = false;
      goto LAB_00260201;
    }
    local_48 = local_88;
    if (local_88 != (int64_t *)0x0) goto LAB_002604c9;
LAB_002604d7:
    plVar15 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar15))();
    local_88 = (int64_t *)CONCAT71((int7)((uint64_t)local_88 >> 8),local_78[0]);
    pcVar9 = local_38;
    if (local_78[0] != '\0') {
      pcVar9 = local_78;
    }
    local_38[0] = local_78[0];
    *pcVar9 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (int64_t *)0x0) {
      plVar16 = *(int64_t **)(this_ptr + 0x90);
LAB_00260538:
      FUN_00d50b00();
    }
    else {
      plVar16 = local_80;
      if (local_38[0] == '\0') goto LAB_00260538;
    }
    (**(code **)(*plVar16 + 0x9e0))();
    plVar16 = local_58;
    if (local_58 == local_48) {
LAB_002605a1:
      if (local_50 != '\0') {
LAB_002605a7:
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (local_48 != (int64_t *)0x0) {
          local_48 = plVar16;
          FUN_00d50b20();
          goto LAB_002605a1;
        }
        local_48 = plVar16;
        if (local_50 == '\0') goto LAB_002605b5;
        goto LAB_002605a7;
      }
      if (local_48 != (int64_t *)0x0) {
        local_48 = local_58;
        FUN_00d50b20();
      }
      local_50 = '\0';
      local_48 = plVar16;
    }
LAB_002605b5:
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    bVar1 = true;
    if (local_48 != (int64_t *)0x0) goto LAB_002605cc;
    local_48 = (int64_t *)0x0;
    bVar4 = true;
    bVar3 = true;
    plVar15 = g_026f6de0;
joined_r0x002605e6:
    g_026f6de0 = plVar15;
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b00();
      bVar3 = bVar4;
    }
    dVar17 = (double)FUN_00e7d6f0();
    uVar8 = (uint64_t)(dVar17 * g_023907c0);
    dVar17 = dVar17 * g_023907c0 - g_023907c8;
    local_88 = (int64_t *)0xaaaaaaaaaaaaaaab;
    FUN_0071a120();
    if ((((local_78[0] == '\0') && (local_80 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar7 = (byte)(((int64_t)dVar17 & (int64_t)uVar8 >> 0x3f | uVar8) / 3);
    local_50 = '\0';
    local_58 = plVar15;
    FUN_000175c0();
    if (local_78[0] == '\0') {
      if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
         (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (int64_t *)0x0) {
      local_78[0] = '\0';
      bVar7 = FUN_00c70bc0();
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar15 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_80 != (int64_t *)0x0 & bVar7) == 0) {
      bVar7 = 1;
      if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
        plVar16 = (int64_t *)0x0;
        bVar1 = true;
        plVar15 = (int64_t *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
        local_38[0] = local_78[0];
        pcVar9 = local_78;
        if (local_78[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_80 == (int64_t *)0x0) {
          plVar16 = *(int64_t **)(this_ptr + 0x90);
          if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) goto LAB_002607c6;
          plVar16 = (int64_t *)0x0;
        }
        else {
          plVar16 = local_80;
          if (local_38[0] == '\0') {
LAB_002607c6:
            FUN_00d50b00();
          }
          if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
            (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
            pcVar9 = local_78;
            if (local_78[0] == '\0') {
              pcVar9 = local_38;
            }
            local_38[0] = local_78[0];
            *pcVar9 = '\0';
            if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_80 == (int64_t *)0x0) {
              plVar15 = *(int64_t **)(this_ptr + 0x90);
              if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) goto LAB_00260841;
              plVar15 = (int64_t *)0x0;
            }
            else {
              plVar15 = local_80;
              if (local_38[0] == '\0') {
LAB_00260841:
                FUN_00d50b00();
              }
            }
            bVar1 = false;
            bVar7 = 0;
            goto LAB_00260864;
          }
        }
        bVar1 = false;
        plVar15 = (int64_t *)0x0;
      }
LAB_00260864:
      FUN_01e436c0();
      (**(code **)(*plVar16 + 0xb40))();
      plVar6 = local_58;
      plVar14 = local_48;
      if (local_58 == local_48) {
LAB_002608cd:
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar14 = plVar6;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (!bVar3) {
            local_48 = plVar6;
            FUN_00d50b20();
          }
          goto LAB_002608cd;
        }
        if (!bVar3) {
          local_48 = local_58;
          FUN_00d50b20();
        }
        local_50 = '\0';
      }
      if (!(bool)(bVar7 | plVar15 == (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar1 && plVar16 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((plVar14 == (int64_t *)0x0) || (*(int *)((int64_t)plVar14 + 0xc) == 0)) {
        plVar15 = *(int64_t **)(this_ptr + 0x90);
        (**(code **)(&UNK_00001550 + *plVar15))();
        pcVar9 = local_38;
        if (local_78[0] != '\0') {
          pcVar9 = local_78;
        }
        local_38[0] = local_78[0];
        *pcVar9 = '\0';
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_80 == (int64_t *)0x0) {
          plVar16 = *(int64_t **)(this_ptr + 0x90);
LAB_0026097f:
          FUN_00d50b00();
        }
        else {
          plVar16 = local_80;
          if (local_38[0] == '\0') goto LAB_0026097f;
        }
        (**(code **)(*plVar16 + 0x9d0))();
        local_48 = local_58;
        local_88 = local_58;
        plVar16 = plVar14;
        if (local_58 == plVar14) {
LAB_002609ee:
          local_48 = plVar16;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            plVar16 = local_48;
            if (plVar14 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar16 = local_48;
            }
            goto LAB_002609ee;
          }
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_50 = '\0';
        }
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        bVar1 = true;
      }
      else {
        bVar1 = false;
        local_48 = plVar14;
      }
    }
  }
  FUN_012e74e0();
  if (local_78[0] == '\0') {
    if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
       (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78[0] = '\0';
  }
  if (((bVar2) && (local_80 != (int64_t *)0x0)) &&
     ((1 < *(int *)((int64_t)local_80 + 0xc) && (*(int64_t *)(this_ptr + 0x1b0) != 0)))) {
    *(void*)(this_ptr + 0x1b0) = 0;
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar10 = *(int64_t *)(this_ptr + 0x1b0), lVar10 != 0)) {
    if (local_80 != (int64_t *)0x0) {
      local_78[0] = '\0';
      local_80 = (int64_t *)0x0;
      local_70 = plVar5;
      local_68 = 0xffffffff;
      local_60 = 0;
      while( true ) {
        lVar10 = (int64_t)(int)local_68;
        iVar13 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar13);
        if (*(int *)((int64_t)local_70 + 0xc) <= iVar13) break;
        local_88 = (int64_t *)local_70[2];
        local_80 = (int64_t *)local_88[lVar10 + 1];
        pvVar11 = _pthread_getspecific((void*)local_88);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f51f0();
        plVar16 = local_58;
        plVar15 = *(int64_t **)(this_ptr + 0x1b0);
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 == plVar15) {
          FUN_000be170();
          goto joined_r0x00260ca7;
        }
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar13 = -local_68._4_4_;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar13 = 0;
          }
          local_68 = CONCAT44(iVar13,(int)local_68);
        }
      }
      FUN_000be170();
      lVar10 = *(int64_t *)(this_ptr + 0x1b0);
      local_88 = local_70;
    }
    if (lVar10 != 0) {
      *(void*)(this_ptr + 0x1b0) = 0;
      FUN_00d50b20();
    }
  }
joined_r0x00260ca7:
  if ((plVar5 == (int64_t *)0x0) || (*(int *)((int64_t)plVar5 + 0xc) != 1)) {
    lVar10 = *(int64_t *)(this_ptr + 0x1b0);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_00228980();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) goto LAB_00260eb0;
  }
  else {
    if (bVar2) {
      FUN_00d23310();
      local_88 = (int64_t *)CONCAT71((int7)((uint64_t)local_88 >> 8),local_78[0]);
      pcVar9 = local_38;
      if (local_78[0] != '\0') {
        pcVar9 = local_78;
      }
      local_38[0] = local_78[0];
      *pcVar9 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar11 = _pthread_getspecific((void*)local_88);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      plVar5 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_00260d27;
        }
        if (*(int64_t *)(this_ptr + 0x1b0) != 0) {
          *(void*)(this_ptr + 0x1b0) = 0;
          goto LAB_00260d78;
        }
      }
      else {
        local_50 = '\0';
LAB_00260d27:
        plVar15 = *(int64_t **)(this_ptr + 0x1b0);
        if (plVar15 != plVar5) {
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *(int64_t **)(this_ptr + 0x1b0) = plVar5;
          if (plVar15 != (int64_t *)0x0) {
LAB_00260d78:
            FUN_00d50b20();
          }
        }
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d23310();
    pVar12 = (void*)CONCAT71((int7)((uint64_t)local_88 >> 8),local_78[0]);
    pcVar9 = local_38;
    if (local_78[0] != '\0') {
      pcVar9 = local_78;
    }
    local_38[0] = local_78[0];
    *pcVar9 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar11 = _pthread_getspecific(pVar12);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f51f0();
    plVar5 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00228980();
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00260eb0:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004f3eb0
// ============================================================
// Function: FUN_004f3eb0
// Address: 004f3eb0
// Size: 3281 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_004f3eb0(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  int64_t this_ptr;
  int64_t *plVar13;
  int64_t **pplVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint32_t uVar18;
  uint32_t uVar19;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  uint64_t uStack_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  uint64_t uStack_40;
  
  uVar19 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar18 = (uint32_t)param_2;
  pplVar14 = &local_80;
  FUN_00d3ecf0();
  plVar11 = local_80;
  FUN_000823a0();
  if (plVar11 == (int64_t *)0x0) {
LAB_004f3f05:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_004f3f05;
  }
  plVar11 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar14 + 1) = 0;
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar11;
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
    uVar12 = 0;
    goto LAB_004f4b5f;
  }
  FUN_00d50b00();
  FUN_002218b0();
  plVar11 = local_80;
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_004f3fd9:
    uVar12 = 0;
  }
  else {
    FUN_002218b0();
    cVar5 = FUN_00751ba0();
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_004f3fd9;
    FUN_00226f20();
    pVar9 = (void*)param_1;
    local_58 = local_80;
    if (local_78[0] == '\0') {
      if (local_80 == (int64_t *)0x0) goto LAB_004f4012;
      FUN_00d50b00();
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_80 == (int64_t *)0x0) {
LAB_004f4012:
      FUN_00261550();
      plVar11 = local_80;
      pVar9 = (void*)param_1;
      if (local_78[0] == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_004f4057;
        }
      }
      else if (local_80 != (int64_t *)0x0) {
LAB_004f4057:
        pVar9 = (void*)param_1;
        plVar13 = local_58;
        if (*(int *)((int64_t)plVar11 + 0xc) == 1) {
          FUN_00d23310();
          plVar11 = local_80;
          pVar9 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_78[0]);
          pplVar14 = &local_90;
          if (local_78[0] != '\0') {
            pplVar14 = (int64_t **)local_78;
          }
          local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_78[0]);
          *(char *)pplVar14 = '\0';
          if ((local_78[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar13 = local_58;
          if ((plVar11 != (int64_t *)0x0) && (plVar13 = plVar11, (char)local_90 == '\0')) {
            FUN_00d50b00();
          }
        }
        local_58 = plVar13;
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x10) == 0) {
LAB_004f4163:
      uVar12 = 0;
    }
    else {
      FUN_0021a630();
      local_98 = local_80;
      plVar11 = local_80;
      if (local_78[0] == '\0') {
        if (local_80 == (int64_t *)0x0) goto LAB_004f4163;
        FUN_00d50b00();
        plVar11 = local_98;
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar12 = 0;
      if ((plVar11 != (int64_t *)0x0) && (local_58 != (int64_t *)0x0)) {
        pvVar7 = _pthread_getspecific(pVar9);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar9 = (void*)local_58;
        }
        FUN_0165a070();
        plVar11 = local_80;
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_b0 != plVar11) {
          pvVar7 = _pthread_getspecific(pVar9);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar9 = (void*)local_58;
          }
          FUN_0165a070();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          plVar11 = local_80;
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_b0 != plVar11) {
            uVar12 = 0;
            goto LAB_004f4b38;
          }
        }
        FUN_0021a630();
        plVar11 = local_98;
        local_a8 = (int64_t *)(**(code **)(*local_80 + 0xa50))();
        local_50 = (int64_t *)CONCAT44(uVar19,uVar18);
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar11 + 0x9b8))(local_a8,(int)local_50);
        local_c0 = local_90;
        local_b8 = 0;
        if (local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_b8 = '\x01';
        FUN_00243390();
        local_50 = local_80;
        if (local_78[0] == '\0') {
          if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78[0] = '\0';
        }
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar6 = FUN_00228b30();
        plVar13 = local_50;
        if ((iVar6 == 0) && (local_50 != (int64_t *)0x0)) {
          if (*(int *)((int64_t)local_50 + 0xc) != 0) {
            FUN_00d50b00();
            FUN_0025e9a0();
            plVar11 = local_80;
            if (plVar13 == local_80) {
              local_a8 = plVar13;
LAB_004f443e:
              if ((local_78[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_78[0] == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  local_a8 = local_50;
                  FUN_00d50b00();
                }
                local_a8 = plVar11;
                FUN_00d50b20();
                local_a8 = plVar11;
                plVar13 = local_80;
                goto LAB_004f443e;
              }
              local_a8 = local_80;
              FUN_00d50b20();
            }
            local_78[0] = '\0';
            local_80 = (int64_t *)0x0;
            local_70 = local_50;
            local_68 = 0xffffffff;
            local_60 = 0;
            local_68._4_4_ = 0;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  iVar6 = -local_68._4_4_;
                }
                else {
                  iVar6 = (int)local_68 - local_68._4_4_;
                  local_68 = CONCAT44(local_68._4_4_,iVar6);
                  FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  iVar6 = 0;
                }
                local_68 = CONCAT44(iVar6,(int)local_68);
              }
              lVar8 = (int64_t)(int)local_68;
              iVar6 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,iVar6);
              if (*(int *)((int64_t)local_70 + 0xc) <= iVar6) break;
              lVar10 = local_70[2];
              local_80 = *(int64_t **)(lVar10 + 8 + lVar8 * 8);
              pvVar7 = _pthread_getspecific((void*)lVar10);
              pVar9 = (void*)lVar10;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar7 = _pthread_getspecific(pVar9);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar9 = (void*)local_58;
              }
              FUN_0165a070();
              plVar13 = local_90;
              plVar11 = local_e0;
              if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 == plVar11) {
                local_90 = local_80;
                local_88 = '\0';
                FUN_00d21140();
                if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012eb770();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0165a070();
                plVar11 = local_90;
                if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar11 == local_110) {
                  local_90 = local_80;
                  local_88 = '\0';
                  FUN_00d21140();
                  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            plVar11 = local_70;
            FUN_001159b0();
            pVar9 = (void*)plVar11;
            FUN_00d50b20();
            local_50 = local_a8;
            plVar11 = local_98;
            goto LAB_004f4777;
          }
LAB_004f477c:
          if (*(int *)((int64_t)local_50 + 0xc) != 0) {
            local_a8 = (int64_t *)(**(code **)(*plVar11 + 0xa98))();
            plVar13 = local_50;
            iVar6 = *(int *)((int64_t)local_50 + 0xc);
            uStack_a0 = extraout_XMM0_Qb;
            if (1 < iVar6) {
              FUN_004f2260(plVar11,FUN_004f0e40);
              plVar4 = local_80;
              if (local_80 == plVar13) {
LAB_004f480d:
                if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_78[0] == '\0') {
                  if (local_80 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_50 = plVar4;
                  FUN_00d50b20();
                  local_50 = plVar4;
                  goto LAB_004f480d;
                }
                local_50 = local_80;
                FUN_00d50b20();
              }
              iVar6 = *(int *)((int64_t)local_50 + 0xc);
            }
            lVar8 = local_50[2];
            lVar10 = *(int64_t *)(lVar8 + (int64_t)(iVar6 / 2) * 8);
            local_c8 = 0;
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            pVar9 = (void*)lVar8;
            local_c8 = '\x01';
            local_d0 = lVar10;
            local_48 = (**(code **)(*plVar11 + 0xc38))();
            uStack_40 = extraout_XMM0_Qb_00;
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            auVar17._8_8_ = uStack_a0;
            auVar17._0_8_ = local_a8;
            auVar1._8_8_ = uStack_40;
            auVar1._0_8_ = local_48;
            auVar16._4_12_ = auVar1._4_12_;
            auVar16._0_4_ = (float)local_48 + (float)((uint64_t)local_a8 >> 0x20) * g_02390118;
            auVar17 = blendps(auVar16,auVar17,0xe);
            (**(code **)(*plVar11 + 0xaa0))(auVar17._0_8_);
          }
        }
        else {
LAB_004f4777:
          if (local_50 != (int64_t *)0x0) goto LAB_004f477c;
          local_50 = (int64_t *)0x0;
        }
        uVar15 = FUN_00d3ed20();
        if (local_78[0] == '\0') {
          if (local_80 == (int64_t *)0x0) goto LAB_004f4989;
          uVar15 = FUN_00d50b00();
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
LAB_004f4908:
          lVar8 = g_02709968;
          if (g_02709968 != 0) {
            uVar15 = FUN_00d50b00();
          }
          local_100 = lVar8;
          local_f8 = '\x01';
          pplVar14 = &local_80;
          FUN_000175c0(uVar15,&local_100);
          plVar11 = local_80;
          FUN_002771e0();
          if (plVar11 == (int64_t *)0x0) {
LAB_004f496c:
            pplVar14 = (int64_t **)&g_02802688;
          }
          else {
            (**(code **)(*plVar11 + 0x360))();
            cVar5 = FUN_00e85ea0();
            if (cVar5 == '\0') goto LAB_004f496c;
          }
          plVar11 = *pplVar14;
          if (plVar11 == (int64_t *)0x0) {
            plVar11 = (int64_t *)0x0;
            bVar2 = false;
          }
          else {
            if (*(char *)(pplVar14 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            bVar2 = true;
          }
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar11 == (int64_t *)0x0) goto LAB_004f4a58;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_01326de0();
          if (iVar6 != 2) {
            pvVar7 = _pthread_getspecific(pVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar6 = FUN_01326de0();
            if (iVar6 != 4) {
              local_e8 = '\0';
              local_f0 = plVar11;
              (**(code **)(*local_98 + 0xcc8))(g_023b49d0);
              if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *local_98 + 0x40))();
          bVar3 = false;
        }
        else {
          if (local_80 != (int64_t *)0x0) goto LAB_004f4908;
LAB_004f4989:
          bVar2 = false;
LAB_004f4a58:
          bVar3 = true;
        }
        FUN_00212bd0();
        plVar11 = local_80;
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00212bd0();
          FUN_00442100();
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (bVar2 && !bVar3) {
          FUN_00d50b20();
        }
        uVar12 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
LAB_004f4b38:
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_004f4b5f:
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
}



// ============================================================
// 002bbb70
// ============================================================
// Function: FUN_002bbb70
// Address: 002bbb70
// Size: 2461 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "MUPercussivePitchSystem"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002bbb70(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t **pplVar8;
  int64_t **pplVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint32_t uVar13;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int local_74;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t *local_48;
  char local_38 [8];
  
  if (*arg1 == 0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_90 = this_ptr;
    do {
      plVar11 = local_90;
      (**(code **)(*local_90 + 0x370))();
      plVar10 = local_70;
      if (local_70 == plVar11) {
        if (((local_38[0] == '\0') && (local_70 != (int64_t *)0x0)) && (local_68[0] != '\0')) {
          local_38[0] = '\x01';
          plVar10 = plVar11;
          goto LAB_002bbc27;
        }
      }
      else {
        local_90 = local_70;
        if (local_68[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar7 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar7 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_002bbc27:
          local_38[0] = '\x01';
          pcVar7 = local_68;
        }
        *pcVar7 = '\0';
        plVar11 = plVar10;
      }
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026f8cd8 = FUN_00074a70();
        g_026f8cc0 = "MDEditorScrollView";
        g_026f8cc8 = 0x260;
        g_026f8cd0 = FUN_000749b0;
        g_026f8ce0 = 0;
        ram_00000000026f8ce8 = 0;
        g_026f8cf0 = 0;
        g_026f8d68 = 0;
        ram_00000000026f8d70 = 0;
        g_026f8d78 = 0;
        g_026f8d7a = 1;
        g_026f8cf8 = 0;
        ram_00000000026f8d00 = 0;
        g_026f8d08 = 0;
        ram_00000000026f8d10 = 0;
        g_026f8d18 = 0;
        ram_00000000026f8d20 = 0;
        g_026f8d28 = 0;
        ram_00000000026f8d30 = 0;
        g_026f8d38 = 0;
        ram_00000000026f8d40 = 0;
        g_026f8d48 = 0;
        ram_00000000026f8d50 = 0;
        g_026f8d58 = 0;
        ram_00000000026f8d60 = 0;
        g_026f8d83 = 0;
        g_026f8d7b = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar5 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar11 = local_90;
      if (*pplVar8 != (int64_t *)0x0) {
        bVar2 = false;
        if (local_38[0] == '\0') {
          if (local_90 == (int64_t *)0x0) goto LAB_002bbde1;
          FUN_00d50b00();
          plVar10 = (int64_t *)*arg1;
          cVar5 = (char)arg1[1];
        }
        else {
          plVar10 = (int64_t *)*arg1;
          cVar5 = (char)arg1[1];
        }
        bVar3 = false;
        bVar2 = false;
        if (plVar10 != plVar11) goto LAB_002bbdef;
        goto LAB_002bbdb6;
      }
    } while (local_90 != (int64_t *)0x0);
    bVar2 = true;
    plVar11 = (int64_t *)0x0;
LAB_002bbde1:
    plVar10 = (int64_t *)*arg1;
    cVar5 = (char)arg1[1];
    bVar3 = bVar2;
    if (plVar10 == plVar11) {
LAB_002bbdb6:
      if ((cVar5 == '\0') && (plVar11 != (int64_t *)0x0)) {
        if (bVar2) {
          FUN_00d50b00();
        }
        goto LAB_002bbe2c;
      }
      if (!bVar2 && plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
LAB_002bbdef:
      if (bVar3) {
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar11;
        if ((cVar5 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        *arg1 = (int64_t)plVar11;
        if ((cVar5 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_002bbe2c:
      *(void*)(arg1 + 1) = 1;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (*arg1 == 0) {
      return;
    }
  }
  FUN_0197b900();
  plVar11 = local_70;
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
    bVar2 = false;
    local_48 = (int64_t *)0x0;
  }
  else {
    FUN_0197b900();
    pplVar8 = &local_70;
    (**(code **)(*local_90 + 0xa28))();
    plVar11 = local_70;
    if ((g_027c0150 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_0270acc8 = FUN_0015ea50();
      g_0270acb0 = "MUPercussivePitchSystem";
      g_0270acb8 = 0x58;
      g_0270acc0 = FUN_0015eca0;
      g_0270acd0 = 0;
      ram_000000000270acd8 = 0;
      g_0270ace0 = 0;
      ram_000000000270ace8 = 0;
      g_0270acf0 = 0;
      ram_000000000270acf8 = 0;
      g_0270ad00 = 0;
      ram_000000000270ad08 = 0;
      g_0270ad10 = 0;
      ram_000000000270ad18 = 0;
      g_0270ad20 = 0;
      ram_000000000270ad28 = 0;
      g_0270ad30 = 0;
      ram_000000000270ad38 = 0;
      g_0270ad40 = 0;
      ram_000000000270ad48 = 0;
      g_0270ad50 = 0;
      ram_000000000270ad58 = 0;
      g_0270ad60 = 0;
      ram_000000000270ad68 = 0;
      g_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar11 == (int64_t *)0x0) {
LAB_002bbed3:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar11 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_002bbed3;
    }
    local_48 = *pplVar8;
    if (*pplVar8 == (int64_t *)0x0) {
      bVar2 = false;
      local_48 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      bVar2 = true;
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pplVar8 = &local_70;
  FUN_01d98320();
  plVar11 = local_70;
  FUN_00275460();
  if (plVar11 == (int64_t *)0x0) {
LAB_002bbf98:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_002bbf98;
  }
  plVar11 = *pplVar8;
  pplVar9 = &local_90;
  if (*(char *)(pplVar8 + 1) != '\0') {
    pplVar9 = pplVar8 + 1;
  }
  local_90 = (int64_t *)CONCAT71(local_90._1_7_,*(char *)(pplVar8 + 1));
  *(void*)pplVar9 = 0;
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
    local_74 = 0;
    if (local_48 != (int64_t *)0x0) goto LAB_002bbfea;
LAB_002bc034:
    lVar12 = g_026f6f70;
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_026fc750;
    if (g_026fc750 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar4;
    local_c8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d31230(&local_c0,&local_d0);
    local_80 = local_70;
    if (local_70 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else if (local_68[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
      bVar3 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_74 = FUN_01b18580();
    if (local_48 == (int64_t *)0x0) goto LAB_002bc034;
LAB_002bbfea:
    bVar3 = false;
    local_80 = (int64_t *)0x0;
  }
  uVar13 = (**(code **)(*this_ptr + 0x4a0))();
  plVar10 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_002bc357;
    FUN_00d50b00();
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (int64_t *)0x0) goto LAB_002bc357;
  local_68[0] = '\0';
  local_70 = (int64_t *)0x0;
  local_60 = plVar10;
  local_50 = 0;
  local_58 = 0;
  if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
    if (local_48 == (int64_t *)0x0) {
      lVar12 = 0;
      do {
        plVar1 = *(int64_t **)(plVar10[2] + lVar12 * 8);
        local_70 = plVar1;
        FUN_000f5df0();
        pplVar8 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_70;
          if (cVar5 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_002bc2bd;
          }
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
          if (plVar1 != (int64_t *)0x0) {
LAB_002bc2bd:
            (**(code **)(*plVar1 + 0x998))();
            (**(code **)(*plVar1 + 0xa88))();
            (**(code **)(*plVar1 + 0x918))();
            (**(code **)(*plVar1 + 0x6a8))();
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar12);
      } while ((int)lVar12 < *(int *)((int64_t)plVar10 + 0xc));
    }
    else {
      lVar12 = 0;
      do {
        plVar1 = *(int64_t **)(plVar10[2] + lVar12 * 8);
        local_70 = plVar1;
        FUN_000f5df0();
        pplVar8 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_70;
          if (cVar5 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_002bc1bd;
          }
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
          if (plVar1 != (int64_t *)0x0) {
LAB_002bc1bd:
            (**(code **)(*plVar1 + 0x998))();
            (**(code **)(*plVar1 + 0x918))();
            (**(code **)(*plVar1 + 0x6a8))();
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar12);
      } while ((int)lVar12 < *(int *)((int64_t)plVar10 + 0xc));
    }
  }
  FUN_000a9680();
  uVar13 = FUN_00d50b20();
LAB_002bc357:
  if ((local_48 != (int64_t *)0x0) && (local_74 != 0)) {
    FUN_00502230(uVar13,0);
  }
  if ((bVar3) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0025a470
// ============================================================
// Function: FUN_0025a470
// Address: 0025a470
// Size: 2091 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025a470(uint64_t param_1,byte param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  void *pvVar9;
  void* pVar10;
  int64_t this_ptr;
  int64_t *plVar11;
  bool bVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar11 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar11 = local_40;
    local_50 = CONCAT71(local_50._1_7_,local_38[0]);
    plVar8 = &local_50;
    if (local_38[0] != '\0') {
      plVar8 = (int64_t *)local_38;
    }
    *(char *)plVar8 = '\0';
    if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 == (int64_t *)0x0) {
      plVar11 = *(int64_t **)(this_ptr + 0x90);
LAB_0025a526:
      FUN_00d50b00();
    }
    else if ((char)local_50 == '\0') goto LAB_0025a526;
    uVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *plVar11))();
    uVar7 = (uint64_t)uVar5;
    FUN_00d50b20();
    if (((byte)uVar5 & param_2) == 0) goto LAB_0025a4bc;
    plVar11 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar11))();
    plVar8 = local_40;
    local_68._0_1_ = local_38[0];
    plVar6 = (int64_t *)local_38;
    if (local_38[0] == '\0') {
      plVar6 = &local_68;
    }
    *(char *)plVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0025a5aa:
      FUN_00d50b00();
    }
    else if ((char)local_68 == '\0') goto LAB_0025a5aa;
    (**(code **)(*plVar8 + 0xe40))();
    local_58 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 == 0) || (*(int *)(local_58 + 0xc) == 0)) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar11 = local_40;
      plVar8 = &local_68;
      if (local_38[0] != '\0') {
        plVar8 = (int64_t *)local_38;
      }
      local_68._0_1_ = local_38[0];
      *(char *)plVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 == (int64_t *)0x0) {
        plVar11 = *(int64_t **)(this_ptr + 0x90);
        if (plVar11 != (int64_t *)0x0) goto LAB_0025a67a;
        plVar11 = (int64_t *)0x0;
        plVar8 = (int64_t *)0x0;
      }
      else {
        if ((char)local_68 == '\0') {
LAB_0025a67a:
          FUN_00d50b00();
        }
        plVar8 = *(int64_t **)(this_ptr + 0x90);
      }
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar8 = local_40;
      plVar6 = (int64_t *)local_38;
      if (local_38[0] == '\0') {
        plVar6 = &local_78;
      }
      local_78._0_1_ = local_38[0];
      *(char *)plVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
        plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0025a6d6:
        FUN_00d50b00();
      }
      else if ((char)local_78 == '\0') goto LAB_0025a6d6;
      uVar13 = (**(code **)(*plVar8 + 0xe38))();
      local_90 = 0;
      local_98 = CONCAT71(local_68._1_7_,(char)local_68);
      if (local_60 == '\0') {
        if (local_98 != 0) {
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_90 = '\x01';
      FUN_019bf590(uVar13,&local_98);
      lVar2 = local_50;
      if (local_58 == local_50) {
LAB_0025a79c:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          if (local_58 == 0) {
            local_58 = lVar2;
          }
          else {
            local_58 = lVar2;
            FUN_00d50b20();
          }
          goto LAB_0025a79c;
        }
        if (local_58 != 0) {
          local_58 = local_50;
          FUN_00d50b20();
        }
        local_48 = '\0';
        local_58 = lVar2;
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_58 == 0) goto LAB_0025a4ba;
    }
    if (*(int *)(local_58 + 0xc) != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_40 + 0x450))();
      if (cVar3 == '\0') {
        FUN_01e561b0();
        if (local_50 == 0) {
          bVar12 = true;
        }
        else {
          FUN_01e561b0();
          FUN_01d8f0f0();
          bVar12 = CONCAT71(local_68._1_7_,(char)local_68) != 0;
          if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar12 = false;
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar12) {
        if (*(int64_t *)(this_ptr + 0x160) == 0) {
          plVar8 = (int64_t *)FUN_00276e00();
          (**(code **)(*plVar8 + 0x18))();
          plVar11 = *(int64_t **)(this_ptr + 0x160);
          if (plVar11 == plVar8) {
            FUN_00d50b20();
          }
          else {
            *(int64_t **)(this_ptr + 0x160) = plVar8;
            if (plVar11 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        lVar2 = g_026f6fd0;
        if (g_026f6fd0 != 0) {
          FUN_00d50b00();
        }
        dVar14 = (double)FUN_00e7d6f0();
        uVar7 = (uint64_t)(dVar14 * g_023907c0);
        dVar14 = dVar14 * g_023907c0 - g_023907c8;
        pVar10 = 0xaaaaaaab;
        uVar13 = FUN_0071a120();
        if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
            (uVar13 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        bVar4 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
        local_50 = lVar2;
        local_48 = '\0';
        FUN_000175c0(uVar13,&local_50);
        plVar11 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          local_38[0] = '\0';
          local_40 = plVar11;
          bVar4 = FUN_00c70bc0();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((plVar11 != (int64_t *)0x0 & bVar4) == 1) {
          iVar1 = *(int *)(this_ptr + 0x198);
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (iVar1 == 0) {
            FUN_006f3f00();
            (**(code **)(*(int64_t *)CONCAT71(local_78._1_7_,(char)local_78) + 0x628))();
            pvVar9 = _pthread_getspecific(pVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_004a1110();
            pvVar9 = _pthread_getspecific(pVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01313ad0();
            local_88 = local_40;
            local_80 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_80 = '\x01';
            FUN_00805bd0();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if (lVar2 != 0) {
          FUN_00d50b20();
        }
        FUN_00364a30();
        lVar2 = *(int64_t *)(this_ptr + 0x160);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01d83990();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar7 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
        FUN_00d50b20();
        goto LAB_0025a4bc;
      }
    }
    FUN_00d50b20();
  }
LAB_0025a4ba:
  uVar7 = 0;
LAB_0025a4bc:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 004f17e0
// ============================================================
// Function: FUN_004f17e0
// Address: 004f17e0
// Size: 1777 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004f17e0(uint64_t param_1,double param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  bool bVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  uint32_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  double dVar14;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t local_a8;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  double local_50;
  double local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
    return;
  }
  FUN_00227020();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x10) == 0) goto LAB_004f1de7;
  FUN_0021a630();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_004f1de7;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_004f1de7;
  local_50 = (double)FUN_00440690();
  uVar11 = SUB84(local_50,0);
  uVar13 = FUN_004406b0();
  local_a8._0_4_ = (float)uVar13;
  local_48 = param_2;
  if (NAN(local_50)) {
LAB_004f18f6:
    uVar11 = (**(code **)(*plVar2 + 0x9b0))(uVar11,0);
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1942;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_004f1942:
      bVar8 = *(int *)((int64_t)plVar7 + 0xc) != 0;
      if (bVar8) {
        dVar14 = (double)FUN_01266200();
        local_48 = (double)FUN_012664b0();
        local_48 = local_48 - dVar14;
        uVar12 = FUN_004f16c0();
        local_50 = (double)(uint64_t)uVar12;
      }
      uVar11 = FUN_00d50b20();
      goto joined_r0x004f19dc;
    }
    bVar8 = false;
  }
  else {
    bVar8 = true;
    uVar11 = 0;
    if (param_2 <= 0.0) goto LAB_004f18f6;
  }
joined_r0x004f19dc:
  bVar3 = 1;
  if (NAN((float)local_a8) || (float)((uint64_t)uVar13 >> 0x20) <= 0.0) {
    (**(code **)(*plVar2 + 0x9b0))(uVar11,0);
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1a43;
      }
LAB_004f1a94:
      bVar3 = 0;
      if (plVar7 == (int64_t *)0x0) goto LAB_004f1b7b;
    }
    else {
      if (local_40 == (int64_t *)0x0) goto LAB_004f1a94;
LAB_004f1a43:
      if (*(int *)((int64_t)plVar7 + 0xc) == 0) goto LAB_004f1a94;
      uVar13 = (**(code **)(*plVar2 + 0xa98))();
      FUN_004f2260(plVar2,FUN_004f0e40);
      plVar9 = plVar7;
      if (plVar7 == local_40) {
LAB_004f1acf:
        if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar7 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar9 = local_40;
          goto LAB_004f1acf;
        }
        FUN_00d50b20();
      }
      lVar1 = *(int64_t *)(plVar7[2] + (int64_t)(*(int *)((int64_t)plVar7 + 0xc) / 2) * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_a8 = (**(code **)(*plVar2 + 0xc38))();
      uStack_a0 = extraout_XMM0_Dc_00;
      uStack_9c = extraout_XMM0_Dd_00;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      auVar16._8_4_ = extraout_XMM0_Dc;
      auVar16._0_8_ = uVar13;
      auVar16._12_4_ = extraout_XMM0_Dd;
      auVar15._4_12_ = local_a8._4_12_;
      auVar15._0_4_ = (float)local_a8 + (float)((uint64_t)uVar13 >> 0x20) * g_02390118;
      auVar16 = blendps(auVar15,auVar16,0xe);
      local_a8._0_4_ = auVar16._0_4_;
      bVar3 = 1;
    }
    FUN_00d50b20();
  }
LAB_004f1b7b:
  iVar6 = FUN_00440fb0();
  if ((bVar8) && (iVar6 == 1)) {
    FUN_00440fc0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1bdc;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_004f1bdc:
      dVar14 = (double)FUN_004f10a0(local_50._0_4_);
      local_50._0_4_ = SUB84(dVar14,0);
      FUN_00d50b20();
      bVar8 = 0.0 < local_48 && (!NAN(dVar14) && !NAN(dVar14));
      goto LAB_004f1c28;
    }
  }
  else {
LAB_004f1c28:
    if ((!bVar8) || ((bool)(bVar3 ^ 1))) {
      if (bVar8) {
        if (*(int64_t *)(this_ptr + 0x10) == 0) {
          local_38 = '\0';
          local_40 = (int64_t *)0x0;
        }
        else {
          FUN_0021a630();
        }
        FUN_019af2a0(local_50._0_4_,local_48);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      pplVar10 = &local_40;
      (**(code **)(*plVar2 + 0x970))();
      plVar2 = local_40;
      if ((g_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026f8cd8 = FUN_00074a70();
        g_026f8cc0 = "MDEditorScrollView";
        g_026f8cc8 = 0x260;
        g_026f8cd0 = FUN_000749b0;
        g_026f8ce0 = 0;
        ram_00000000026f8ce8 = 0;
        g_026f8cf0 = 0;
        g_026f8d68 = 0;
        ram_00000000026f8d70 = 0;
        g_026f8d78 = 0;
        g_026f8d7a = 1;
        g_026f8cf8 = 0;
        ram_00000000026f8d00 = 0;
        g_026f8d08 = 0;
        ram_00000000026f8d10 = 0;
        g_026f8d18 = 0;
        ram_00000000026f8d20 = 0;
        g_026f8d28 = 0;
        ram_00000000026f8d30 = 0;
        g_026f8d38 = 0;
        ram_00000000026f8d40 = 0;
        g_026f8d48 = 0;
        ram_00000000026f8d50 = 0;
        g_026f8d58 = 0;
        ram_00000000026f8d60 = 0;
        g_026f8d83 = 0;
        g_026f8d7b = 0;
        ___cxa_guard_release();
      }
      if (plVar2 == (int64_t *)0x0) {
LAB_004f1c81:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_004f1c81;
      }
      plVar2 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar2 != (int64_t *)0x0) && (plVar7 = (int64_t *)plVar2[0x4b], plVar7 != plVar4)) {
        FUN_00d50b00();
        plVar2[0x4b] = (int64_t)plVar4;
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t *)(this_ptr + 0x10) == 0) {
        local_38 = '\0';
        local_40 = (int64_t *)0x0;
      }
      else {
        FUN_0021a630();
      }
      FUN_019af2a0(local_50._0_4_,local_48);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_0021a630();
      (**(code **)(*local_40 + 0xcb8))(local_50._0_4_,local_48,(float)local_a8);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_004f1de7:
  FUN_00d50b20();
  return;
}



// ============================================================
// 0025b950
// ============================================================
// Function: FUN_0025b950
// Address: 0025b950
// Size: 1362 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025b950(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  bool bVar10;
  int64_t local_a8;
  char local_a0;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  int64_t local_38;
  
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar8 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar8 = local_48;
    local_58 = local_40[0];
    pcVar5 = &local_58;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0025ba00:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0025ba00;
    uVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar8
                        ))();
    uVar9 = (uint64_t)uVar4;
    FUN_00d50b20();
    if (((byte)uVar4 & param_2) == 0) goto LAB_0025b999;
    plVar8 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar8))();
    plVar6 = local_48;
    local_88 = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = &local_88;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_0025ba87:
      FUN_00d50b00();
    }
    else if (local_88 == '\0') goto LAB_0025ba87;
    (**(code **)(*plVar6 + 0xe20))();
    local_38 = CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 == 0) || (lVar7 = local_38, *(int *)(local_38 + 0xc) == 0)) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar6 = local_48;
      pcVar5 = &local_88;
      if (local_40[0] != '\0') {
        pcVar5 = local_40;
      }
      local_88 = local_40[0];
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 == (int64_t *)0x0) {
        plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_0025bb57:
        FUN_00d50b00();
      }
      else if (local_88 == '\0') goto LAB_0025bb57;
      (**(code **)(*plVar6 + 0xe38))();
      lVar2 = local_38;
      lVar1 = CONCAT71(uStack_57,local_58);
      lVar7 = local_38;
      if (local_38 == lVar1) {
LAB_0025bbbe:
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar7 = lVar1;
        if (local_50 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0025bbbe;
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        local_50 = '\0';
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) goto LAB_0025b997;
    }
    if (*(int *)(lVar7 + 0xc) != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_48 + 0x450))();
      if (cVar3 == '\0') {
        FUN_01e561b0();
        if (CONCAT71(uStack_57,local_58) == 0) {
          bVar10 = true;
        }
        else {
          FUN_01e561b0();
          FUN_01d8f0f0();
          bVar10 = CONCAT71(uStack_87,local_88) != 0;
          if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = false;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        if (*(int64_t *)(this_ptr + 0x168) == 0) {
          plVar6 = (int64_t *)FUN_00276ef0();
          (**(code **)(*plVar6 + 0x18))();
          plVar8 = *(int64_t **)(this_ptr + 0x168);
          if (plVar8 == plVar6) {
            FUN_00d50b20();
          }
          else {
            *(int64_t **)(this_ptr + 0x168) = plVar6;
            if (plVar8 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00637870();
        plVar8 = local_48;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 != (int64_t *)0x0) {
          FUN_00637870();
          FUN_006e6e80();
          FUN_007cc080();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00364a30();
        if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
          local_78 = (int64_t *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
          pcVar5 = local_40;
          if (local_40[0] == '\0') {
            pcVar5 = &local_58;
          }
          local_58 = local_40[0];
          *pcVar5 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (int64_t *)0x0) {
            plVar8 = *(int64_t **)(this_ptr + 0x90);
            if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) goto LAB_0025be12;
            local_78 = (int64_t *)0x0;
          }
          else {
            plVar8 = local_48;
            local_78 = local_48;
            if (local_58 == '\0') {
LAB_0025be12:
              FUN_00d50b00();
              local_78 = plVar8;
            }
          }
        }
        local_70 = '\x01';
        FUN_00365580();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_60 = 0;
        lVar7 = *(int64_t *)(this_ptr + 0x168);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar7;
        FUN_01d83990();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
        FUN_00d50b20();
        goto LAB_0025b999;
      }
    }
    FUN_00d50b20();
  }
LAB_0025b997:
  uVar9 = 0;
LAB_0025b999:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 004f32b0
// ============================================================
// Function: FUN_004f32b0
// Address: 004f32b0
// Size: 2174 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004f32b0(double param_1,double param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  void* in_ECX;
  void* pVar6;
  char *pcVar7;
  int64_t *plVar8;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar9;
  uint64_t uVar10;
  double dVar11;
  int64_t *local_80;
  char local_78;
  double local_70;
  double local_60;
  double local_58;
  int64_t *local_50;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
    return;
  }
  dVar11 = param_2;
  FUN_0021a630();
  if (local_48[0] == '\0') {
    if (local_50 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == (int64_t *)0x0) {
    return;
  }
  FUN_0021a2c0();
  local_58 = (double)(**(code **)(*local_50 + 0xa50))();
  local_40 = dVar11;
  FUN_00226f20();
  if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_50 + 0x9e0))();
  if (local_78 == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_012e74e0();
  if (local_48[0] == '\0') {
    if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
       (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = local_50;
  if ((local_50 != (int64_t *)0x0) && (*(int *)((int64_t)local_50 + 0xc) == 1)) {
    FUN_00d23310();
    in_ECX = CONCAT31((int3)(in_ECX >> 8),local_48[0]);
    pcVar7 = local_38;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f51f0();
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    if ((local_38[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != (int64_t *)0x0) && (local_50 != local_80)) {
      FUN_00228980();
      FUN_00d50b00();
      plVar9 = local_80;
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pVar6 = CONCAT31((int3)(in_ECX >> 8),NAN(param_1) || param_2 <= 0.0);
  local_70 = param_1;
  local_60 = param_2;
  if ((NAN(param_1) || param_2 <= 0.0) && (plVar9 != (int64_t *)0x0)) {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165a070();
    if (local_48[0] == '\0') {
      if (local_50 != (int64_t *)0x0) goto LAB_004f3603;
    }
    else if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
LAB_004f3603:
      iVar4 = FUN_00228b30();
      if (iVar4 == 0) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_01653910();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = (double)FUN_01653920();
        local_70 = (double)FUN_00e7b500(uVar10);
      }
      else {
        iVar4 = FUN_00228b30();
        if (iVar4 == 1) {
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_01653910();
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_60 = (double)FUN_01653920();
          local_70 = (double)FUN_00e7b500(uVar10);
        }
      }
    }
  }
  if ((local_60 <= 0.0) || (NAN(local_70))) goto LAB_004f3ad2;
  bVar1 = 1;
  plVar8 = (int64_t *)0x0;
  dVar11 = local_40;
  if ((0.0 < local_40) && (!NAN(local_58))) {
    iVar4 = FUN_00228b30();
    if (iVar4 == 1) {
      FUN_00226f20();
      if (local_50 == (int64_t *)0x0) {
        plVar8 = (int64_t *)0x0;
        dVar11 = local_40;
      }
      else {
        if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
           (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (double)FUN_004f0fe0(local_58);
        bVar1 = 0;
        plVar8 = local_50;
        dVar11 = local_40;
      }
    }
    else {
      plVar8 = (int64_t *)0x0;
      dVar11 = local_40;
    }
  }
  local_40 = dVar11;
  if (((0.0 < dVar11) && (!NAN(local_58))) &&
     ((local_70 <= local_58 || (local_58 + dVar11 <= local_70 + local_60)))) {
    if (local_58 <= local_70) {
      if (dVar11 <= local_60) {
        local_58 = (double)FUN_00e7b500(local_70 + g_02394dd0);
        local_40 = dVar11;
      }
      else {
LAB_004f38cc:
        cVar2 = FUN_00e7b560(local_70,local_60,local_58);
        if (cVar2 == '\0') {
          local_58 = (double)FUN_00e7b500(local_70 + (local_40 - local_60) * g_02394dd0);
        }
        else {
          dVar11 = local_40;
          if (local_70 < local_58) goto LAB_004f3905;
          local_58 = (double)FUN_00e7b500((local_70 + local_60 + g_023942d0) - local_40);
        }
      }
    }
    else {
      if (local_58 + dVar11 < local_70 + local_60) goto LAB_004f3abf;
      if (local_60 < dVar11) goto LAB_004f38cc;
LAB_004f3905:
      local_40 = local_70 + local_60 + g_023942d0;
      FUN_00e7b500(local_40 - dVar11);
      if (dVar11 <= local_60) {
        local_58 = (double)FUN_00e7b500(local_40 - dVar11);
        local_40 = dVar11;
      }
      else {
        local_58 = (double)FUN_00e7b500(local_70 + g_02394dd0);
        local_40 = dVar11;
      }
    }
    if (plVar8 != (int64_t *)0x0) {
      local_58 = (double)FUN_004f10a0(local_58);
    }
    if (unaff_SIL != '\0') {
      FUN_00226250();
      if (local_50 == (int64_t *)0x0) {
        bVar3 = 1;
      }
      else {
        FUN_00226250();
        bVar3 = (**(code **)(*local_80 + 0x398))();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar3 = bVar3 ^ 1;
      }
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar3 == 0) goto LAB_004f3abf;
    }
    FUN_019af2a0(local_58,local_40);
  }
LAB_004f3abf:
  if (!(bool)(bVar1 | plVar8 == (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_004f3ad2:
  FUN_004f2580(local_58,local_40);
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 004f2580
// ============================================================
// Function: FUN_004f2580
// Address: 004f2580
// Size: 2115 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004f2580(uint32_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  int64_t *plVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  void *pvVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *plVar10;
  int64_t this_ptr;
  int64_t *plVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  float local_78;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  plVar11 = local_68;
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
LAB_004f25f1:
    plVar10 = (int64_t *)0x0;
  }
  else {
    FUN_0021a630();
    plVar10 = local_68;
    if (local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) goto LAB_004f25f1;
      FUN_00d50b00();
    }
  }
  (**(code **)(*plVar10 + 0x9b8))(param_1,param_2);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00243390();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = FUN_00228b30();
  if ((iVar5 == 0) && (local_68 != (int64_t *)0x0)) {
    if (*(int *)((int64_t)local_68 + 0xc) == 0) goto LAB_004f2a8f;
    if (*arg1 != 0) {
      FUN_00d50b00();
      FUN_0025e9a0();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = (int64_t *)0x0;
      local_50 = -1;
      while( true ) {
        lVar6 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((int64_t)plVar11 + 0xc) <= local_50) break;
        lVar9 = plVar11[2];
        local_68 = *(int64_t **)(lVar9 + 8 + lVar6 * 8);
        pvVar7 = _pthread_getspecific((void*)lVar9);
        pVar8 = (void*)lVar9;
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == local_c8) {
          local_38 = '\0';
          FUN_00d21140();
          local_40 = local_68;
        }
        else {
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 == local_d8) {
            local_38 = '\0';
            FUN_00d21140();
            local_40 = local_68;
          }
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
      goto LAB_004f2a82;
    }
  }
  else {
LAB_004f2a82:
    if (plVar11 == (int64_t *)0x0) goto LAB_004f2dc3;
LAB_004f2a8f:
    plVar2 = local_68;
    if (0 < *(int *)((int64_t)plVar11 + 0xc)) {
      FUN_01e436c0();
      (**(code **)(*plVar10 + 0xb38))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00243390();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == (int64_t *)0x0) {
        local_78 = 0.0;
        iVar5 = *(int *)((int64_t)plVar11 + 0xc);
        local_68 = (int64_t *)0x0;
      }
      else {
        local_60 = '\0';
        local_68 = (int64_t *)0x0;
        local_50 = -1;
        local_78 = 0.0;
        fVar3 = local_78;
        while( true ) {
          local_78 = fVar3;
          lVar6 = (int64_t)local_50;
          local_50 = local_50 + 1;
          if (*(int *)((int64_t)plVar2 + 0xc) <= local_50) break;
          local_68 = *(int64_t **)(plVar2[2] + 8 + lVar6 * 8);
          cVar4 = FUN_00d23d70();
          fVar3 = local_78 + g_02390124;
          if (cVar4 == '\0') {
            fVar3 = local_78;
          }
        }
        FUN_001159b0();
        iVar5 = *(int *)((int64_t)plVar11 + 0xc);
      }
      if ((iVar5 < 1) || (local_78 / (float)iVar5 <= g_023b1610)) {
        FUN_004f2260(plVar10,FUN_004f0e40);
        if (local_68 == plVar11) {
LAB_004f2cf9:
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar11 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            goto LAB_004f2cf9;
          }
          FUN_00d50b20();
        }
        lVar6 = *(int64_t *)(plVar11[2] + (int64_t)(*(int *)((int64_t)plVar11 + 0xc) / 2) * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        uVar12 = (**(code **)(*plVar10 + 0xc38))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        uVar13 = (**(code **)(*plVar10 + 0xa98))();
        auVar1._8_4_ = extraout_XMM0_Dc;
        auVar1._0_8_ = uVar12;
        auVar1._12_4_ = extraout_XMM0_Dd;
        auVar14._4_12_ = auVar1._4_12_;
        auVar14._0_4_ = (float)uVar12 + (float)((uint64_t)uVar13 >> 0x20) * g_02390118;
        auVar15._8_4_ = extraout_XMM0_Dc_00;
        auVar15._0_8_ = uVar13;
        auVar15._12_4_ = extraout_XMM0_Dd_00;
        auVar15 = blendps(auVar14,auVar15,0xe);
        (**(code **)(*plVar10 + 0xaa0))(auVar15._0_4_);
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_004f2dc3:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00261550
// ============================================================
// Function: FUN_00261550
// Address: 00261550
// Size: 1754 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_00261550(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  char *pcVar6;
  void *pvVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t arg1;
  void*this_ptr;
  int iVar10;
  bool bVar11;
  int64_t local_98;
  char local_90;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &g_02572358;
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (*(int *)(arg1 + 0x198) != 0) {
    if (*(int *)(arg1 + 0x198) == 1) {
      FUN_00226f20();
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00226f20();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_70[0] = '\0';
        FUN_00d21140();
        if ((local_70[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
    goto LAB_00261c1c;
  }
  plVar1 = *(int64_t **)(arg1 + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  local_50 = local_70[0];
  pcVar6 = local_70;
  if (local_70[0] == '\0') {
    pcVar6 = &local_50;
  }
  *pcVar6 = '\0';
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(arg1 + 0x90);
LAB_0026165b:
    FUN_00d50b00();
  }
  else {
    plVar9 = local_78;
    if (local_50 == '\0') goto LAB_0026165b;
  }
  (**(code **)(*plVar9 + 0xe20))();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == 0)) {
    plVar1 = *(int64_t **)(arg1 + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar6 = local_70;
    if (local_70[0] == '\0') {
      pcVar6 = &local_50;
    }
    local_50 = local_70[0];
    *pcVar6 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 == (int64_t *)0x0) {
      local_78 = *(int64_t **)(arg1 + 0x90);
LAB_00261a42:
      FUN_00d50b00();
    }
    else if (local_50 == '\0') goto LAB_00261a42;
    (**(code **)(*local_78 + 0x988))();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_70[0] = '\0';
      local_68 = lVar2;
      local_58 = 0;
      local_60 = 0;
      if (0 < *(int *)(lVar2 + 0xc)) {
        iVar10 = 0;
        do {
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f51f0();
          lVar3 = local_40;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            pvVar7 = _pthread_getspecific((void*)puVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f51f0();
            lVar3 = CONCAT71(uStack_4f,local_50);
            if (local_48 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_38 = '\0';
            local_40 = lVar3;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
          }
          iVar10 = iVar10 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
        } while (iVar10 < *(int *)(lVar2 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  else {
    local_70[0] = '\0';
    local_68 = lVar4;
    local_58 = 0;
    local_60 = 0;
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar10 = 0;
      do {
        pvVar7 = _pthread_getspecific((void*)puVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_40 == 0) {
          bVar11 = false;
        }
        else {
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f51f0();
          bVar11 = CONCAT71(uStack_4f,local_50) != 0;
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) {
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar7 = _pthread_getspecific((void*)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f51f0();
          lVar2 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38 = '\0';
          local_40 = lVar2;
          FUN_00d235a0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar10 = iVar10 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
      } while (iVar10 < *(int *)(lVar4 + 0xc));
    }
    FUN_001159b0();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00261c1c:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0025b1d0
// ============================================================
// Function: FUN_0025b1d0
// Address: 0025b1d0
// Size: 1255 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025b1d0(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  bool bVar10;
  int64_t local_a8;
  char local_a0;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  int64_t local_38;
  
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar8 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar8 = local_48;
    local_58 = local_40[0];
    pcVar5 = &local_58;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0025b280:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0025b280;
    uVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar8
                        ))();
    uVar9 = (uint64_t)uVar4;
    FUN_00d50b20();
    if (((byte)uVar4 & param_2) == 0) goto LAB_0025b219;
    plVar8 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar8))();
    plVar6 = local_48;
    local_88 = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = &local_88;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_0025b307:
      FUN_00d50b00();
    }
    else if (local_88 == '\0') goto LAB_0025b307;
    (**(code **)(*plVar6 + 0xe20))();
    local_38 = CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 == 0) || (lVar7 = local_38, *(int *)(local_38 + 0xc) == 0)) {
      plVar8 = *(int64_t **)(this_ptr + 0x90);
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar6 = local_48;
      pcVar5 = &local_88;
      if (local_40[0] != '\0') {
        pcVar5 = local_40;
      }
      local_88 = local_40[0];
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 == (int64_t *)0x0) {
        plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_0025b3d7:
        FUN_00d50b00();
      }
      else if (local_88 == '\0') goto LAB_0025b3d7;
      (**(code **)(*plVar6 + 0xe38))();
      lVar2 = local_38;
      lVar1 = CONCAT71(uStack_57,local_58);
      lVar7 = local_38;
      if (local_38 == lVar1) {
LAB_0025b43e:
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar7 = lVar1;
        if (local_50 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0025b43e;
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        local_50 = '\0';
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) goto LAB_0025b217;
    }
    if (*(int *)(lVar7 + 0xc) != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_48 + 0x450))();
      if (cVar3 == '\0') {
        FUN_01e561b0();
        if (CONCAT71(uStack_57,local_58) == 0) {
          bVar10 = true;
        }
        else {
          FUN_01e561b0();
          FUN_01d8f0f0();
          bVar10 = CONCAT71(uStack_87,local_88) != 0;
          if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = false;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        if (*(int64_t *)(this_ptr + 0x170) == 0) {
          plVar6 = (int64_t *)FUN_00272f20();
          (**(code **)(*plVar6 + 0x18))();
          plVar8 = *(int64_t **)(this_ptr + 0x170);
          if (plVar8 == plVar6) {
            FUN_00d50b20();
          }
          else {
            *(int64_t **)(this_ptr + 0x170) = plVar6;
            if (plVar8 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00364a30();
        if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
          local_78 = (int64_t *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
          pcVar5 = local_40;
          if (local_40[0] == '\0') {
            pcVar5 = &local_58;
          }
          local_58 = local_40[0];
          *pcVar5 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (int64_t *)0x0) {
            plVar8 = *(int64_t **)(this_ptr + 0x90);
            if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) goto LAB_0025b627;
            local_78 = (int64_t *)0x0;
          }
          else {
            plVar8 = local_48;
            local_78 = local_48;
            if (local_58 == '\0') {
LAB_0025b627:
              FUN_00d50b00();
              local_78 = plVar8;
            }
          }
        }
        local_70 = '\x01';
        FUN_00365580();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_60 = 0;
        lVar7 = *(int64_t *)(this_ptr + 0x170);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar7;
        FUN_01d83990();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
        FUN_00d50b20();
        goto LAB_0025b219;
      }
    }
    FUN_00d50b20();
  }
LAB_0025b217:
  uVar9 = 0;
LAB_0025b219:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 0025de70
// ============================================================
// Function: FUN_0025de70
// Address: 0025de70
// Size: 1367 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025de70(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int iVar2;
  char *pcVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t this_ptr;
  int iVar10;
  int64_t *local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar6 = local_58;
  local_68 = local_50[0];
  pcVar3 = local_50;
  if (local_50[0] == '\0') {
    pcVar3 = &local_68;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_0025dee6:
    FUN_00d50b00();
  }
  else if (local_68 == '\0') goto LAB_0025dee6;
  (**(code **)(*plVar6 + 0xe10))();
  if (local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 == (int64_t *)0x0) {
    uVar7 = 0;
    goto LAB_0025e3ca;
  }
  if (*(int *)((int64_t)local_78 + 0xc) == 0) {
    uVar7 = 0;
  }
  else {
    FUN_004fb290();
    if (local_70 == '\0') {
      if (local_78 == (int64_t *)0x0) goto LAB_0025e0cd;
      FUN_00d50b00();
LAB_0025dfd8:
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = local_78;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar4 = (int64_t)(int)local_40;
        iVar10 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        iVar9 = *(int *)((int64_t)local_48 + 0xc);
        if (iVar9 <= iVar10) break;
        plVar6 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
        local_58 = plVar6;
        pvVar5 = _pthread_getspecific((void*)local_48[2]);
        plVar1 = local_58;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar6 = plVar1, lVar4 != 0)) {
          plVar6 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        iVar2 = FUN_01326de0();
        if (iVar2 != 1) break;
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar9 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar9 = 0;
          }
          local_40 = CONCAT44(iVar9,(int)local_40);
        }
      }
      FUN_00115190();
      uVar7 = CONCAT71((int7)((uint64_t)plVar6 >> 8),iVar9 <= iVar10);
      FUN_00d50b20();
      if (iVar9 <= iVar10) goto LAB_0025e0d7;
    }
    else {
      local_70 = '\0';
      if (local_78 != (int64_t *)0x0) goto LAB_0025dfd8;
LAB_0025e0cd:
      uVar7 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
LAB_0025e0d7:
      if (param_2 != '\0') {
        FUN_0025d790();
        plVar1 = local_58;
        if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00c9fe20();
        plVar6 = local_58;
        local_68 = local_50[0];
        pcVar3 = local_50;
        if (local_50[0] == '\0') {
          pcVar3 = &local_68;
        }
        *pcVar3 = '\0';
        if ((local_50[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == '\0') {
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_0025e173;
          }
        }
        else if (plVar6 != (int64_t *)0x0) {
LAB_0025e173:
          local_50[0] = '\0';
          local_58 = (int64_t *)0x0;
          local_48 = plVar6;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar9 = -local_40._4_4_;
              }
              else {
                iVar9 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar9);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar9 = 0;
              }
              local_40 = CONCAT44(iVar9,(int)local_40);
            }
            lVar4 = (int64_t)(int)local_40;
            iVar9 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar9);
            if (*(int *)((int64_t)local_48 + 0xc) <= iVar9) break;
            local_58 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
            pvVar5 = _pthread_getspecific((void*)local_48[2]);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0025dd10();
            lVar4 = CONCAT71(uStack_67,local_68);
            if (local_60 == '\0') {
              if (lVar4 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            FUN_01369cd0();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00115190();
          FUN_00d50b20();
        }
        plVar6 = *(int64_t **)(this_ptr + 0x90);
        (**(code **)(&UNK_00001550 + *plVar6))();
        plVar8 = local_58;
        pcVar3 = local_50;
        if (local_50[0] == '\0') {
          pcVar3 = &local_68;
        }
        local_68 = local_50[0];
        *pcVar3 = '\0';
        if ((local_50[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == (int64_t *)0x0) {
          plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0025e378:
          FUN_00d50b00();
        }
        else if (local_68 == '\0') goto LAB_0025e378;
        (**(code **)(*plVar8 + 0xda0))();
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar7 = uVar7 & 0xffffffff;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0025e3ca:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 0025cf90
// ============================================================
// Function: FUN_0025cf90
// Address: 0025cf90
// Size: 1355 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025cf90(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_0025d073:
    uVar8 = 0;
    goto LAB_0025d4c9;
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar1 = local_48;
  local_58 = local_40[0];
  pcVar4 = &local_58;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_0025d073;
LAB_0025d00c:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_0025d00c;
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar7 = local_48;
  local_38[0] = local_40[0];
  pcVar4 = local_40;
  if (local_40[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = *(int64_t **)(this_ptr + 0x90);
LAB_0025d086:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_0025d086;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar7 + 0x20))();
  plVar7 = (int64_t *)CONCAT71(uStack_57,local_58);
  if ((local_50 != '\0') && (plVar7 != (int64_t *)0x0)) {
    (**(code **)(*plVar7 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)((uint64_t)plVar1 >> 8),plVar7 != (int64_t *)0x0);
  if ((plVar7 == (int64_t *)0x0) || (param_2 == '\0')) goto LAB_0025d4c9;
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar7 = local_48;
  local_38[0] = local_40[0];
  pcVar4 = local_40;
  if (local_40[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = *(int64_t **)(this_ptr + 0x90);
LAB_0025d13e:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_0025d13e;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar7 + 0x20))();
  cVar3 = (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x50))();
  if ((local_50 != '\0') && ((int64_t *)CONCAT71(uStack_57,local_58) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x10))();
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar7 = local_48;
    pcVar4 = local_38;
    pcVar9 = local_40;
    if (local_40[0] == '\0') {
      pcVar9 = pcVar4;
    }
    local_38[0] = local_40[0];
    *pcVar9 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar6 = (void*)pcVar4;
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = *(int64_t **)(this_ptr + 0x90);
LAB_0025d2a1:
      FUN_00d50b00();
    }
    else if (local_38[0] == '\0') goto LAB_0025d2a1;
    (**(code **)(*plVar7 + 0xe20))();
    lVar2 = CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (((lVar2 != 0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xc) != 0) {
        FUN_01266b80();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_01259520();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01266770();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        cVar3 = (**(code **)(*local_48 + 0x450))();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = *(int64_t **)(this_ptr + 0xc0);
        if (cVar3 == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(plVar1[2] + 0x40))(dVar11,dVar10 - dVar11);
          FUN_00d50b20();
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar1 + 0x388))(dVar11,dVar10 - dVar11);
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    goto LAB_0025d4c9;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar4 = local_40;
  if (local_40[0] == '\0') {
    pcVar4 = local_38;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    plVar7 = *(int64_t **)(this_ptr + 0x90);
LAB_0025d241:
    FUN_00d50b00();
  }
  else {
    plVar7 = local_48;
    if (local_38[0] == '\0') goto LAB_0025d241;
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar7 + 0x20))();
  (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x48))();
  if ((local_50 != '\0') && ((int64_t *)CONCAT71(uStack_57,local_58) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x10))();
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
LAB_0025d4c9:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 00073fd0
// ============================================================
// Function: FUN_00073fd0
// Address: 00073fd0
// Size: 1188 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "MDEditorViewController"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_00073fd0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00074067;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
          plVar5 = local_48;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
          plVar5 = local_48;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar5 = local_48;
LAB_00074067:
        local_38[0] = '\x01';
        pcVar3 = local_40;
      }
      *pcVar3 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_02709e70 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026f8cd8 = FUN_00074a70();
      g_026f8cc0 = "MDEditorScrollView";
      g_026f8cc8 = 0x260;
      g_026f8cd0 = FUN_000749b0;
      g_026f8ce0 = 0;
      ram_00000000026f8ce8 = 0;
      g_026f8cf0 = 0;
      g_026f8d68 = 0;
      ram_00000000026f8d70 = 0;
      g_026f8d78 = 0;
      g_026f8d7a = 1;
      g_026f8cf8 = 0;
      ram_00000000026f8d00 = 0;
      g_026f8d08 = 0;
      ram_00000000026f8d10 = 0;
      g_026f8d18 = 0;
      ram_00000000026f8d20 = 0;
      g_026f8d28 = 0;
      ram_00000000026f8d30 = 0;
      g_026f8d38 = 0;
      ram_00000000026f8d40 = 0;
      g_026f8d48 = 0;
      ram_00000000026f8d50 = 0;
      g_026f8d58 = 0;
      ram_00000000026f8d60 = 0;
      g_026f8d83 = 0;
      g_026f8d7b = 0;
      ___cxa_guard_release();
    }
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffb0;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (this_ptr == (int64_t *)0x0) goto LAB_000741f1;
      goto LAB_000741ec;
    }
  } while (plVar5 != (int64_t *)0x0);
  plVar5 = (int64_t *)0x0;
  if (this_ptr != (int64_t *)0x0) {
LAB_000741ec:
    FUN_00d50b20();
  }
LAB_000741f1:
  if (plVar5 != (int64_t *)0x0) {
    local_38[0] = '\0';
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00074267;
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
            plVar5 = local_48;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
            plVar5 = local_48;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          plVar5 = local_48;
LAB_00074267:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      plVar4 = &g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (int64_t *)&stack0xffffffffffffffb0;
        if (cVar1 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        else if (plVar5 == (int64_t *)0x0) break;
        plVar5 = (int64_t *)this_ptr[0x27];
        FUN_0024a880();
        (**(code **)(*plVar5 + 0x918))();
        plVar5 = (int64_t *)this_ptr[0x27];
        FUN_00249a70();
        (**(code **)(*plVar5 + 0x998))();
        plVar5 = (int64_t *)this_ptr[0x28];
        FUN_0024a160();
        (**(code **)(*plVar5 + 0x918))();
        plVar5 = (int64_t *)this_ptr[0x28];
        FUN_00249a60();
        (**(code **)(*plVar5 + 0x998))();
        FUN_00d50b20();
        break;
      }
    } while (plVar5 != (int64_t *)0x0);
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 004feb00
// ============================================================
// Function: FUN_004feb00
// Address: 004feb00
// Size: 1426 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004feb00(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
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
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02709dd0;
  lVar3 = g_026f6f70;
  if (cVar4 == '\0') {
    if (g_02709dd0 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar2;
    local_98 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_004fe810();
    }
  }
  else {
    plVar1 = (int64_t *)this_ptr[0x40];
    if (plVar1 != (int64_t *)0x0) {
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_026deab8;
      if (g_026deab8 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar2;
      local_118 = '\x01';
      local_110 = 0;
      local_108 = '\0';
      FUN_00d31230(&local_110,&local_120);
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      (**(code **)(*plVar1 + 0x6a8))();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = g_026f6f70;
    plVar1 = (int64_t *)this_ptr[0x3a];
    if (plVar1 != (int64_t *)0x0) {
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02709df0;
      local_100 = lVar3;
      local_f8 = '\x01';
      if (g_02709df0 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar2;
      local_e8 = '\x01';
      local_e0 = 0;
      local_d8 = '\0';
      FUN_00d31230(&local_e0,&local_f0);
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x6a8))();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = g_02709df8;
    plVar1 = (int64_t *)this_ptr[0x4a];
    if (plVar1 != (int64_t *)0x0) {
      if (g_02709df8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02709e00;
      local_d0 = lVar3;
      local_c8 = '\x01';
      if (g_02709e00 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar2;
      local_b8 = '\x01';
      local_b0 = 0;
      local_a8 = '\0';
      FUN_00d31230(&local_b0,&local_c0);
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      (**(code **)(*plVar1 + 0x6a8))();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0x4a] != 0) {
        (**(code **)(*this_ptr + 0xa20))();
        local_50 = local_40;
        local_48 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_48 = '\x01';
        FUN_01d778e0();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  local_90 = *arg1;
  local_88 = '\0';
  FUN_0197b9f0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00257fd0
// ============================================================
// Function: FUN_00257fd0
// Address: 00257fd0
// Size: 1469 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_00257fd0(void* param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  char *pcVar7;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_006f3f00();
  (**(code **)(*(int64_t *)CONCAT71(uStack_67,local_68) + 0x628))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  local_58 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar6))();
  plVar5 = local_40;
  pcVar7 = &local_50;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_50 = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_00258118:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_00258118;
  (**(code **)(*plVar5 + 0xda0))();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (void*)local_58;
  }
  FUN_01313ad0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  plVar6 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  FUN_002312f0();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar6))();
  plVar5 = local_40;
  pcVar7 = &local_50;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_50 = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_002582e2:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_002582e2;
  (**(code **)(*plVar5 + 0xda0))();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    local_78 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar6 = local_40;
    pcVar7 = local_38;
    if (local_38[0] == '\0') {
      pcVar7 = &local_68;
    }
    local_68 = local_38[0];
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = *(int64_t **)(this_ptr + 0x90);
      if (plVar6 == (int64_t *)0x0) {
        local_78 = (int64_t *)0x0;
        goto LAB_00258393;
      }
    }
    else {
      local_78 = plVar6;
      if (local_68 != '\0') goto LAB_00258393;
    }
    FUN_00d50b00();
    local_78 = plVar6;
  }
LAB_00258393:
  local_70 = '\x01';
  FUN_01c91010();
  lVar4 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (((lVar4 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (CONCAT71(uStack_4f,local_50) != 0))
    {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0021a2c0();
  if (lVar4 != 0) {
    FUN_01f27fe0();
    lVar1 = g_026f6fc0;
    if (g_026f6fc0 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_026f6fc8;
    local_b0 = '\0';
    local_b8 = lVar4;
    if (g_026f6fc8 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar2;
    local_a0 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    local_88 = 0;
    local_80 = '\0';
    FUN_01f316e0(&local_a8,&local_b8,&local_98,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 002bc8f0
// ============================================================
// Function: FUN_002bc8f0
// Address: 002bc8f0
// Size: 967 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_002bc8f0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t ******pppppplVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t *******ppppppplVar9;
  int64_t *******ppppppplVar10;
  uint64_t uVar11;
  int64_t *******this_ptr;
  int64_t *******ppppppplVar12;
  int64_t *******local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr != (int64_t *******)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  ppppppplVar12 = this_ptr;
  do {
    (*(*ppppppplVar12)[0x6e])();
    ppppppplVar10 = local_48;
    if (local_48 == ppppppplVar12) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *******)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002bc987;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        ppppppplVar12 = ppppppplVar10;
LAB_002bc987:
        local_38[0] = '\x01';
        pcVar7 = local_40;
        ppppppplVar10 = ppppppplVar12;
      }
      *pcVar7 = '\0';
      ppppppplVar12 = ppppppplVar10;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((g_02709e70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026f8cd8 = FUN_00074a70();
      g_026f8cc0 = "MDEditorScrollView";
      g_026f8cc8 = 0x260;
      g_026f8cd0 = FUN_000749b0;
      g_026f8ce0 = 0;
      ram_00000000026f8ce8 = 0;
      g_026f8cf0 = 0;
      g_026f8d68 = 0;
      ram_00000000026f8d70 = 0;
      g_026f8d78 = 0;
      g_026f8d7a = 1;
      g_026f8cf8 = 0;
      ram_00000000026f8d00 = 0;
      g_026f8d08 = 0;
      ram_00000000026f8d10 = 0;
      g_026f8d18 = 0;
      ram_00000000026f8d20 = 0;
      g_026f8d28 = 0;
      ram_00000000026f8d30 = 0;
      g_026f8d38 = 0;
      ram_00000000026f8d40 = 0;
      g_026f8d48 = 0;
      ram_00000000026f8d50 = 0;
      g_026f8d58 = 0;
      ram_00000000026f8d60 = 0;
      g_026f8d83 = 0;
      g_026f8d7b = 0;
      ___cxa_guard_release();
    }
    plVar8 = &g_02802688;
    if (ppppppplVar12 != (int64_t *******)0x0) {
      (*(*ppppppplVar12)[0x6c])();
      cVar3 = FUN_00e85ea0();
      plVar8 = (int64_t *)&stack0xffffffffffffffb0;
      if (cVar3 == '\0') {
        plVar8 = &g_02802688;
      }
    }
    lVar1 = *plVar8;
    if (lVar1 != 0) {
      if ((local_38[0] == '\0') && (ppppppplVar12 != (int64_t *******)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x002bcaff;
    }
    if (ppppppplVar12 == (int64_t *******)0x0) {
      ppppppplVar12 = (int64_t *******)0x0;
joined_r0x002bcaff:
      if (this_ptr != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar12 == (int64_t *******)0x0) {
        uVar11 = 0;
      }
      else {
        ppppppplVar10 = (int64_t *******)&local_48;
        FUN_01d98320();
        ppppppplVar9 = local_48;
        FUN_00275460();
        if (ppppppplVar9 == (int64_t *******)0x0) {
          ppppppplVar10 = (int64_t *******)&g_02802688;
        }
        else {
          (*(*ppppppplVar9)[0x6c])();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') {
            ppppppplVar10 = (int64_t *******)&g_02802688;
          }
        }
        pppppplVar2 = *ppppppplVar10;
        cVar3 = *(char *)(ppppppplVar10 + 1);
        ppppppplVar9 = (int64_t *******)&stack0xffffffffffffffb0;
        if (cVar3 != '\0') {
          ppppppplVar9 = ppppppplVar10 + 1;
        }
        *(void*)ppppppplVar9 = 0;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar10 = ppppppplVar10 + 1;
        if (pppppplVar2 != (int64_t ******)0x0) {
          if (param_2 != '\0') {
            iVar5 = FUN_01b18580();
            iVar6 = FUN_01caea40();
            iVar4 = 0;
            if (iVar5 != iVar6) {
              iVar4 = iVar6;
            }
            if (iVar5 != iVar4) {
              FUN_00502230(iVar4,iVar4);
            }
            (*(*this_ptr)[0x123])();
          }
          FUN_01caeae0();
          pcVar7 = local_38;
          if (local_40[0] != '\0') {
            pcVar7 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar7 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 != (int64_t *******)0x0) {
            FUN_01caea40();
            FUN_01b18580();
            FUN_01d66ab0();
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
          }
          ppppppplVar10 = local_48;
          if (cVar3 != '\0') {
            FUN_00d50b20();
          }
        }
        uVar11 = CONCAT71((int7)((uint64_t)ppppppplVar10 >> 8),pppppplVar2 != (int64_t ******)0x0)
        ;
      }
      if ((lVar1 != 0) && (ppppppplVar12 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      return uVar11 & 0xffffffff;
    }
  } while( true );
}



// ============================================================
// 002bb5c0
// ============================================================
// Function: FUN_002bb5c0
// Address: 002bb5c0
// Size: 1057 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "MDEditorViewController"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002bb5c0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  char local_68;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  pplVar8 = &local_50;
  FUN_00d3ecf0();
  plVar9 = local_50;
  if ((g_026f7020 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0270aa58 = FUN_00015ff0();
    g_0270aa40 = "MDEditorViewController";
    g_0270aa48 = 0x1e8;
    g_0270aa50 = FUN_00074eb0;
    g_0270aa60 = 0;
    ram_000000000270aa68 = 0;
    g_0270aa70 = 0;
    g_0270aae8 = 0;
    ram_000000000270aaf0 = 0;
    g_0270aaf8 = 0;
    g_0270aafa = 1;
    g_0270aa78 = 0;
    ram_000000000270aa80 = 0;
    g_0270aa88 = 0;
    ram_000000000270aa90 = 0;
    g_0270aa98 = 0;
    ram_000000000270aaa0 = 0;
    g_0270aaa8 = 0;
    ram_000000000270aab0 = 0;
    g_0270aab8 = 0;
    ram_000000000270aac0 = 0;
    g_0270aac8 = 0;
    ram_000000000270aad0 = 0;
    g_0270aad8 = 0;
    ram_000000000270aae0 = 0;
    g_0270ab03 = 0;
    g_0270aafb = 0;
    ___cxa_guard_release();
  }
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_002bb620;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_002bb620:
  plVar9 = *pplVar8;
  local_40[0] = *(char *)(pplVar8 + 1);
  pplVar6 = (int64_t **)local_40;
  if (local_40[0] != '\0') {
    pplVar6 = pplVar8 + 1;
  }
  *(void*)pplVar6 = 0;
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar9 = this_ptr;
    do {
      (**(code **)(*plVar9 + 0x370))();
      plVar7 = local_50;
      if (local_50 == plVar9) {
        if (((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) && (local_48[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_002bb6e7;
        }
      }
      else {
        if (local_48[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          plVar9 = plVar7;
LAB_002bb6e7:
          local_38[0] = '\x01';
          pcVar5 = local_48;
          plVar7 = plVar9;
        }
        *pcVar5 = '\0';
        plVar9 = plVar7;
      }
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_02709e70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026f8cd8 = FUN_00074a70();
        g_026f8cc0 = "MDEditorScrollView";
        g_026f8cc8 = 0x260;
        g_026f8cd0 = FUN_000749b0;
        g_026f8ce0 = 0;
        ram_00000000026f8ce8 = 0;
        g_026f8cf0 = 0;
        g_026f8d68 = 0;
        ram_00000000026f8d70 = 0;
        g_026f8d78 = 0;
        g_026f8d7a = 1;
        g_026f8cf8 = 0;
        ram_00000000026f8d00 = 0;
        g_026f8d08 = 0;
        ram_00000000026f8d10 = 0;
        g_026f8d18 = 0;
        ram_00000000026f8d20 = 0;
        g_026f8d28 = 0;
        ram_00000000026f8d30 = 0;
        g_026f8d38 = 0;
        ram_00000000026f8d40 = 0;
        g_026f8d48 = 0;
        ram_00000000026f8d50 = 0;
        g_026f8d58 = 0;
        ram_00000000026f8d60 = 0;
        g_026f8d83 = 0;
        g_026f8d7b = 0;
        ___cxa_guard_release();
      }
      plVar7 = &g_02802688;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar7 = (int64_t *)&stack0xffffffffffffff90;
        if (cVar3 == '\0') {
          plVar7 = &g_02802688;
        }
      }
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        if ((local_38[0] == '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        plVar7 = plVar9;
        if (this_ptr == (int64_t *)0x0) goto LAB_002bb874;
        goto LAB_002bb86f;
      }
    } while (plVar9 != (int64_t *)0x0);
    plVar7 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_002bb86f:
      FUN_00d50b20();
    }
LAB_002bb874:
    if (plVar7 != (int64_t *)0x0) {
      FUN_0021a630();
      FUN_0197b900();
      plVar2 = local_50;
      if ((local_68 != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == plVar9) {
        (**(code **)(*this_ptr + 0x918))();
      }
    }
    if ((lVar1 != 0) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 004fca20
// ============================================================
// Function: FUN_004fca20
// Address: 004fca20
// Size: 4037 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "handleFeatureSetChanged"
//   "handleSelectDisplayMode"
//   "handleToggleSelectionMasterTuningDisplayMode"
//   "handleToggleIntervalsDegreesDisplayMode"
//   "handleToggleScaleDetectiveDisplayMode"
//   "handleToggleScaleRulerViewDisplayScaleSelection"
//   "handleToggleSnapMode"
//   "handleSelectPitchSnapMode"
//   "handleSwitchPitchDisplayMode"
//   "handleSwitchPitchRulerTitleDisplayMode"
//   "handleSelectNewScale"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004fca20(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02809ae8 = "handleToggleSelectionMasterTuningDisplayMode";
      g_02809af0 = &g_026f8cc0;
      g_02809af8 = 0;
      g_02809b00 = &g_0270aa38;
      g_02809b08 = FUN_0050ec20;
      g_02809b10 = 0x9a9;
      g_02809b18 = 0;
      ram_0000000002809b20 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809b30 = "handleToggleIntervalsDegreesDisplayMode";
      g_02809b38 = &g_026f8cc0;
      g_02809b40 = 0;
      g_02809b48 = &g_0270aa38;
      g_02809b50 = FUN_0050ec20;
      g_02809b58 = 0x9b1;
      g_02809b60 = 0;
      ram_0000000002809b68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809b78 = "handleToggleScaleDetectiveDisplayMode";
      g_02809b80 = &g_026f8cc0;
      g_02809b88 = 0;
      g_02809b90 = &g_0270aa38;
      g_02809b98 = FUN_0050ec20;
      g_02809ba0 = 0x9b9;
      g_02809ba8 = 0;
      ram_0000000002809bb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809bc0 = "handleSelectDisplayMode";
      g_02809bc8 = &g_026f8cc0;
      g_02809bd0 = 0;
      g_02809bd8 = &g_0270aa38;
      g_02809be0 = FUN_0050ec20;
      g_02809be8 = 0x9c1;
      g_02809bf0 = 0;
      ram_0000000002809bf8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809c08 = "handleToggleScaleRulerViewDisplayScaleSelection";
      g_02809c10 = &g_026f8cc0;
      g_02809c18 = 0;
      g_02809c20 = &g_0270aa38;
      g_02809c28 = FUN_0050ec20;
      g_02809c30 = 0x9c9;
      g_02809c38 = 0;
      ram_0000000002809c40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809c50 = "handleToggleSnapMode";
      g_02809c58 = &g_026f8cc0;
      g_02809c60 = 0;
      g_02809c68 = &g_0270aa38;
      g_02809c70 = FUN_0050ec20;
      g_02809c78 = 0x9d1;
      g_02809c80 = 0;
      ram_0000000002809c88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809c98 = "handleFeatureSetChanged";
      g_02809ca0 = &g_026f8cc0;
      g_02809ca8 = 0;
      g_02809cb0 = &g_0270aa3c;
      g_02809cb8 = FUN_0050ecb0;
      g_02809cc0 = 0xa29;
      g_02809cc8 = 0;
      ram_0000000002809cd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809ce0 = "handleSelectPitchSnapMode";
      g_02809ce8 = &g_026f8cc0;
      g_02809cf0 = 0;
      g_02809cf8 = &g_0270aa38;
      g_02809d00 = FUN_0050ec20;
      g_02809d08 = 0x9d9;
      g_02809d10 = 0;
      ram_0000000002809d18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809d28 = "handleSwitchPitchDisplayMode";
      g_02809d30 = &g_026f8cc0;
      g_02809d38 = 0;
      g_02809d40 = &g_0270aa38;
      g_02809d48 = FUN_0050ec20;
      g_02809d50 = 0x9e1;
      g_02809d58 = 0;
      ram_0000000002809d60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809d70 = "handleSwitchPitchRulerTitleDisplayMode";
      g_02809d78 = &g_026f8cc0;
      g_02809d80 = 0;
      g_02809d88 = &g_0270aa38;
      g_02809d90 = FUN_0050ec20;
      g_02809d98 = 0x9e9;
      g_02809da0 = 0;
      ram_0000000002809da8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809db8 = "handleSelectNewScale";
      g_02809dc0 = &g_026f8cc0;
      g_02809dc8 = 0;
      g_02809dd0 = &g_0270aa38;
      g_02809dd8 = FUN_0050ec20;
      g_02809de0 = 0x9f1;
      g_02809de8 = 0;
      ram_0000000002809df0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 0025f0b0
// ============================================================
// Function: FUN_0025f0b0
// Address: 0025f0b0
// Size: 1094 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_0025f0b0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t **pplVar7;
  double dVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  int64_t *local_a8;
  uint8_t local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    return;
  }
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    return;
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_026e1810;
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  dVar8 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar8 * g_023907c0);
  dVar8 = dVar8 * g_023907c0 - g_023907c8;
  uVar9 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar8 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_58 = lVar3;
  local_50 = '\0';
  FUN_000175c0(uVar9,&local_58);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar1;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0 & bVar5) == 0) {
    return;
  }
  FUN_00d3ed20();
  plVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  uVar9 = FUN_00d3ed20();
  local_78 = g_026f6fe0;
  if (g_026f6fe0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_70 = '\x01';
  pplVar7 = &local_40;
  FUN_000175c0(uVar9,&local_78);
  plVar1 = local_40;
  FUN_002771e0();
  if (plVar1 == (int64_t *)0x0) {
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar7 = (int64_t **)&g_02802688;
    }
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  uVar9 = FUN_00d3ed20();
  local_68 = g_026f6fe8;
  if (g_026f6fe8 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_60 = '\x01';
  pplVar7 = &local_98;
  FUN_000175c0(uVar9,&local_68);
  plVar2 = local_98;
  uVar9 = FUN_002771e0();
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Qa;
    if (cVar4 != '\0') goto LAB_0025f3f8;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_0025f3f8:
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  local_a0 = 1;
  local_a8 = plVar2;
  FUN_0025f7c0(uVar9,&local_a8);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002bceb0
// ============================================================
// Function: FUN_002bceb0
// Address: 002bceb0
// Size: 807 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002bceb0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  int64_t *plVar8;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_00d3ecf0();
  plVar1 = local_48;
  FUN_000914a0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_002bcf06;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_002bcf06:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar8 = this_ptr;
    do {
      (**(code **)(*plVar8 + 0x370))();
      plVar6 = local_48;
      if (local_48 == plVar8) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_002bcfc7;
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
          plVar8 = plVar6;
LAB_002bcfc7:
          local_38[0] = '\x01';
          pcVar5 = local_40;
          plVar6 = plVar8;
        }
        *pcVar5 = '\0';
        plVar8 = plVar6;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_02709e70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026f8cd8 = FUN_00074a70();
        g_026f8cc0 = "MDEditorScrollView";
        g_026f8cc8 = 0x260;
        g_026f8cd0 = FUN_000749b0;
        g_026f8ce0 = 0;
        ram_00000000026f8ce8 = 0;
        g_026f8cf0 = 0;
        g_026f8d68 = 0;
        ram_00000000026f8d70 = 0;
        g_026f8d78 = 0;
        g_026f8d7a = 1;
        g_026f8cf8 = 0;
        ram_00000000026f8d00 = 0;
        g_026f8d08 = 0;
        ram_00000000026f8d10 = 0;
        g_026f8d18 = 0;
        ram_00000000026f8d20 = 0;
        g_026f8d28 = 0;
        ram_00000000026f8d30 = 0;
        g_026f8d38 = 0;
        ram_00000000026f8d40 = 0;
        g_026f8d48 = 0;
        ram_00000000026f8d50 = 0;
        g_026f8d58 = 0;
        ram_00000000026f8d60 = 0;
        g_026f8d83 = 0;
        g_026f8d7b = 0;
        ___cxa_guard_release();
      }
      plVar6 = &g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar6 = (int64_t *)&stack0xffffffffffffffa8;
        if (cVar3 == '\0') {
          plVar6 = &g_02802688;
        }
      }
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        if ((local_38[0] == '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (this_ptr == (int64_t *)0x0) goto LAB_002bd15c;
        goto LAB_002bd157;
      }
    } while (plVar8 != (int64_t *)0x0);
    plVar8 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_002bd157:
      FUN_00d50b20();
    }
LAB_002bd15c:
    if (plVar8 != (int64_t *)0x0) {
      FUN_0197b900();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == plVar1) {
        (**(code **)(*this_ptr + 0x918))();
      }
    }
    if ((lVar2 != 0) && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0025c780
// ============================================================
// Function: FUN_0025c780
// Address: 0025c780
// Size: 879 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_0025c780(uint32_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  char *pcVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    return;
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar6 = local_40;
  pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_38[0]);
  pcVar5 = &local_50;
  if (local_38[0] != '\0') {
    pcVar5 = local_38;
  }
  local_50 = local_38[0];
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
    if (plVar6 == (int64_t *)0x0) {
      return;
    }
LAB_0025c7ff:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_0025c7ff;
  if (plVar6 == (int64_t *)0x0) {
    return;
  }
  pplVar7 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000fe4b0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0025c84b:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0025c84b;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_0025cad8;
  (**(code **)(*plVar6 + 0x988))();
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0025c8d7;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_0025c8d7:
    FUN_013fe9a0();
    plVar1 = (int64_t *)CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar1;
    cVar2 = FUN_00d23d70();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_013fe9d0();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_013fe9d0();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_0125a280();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_013fe9d0();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_01264170();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        dVar10 = (double)(**(code **)(*plVar6 + 0x940))();
        dVar11 = (double)(**(code **)(*plVar6 + 0x918))();
        if ((dVar10 + dVar11) - (dVar8 + dVar9) < g_02394dd8) {
          dVar8 = (double)(**(code **)(*plVar6 + 0x918))();
          (**(code **)(*plVar6 + 0x920))(dVar8 + g_02394de0);
          (**(code **)(*plVar6 + 0x540))();
        }
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0025cad8:
  FUN_00d50b20();
  return;
}



// ============================================================
// 002be930
// ============================================================
// Function: FUN_002be930
// Address: 002be930
// Size: 931 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002be930(void* param_1,uint64_t param_2)

{
  void*puVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  void*puVar4;
  void *pvVar5;
  int64_t this_ptr;
  uint32_t uVar6;
  uint64_t in_XMM1_Qb;
  uint8_t auVar7 [16];
  int64_t local_88;
  char local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 200) == 0) {
    FUN_01e53c20();
    uVar6 = FUN_01e3f820();
    uStack_70 = in_XMM1_Qb;
    local_78 = (uint8_t  [8])param_2;
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar7 = blendps(_local_78,g_023b1910,0xd);
    uVar6 = FUN_00d05530(uVar6,auVar7._0_8_,g_023b1608);
    puVar4 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(puVar4 + 0x27) = 0;
    puVar4[0x2e] = 0;
    *(void*)(puVar4 + 0x2f) = 0;
    puVar4[0x30] = 0;
    *(void*)(puVar4 + 0x31) = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    *(void*)(puVar4 + 0x2a) = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    *(void*)((int64_t)puVar4 + 0x165) = 0;
    *(void*)((int64_t)puVar4 + 0x18c) = 0;
    *(void*)((int64_t)puVar4 + 0x194) = 0;
    *(void*)((int64_t)puVar4 + 0x199) = 0;
    puVar4[0x35] = 0;
    puVar4[0x36] = 0;
    puVar4[0x37] = 0;
    puVar4[0x38] = 0;
    *puVar4 = &g_02682cf8;
    param_1 = 0x26837c0;
    puVar4[2] = &g_026837c0;
    puVar4[0x39] = 0;
    puVar4[0x3a] = 0;
    *(void*)(puVar4 + 0x3b) = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    *(void*)(puVar4 + 0x3e) = 0;
    (*g_02682d10)();
    puVar1 = *(void**)(this_ptr + 200);
    local_78._4_4_ = auVar7._4_4_;
    uStack_70._4_4_ = auVar7._12_4_;
    if (puVar1 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 200) = puVar4;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    auVar2._4_4_ = local_78._4_4_;
    auVar2._0_4_ = (float)local_78._4_4_ + g_02390d00;
    auVar2._8_4_ = uStack_70._4_4_;
    auVar2._12_4_ = uStack_70._4_4_;
    auVar7 = insertps(auVar7,auVar2,0x10);
    (**(code **)(**(int64_t **)(this_ptr + 200) + 0x4d0))(uVar6,auVar7._0_8_);
    FUN_01d57ee0();
    FUN_01e53c20();
    plVar3 = local_38;
    local_50 = 0;
    local_58 = *(int64_t *)(this_ptr + 200);
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar3 + 0x450))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_003ba620();
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == (int64_t *)0x0) {
    return;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012f4ba0();
  local_68 = g_026fc8b8;
  if (g_026fc8b8 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_60 = '\x01';
  FUN_000175c0(uVar6,&local_68);
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  FUN_01d57f20();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 0025fab0
// ============================================================
// Function: FUN_0025fab0
// Address: 0025fab0
// Size: 935 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_0025fab0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  bool bVar5;
  double dVar6;
  uint64_t uVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar6 * g_023907c0);
  dVar6 = dVar6 * g_023907c0 - g_023907c8;
  uVar7 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar7,&local_50);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_38 = '\0';
    local_40 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((((lVar2 != 0 & bVar3) == 0) && (*(int *)(this_ptr + 0x198) != 2)) &&
     (*(int64_t *)(this_ptr + 0xb8) != 0)) {
    FUN_004405c0();
    bVar5 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar5 = false;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (bVar5) {
    if (*(int64_t *)(this_ptr + 0xb8) == 0) {
      local_48 = '\0';
      local_50 = 0;
    }
    else {
      FUN_004405c0();
    }
    FUN_004b5af0();
    if (*(int *)(local_40 + 0xc) == 1) {
      if (*(int64_t *)(this_ptr + 0xb8) == 0) {
        local_58 = '\0';
        local_60 = 0;
      }
      else {
        FUN_004405c0();
      }
      FUN_004b5af0();
      bVar3 = FUN_003b7710();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 != 0) {
      if (*(int64_t *)(this_ptr + 0xb8) == 0) {
        local_38 = '\0';
        local_40 = 0;
      }
      else {
        FUN_004405c0();
      }
      FUN_004b8a30();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0xb8) == 0) {
        local_48 = '\0';
        local_50 = 0;
      }
      else {
        FUN_004405c0();
      }
      FUN_004b5af0();
      FUN_003b72f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0xb8) == 0) {
        local_38 = '\0';
        local_40 = 0;
      }
      else {
        FUN_004405c0();
      }
      FUN_004b8a40();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_0022d800();
  FUN_0021a2c0();
  return;
}



// ============================================================
// 002be070
// ============================================================
// Function: FUN_002be070
// Address: 002be070
// Size: 982 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002be070(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  float fVar5;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_00137ae0();
  FUN_01e40eb0();
  lVar2 = local_30;
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x478))();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar4 + 0x27) = 0;
  plVar4[0x2e] = 0;
  *(void*)(plVar4 + 0x2f) = 0;
  plVar4[0x30] = 0;
  *(void*)(plVar4 + 0x31) = 0;
  plVar4[0x28] = 0;
  plVar4[0x29] = 0;
  *(void*)(plVar4 + 0x2a) = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2c] = 0;
  *(void*)((int64_t)plVar4 + 0x165) = 0;
  *(void*)((int64_t)plVar4 + 0x18c) = 0;
  *(void*)((int64_t)plVar4 + 0x194) = 0;
  *(void*)((int64_t)plVar4 + 0x199) = 0;
  plVar4[0x35] = 0;
  plVar4[0x36] = 0;
  plVar4[0x37] = 0;
  plVar4[0x38] = 0;
  *plVar4 = (int64_t)&g_02677e10;
  plVar4[2] = (int64_t)&g_026788e8;
  plVar4[0x39] = (int64_t)&g_02678928;
  *(void*)((int64_t)plVar4 + 500) = 0;
  *(void*)(plVar4 + 0x3f) = 0;
  plVar4[0x43] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x3b] = 0;
  *(void*)(plVar4 + 0x3e) = 0;
  *(void*)((int64_t)plVar4 + 0x1fc) = 0;
  *(void*)((int64_t)plVar4 + 0x204) = 0;
  *(void*)((int64_t)plVar4 + 0x20c) = 0;
  (*g_02677e28)();
  FUN_01cef450();
  FUN_01cef490();
  lVar2 = g_02708ee0;
  if (g_02708ee0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0xa10))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026fc8a8;
  if (g_026fc8a8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  local_50 = local_30;
  local_48 = 0;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  local_48 = '\x01';
  FUN_01cef3b0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6f70;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026fc8b0;
  if (g_026fc8b0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar3;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d31230(&local_60,&local_70);
  local_40 = local_30;
  local_38 = 0;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  local_38 = '\x01';
  (**(code **)(*plVar4 + 0x6a8))();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  fVar5 = (float)(**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x4d8))();
  (**(code **)(*plVar4 + 0x4d0))(fVar5 + g_023b18f0,g_023b1900);
  plVar1 = *(int64_t **)(this_ptr + 0xb8);
  if (plVar1 != plVar4) {
    FUN_00d50b00();
    *(int64_t **)(this_ptr + 0xb8) = plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00261fb0
// ============================================================
// Function: FUN_00261fb0
// Address: 00261fb0
// Size: 1043 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_00261fb0(void)

{
  void*puVar1;
  void *pvVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int iVar4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3 = &g_02572358;
  *puVar1 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t **)(arg1 + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(arg1 + 0x90)))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(arg1 + 0x90)))();
      (**(code **)(&UNK_00001668 + *local_40))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        (**(code **)(&UNK_00001550 + **(int64_t **)(arg1 + 0x90)))();
        (**(code **)(&UNK_00001668 + *local_50))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d235a0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_002623b4;
    }
  }
  FUN_00261550();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_002623b4;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_002623b4;
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar4 = 0;
    do {
      pvVar2 = _pthread_getspecific((void*)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar2 = _pthread_getspecific((void*)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      pvVar2 = _pthread_getspecific((void*)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016670b0();
      pvVar2 = _pthread_getspecific((void*)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d235a0();
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_80 + 0xc));
  }
  FUN_00277f20();
  FUN_00d50b20();
LAB_002623b4:
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 00262a90
// ============================================================
// Function: FUN_00262a90
// Address: 00262a90
// Size: 688 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_00262a90(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  bool bVar6;
  uint64_t local_58;
  uint64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    uVar5 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      uVar5 = *(uint64_t *)(this_ptr + 0x90);
      if (*(uint64_t *)(this_ptr + 0x90) != 0) goto LAB_00262b17;
      uVar5 = 0;
    }
    else {
      uVar5 = local_48;
      if (local_38[0] == '\0') {
LAB_00262b17:
        FUN_00d50b00();
      }
    }
  }
  cVar2 = FUN_00262e30();
  if (cVar2 == '\0') {
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      bVar6 = false;
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      bVar6 = local_48 != 0;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
    if (bVar6) goto LAB_00262bab;
  }
  else {
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
LAB_00262bab:
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      local_58 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      pcVar4 = local_38;
      if (local_40[0] != '\0') {
        pcVar4 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        local_58 = *(uint64_t *)(this_ptr + 0x90);
        if (*(uint64_t *)(this_ptr + 0x90) != 0) goto LAB_00262c17;
        local_58 = 0;
      }
      else {
        local_58 = local_48;
        if (local_38[0] == '\0') {
LAB_00262c17:
          FUN_00d50b00();
        }
      }
    }
    uVar3 = FUN_01b71a90();
    uVar5 = (uint64_t)uVar3;
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      if ((param_2 == '\0') || (*(int64_t *)(this_ptr + 0xa0) != 0)) {
        plVar1 = *(int64_t **)(this_ptr + 0xa0);
      }
      else {
        if (*(int64_t *)(this_ptr + 0xd8) != 0) {
          FUN_00637870();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar5 = local_48;
          if (local_48 != 0) {
            FUN_00637870();
            FUN_006e64a0();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00249a80();
        plVar1 = *(int64_t **)(this_ptr + 0xa0);
      }
      if (plVar1 == (int64_t *)0x0) {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0xb48))();
        uVar5 = (uint64_t)uVar3;
      }
      goto LAB_00262ca5;
    }
  }
  uVar5 = 0;
LAB_00262ca5:
  return uVar5 & 0xffffffff;
}



// ============================================================
// 007f4cf0
// ============================================================
// Function: FUN_007f4cf0
// Address: 007f4cf0
// Size: 658 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_007f4cf0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar5;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar5 = arg1;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_007f4d87;
      }
    }
    else {
      plVar5 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_007f4d87:
        local_38[0] = '\x01';
        pcVar3 = local_40;
      }
      *pcVar3 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_02709e70 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026f8cd8 = FUN_00074a70();
      g_026f8cc0 = "MDEditorScrollView";
      g_026f8cc8 = 0x260;
      g_026f8cd0 = FUN_000749b0;
      g_026f8ce0 = 0;
      ram_00000000026f8ce8 = 0;
      g_026f8cf0 = 0;
      g_026f8d68 = 0;
      ram_00000000026f8d70 = 0;
      g_026f8d78 = 0;
      g_026f8d7a = 1;
      g_026f8cf8 = 0;
      ram_00000000026f8d00 = 0;
      g_026f8d08 = 0;
      ram_00000000026f8d10 = 0;
      g_026f8d18 = 0;
      ram_00000000026f8d20 = 0;
      g_026f8d28 = 0;
      ram_00000000026f8d30 = 0;
      g_026f8d38 = 0;
      ram_00000000026f8d40 = 0;
      g_026f8d48 = 0;
      ram_00000000026f8d50 = 0;
      g_026f8d58 = 0;
      ram_00000000026f8d60 = 0;
      g_026f8d83 = 0;
      g_026f8d7b = 0;
      ___cxa_guard_release();
    }
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffa8;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (arg1 == (int64_t *)0x0) goto LAB_007f4f19;
      goto LAB_007f4f14;
    }
  } while (plVar5 != (int64_t *)0x0);
  plVar5 = (int64_t *)0x0;
  if (arg1 != (int64_t *)0x0) {
LAB_007f4f14:
    FUN_00d50b20();
  }
LAB_007f4f19:
  FUN_0197b900();
  *(void*)(this_ptr + 1) = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_007f4f3c;
    }
    local_48 = (int64_t *)0x0;
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
LAB_007f4f3c:
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0025c370
// ============================================================
// Function: FUN_0025c370
// Address: 0025c370
// Size: 666 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_0025c370(uint32_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  char *pcVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    return;
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar6 = local_40;
  pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_38[0]);
  pcVar5 = &local_50;
  if (local_38[0] != '\0') {
    pcVar5 = local_38;
  }
  local_50 = local_38[0];
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
    if (plVar6 == (int64_t *)0x0) {
      return;
    }
LAB_0025c3ef:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_0025c3ef;
  if (plVar6 == (int64_t *)0x0) {
    return;
  }
  pplVar7 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000fe4b0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0025c43b:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0025c43b;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_0025c5f3;
  (**(code **)(*plVar6 + 0x988))();
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0025c4c7;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_0025c4c7:
    FUN_013fe9a0();
    plVar6 = (int64_t *)CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar6;
    cVar2 = FUN_00d23d70();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_013fe9d0();
      plVar6 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_013fe9d0();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a280();
        FUN_019af490();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0025c5f3:
  FUN_00d50b20();
  return;
}



// ============================================================
// 0025e630
// ============================================================
// Function: FUN_0025e630
// Address: 0025e630
// Size: 632 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025e630(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char *pcVar2;
  int64_t lVar3;
  int64_t this_ptr;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    if (plVar1 == (int64_t *)0x0) {
LAB_0025e6c1:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = &local_58;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_58 = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(int64_t *)(this_ptr + 0x90);
        if (lVar3 == 0) goto LAB_0025e6c1;
      }
      else if (local_58 != '\0') goto LAB_0025e6c3;
      FUN_00d50b00();
    }
LAB_0025e6c3:
    FUN_0199b390();
    if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    if (plVar1 == (int64_t *)0x0) {
LAB_0025e74e:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      lVar3 = local_48;
      pcVar2 = &local_58;
      if (local_40[0] != '\0') {
        pcVar2 = local_40;
      }
      local_58 = local_40[0];
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        lVar3 = *(int64_t *)(this_ptr + 0x90);
        if (lVar3 == 0) goto LAB_0025e74e;
      }
      else if (local_58 != '\0') goto LAB_0025e751;
      FUN_00d50b00();
    }
LAB_0025e751:
    FUN_019ef470();
    if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_026f6e50;
    if (g_026f6e50 != 0) {
      FUN_00d50b00();
    }
    FUN_0023de90();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  lVar3 = local_48;
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_0025e85c:
    lVar3 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar2 = local_38;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      lVar3 = *(int64_t *)(this_ptr + 0x90);
      if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_0025e85c;
    }
    else {
      lVar3 = local_48;
      if (local_38[0] != '\0') goto LAB_0025e85e;
    }
    FUN_00d50b00();
  }
LAB_0025e85e:
  FUN_0199b390();
  FUN_01d66ab0();
  if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 0025d790
// ============================================================
// Function: FUN_0025d790
// Address: 0025d790
// Size: 899 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_0025d790(void)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  int64_t *plVar4;
  void *pvVar5;
  code *pcVar6;
  void*puVar7;
  void* pVar8;
  code *pcVar9;
  int64_t *arg1;
  void*this_ptr;
  int iVar10;
  void*local_58;
  char local_50;
  void*local_48;
  uint8_t local_40 [8];
  uint8_t local_38 [8];
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar2 = g_02572370;
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar10 = 0;
      pcVar9 = g_02572370;
      do {
        puVar3 = local_48;
        pVar8 = (void*)pcVar9;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df480();
        local_38[0] = local_40[0];
        pcVar9 = local_38;
        pcVar6 = local_40;
        if (local_40[0] == (code)0x0) {
          pcVar6 = pcVar9;
        }
        *pcVar6 = (code)0x0;
        if ((local_40[0] != (code)0x0) && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_0025dd10();
        if (local_40[0] == (code)0x0) {
          if (((local_48 != (void*)0x0) && (FUN_00d50b00(), local_40[0] != (code)0x0)) &&
             (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = (code)0x0;
        }
        puVar7 = local_48;
        if (local_48 == (void*)0x0) {
          puVar7 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &g_02572358;
          (*pcVar2)();
          FUN_0025ddc0();
        }
        pvVar5 = _pthread_getspecific((void*)pcVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if (local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = local_58;
        local_40[0] = (code)0x0;
        FUN_00d21140();
        if ((local_40[0] != (code)0x0) && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (local_58 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != (code)0x0) && (puVar3 != (void*)0x0)) {
          FUN_00d50b20();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0025ece0
// ============================================================
// Function: FUN_0025ece0
// Address: 0025ece0
// Size: 641 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_0025ece0(uint64_t param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t local_70;
  char local_68;
  int64_t *local_58;
  char local_50 [32];
  int64_t *plVar4;
  
  FUN_01caeae0();
  local_50[0x10] = local_50[0];
  pcVar1 = local_50 + 0x10;
  if (local_50[0] != '\0') {
    pcVar1 = local_50;
  }
  *pcVar1 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)(this_ptr + 0x198) == 1) {
    FUN_01d66ab0();
    uVar3 = 0;
    goto LAB_0025ef3d;
  }
  if (*(int *)(this_ptr + 0x198) == 2) {
    uVar3 = 0;
    FUN_01d66ab0();
    goto LAB_0025ef3d;
  }
  plVar4 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar4))();
  local_50[0x18] = local_50[0];
  pcVar1 = local_50;
  if (local_50[0] == '\0') {
    pcVar1 = local_50 + 0x18;
  }
  *pcVar1 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_0025edc1:
    FUN_00d50b00();
  }
  else {
    plVar5 = local_58;
    if (local_50[0x18] == '\0') goto LAB_0025edc1;
  }
  (**(code **)(&UNK_00001670 + *plVar5))();
  local_50[0xf] = FUN_000bdcd0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (param_2 != '\0') {
    plVar4 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar4))();
    pcVar1 = local_50;
    if (local_50[0] == '\0') {
      pcVar1 = local_50 + 0x18;
    }
    local_50[0x18] = local_50[0];
    *pcVar1 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == (int64_t *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_0025ee6c:
      FUN_00d50b00();
    }
    else {
      plVar5 = local_58;
      if (local_50[0x18] == '\0') goto LAB_0025ee6c;
    }
    (**(code **)(&UNK_00001670 + *plVar5))();
    bVar2 = local_50[0xf] ^ 1;
    FUN_000bdcb0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    *(byte *)(this_ptr + 0x1a0) = bVar2;
    FUN_00d6f370();
    plVar4 = g_026f6dc8;
    if (g_026f6dc8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d707b0();
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0022ee90();
  }
  uVar3 = CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
  FUN_01d66ab0();
LAB_0025ef3d:
  if ((local_50[0x10] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar3 & 0xffffffff;
}



// ============================================================
// 004fdeb0
// ============================================================
// Function: FUN_004fdeb0
// Address: 004fdeb0
// Size: 796 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004fdeb0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
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
  int64_t local_70;
  char local_68;
  int64_t local_30;
  char local_28;
  
  FUN_0197a220();
  FUN_00d403d0();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_02709dd0;
  if (g_02709dd0 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_02709de0;
  if (g_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026f6cf0;
  local_90 = lVar1;
  local_88 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_000bf690(&local_80,&local_90,&local_70);
  lVar1 = *(int64_t *)(this_ptr + 0x240);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_004fe149;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_004fe0fe;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x240);
    *(int64_t *)(this_ptr + 0x240) = local_30;
  }
  else {
    local_28 = '\0';
LAB_004fe0fe:
    *(int64_t *)(this_ptr + 0x240) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_004fe149:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x220) = 0;
  return;
}



// ============================================================
// 002be670
// ============================================================
// Function: FUN_002be670
// Address: 002be670
// Size: 516 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002be670(void)

{
  int64_t *plVar1;
  char cVar2;
  char *pcVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t local_60;
  int64_t *local_58;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr[0x17] == 0) {
    return;
  }
  FUN_01e40eb0();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    return;
  }
  plVar4 = this_ptr + 0x17;
  plVar1 = (int64_t *)*plVar4;
  FUN_000f5df0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_002be6fa;
  }
  plVar4 = &g_02802688;
LAB_002be6fa:
  local_58 = (int64_t *)*plVar4;
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b00();
    FUN_00d50b00();
    local_38[0] = '\0';
    do {
      (**(code **)(*this_ptr + 0x370))();
      if (local_48 == this_ptr) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0'))
        goto LAB_002be787;
      }
      else {
        this_ptr = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
LAB_002be787:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      plVar4 = &g_02802688;
      if (this_ptr != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar4 = &local_60;
        if (cVar2 == '\0') {
          plVar4 = &g_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (this_ptr != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (this_ptr != (int64_t *)0x0);
    FUN_00d50b20();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00791130();
      (**(code **)(*local_58 + 0x918))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005ba8e0
// ============================================================
// Function: FUN_005ba8e0
// Address: 005ba8e0
// Size: 1592 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "GNAnimationOwner"
//   "MDScrollViewAdds"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_005ba8e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_005ba230();
  this_ptr[0x3d] = &g_02505788;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x3e] = &g_024dba80;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024ffe18;
  this_ptr[2] = &g_02500858;
  this_ptr[0x3d] = &g_02500898;
  this_ptr[0x3e] = &g_025008c8;
  FUN_005bb0e0();
  FUN_005bb410();
  FUN_005bb740();
  FUN_005bba70();
  FUN_005bbda0();
  *(void*)(this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8d7b == '\0') {
    FUN_005bc0d0();
    FUN_00e87980();
  }
  FUN_005bc320();
  *(void*)(this_ptr + 0x46) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8d7b == '\0') {
    FUN_005bc650();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x234) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8d7b == '\0') {
    FUN_005bc7e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x235) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8d7b == '\0') {
    FUN_005bc970();
    FUN_00e87980();
  }
  FUN_005bcb00();
  FUN_005bcdc0();
  FUN_005bd0f0();
  FUN_005bd3b0();
  FUN_005bd6e0();
  return;
}



// ============================================================
// 005bc0d0
// ============================================================
// Function: FUN_005bc0d0
// Address: 005bc0d0
// Size: 547 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
//   "MUScaleRulerViewDisplayMode"
//   "_scaleRulerViewDisplayMode"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void* FUN_005bc0d0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02719dd8 = "_scaleRulerViewDisplayMode";
      g_02719de0 = &g_026f8cc0;
      g_02719de8 = 0;
      g_02719df0 = 0x6500;
      g_02719df8 = "MUScaleRulerViewDisplayMode";
      g_02719e00 = &g_0270f510;
      g_02719e08 = 0;
      ram_0000000002719e10 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02719dd8;
}



// ============================================================
// 00562f50
// ============================================================
// Function: FUN_00562f50
// Address: 00562f50
// Size: 509 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_00562f50(void)

{
  int iVar1;
  uint32_t uVar2;
  
  // [STATIC_INIT: property registration]
  if (g_026f8d7b != '\0') {
    return;
  }
  FUN_005b9fd0();
  FUN_00e87760();
  FUN_00074c30();
  FUN_00d50c00();
  FUN_005ba8e0();
  FUN_00d50c00();
  FUN_00e87770();
  uVar2 = FUN_004fca20();
  FUN_00e87920(uVar2,0);
  FUN_004fc1b0();
  FUN_00508060();
  FUN_00508060();
  return;
}

