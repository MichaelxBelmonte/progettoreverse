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


void FUN_01721000(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined7 uVar16;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar17;
  longlong *plVar18;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined8 *local_490;
  undefined1 local_488;
  undefined8 *local_480;
  undefined1 local_478;
  undefined8 *local_470;
  undefined1 local_468;
  undefined8 *local_460;
  undefined1 local_458;
  undefined8 *local_450;
  undefined1 local_448;
  undefined8 *local_440;
  undefined1 local_438;
  longlong *local_430;
  undefined1 local_428;
  undefined8 *local_420;
  undefined1 local_418;
  undefined8 *local_410;
  undefined1 local_408;
  undefined1 local_400 [8];
  undefined1 local_3f8;
  undefined8 *local_3f0;
  undefined1 local_3e8;
  undefined8 *local_3e0;
  undefined1 local_3d8;
  undefined1 local_3d0 [8];
  undefined1 local_3c8;
  longlong local_3c0;
  undefined8 *local_3b8;
  char local_3b0;
  undefined8 *local_3a8;
  char local_3a0;
  longlong local_398;
  char local_390;
  longlong local_388;
  char local_380;
  longlong local_378;
  char local_370;
  longlong local_368;
  char local_360;
  longlong *local_358;
  char local_350;
  longlong local_348;
  char local_340;
  longlong local_338;
  char local_330;
  longlong *local_328;
  char local_320;
  longlong *local_318;
  char local_310;
  longlong local_308;
  char local_300;
  longlong local_2f8;
  char local_2f0;
  undefined8 *local_2e8;
  char local_2e0;
  longlong local_2d8;
  char local_2d0;
  undefined8 *local_2c8;
  char local_2c0;
  longlong local_2b8;
  char local_2b0;
  undefined8 *local_2a8;
  char local_2a0;
  longlong local_298;
  char local_290;
  undefined8 *local_288;
  char local_280;
  longlong local_278;
  char local_270;
  undefined8 *local_268;
  char local_260;
  undefined8 *local_258;
  char local_250;
  undefined8 *local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d0;
  char local_1c8;
  undefined8 *local_1c0;
  char local_1b8;
  ulonglong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 *local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  undefined8 *local_160;
  char local_158;
  undefined8 *local_150;
  char local_148;
  longlong *local_140;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  char local_120;
  undefined8 *local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  char local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong local_90;
  char local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined8 local_70;
  char local_68;
  uint local_5c;
  undefined8 *local_58;
  longlong *local_50;
  uint local_48 [2];
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_140 = param_1;
  local_b0 = param_2;
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_025795a8;
  local_58 = puVar11;
  (*DAT_025795c0)();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  pcVar1 = DAT_02572370;
  (*DAT_02572370)();
  local_c8 = puVar11;
  if (*(longlong *)(unaff_RSI + 0x38) == 0) {
    FUN_0171aac0();
    lVar21 = CONCAT71(local_70._1_7_,(char)local_70);
    FUN_01715620();
    FUN_01780260();
    local_e0 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      local_e0 = (undefined8 *)0x0;
      local_f0 = 0;
    }
    else if ((char)local_48[0] == '\0') {
      uVar13 = FUN_00d50b00();
      local_f0 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
      local_f0 = CONCAT71((int7)((ulonglong)local_50 >> 8),1);
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
    local_1d0 = *(longlong *)(unaff_RSI + 0x38);
    if (local_1d0 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = '\x01';
    FUN_01780290(&local_1d0,uVar7);
    local_e0 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      local_e0 = (undefined8 *)0x0;
      local_f0 = 0;
    }
    else if ((char)local_48[0] == '\0') {
      uVar13 = FUN_00d50b00();
      local_f0 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
      local_f0 = CONCAT71((int7)((ulonglong)local_50 >> 8),1);
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (lVar21 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((*(char *)(unaff_RSI + 0x1c) == '\0') || (cVar5 = FUN_01716c00(), cVar5 == '\0')) ||
     (cVar5 = FUN_01717530(), cVar5 != '\0')) {
    local_3b8 = local_e0;
    local_3b0 = '\0';
    FUN_00d8dbf0();
    if ((local_3b0 != '\0') && (local_3b8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d99300();
    local_1a0 = local_50;
    local_198 = 0;
    if ((char)local_48[0] == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
    }
    local_198 = '\x01';
    FUN_00d8dbf0();
    if ((local_198 != '\0') && (local_1a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00d8c7a0();
  local_3a8 = local_58;
  local_3a0 = '\0';
  FUN_00d8dab0();
  puVar11 = *(undefined8 **)(unaff_RSI + 0x40);
  plVar18 = puVar11;
  if (puVar11 != local_50) {
    if ((char)local_48[0] == '\0') {
      if (local_50 == (undefined8 *)0x0) {
        plVar18 = (undefined8 *)0x0;
      }
      else {
        FUN_00d50b00();
        puVar11 = *(undefined8 **)(unaff_RSI + 0x40);
        plVar18 = local_50;
      }
    }
    else {
      local_48[0] = local_48[0] & 0xffffff00;
      plVar18 = local_50;
    }
    *(longlong **)(unaff_RSI + 0x40) = plVar18;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
      plVar18 = local_50;
    }
  }
  if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_3a0 != '\0') && (local_3a8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  iVar8 = FUN_01717720();
  if ((iVar8 == 1) && ((*(byte *)(*local_b0 + 0x18) & 0xf) == 0)) {
    FUN_00d94d80(local_b0,DAT_025908a0);
    FUN_00d8c7d0();
  }
  else {
    iVar8 = FUN_01717720();
    if ((iVar8 != 2) || ((*(uint *)(*local_b0 + 0x18) & 0xf000000f) != 0x40000000)) {
      local_1a8 = uVar7;
      FUN_00d51d20();
      plVar18 = local_50;
      if (((char)local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b00();
        if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_b8 = plVar18;
      FUN_017162e0();
      plVar2 = local_50;
      if (((char)local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b00();
        if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_017162e0();
      local_e8 = local_50;
      if (((char)local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b00();
        if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_017162e0();
      local_f8 = local_50;
      if (((char)local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b00();
        if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((*(byte *)(plVar18 + 3) & 0xf) == 0) {
        FUN_01715d40();
        FUN_017163c0();
      }
      else {
        iVar8 = FUN_01717260();
        puVar11 = DAT_027cc870;
        if (iVar8 == -1) {
          if (DAT_027cc870 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          local_50 = puVar11;
          local_48[0] = local_48[0] & 0xffffff00;
          FUN_00d235a0();
          if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar11 != (undefined8 *)0x0) {
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
        puVar11 = DAT_027cc910;
        if (*(int *)(unaff_RSI + 0x24) == 1) {
          FUN_00d933c0();
          local_138 = local_50;
          local_130 = 0;
          if ((char)local_48[0] != '\0') goto LAB_01721b7a;
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = local_48[0] & 0xffffff00;
          if (DAT_027cc910 != (undefined8 *)0x0) {
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
        if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        puVar11 = DAT_027cc860;
        if (DAT_027cc860 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_50 = puVar11;
        local_48[0] = local_48[0] & 0xffffff00;
        FUN_00d235a0();
        if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        iVar8 = FUN_01717260();
        if ((iVar8 == -1) && ((plVar18[3] & 0xf00000000U) == 0x400000000)) {
          FUN_01715d40(0x400000000,4);
          FUN_017163c0();
          if (*(int *)(unaff_RSI + 0x24) == 1) {
            lVar21 = DAT_0270b790;
            if (DAT_0270b790 == 0) goto LAB_01721d6b;
LAB_017217e4:
            FUN_00d50b00();
          }
          else {
            lVar21 = DAT_027cc900;
            if (DAT_027cc900 != 0) goto LAB_017217e4;
LAB_01721d6b:
            lVar21 = 0;
          }
          local_390 = '\x01';
          local_398 = lVar21;
          FUN_00d8dbf0();
          if ((local_390 != '\0') && (local_398 != 0)) {
            FUN_00d50b20();
          }
          puVar11 = DAT_027cc860;
          if (DAT_027cc860 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          local_50 = puVar11;
          local_48[0] = local_48[0] & 0xffffff00;
          FUN_00d235a0();
          if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar11 != (undefined8 *)0x0) {
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
            puVar11 = DAT_027df560;
            if (*(int *)(unaff_RSI + 0x24) == 1) {
              FUN_00d933c0();
              local_128 = local_50;
              local_120 = 0;
              if ((char)local_48[0] != '\0') goto LAB_01721a40;
              if (local_50 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = local_48[0] & 0xffffff00;
              if (DAT_027df560 != (undefined8 *)0x0) {
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
            if ((local_120 != '\0') && (local_128 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            puVar11 = DAT_027cc860;
            if (DAT_027cc860 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            local_50 = puVar11;
            local_48[0] = local_48[0] & 0xffffff00;
            FUN_00d235a0();
            if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (puVar11 != (undefined8 *)0x0) {
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
              puVar11 = DAT_027df560;
              if (*(int *)(unaff_RSI + 0x24) == 1) {
                FUN_00d933c0();
                local_108 = local_50;
                local_100 = 0;
                if ((char)local_48[0] != '\0') goto LAB_01722150;
                if (local_50 != (undefined8 *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48[0] = local_48[0] & 0xffffff00;
                if (DAT_027df560 != (undefined8 *)0x0) {
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
              if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
            puVar11 = DAT_027cc910;
            if (*(int *)(unaff_RSI + 0x24) == 1) {
              FUN_00d933c0();
              local_118 = local_50;
              local_110 = 0;
              if ((char)local_48[0] != '\0') goto LAB_01721ed7;
              if (local_50 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = local_48[0] & 0xffffff00;
              if (DAT_027cc910 != (undefined8 *)0x0) {
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
            if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
              if (*(int *)(unaff_RSI + 0x24) == 1) {
                lVar21 = DAT_0270b790;
                if (DAT_0270b790 == 0) goto LAB_01721e0b;
LAB_01721cfa:
                FUN_00d50b00();
              }
              else {
                lVar21 = DAT_027cc900;
                if (DAT_027cc900 != 0) goto LAB_01721cfa;
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
                  if (*(char *)(unaff_RSI + 0x28) == '\0') {
                    FUN_00d94d80();
                  }
                  else {
                    FUN_00d94d80();
                  }
                }
                else {
                  cVar5 = FUN_01716e70();
                  puVar11 = DAT_027cc860;
                  lVar21 = DAT_02781708;
                  if (cVar5 == '\0') {
                    if (DAT_027cc860 != (undefined8 *)0x0) {
                      FUN_00d50b00();
                    }
                    local_50 = puVar11;
                    local_48[0] = local_48[0] & 0xffffff00;
                    FUN_00d235a0();
                    if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (puVar11 != (undefined8 *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (DAT_02781708 != 0) {
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
                if (*(int *)(unaff_RSI + 0x18) == 1) {
                  FUN_00d94d80();
                }
                else if (*(int *)(unaff_RSI + 0x18) == 0) {
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
              bVar22 = local_50 == (undefined8 *)0x0;
              if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              puVar11 = DAT_027cc880;
              if ((bVar22 & (bVar6 ^ 1)) != 0) {
                if (DAT_027cc880 != (undefined8 *)0x0) {
                  FUN_00d50b00();
                }
                local_50 = puVar11;
                local_48[0] = local_48[0] & 0xffffff00;
                FUN_00d235a0();
                if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if (puVar11 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
      }
LAB_01722322:
      local_1a4 = FUN_00d8c7a0();
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &DAT_02572358;
      (*pcVar1)();
      local_c0 = puVar11;
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &DAT_02572358;
      (*pcVar1)();
      lVar21 = DAT_02781738;
      if (DAT_02781738 != 0) {
        FUN_00d50b00();
      }
      local_50 = (longlong *)lVar21;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025683c0;
      pcVar1 = DAT_025683d8;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 0xc;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 8;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 6;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      lVar21 = DAT_027cc890;
      if (DAT_027cc890 != 0) {
        FUN_00d50b00();
      }
      local_50 = (longlong *)lVar21;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 10;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 8;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 6;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      plVar18 = DAT_02781720;
      if (DAT_02781720 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar18;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 8;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 6;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      plVar18 = DAT_027cc8a0;
      if (DAT_027cc8a0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar18;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 6;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      lVar21 = DAT_027cc8a8;
      if (DAT_027cc8a8 != 0) {
        FUN_00d50b00();
      }
      local_50 = (longlong *)lVar21;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 0xc;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 8;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 5;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      lVar21 = DAT_027cc8b0;
      if (DAT_027cc8b0 != 0) {
        FUN_00d50b00();
      }
      local_50 = (longlong *)lVar21;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 10;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 8;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 5;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      plVar18 = DAT_027cc8b8;
      if (DAT_027cc8b8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar18;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 8;
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 5;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      plVar18 = DAT_02781710;
      if (DAT_02781710 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar18;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_48[0] = local_48[0] & 0xffffff00;
      local_50 = puVar12;
      FUN_00d21140();
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
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
      *(undefined1 *)puVar15 = 0;
      if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar8 = *(int *)(plVar18 + 3);
      FUN_00c8e340();
      *(undefined4 *)(plVar18[2] + (longlong)iVar8) = 5;
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
      puVar12 = local_b8;
      puVar3 = local_440;
      plVar18 = local_430;
      if (0 < *(int *)((longlong)local_c0 + 0xc)) {
        lVar21 = 0;
        do {
          lVar20 = *(longlong *)(puVar11[2] + lVar21 * 8);
          if (lVar20 == 0) {
LAB_0172317d:
            puVar12 = local_b8;
            local_78 = *(longlong **)(local_c0[2] + lVar21 * 8);
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            lVar21 = *(longlong *)(puVar11[2] + lVar21 * 8);
            if (lVar21 == 0) {
              local_80._0_1_ = '\x01';
              plVar4 = local_78;
              puVar3 = local_440;
              plVar18 = local_430;
              local_440 = local_58;
            }
            else {
              uVar13 = FUN_00d50b00();
              uVar16 = (undefined7)((ulonglong)uVar13 >> 8);
              local_80 = CONCAT71(uVar16,1);
              if (3 < *(int *)(lVar21 + 0x18)) {
                local_80 = CONCAT71(uVar16,1);
                lVar20 = 0;
                local_1b0 = 0;
                local_3c0 = lVar21;
                do {
                  iVar8 = *(int *)(*(longlong *)(local_3c0 + 0x10) + lVar20 * 4);
                  local_448 = 0;
                  local_450 = puVar12;
                  iVar9 = FUN_0171f130();
                  uVar10 = (uint)((ulonglong)puVar12[3] >> ((byte)(iVar9 * 4) & 0x3f)) & 0xf;
                  uVar17 = 0xffffffff;
                  if (uVar10 != 0xf) {
                    uVar17 = uVar10;
                  }
                  FUN_01715d40(iVar9 * 4,uVar17);
                  FUN_017163c0();
                  uVar17 = iVar8 - 5;
                  uVar14 = (ulonglong)uVar17;
                  if (((uVar17 < 8) && ((0xa9U >> (uVar17 & 0x1f) & 1) != 0)) &&
                     (uVar14 = (ulonglong)(int)uVar17, *(int *)(&DAT_02411d4c + uVar14 * 4) != iVar9
                     )) {
                    FUN_01715d40(&DAT_02411d4c,iVar8);
                    lVar21 = DAT_02781738;
                    if ((local_1b0 & 1) == 0) {
                      if (DAT_02781738 != 0) {
                        FUN_00d50b00();
                      }
                      local_378 = lVar21;
                      local_370 = '\x01';
                      uVar13 = (**(code **)(*local_78 + 0x50))();
                      cVar5 = (char)uVar13;
                      if ((local_370 != '\0') && (local_378 != 0)) {
                        uVar13 = FUN_00d50b20();
                      }
                      lVar21 = DAT_027cc890;
                      plVar18 = DAT_02781720;
                      uVar17 = (uint)local_80;
                      if (cVar5 == '\0') {
                        if (DAT_027cc890 != 0) {
                          FUN_00d50b00();
                        }
                        local_368 = lVar21;
                        local_360 = '\x01';
                        uVar13 = (**(code **)(*local_78 + 0x50))();
                        cVar5 = (char)uVar13;
                        if ((local_360 != '\0') && (local_368 != 0)) {
                          uVar13 = FUN_00d50b20();
                        }
                        plVar18 = DAT_02781720;
                        if (cVar5 == '\0') {
                          if (DAT_02781720 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                          local_358 = plVar18;
                          local_350 = '\x01';
                          uVar13 = (**(code **)(*local_78 + 0x50))();
                          cVar5 = (char)uVar13;
                          if ((local_350 != '\0') && (local_358 != (longlong *)0x0)) {
                            uVar13 = FUN_00d50b20();
                          }
                          plVar18 = DAT_027cc8a0;
                          uVar10 = uVar17;
                          if (cVar5 != '\0') {
                            if (DAT_027cc8a0 != (longlong *)0x0) {
                              uVar13 = FUN_00d50b00();
                            }
                            if (local_78 == plVar18) {
                              local_5c = uVar17 & 0xff;
                              uVar10 = local_5c;
                              if (plVar18 != (longlong *)0x0) {
                                uVar10 = 1;
                              }
                              if (((char)local_80 != '\0') &&
                                 (uVar10 = local_5c, plVar18 != (longlong *)0x0)) {
                                FUN_00d50b20();
                                uVar10 = uVar17;
                              }
                            }
                            else {
                              local_5c = (uint)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
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
                          if (DAT_02781720 != (longlong *)0x0) {
                            uVar13 = FUN_00d50b00();
                          }
                          if (local_78 == plVar18) {
                            local_5c = uVar17 & 0xff;
                            uVar10 = local_5c;
                            if (plVar18 != (longlong *)0x0) {
                              uVar10 = 1;
                            }
                            if (((char)local_80 != '\0') &&
                               (uVar10 = local_5c, plVar18 != (longlong *)0x0)) {
                              FUN_00d50b20();
                              uVar10 = uVar17;
                            }
                          }
                          else {
                            local_5c = (uint)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
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
                        if (DAT_02781720 != (longlong *)0x0) {
                          uVar13 = FUN_00d50b00();
                        }
                        if (local_78 == plVar18) {
                          local_5c = uVar17 & 0xff;
                          uVar10 = local_5c;
                          if (plVar18 != (longlong *)0x0) {
                            uVar10 = 1;
                          }
                          if (((char)local_80 != '\0') &&
                             (uVar10 = local_5c, plVar18 != (longlong *)0x0)) {
                            FUN_00d50b20();
                            uVar10 = uVar17;
                          }
                        }
                        else {
                          local_5c = (uint)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                          local_78 = plVar18;
                          uVar10 = local_5c;
                          if ((char)local_80 != '\0') {
                            FUN_00d50b20();
                            uVar10 = local_5c;
                          }
                        }
                      }
                      local_5c = uVar10;
                      lVar21 = DAT_027cc8a8;
                      if (DAT_027cc8a8 != 0) {
                        FUN_00d50b00();
                      }
                      local_348 = lVar21;
                      local_340 = '\x01';
                      uVar13 = (**(code **)(*local_78 + 0x50))();
                      cVar5 = (char)uVar13;
                      if ((local_340 != '\0') && (local_348 != 0)) {
                        uVar13 = FUN_00d50b20();
                      }
                      plVar18 = DAT_027cc8b8;
                      lVar21 = DAT_027cc8b0;
                      if (cVar5 == '\0') {
                        if (DAT_027cc8b0 != 0) {
                          FUN_00d50b00();
                        }
                        local_338 = lVar21;
                        local_330 = '\x01';
                        uVar13 = (**(code **)(*local_78 + 0x50))();
                        cVar5 = (char)uVar13;
                        if ((local_330 != '\0') && (local_338 != 0)) {
                          uVar13 = FUN_00d50b20();
                        }
                        plVar18 = DAT_027cc8b8;
                        if (cVar5 == '\0') {
                          if (DAT_027cc8b8 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                          local_328 = plVar18;
                          local_320 = '\x01';
                          uVar13 = (**(code **)(*local_78 + 0x50))();
                          cVar5 = (char)uVar13;
                          if ((local_320 != '\0') && (local_328 != (longlong *)0x0)) {
                            uVar13 = FUN_00d50b20();
                          }
                          plVar18 = DAT_02781710;
                          if (cVar5 == '\0') {
                            if (DAT_02781710 != (longlong *)0x0) {
                              FUN_00d50b00();
                            }
                            local_318 = plVar18;
                            local_310 = '\x01';
                            cVar5 = (**(code **)(*local_78 + 0x50))();
                            if ((local_310 != '\0') && (local_318 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (cVar5 == '\0') {
                              local_80 = (ulonglong)local_5c;
                            }
                            else if ((char)local_5c == '\0') {
                              local_80 = 0;
                              local_78 = (longlong *)0x0;
                            }
                            else {
                              local_80 = 0;
                              local_78 = (longlong *)0x0;
                              FUN_00d50b20();
                            }
                          }
                          else {
                            if (DAT_02781710 != (longlong *)0x0) {
                              uVar13 = FUN_00d50b00();
                            }
                            if (local_78 == plVar18) {
                              local_80 = (ulonglong)(local_5c & 0xff);
                              if (plVar18 != (longlong *)0x0) {
                                local_80 = 1;
                              }
                              if (((char)local_5c != '\0') &&
                                 (local_80 = (ulonglong)local_5c & 0xffffffff000000ff,
                                 plVar18 != (longlong *)0x0)) {
                                FUN_00d50b20();
                                local_80 = (ulonglong)local_5c;
                              }
                            }
                            else {
                              local_80 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                              local_78 = plVar18;
                              if ((char)local_5c != '\0') {
                                FUN_00d50b20();
                              }
                            }
                          }
                        }
                        else {
                          if (DAT_027cc8b8 != (longlong *)0x0) {
                            uVar13 = FUN_00d50b00();
                          }
                          if (local_78 == plVar18) {
                            local_80 = (ulonglong)(local_5c & 0xff);
                            if (plVar18 != (longlong *)0x0) {
                              local_80 = 1;
                            }
                            if (((char)local_5c != '\0') &&
                               (local_80 = (ulonglong)local_5c & 0xffffffff000000ff,
                               plVar18 != (longlong *)0x0)) {
                              FUN_00d50b20();
                              local_80 = (ulonglong)local_5c;
                            }
                          }
                          else {
                            local_80 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                            local_78 = plVar18;
                            if ((char)local_5c != '\0') {
                              FUN_00d50b20();
                            }
                          }
                        }
                      }
                      else {
                        if (DAT_027cc8b8 != (longlong *)0x0) {
                          uVar13 = FUN_00d50b00();
                        }
                        if (local_78 == plVar18) {
                          local_80 = (ulonglong)(local_5c & 0xff);
                          if (plVar18 != (longlong *)0x0) {
                            local_80 = 1;
                          }
                          if (((char)local_5c != '\0') &&
                             (local_80 = (ulonglong)local_5c & 0xffffffff000000ff,
                             plVar18 != (longlong *)0x0)) {
                            FUN_00d50b20();
                            local_80 = (ulonglong)local_5c;
                          }
                        }
                        else {
                          local_80 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
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
                    if (((char)local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) {
                      FUN_00d50b00();
                    }
                    local_1c0 = plVar18;
                    local_1b8 = '\x01';
                    FUN_00d8dbf0();
                    if ((local_1b8 != '\0') && (local_1c0 != (undefined8 *)0x0)) {
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
            if (local_430 != (longlong *)0x0) {
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
        } while (lVar21 < *(int *)((longlong)local_c0 + 0xc));
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
      lVar21 = DAT_027cc8c0;
      local_3f0 = local_58;
      local_3e8 = 0;
      if (DAT_027cc8c0 != 0) {
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
      if (*(int *)((longlong)puVar3 + 0xc) != 0) {
        FUN_00d242c0();
        local_2d8 = DAT_027259e0;
        local_2e8 = local_c8;
        local_2e0 = '\0';
        if (DAT_027259e0 != 0) {
          FUN_00d50b00();
        }
        local_2d0 = '\x01';
        FUN_00d95130();
        local_40 = CONCAT71(local_70._1_7_,(char)local_70);
        local_48[0] = 1;
        local_50 = &DAT_024c5048;
        local_38 = 0;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        FUN_00d94d80();
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_2d0 != '\0') && (local_2d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2e0 != '\0') && (local_2e8 != (undefined8 *)0x0)) {
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
        local_50 = &DAT_024c5048;
        local_38 = 0;
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar21;
        FUN_00d94d80();
        local_50 = &DAT_024c5048;
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
      puVar3 = DAT_027cc870;
      if (*(int *)(unaff_RSI + 0x2c) == 2) {
        if (DAT_027cc870 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_268 = puVar3;
        local_260 = '\x01';
        FUN_00d933c0();
        lVar21 = CONCAT71(local_d8._1_7_,(char)local_d8);
        local_48[0] = 1;
        local_50 = &DAT_024c5048;
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
        puVar12 = (undefined8 *)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar3 == puVar12) {
LAB_01723fa6:
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar12 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (undefined8 *)0x0;
            local_58 = puVar12;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_01723fa6;
          }
          if (local_58 != (undefined8 *)0x0) {
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
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_260 != '\0') && (local_268 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        puVar12 = DAT_027cc860;
        if (DAT_027cc860 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_258 = puVar12;
        local_250 = '\x01';
        FUN_00d933c0();
        local_40 = CONCAT71(local_d8._1_7_,(char)local_d8);
        local_48[0] = 1;
        local_50 = &DAT_024c5048;
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
        puVar12 = (undefined8 *)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar12 == puVar3) {
LAB_017242f1:
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar12 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (undefined8 *)0x0;
            local_58 = puVar12;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_017242f1;
          }
          if (local_58 != (undefined8 *)0x0) {
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
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_250 != '\0') && (local_258 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        puVar12 = DAT_027cc880;
        if (DAT_027cc880 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_248 = puVar12;
        local_240 = '\x01';
        FUN_00d933c0();
        local_40 = CONCAT71(local_d8._1_7_,(char)local_d8);
        local_48[0] = 1;
        local_50 = &DAT_024c5048;
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
        puVar3 = (undefined8 *)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar3 == puVar12) {
LAB_017244bd:
          puVar12 = local_b8;
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar3 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (undefined8 *)0x0;
            local_58 = puVar3;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_017244bd;
          }
          if (local_58 != (undefined8 *)0x0) {
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
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_240 != '\0') && (local_248 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (*(int *)(unaff_RSI + 0x2c) == 1) {
        if (DAT_027cc870 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        lVar21 = DAT_027cc8d0;
        local_2c8 = puVar3;
        local_2c0 = '\x01';
        if (DAT_027cc8d0 != 0) {
          FUN_00d50b00();
        }
        puVar12 = local_58;
        local_2b8 = lVar21;
        local_2b0 = '\x01';
        FUN_00d98db0(&local_2b8,&local_2c8,0);
        plVar18 = local_50;
        if (puVar12 == local_50) {
LAB_01723e99:
          if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_48[0] == '\0') {
            if (local_50 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if (local_58 == (undefined8 *)0x0) {
              local_58 = plVar18;
            }
            else {
              local_58 = plVar18;
              FUN_00d50b20();
            }
            goto LAB_01723e99;
          }
          if (local_58 != (undefined8 *)0x0) {
            local_58 = local_50;
            FUN_00d50b20();
          }
          local_48[0] = local_48[0] & 0xffffff00;
          local_58 = plVar18;
        }
        if ((local_2b0 != '\0') && (local_2b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2c0 != '\0') && (local_2c8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        puVar12 = DAT_027cc860;
        if (DAT_027cc860 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        lVar21 = DAT_027cc8d8;
        local_2a8 = puVar12;
        local_2a0 = '\x01';
        if (DAT_027cc8d8 != 0) {
          FUN_00d50b00();
        }
        puVar12 = local_58;
        local_298 = lVar21;
        local_290 = '\x01';
        FUN_00d98db0(&local_298,&local_2a8,0);
        plVar18 = local_50;
        if (local_50 == puVar12) {
LAB_01724170:
          if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_48[0] == '\0') {
            if (local_50 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if (local_58 == (undefined8 *)0x0) {
              local_58 = plVar18;
            }
            else {
              local_58 = plVar18;
              FUN_00d50b20();
            }
            goto LAB_01724170;
          }
          if (local_58 != (undefined8 *)0x0) {
            local_58 = local_50;
            FUN_00d50b20();
          }
          local_48[0] = local_48[0] & 0xffffff00;
          local_58 = plVar18;
        }
        if ((local_290 != '\0') && (local_298 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2a0 != '\0') && (local_2a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        puVar12 = DAT_027cc880;
        if (DAT_027cc880 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        lVar21 = DAT_027cc8e0;
        local_288 = puVar12;
        local_280 = '\x01';
        if (DAT_027cc8e0 != 0) {
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
          if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_48[0] == '\0') {
            if (local_50 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if (local_58 == (undefined8 *)0x0) {
              local_58 = plVar18;
            }
            else {
              local_58 = plVar18;
              FUN_00d50b20();
            }
            goto LAB_0172427f;
          }
          if (local_58 != (undefined8 *)0x0) {
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
        if ((local_280 != '\0') && (local_288 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar21 = DAT_027cd570;
      if (*(int *)(unaff_RSI + 0x30) == 1) {
        if (DAT_027cd570 != 0) {
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
        *(undefined1 *)puVar15 = 0;
        if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_158 = 0;
        if ((char)local_d8 == '\0') {
          if (plVar18 != (undefined8 *)0x0) {
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
        puVar12 = (undefined8 *)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar12 == puVar3) {
LAB_017246ad:
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar12 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (undefined8 *)0x0;
            local_58 = puVar12;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_017246ad;
          }
          if (local_58 != (undefined8 *)0x0) {
            local_58 = puVar12;
            FUN_00d50b20();
          }
          local_68 = '\0';
          local_58 = puVar12;
        }
        if ((local_158 != '\0') && (local_160 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_230 != '\0') && (local_238 != 0)) {
          FUN_00d50b20();
        }
        lVar21 = DAT_02781610;
        if (DAT_02781610 != 0) {
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
        *(undefined1 *)puVar15 = 0;
        if (((char)local_48[0] != '\0') && (plVar18 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_148 = 0;
        if ((char)local_d8 == '\0') {
          if (plVar18 != (undefined8 *)0x0) {
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
        puVar3 = (undefined8 *)CONCAT71(local_70._1_7_,(char)local_70);
        if (puVar3 == puVar12) {
LAB_0172483b:
          puVar12 = local_b8;
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (puVar3 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar22 = local_58 != (undefined8 *)0x0;
            local_58 = puVar3;
            if (bVar22) {
              FUN_00d50b20();
            }
            goto LAB_0172483b;
          }
          if (local_58 != (undefined8 *)0x0) {
            local_58 = puVar3;
            FUN_00d50b20();
          }
          local_68 = '\0';
          puVar12 = local_b8;
          local_58 = puVar3;
        }
        if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
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
        local_218 = DAT_027259e0;
        if (DAT_027259e0 != 0) {
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
        local_50 = (longlong *)lVar21;
        FUN_00d21140();
        if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
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
        local_208 = DAT_027259e0;
        if (DAT_027259e0 != 0) {
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
        local_50 = (longlong *)lVar21;
        FUN_00d21140();
        if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
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
        local_1f8 = DAT_027259e0;
        if (DAT_027259e0 != 0) {
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
        local_50 = (longlong *)lVar21;
        FUN_00d21140();
        if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
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
        local_1e8 = DAT_027259e0;
        if (DAT_027259e0 != 0) {
          FUN_00d50b00();
        }
        local_1e0 = '\x01';
        FUN_00d97f20();
        puVar3 = (undefined8 *)CONCAT71(local_70._1_7_,(char)local_70);
        if (local_68 == '\0') {
          if (puVar3 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_48[0] = local_48[0] & 0xffffff00;
        local_50 = puVar3;
        FUN_00d21140();
        if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (undefined8 *)0x0) {
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
      *unaff_RDI = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (puVar11 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_c0 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      puVar11 = local_c8;
      if (local_f8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (plVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar12 != (undefined8 *)0x0) {
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
      local_50 = &DAT_024c5048;
      local_38 = 0;
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      FUN_00d94d80();
      local_50 = &DAT_024c5048;
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
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  puVar11 = local_c8;
LAB_01724d41:
  if ((char)local_f0 != '\0') {
    if (local_e0 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar11 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}


