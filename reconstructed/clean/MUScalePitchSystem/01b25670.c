// Function: FUN_01b25670
// Address: 01b25670
// Size: 3713 bytes
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


uint64_t FUN_01b25670(void* param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  void* pVar9;
  int64_t *plVar10;
  undefined7 uVar11;
  int64_t this_ptr;
  int64_t *plVar12;
  int64_t **pplVar13;
  uint32_t uVar14;
  float fVar15;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if ((*(char *)(this_ptr + 0x315) != '\0') && (*(char *)(this_ptr + 0x316) != '\0')) {
    FUN_01caeae0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b256ec;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_01b256ec:
      FUN_01d64cb0();
      plVar10 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
      }
      else {
        FUN_01d64cb0();
        iVar3 = FUN_01d5b230();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar10 = (int64_t *)(uint64_t)CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != 0);
        if ((iVar3 != 0) && (param_2 != '\0')) {
          FUN_01caeae0();
          plVar12 = local_40;
          if ((local_38 == '\0') &&
             (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
              (local_40 != (int64_t *)0x0)))) {
            FUN_00d50b20();
          }
          local_60 = plVar12;
          FUN_01ad3cb0();
          local_80 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
              goto LAB_01b257bf;
            }
          }
          else {
LAB_01b257bf:
            if ((plVar12 != (int64_t *)0x0) && (local_80 != (int64_t *)0x0)) {
              local_70 = plVar1;
              uVar14 = FUN_01d66da0();
              local_148 = g_027e3c40;
              if (g_027e3c40 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_140 = '\x01';
              pplVar13 = &local_40;
              FUN_000175c0(uVar14,&local_148);
              plVar1 = local_40;
              if ((g_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
                g_0270ab28 = FUN_0015ea50();
                g_0270ab10 = "MUScalePitchSystem";
                g_0270ab18 = 0x78;
                param_1 = 0x15ecf0;
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
              if (plVar1 == (int64_t *)0x0) {
                pplVar13 = (int64_t **)&g_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar2 = FUN_00e85ea0();
                if (cVar2 == '\0') {
                  pplVar13 = (int64_t **)&g_02802688;
                }
              }
              local_58 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (local_58 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar13 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_140 != '\0') && (local_148 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar14 = FUN_01d66da0();
              local_138 = g_027e3de0;
              if (g_027e3de0 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_130 = '\x01';
              pplVar13 = &local_40;
              FUN_000175c0(uVar14,&local_138);
              plVar1 = local_40;
              FUN_0013db50();
              if (plVar1 == (int64_t *)0x0) {
LAB_01b25955:
                pplVar13 = (int64_t **)&g_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar2 = FUN_00e85ea0();
                if (cVar2 == '\0') goto LAB_01b25955;
              }
              plVar1 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar13 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_130 != '\0') && (local_138 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_88 = plVar1;
              uVar14 = FUN_01d66da0();
              local_128 = g_02709968;
              if (g_02709968 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_120 = '\x01';
              pplVar13 = &local_40;
              FUN_000175c0(uVar14,&local_128);
              plVar1 = local_40;
              FUN_002771e0();
              if (plVar1 == (int64_t *)0x0) {
LAB_01b25a38:
                pplVar13 = (int64_t **)&g_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar2 = FUN_00e85ea0();
                if (cVar2 == '\0') goto LAB_01b25a38;
              }
              plVar12 = local_60;
              local_78 = *pplVar13;
              if (*(char *)(pplVar13 + 1) == '\0') {
                if (local_78 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar13 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_120 != '\0') && (local_128 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              plVar1 = local_58;
              if (((local_88 != (int64_t *)0x0) && (local_58 != (int64_t *)0x0)) &&
                 (local_78 != (int64_t *)0x0)) {
                local_118 = local_58;
                local_110 = '\0';
                FUN_0173b120();
                plVar10 = local_40;
                if (plVar1 == local_40) {
LAB_01b25b33:
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    local_58 = plVar10;
                    FUN_00d50b20();
                    goto LAB_01b25b33;
                  }
                  local_58 = local_40;
                  FUN_00d50b20();
                  local_38 = '\0';
                  local_58 = plVar10;
                }
                if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar5 = _pthread_getspecific(param_1);
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  param_1 = (void*)local_80;
                }
                fVar15 = (float)FUN_0173e3a0();
                iVar3 = FUN_00e7d780(fVar15 / g_023908e0);
                if (iVar3 != 0) {
                  iVar4 = FUN_01d654a0();
                  if (iVar4 == 0) {
                    pvVar5 = _pthread_getspecific(param_1);
                    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                      param_1 = (void*)local_58;
                    }
                    FUN_0173b6f0();
                    pvVar5 = _pthread_getspecific(param_1);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01738020();
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    iVar4 = FUN_01d654a0();
                    if (iVar4 == 1) {
                      pvVar5 = _pthread_getspecific(param_1);
                      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                        param_1 = (void*)local_58;
                      }
                      FUN_0174dc60();
                      pvVar5 = _pthread_getspecific(param_1);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0173ecc0((float)iVar3 * g_023908e0);
                    }
                  }
                }
                *(void*)(this_ptr + 0x1d8) = 0;
                *(void*)(this_ptr + 0x1da) = 1;
                FUN_01a1d6e0();
                plVar1 = local_40;
                plVar12 = local_60;
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar1 != (int64_t *)0x0) {
                  FUN_01a1d6e0();
                  (**(code **)(*local_50 + 0xa20))();
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
                  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_68 = plVar1;
                  uVar14 = FUN_01a1d6e0();
                  local_108 = local_78;
                  local_100 = '\0';
                  FUN_019c1760(uVar14,&local_108);
                  local_b8 = local_40;
                  local_b0 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_b0 = '\x01';
                  pVar9 = 0;
                  uVar14 = FUN_012912a0(0,0,0);
                  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_f8 = local_88;
                  local_f0 = '\0';
                  pvVar5 = _pthread_getspecific(pVar9);
                  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                    pVar9 = (void*)local_78;
                  }
                  FUN_0132d610();
                  local_a8 = local_40;
                  local_a0 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_a0 = '\x01';
                  FUN_01a1d6e0();
                  (**(code **)(*local_158 + 0x9f8))();
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012caf10();
                  local_98 = local_50;
                  local_90 = 0;
                  if (local_48 == '\0') {
                    if (local_50 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_48 = '\0';
                  }
                  local_90 = '\x01';
                  uVar7 = FUN_00e7bdb0();
                  uVar8 = FUN_00e7bdb0();
                  local_d0 = '\0';
                  local_d8 = 0;
                  pVar9 = (void*)&local_98;
                  FUN_01516650(uVar14,&local_a8,uVar7,uVar8);
                  plVar12 = local_60;
                  if ((local_d0 != '\0') && (local_d8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific(pVar9);
                  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                    pVar9 = (void*)local_68;
                  }
                  FUN_0150eb60();
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_018232c0();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific(pVar9);
                  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                    pVar9 = (void*)local_68;
                  }
                  FUN_01510030();
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0124ae40();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_01a1d6e0();
                  (**(code **)(*local_50 + 0x9f8))();
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
                  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012cb110();
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e7210();
                  plVar10 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                       (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_c8 = plVar10;
                  local_c0 = '\0';
                  FUN_012879b0();
                  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar10 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if (plVar1 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if (local_68 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              plVar10 = local_58;
              if (local_88 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (plVar10 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          uVar11 = (undefined7)((uint64_t)plVar10 >> 8);
          if (plVar12 == (int64_t *)0x0) {
            plVar10 = (int64_t *)CONCAT71(uVar11,1);
          }
          else {
            plVar10 = (int64_t *)CONCAT71(uVar11,1);
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
      goto LAB_01b263cf;
    }
  }
  plVar10 = (int64_t *)0x0;
LAB_01b263cf:
  return (uint64_t)plVar10 & 0xffffffff;
}

