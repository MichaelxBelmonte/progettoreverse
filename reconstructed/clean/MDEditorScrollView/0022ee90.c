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

