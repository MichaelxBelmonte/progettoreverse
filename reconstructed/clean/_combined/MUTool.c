// ===================================================================
// MUTool — Complete reconstructed pseudocode
// 37 functions
// ===================================================================


// ============================================================
// 01721000
// ============================================================
// Function: FUN_01721000
// Address: 01721000
// Size: 15762 bytes
// Class: MUTool
// String references:
//   " %@"
//   "/%@"
//   "1%@"
//   "3%@"
//   "5%@"
//   " bass"
//   "sus2"
//   "sus4"
//   "sus"

void FUN_01721000(int64_t *param_1,int64_t *param_2)

{
  code *pcVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t *plVar4;
  char cVar5;
  byte bVar6;
  uint32_t uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void*puVar11;
  void*puVar12;
  uint64_t uVar13;
  undefined7 uVar16;
  uint64_t uVar14;
  uint *puVar15;
  uint uVar17;
  int64_t *plVar18;
  int64_t arg1;
  void*this_ptr;
  int iVar19;
  int64_t lVar20;
  int64_t lVar21;
  bool bVar22;
  void*local_490;
  uint8_t local_488;
  void*local_480;
  uint8_t local_478;
  void*local_470;
  uint8_t local_468;
  void*local_460;
  uint8_t local_458;
  void*local_450;
  uint8_t local_448;
  void*local_440;
  uint8_t local_438;
  int64_t *local_430;
  uint8_t local_428;
  void*local_420;
  uint8_t local_418;
  void*local_410;
  uint8_t local_408;
  uint8_t local_400 [8];
  uint8_t local_3f8;
  void*local_3f0;
  uint8_t local_3e8;
  void*local_3e0;
  uint8_t local_3d8;
  uint8_t local_3d0 [8];
  uint8_t local_3c8;
  int64_t local_3c0;
  void*local_3b8;
  char local_3b0;
  void*local_3a8;
  char local_3a0;
  int64_t local_398;
  char local_390;
  int64_t local_388;
  char local_380;
  int64_t local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  int64_t *local_358;
  char local_350;
  int64_t local_348;
  char local_340;
  int64_t local_338;
  char local_330;
  int64_t *local_328;
  char local_320;
  int64_t *local_318;
  char local_310;
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  void*local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  void*local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  void*local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  void*local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  void*local_268;
  char local_260;
  void*local_258;
  char local_250;
  void*local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d0;
  char local_1c8;
  void*local_1c0;
  char local_1b8;
  uint64_t local_1b0;
  uint32_t local_1a8;
  uint32_t local_1a4;
  void*local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  void*local_160;
  char local_158;
  void*local_150;
  char local_148;
  int64_t *local_140;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  void*local_118;
  char local_110;
  void*local_108;
  char local_100;
  void*local_f8;
  uint64_t local_f0;
  void*local_e8;
  void*local_e0;
  uint64_t local_d8;
  char local_d0;
  void*local_c8;
  void*local_c0;
  void*local_b8;
  int64_t *local_b0;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_78;
  uint64_t local_70;
  char local_68;
  uint local_5c;
  void*local_58;
  int64_t *local_50;
  uint local_48 [2];
  int64_t local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_140 = param_1;
  local_b0 = param_2;
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_025795a8;
  local_58 = puVar11;
  (*g_025795c0)();
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_02572358;
  pcVar1 = g_02572370;
  (*g_02572370)();
  local_c8 = puVar11;
  if (*(int64_t *)(arg1 + 0x38) == 0) {
    FUN_0171aac0();
    lVar21 = CONCAT71(local_70._1_7_,(char)local_70);
    FUN_01715620();
    FUN_01780260();
    local_e0 = local_50;
    if (local_50 == (void*)0x0) {
      local_e0 = (void*)0x0;
      local_f0 = 0;
    }
    else if ((char)local_48[0] == '\0') {
      uVar13 = FUN_00d50b00();
      local_f0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
      local_f0 = CONCAT71((int7)((uint64_t)local_50 >> 8),1);
    }
    if ((local_68 != '\0') && (lVar21 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_0171aac0();
    lVar21 = CONCAT71(local_70._1_7_,(char)local_70);
    uVar7 = FUN_01715620();
    local_1c8 = 0;
    local_1d0 = *(int64_t *)(arg1 + 0x38);
    if (local_1d0 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = '\x01';
    FUN_01780290(&local_1d0,uVar7);
    local_e0 = local_50;
    if (local_50 == (void*)0x0) {
      local_e0 = (void*)0x0;
      local_f0 = 0;
    }
    else if ((char)local_48[0] == '\0') {
      uVar13 = FUN_00d50b00();
      local_f0 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
      local_f0 = CONCAT71((int7)((uint64_t)local_50 >> 8),1);
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (lVar21 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((*(char *)(arg1 + 0x1c) == '\0') || (cVar5 = FUN_01716c00(), cVar5 == '\0')) ||
     (cVar5 = FUN_01717530(), cVar5 != '\0')) {
    local_3b8 = local_e0;
    local_3b0 = '\0';
    FUN_00d8dbf0();
    if ((local_3b0 != '\0') && (local_3b8 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d99300();
    local_1a0 = local_50;
    local_198 = 0;
    if ((char)local_48[0] == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
    }
    local_198 = '\x01';
    FUN_00d8dbf0();
    if ((local_198 != '\0') && (local_1a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00d8c7a0();
  local_3a8 = local_58;
  local_3a0 = '\0';
  FUN_00d8dab0();
  puVar11 = *(void**)(arg1 + 0x40);
  plVar18 = puVar11;
  if (puVar11 != local_50) {
    if ((char)local_48[0] == '\0') {
      if (local_50 == (void*)0x0) {
        plVar18 = (void*)0x0;
      }
      else {
        FUN_00d50b00();
        puVar11 = *(void**)(arg1 + 0x40);
        plVar18 = local_50;
      }
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
      plVar18 = local_50;
    }
    *(int64_t **)(arg1 + 0x40) = plVar18;
    if (puVar11 != (void*)0x0) {
      FUN_00d50b20();
      plVar18 = local_50;
    }
  }
  if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_3a0 != '\0') && (local_3a8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  iVar8 = FUN_01717720();
  if ((iVar8 == 1) && ((*(byte *)(*local_b0 + 0x18) & 0xf) == 0)) {
    FUN_00d94d80(local_b0,g_025908a0);
    FUN_00d8c7d0();
  }
  else {
    iVar8 = FUN_01717720();
    if ((iVar8 != 2) || ((*(uint *)(*local_b0 + 0x18) & 0xf000000f) != 0x40000000)) {
      local_1a8 = uVar7;
      FUN_00d51d20();
      plVar18 = local_50;
      if (((char)local_48[0] == '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b00();
        if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_b8 = plVar18;
      FUN_017162e0();
      plVar2 = local_50;
      if (((char)local_48[0] == '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b00();
        if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_017162e0();
      local_e8 = local_50;
      if (((char)local_48[0] == '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b00();
        if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_017162e0();
      local_f8 = local_50;
      if (((char)local_48[0] == '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b00();
        if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((*(byte *)(plVar18 + 3) & 0xf) == 0) {
        FUN_01715d40();
        FUN_017163c0();
      }
      else {
        iVar8 = FUN_01717260();
        puVar11 = g_027cc870;
        if (iVar8 == -1) {
          if (g_027cc870 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_50 = puVar11;
          local_48[0] = local_48[0] & 0xffffff00;
          FUN_00d235a0();
          if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar11 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
      }
      iVar8 = FUN_01717260();
      if ((iVar8 == -1) && ((plVar18[3] & 0xf000f000000U) == 0x60004000000)) {
        FUN_01715d40(0x60004000000,4);
        FUN_017163c0();
        FUN_01715d40();
        FUN_017163c0();
        puVar11 = g_027cc910;
        if (*(int *)(arg1 + 0x24) == 1) {
          FUN_00d933c0();
          local_138 = local_50;
          local_130 = 0;
          if ((char)local_48[0] != '\0') goto LAB_01721b7a;
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = local_48[0] & 0xffffff00;
          if (g_027cc910 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_50 = puVar11;
          local_48[0] = local_48[0] & 0xffffff00;
LAB_01721b7a:
          local_48[0] = local_48[0] & 0xffffff00;
          local_138 = local_50;
        }
        local_130 = '\x01';
        FUN_00d8dbf0();
        if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar11 = g_027cc860;
        if (g_027cc860 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_50 = puVar11;
        local_48[0] = local_48[0] & 0xffffff00;
        FUN_00d235a0();
        if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar11 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        iVar8 = FUN_01717260();
        if ((iVar8 == -1) && ((plVar18[3] & 0xf00000000U) == 0x400000000)) {
          FUN_01715d40(0x400000000,4);
          FUN_017163c0();
          if (*(int *)(arg1 + 0x24) == 1) {
            lVar21 = g_0270b790;
            if (g_0270b790 == 0) goto LAB_01721d6b;
LAB_017217e4:
            FUN_00d50b00();
          }
          else {
            lVar21 = g_027cc900;
            if (g_027cc900 != 0) goto LAB_017217e4;
LAB_01721d6b:
            lVar21 = 0;
          }
          local_390 = '\x01';
          local_398 = lVar21;
          FUN_00d8dbf0();
          if ((local_390 != '\0') && (local_398 != 0)) {
            FUN_00d50b20();
          }
          puVar11 = g_027cc860;
          if (g_027cc860 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_50 = puVar11;
          local_48[0] = local_48[0] & 0xffffff00;
          FUN_00d235a0();
          if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar11 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          iVar8 = FUN_01717260();
          uVar14 = plVar18[3];
          uVar17 = (uint)uVar14 & 0xf000000;
          if ((iVar8 == -1) && (uVar17 == 0x4000000)) {
            FUN_01715d40(uVar14,4);
            FUN_017163c0();
            puVar11 = g_027df560;
            if (*(int *)(arg1 + 0x24) == 1) {
              FUN_00d933c0();
              local_128 = local_50;
              local_120 = 0;
              if ((char)local_48[0] != '\0') goto LAB_01721a40;
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = local_48[0] & 0xffffff00;
              if (g_027df560 != (void*)0x0) {
                FUN_00d50b00();
              }
              local_50 = puVar11;
              local_48[0] = local_48[0] & 0xffffff00;
LAB_01721a40:
              local_48[0] = local_48[0] & 0xffffff00;
              local_128 = local_50;
            }
            local_120 = '\x01';
            FUN_00d8dbf0();
            if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
              FUN_00d50b20();
            }
            puVar11 = g_027cc860;
            if (g_027cc860 != (void*)0x0) {
              FUN_00d50b00();
            }
            local_50 = puVar11;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d235a0();
            if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (puVar11 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          else if (((uint)uVar14 & 0xf000) == 0x2000) {
            if ((uVar14 & 0xf000f000000) != 0x60004000000) {
              if ((uVar17 != 0x4000000) ||
                 (((~uVar14 & 0xf000000000) != 0 && ((uVar14 & 0xff0000000000) != 0xff0000000000))))
              goto LAB_01721c5a;
              FUN_01715d40(uVar14,2);
              FUN_017163c0();
              FUN_01715d40();
              FUN_017163c0();
              puVar11 = g_027df560;
              if (*(int *)(arg1 + 0x24) == 1) {
                FUN_00d933c0();
                local_108 = local_50;
                local_100 = 0;
                if ((char)local_48[0] != '\0') goto LAB_01722150;
                if (local_50 != (void*)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48[0] = local_48[0] & 0xffffff00;
                if (g_027df560 != (void*)0x0) {
                  FUN_00d50b00();
                }
                local_50 = puVar11;
                local_48[0] = local_48[0] & 0xffffff00;
LAB_01722150:
                local_48[0] = local_48[0] & 0xffffff00;
                local_108 = local_50;
              }
              local_100 = '\x01';
              FUN_00d8dbf0();
              if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01722322;
            }
            FUN_01715d40(uVar14,2);
            FUN_017163c0();
            FUN_01715d40();
            FUN_017163c0();
            FUN_01715d40();
            FUN_017163c0();
            puVar11 = g_027cc910;
            if (*(int *)(arg1 + 0x24) == 1) {
              FUN_00d933c0();
              local_118 = local_50;
              local_110 = 0;
              if ((char)local_48[0] != '\0') goto LAB_01721ed7;
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = local_48[0] & 0xffffff00;
              if (g_027cc910 != (void*)0x0) {
                FUN_00d50b00();
              }
              local_50 = puVar11;
              local_48[0] = local_48[0] & 0xffffff00;
LAB_01721ed7:
              local_48[0] = local_48[0] & 0xffffff00;
              local_118 = local_50;
            }
            local_110 = '\x01';
            FUN_00d8dbf0();
            if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
LAB_01721c5a:
            if ((uVar14 & 0xf000f0000) == 0x400020000) {
              FUN_01715d40(0x400020000,2);
              FUN_017163c0();
              FUN_01715d40();
              FUN_017163c0();
              if (*(int *)(arg1 + 0x24) == 1) {
                lVar21 = g_0270b790;
                if (g_0270b790 == 0) goto LAB_01721e0b;
LAB_01721cfa:
                FUN_00d50b00();
              }
              else {
                lVar21 = g_027cc900;
                if (g_027cc900 != 0) goto LAB_01721cfa;
LAB_01721e0b:
                lVar21 = 0;
              }
              local_380 = '\x01';
              local_388 = lVar21;
              FUN_00d93870();
              if ((local_380 != '\0') && (local_388 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              iVar8 = FUN_01717260();
              uVar13 = plVar18[3];
              uVar17 = (uint)uVar13;
              if (iVar8 == -1) {
                if ((uVar17 & 0xf00) == 0x100) {
                  FUN_01715d40(uVar13,1);
                  FUN_017163c0();
                  FUN_00d94d80();
                }
                else if ((uVar17 & 0xf00000) == 0x300000) {
                  FUN_01715d40(0x300000,3);
                  FUN_017163c0();
                  if (*(char *)(arg1 + 0x28) == '\0') {
                    FUN_00d94d80();
                  }
                  else {
                    FUN_00d94d80();
                  }
                }
                else {
                  cVar5 = FUN_01716e70();
                  puVar11 = g_027cc860;
                  lVar21 = g_02781708;
                  if (cVar5 == '\0') {
                    if (g_027cc860 != (void*)0x0) {
                      FUN_00d50b00();
                    }
                    local_50 = puVar11;
                    local_48[0] = local_48[0] & 0xffffff00;
                    FUN_00d235a0();
                    if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
                      FUN_00d50b20();
                    }
                    if (puVar11 != (void*)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (g_02781708 != 0) {
                      FUN_00d50b00();
                    }
                    FUN_0171f810();
                    if (lVar21 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              else if ((uVar17 & 0xf0000) == 0x20000) {
                FUN_01715d40(uVar13,2);
                FUN_017163c0();
              }
              else if ((uVar17 & 0xf000) == 0x2000) {
                FUN_01715d40(0x2000,2);
                FUN_017163c0();
                if (*(int *)(arg1 + 0x18) == 1) {
                  FUN_00d94d80();
                }
                else if (*(int *)(arg1 + 0x18) == 0) {
                  FUN_00d94d80();
                }
              }
              bVar6 = FUN_01716e70();
              local_490 = plVar18;
              local_488 = 0;
              local_480 = plVar2;
              local_478 = 0;
              local_470 = local_e8;
              local_468 = 0;
              local_460 = local_f8;
              local_458 = 0;
              FUN_0171f300(&local_480,&local_490,&local_470,&local_460);
              bVar22 = local_50 == (void*)0x0;
              if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
                FUN_00d50b20();
              }
              puVar11 = g_027cc880;
              if ((bVar22 & (bVar6 ^ 1)) != 0) {
                if (g_027cc880 != (void*)0x0) {
                  FUN_00d50b00();
                }
                local_50 = puVar11;
                local_48[0] = local_48[0] & 0xffffff00;
                FUN_00d235a0();
                if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if (puVar11 != (void*)0x0) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
      }
LAB_01722322:
      local_1a4 = FUN_00d8c7a0();
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_02572358;
      (*pcVar1)();
      local_c0 = puVar11;
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_02572358;
      (*pcVar1)();
      lVar21 = g_02781738;
      if (g_02781738 != 0) {
        FUN_00d50b00();
      }
      local_50 = (int64_t *)lVar21;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025683c0;
      pcVar1 = g_025683d8;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 0xc;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 8;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 6;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      lVar21 = g_027cc890;
      if (g_027cc890 != 0) {
        FUN_00d50b00();
      }
      local_50 = (int64_t *)lVar21;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 10;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 8;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 6;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      plVar18 = g_02781720;
      if (g_02781720 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar18;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 8;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 6;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      plVar18 = g_027cc8a0;
      if (g_027cc8a0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar18;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 6;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      lVar21 = g_027cc8a8;
      if (g_027cc8a8 != 0) {
        FUN_00d50b00();
      }
      local_50 = (int64_t *)lVar21;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 0xc;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 8;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 5;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      lVar21 = g_027cc8b0;
      if (g_027cc8b0 != 0) {
        FUN_00d50b00();
      }
      local_50 = (int64_t *)lVar21;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 10;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 8;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 5;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      plVar18 = g_027cc8b8;
      if (g_027cc8b8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar18;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 8;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar18 = local_50;
      local_70._0_1_ = (char)local_48[0];
      puVar15 = local_48;
      if ((char)local_48[0] == '\0') {
        puVar15 = (uint *)&local_70;
      }
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 5;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      plVar18 = g_02781710;
      if (g_02781710 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar18;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d23340();
      plVar18 = local_50;
      puVar15 = (uint *)&local_70;
      if ((char)local_48[0] != '\0') {
        puVar15 = local_48;
      }
      local_70._0_1_ = (char)local_48[0];
      *(void*)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(void*)(plVar18[2] + (int64_t)iVar8) = 5;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      puVar12 = local_b8;
      puVar3 = local_440;
      plVar18 = local_430;
      if (0 < *(int *)((int64_t)local_c0 + 0xc)) {
        lVar21 = 0;
        do {
          lVar20 = *(int64_t *)(puVar11[2] + lVar21 * 8);
          if (lVar20 == 0) {
LAB_0172317d:
            puVar12 = local_b8;
            local_78 = *(int64_t **)(local_c0[2] + lVar21 * 8);
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            lVar21 = *(int64_t *)(puVar11[2] + lVar21 * 8);
            if (lVar21 == 0) {
              local_80._0_1_ = '\x01';
              plVar4 = local_78;
              puVar3 = local_440;
              plVar18 = local_430;
              local_440 = local_58;
            }
            else {
              uVar13 = FUN_00d50b00();
              uVar16 = (undefined7)((uint64_t)uVar13 >> 8);
              local_80 = CONCAT71(uVar16,1);
              if (3 < *(int *)(lVar21 + 0x18)) {
                local_80 = CONCAT71(uVar16,1);
                lVar20 = 0;
                local_1b0 = 0;
                local_3c0 = lVar21;
                do {
                  iVar8 = *(int *)(*(int64_t *)(local_3c0 + 0x10) + lVar20 * 4);
                  local_448 = 0;
                  local_450 = puVar12;
                  iVar9 = FUN_0171f130();
                  uVar10 = (uint)((uint64_t)puVar12[3] >> ((byte)(iVar9 * 4) & 0x3f)) & 0xf;
                  uVar17 = 0xffffffff;
                  if (uVar10 != 0xf) {
                    uVar17 = uVar10;
                  }
                  FUN_01715d40(iVar9 * 4,uVar17);
                  FUN_017163c0();
                  uVar17 = iVar8 - 5;
                  uVar14 = (uint64_t)uVar17;
                  if (((uVar17 < 8) && ((0xa9U >> (uVar17 & 0x1f) & 1) != 0)) &&
                     (uVar14 = (uint64_t)(int)uVar17, *(int *)(&g_02411d4c + uVar14 * 4) != iVar9
                     )) {
                    FUN_01715d40(&g_02411d4c,iVar8);
                    lVar21 = g_02781738;
                    if ((local_1b0 & 1) == 0) {
                      if (g_02781738 != 0) {
                        FUN_00d50b00();
                      }
                      local_378 = lVar21;
                      local_370 = '\x01';
                      uVar13 = (**(code **)(*local_78 + 0x50))();
                      cVar5 = (char)uVar13;
                      if ((local_370 != '\0') && (local_378 != 0)) {
                        uVar13 = FUN_00d50b20();
                      }
                      lVar21 = g_027cc890;
                      plVar18 = g_02781720;
                      uVar17 = (uint)local_80;
                      if (cVar5 == '\0') {
                        if (g_027cc890 != 0) {
                          FUN_00d50b00();
                        }
                        local_368 = lVar21;
                        local_360 = '\x01';
                        uVar13 = (**(code **)(*local_78 + 0x50))();
                        cVar5 = (char)uVar13;
                        if ((local_360 != '\0') && (local_368 != 0)) {
                          uVar13 = FUN_00d50b20();
                        }
                        plVar18 = g_02781720;
                        if (cVar5 == '\0') {
                          if (g_02781720 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                          local_358 = plVar18;
                          local_350 = '\x01';
                          uVar13 = (**(code **)(*local_78 + 0x50))();
                          cVar5 = (char)uVar13;
                          if ((local_350 != '\0') && (local_358 != (int64_t *)0x0)) {
                            uVar13 = FUN_00d50b20();
                          }
                          plVar18 = g_027cc8a0;
                          uVar10 = uVar17;
                          if (cVar5 != '\0') {
                            if (g_027cc8a0 != (int64_t *)0x0) {
                              uVar13 = FUN_00d50b00();
                            }
                            if (local_78 == plVar18) {
                              local_5c = uVar17 & 0xff;
                              uVar10 = local_5c;
                              if (plVar18 != (int64_t *)0x0) {
                                uVar10 = 1;
                              }
                              if (((char)local_80 != '\0') &&
                                 (uVar10 = local_5c, plVar18 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                                uVar10 = uVar17;
                              }
                            }
                            else {
                              local_5c = (uint)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                              local_78 = plVar18;
                              uVar10 = local_5c;
                              if ((char)local_80 != '\0') {
                                FUN_00d50b20();
                                uVar10 = local_5c;
                              }
                            }
                          }
                        }
                        else {
                          if (g_02781720 != (int64_t *)0x0) {
                            uVar13 = FUN_00d50b00();
                          }
                          if (local_78 == plVar18) {
                            local_5c = uVar17 & 0xff;
                            uVar10 = local_5c;
                            if (plVar18 != (int64_t *)0x0) {
                              uVar10 = 1;
                            }
                            if (((char)local_80 != '\0') &&
                               (uVar10 = local_5c, plVar18 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                              uVar10 = uVar17;
                            }
                          }
                          else {
                            local_5c = (uint)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                            if ((char)local_80 == '\0') {
                              local_78 = plVar18;
                              uVar10 = local_5c;
                            }
                            else {
                              FUN_00d50b20();
                              local_78 = plVar18;
                              uVar10 = local_5c;
                            }
                          }
                        }
                      }
                      else {
                        if (g_02781720 != (int64_t *)0x0) {
                          uVar13 = FUN_00d50b00();
                        }
                        if (local_78 == plVar18) {
                          local_5c = uVar17 & 0xff;
                          uVar10 = local_5c;
                          if (plVar18 != (int64_t *)0x0) {
                            uVar10 = 1;
                          }
                          if (((char)local_80 != '\0') &&
                             (uVar10 = local_5c, plVar18 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                            uVar10 = uVar17;
                          }
                        }
                        else {
                          local_5c = (uint)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                          local_78 = plVar18;
                          uVar10 = local_5c;
                          if ((char)local_80 != '\0') {
                            FUN_00d50b20();
                            uVar10 = local_5c;
                          }
                        }
                      }
                      local_5c = uVar10;
                      lVar21 = g_027cc8a8;
                      if (g_027cc8a8 != 0) {
                        FUN_00d50b00();
                      }
                      local_348 = lVar21;
                      local_340 = '\x01';
                      uVar13 = (**(code **)(*local_78 + 0x50))();
                      cVar5 = (char)uVar13;
                      if ((local_340 != '\0') && (local_348 != 0)) {
                        uVar13 = FUN_00d50b20();
                      }
                      plVar18 = g_027cc8b8;
                      lVar21 = g_027cc8b0;
                      if (cVar5 == '\0') {
                        if (g_027cc8b0 != 0) {
                          FUN_00d50b00();
                        }
                        local_338 = lVar21;
                        local_330 = '\x01';
                        uVar13 = (**(code **)(*local_78 + 0x50))();
                        cVar5 = (char)uVar13;
                        if ((local_330 != '\0') && (local_338 != 0)) {
                          uVar13 = FUN_00d50b20();
                        }
                        plVar18 = g_027cc8b8;
                        if (cVar5 == '\0') {
                          if (g_027cc8b8 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                          local_328 = plVar18;
                          local_320 = '\x01';
                          uVar13 = (**(code **)(*local_78 + 0x50))();
                          cVar5 = (char)uVar13;
                          if ((local_320 != '\0') && (local_328 != (int64_t *)0x0)) {
                            uVar13 = FUN_00d50b20();
                          }
                          plVar18 = g_02781710;
                          if (cVar5 == '\0') {
                            if (g_02781710 != (int64_t *)0x0) {
                              FUN_00d50b00();
                            }
                            local_318 = plVar18;
                            local_310 = '\x01';
                            cVar5 = (**(code **)(*local_78 + 0x50))();
                            if ((local_310 != '\0') && (local_318 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (cVar5 == '\0') {
                              local_80 = (uint64_t)local_5c;
                            }
                            else if ((char)local_5c == '\0') {
                              local_80 = 0;
                              local_78 = (int64_t *)0x0;
                            }
                            else {
                              local_80 = 0;
                              local_78 = (int64_t *)0x0;
                              FUN_00d50b20();
                            }
                          }
                          else {
                            if (g_02781710 != (int64_t *)0x0) {
                              uVar13 = FUN_00d50b00();
                            }
                            if (local_78 == plVar18) {
                              local_80 = (uint64_t)(local_5c & 0xff);
                              if (plVar18 != (int64_t *)0x0) {
                                local_80 = 1;
                              }
                              if (((char)local_5c != '\0') &&
                                 (local_80 = (uint64_t)local_5c & 0xffffffff000000ff,
                                 plVar18 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                                local_80 = (uint64_t)local_5c;
                              }
                            }
                            else {
                              local_80 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                              local_78 = plVar18;
                              if ((char)local_5c != '\0') {
                                FUN_00d50b20();
                              }
                            }
                          }
                        }
                        else {
                          if (g_027cc8b8 != (int64_t *)0x0) {
                            uVar13 = FUN_00d50b00();
                          }
                          if (local_78 == plVar18) {
                            local_80 = (uint64_t)(local_5c & 0xff);
                            if (plVar18 != (int64_t *)0x0) {
                              local_80 = 1;
                            }
                            if (((char)local_5c != '\0') &&
                               (local_80 = (uint64_t)local_5c & 0xffffffff000000ff,
                               plVar18 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                              local_80 = (uint64_t)local_5c;
                            }
                          }
                          else {
                            local_80 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                            local_78 = plVar18;
                            if ((char)local_5c != '\0') {
                              FUN_00d50b20();
                            }
                          }
                        }
                      }
                      else {
                        if (g_027cc8b8 != (int64_t *)0x0) {
                          uVar13 = FUN_00d50b00();
                        }
                        if (local_78 == plVar18) {
                          local_80 = (uint64_t)(local_5c & 0xff);
                          if (plVar18 != (int64_t *)0x0) {
                            local_80 = 1;
                          }
                          if (((char)local_5c != '\0') &&
                             (local_80 = (uint64_t)local_5c & 0xffffffff000000ff,
                             plVar18 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                            local_80 = (uint64_t)local_5c;
                          }
                        }
                        else {
                          local_80 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                          if ((char)local_5c == '\0') {
                            local_78 = plVar18;
                          }
                          else {
                            FUN_00d50b20();
                            local_78 = plVar18;
                          }
                        }
                      }
                    }
                  }
                  else {
                    local_1b0 = CONCAT71((int7)(uVar14 >> 8),1);
                  }
                  if ((iVar8 == 6) && (iVar9 == 0xb)) {
                    FUN_01720d50();
                    plVar18 = local_50;
                    local_1b8 = 0;
                    if (((char)local_48[0] == '\0') && (local_50 != (void*)0x0)) {
                      FUN_00d50b00();
                    }
                    local_1c0 = plVar18;
                    local_1b8 = '\x01';
                    FUN_00d8dbf0();
                    if ((local_1b8 != '\0') && (local_1c0 != (void*)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  iVar8 = *(int *)(local_3c0 + 0x18);
                  iVar9 = iVar8 + 3;
                  if (-1 < iVar8) {
                    iVar9 = iVar8;
                  }
                  lVar20 = lVar20 + 1;
                } while ((int)lVar20 < iVar9 >> 2);
              }
              FUN_00d50b20();
              plVar4 = local_78;
              puVar3 = local_440;
              plVar18 = local_430;
              local_440 = local_58;
            }
            local_430 = plVar4;
            local_58 = local_440;
            if (local_430 != (int64_t *)0x0) {
              local_438 = 0;
              local_428 = 0;
              FUN_0171f810();
              puVar3 = local_440;
              plVar18 = local_430;
              if ((char)local_80 != '\0') {
                FUN_00d50b20();
                puVar3 = local_440;
                plVar18 = local_430;
              }
            }
            break;
          }
          FUN_00d50b00();
          iVar8 = 0;
          do {
            iVar19 = iVar8;
            iVar8 = *(int *)(lVar20 + 0x18);
            iVar9 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar9 = iVar8;
            }
            if (iVar9 >> 2 <= iVar19) break;
            cVar5 = FUN_01716e70();
            iVar8 = iVar19 + 1;
          } while (cVar5 != '\0');
          FUN_00d50b20();
          if (iVar9 >> 2 <= iVar19) goto LAB_0172317d;
          lVar21 = lVar21 + 1;
          puVar12 = local_b8;
          puVar3 = local_440;
          plVar18 = local_430;
        } while (lVar21 < *(int *)((int64_t)local_c0 + 0xc));
      }
      local_430 = plVar18;
      local_440 = puVar3;
      local_420 = local_58;
      local_418 = 0;
      local_308 = 0;
      local_300 = '\0';
      local_410 = local_e8;
      local_408 = 0;
      local_3f8 = 0;
      FUN_01720550(&local_410,&local_308,local_400);
      if ((local_300 != '\0') && (local_308 != 0)) {
        FUN_00d50b20();
      }
      lVar21 = g_027cc8c0;
      local_3f0 = local_58;
      local_3e8 = 0;
      if (g_027cc8c0 != 0) {
        FUN_00d50b00();
      }
      local_2f8 = lVar21;
      local_2f0 = '\x01';
      local_3d8 = 0;
      local_3c8 = 0;
      local_3e0 = puVar12;
      FUN_01720550(&local_3e0,&local_2f8,local_3d0);
      puVar3 = local_c8;
      if ((local_2f0 != '\0') && (local_2f8 != 0)) {
        FUN_00d50b20();
      }
      if (*(int *)((int64_t)puVar3 + 0xc) != 0) {
        FUN_00d242c0();
        local_2d8 = g_027259e0;
        local_2e8 = local_c8;
        local_2e0 = '\0';
        if (g_027259e0 != 0) {
          FUN_00d50b00();
        }
        local_2d0 = '\x01';
        FUN_00d95130();
        local_40 = CONCAT71(local_70._1_7_,(char)local_70);
        local_48[0] = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        FUN_00d94d80();
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_2d0 != '\0') && (local_2d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2e0 != '\0') && (local_2e8 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar8 = FUN_01715630();
      iVar9 = FUN_01715620();
      if (iVar8 != iVar9) {
        FUN_0171aac0();
        FUN_01715630();
        FUN_01780260();
        lVar21 = CONCAT71(local_70._1_7_,(char)local_70);
        local_48[0] = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar21;
        FUN_00d94d80();
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      puVar3 = g_027cc870;
      if (*(int *)(arg1 + 0x2c) == 2) {
        if (g_027cc870 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_268 = puVar3;
        local_260 = '\x01';
        FUN_00d933c0();
        lVar21 = CONCAT71(local_d8._1_7_,(char)local_d8);
        local_48[0] = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar21;
        FUN_00d8cb40();
        local_188 = 0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        puVar3 = local_58;
        local_188 = '\x01';
        local_190 = local_90;
        FUN_00d98db0(&local_190,&local_268,0);
        puVar12 = (void*)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar3 == puVar12) {
LAB_01723fa6:
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar12 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (void*)0x0;
            local_58 = puVar12;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_01723fa6;
          }
          if (local_58 != (void*)0x0) {
            local_58 = puVar12;
            FUN_00d50b20();
          }
          local_68 = '\0';
          local_58 = puVar12;
        }
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_260 != '\0') && (local_268 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar12 = g_027cc860;
        if (g_027cc860 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_258 = puVar12;
        local_250 = '\x01';
        FUN_00d933c0();
        local_40 = CONCAT71(local_d8._1_7_,(char)local_d8);
        local_48[0] = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        FUN_00d8cb40();
        local_178 = 0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        puVar3 = local_58;
        local_178 = '\x01';
        local_180 = local_90;
        FUN_00d98db0(&local_180,&local_258,0);
        puVar12 = (void*)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar12 == puVar3) {
LAB_017242f1:
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar12 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (void*)0x0;
            local_58 = puVar12;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_017242f1;
          }
          if (local_58 != (void*)0x0) {
            local_58 = puVar12;
            FUN_00d50b20();
          }
          local_68 = '\0';
          local_58 = puVar12;
        }
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_250 != '\0') && (local_258 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar12 = g_027cc880;
        if (g_027cc880 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_248 = puVar12;
        local_240 = '\x01';
        FUN_00d933c0();
        local_40 = CONCAT71(local_d8._1_7_,(char)local_d8);
        local_48[0] = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        FUN_00d8cb40();
        local_168 = 0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        puVar12 = local_58;
        local_168 = '\x01';
        local_170 = local_90;
        FUN_00d98db0(&local_170,&local_248,0);
        puVar3 = (void*)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar3 == puVar12) {
LAB_017244bd:
          puVar12 = local_b8;
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar3 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (void*)0x0;
            local_58 = puVar3;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_017244bd;
          }
          if (local_58 != (void*)0x0) {
            local_58 = puVar3;
            FUN_00d50b20();
          }
          local_68 = '\0';
          puVar12 = local_b8;
          local_58 = puVar3;
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_240 != '\0') && (local_248 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (*(int *)(arg1 + 0x2c) == 1) {
        if (g_027cc870 != (void*)0x0) {
          FUN_00d50b00();
        }
        lVar21 = g_027cc8d0;
        local_2c8 = puVar3;
        local_2c0 = '\x01';
        if (g_027cc8d0 != 0) {
          FUN_00d50b00();
        }
        puVar12 = local_58;
        local_2b8 = lVar21;
        local_2b0 = '\x01';
        FUN_00d98db0(&local_2b8,&local_2c8,0);
        plVar18 = local_50;
        if (puVar12 == local_50) {
LAB_01723e99:
          if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_48[0] == '\0') {
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            if (local_58 == (void*)0x0) {
              local_58 = plVar18;
            }
            else {
              local_58 = plVar18;
              FUN_00d50b20();
            }
            goto LAB_01723e99;
          }
          if (local_58 != (void*)0x0) {
            local_58 = local_50;
            FUN_00d50b20();
          }
          local_48[0] = local_48[0] & 0xffffff00;
          local_58 = plVar18;
        }
        if ((local_2b0 != '\0') && (local_2b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2c0 != '\0') && (local_2c8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar12 = g_027cc860;
        if (g_027cc860 != (void*)0x0) {
          FUN_00d50b00();
        }
        lVar21 = g_027cc8d8;
        local_2a8 = puVar12;
        local_2a0 = '\x01';
        if (g_027cc8d8 != 0) {
          FUN_00d50b00();
        }
        puVar12 = local_58;
        local_298 = lVar21;
        local_290 = '\x01';
        FUN_00d98db0(&local_298,&local_2a8,0);
        plVar18 = local_50;
        if (local_50 == puVar12) {
LAB_01724170:
          if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_48[0] == '\0') {
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            if (local_58 == (void*)0x0) {
              local_58 = plVar18;
            }
            else {
              local_58 = plVar18;
              FUN_00d50b20();
            }
            goto LAB_01724170;
          }
          if (local_58 != (void*)0x0) {
            local_58 = local_50;
            FUN_00d50b20();
          }
          local_48[0] = local_48[0] & 0xffffff00;
          local_58 = plVar18;
        }
        if ((local_290 != '\0') && (local_298 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2a0 != '\0') && (local_2a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        puVar12 = g_027cc880;
        if (g_027cc880 != (void*)0x0) {
          FUN_00d50b00();
        }
        lVar21 = g_027cc8e0;
        local_288 = puVar12;
        local_280 = '\x01';
        if (g_027cc8e0 != 0) {
          FUN_00d50b00();
        }
        puVar12 = local_58;
        local_278 = lVar21;
        local_270 = '\x01';
        FUN_00d98db0(&local_278,&local_288,0);
        plVar18 = local_50;
        if (local_50 == puVar12) {
LAB_0172427f:
          puVar12 = local_b8;
          if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_48[0] == '\0') {
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            if (local_58 == (void*)0x0) {
              local_58 = plVar18;
            }
            else {
              local_58 = plVar18;
              FUN_00d50b20();
            }
            goto LAB_0172427f;
          }
          if (local_58 != (void*)0x0) {
            local_58 = local_50;
            FUN_00d50b20();
          }
          local_48[0] = local_48[0] & 0xffffff00;
          puVar12 = local_b8;
          local_58 = plVar18;
        }
        if ((local_270 != '\0') && (local_278 != 0)) {
          FUN_00d50b20();
        }
        if ((local_280 != '\0') && (local_288 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar21 = g_027cd570;
      if (*(int *)(arg1 + 0x30) == 1) {
        if (g_027cd570 != 0) {
          FUN_00d50b00();
        }
        local_238 = lVar21;
        local_230 = '\x01';
        FUN_0171ebf0();
        FUN_00d23310();
        plVar18 = local_50;
        local_d8._0_1_ = (char)local_48[0];
        puVar15 = local_48;
        if ((char)local_48[0] == '\0') {
          puVar15 = (uint *)&local_d8;
        }
        *(void*)puVar15 = 0;
        if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_158 = 0;
        if ((char)local_d8 == '\0') {
          if (plVar18 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d8._0_1_ = '\0';
        }
        puVar3 = local_58;
        local_158 = '\x01';
        local_160 = plVar18;
        FUN_00d98db0(&local_160,&local_238,0);
        puVar12 = (void*)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar12 == puVar3) {
LAB_017246ad:
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar12 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (void*)0x0;
            local_58 = puVar12;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_017246ad;
          }
          if (local_58 != (void*)0x0) {
            local_58 = puVar12;
            FUN_00d50b20();
          }
          local_68 = '\0';
          local_58 = puVar12;
        }
        if ((local_158 != '\0') && (local_160 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_230 != '\0') && (local_238 != 0)) {
          FUN_00d50b20();
        }
        lVar21 = g_02781610;
        if (g_02781610 != 0) {
          FUN_00d50b00();
        }
        local_228 = lVar21;
        local_220 = '\x01';
        FUN_0171e8d0();
        FUN_00d23310();
        plVar18 = local_50;
        puVar15 = local_48;
        if ((char)local_48[0] == '\0') {
          puVar15 = (uint *)&local_d8;
        }
        local_d8._0_1_ = (char)local_48[0];
        *(void*)puVar15 = 0;
        if (((char)local_48[0] != '\0') && (plVar18 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_148 = 0;
        if ((char)local_d8 == '\0') {
          if (plVar18 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d8._0_1_ = '\0';
        }
        puVar12 = local_58;
        local_148 = '\x01';
        local_150 = plVar18;
        FUN_00d98db0(&local_150,&local_228,0);
        puVar3 = (void*)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar3 == puVar12) {
LAB_0172483b:
          puVar12 = local_b8;
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar3 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (void*)0x0;
            local_58 = puVar3;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_0172483b;
          }
          if (local_58 != (void*)0x0) {
            local_58 = puVar3;
            FUN_00d50b20();
          }
          local_68 = '\0';
          puVar12 = local_b8;
          local_58 = puVar3;
        }
        if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_220 != '\0') && (local_228 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d8c7d0();
      if (*local_140 != 0) {
        iVar8 = FUN_00d90c90();
        if (iVar8 == -1) {
          FUN_00d8c7a0();
        }
        FUN_00d97ce0();
        local_218 = g_027259e0;
        if (g_027259e0 != 0) {
          FUN_00d50b00();
        }
        local_210 = '\x01';
        FUN_00d97f20();
        lVar21 = CONCAT71(local_70._1_7_,(char)local_70);
        if (local_68 == '\0') {
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_48[0] = local_48[0] & 0xffffff00;
        local_50 = (int64_t *)lVar21;
        FUN_00d21140();
        if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar21 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_210 != '\0') && (local_218 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        local_208 = g_027259e0;
        if (g_027259e0 != 0) {
          FUN_00d50b00();
        }
        local_200 = '\x01';
        FUN_00d97f20();
        lVar21 = CONCAT71(local_70._1_7_,(char)local_70);
        if (local_68 == '\0') {
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_48[0] = local_48[0] & 0xffffff00;
        local_50 = (int64_t *)lVar21;
        FUN_00d21140();
        if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar21 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_200 != '\0') && (local_208 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        local_1f8 = g_027259e0;
        if (g_027259e0 != 0) {
          FUN_00d50b00();
        }
        local_1f0 = '\x01';
        FUN_00d97f20();
        lVar21 = CONCAT71(local_70._1_7_,(char)local_70);
        if (local_68 == '\0') {
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_48[0] = local_48[0] & 0xffffff00;
        local_50 = (int64_t *)lVar21;
        FUN_00d21140();
        if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar21 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_1f0 != '\0') && (local_1f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d8f140();
        local_1e8 = g_027259e0;
        if (g_027259e0 != 0) {
          FUN_00d50b00();
        }
        local_1e0 = '\x01';
        FUN_00d97f20();
        puVar3 = (void*)CONCAT71(local_70._1_7_,(char)local_70);
        if (local_68 == '\0') {
          if (puVar3 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_48[0] = local_48[0] & 0xffffff00;
        local_50 = puVar3;
        FUN_00d21140();
        if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_1e0 != '\0') && (local_1e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      *this_ptr = local_58;
      *(void*)(this_ptr + 1) = 1;
      if (puVar11 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_c0 != (void*)0x0) {
        FUN_00d50b20();
      }
      puVar11 = local_c8;
      if (local_f8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_e8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (plVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar12 != (void*)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01724d41;
    }
    FUN_00d94d80();
    iVar8 = FUN_01715630();
    iVar9 = FUN_01715620();
    if (iVar8 != iVar9) {
      FUN_0171aac0();
      FUN_01715630();
      FUN_01780260();
      local_40 = CONCAT71(local_70._1_7_,(char)local_70);
      local_48[0] = 1;
      local_50 = &g_024c5048;
      local_38 = 0;
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      FUN_00d94d80();
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d8c7d0();
  }
  *this_ptr = local_58;
  *(void*)(this_ptr + 1) = 1;
  puVar11 = local_c8;
LAB_01724d41:
  if ((char)local_f0 != '\0') {
    if (local_e0 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar11 == (void*)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01a68ad0
// ============================================================
// Function: FUN_01a68ad0
// Address: 01a68ad0
// Size: 7627 bytes
// Class: MUTool

void* FUN_01a68ad0(int64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t lVar7;
  void* in_ECX;
  char *pcVar8;
  int iVar9;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar10;
  int64_t local_408;
  char local_400;
  int64_t local_3f8;
  char local_3f0;
  int64_t local_3e8;
  char local_3e0;
  int64_t local_3d8;
  char local_3d0;
  int64_t local_3c8;
  char local_3c0;
  int64_t local_3b8;
  char local_3b0;
  int64_t local_3a8;
  char local_3a0;
  int64_t local_398;
  char local_390;
  int64_t local_388;
  char local_380;
  int64_t local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  int64_t local_358;
  char local_350;
  int64_t local_348;
  char local_340;
  int64_t local_338;
  char local_330;
  int64_t local_328;
  char local_320;
  int64_t local_318;
  char local_310;
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_1f8 = param_1;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  local_90 = plVar5;
  (**(code **)(*plVar5 + 0x18))();
  cVar4 = (**(code **)(*arg1 + 0x9d0))();
  if (cVar4 == '\0') {
    FUN_01b6d0d0();
    pvVar6 = _pthread_getspecific(in_ECX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*arg1 + 0xa70))((uint32_t)local_1f8);
    FUN_012523c0(&local_a0,0,&local_98,0);
    lVar7 = local_88;
    pcVar8 = &local_60;
    if (local_80[0] != '\0') {
      pcVar8 = local_80;
    }
    local_60 = local_80[0];
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 == '\0') && (lVar7 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 == 0) {
      *(void*)((int64_t)arg1 + 0x204) = 0;
      bVar2 = false;
      bVar1 = false;
      lVar7 = g_027e26a0;
      goto joined_r0x01a69536;
    }
    FUN_00d50b20();
  }
  else {
    local_a0 = (**(code **)(*arg1 + 0x9d8))();
    local_98 = (**(code **)(*arg1 + 0x9e0))();
  }
  *(void*)((int64_t)arg1 + 0x204) = 0;
  FUN_00d403d0();
  lVar7 = g_027e2678;
  if (g_027e2678 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_408 = 0;
  local_400 = '\0';
  FUN_00d40470(&local_408,&stack0xfffffffffffffe20,3,3);
  if ((local_400 != '\0') && (local_408 != 0)) {
    FUN_00d50b20();
  }
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a6c2e0(local_98,local_a0,1);
  lVar3 = local_88;
  if ((local_80[0] == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  local_1f8 = lVar3;
  if ((local_a0._4_4_ == 0) || (local_98 >> 0x20 == 0)) {
    if (lVar3 != 0) goto LAB_01a69319;
  }
  else if (lVar3 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_78 = lVar3;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar9 = -local_70._4_4_;
        }
        else {
          iVar9 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar9);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
      lVar7 = (int64_t)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)(local_78 + 0xc) <= iVar9) break;
      local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar7 * 8);
      FUN_0171b9c0();
      local_3f8 = local_88;
      local_3f0 = '\0';
      local_3e8 = 0;
      local_3e0 = '\0';
      uVar10 = FUN_01721000(&local_3e8,&local_3f8);
      lVar3 = local_40;
      lVar7 = g_027e2680;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar10 = FUN_00d50b00();
          lVar7 = g_027e2680;
        }
      }
      else {
        local_38 = '\0';
      }
      g_027e2680 = lVar7;
      if (lVar7 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_3d0 = '\x01';
      local_3d8 = lVar7;
      FUN_01d5d9b0(uVar10,&local_3d8);
      if ((local_3d0 != '\0') && (local_3d8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3e0 != '\0') && (local_3e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3f0 != '\0') && (local_3f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      uVar10 = FUN_01d66da0();
      lVar7 = g_027e2688;
      local_3c8 = local_88;
      local_3c0 = '\0';
      if (g_027e2688 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_40 = lVar7;
      local_38 = '\0';
      FUN_00ca0840(uVar10,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_3c0 != '\0') && (local_3c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      uVar10 = FUN_00dd67f0();
      lVar7 = g_027e2690;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          uVar10 = FUN_00d50b00();
          lVar7 = g_027e2690;
        }
      }
      else {
        local_a8 = '\0';
      }
      g_027e2690 = lVar7;
      if (lVar7 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar7;
      FUN_00ca0840(uVar10,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (local_b0 != 0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      uVar10 = FUN_00dd67f0();
      lVar7 = g_027652e0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          uVar10 = FUN_00d50b00();
          lVar7 = g_027652e0;
        }
      }
      else {
        local_a8 = '\0';
      }
      g_027652e0 = lVar7;
      if (lVar7 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar7;
      FUN_00ca0840(uVar10,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (local_b0 != 0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a74380();
    if (*(int *)(local_1f8 + 0xc) != 0) {
      FUN_01d5dc80();
    }
LAB_01a69319:
    FUN_00d50b20();
    lVar3 = local_1f8;
  }
  bVar2 = true;
  bVar1 = true;
  lVar7 = g_027e26a0;
  local_1f8 = lVar3;
joined_r0x01a69536:
  g_027e26a0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
    bVar1 = bVar2;
  }
  lVar3 = g_027e26a8;
  local_3b0 = '\x01';
  local_3b8 = lVar7;
  if (g_027e26a8 != 0) {
    FUN_00d50b00();
  }
  local_3a8 = lVar3;
  local_3a0 = '\x01';
  local_398 = 0;
  local_390 = '\0';
  uVar10 = FUN_00d31230(&local_398,&local_3a8);
  lVar7 = local_88;
  local_388 = g_027e2670;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_388 = g_027e2670;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e2670 = local_388;
  if (local_388 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_380 = '\x01';
  FUN_01d5d9b0(uVar10,&local_388);
  if ((local_380 != '\0') && (local_388 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_390 != '\0') && (local_398 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3a0 != '\0') && (local_3a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3b0 != '\0') && (local_3b8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027e2690;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027e2690;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027e2690 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027652e0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027652e0;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027652e0 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e26b0;
  local_378 = lVar7;
  local_370 = '\x01';
  if (g_027e26b0 != 0) {
    FUN_00d50b00();
  }
  local_368 = lVar3;
  local_360 = '\x01';
  local_358 = 0;
  local_350 = '\0';
  uVar10 = FUN_00d31230(&local_358,&local_368);
  lVar7 = local_88;
  local_348 = g_027e26b8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_348 = g_027e26b8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26b8 = local_348;
  if (local_348 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_340 = '\x01';
  FUN_01d5d9b0(uVar10,&local_348);
  if ((local_340 != '\0') && (local_348 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_350 != '\0') && (local_358 != 0)) {
    FUN_00d50b20();
  }
  if ((local_360 != '\0') && (local_368 != 0)) {
    FUN_00d50b20();
  }
  if ((local_370 != '\0') && (local_378 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01a6cc80();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027e2690;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027e2690;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027e2690 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027652e0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027652e0;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027652e0 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e26c0;
  local_338 = lVar7;
  local_330 = '\x01';
  if (g_027e26c0 != 0) {
    FUN_00d50b00();
  }
  local_328 = lVar3;
  local_320 = '\x01';
  local_318 = 0;
  local_310 = '\0';
  uVar10 = FUN_00d31230(&local_318,&local_328);
  lVar7 = local_88;
  local_308 = g_027e26c8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_308 = g_027e26c8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26c8 = local_308;
  if (local_308 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_300 = '\x01';
  FUN_01d5d9b0(uVar10,&local_308);
  if ((local_300 != '\0') && (local_308 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_310 != '\0') && (local_318 != 0)) {
    FUN_00d50b20();
  }
  if ((local_320 != '\0') && (local_328 != 0)) {
    FUN_00d50b20();
  }
  if ((local_330 != '\0') && (local_338 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01a6cd50();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027e2690;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027e2690;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027e2690 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027652e0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027652e0;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027652e0 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e26d0;
  local_2f8 = lVar7;
  local_2f0 = '\x01';
  if (g_027e26d0 != 0) {
    FUN_00d50b00();
  }
  local_2e8 = lVar3;
  local_2e0 = '\x01';
  local_2d8 = 0;
  local_2d0 = '\0';
  uVar10 = FUN_00d31230(&local_2d8,&local_2e8);
  lVar7 = local_88;
  local_2c8 = g_027e26d8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_2c8 = g_027e26d8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26d8 = local_2c8;
  if (local_2c8 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_2c0 = '\x01';
  FUN_01d5d9b0(uVar10,&local_2c8);
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2e0 != '\0') && (local_2e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f0 != '\0') && (local_2f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01a6ce30();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027e2690;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027e2690;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027e2690 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar10 = FUN_00dd67f0();
    lVar3 = local_50;
    lVar7 = g_027652e0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar10 = FUN_00d50b00();
        lVar7 = g_027652e0;
      }
    }
    else {
      local_48 = '\0';
    }
    g_027652e0 = lVar7;
    if (lVar7 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_80[0] = '\0';
    local_88 = lVar7;
    FUN_00ca0840(uVar10,&local_88);
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d5dc80();
  local_2b8 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = g_027e26e0;
  local_2b0 = '\x01';
  if (g_027e26e0 != 0) {
    FUN_00d50b00();
  }
  local_2a8 = lVar7;
  local_2a0 = '\x01';
  local_298 = 0;
  local_290 = '\0';
  uVar10 = FUN_00d31230(&local_298,&local_2a8);
  lVar7 = local_88;
  local_288 = g_027e26e8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_288 = g_027e26e8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26e8 = local_288;
  if (local_288 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_280 = '\x01';
  FUN_01d5d9b0(uVar10,&local_288);
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e26f0;
  local_278 = lVar7;
  local_270 = '\x01';
  if (g_027e26f0 != 0) {
    FUN_00d50b00();
  }
  local_268 = lVar3;
  local_260 = '\x01';
  local_258 = 0;
  local_250 = '\0';
  uVar10 = FUN_00d31230(&local_258,&local_268);
  lVar7 = local_88;
  local_248 = g_027e26f8;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_248 = g_027e26f8;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e26f8 = local_248;
  if (local_248 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_240 = '\x01';
  FUN_01d5d9b0(uVar10,&local_248);
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e2700;
  local_238 = lVar7;
  local_230 = '\x01';
  if (g_027e2700 != 0) {
    FUN_00d50b00();
  }
  local_228 = lVar3;
  local_220 = '\x01';
  local_218 = 0;
  local_210 = '\0';
  uVar10 = FUN_00d31230(&local_218,&local_228);
  lVar7 = local_88;
  local_208 = g_027e2708;
  if (local_80[0] == '\0') {
    if (local_88 != 0) {
      uVar10 = FUN_00d50b00();
      local_208 = g_027e2708;
    }
  }
  else {
    local_80[0] = '\0';
  }
  g_027e2708 = local_208;
  if (local_208 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_200 = '\x01';
  FUN_01d5d9b0(uVar10,&local_208);
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = local_90;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 00236ad0
// ============================================================
// Function: FUN_00236ad0
// Address: 00236ad0
// Size: 5735 bytes
// Class: MUTool

void FUN_00236ad0(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  uint32_t uVar6;
  int64_t **pplVar7;
  void *pvVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void* pVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t this_ptr;
  char cVar14;
  uint64_t uVar15;
  int64_t *local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_70;
  char local_68;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  
  plVar12 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar12))();
  plVar9 = local_48;
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_40[0]);
  pplVar7 = &local_58;
  if (local_40[0] != '\0') {
    pplVar7 = (int64_t **)local_40;
  }
  *(char *)pplVar7 = '\0';
  if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00236b4c:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_00236b4c;
  uVar15 = (**(code **)(*plVar9 + 0xa50))();
  *(void*)(this_ptr + 0x188) = uVar15;
  *(void*)(this_ptr + 400) = param_2;
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar15 = FUN_00226290();
  if (*arg1 == 0) {
    local_40[0] = '\0';
    local_48 = (int64_t *)0x0;
    FUN_00239240(uVar15,&local_48);
    plVar9 = local_58;
    plVar12 = (int64_t *)*arg1;
    if (plVar12 == local_58) {
      if (((char)arg1[1] == '\0') && (local_58 != (int64_t *)0x0)) {
        if (local_50 != '\0') goto LAB_00236c53;
        FUN_00d50b00();
        goto LAB_00236c36;
      }
LAB_00236c3a:
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar13 = arg1[1];
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar9;
        if (((char)lVar13 != '\0') && (plVar12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00236c36:
        *(void*)(arg1 + 1) = 1;
        goto LAB_00236c3a;
      }
      *arg1 = (int64_t)local_58;
      if (((char)lVar13 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00236c53:
      *(void*)(arg1 + 1) = 1;
    }
    cVar5 = local_40[0];
    plVar9 = local_48;
    plVar12 = (int64_t *)*in_RDX;
    if (plVar12 == local_48) {
      if (((local_40[0] != '\0') && ((char)in_RDX[1] == '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        *(void*)(in_RDX + 1) = 1;
      }
    }
    else {
      lVar13 = in_RDX[1];
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *in_RDX = (int64_t)plVar9;
      if (((char)lVar13 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(char *)(in_RDX + 1) = cVar5;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*arg1 == 0) {
      return;
    }
  }
  if (*in_RDX == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x98) == 0) {
    *(void*)(this_ptr + 0x154) = 0xffffffff;
  }
  else {
    FUN_00d50b00();
    uVar6 = FUN_01c446f0();
    *(void*)(this_ptr + 0x154) = uVar6;
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_48 + 0x450))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar2 = true;
  if ((cVar5 == '\0') && (lVar13 = *(int64_t *)(this_ptr + 0xc0), lVar13 != 0)) {
    FUN_00d50b00();
    local_88 = (int64_t *)(lVar13 + 0x10);
    bVar2 = false;
  }
  else {
    local_88 = (int64_t *)0x0;
  }
  local_f0 = 0;
  lVar13 = *in_RDX;
  lVar3 = in_RDX[1];
  if (((char)lVar3 != '\0') && (lVar13 != 0)) {
    FUN_00d50b00();
  }
  local_260 = local_88;
  local_258 = '\0';
  plVar12 = &local_f8;
  local_f8 = lVar13;
  local_f0 = (char)lVar3;
  cVar5 = (**(code **)(&UNK_00001540 + **(int64_t **)(this_ptr + 0x90)))(plVar12,&local_260);
  pVar11 = (void*)plVar12;
  if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
    (**(code **)(*local_260 + 0x10))();
    FUN_00d50b20();
  }
  cVar14 = local_f0;
  lVar13 = local_f8;
  if (cVar5 == '\0') goto LAB_002380e2;
  lVar3 = *in_RDX;
  if (lVar3 == local_f8) {
    if (((local_f0 != '\0') && ((char)in_RDX[1] == '\0')) && (local_f8 != 0)) {
      cVar14 = '\x01';
      FUN_00d50b00();
      goto LAB_00236ec1;
    }
  }
  else {
    lVar4 = in_RDX[1];
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b00();
    }
    *in_RDX = lVar13;
    if (((char)lVar4 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00236ec1:
    *(char *)(in_RDX + 1) = cVar14;
  }
  if (*(int *)(this_ptr + 0x19c) == 1) {
    FUN_00226f20();
    plVar12 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) goto LAB_00236f3f;
    FUN_00226f20();
    plVar12 = local_58;
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165a070();
    plVar9 = *(int64_t **)(this_ptr + 0x1b8);
    plVar10 = plVar9;
    if (plVar9 != local_48) {
      if (local_40[0] == '\0') {
        if (local_48 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar9 = *(int64_t **)(this_ptr + 0x1b8);
          plVar10 = local_48;
        }
      }
      else {
        local_40[0] = '\0';
        plVar10 = local_48;
      }
      *(int64_t **)(this_ptr + 0x1b8) = plVar10;
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar10 = local_48;
      }
    }
    if ((local_40[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_00236f3f:
    lVar13 = *in_RDX;
    lVar3 = *(int64_t *)(this_ptr + 0x1b8);
    if (lVar3 != lVar13) {
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x1b8) = lVar13;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  plVar12 = *(int64_t **)(this_ptr + 0x90);
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_248 = '\0';
  local_250 = 0;
  (**(code **)(*plVar12 + 0x980))();
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar13 = *(int64_t *)(this_ptr + 0x90);
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  local_238 = '\0';
  local_240 = 0;
  FUN_019a4000();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  FUN_019f0ee0();
  plVar12 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00234400();
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar12 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar12))();
  plVar9 = local_48;
  pplVar7 = (int64_t **)local_40;
  if (local_40[0] == '\0') {
    pplVar7 = &local_58;
  }
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_40[0]);
  *(void*)pplVar7 = 0;
  if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)pplVar7;
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_002371cf:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_002371cf;
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *plVar9 + 0x38))();
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_48 + 0x450))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    lVar13 = *(int64_t *)(this_ptr + 0xb8);
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    FUN_004405f0();
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)(&UNK_00001668 + *local_70))();
    local_e8 = local_58;
    local_e0 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (*(int64_t *)(this_ptr + 0x1c0) != 0) goto LAB_002372b3;
LAB_002372f3:
      local_e0 = '\x01';
      local_158 = '\0';
      local_160 = 0;
    }
    else {
      local_50 = '\0';
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) goto LAB_002372f3;
LAB_002372b3:
      local_e0 = '\x01';
      FUN_006f3f00();
    }
    FUN_00757c60();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_d8 = local_170;
    local_d0 = 0;
    if (local_168 == '\0') {
      if (local_170 != 0) {
        FUN_00d50b00();
      }
      lVar3 = *(int64_t *)(this_ptr + 0xb8);
    }
    else {
      local_168 = '\0';
      lVar3 = *(int64_t *)(this_ptr + 0xb8);
    }
    local_d0 = '\x01';
    if (lVar3 != 0) {
      local_d0 = '\x01';
      FUN_00d50b00();
    }
    FUN_004405c0();
    local_c8 = local_150;
    local_c0 = 0;
    if (local_148 == '\0') {
      if (local_150 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_c0 = '\x01';
    FUN_004b61e0(&local_c8,&local_d8);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  (**(code **)(*local_48 + 0x400))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_210 = g_026f6e70;
  if (g_026f6e70 != 0) {
    FUN_00d50b00();
  }
  local_208 = '\x01';
  local_130 = 0;
  FUN_00d50b00();
  local_130 = '\x01';
  local_200 = 0;
  local_1f8 = '\0';
  local_138 = this_ptr;
  FUN_00d40470(&local_200,&local_138,1,3);
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar9 + 0x18))();
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  uVar15 = (**(code **)(&UNK_00001668 + *local_70))();
  local_b8 = local_58;
  local_b0 = 0;
  plVar12 = g_026f6de8;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b00();
      plVar12 = g_026f6de8;
    }
  }
  else {
    local_50 = '\0';
  }
  local_b0 = '\x01';
  g_026f6de8 = plVar12;
  if (plVar12 != (int64_t *)0x0) {
    local_b0 = '\x01';
    uVar15 = FUN_00d50b00();
  }
  local_40[0] = '\0';
  local_48 = plVar12;
  FUN_00ca0840(uVar15,&local_48);
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_1f0 = g_026f6d80;
  if (g_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  local_120 = 0;
  FUN_00d50b00();
  local_120 = '\x01';
  local_1d8 = '\0';
  pplVar7 = &local_1e0;
  local_1e0 = plVar9;
  local_128 = this_ptr;
  FUN_00d40470(pplVar7,&local_128,3,3);
  pVar11 = (void*)pplVar7;
  if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0021f1f0();
  uVar15 = FUN_00d6f370();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00237ab4;
    uVar15 = FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
LAB_0023792e:
    lVar13 = g_026f6e78;
    if (g_026f6e78 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_1d0 = lVar13;
    local_1c8 = '\x01';
    cVar5 = FUN_00d70f90(uVar15,0);
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      uVar15 = (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      local_1c0 = g_026f6e80;
      if (g_026f6e80 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_1b8 = '\x01';
      FUN_00d70f90(uVar15,0);
      FUN_019928b0();
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar15 = (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    local_1b0 = g_026f6e88;
    if (g_026f6e88 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_1a8 = '\x01';
    FUN_00d70f90(uVar15,1);
    FUN_01946d20();
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    lVar13 = *(int64_t *)(this_ptr + 0x98);
  }
  else {
    if (local_48 != (int64_t *)0x0) goto LAB_0023792e;
LAB_00237ab4:
    bVar1 = true;
    lVar13 = *(int64_t *)(this_ptr + 0x98);
  }
  if (lVar13 != 0) {
    FUN_00d50b00();
    FUN_0021e520();
    FUN_00d50b20();
    FUN_00d403d0();
    local_1a0 = g_026f6e90;
    if (g_026f6e90 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    local_110 = 0;
    FUN_00d50b00();
    local_110 = '\x01';
    local_190 = 0;
    local_188 = '\0';
    plVar12 = &local_190;
    local_118 = this_ptr;
    FUN_00d40470(plVar12,&local_118,1,3);
    pVar11 = (void*)plVar12;
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  (**(code **)(&UNK_00001668 + *local_58))();
  plVar12 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_140 = plVar12;
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_100 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  local_100 = '\x01';
  local_108 = (int64_t *)(this_ptr + 0x70);
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  local_a8 = local_48;
  local_a0 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_a0 = '\x01';
  local_178 = '\0';
  local_180 = 0;
  FUN_00cbad80(&local_180,&local_a8,0x20);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00239d50();
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar12 = g_02709e30;
  if (g_02709e30 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar15 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar15 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  local_58 = plVar12;
  local_50 = '\0';
  FUN_000175c0(uVar15,&local_58);
  plVar9 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    local_40[0] = '\0';
    local_48 = plVar9;
    FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar13 = *local_70;
  (**(code **)(&g_000015c8 + lVar13))();
  pVar11 = (void*)lVar13;
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar12 = local_140;
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1f10();
  FUN_00db3760();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00710820();
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  local_98 = local_58;
  local_90 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_90 = '\x01';
  FUN_00441f10();
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_002380e2:
  plVar12 = local_88;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && plVar12 != (int64_t *)0x0) {
    (**(code **)(*plVar12 + 0x10))();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a62e90
// ============================================================
// Function: FUN_01a62e90
// Address: 01a62e90
// Size: 2351 bytes
// Class: MUTool

void FUN_01a62e90(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [12];
  uint8_t auVar4 [16];
  int64_t lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar10;
  float extraout_XMM0_Db;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar12 [16];
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dd;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint32_t extraout_XMM0_Db_01;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar15 [16];
  uint32_t extraout_XMM0_Db_02;
  uint32_t extraout_XMM0_Dd_01;
  uint8_t auVar16 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Dd_02;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint32_t extraout_XMM0_Db_04;
  uint32_t extraout_XMM0_Dd_03;
  uint8_t auVar21 [16];
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Dd_04;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint32_t extraout_XMM0_Db_06;
  uint32_t extraout_XMM0_Dd_05;
  uint8_t auVar24 [16];
  float extraout_XMM0_Db_07;
  float extraout_XMM0_Db_08;
  uint64_t extraout_XMM0_Qb_02;
  uint32_t extraout_XMM0_Dd_06;
  uint8_t auVar25 [16];
  float extraout_XMM0_Db_09;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint64_t extraout_XMM0_Qb_03;
  float fVar33;
  uint8_t in_XMM1 [16];
  float fVar34;
  float fVar35;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint32_t uVar36;
  uint32_t uVar37;
  uint8_t auVar38 [16];
  uint8_t auVar39 [12];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  float local_cc;
  float local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  uint8_t local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  float local_98;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_5c;
  int64_t *local_58;
  char local_50;
  float local_44;
  
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && (iVar8 = FUN_01d3b620(), iVar8 == 2)) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*this_ptr + 0xaf8))();
    cVar6 = FUN_00d05410();
    if (cVar6 != '\0') {
      FUN_00d403d0();
      lVar5 = g_027e1370;
      if (g_027e1370 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_100 = 0;
      local_f8 = '\0';
      FUN_00d40470(&local_100,&stack0xffffffffffffff58,1,3);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar8 = FUN_01d3a5a0();
    if (iVar8 == 1) {
      FUN_01d3abf0();
      FUN_01e466c0();
      fVar10 = (float)(**(code **)(*this_ptr + 0xb50))();
      uVar11 = (**(code **)(*this_ptr + 0xaf8))();
      fVar33 = in_XMM1._0_4_;
      if (in_XMM1._4_4_ < fVar33 + fVar33) {
        insertps(in_XMM1,ZEXT416((uint)(g_0239426c * fVar33)),0x10);
      }
      auVar32._8_4_ = (int)extraout_XMM0_Qb;
      auVar32._0_8_ = uVar11;
      auVar32._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
      bVar7 = FUN_00d05410();
      uVar11 = (**(code **)(*this_ptr + 0xaf8))();
      auVar38._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar38._0_8_ = uVar11;
      auVar12._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      auVar38._12_4_ = auVar12._12_4_;
      fVar33 = (float)((uint64_t)uVar11 >> 0x20);
      if (bVar7 == 0) {
        fVar35 = auVar32._0_4_;
        fVar34 = auVar32._4_4_;
        if (fVar35 + fVar35 <= fVar34) {
          auVar29._4_4_ = fVar33;
          auVar29._0_4_ = fVar33;
          auVar29._8_4_ = auVar12._12_4_;
          auVar29._12_4_ = auVar12._12_4_;
          auVar28._4_12_ = auVar29._4_12_;
          auVar28._0_4_ = fVar33 + (fVar34 - fVar35);
          auVar12 = insertps(auVar38,auVar28,0x10);
          auVar39 = auVar12._4_12_;
        }
        else {
          auVar28 = ZEXT416((uint)(g_0239426c * fVar35));
          auVar2._4_4_ = fVar33;
          auVar2._0_4_ = fVar33 + (fVar34 - g_0239426c * fVar35);
          auVar2._8_4_ = auVar12._12_4_;
          auVar2._12_4_ = auVar12._12_4_;
          auVar12 = insertps(auVar38,auVar2,0x10);
          auVar39 = auVar12._4_12_;
          insertps(auVar32,auVar28,0x10);
        }
        auVar3._4_8_ = auVar28._8_8_;
        auVar3._0_4_ = auVar39._0_4_;
        auVar30._0_8_ = auVar3._0_8_ << 0x20;
        auVar30._8_4_ = auVar39._4_4_;
        auVar30._12_4_ = auVar39._8_4_;
        cVar6 = FUN_00d05410();
        if (cVar6 == '\0') {
          local_f0 = *arg1;
          local_e8 = '\0';
          FUN_01d924f0();
          if (local_e8 == '\0') {
            return;
          }
          if (local_f0 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        (**(code **)(*this_ptr + 0xaf8))();
        fVar33 = auVar30._4_4_ + extraout_XMM0_Db_03;
        fVar35 = auVar30._12_4_ + extraout_XMM0_Dd_02;
        auVar19._4_4_ = fVar33;
        auVar19._0_4_ = fVar33;
        auVar19._8_4_ = fVar35;
        auVar19._12_4_ = fVar35;
        auVar20._4_12_ = auVar19._4_12_;
        auVar20._0_4_ = fVar33 + g_02390d00 + g_02390124;
        auVar12 = roundss(auVar20,auVar20,9);
        local_44 = auVar12._0_4_;
        (**(code **)(*this_ptr + 0xaf8))();
        auVar21._4_4_ = extraout_XMM0_Db_04;
        auVar21._0_4_ = extraout_XMM0_Db_04;
        auVar21._8_4_ = extraout_XMM0_Dd_03;
        auVar21._12_4_ = extraout_XMM0_Dd_03;
        auVar12 = roundss(auVar21,auVar21,9);
        local_5c = auVar12._0_4_;
        auVar32 = ZEXT416((uint)(fVar10 + local_5c));
        auVar12 = roundss(ZEXT816(0),auVar32,9);
        (**(code **)(*this_ptr + 0xb00))();
        fVar10 = auVar32._4_4_ + extraout_XMM0_Db_05;
        fVar33 = auVar32._12_4_ + extraout_XMM0_Dd_04;
        auVar22._4_4_ = fVar10;
        auVar22._0_4_ = fVar10;
        auVar22._8_4_ = fVar33;
        auVar22._12_4_ = fVar33;
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ = fVar10 + g_02390d00 + g_02390124;
        auVar32 = roundss(auVar23,auVar23,9);
        local_84 = auVar32._0_4_;
        local_88 = local_44;
        if (auVar12._0_4_ <= local_44) {
          local_88 = auVar12._0_4_;
        }
        (**(code **)(*this_ptr + 0xb00))();
        auVar24._4_4_ = extraout_XMM0_Db_06;
        auVar24._0_4_ = extraout_XMM0_Db_06;
        auVar24._8_4_ = extraout_XMM0_Dd_05;
        auVar24._12_4_ = extraout_XMM0_Dd_05;
        auVar31 = roundss(ZEXT816(0),auVar24,9);
        local_98 = auVar31._0_4_;
        fVar10 = local_84 - local_98;
      }
      else {
        auVar12._4_4_ = fVar33;
        auVar12._0_4_ = fVar33;
        auVar12._8_4_ = auVar12._12_4_;
        auVar12 = roundss(auVar12,auVar12,9);
        local_44 = auVar12._0_4_;
        (**(code **)(*this_ptr + 0xaf8))();
        fVar33 = auVar32._4_4_ + extraout_XMM0_Db_00;
        fVar35 = auVar32._12_4_ + extraout_XMM0_Dd;
        auVar13._4_4_ = fVar33;
        auVar13._0_4_ = fVar33;
        auVar13._8_4_ = fVar35;
        auVar13._12_4_ = fVar35;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = fVar33 + g_02390d00 + g_02390124;
        auVar12 = roundss(auVar14,auVar14,9);
        local_5c = auVar12._0_4_;
        (**(code **)(*this_ptr + 0xb00))();
        auVar15._4_4_ = extraout_XMM0_Db_01;
        auVar15._0_4_ = extraout_XMM0_Db_01;
        auVar15._8_4_ = extraout_XMM0_Dd_00;
        auVar15._12_4_ = extraout_XMM0_Dd_00;
        auVar12 = roundss(auVar15,auVar15,9);
        local_88 = auVar12._0_4_;
        auVar12 = roundss(ZEXT416((uint)(local_5c - fVar10)),ZEXT416((uint)(local_5c - fVar10)),9);
        local_84 = local_44;
        if (local_44 <= auVar12._0_4_) {
          local_84 = auVar12._0_4_;
        }
        fVar33 = 0.0;
        fVar35 = 0.0;
        fVar34 = 0.0;
        fVar10 = local_84;
        (**(code **)(*this_ptr + 0xb00))();
        auVar16._4_4_ = extraout_XMM0_Db_02;
        auVar16._0_4_ = extraout_XMM0_Db_02;
        auVar16._8_4_ = extraout_XMM0_Dd_01;
        auVar16._12_4_ = extraout_XMM0_Dd_01;
        auVar12 = roundss(auVar16,auVar16,9);
        local_98 = auVar12._0_4_;
        uVar11 = (**(code **)(*this_ptr + 0xb00))();
        auVar31._0_4_ = fVar10 + (float)uVar11;
        auVar31._4_4_ = fVar33 + (float)((uint64_t)uVar11 >> 0x20);
        auVar31._8_4_ = fVar35 + (float)extraout_XMM0_Qb_01;
        auVar31._12_4_ = fVar34 + (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
        auVar17._4_4_ = auVar31._4_4_;
        auVar17._0_4_ = auVar31._4_4_;
        auVar17._8_4_ = auVar31._12_4_;
        auVar17._12_4_ = auVar31._12_4_;
        auVar18._4_12_ = auVar17._4_12_;
        auVar18._0_4_ = auVar31._4_4_ + g_02390d00;
        auVar12 = roundss(auVar18,auVar18,9);
        fVar10 = auVar12._0_4_ - local_98;
      }
      FUN_01a18460();
      if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar11 = (**(code **)(*local_58 + 0xa98))();
      local_128 = (float)uVar11;
      fStack_124 = (float)((uint64_t)uVar11 >> 0x20);
      fStack_120 = (float)extraout_XMM0_Qb_02;
      fStack_11c = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
      FUN_01e3f820();
      _local_b8 = auVar31;
      local_cc = (float)(**(code **)(*local_58 + 0xbc8))();
      local_c8 = (float)(**(code **)(*local_58 + 0xbe0))();
      local_138 = fStack_124 + local_128;
      fStack_134 = fStack_124 + fStack_124;
      fStack_130 = fStack_11c + fStack_120;
      fStack_12c = fStack_11c + fStack_11c;
      local_b8._0_4_ = (local_138 - local_128) / (float)local_b8._4_4_;
      local_b8._4_4_ = fStack_134;
      fStack_b0 = fStack_130;
      fStack_ac = fStack_12c;
      local_c0 = local_5c - local_98;
      local_bc = (fVar10 - local_5c) + local_98;
      local_c4 = (uint)(bVar7 ^ 1);
LAB_01a633e0:
      (**(code **)(*this_ptr + 0x658))();
      plVar1 = (int64_t *)*arg1;
      if (plVar1 == local_58) {
        if (((char)arg1[1] == '\0') && (local_58 != (int64_t *)0x0)) {
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01a6347c;
          }
          goto LAB_01a63433;
        }
LAB_01a6343d:
        if (*arg1 == 0) goto LAB_01a63761;
LAB_01a6348f:
        iVar8 = FUN_01d3a5a0();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 == 6) goto LAB_01a63775;
        iVar8 = FUN_01d3a5a0();
        if (iVar8 == 5) {
          FUN_01d3abf0();
          FUN_01e466c0();
          local_7c = (local_44 - extraout_XMM0_Db) + extraout_XMM0_Db_07;
          auVar12 = ZEXT416((uint)local_7c);
          if (local_88 <= local_7c) {
            local_78 = 0.0;
            if (local_84 < local_7c) {
              local_78 = local_7c - local_84;
              auVar12 = ZEXT416((uint)local_78);
              local_7c = local_84;
              goto LAB_01a6352f;
            }
            pcVar9 = *(code **)(*this_ptr + 0xb00);
            if (bVar7 == 0) goto LAB_01a635dc;
LAB_01a63548:
            (*pcVar9)();
            if (extraout_XMM0_Db_07 < extraout_XMM0_Db_08) {
              if ((local_78 != g_0239424c) || (NAN(local_78) || NAN(g_0239424c))) {
                auVar12 = roundss(ZEXT816(0),ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),9);
                fVar35 = auVar12._0_4_ + local_138;
                fVar33 = local_c8;
                if (fVar35 <= local_c8) {
                  fVar33 = fVar35;
                }
                (**(code **)(*local_58 + 0xbf0))();
                auVar25 = ZEXT416((uint)(fVar33 - local_128));
                fVar33 = fVar33 - (fVar33 - local_128);
LAB_01a63656:
                auVar32 = insertps(ZEXT416((uint)fVar33),auVar25,0x10);
                auVar12 = auVar32;
                FUN_01e436c0();
                fStack_74 = auVar32._4_4_;
                fVar33 = auVar12._4_4_;
                auVar26._4_4_ = fVar33;
                auVar26._0_4_ = fVar33;
                auVar26._8_4_ = auVar12._12_4_;
                auVar26._12_4_ = auVar12._12_4_;
                auVar27._4_12_ = auVar26._4_12_;
                auVar27._0_4_ = fVar33 / fStack_74;
                (**(code **)(*local_58 + 0xc08))(auVar27._0_8_);
                (**(code **)(*local_58 + 0xaa0))();
                goto LAB_01a633e0;
              }
            }
            local_98 = local_5c - local_7c;
            fVar35 = extraout_XMM0_Db_07;
            fVar34 = extraout_XMM0_Db_07;
            uVar36 = extraout_XMM0_Dd_06;
            fVar33 = local_bc;
          }
          else {
            local_78 = local_88 - local_7c;
            local_7c = local_88;
LAB_01a6352f:
            pcVar9 = *(code **)(*this_ptr + 0xb00);
            if (bVar7 != 0) goto LAB_01a63548;
LAB_01a635dc:
            (*pcVar9)();
            if (extraout_XMM0_Db_09 + auVar12._4_4_ + g_02390d00 < extraout_XMM0_Db_07) {
              if ((local_78 == g_0239424c) && (!NAN(local_78) && !NAN(g_0239424c)))
              goto LAB_01a636c1;
              auVar12 = roundss(ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),
                                ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),9);
              fVar35 = local_128 - auVar12._0_4_;
              fVar33 = local_cc;
              if (local_cc <= fVar35) {
                fVar33 = fVar35;
              }
              (**(code **)(*local_58 + 0xbd8))();
              auVar4._4_4_ = fStack_134;
              auVar4._0_4_ = local_138;
              auVar4._8_4_ = fStack_130;
              auVar4._12_4_ = fStack_12c;
              auVar25._4_12_ = auVar4._4_12_;
              auVar25._0_4_ = local_138 - fVar33;
              goto LAB_01a63656;
            }
LAB_01a636c1:
            local_98 = local_7c - local_5c;
            fVar34 = 0.0;
            uVar36 = 0;
            fVar35 = local_c0;
            fVar33 = local_c0;
          }
          uVar37 = uVar36;
          uVar11 = (**(code **)(*local_58 + 0xa98))();
          local_128 = (float)uVar11;
          fStack_124 = (float)((uint64_t)uVar11 >> 0x20);
          fStack_120 = (float)extraout_XMM0_Qb_03;
          fStack_11c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
          FUN_01e3f820();
          local_b8._4_4_ = fVar34;
          local_b8._0_4_ = fVar35;
          fStack_b0 = (float)uVar36;
          fStack_ac = (float)uVar37;
          (**(code **)(*local_58 + 0xc70))(local_98 / fVar10,fVar33 / fVar10);
          local_138 = fStack_124 + local_128;
          fStack_134 = fStack_124 + fStack_124;
          fStack_130 = fStack_11c + fStack_120;
          fStack_12c = fStack_11c + fStack_11c;
          local_b8._0_4_ = (local_138 - local_128) / (float)local_b8._4_4_;
          local_b8._4_4_ = fStack_134;
          fStack_b0 = fStack_130;
          fStack_ac = fStack_12c;
        }
        goto LAB_01a633e0;
      }
      lVar5 = arg1[1];
      if (local_50 != '\0') {
        *arg1 = (int64_t)local_58;
        if (((char)lVar5 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a63433:
        *(void*)(arg1 + 1) = 1;
        local_50 = '\0';
        goto LAB_01a6343d;
      }
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_58;
      if (((char)lVar5 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a6347c:
      *(void*)(arg1 + 1) = 1;
      if (*arg1 != 0) goto LAB_01a6348f;
LAB_01a63761:
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a63775:
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_e0 = *arg1;
      local_d8 = '\0';
      FUN_01d924f0();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01a5e160
// ============================================================
// Function: FUN_01a5e160
// Address: 01a5e160
// Size: 2679 bytes
// Class: MUTool

uint64_t FUN_01a5e160(uint64_t param_1,int64_t *param_2)

{
  double dVar1;
  bool bVar2;
  uint64_t uVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  void*puVar10;
  void *pvVar11;
  void* pVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  int64_t *arg1;
  int64_t this_ptr;
  undefined7 uVar17;
  int64_t lVar16;
  bool bVar18;
  uint32_t uVar19;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar20;
  uint32_t uVar21;
  double dVar22;
  float fStack_114;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  int64_t *local_80;
  uint32_t local_74;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  uint64_t local_38;
  
  if (*param_2 == 0) {
    uVar15 = 0;
    goto LAB_01a5e36a;
  }
  uVar19 = FUN_01a58dc0();
  local_80 = local_68;
  if (local_68 == (int64_t *)0x0) {
    bVar2 = true;
    bVar18 = false;
    local_80 = (int64_t *)0x0;
LAB_01a5e2e9:
    local_b8 = *param_2;
    local_b0 = '\0';
    uVar7 = FUN_01a58d30(uVar19,&local_b8);
    uVar15 = (uint64_t)uVar7;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar18) goto LAB_01a5e36a;
  }
  else {
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_80))();
    if (cVar5 != '\0') {
      iVar6 = FUN_01d3a5a0();
      bVar18 = true;
      if (iVar6 == 1) {
        iVar6 = FUN_01d3b630();
        if (iVar6 == 1) {
          (**(code **)("/usr/lib/libobjc.A.dylib" + *local_80 + 0x18))();
          plVar9 = local_80;
          FUN_01d3abf0();
          local_a8 = FUN_01e466c0();
          (**(code **)(*plVar9 + 0xe30))();
          local_70 = local_68;
          if (local_68 == (int64_t *)0x0) {
            local_74 = 1;
            local_88 = 0;
          }
          else {
            plVar9 = local_68;
            if (local_60 == '\0') {
              uVar8 = FUN_00d50b00();
              if ((local_60 == '\0') || (local_68 == (int64_t *)0x0)) {
                local_74 = 0;
                local_88 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                goto LAB_01a5e394;
              }
              plVar9 = (int64_t *)FUN_00d50b20();
            }
            local_88 = CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
            local_74 = 0;
          }
LAB_01a5e394:
          iVar6 = FUN_01d3b620();
          if (iVar6 == 2) {
            if (*(int64_t *)(this_ptr + 0x38) == 0) {
              uVar8 = 0;
              plVar14 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              FUN_00d50b20();
              lVar16 = *(int64_t *)(this_ptr + 0x38);
              if (lVar16 != 0) {
                FUN_00d50b00();
              }
              FUN_00d74120();
              plVar14 = local_68;
              if (local_68 == (int64_t *)0x0) {
                plVar14 = (int64_t *)0x0;
                uVar8 = 0;
              }
              else {
                uVar17 = (undefined7)((uint64_t)this_ptr >> 8);
                if (local_60 == '\0') {
                  FUN_00d50b00();
                  uVar8 = CONCAT71(uVar17,1);
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_60 = '\0';
                  uVar8 = CONCAT71(uVar17,1);
                }
              }
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
            }
            if (local_70 == (int64_t *)0x0) {
              local_38._0_1_ = '\0';
              plVar9 = (int64_t *)0x0;
            }
            else {
              local_60 = '\0';
              local_68 = (int64_t *)0x0;
              local_58 = local_70;
              local_48 = 0;
              local_50 = 0;
              local_a8 = uVar8;
              if (*(int *)((int64_t)local_70 + 0xc) < 1) {
                local_38 = 0;
                plVar9 = (int64_t *)0x0;
              }
              else {
                lVar16 = 0;
                local_38 = 0;
                plVar13 = (int64_t *)0x0;
                do {
                  pVar12 = (void*)local_38;
                  local_38 = local_38 & 0xffffffff;
                  local_68 = *(int64_t **)(local_70[2] + lVar16 * 8);
                  pvVar11 = _pthread_getspecific(pVar12);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar8 = FUN_012708c0();
                  plVar9 = local_98;
                  uVar17 = (undefined7)((uint64_t)uVar8 >> 8);
                  cVar5 = (char)local_38;
                  if (local_98 == plVar13) {
                    plVar9 = plVar13;
                    if ((cVar5 == '\0') && (local_98 != (int64_t *)0x0)) {
                      local_38 = CONCAT71(uVar17,1);
                      if (local_90 != '\0') goto LAB_01a5e987;
                      local_38 = CONCAT71(uVar17,1);
                      FUN_00d50b00();
                    }
joined_r0x01a5e960:
                    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_90 == '\0') {
                      if (local_98 != (int64_t *)0x0) {
                        uVar8 = FUN_00d50b00();
                      }
                      local_38 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                      if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto joined_r0x01a5e960;
                    }
                    local_38 = CONCAT71(uVar17,1);
                    if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
LAB_01a5e987:
                  lVar4 = g_027bf050;
                  if ((plVar9 != (int64_t *)0x0) && (plVar14 != (int64_t *)0x0)) {
                    plVar13 = plVar9;
                    if (g_027bf050 != 0) {
                      FUN_00d50b00();
                    }
                    pVar12 = (void*)plVar13;
                    cVar5 = (**(code **)(*plVar14 + 0x50))();
                    if (lVar4 != 0) {
                      FUN_00d50b20();
                    }
                    lVar4 = g_027e1e80;
                    if (cVar5 == '\0') {
                      if (g_027e1e80 != 0) {
                        FUN_00d50b00();
                      }
                      cVar5 = (**(code **)(*plVar14 + 0x50))();
                      if (lVar4 != 0) {
                        FUN_00d50b20();
                      }
                      lVar4 = g_027bf048;
                      if (cVar5 == '\0') {
                        if (g_027bf048 != 0) {
                          FUN_00d50b00();
                        }
                        cVar5 = (**(code **)(*plVar14 + 0x50))();
                        if (lVar4 != 0) {
                          FUN_00d50b20();
                        }
                        if (cVar5 != '\0') {
                          pvVar11 = _pthread_getspecific(pVar12);
                          if (pvVar11 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_012dfbc0();
                        }
                      }
                      else {
                        pvVar11 = _pthread_getspecific(pVar12);
                        if (pvVar11 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012df8d0();
                      }
                    }
                    else {
                      pvVar11 = _pthread_getspecific(pVar12);
                      if (pvVar11 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_012dfc10();
                    }
                  }
                  lVar16 = lVar16 + 1;
                  local_50 = CONCAT44(local_50._4_4_,(int)lVar16);
                  plVar13 = plVar9;
                } while ((int)lVar16 < *(int *)((int64_t)local_70 + 0xc));
              }
              FUN_001159b0();
              uVar8 = local_a8;
            }
            if (((char)uVar8 != '\0') && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar9 = (int64_t *)0x0;
            local_38._0_1_ = '\0';
            uVar8 = local_a8;
LAB_01a5e430:
            uVar3 = uVar8;
            (**(code **)(*local_80 + 0x658))();
            plVar14 = local_68;
            plVar13 = (int64_t *)*arg1;
            if (plVar13 != local_68) {
              lVar16 = arg1[1];
              if (local_60 != '\0') {
                *arg1 = (int64_t)local_68;
                if (((char)lVar16 != '\0') && (plVar13 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a5e481;
              }
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)plVar14;
              if (((char)lVar16 != '\0') && (plVar13 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01a5e4c3:
              *(void*)(arg1 + 1) = 1;
              if (*arg1 == 0) goto LAB_01a5e76d;
LAB_01a5e4d4:
              uVar7 = FUN_01d3a5a0();
              plVar14 = (int64_t *)(uint64_t)uVar7;
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (uVar7 == 6) goto LAB_01a5e781;
              iVar6 = FUN_01d3a5a0();
              uVar8 = uVar3;
              if (iVar6 == 5) {
                FUN_01d3abf0();
                local_a8 = FUN_01e466c0();
                uVar8 = local_a8;
                if (local_70 != (int64_t *)0x0) {
                  local_60 = '\0';
                  local_68 = (int64_t *)0x0;
                  local_58 = local_70;
                  local_50 = 0xffffffff;
                  local_48 = 0;
                  fStack_114 = (float)((uint64_t)uVar3 >> 0x20);
                  fVar20 = (fStack_114 - (float)((uint64_t)local_a8 >> 0x20)) / g_023908e0;
                  local_50._4_4_ = 0;
                  while( true ) {
                    if (local_50._4_4_ != 0) {
                      if (local_50._4_4_ < 1) {
                        iVar6 = -local_50._4_4_;
                      }
                      else {
                        iVar6 = (int)local_50 - local_50._4_4_;
                        local_50 = CONCAT44(local_50._4_4_,iVar6);
                        FUN_00d23690();
                        local_48 = local_48 + local_50._4_4_;
                        iVar6 = 0;
                      }
                      local_50 = CONCAT44(iVar6,(int)local_50);
                    }
                    lVar16 = (int64_t)(int)local_50;
                    iVar6 = (int)local_50 + 1;
                    local_50 = CONCAT44(local_50._4_4_,iVar6);
                    if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
                    local_68 = *(int64_t **)(local_58[2] + 8 + lVar16 * 8);
                    pvVar11 = _pthread_getspecific((void*)local_58[2]);
                    if (pvVar11 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012708c0();
                    plVar13 = local_98;
                    if (local_98 == plVar9) {
                      plVar13 = plVar9;
                      cVar5 = (char)local_38;
                      if (((char)local_38 == '\0') && (local_98 != (int64_t *)0x0)) {
                        local_38._0_1_ = '\x01';
                        if (local_90 != '\0') goto LAB_01a5e6f6;
                        FUN_00d50b00();
                        cVar5 = '\x01';
                      }
LAB_01a5e6d4:
                      local_38._0_1_ = cVar5;
                      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (local_90 == '\0') {
                        if (local_98 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        cVar5 = '\x01';
                        if (((char)local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_01a5e6d4;
                      }
                      cVar5 = '\x01';
                      bVar18 = (char)local_38 != '\0';
                      local_38._0_1_ = cVar5;
                      if ((bVar18) && (plVar9 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
LAB_01a5e6f6:
                    if (plVar13 != (int64_t *)0x0) {
                      if (*(int64_t *)(this_ptr + 0x38) == 0) {
                        uVar19 = 0;
                        uVar21 = 0;
                      }
                      else {
                        pvVar11 = _pthread_getspecific((void*)plVar13);
                        plVar9 = plVar13;
                        if ((pvVar11 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                          plVar9 = (int64_t *)
                                   plVar13[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                        }
                        puVar10 = (void*)(**(code **)(*plVar9 + 0x218))();
                        uVar19 = (uint32_t)*puVar10;
                        uVar21 = (uint32_t)((uint64_t)*puVar10 >> 0x20);
                      }
                      dVar1 = (double)CONCAT44(uVar21,uVar19) + (double)fVar20;
                      dVar22 = g_0238fee8;
                      if (dVar1 <= g_0238fee8) {
                        dVar22 = dVar1;
                      }
                      uVar19 = 0;
                      if (0.0 <= dVar22) {
                        uVar19 = SUB84(dVar22,0);
                      }
                      FUN_01a5e030(uVar19);
                    }
                    plVar9 = plVar13;
                  }
                  FUN_001159b0();
                  uVar8 = local_a8;
                }
              }
              goto LAB_01a5e430;
            }
            if (((char)arg1[1] == '\0') && (local_68 != (int64_t *)0x0)) {
              if (local_60 == '\0') {
                FUN_00d50b00();
                goto LAB_01a5e4c3;
              }
LAB_01a5e481:
              *(void*)(arg1 + 1) = 1;
              local_60 = '\0';
            }
            if (*arg1 != 0) goto LAB_01a5e4d4;
LAB_01a5e76d:
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a5e781:
            FUN_0199eb40();
          }
          if (((char)local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_74 == '\0' && local_70 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar2 = false;
          uVar15 = CONCAT71((int7)((uint64_t)plVar14 >> 8),1);
          goto LAB_01a5e35c;
        }
        bVar2 = false;
        bVar18 = true;
        uVar19 = extraout_XMM0_Da_00;
      }
      else {
        bVar2 = false;
        uVar19 = extraout_XMM0_Da;
      }
      goto LAB_01a5e2e9;
    }
    bVar2 = false;
    uVar15 = 0;
  }
LAB_01a5e35c:
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_01a5e36a:
  return uVar15 & 0xffffffff;
}



// ============================================================
// 01a5a220
// ============================================================
// Function: FUN_01a5a220
// Address: 01a5a220
// Size: 2990 bytes
// Class: MUTool

void FUN_01a5a220(void)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  code *pcVar4;
  int64_t *plVar5;
  char cVar6;
  bool bVar7;
  uint64_t uVar8;
  int64_t **pplVar9;
  undefined7 uVar14;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  void *pvVar13;
  void* pVar15;
  uint uVar16;
  int iVar17;
  int64_t *this_ptr;
  uint64_t uVar18;
  int64_t *plVar19;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  int64_t *local_60;
  uint64_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  FUN_00d23340();
  local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_80);
  pplVar9 = &local_80;
  if ((char)local_80 == '\0') {
    pplVar9 = &local_50;
  }
  *(void*)pplVar9 = 0;
  if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_88 == (int64_t *)0x0) {
    return;
  }
  local_38 = local_88;
  if ((char)this_ptr[6] == '\0') {
    while (*(int *)(this_ptr[5] + 0xc) != 0) {
      FUN_00d23340();
      local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_80);
      pplVar9 = &local_80;
      if ((char)local_80 == '\0') {
        pplVar9 = &local_50;
      }
      *(void*)pplVar9 = 0;
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a5f2f0();
      if (((char)local_50 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_80);
      pplVar9 = &local_80;
      if ((char)local_80 == '\0') {
        pplVar9 = &local_50;
      }
      *(void*)pplVar9 = 0;
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_88 + 0x478))();
      if ((char)local_50 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
    local_58 = 0;
    plVar19 = local_78;
  }
  else {
    (**(code **)(*local_88 + 0xa60))();
    uVar8 = FUN_01a59d50();
    uVar14 = (undefined7)((uint64_t)uVar8 >> 8);
    if (local_88 == (int64_t *)0x0) {
      bVar3 = 1;
      local_98 = CONCAT71(uVar14,1) & 0xffffffff;
      plVar12 = (int64_t *)0x0;
      local_40 = (int64_t *)0x0;
      uVar8 = 0;
    }
    else {
      if ((char)local_80 == '\0') {
        uVar8 = FUN_00d50b00();
        uVar14 = (undefined7)((uint64_t)uVar8 >> 8);
      }
      local_40 = (int64_t *)CONCAT71(uVar14,1);
      local_98 = 0;
      bVar3 = 0;
      uVar8 = CONCAT71(uVar14,1);
      plVar12 = local_88;
    }
    uVar16 = *(uint *)(this_ptr[5] + 0xc);
    uVar18 = (uint64_t)uVar16;
    if (0 < (int)uVar16) {
      while( true ) {
        local_60 = plVar12;
        uVar16 = uVar16 - 1;
        FUN_01a5ff20();
        local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_80);
        pplVar9 = &local_80;
        if ((char)local_80 == '\0') {
          pplVar9 = &local_50;
        }
        *(void*)pplVar9 = 0;
        if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_80._0_1_ = '\0';
        cVar6 = FUN_00d24090();
        if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar6 == '\0') ||
           (cVar6 = (**(code **)(*this_ptr + 0x440))(), plVar12 = local_60, cVar6 == '\0')) {
          FUN_01a5f2f0();
          plVar12 = local_60;
          (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr[5] + 0x10) + (uint64_t)uVar16 * 8) +
                      0x478))();
          FUN_00d23620();
        }
        else {
          FUN_0198a800();
        }
        if (((char)local_50 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((int64_t)uVar18 < 2) break;
        uVar18 = uVar18 - 1;
        plVar12 = local_60;
      }
    }
    (**(code **)(*local_38 + 0xa58))();
    uVar10 = FUN_01a59d50();
    plVar19 = local_78;
    pcVar4 = g_026342f8;
    if (local_88 == plVar12) {
      plVar5 = plVar12;
      if ((bool)(bVar3 & local_88 != (int64_t *)0x0)) {
        local_58 = CONCAT71((uint7)(uint3)(local_98 >> 8),1);
        if ((char)local_80 == '\0') {
          FUN_00d50b00();
          pcVar4 = g_026342f8;
          plVar19 = local_78;
        }
      }
      else {
        local_58 = uVar8;
        if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
          pcVar4 = g_026342f8;
          plVar19 = local_78;
        }
      }
    }
    else if ((char)local_80 == '\0') {
      if (local_88 != (int64_t *)0x0) {
        uVar10 = FUN_00d50b00();
      }
      local_58 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      pcVar4 = g_026342f8;
      plVar19 = local_78;
      plVar5 = local_88;
      if (((byte)local_40 & plVar12 != (int64_t *)0x0) == 1) {
        FUN_00d50b20();
        pcVar4 = g_026342f8;
        plVar19 = local_78;
        plVar5 = local_88;
      }
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      plVar5 = local_88;
      if (((byte)local_40 & plVar12 != (int64_t *)0x0) == 1) {
        FUN_00d50b20();
        pcVar4 = g_026342f8;
        plVar19 = local_78;
        plVar5 = local_88;
      }
    }
    local_78 = plVar5;
    g_026342f8 = pcVar4;
    if (local_78 != (int64_t *)0x0) {
      local_70._4_4_ = 0;
      local_80._0_1_ = '\0';
      local_88 = (int64_t *)0x0;
      local_70 = 0xffffffff;
      local_68 = 0;
      bVar1 = false;
      plVar12 = (int64_t *)0x0;
      bVar7 = false;
      local_60 = local_78;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar17 = -local_70._4_4_;
          }
          else {
            iVar17 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar17);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar17 = 0;
          }
          local_70 = CONCAT44(iVar17,(int)local_70);
        }
        plVar19 = local_60;
        lVar11 = (int64_t)(int)local_70;
        iVar17 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar17);
        local_40 = plVar12;
        if (*(int *)((int64_t)local_78 + 0xc) <= iVar17) break;
        local_88 = *(int64_t **)(local_78[2] + 8 + lVar11 * 8);
        if (0 < *(int *)(this_ptr[5] + 0xc)) {
          lVar11 = 0;
          do {
            FUN_01a5ff20();
            plVar19 = local_50;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 == local_88) {
              if (*(int64_t *)(*(int64_t *)(this_ptr[5] + 0x10) + lVar11 * 8) != 0) {
                FUN_00d50b00();
                FUN_00d50b20();
                plVar12 = local_40;
                goto LAB_01a5a6f0;
              }
              break;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(this_ptr[5] + 0xc));
        }
        cVar6 = (**(code **)(*this_ptr + 0x440))();
        plVar19 = local_40;
        plVar12 = local_40;
        if (cVar6 != '\0') {
          plVar12 = (int64_t *)FUN_00e8fc40();
          FUN_0006daf0();
          *(void*)(plVar12 + 0x29) = 0;
          plVar12[0x28] = 0;
          *(void*)((int64_t)plVar12 + 0x14c) = 0;
          *(void*)((int64_t)plVar12 + 0x154) = 0;
          plVar12[0x2b] = 0;
          plVar12[0x2c] = 0;
          pVar15 = 0x26342d0;
          *plVar12 = (int64_t)&g_026342e0;
          plVar12[2] = (int64_t)&g_02634c68;
          plVar12[0x27] = (int64_t)&g_02634ca8;
          plVar12[0x2d] = (int64_t)&g_02634cd8;
          plVar12[0x2e] = 0;
          plVar12[0x2f] = 0;
          (*pcVar4)();
          if (plVar12 == plVar19) {
            plVar12 = plVar19;
            if (bVar1) {
              FUN_00d50b20();
              bVar2 = bVar1;
            }
            else {
              bVar2 = true;
            }
          }
          else {
            bVar2 = true;
            if ((bVar1) && (plVar19 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar13 = _pthread_getspecific(pVar15);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          plVar19 = local_50;
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 == (int64_t *)0x0) {
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            plVar19 = local_50;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 != (int64_t *)0x0) {
              pvVar13 = _pthread_getspecific(pVar15);
              if (pvVar13 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              pvVar13 = _pthread_getspecific(pVar15);
              if (pvVar13 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              plVar19 = local_50;
              if (local_48 == '\0') {
                if (local_50 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_0198a7b0();
              if (plVar19 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            plVar19 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_0198a7b0();
            if (plVar19 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*this_ptr + 0x438))();
          FUN_01a5f2f0();
          (**(code **)(*local_38 + 0x450))();
          FUN_0198a800();
          local_48 = '\0';
          local_50 = plVar12;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar7 = true;
          bVar1 = bVar2;
        }
LAB_01a5a6f0:
      }
      FUN_01a5d060();
      if (bVar7) {
        FUN_00d23340();
        pplVar9 = &local_80;
        if ((char)local_80 == '\0') {
          pplVar9 = &local_50;
        }
        local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_80);
        *(void*)pplVar9 = 0;
        if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 == '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        (**(code **)(*local_88 + 0xb48))();
        FUN_00d50b20();
      }
      goto LAB_01a5ad27;
    }
  }
  local_78 = plVar19;
  plVar12 = (int64_t *)0x0;
  bVar1 = false;
  plVar19 = (int64_t *)0x0;
LAB_01a5ad27:
  FUN_00d50b20();
  if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar19 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a5b5e0
// ============================================================
// Function: FUN_01a5b5e0
// Address: 01a5b5e0
// Size: 2371 bytes
// Class: MUTool
// String references:
//   "MUTool"

int64_t * FUN_01a5b5e0(uint32_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int iVar8;
  int64_t lVar9;
  int64_t **pplVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
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
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  uint32_t local_40;
  char local_31;
  
  local_78 = 0;
  bVar2 = false;
  plVar6 = (int64_t *)0x0;
  lVar9 = 0;
  cVar4 = '\0';
  local_40 = param_1;
  do {
    FUN_01e1f270();
    iVar8 = *(int *)((int64_t)local_58 + 0xc);
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar8 <= local_78) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      local_31 = cVar4;
      goto LAB_01a5bc22;
    }
    FUN_01e1f270();
    lVar1 = *(int64_t *)(local_58[2] + local_78 * 8);
    if (lVar9 == lVar1) {
      lVar1 = lVar9;
      local_31 = cVar4;
      if ((cVar4 == '\0') && (lVar9 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      local_48 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_31 = '\x01';
      lVar1 = local_48;
      if ((cVar4 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
        lVar1 = local_48;
      }
    }
    local_48 = lVar1;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = local_48;
    if (((char)local_40 == '\0') || (cVar4 = FUN_01e26480(), cVar4 != '\0')) {
      uVar11 = FUN_01e26150();
      lVar9 = g_026f6e60;
      if (g_026f6e60 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_100 = lVar9;
      local_f8 = '\x01';
      FUN_000175c0(uVar11,&local_100);
      FUN_00d4efa0();
      FUN_00c7e7b0();
      local_f0 = *param_2;
      local_e8 = '\0';
      cVar4 = (**(code **)(*local_58 + 0x50))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_01e20210();
        FUN_01e1f2a0();
        uVar11 = FUN_01e26150();
        local_e0 = g_026f6e60;
        if (g_026f6e60 != 0) {
          uVar11 = FUN_00d50b00();
        }
        local_d8 = '\x01';
        pplVar10 = &local_58;
        FUN_000175c0(uVar11,&local_e0);
        plVar7 = local_58;
        if ((g_0272ffd0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_026f8f48 = FUN_00d4fe50();
          g_026f8f30 = "MUTool";
          g_026f8f38 = 0x38;
          g_026f8f40 = FUN_00274e70;
          g_026f8f50 = 0;
          ram_00000000026f8f58 = 0;
          g_026f8f60 = 0;
          g_026f8fd8 = 0;
          ram_00000000026f8fe0 = 0;
          g_026f8fe8 = 0;
          g_026f8fea = 1;
          g_026f8f68 = 0;
          ram_00000000026f8f70 = 0;
          g_026f8f78 = 0;
          ram_00000000026f8f80 = 0;
          g_026f8f88 = 0;
          ram_00000000026f8f90 = 0;
          g_026f8f98 = 0;
          ram_00000000026f8fa0 = 0;
          g_026f8fa8 = 0;
          ram_00000000026f8fb0 = 0;
          g_026f8fb8 = 0;
          ram_00000000026f8fc0 = 0;
          g_026f8fc8 = 0;
          ram_00000000026f8fd0 = 0;
          g_026f8ff3 = 0;
          g_026f8feb = 0;
          ___cxa_guard_release();
        }
        if (plVar7 == (int64_t *)0x0) {
          pplVar10 = &g_02802688;
        }
        else {
          (**(code **)(*plVar7 + 0x360))();
          cVar4 = FUN_00e85ea0();
          if (cVar4 == '\0') {
            pplVar10 = &g_02802688;
          }
        }
        *(void*)(this_ptr + 1) = 0;
        plVar7 = *pplVar10;
        if (*(char *)(pplVar10 + 1) == '\0') {
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *this_ptr = (int64_t)plVar7;
          *(void*)(this_ptr + 1) = 1;
          lVar9 = local_48;
        }
        else {
          *this_ptr = (int64_t)plVar7;
          *(void*)(this_ptr + 1) = 1;
          *(void*)(pplVar10 + 1) = 0;
          lVar9 = local_48;
        }
        local_48 = lVar9;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
LAB_01a5bc22:
        if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_31 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        return this_ptr;
      }
      for (iVar8 = 0; iVar5 = FUN_01e26080(), lVar9 = local_48, iVar8 < iVar5; iVar8 = iVar8 + 1) {
        FUN_01e26090(extraout_XMM0_Da,iVar8);
        plVar7 = local_58;
        if (local_58 == plVar6) {
          plVar7 = plVar6;
          bVar3 = bVar2;
          if ((bVar2) || (local_58 == (int64_t *)0x0)) goto joined_r0x01a5b909;
          bVar3 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01a5b8f5;
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar6 = plVar7;
LAB_01a5b8f5:
            plVar7 = plVar6;
            bVar3 = true;
          }
joined_r0x01a5b909:
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar3 = true;
          if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar3;
        plVar6 = plVar7;
        if (((char)local_40 == '\0') || (cVar4 = FUN_01e26480(), cVar4 != '\0')) {
          uVar11 = FUN_01e26150();
          lVar9 = g_026f6e60;
          if (g_026f6e60 != 0) {
            uVar11 = FUN_00d50b00();
          }
          local_d0 = lVar9;
          local_c8 = '\x01';
          FUN_000175c0(uVar11,&local_d0);
          FUN_00d4efa0();
          FUN_00c7e7b0();
          local_c0 = *param_2;
          local_b8 = '\0';
          cVar4 = (**(code **)(*local_58 + 0x50))();
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            FUN_01e20210();
            FUN_01e1f2a0();
            uVar11 = FUN_01e26150();
            local_b0 = g_026f6e60;
            if (g_026f6e60 != 0) {
              uVar11 = FUN_00d50b00();
            }
            local_a8 = '\x01';
            pplVar10 = &local_58;
            FUN_000175c0(uVar11,&local_b0);
            plVar7 = local_58;
            if ((g_0272ffd0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
              g_026f8f48 = FUN_00d4fe50();
              g_026f8f30 = "MUTool";
              g_026f8f38 = 0x38;
              g_026f8f40 = FUN_00274e70;
              g_026f8f50 = 0;
              ram_00000000026f8f58 = 0;
              g_026f8f60 = 0;
              g_026f8fd8 = 0;
              ram_00000000026f8fe0 = 0;
              g_026f8fe8 = 0;
              g_026f8fea = 1;
              g_026f8f68 = 0;
              ram_00000000026f8f70 = 0;
              g_026f8f78 = 0;
              ram_00000000026f8f80 = 0;
              g_026f8f88 = 0;
              ram_00000000026f8f90 = 0;
              g_026f8f98 = 0;
              ram_00000000026f8fa0 = 0;
              g_026f8fa8 = 0;
              ram_00000000026f8fb0 = 0;
              g_026f8fb8 = 0;
              ram_00000000026f8fc0 = 0;
              g_026f8fc8 = 0;
              ram_00000000026f8fd0 = 0;
              g_026f8ff3 = 0;
              g_026f8feb = 0;
              ___cxa_guard_release();
            }
            if (plVar7 == (int64_t *)0x0) {
              pplVar10 = &g_02802688;
              *(void*)(this_ptr + 1) = 0;
              plVar7 = g_02802688;
              if (g_02802690 == '\0') goto LAB_01a5bbbe;
LAB_01a5bb89:
              *this_ptr = (int64_t)plVar7;
              *(void*)(this_ptr + 1) = 1;
              *(void*)(pplVar10 + 1) = 0;
              lVar9 = local_48;
            }
            else {
              (**(code **)(*plVar7 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 == '\0') {
                pplVar10 = &g_02802688;
              }
              *(void*)(this_ptr + 1) = 0;
              plVar7 = *pplVar10;
              if (*(char *)(pplVar10 + 1) != '\0') goto LAB_01a5bb89;
LAB_01a5bbbe:
              if (plVar7 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *this_ptr = (int64_t)plVar7;
              *(void*)(this_ptr + 1) = 1;
              lVar9 = local_48;
            }
            local_48 = lVar9;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01a5bc22;
          }
        }
      }
    }
    local_78 = local_78 + 1;
    cVar4 = local_31;
  } while( true );
}



// ============================================================
// 01a67a50
// ============================================================
// Function: FUN_01a67a50
// Address: 01a67a50
// Size: 2277 bytes
// Class: MUTool

void* FUN_01a67a50(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int iVar4;
  int64_t *plVar5;
  char cVar6;
  void *pvVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  void* pVar11;
  uint64_t *puVar12;
  void*puVar13;
  int64_t *plVar14;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar15;
  uint64_t local_e0;
  int64_t *local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint64_t local_40;
  char local_38 [8];
  
  FUN_01a66e80();
  plVar15 = local_78;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0(param_2,0,&local_a0,&local_98);
  plVar5 = local_58;
  puVar12 = &local_50;
  local_68._0_1_ = (char)local_50;
  puVar8 = &local_68;
  if ((char)local_50 != '\0') {
    puVar8 = puVar12;
  }
  *(void*)puVar8 = 0;
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)puVar12;
  if (((char)local_68 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (plVar15 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_58 = param_2;
  FUN_00e7b970();
  local_d0 = local_58;
  local_58 = local_98;
  FUN_00e7b970();
  local_c8 = local_58;
  local_58 = (int64_t *)((uint64_t)local_58 & 0xffffffff00000000);
  if (local_d0._4_4_ != 0) {
    cVar6 = FUN_00e7c650();
    if (cVar6 != '\0') {
      iVar4 = local_c8._4_4_;
      goto joined_r0x01a67bdd;
    }
LAB_01a67c5f:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01a68317;
  }
  iVar4 = (int)((uint64_t)local_c8 >> 0x20);
joined_r0x01a67bdd:
  if (iVar4 != 0) {
    local_78 = (int64_t *)((uint64_t)local_78 & 0xffffffff00000000);
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01a67c5f;
  }
  local_70 = '\0';
  local_78 = (int64_t *)0x0;
  local_e0 = local_a0;
  local_d8 = local_98;
  FUN_01a66e80();
  plVar15 = local_58;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar13 = &local_e0;
  uVar9 = FUN_01253c10(puVar13,&local_78,&local_d8,0);
  pVar11 = (void*)puVar13;
  if (((char)local_50 != '\0') && (plVar15 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (local_78 == (int64_t *)0x0) {
    uVar9 = FUN_00d51d20();
    plVar14 = local_58;
    cVar6 = local_70;
    plVar15 = local_78;
    if (local_78 == local_58) {
      if ((local_70 != '\0') || (local_58 == (int64_t *)0x0)) goto LAB_01a67d35;
      if ((char)local_50 == '\0') {
        uVar9 = FUN_00d50b00();
        goto LAB_01a67d31;
      }
LAB_01a67cfe:
      local_70 = '\x01';
    }
    else {
      if ((char)local_50 != '\0') {
        local_78 = local_58;
        if ((local_70 != '\0') && (plVar15 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        goto LAB_01a67cfe;
      }
      if (local_58 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_78 = plVar14;
      if ((cVar6 != '\0') && (plVar15 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_01a67d31:
      local_70 = '\x01';
LAB_01a67d35:
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (local_78 != (int64_t *)0x0) goto LAB_01a67d56;
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
LAB_01a67d56:
    if ((char)arg1[0x36] == '\0') {
      local_40 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      FUN_00d50b00();
      plVar15 = plVar5;
    }
    else {
      FUN_01715620();
      pVar11 = 2;
      local_50 = 0x400000002;
      local_58 = (int64_t *)&g_02636b10;
      local_48 = 7;
      FUN_017163f0(0x400000002,&local_58);
      plVar15 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_68);
      if ((((local_60 == '\0') && (plVar15 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_60 != '\0')) && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
        FUN_00d50b20();
      }
      local_90 = plVar15;
      FUN_00d51d20();
      plVar15 = local_58;
      if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01715d40();
      local_c0 = plVar15;
      local_b8 = '\0';
      cVar6 = (**(code **)(*plVar5 + 0x50))();
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar14 = local_90;
      if (cVar6 == '\0') {
        local_b0 = local_90;
        local_a8 = '\0';
        uVar9 = (**(code **)(*plVar5 + 0x50))();
        cVar6 = (char)uVar9;
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        plVar14 = local_90;
        uVar10 = (undefined7)((uint64_t)uVar9 >> 8);
        if (cVar6 == '\0') {
          if (local_90 == (int64_t *)0x0) {
            local_40 = 0;
            plVar1 = (int64_t *)0x0;
          }
          else {
            local_40 = CONCAT71(uVar10,1);
            FUN_00d50b00();
            plVar1 = plVar14;
          }
          goto joined_r0x01a682ad;
        }
        if (plVar15 != (int64_t *)0x0) {
          local_40 = CONCAT71(uVar10,1);
          FUN_00d50b00();
          goto LAB_01a67fa1;
        }
        plVar15 = (int64_t *)0x0;
        local_40 = 0;
      }
      else {
        FUN_01715620();
        pVar11 = 2;
        local_50 = 0x300000002;
        local_58 = (int64_t *)&g_02636b10;
        local_48 = 6;
        FUN_017163f0(0x300000002,&local_58);
        plVar1 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_68);
        if (plVar1 == (int64_t *)0x0) {
          local_40 = 0;
        }
        else {
          local_40 = CONCAT71(local_68._1_7_,1);
          if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
             (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
            FUN_00d50b20();
          }
        }
joined_r0x01a682ad:
        bVar3 = plVar15 != (int64_t *)0x0;
        plVar15 = plVar1;
        if (bVar3) {
LAB_01a67fa1:
          FUN_00d50b20();
        }
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*arg1 + 0xa48))();
    FUN_01a66e80();
    lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_50 & 0xffffffffffffff00;
    plVar14 = param_2;
    local_58 = plVar5;
    FUN_012502a0(param_2,local_a0,(char)arg1[0x36]);
    pVar11 = (void*)plVar14;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    FUN_01a66e80();
    lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_50 & 0xffffffffffffff00;
    local_58 = plVar15;
    FUN_012502a0(local_98,param_2,(char)arg1[0x36]);
    pVar11 = (void*)local_98;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0xa50))();
    if ((char)arg1[0x40] == '\0') {
      *(void*)(this_ptr + 1) = 0;
      if (((char)local_40 == '\0') && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *this_ptr = plVar15;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_01a68710();
      FUN_01a68710();
      FUN_01a66e80();
      lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012521f0(param_2,0,0,0);
      plVar5 = local_58;
      puVar12 = &local_50;
      if ((char)local_50 == '\0') {
        puVar12 = (uint64_t *)local_38;
      }
      local_38[0] = (char)local_50;
      *(void*)puVar12 = 0;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 == plVar5) {
        plVar14 = plVar15;
        if (((char)local_40 == '\0') && (plVar15 != (int64_t *)0x0)) {
          cVar6 = '\x01';
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          cVar6 = (char)local_40;
          if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
            cVar6 = (char)local_40;
          }
        }
      }
      else {
        plVar14 = plVar5;
        if (local_38[0] == '\0') {
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar6 = '\x01';
          if (((char)local_40 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          cVar6 = '\x01';
          if (((char)local_40 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_60 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if ((cVar6 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a68317:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00348560
// ============================================================
// Function: FUN_00348560
// Address: 00348560
// Size: 2768 bytes
// Class: MUTool

int64_t * FUN_00348560(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar11;
  uint64_t uVar12;
  double dVar13;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  uint64_t local_88;
  int local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  local_100 = *param_2;
  local_f8 = '\0';
  uVar12 = FUN_01948a20(param_1,&local_100);
  lVar1 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (uVar12 = FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if (lVar1 == 0) {
    local_f0 = *param_2;
    local_e8 = '\0';
    (**(code **)(&UNK_00001850 + *arg1))(uVar12,&local_f0);
    local_48 = local_70;
    if (local_70 == 0) {
      local_48 = lVar1;
    }
    else if (local_68 == '\0') {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = lVar1;
    if ((char)param_1 == '\0') goto LAB_00349048;
  }
  lVar1 = g_026e1810;
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  dVar13 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar13 * g_023907c0);
  dVar13 = dVar13 * g_023907c0 - g_023907c8;
  pVar8 = 0xaaaaaaab;
  FUN_0071a120();
  if ((((local_68 == '\0') && (local_70 != 0)) && (FUN_00d50b00(), local_68 != '\0')) &&
     (local_70 != 0)) {
    FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar13 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_a0 = lVar1;
  local_98 = '\0';
  FUN_000175c0();
  lVar7 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    local_68 = '\0';
    local_70 = lVar7;
    bVar3 = FUN_00c70bc0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar7 != 0 & bVar3) != 0) {
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7210();
    lVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 == 0) goto LAB_00349048;
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_70 == 0) goto LAB_00349048;
    local_68 = 0;
    local_70 = 0;
    local_60 = lVar1;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar11 = 0;
LAB_003488b9:
      lVar7 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar11 * 8);
      pVar8 = uVar11;
      local_70 = lVar7;
      pvVar5 = _pthread_getspecific(uVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_78 = local_a0;
      if ((((local_98 == '\0') && (local_a0 != 0)) && (FUN_00d50b00(), local_98 != '\0')) &&
         (local_a0 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      lVar6 = local_a0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        pvVar5 = _pthread_getspecific(pVar8);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar8 = (void*)local_78;
        }
        FUN_013dfcb0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_a8 = local_a0;
        if (local_98 == '\0') {
          if (((local_a0 != 0) && (FUN_00d50b00(), local_98 != '\0')) && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a8 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_90 = local_a8;
          local_88 = 0xffffffff;
          local_80 = 0;
          local_88._4_4_ = 0;
          do {
            if (local_88._4_4_ != 0) {
              if (local_88._4_4_ < 1) {
                iVar10 = -local_88._4_4_;
              }
              else {
                iVar10 = (int)local_88 - local_88._4_4_;
                local_88 = CONCAT44(local_88._4_4_,iVar10);
                FUN_00d23690();
                local_80 = local_80 + local_88._4_4_;
                iVar10 = 0;
              }
              local_88 = CONCAT44(iVar10,(int)local_88);
            }
            lVar6 = (int64_t)(int)local_88;
            iVar10 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar10);
            if (*(int *)(local_90 + 0xc) <= iVar10) goto LAB_00349008;
            lVar9 = *(int64_t *)(local_90 + 0x10);
            local_a0 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            lVar6 = local_40;
            if (((local_38 == '\0') && (local_40 != 0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
              FUN_00d50b20();
            }
            if (lVar6 != lVar7) {
              pvVar5 = _pthread_getspecific((void*)lVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              lVar2 = local_40;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (lVar2 != 0) goto LAB_00348c2c;
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          } while( true );
        }
      }
      goto LAB_00349020;
    }
LAB_00349037:
    FUN_001159b0();
    FUN_00d50b20();
  }
LAB_00349048:
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
LAB_00348c2c:
  pvVar5 = _pthread_getspecific((void*)lVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific((void*)lVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  local_e0 = local_40;
  pvVar5 = _pthread_getspecific((void*)lVar9);
  if (pvVar5 != (void *)0x0) {
    local_e0 = local_40;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar9 = *(int64_t *)(local_e0 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      local_e0 = lVar9;
    }
  }
  pVar8 = (void*)lVar9;
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507970();
  FUN_015084d0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508610();
  FUN_015085a0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
LAB_00349008:
  FUN_0015edf0();
  FUN_00d50b20();
LAB_00349020:
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  uVar11 = uVar11 + 1;
  local_58 = CONCAT44(local_58._4_4_,uVar11);
  if (*(int *)(lVar1 + 0xc) <= (int)uVar11) goto LAB_00349037;
  goto LAB_003488b9;
}



// ============================================================
// 00234400
// ============================================================
// Function: FUN_00234400
// Address: 00234400
// Size: 1879 bytes
// Class: MUTool
// String references:
//   "MUTool"

void FUN_00234400(void)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t **pplVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar11;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  uint32_t local_94;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  local_a0 = plVar7;
  (**(code **)(*plVar7 + 0x18))();
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar8 = (int64_t)&g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_02572358;
  (*pcVar3)();
  local_a8 = plVar7;
  FUN_01e1f270();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002344d3;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_002344d3:
    local_60 = 0;
    local_68 = (int64_t *)0x0;
    local_80 = plVar7;
    local_58 = plVar7;
    local_50 = -1;
    iStack_4c = 0;
    local_48 = 0;
    while( true ) {
      if (iStack_4c != 0) {
        if (iStack_4c < 1) {
          iStack_4c = -iStack_4c;
        }
        else {
          local_50 = local_50 - iStack_4c;
          FUN_00d23690();
          local_48 = local_48 + iStack_4c;
          iStack_4c = 0;
        }
      }
      lVar9 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)local_58 + 0xc) <= local_50) break;
      local_68 = *(int64_t **)(local_58[2] + 8 + lVar9 * 8);
      local_38 = '\0';
      local_40 = local_68;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      for (iVar6 = 0; iVar5 = FUN_01e26080(), iVar6 < iVar5; iVar6 = iVar6 + 1) {
        FUN_01e26090(extraout_XMM0_Da,iVar6);
        plVar7 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_40 = plVar7;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00274dd0();
    FUN_00d50b20();
    if (plVar8 == (int64_t *)0x0) {
      bVar2 = true;
      bVar1 = true;
      plVar7 = local_a8;
      goto joined_r0x00234b04;
    }
  }
  local_60 = 0;
  local_68 = (int64_t *)0x0;
  local_50 = -1;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar8;
  while( true ) {
    if (iStack_4c != 0) {
      if (iStack_4c < 1) {
        iStack_4c = -iStack_4c;
      }
      else {
        local_50 = local_50 - iStack_4c;
        FUN_00d23690();
        local_48 = local_48 + iStack_4c;
        iStack_4c = 0;
      }
    }
    lVar9 = (int64_t)local_50;
    local_50 = local_50 + 1;
    if (*(int *)((int64_t)local_58 + 0xc) <= local_50) break;
    local_68 = *(int64_t **)(local_58[2] + 8 + lVar9 * 8);
    FUN_01e26150();
    plVar7 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      uVar11 = FUN_01e26150();
      lVar9 = g_026f6e60;
      if (g_026f6e60 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_f8 = lVar9;
      local_f0 = '\x01';
      FUN_000175c0(uVar11,&local_f8);
      plVar7 = local_40;
      if ((g_0272ffd0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026f8f48 = FUN_00d4fe50();
        g_026f8f30 = "MUTool";
        g_026f8f38 = 0x38;
        g_026f8f40 = FUN_00274e70;
        g_026f8f50 = 0;
        ram_00000000026f8f58 = 0;
        g_026f8f60 = 0;
        g_026f8fd8 = 0;
        ram_00000000026f8fe0 = 0;
        g_026f8fe8 = 0;
        g_026f8fea = 1;
        g_026f8f68 = 0;
        ram_00000000026f8f70 = 0;
        g_026f8f78 = 0;
        ram_00000000026f8f80 = 0;
        g_026f8f88 = 0;
        ram_00000000026f8f90 = 0;
        g_026f8f98 = 0;
        ram_00000000026f8fa0 = 0;
        g_026f8fa8 = 0;
        ram_00000000026f8fb0 = 0;
        g_026f8fb8 = 0;
        ram_00000000026f8fc0 = 0;
        g_026f8fc8 = 0;
        ram_00000000026f8fd0 = 0;
        g_026f8ff3 = 0;
        g_026f8feb = 0;
        ___cxa_guard_release();
      }
      pplVar10 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar10 = &local_40;
        if (cVar4 == '\0') {
          pplVar10 = (int64_t **)&g_02802688;
        }
      }
      plVar8 = *pplVar10;
      if (plVar8 == (int64_t *)0x0) {
        uVar11 = (uint32_t)CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
        plVar8 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar10 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar10 + 1) = 0;
        }
        uVar11 = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        local_94 = uVar11;
        FUN_00d4efa0();
        FUN_00c82bb0();
        local_80 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar9 = g_026f6e68;
        if (g_026f6e68 != 0) {
          FUN_00d50b00();
        }
        local_e8 = lVar9;
        local_e0 = '\x01';
        local_d8 = local_80;
        local_d0 = '\0';
        local_c8 = 0;
        local_c0 = '\0';
        FUN_00d31230(&local_c8,&local_d8);
        plVar7 = local_40;
        local_88 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_88 = '\x01';
        local_90 = plVar7;
        FUN_01e260d0();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 == (int64_t *)0x0) {
          local_b8 = 0;
          local_b0 = '\0';
          FUN_01e25f80();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_94 == '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00274dd0();
  bVar2 = false;
  bVar1 = false;
  plVar7 = local_a8;
joined_r0x00234b04:
  local_a8 = plVar7;
  if (plVar7 != (int64_t *)0x0) {
    local_60 = 0;
    local_68 = (int64_t *)0x0;
    iStack_4c = 0;
    local_48 = 0;
    local_58 = plVar7;
    for (lVar9 = 0; local_50 = (int)lVar9, local_50 < *(int *)((int64_t)plVar7 + 0xc);
        lVar9 = lVar9 + 1) {
      local_68 = *(int64_t **)(plVar7[2] + lVar9 * 8);
      FUN_00d50130();
    }
    FUN_00083b20();
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a648b0
// ============================================================
// Function: FUN_01a648b0
// Address: 01a648b0
// Size: 1450 bytes
// Class: MUTool

uint64_t FUN_01a648b0(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *arg1;
  bool bVar8;
  float fVar9;
  float fVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar12;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  int64_t *local_60;
  int local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint local_4c;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  FUN_01a58dc0();
  local_38 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_50 = 1;
    local_38 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_50 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01a64927;
      FUN_00d50b20();
    }
    local_50 = 0;
  }
LAB_01a64927:
  (**(code **)(*local_38 + 0x7b0))();
  local_60 = local_48;
  plVar7 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_54 = 1;
    local_60 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01a64986;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01a64986:
  local_58 = 0;
  FUN_01cf74c0();
  bVar8 = true;
  local_64 = 0;
  local_90 = 0;
  local_88._0_4_ = 0.0;
  local_88._4_4_ = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (*arg1 == 0) {
    local_4c = 0;
LAB_01a64a70:
    do {
      do {
        (**(code **)(*local_38 + 0x658))();
        plVar3 = local_48;
        plVar1 = (int64_t *)*arg1;
        if (plVar1 == local_48) {
          if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_01a64b1c;
            }
            goto LAB_01a64ad3;
          }
LAB_01a64add:
          fVar12 = param_2;
          if (*arg1 != 0) goto LAB_01a64b2f;
LAB_01a64c68:
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a64c7c:
          local_a0 = *arg1;
          local_98 = '\0';
          FUN_0199eb40();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01a64cb8;
        }
        lVar2 = arg1[1];
        if (local_40 != '\0') {
          *arg1 = (int64_t)local_48;
          if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a64ad3:
          *(void*)(arg1 + 1) = 1;
          local_40 = '\0';
          goto LAB_01a64add;
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar3;
        if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a64b1c:
        *(void*)(arg1 + 1) = 1;
        fVar12 = param_2;
        if (*arg1 == 0) goto LAB_01a64c68;
LAB_01a64b2f:
        iVar4 = FUN_01d3a5a0();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar4 == 6) goto LAB_01a64c7c;
        iVar4 = FUN_01d3a5a0();
        if (iVar4 == 5) {
          param_2 = fVar12;
          if (!bVar8) {
            fVar9 = (float)FUN_01e436c0();
            FUN_01d3abf0();
            fVar10 = (float)FUN_01e466c0();
            param_2 = (float)local_88;
            if ((((fVar9 <= (float)local_88) &&
                 (param_2 = fVar9 + fVar12, (float)local_88 <= param_2)) && (fVar9 <= fVar10)) &&
               (fVar10 <= param_2)) {
              param_2 = (float)local_90;
              (**(code **)(*local_38 + 0xc60))(fVar10 - (float)local_88,param_2,local_64);
            }
          }
          FUN_01d3abf0();
          uVar6 = FUN_01e466c0();
          uStack_80 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          bVar8 = false;
          local_88 = uVar6;
          if ((local_4c & 1) == 0) {
            local_90 = (**(code **)(*local_38 + 0x930))((int)uVar6);
            plVar7 = (int64_t *)CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
            local_4c = (uint)plVar7;
            bVar8 = false;
            local_64 = (**(code **)(*local_38 + 0xc00))(local_88._4_4_);
          }
          goto LAB_01a64a70;
        }
        iVar4 = FUN_01d3a5a0();
        bVar8 = false;
        param_2 = fVar12;
      } while (iVar4 != 4);
      iVar4 = FUN_01d3b590();
      bVar8 = false;
      param_2 = fVar12;
    } while (iVar4 == local_58);
    FUN_01cf74c0();
    uVar5 = FUN_01d3b590();
    plVar7 = local_38;
    if ((uVar5 & 8) == 0) {
      local_70 = 0;
      lVar2 = local_38[0x83];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar2;
      uVar11 = (**(code **)(*plVar7 + 0xed8))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      local_b0 = 0;
      local_a8 = '\0';
      (**(code **)(*(int64_t *)plVar7[0x83] + 0x380))(uVar11,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 1) {
      iVar4 = FUN_01d3b630();
      if (iVar4 == 1) {
        if (*arg1 != 0) {
          iVar4 = FUN_01d3b620();
          plVar1 = local_38;
          if (iVar4 == 2) {
            FUN_01a58dc0();
            (**(code **)(*local_48 + 0xcc0))();
            local_88 = CONCAT44(local_88._4_4_,(float)local_88);
            if ((local_40 != '\0') &&
               (local_88 = CONCAT44(local_88._4_4_,(float)local_88), local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a64cc6;
          }
          if (*arg1 != 0) {
            FUN_01d3abf0();
            local_88 = FUN_01e466c0();
            uStack_80 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
            local_90 = (**(code **)(*plVar1 + 0x930))();
            uVar6 = (**(code **)(*local_38 + 0xc00))(local_88._4_4_);
            local_4c = (uint)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            local_64 = extraout_XMM0_Da;
            if (*arg1 == 0) {
              bVar8 = false;
              local_58 = 0;
            }
            else {
              local_58 = FUN_01d3b590();
              bVar8 = false;
            }
            goto LAB_01a64a70;
          }
        }
        local_4c = 0;
        local_58 = 0;
        goto LAB_01a64a70;
      }
    }
LAB_01a64cb8:
    FUN_01cf74c0();
  }
LAB_01a64cc6:
  if ((char)local_54 == '\0' && local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_50 == '\0') {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01a639d0
// ============================================================
// Function: FUN_01a639d0
// Address: 01a639d0
// Size: 1344 bytes
// Class: MUTool

void FUN_01a639d0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  uint uVar8;
  int64_t *plVar9;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  uint64_t uVar13;
  uint64_t in_XMM0_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint64_t uVar18;
  float fVar20;
  float fVar21;
  uint64_t in_XMM1_Qb;
  uint64_t uVar22;
  uint uVar23;
  uint8_t auVar19 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int64_t local_a0;
  char local_98;
  float local_8c;
  float local_88;
  float local_84;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  uint64_t uVar7;
  
  local_c8 = (float)param_1;
  fStack_c4 = (float)((uint64_t)param_1 >> 0x20);
  fStack_c0 = (float)in_XMM0_Qb;
  fStack_bc = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  uVar18 = param_2;
  uVar22 = in_XMM1_Qb;
  uVar13 = (**(code **)(*this_ptr + 0x640))();
  plVar9 = local_48;
  local_a0 = g_027e1c10;
  fVar20 = (float)((uint64_t)uVar18 >> 0x20);
  uVar23 = (uint)((uint64_t)uVar22 >> 0x20);
  if (g_027e1c10 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_98 = '\x01';
  (**(code **)(*plVar9 + 0x3b0))(uVar13,&local_a0);
  local_80 = local_70;
  local_78 = 0;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_78 = '\x01';
  FUN_01d488d0();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  FUN_01a18460();
  local_38 = local_70;
  plVar9 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), plVar9 = local_38, local_68 != '\0')) && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  fVar21 = fVar20;
  local_8c = (float)(**(code **)(*plVar9 + 0xbd0))();
  local_88 = (float)(**(code **)(*plVar9 + 3000))();
  (**(code **)(*this_ptr + 0xb00))();
  (**(code **)(*local_38 + 0x988))();
  plVar9 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_01a63f2e;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (int64_t *)0x0) goto LAB_01a63f2e;
  local_68 = '\0';
  local_70 = (int64_t *)0x0;
  local_60 = plVar9;
  local_50 = 0;
  local_58 = 0;
  if (0 < *(int *)((int64_t)plVar9 + 0xc)) {
    auVar2._8_4_ = fStack_c0;
    auVar2._0_8_ = param_1;
    auVar2._12_4_ = fStack_bc;
    local_d8 = (float)param_2;
    fStack_d4 = (float)((uint64_t)param_2 >> 0x20);
    fStack_d0 = (float)in_XMM1_Qb;
    fStack_cc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
    fVar11 = fStack_d4 + fStack_c4 + g_02390d00;
    auVar14._0_12_ = ZEXT812(0);
    auVar14._12_4_ = 0;
    roundss(auVar14,auVar2,9);
    auVar15._4_4_ = fStack_d4 + fStack_c4;
    auVar15._0_4_ = local_d8 + local_c8;
    auVar15._8_4_ = fStack_d0 + fStack_c0;
    auVar15._12_4_ = fStack_cc + fStack_bc;
    auVar15 = roundss(ZEXT816(0),auVar15,9);
    local_84 = g_023908ec;
    if (auVar15._0_4_ <= g_023908ec) {
      local_84 = auVar15._0_4_;
    }
    uVar7 = 0;
    do {
      local_70 = *(int64_t **)(plVar9[2] + uVar7 * 8);
      pVar6 = (void*)uVar7;
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      plVar3 = local_48;
      if (local_48 != (int64_t *)0x0) {
        if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = *(uint *)((int64_t)plVar3 + 0xc);
        if (0 < (int)uVar8) {
          uVar10 = 0;
          do {
            lVar1 = *(int64_t *)(plVar3[2] + uVar10 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((void*)uVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_0126cd60();
            if (cVar4 == '\0') {
              pvVar5 = _pthread_getspecific((void*)uVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar4 = FUN_01263cf0();
              if (cVar4 == '\0') {
                pvVar5 = _pthread_getspecific((void*)uVar7);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar12 = (float)FUN_0125a2c0();
                if (!NAN(fVar12)) {
                  fVar12 = (fVar20 - (fVar12 - local_8c) * local_88) * (fVar21 / fVar20);
                  auVar16._0_4_ = (uint)fVar12 & g_023945e0;
                  auVar16._4_4_ = (uint)fVar20 & _UNK_023945e4;
                  auVar16._8_4_ = uVar23 & _UNK_023945e8;
                  auVar16._12_4_ = uVar23 & _UNK_023945ec;
                  auVar17._4_12_ = SUB1612(auVar16 | g_023945f0,4);
                  auVar17._0_4_ = SUB164(auVar16 | g_023945f0,0) + fVar12;
                  auVar19._0_12_ = ZEXT812(0);
                  auVar19._12_4_ = 0;
                  auVar15 = roundss(auVar19,auVar17,0xb);
                  fVar12 = auVar15._0_4_ + g_02390d30;
                  if ((fStack_c4 <= fVar12) && (fVar12 <= fVar11)) {
                    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
                  }
                }
              }
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
        }
        FUN_00d50b20();
      }
      uVar8 = pVar6 + 1;
      uVar7 = (uint64_t)uVar8;
      local_58 = CONCAT44(local_58._4_4_,uVar8);
    } while ((int)uVar8 < *(int *)((int64_t)plVar9 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  if (local_38 == (int64_t *)0x0) {
    return;
  }
LAB_01a63f2e:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01a608f0
// ============================================================
// Function: FUN_01a608f0
// Address: 01a608f0
// Size: 1758 bytes
// Class: MUTool

void FUN_01a608f0(void* param_1)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  double *pdVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  double dVar11;
  double dVar12;
  uint64_t uVar13;
  double dVar14;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  int64_t *local_b8;
  char local_b0;
  uint8_t local_78 [16];
  uint32_t local_58;
  uint32_t uStack_54;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  
  local_78._8_8_ = 0;
  local_78._0_8_ = g_023dccdc;
  FUN_01989f80();
  if (local_40 == (int64_t *)0x0) {
    bVar1 = true;
    plVar9 = (int64_t *)0x0;
  }
  else {
    plVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      bVar1 = false;
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff00();
  if (local_40 != (int64_t *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_0125a280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01264170();
    plVar8 = *(int64_t **)(this_ptr + 0x170);
    dVar14 = 0.0;
    if ((plVar8 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x178) != 0)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        plVar8 = *(int64_t **)(this_ptr + 0x170);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
      dVar14 = *pdVar7;
    }
    uVar13 = (**(code **)(*plVar9 + 0x938))(dVar11 + dVar12 * dVar14 * g_023942d0);
    FUN_00d74120();
    lVar6 = g_027e1e80;
    if (g_027e1e80 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d74120();
      lVar2 = g_027bf050;
      if (g_027bf050 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_b8 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar16._8_8_ = extraout_XMM0_Qb;
    auVar16._0_8_ = uVar13;
    local_78 = blendps(local_78,auVar16,1);
    if (cVar4 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01264170();
      local_58 = SUB84(dVar11,0);
      uStack_54 = (uint32_t)((uint64_t)dVar11 >> 0x20);
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01264170();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (dVar14 < dVar11) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_01264170();
        local_58 = (uint32_t)uVar13;
        uStack_54 = (uint32_t)((uint64_t)uVar13 >> 0x20);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_0125a280();
      plVar8 = *(int64_t **)(this_ptr + 0x170);
      dVar11 = 0.0;
      if ((plVar8 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x178) != 0)) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          plVar8 = *(int64_t **)(this_ptr + 0x170);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
        dVar11 = *pdVar7;
      }
      auVar15._0_8_ =
           (**(code **)(*plVar9 + 0x938))
                     (dVar14 + (double)CONCAT44(uStack_54,local_58) * dVar11 * g_023942d0);
      auVar15._8_8_ = extraout_XMM0_Qb_00;
      local_78 = blendps(local_78,auVar15,1);
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a2c0();
    uVar10 = FUN_0198a7d0();
    FUN_00d74120();
    lVar6 = g_027bf050;
    if (g_027bf050 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar16 = insertps(local_78,uVar10,0x10);
    if (cVar3 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a2c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b70();
      auVar17._0_8_ = FUN_0198a7d0();
      auVar17._8_8_ = extraout_XMM0_Qb_01;
      insertps(auVar16,auVar17,0x10);
    }
    FUN_00d50b20();
  }
  if (!bVar1 && plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a5ffc0
// ============================================================
// Function: FUN_01a5ffc0
// Address: 01a5ffc0
// Size: 1758 bytes
// Class: MUTool

void FUN_01a5ffc0(void* param_1)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  double *pdVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  double dVar11;
  double dVar12;
  uint64_t uVar13;
  double dVar14;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  int64_t *local_b8;
  char local_b0;
  uint8_t local_78 [16];
  uint32_t local_58;
  uint32_t uStack_54;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  
  local_78._8_8_ = 0;
  local_78._0_8_ = g_023dccdc;
  FUN_01989f80();
  if (local_40 == (int64_t *)0x0) {
    bVar1 = true;
    plVar9 = (int64_t *)0x0;
  }
  else {
    plVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      bVar1 = false;
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff70();
  if (local_40 != (int64_t *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01259520();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01264170();
    plVar8 = *(int64_t **)(this_ptr + 0x170);
    dVar14 = 0.0;
    if ((plVar8 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x178) != 0)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        plVar8 = *(int64_t **)(this_ptr + 0x170);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
      dVar14 = *pdVar7;
    }
    uVar13 = (**(code **)(*plVar9 + 0x938))(dVar11 + dVar12 * dVar14 * g_02394dd0);
    FUN_00d74120();
    lVar6 = g_027e1e80;
    if (g_027e1e80 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d74120();
      lVar2 = g_027bf050;
      if (g_027bf050 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_b8 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar16._8_8_ = extraout_XMM0_Qb;
    auVar16._0_8_ = uVar13;
    local_78 = blendps(local_78,auVar16,1);
    if (cVar4 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01264170();
      local_58 = SUB84(dVar11,0);
      uStack_54 = (uint32_t)((uint64_t)dVar11 >> 0x20);
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01264170();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (dVar14 < dVar11) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_01264170();
        local_58 = (uint32_t)uVar13;
        uStack_54 = (uint32_t)((uint64_t)uVar13 >> 0x20);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01259520();
      plVar8 = *(int64_t **)(this_ptr + 0x170);
      dVar11 = 0.0;
      if ((plVar8 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x178) != 0)) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          plVar8 = *(int64_t **)(this_ptr + 0x170);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
        dVar11 = *pdVar7;
      }
      auVar15._0_8_ =
           (**(code **)(*plVar9 + 0x938))
                     (dVar14 + (double)CONCAT44(uStack_54,local_58) * dVar11 * g_02394dd0);
      auVar15._8_8_ = extraout_XMM0_Qb_00;
      local_78 = blendps(local_78,auVar15,1);
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a2c0();
    uVar10 = FUN_0198a7d0();
    FUN_00d74120();
    lVar6 = g_027bf050;
    if (g_027bf050 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar16 = insertps(local_78,uVar10,0x10);
    if (cVar3 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a2c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b70();
      auVar17._0_8_ = FUN_0198a7d0();
      auVar17._8_8_ = extraout_XMM0_Qb_01;
      insertps(auVar16,auVar17,0x10);
    }
    FUN_00d50b20();
  }
  if (!bVar1 && plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00235240
// ============================================================
// Function: FUN_00235240
// Address: 00235240
// Size: 1113 bytes
// Class: MUTool

void FUN_00235240(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_002353ce:
    if (*(int64_t **)(this_ptr + 0xc0) == (int64_t *)0x0) {
      return;
    }
    cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x398))();
    local_70 = param_1;
    if (g_02805cda != cVar3) {
LAB_002353f7:
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_48 + 0x450))();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        plVar1 = *(int64_t **)(this_ptr + 0x90);
        (**(code **)(&UNK_00001550 + *plVar1))();
        plVar6 = local_48;
        local_38[0] = local_40[0];
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = local_38;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 == (int64_t *)0x0) {
          plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_00235487:
          FUN_00d50b00();
        }
        else if (local_38[0] == '\0') goto LAB_00235487;
        (**(code **)(*plVar6 + 0x970))();
        FUN_01d982e0();
        lVar2 = CONCAT71(uStack_57,local_58);
        if ((local_50 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x90);
          (**(code **)(&UNK_00001550 + *plVar1))();
          plVar6 = local_48;
          pcVar5 = local_40;
          if (local_40[0] == '\0') {
            pcVar5 = local_38;
          }
          local_38[0] = local_40[0];
          *pcVar5 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 == (int64_t *)0x0) {
            plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_0023554b:
            FUN_00d50b00();
          }
          else if (local_38[0] == '\0') goto LAB_0023554b;
          (**(code **)(*plVar6 + 0x970))();
          FUN_01d982e0();
          (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x620))();
          if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar1 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) goto LAB_002353ce;
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(int64_t *)CONCAT71(uStack_57,local_58) + 0x20))();
    plVar1 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) {
      return;
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(int64_t *)CONCAT71(uStack_57,local_58) + 0x20))();
    cVar3 = (**(code **)(*local_48 + 0x50))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(int64_t *)CONCAT71(uStack_57,local_58) + 0x20))();
    local_70 = (**(code **)(*local_48 + 0x68))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (g_02805cda != cVar3) goto LAB_002353f7;
  }
  if (((cVar3 != '\0') && (g_02805cda != cVar3)) && (*(char *)(this_ptr + 0x150) != '\0')) {
    *(void*)(this_ptr + 0x150) = 0;
    FUN_0021e5f0();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar5 = &local_58;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_58 = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
  }
  else {
    plVar6 = local_48;
    if (local_58 != '\0') goto LAB_0023563b;
  }
  FUN_00d50b00();
LAB_0023563b:
  (**(code **)(*plVar6 + 0xf00))(local_70);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x98) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x928))(local_70);
  }
  if (cVar3 != '\0') {
    FUN_0021eea0(0);
  }
  g_02805cda = cVar3;
  return;
}



// ============================================================
// 01a5f2f0
// ============================================================
// Function: FUN_01a5f2f0
// Address: 01a5f2f0
// Size: 1878 bytes
// Class: MUTool

void FUN_01a5f2f0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar6;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x170) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)(this_ptr + 0x168);
    local_98 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
    FUN_00d50b00();
    local_98 = '\x01';
    local_a0 = plVar1;
    FUN_00e8b9a0();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    lVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_88 = '\x01';
      local_90 = plVar1;
      FUN_00e8b9a0();
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        (**(code **)(*local_90 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    lVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = plVar1;
      FUN_00e8b9a0();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) goto LAB_01a5f6fd;
    }
    local_68 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = plVar1;
    FUN_00cbb340();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
  }
LAB_01a5f6fd:
  lVar2 = *arg1;
  lVar3 = *(int64_t *)(this_ptr + 0x170);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x170) = lVar2;
    bVar6 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar6) {
      FUN_00d50b20();
      lVar3 = *(int64_t *)(this_ptr + 0x170);
    }
  }
  if (lVar3 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)(this_ptr + 0x168);
    local_58 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
    FUN_00d50b00();
    local_58 = '\x01';
    local_e0 = 0;
    local_d8 = '\0';
    pVar5 = 0x20;
    local_60 = plVar1;
    FUN_00e8b850(0x20,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_48 = '\x01';
    local_d0 = 0;
    local_c8 = '\0';
    pVar5 = 0x20;
    local_50 = plVar1;
    FUN_00e8b850(0x20,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    local_b0 = plVar1;
    FUN_00e8b850(0x20,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00346c20
// ============================================================
// Function: FUN_00346c20
// Address: 00346c20
// Size: 1230 bytes
// Class: MUTool

uint FUN_00346c20(void* param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t **pplVar9;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  (**(code **)(*this_ptr + 0xe10))();
  plVar8 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      return 0;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) {
    return 0;
  }
  if (*(int *)((int64_t)plVar8 + 0xc) < 1) {
LAB_00346d02:
    uVar4 = 0;
    goto LAB_003470ed;
  }
  (**(code **)(&UNK_00001668 + *this_ptr))();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_00346d02;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_00346d02;
  local_68 = plVar1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_01326de0();
  if (iVar3 == 4) {
LAB_00346d9b:
    local_60 = plVar8;
    pplVar9 = &local_58;
    (**(code **)(*this_ptr + 0xd48))();
    plVar8 = local_58;
    FUN_00083c20();
    if (plVar8 == (int64_t *)0x0) {
LAB_00346dde:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00346dde;
    }
    plVar8 = local_60;
    local_70 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == (int64_t *)0x0) goto LAB_00346e6f;
    local_58 = (int64_t *)FUN_01a90540();
    local_80 = CONCAT44(local_80._4_4_,4);
    FUN_00e7c2a0();
    plVar1 = local_58;
    local_58 = (int64_t *)((uint64_t)local_58 & 0xffffffff00000000);
    if ((uint64_t)plVar1 >> 0x20 == 0) {
      uVar4 = 0;
LAB_00346e97:
      if (param_2 != '\0') {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*g_02572370)();
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar8;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar3 = -local_40._4_4_;
            }
            else {
              iVar3 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar3);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar3 = 0;
            }
            local_40 = CONCAT44(iVar3,(int)local_40);
          }
          lVar7 = (int64_t)(int)local_40;
          iVar3 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar3);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar3) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar7 * 8);
          pvVar5 = _pthread_getspecific((void*)local_48[2]);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          lVar7 = local_90;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_80 = lVar7;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        plVar8 = local_48;
        FUN_001159b0();
        pvVar5 = _pthread_getspecific((void*)plVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a0 = 0;
        local_98 = '\0';
        FUN_01385600(&local_a0,plVar1);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (puVar6 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar4 = FUN_00e7c650();
      uVar4 = uVar4 ^ 1;
      if ((char)uVar4 == '\0') goto LAB_00346e97;
    }
    FUN_00d50b20();
    uVar4 = uVar4 ^ 1;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if (iVar3 == 2) goto LAB_00346d9b;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if (iVar3 == 1) goto LAB_00346d9b;
LAB_00346e6f:
    uVar4 = 0;
  }
  FUN_00d50b20();
LAB_003470ed:
  FUN_00d50b20();
  return uVar4;
}



// ============================================================
// 01a61e30
// ============================================================
// Function: FUN_01a61e30
// Address: 01a61e30
// Size: 1147 bytes
// Class: MUTool

void FUN_01a61e30(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  uint64_t uVar4;
  void* pVar5;
  char *pcVar6;
  uint32_t uVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  byte bVar9;
  char cVar10;
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
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  lVar8 = local_58;
  pVar5 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_50[0]);
  pcVar6 = local_38;
  if (local_50[0] != '\0') {
    pcVar6 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_60 = FUN_00e8b990();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) goto LAB_01a62243;
  FUN_0006e1c0();
  local_68 = FUN_00e86210();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_027e3ba0;
  if (g_027e3ba0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  lVar2 = local_58;
  if (local_58 == 0) {
    bVar9 = 1;
    local_3c = 0;
  }
  else {
    if (local_50[0] == '\0') {
      uVar4 = FUN_00d50b00();
      local_3c = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      bVar9 = 0;
      if ((local_50[0] == '\0') || (bVar9 = 0, local_58 == 0)) goto LAB_01a61f96;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_50[0] = '\0';
    }
    local_3c = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    bVar9 = 0;
  }
LAB_01a61f96:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)(this_ptr + 0x1f8);
  local_80 = 0;
  local_48 = lVar2;
  (**(code **)(*(int64_t *)(this_ptr + 0x1f8) + 0x10))();
  FUN_00d50b00();
  local_80 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_d8 = lVar2;
  local_d0 = '\0';
  local_88 = plVar1;
  FUN_00cbadd0(&local_d8,&local_e8);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    (**(code **)(*local_88 + 0x10))();
    FUN_00d50b20();
  }
  lVar8 = g_026d83e0;
  if (g_026d83e0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar8;
  local_c0 = '\x01';
  FUN_00c841b0();
  lVar8 = local_48;
  lVar2 = local_58;
  if (local_48 == local_58) {
    uVar7 = local_3c;
    if ((bool)(bVar9 & local_48 != 0)) {
      if (local_50[0] != '\0') goto LAB_01a620e4;
      FUN_00d50b00();
      uVar7 = 1;
    }
LAB_01a62138:
    cVar10 = (char)uVar7;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      lVar8 = lVar2;
      uVar7 = 1;
      if (((byte)local_3c & local_48 != 0) == 1) {
        local_48 = lVar2;
        FUN_00d50b20();
      }
      goto LAB_01a62138;
    }
    lVar8 = local_58;
    if (((byte)local_3c & local_48 != 0) == 1) {
      local_48 = local_58;
      FUN_00d50b20();
    }
LAB_01a620e4:
    local_50[0] = '\0';
    cVar10 = '\x01';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_70 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_a0 = '\0';
  local_a8 = lVar8;
  local_78 = plVar1;
  FUN_00cbadd0(&local_a8,&local_b8);
  lVar2 = local_68;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    (**(code **)(*local_78 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar10 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01a62243:
  local_98 = *arg1;
  local_90 = '\0';
  FUN_01a18830();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00347340
// ============================================================
// Function: FUN_00347340
// Address: 00347340
// Size: 1208 bytes
// Class: MUTool
// String references:
//   "MUTool"

void FUN_00347340(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_110;
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
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_d0 = this_ptr[0xa7];
  local_c0 = *param_2;
  if (local_d0 == local_c0) {
    return;
  }
  if (local_d0 != *arg1) {
    return;
  }
  local_c8 = '\0';
  local_b8 = '\0';
  FUN_01950bb0(local_d0,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_019f0ee0();
  FUN_01e1f270();
  FUN_00d23310();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_01e26150();
  local_b0 = g_026f6e60;
  if (g_026f6e60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a8 = '\x01';
  pplVar6 = &local_110;
  uVar7 = FUN_000175c0(uVar7,&local_b0);
  plVar4 = local_110;
  if ((g_0272ffd0 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar3 != 0)) {
    g_026f8f48 = FUN_00d4fe50();
    g_026f8f30 = "MUTool";
    g_026f8f38 = 0x38;
    g_026f8f40 = FUN_00274e70;
    g_026f8f50 = 0;
    ram_00000000026f8f58 = 0;
    g_026f8f60 = 0;
    g_026f8fd8 = 0;
    ram_00000000026f8fe0 = 0;
    g_026f8fe8 = 0;
    g_026f8fea = 1;
    g_026f8f68 = 0;
    ram_00000000026f8f70 = 0;
    g_026f8f78 = 0;
    ram_00000000026f8f80 = 0;
    g_026f8f88 = 0;
    ram_00000000026f8f90 = 0;
    g_026f8f98 = 0;
    ram_00000000026f8fa0 = 0;
    g_026f8fa8 = 0;
    ram_00000000026f8fb0 = 0;
    g_026f8fb8 = 0;
    ram_00000000026f8fc0 = 0;
    g_026f8fc8 = 0;
    ram_00000000026f8fd0 = 0;
    g_026f8ff3 = 0;
    g_026f8feb = 0;
    uVar7 = ___cxa_guard_release();
  }
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar2 != '\0') goto LAB_003474cf;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_003474cf:
  plVar4 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar4 != (int64_t *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  (**(code **)(*this_ptr + 0xec8))(uVar7,0);
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  uVar7 = (**(code **)(*plVar4 + 0x18))();
  lVar1 = g_026f6de8;
  local_a0 = *param_2;
  local_98 = '\0';
  if (g_026f6de8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40[0] = '\0';
  FUN_00ca0840(uVar7,&local_48);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_90 = g_026f6d80;
  if (g_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00d50b00();
  local_78 = '\0';
  local_80 = plVar4;
  FUN_00d40470(&local_80,&stack0xffffffffffffff90,3,3);
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01a62610
// ============================================================
// Function: FUN_01a62610
// Address: 01a62610
// Size: 1104 bytes
// Class: MUTool

void FUN_01a62610(uint64_t param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  uint64_t uVar4;
  void* pVar5;
  char *pcVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
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
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48 [12];
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_01a18a00();
  FUN_00d23310();
  lVar1 = local_50;
  pVar5 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_48[0]);
  pcVar6 = local_38;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    return;
  }
  local_58 = lVar3;
  FUN_0006e1c0();
  local_60 = FUN_00e86210();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027e3ba0;
  if (g_027e3ba0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  lVar3 = local_50;
  if (local_50 == 0) {
    bVar8 = 1;
    local_3c = 0;
  }
  else {
    if (local_48[0] == '\0') {
      uVar4 = FUN_00d50b00();
      local_3c = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      bVar8 = 0;
      if ((local_48[0] == '\0') || (bVar8 = 0, local_50 == 0)) goto LAB_01a627a7;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_48[0] = '\0';
    }
    local_3c = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    bVar8 = 0;
  }
LAB_01a627a7:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_78 = 0;
  plVar7 = (int64_t *)(this_ptr + 0x1f8);
  (**(code **)(*(int64_t *)(this_ptr + 0x1f8) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  local_c0 = lVar3;
  local_b8 = '\0';
  local_80 = plVar7;
  FUN_00cbad30(&local_c0,&local_d0,0xa0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  lVar1 = g_026d83e0;
  if (g_026d83e0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  FUN_00c841b0();
  lVar1 = local_50;
  bVar9 = (byte)local_3c;
  if (lVar3 == local_50) {
    if ((bool)(bVar8 & lVar3 != 0)) {
      if (local_48[0] != '\0') goto LAB_01a628fd;
      bVar9 = 1;
      FUN_00d50b00();
    }
  }
  else {
    if (local_48[0] != '\0') {
      bVar10 = lVar3 != 0;
      lVar3 = local_50;
      if ((bVar9 & bVar10) == 1) {
        FUN_00d50b20();
      }
LAB_01a628fd:
      local_48[0] = '\0';
      bVar9 = 1;
      goto LAB_01a62964;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    bVar10 = lVar3 != 0;
    bVar9 = 1;
    lVar3 = lVar1;
    if (((byte)local_3c & bVar10) == 1) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_01a62964:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar7 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  local_88 = '\0';
  local_90 = lVar3;
  local_70 = plVar7;
  FUN_00cbad30(&local_90,&local_a0,0xa0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  if ((bVar9 != 0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00236500
// ============================================================
// Function: FUN_00236500
// Address: 00236500
// Size: 844 bytes
// Class: MUTool

uint64_t FUN_00236500(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    local_58 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_00236580:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_00236580;
    (**(code **)(&UNK_00001570 + *plVar4))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    local_58 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_0023660a:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023660a;
    (**(code **)(&UNK_00001578 + *plVar4))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar2 = g_026f6df8;
    if (g_026f6df8 != 0) {
      FUN_00d50b00();
    }
    FUN_00236990();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    local_58 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_002366c0:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_002366c0;
    (**(code **)(*plVar4 + 0x620))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_0023673b:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023673b;
    (**(code **)(*plVar4 + 0xa48))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    plVar4 = *(int64_t **)(this_ptr + 0x90);
  }
  else {
    plVar4 = local_48;
    if (local_38[0] != '\0') goto LAB_002367fe;
  }
  FUN_00d50b00();
LAB_002367fe:
  (**(code **)(&UNK_00001570 + *plVar4))();
  FUN_01d66ab0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01a65cf0
// ============================================================
// Function: FUN_01a65cf0
// Address: 01a65cf0
// Size: 1221 bytes
// Class: MUTool

void FUN_01a65cf0(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  char cVar3;
  int64_t *this_ptr;
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
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_01b68670();
  *(void*)(this_ptr + 0x36) = 0;
  FUN_00d6f370();
  lVar1 = g_027e2650;
  if (g_027e2650 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d70f90();
  *(void*)(this_ptr + 0x40) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  lVar1 = g_027e2658;
  if (g_027e2658 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d70f90();
  *(void*)((int64_t)this_ptr + 0x201) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = g_027e3bc0;
  if (g_027e3bc0 != 0) {
    FUN_00d50b00();
  }
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
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = g_027e2660;
  if (g_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_00d6f370();
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
  FUN_00d41430(&local_40,&local_b0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_a0 = g_027e1360;
  if (g_027e1360 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  cVar3 = FUN_00d70700();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d6f370();
    local_90 = g_027e1360;
    if (g_027e1360 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    cVar3 = FUN_00d70f90();
    if (*(char *)((int64_t)this_ptr + 0x202) != cVar3) {
      *(char *)((int64_t)this_ptr + 0x202) = cVar3;
      (**(code **)(*this_ptr + 0x620))();
      if (this_ptr[0x37] != 0) {
        this_ptr[0x37] = 0;
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01a59d50
// ============================================================
// Function: FUN_01a59d50
// Address: 01a59d50
// Size: 781 bytes
// Class: MUTool

void* FUN_01a59d50(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  void *pvVar6;
  char *pcVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = local_48;
  FUN_00d23340();
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (local_48 == (int64_t *)0x0) {
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    (**(code **)(*local_48 + 0x9b8))(param_1,param_2);
    if (local_48 == (int64_t *)0x0) {
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)((int64_t)local_48 + 0xc) < 1) {
        bVar1 = false;
        plVar10 = (int64_t *)0x0;
      }
      else {
        lVar8 = 0;
        bVar1 = false;
        plVar9 = (int64_t *)0x0;
        do {
          pvVar6 = _pthread_getspecific((void*)plVar3);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if (local_48 == plVar9) {
            plVar10 = plVar9;
            bVar2 = bVar1;
            if ((bVar1) || (local_48 == (int64_t *)0x0)) goto joined_r0x01a59f59;
            bVar2 = true;
            if (local_40[0] == '\0') {
              FUN_00d50b00();
              goto LAB_01a59f45;
            }
          }
          else {
            plVar10 = local_48;
            if (local_40[0] == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar9 = local_48;
LAB_01a59f45:
                plVar10 = plVar9;
                bVar2 = true;
              }
joined_r0x01a59f59:
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar2 = true;
              if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          bVar1 = bVar2;
          if ((plVar10 != (int64_t *)0x0) &&
             (cVar4 = (**(code **)(*arg1 + 0x430))(), cVar4 != '\0')) {
            local_40[0] = '\0';
            FUN_00d21140();
            local_48 = plVar10;
            if ((local_40[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar10;
        } while (lVar8 < *(int *)((int64_t)plVar3 + 0xc));
      }
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      if ((bVar1) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01a675b0
// ============================================================
// Function: FUN_01a675b0
// Address: 01a675b0
// Size: 812 bytes
// Class: MUTool

void FUN_01a675b0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  uint64_t uVar6;
  char *pcVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if (*(int64_t *)(arg1 + 0x1f8) == 0) {
    bVar1 = false;
    lVar8 = 0;
  }
  else if (param_1 >> 0x20 == 0) {
    pvVar4 = _pthread_getspecific((void*)param_1);
    pVar5 = (void*)param_1;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01252670(0,1,0,0);
    lVar8 = local_58;
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (bVar1 = bVar2, local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = param_1;
    pvVar4 = _pthread_getspecific((void*)param_1);
    pVar5 = (void*)uVar6;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_1,0,0,0);
    lVar8 = local_58;
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (bVar1 = bVar2, local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0171b9c0();
  local_78 = *param_2;
  local_70 = '\0';
  local_60 = '\0';
  local_68 = lVar8;
  FUN_0171c6b0(&local_68,&local_78);
  lVar3 = local_58;
  *(void*)(this_ptr + 1) = 0;
  if (local_50[0] == '\0') {
    if (local_58 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    local_50[0] = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00347e50
// ============================================================
// Function: FUN_00347e50
// Address: 00347e50
// Size: 949 bytes
// Class: MUTool

void FUN_00347e50(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  char cVar2;
  void* pVar3;
  void *pvVar4;
  void*this_ptr;
  int64_t *plVar5;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  plVar5 = local_40;
  if (*param_2 == 0) {
    FUN_012ca6e0(param_1,0);
    pVar3 = (void*)param_1;
    if (local_40 != (int64_t *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00347f30;
    }
  }
  else {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar3 = FUN_012e57e0();
    FUN_012c9e50(pVar3,0);
    if (local_40 != (int64_t *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00347f30;
    }
  }
  bVar1 = false;
  plVar5 = (int64_t *)0x0;
LAB_00347f30:
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012cb3e0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    FUN_012e89e0();
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 002358e0
// ============================================================
// Function: FUN_002358e0
// Address: 002358e0
// Size: 694 bytes
// Class: MUTool

void FUN_002358e0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_38;
  char local_30;
  
  *(int64_t *)(this_ptr + 0xd8) = *arg1;
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00235db0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_019f0f30();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00236020();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar2 = *(int64_t **)(lVar1 + 0x408);
    if (plVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == (int64_t *)0x0) {
          *(void*)(lVar1 + 0x408) = 0;
        }
        else {
          FUN_00d50b00();
          plVar2 = *(int64_t **)(lVar1 + 0x408);
          *(int64_t **)(lVar1 + 0x408) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(int64_t **)(lVar1 + 0x408) = local_38;
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(this_ptr + 0x90);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x968))(0);
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_019f0ee0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00234400();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (*arg1 != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_38 + 0x450))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        lVar1 = *(int64_t *)(this_ptr + 0x90);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01e42250();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}



// ============================================================
// 01a5cd20
// ============================================================
// Function: FUN_01a5cd20
// Address: 01a5cd20
// Size: 562 bytes
// Class: MUTool
// String references:
//   "MUTool"

void FUN_01a5cd20(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar4;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  uVar5 = FUN_01e26150();
  local_60 = g_026f6e60;
  if (g_026f6e60 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_58 = '\x01';
  pplVar4 = &local_80;
  uVar5 = FUN_000175c0(uVar5,&local_60);
  plVar1 = local_80;
  if ((g_0272ffd0 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar5 = extraout_XMM0_Da_00, iVar3 != 0)) {
    g_026f8f48 = FUN_00d4fe50();
    g_026f8f30 = "MUTool";
    g_026f8f38 = 0x38;
    g_026f8f40 = FUN_00274e70;
    g_026f8f50 = 0;
    ram_00000000026f8f58 = 0;
    g_026f8f60 = 0;
    g_026f8fd8 = 0;
    ram_00000000026f8fe0 = 0;
    g_026f8fe8 = 0;
    g_026f8fea = 1;
    g_026f8f68 = 0;
    ram_00000000026f8f70 = 0;
    g_026f8f78 = 0;
    ram_00000000026f8f80 = 0;
    g_026f8f88 = 0;
    ram_00000000026f8f90 = 0;
    g_026f8f98 = 0;
    ram_00000000026f8fa0 = 0;
    g_026f8fa8 = 0;
    ram_00000000026f8fb0 = 0;
    g_026f8fb8 = 0;
    ram_00000000026f8fc0 = 0;
    g_026f8fc8 = 0;
    ram_00000000026f8fd0 = 0;
    g_026f8ff3 = 0;
    g_026f8feb = 0;
    uVar5 = ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar5 = extraout_XMM0_Da;
    if (cVar2 != '\0') goto LAB_01a5cdb4;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_01a5cdb4:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (this_ptr != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_50 = *arg1;
    local_48 = '\0';
    (**(code **)(*plVar1 + 0x480))(uVar5,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a5c3e0
// ============================================================
// Function: FUN_01a5c3e0
// Address: 01a5c3e0
// Size: 545 bytes
// Class: MUTool

void FUN_01a5c3e0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  void*this_ptr;
  int64_t lVar5;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_01e1f170();
  if (iVar3 == -1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    iVar3 = FUN_01e1f180();
    if (iVar3 == -1) {
      uVar4 = FUN_01e1f170();
      FUN_01e1f230(param_1,uVar4);
      lVar5 = local_40;
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      uVar4 = FUN_01e1f170();
      FUN_01e1f230(param_1,uVar4);
      uVar4 = FUN_01e1f180();
      FUN_01e26090(param_1,uVar4);
      lVar5 = local_40;
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e26150();
    local_60 = g_026f6e60;
    if (g_026f6e60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_000175c0(param_1,&local_60);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((bVar1) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01a66610
// ============================================================
// Function: FUN_01a66610
// Address: 01a66610
// Size: 696 bytes
// Class: MUTool

void FUN_01a66610(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  lVar1 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_38 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 == '\0') && (cVar2 = FUN_0171c180(), cVar2 == '\0')) {
    FUN_00d3ecc0();
    lVar1 = g_027e3bc0;
    if (g_027e3bc0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_38 + 0x50))();
    if (cVar2 == '\0') {
      bVar3 = false;
    }
    else {
      FUN_00d3ecf0();
      (**(code **)(*local_98 + 0x7b8))();
      (**(code **)(*this_ptr + 0x7b8))();
      bVar3 = local_a8 == local_b8;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      FUN_00d6f370();
      lVar1 = g_027e1360;
      if (g_027e1360 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d70f90(param_1,0);
      if (*(char *)((int64_t)this_ptr + 0x202) != cVar2) {
        *(char *)((int64_t)this_ptr + 0x202) = cVar2;
        (**(code **)(*this_ptr + 0x620))();
        if (this_ptr[0x37] != 0) {
          this_ptr[0x37] = 0;
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*this_ptr + 0x620))();
    if (this_ptr[0x37] != 0) {
      this_ptr[0x37] = 0;
      FUN_00d50b20();
    }
  }
  FUN_01b68a30();
  return;
}



// ============================================================
// 01a67240
// ============================================================
// Function: FUN_01a67240
// Address: 01a67240
// Size: 557 bytes
// Class: MUTool

void FUN_01a67240(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  uint64_t uVar4;
  char *pcVar5;
  int64_t arg1;
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
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(arg1 + 0x202) != '\0') {
    uVar4 = param_1;
    pvVar2 = _pthread_getspecific((void*)param_1);
    pVar3 = (void*)uVar4;
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_1,0,0,0);
    lVar1 = local_48;
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (lVar1 != 0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_0171b9c0();
      local_88 = *param_2;
      local_80 = '\0';
      local_78 = lVar1;
      local_70 = '\0';
      FUN_01720f20(&local_78,&local_88);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  }
  FUN_0171b9c0();
  local_68 = *param_2;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_01721000(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a597e0
// ============================================================
// Function: FUN_01a597e0
// Address: 01a597e0
// Size: 507 bytes
// Class: MUTool

void FUN_01a597e0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  local_38 = *arg1;
  local_30 = '\0';
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*this_ptr + 0x428))();
  if (cVar1 != '\0') {
    *(void*)(this_ptr + 6) = 1;
    (**(code **)(*(int64_t *)*arg1 + 0xa00))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_50 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_50 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    local_58 = this_ptr + 2;
    FUN_0006e1c0();
    FUN_00e86210();
    local_78 = g_027e1390;
    if (g_027e1390 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00c841b0();
    local_48 = local_68;
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_40 = '\x01';
    FUN_00cbad30(&local_48,&local_88,0x20);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      (**(code **)(*local_58 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x458))();
  return;
}



// ============================================================
// 01a5dca0
// ============================================================
// Function: FUN_01a5dca0
// Address: 01a5dca0
// Size: 505 bytes
// Class: MUTool

void FUN_01a5dca0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b2be8 == 0) || (g_028b2bf1 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e2288;
    if (g_028b2be8 == 0) {
      if (g_027e2288 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b2be8;
      if (g_028b2be8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b2be8 != 0;
        g_028b2be8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b2bf0 == '\0')) {
        g_028b2bf0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b2bf1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b2bf1 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b2be8 == 0) {
      lVar3 = 0;
      goto LAB_01a5de59;
    }
  }
  lVar3 = g_028b2be8;
  FUN_00d50b00();
LAB_01a5de59:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a64570
// ============================================================
// Function: FUN_01a64570
// Address: 01a64570
// Size: 505 bytes
// Class: MUTool

void FUN_01a64570(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b2bf8 == 0) || (g_028b2c01 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027ebc08;
    if (g_028b2bf8 == 0) {
      if (g_027ebc08 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b2bf8;
      if (g_028b2bf8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b2bf8 != 0;
        g_028b2bf8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b2c00 == '\0')) {
        g_028b2c00 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b2c01 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b2c01 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b2bf8 == 0) {
      lVar3 = 0;
      goto LAB_01a64729;
    }
  }
  lVar3 = g_028b2bf8;
  FUN_00d50b00();
LAB_01a64729:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a5d400
// ============================================================
// Function: FUN_01a5d400
// Address: 01a5d400
// Size: 561 bytes
// Class: MUTool
// String references:
//   "%@7"

void FUN_01a5d400(void)

{
  char *pcVar1;
  int64_t local_b8;
  char local_b0 [8];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_01d70da0();
  FUN_01d701d0();
  local_88 = g_027e2260;
  if (g_027e2260 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01d64eb0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d70010();
  FUN_017281b0();
  FUN_00d23310();
  pcVar1 = local_38;
  if (local_b0[0] != '\0') {
    pcVar1 = local_b0;
  }
  local_38[0] = local_b0[0];
  *pcVar1 = '\0';
  if ((local_b0[0] != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 1;
  local_68 = &g_024c5048;
  local_50 = 0;
  if (local_b8 != 0) {
    FUN_00d50b00();
  }
  local_58 = local_b8;
  local_50 = '\x01';
  FUN_00d8cb40();
  local_48 = local_78;
  local_40 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_40 = '\x01';
  FUN_01d64eb0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d6ed40();
  FUN_01d6ed40();
  return;
}



// ============================================================
// 01a66aa0
// ============================================================
// Function: FUN_01a66aa0
// Address: 01a66aa0
// Size: 592 bytes
// Class: MUTool

void FUN_01a66aa0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar4;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x1f8) == 0) || (*arg1 != *(int64_t *)(this_ptr + 0x1f8))) {
    FUN_01788770();
    FUN_017879e0();
    lVar1 = *arg1;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e2670;
    if (lVar1 == local_50) {
      if (g_027e2670 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      uVar4 = FUN_01e1ea80(g_02391030,&stack0xffffffffffffffa0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      if (this_ptr != 0) {
        uVar4 = FUN_00d50b20();
      }
      if (lVar2 != 0) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_01a66e80();
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar4 = FUN_01b6d800();
    if (local_40 != 0) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
  }
  local_70 = *param_2;
  local_68 = '\0';
  FUN_01b68d40(uVar4,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a61310
// ============================================================
// Function: FUN_01a61310
// Address: 01a61310
// Size: 602 bytes
// Class: MUTool

void FUN_01a61310(void)

{
  void*arg1;
  uint32_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar5;
  uint32_t uVar6;
  float fVar7;
  int64_t local_38;
  char local_30;
  
  FUN_01cfcdc0(g_02390124,g_0239011c,g_02394288,g_0239011c);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_023908d8);
  uVar1 = FUN_01a5ffc0();
  uVar2 = FUN_01a608f0();
  uVar3 = FUN_01e437f0(uVar1);
  uVar6 = (uint32_t)((uint64_t)uVar3 >> 0x20);
  uVar4 = FUN_01e437f0(uVar2);
  fVar7 = (float)uVar4;
  fVar5 = (fVar7 - (float)uVar3) * g_02390118 + fVar7;
  uVar1 = extraout_XMM0_Dd;
  uVar2 = extraout_XMM0_Dc;
  (**(code **)(*(int64_t *)*arg1 + 0x4e0))();
  (**(code **)(*(int64_t *)*arg1 + 0x4f8))
            (fVar5,uVar6,fVar5,(int)((uint64_t)uVar4 >> 0x20),uVar6,uVar1,fVar7,uVar2);
  (**(code **)(*(int64_t *)*arg1 + 0x520))();
  FUN_01cfbee0(g_02390124,g_02390124,0);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  (**(code **)(*(int64_t *)*arg1 + 0x520))();
  return;
}



// ============================================================
// 01a65460
// ============================================================
// Function: FUN_01a65460
// Address: 01a65460
// Size: 2139 bytes
// Class: MUTool
// String references:
//   "handleAnalyzeChords"
//   "handleMoveUp"
//   "handleMoveDown"
//   "handleMoveUpFine"
//   "handleMoveDownFine"
//   "handleSelectUp"
//   "handleSelectDown"
//   "handleSetAlternateChord"
//   "handleToggleDetectsSlashChords"
//   "handleToggleDetectsChordExtensions"
//   "handleToggleLessThirds"
//   "handleToggleAutoanalyzesSplitsAndJoins"
//   "handleTogglePreviewsChords"
//   "handleShowChordAnalyzerParameterSetEditor"

void FUN_01a65460(void)

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
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
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

