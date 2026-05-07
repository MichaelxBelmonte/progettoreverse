// ===================================================================
// GNOverloudConvolverController — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 00c22fb0
// ============================================================
// Function: FUN_00c22fb0
// Address: 00c22fb0
// Size: 2955 bytes
// Class: GNOverloudConvolverController

void FUN_00c22fb0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  bool bVar6;
  uint32_t uVar7;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  int local_d0;
  int iStack_cc;
  int local_c8;
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
  
  FUN_01e534b0();
  uVar7 = FUN_01d265f0();
  lVar2 = local_e8;
  if (local_e0 == '\0') {
    if (local_e8 == 0) {
      return;
    }
    uVar7 = FUN_00d50b00();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_e8 == 0) {
    return;
  }
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = lVar2;
  local_d0 = -1;
  iStack_cc = 0;
  local_c8 = 0;
  while( true ) {
    if (iStack_cc != 0) {
      if (iStack_cc < 1) {
        iStack_cc = -iStack_cc;
      }
      else {
        local_d0 = local_d0 - iStack_cc;
        uVar7 = FUN_00d23690();
        local_c8 = local_c8 + iStack_cc;
        iStack_cc = 0;
      }
    }
    lVar2 = g_027e7c20;
    lVar4 = (int64_t)local_d0;
    local_d0 = local_d0 + 1;
    if (*(int *)(local_d8 + 0xc) <= local_d0) break;
    local_e8 = *(void*)(*(int64_t *)(local_d8 + 0x10) + 8 + lVar4 * 8);
    if (g_027e7c20 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_188 = lVar2;
    local_180 = '\x01';
    uVar7 = FUN_01ccab60(uVar7,&local_188);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = g_0276ca18;
    if (plVar1 != (int64_t *)0x0) {
      if (g_0276ca18 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar2;
      local_170 = '\x01';
      cVar3 = FUN_00d90870();
      if (cVar3 == '\0') {
        bVar6 = false;
      }
      else {
        FUN_01ccad60();
        plVar1 = local_40;
        FUN_001f8a30();
        pplVar5 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar5 = &local_40;
          if (cVar3 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
        bVar6 = *pplVar5 != (int64_t *)0x0;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_0276ca20;
      if (bVar6) {
        FUN_01ccad60();
        lVar2 = g_028a5a18;
        local_b8 = 0;
        if (g_028a5a18 != 0) {
          FUN_00d50b00();
        }
        local_c0 = lVar2;
        local_b8 = '\x01';
        FUN_01e058f0();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_0276ca20 != 0) {
          FUN_00d50b00();
        }
        local_168 = lVar2;
        local_160 = '\x01';
        cVar3 = FUN_00d90870();
        if (cVar3 == '\0') {
          bVar6 = false;
        }
        else {
          FUN_01ccad60();
          plVar1 = local_40;
          FUN_001f8a30();
          pplVar5 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar5 = &local_40;
            if (cVar3 == '\0') {
              pplVar5 = (int64_t **)&g_02802688;
            }
          }
          bVar6 = *pplVar5 != (int64_t *)0x0;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = g_0276ca28;
        if (bVar6) {
          FUN_01ccad60();
          lVar2 = g_028a5a18;
          local_a8 = 0;
          if (g_028a5a18 != 0) {
            FUN_00d50b00();
          }
          local_b0 = lVar2;
          local_a8 = '\x01';
          FUN_01e058f0();
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (g_0276ca28 != 0) {
            FUN_00d50b00();
          }
          local_158 = lVar2;
          local_150 = '\x01';
          cVar3 = FUN_00d90870();
          if (cVar3 == '\0') {
            bVar6 = false;
          }
          else {
            FUN_01ccad60();
            plVar1 = local_40;
            FUN_001f8a30();
            pplVar5 = (int64_t **)&g_02802688;
            if (plVar1 != (int64_t *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar3 = FUN_00e85ea0();
              pplVar5 = &local_40;
              if (cVar3 == '\0') {
                pplVar5 = (int64_t **)&g_02802688;
              }
            }
            bVar6 = *pplVar5 != (int64_t *)0x0;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          lVar2 = g_0276ca30;
          if (bVar6) {
            FUN_01ccad60();
            lVar2 = g_028a5a18;
            local_98 = 0;
            if (g_028a5a18 != 0) {
              FUN_00d50b00();
            }
            local_a0 = lVar2;
            local_98 = '\x01';
            FUN_01e058f0();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (g_0276ca30 != 0) {
              FUN_00d50b00();
            }
            local_148 = lVar2;
            local_140 = '\x01';
            cVar3 = FUN_00d90870();
            if (cVar3 == '\0') {
              bVar6 = false;
            }
            else {
              FUN_01ccad60();
              plVar1 = local_40;
              FUN_001f8a30();
              pplVar5 = (int64_t **)&g_02802688;
              if (plVar1 != (int64_t *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar5 = &local_40;
                if (cVar3 == '\0') {
                  pplVar5 = (int64_t **)&g_02802688;
                }
              }
              bVar6 = *pplVar5 != (int64_t *)0x0;
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = g_0276ca48;
            if (bVar6) {
              FUN_01ccad60();
              FUN_01e05950();
              plVar1 = local_40;
              FUN_00037f20();
              pplVar5 = (int64_t **)&g_02802688;
              if (plVar1 != (int64_t *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar5 = &local_40;
                if (cVar3 == '\0') {
                  pplVar5 = (int64_t **)&g_02802688;
                }
              }
              plVar1 = *pplVar5;
              if (*(char *)(pplVar5 + 1) == '\0') {
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar5 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              lVar2 = g_0276ca38;
              if (plVar1 != (int64_t *)0x0) {
                if (g_0276ca38 != 0) {
                  FUN_00d50b00();
                }
                local_138 = lVar2;
                local_130 = '\x01';
                uVar7 = FUN_00d46dc0(0);
                local_80 = local_40;
                local_78 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    uVar7 = FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_78 = '\x01';
                FUN_00d4bf20(uVar7,&local_80);
                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_130 != '\0') && (local_138 != 0)) {
                  FUN_00d50b20();
                }
                lVar2 = g_0276ca40;
                if (g_0276ca40 != 0) {
                  FUN_00d50b00();
                }
                local_128 = lVar2;
                local_120 = '\x01';
                uVar7 = FUN_00d46dc0(g_02393944);
                local_70 = local_40;
                local_68 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    uVar7 = FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_68 = '\x01';
                FUN_00d4bf20(uVar7,&local_70);
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_120 != '\0') && (local_128 != 0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            else {
              if (g_0276ca48 != 0) {
                FUN_00d50b00();
              }
              local_118 = lVar2;
              local_110 = '\x01';
              cVar3 = FUN_00d90870();
              if (cVar3 == '\0') {
                bVar6 = false;
              }
              else {
                FUN_01ccad60();
                plVar1 = local_40;
                FUN_001f8a30();
                pplVar5 = (int64_t **)&g_02802688;
                if (plVar1 != (int64_t *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar3 = FUN_00e85ea0();
                  pplVar5 = &local_40;
                  if (cVar3 == '\0') {
                    pplVar5 = (int64_t **)&g_02802688;
                  }
                }
                bVar6 = *pplVar5 != (int64_t *)0x0;
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_110 != '\0') && (local_118 != 0)) {
                FUN_00d50b20();
              }
              if (bVar6) {
                FUN_01ccad60();
                FUN_01e05950();
                plVar1 = local_40;
                FUN_00037f20();
                pplVar5 = (int64_t **)&g_02802688;
                if (plVar1 != (int64_t *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar3 = FUN_00e85ea0();
                  pplVar5 = &local_40;
                  if (cVar3 == '\0') {
                    pplVar5 = (int64_t **)&g_02802688;
                  }
                }
                plVar1 = *pplVar5;
                if (*(char *)(pplVar5 + 1) == '\0') {
                  if (plVar1 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(void*)(pplVar5 + 1) = 0;
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                lVar2 = g_0276ca50;
                if (plVar1 != (int64_t *)0x0) {
                  if (g_0276ca50 != 0) {
                    FUN_00d50b00();
                  }
                  local_108 = lVar2;
                  local_100 = '\x01';
                  uVar7 = FUN_00d46dc0(0);
                  local_60 = local_40;
                  local_58 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      uVar7 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_58 = '\x01';
                  FUN_00d4bf20(uVar7,&local_60);
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_100 != '\0') && (local_108 != 0)) {
                    FUN_00d50b20();
                  }
                  lVar2 = g_0276ca58;
                  if (g_0276ca58 != 0) {
                    FUN_00d50b00();
                  }
                  local_f8 = lVar2;
                  local_f0 = '\x01';
                  uVar7 = FUN_00d46dc0(g_02393944);
                  local_50 = local_40;
                  local_48 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      uVar7 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_48 = '\x01';
                  FUN_00d4bf20(uVar7,&local_50);
                  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_f0 != '\0') && (local_f8 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
            }
          }
        }
      }
      uVar7 = FUN_00d50b20();
    }
  }
  FUN_01d300d0();
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c24870
// ============================================================
// Function: FUN_00c24870
// Address: 00c24870
// Size: 1292 bytes
// Class: GNOverloudConvolverController

uint64_t FUN_00c24870(void*param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void*puVar5;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_0276ca60;
  puVar5 = param_1;
  if (g_0276ca60 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar1;
  local_e0 = '\x01';
  cVar2 = FUN_00d90870();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276ca68;
  uVar6 = CONCAT71((int7)((uint64_t)puVar5 >> 8),1);
  if (cVar2 == '\0') {
    if (g_0276ca68 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar1;
    local_d0 = '\x01';
    cVar2 = FUN_00d90870();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_0276ca70;
    if (cVar2 == '\0') {
      if (g_0276ca70 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar1;
      local_c0 = '\x01';
      cVar2 = FUN_00d90870();
      uVar7 = extraout_XMM0_Qa;
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      lVar1 = g_0276ca78;
      if (cVar2 == '\0') {
        if (g_0276ca78 != 0) {
          FUN_00d50b00();
        }
        local_b8 = lVar1;
        local_b0 = '\x01';
        cVar2 = FUN_00d90870();
        uVar7 = extraout_XMM0_Qa_00;
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          uVar7 = FUN_00d50b20();
        }
        lVar1 = g_0276ca18;
        if (cVar2 == '\0') {
          if (g_0276ca18 != 0) {
            FUN_00d50b00();
          }
          local_a8 = lVar1;
          local_a0 = '\x01';
          cVar2 = FUN_00d90870();
          uVar7 = extraout_XMM0_Qa_01;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          lVar1 = g_0276be50;
          if (cVar2 == '\0') {
            if (g_0276be50 != 0) {
              FUN_00d50b00();
            }
            local_98 = lVar1;
            local_90 = '\x01';
            cVar2 = FUN_00d90870();
            uVar7 = extraout_XMM0_Qa_02;
            if ((local_90 != '\0') && (local_98 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              local_f8 = *param_1;
              local_f0 = 0;
              uVar4 = FUN_00c25040(&local_f8);
              uVar6 = (uint64_t)uVar4;
              goto LAB_00c24d68;
            }
            lVar1 = *param_2;
            FUN_00d8f140(uVar7,5);
            local_58 = local_40;
            local_50 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_50 = '\x01';
            iVar3 = FUN_00c716c0();
            local_48 = -(uint64_t)
                        (*(double *)
                          (*(int64_t *)
                            (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar3 * 8)
                          + 0x20) != 0.0);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar1 = *param_2;
            FUN_00d8f140(uVar7,0xe);
            local_68 = local_40;
            local_60 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_60 = '\x01';
            iVar3 = FUN_00c716c0();
            local_48 = -(uint64_t)
                        (*(double *)
                          (*(int64_t *)
                            (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar3 * 8)
                          + 0x20) != 0.0);
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          lVar1 = *param_2;
          FUN_00d8f140(uVar7,7);
          local_78 = local_40;
          local_70 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_70 = '\x01';
          iVar3 = FUN_00c716c0();
          local_48 = -(uint64_t)
                      (*(double *)
                        (*(int64_t *)
                          (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar3 * 8) +
                        0x20) != 0.0);
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        lVar1 = *param_2;
        FUN_00d8f140(uVar7,6);
        local_88 = local_40;
        local_80 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = '\x01';
        iVar3 = FUN_00c716c0();
        local_48 = -(uint64_t)
                    (*(double *)
                      (*(int64_t *)
                        (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar3 * 8) +
                      0x20) != 0.0);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar6 = (uint64_t)((uint)local_48 & 1);
    }
    else {
      uVar6 = 0;
    }
  }
LAB_00c24d68:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 00c243f0
// ============================================================
// Function: FUN_00c243f0
// Address: 00c243f0
// Size: 672 bytes
// Class: GNOverloudConvolverController

void FUN_00c243f0(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t **pplVar3;
  int64_t lVar4;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  
  FUN_01e53f10();
  FUN_01e53c20();
  FUN_01e42030();
  (**(code **)(*local_a0 + 0x640))();
  (**(code **)(*local_b0 + 0x378))();
  FUN_01d44d80(g_023b36b0);
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  (**(code **)(*local_48 + 0x4a0))();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    local_38 = local_70;
    if (0 < *(int *)(local_70 + 0xc)) {
      lVar4 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + lVar4 * 8);
        local_48 = plVar1;
        FUN_001f8a30();
        pplVar3 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar3 = &local_48;
          if (cVar2 == '\0') {
            pplVar3 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x9d8))();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_70 + 0xc));
    }
    FUN_00c4e7a0();
    FUN_00d50b20();
    local_70 = local_38;
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c22cc0
// ============================================================
// Function: FUN_00c22cc0
// Address: 00c22cc0
// Size: 679 bytes
// Class: GNOverloudConvolverController
// String references:
//   "handleOpenSoundfile"
//   "handleDeleteSoundfile"
//   "GNOverloudConvolverController"

void FUN_00c22cc0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028a5e98 = "handleOpenSoundfile";
      g_028a5ea0 = &g_0276df88;
      g_028a5ea8 = 0;
      g_028a5eb0 = &g_02771218;
      g_028a5eb8 = FUN_00c4e710;
      g_028a5ec0 = 0x639;
      g_028a5ec8 = 0;
      ram_00000000028a5ed0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a5ee0 = "handleDeleteSoundfile";
      g_028a5ee8 = &g_0276df88;
      g_028a5ef0 = 0;
      g_028a5ef8 = &g_02771218;
      g_028a5f00 = FUN_00c4e710;
      g_028a5f08 = 0x641;
      g_028a5f10 = 0;
      ram_00000000028a5f18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

