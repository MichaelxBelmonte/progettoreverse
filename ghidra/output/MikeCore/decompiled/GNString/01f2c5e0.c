// Function: FUN_01f2c5e0
// Address: 01f2c5e0
// Size: 4930 bytes
// Class: GNString
// String references:
//   "Cannot create dirs."
//   "Exception handling test."


ulonglong FUN_01f2c5e0(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  uint3 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar14;
  longlong *plVar15;
  bool bVar16;
  longlong local_288;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong *local_200;
  char local_1f8;
  ulonglong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  ulonglong local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  ulonglong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  undefined8 *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  undefined8 *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  ulonglong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01cae990();
  plVar15 = local_60;
  local_280 = DAT_027fff88;
  if (DAT_027fff88 != 0) {
    FUN_00d50b00();
  }
  local_278 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
    if (param_2 == 0) goto LAB_01f2d90e;
    FUN_01cb4790();
    (**(code **)(*local_60 + 0x658))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01f2c6a9;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_270 = DAT_02703b40;
  if (DAT_02703b40 != 0) {
    FUN_00d50b00();
  }
  local_268 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar2 = (uint3)((uint)uVar8 >> 8);
    uVar12 = CONCAT71((uint7)uVar2,1);
    if (param_2 != 0) {
      (**(code **)(*unaff_RDI + 0x638))();
      uVar12 = (ulonglong)CONCAT31(uVar2,1);
    }
    goto LAB_01f2d90e;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_260 = DAT_02728ad8;
  if (DAT_02728ad8 != 0) {
    FUN_00d50b00();
  }
  local_258 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar2 = (uint3)((uint)uVar8 >> 8);
    uVar12 = CONCAT71((uint7)uVar2,1);
    if (param_2 != 0) {
      (**(code **)(*unaff_RDI + 0x630))();
      uVar12 = (ulonglong)CONCAT31(uVar2,1);
    }
    goto LAB_01f2d90e;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_250 = DAT_02728ac8;
  if (DAT_02728ac8 != 0) {
    FUN_00d50b00();
  }
  local_248 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar2 = (uint3)((uint)uVar8 >> 8);
    uVar12 = CONCAT71((uint7)uVar2,1);
    if (param_2 != 0) {
      (**(code **)(*unaff_RDI + 0x628))();
      uVar12 = (ulonglong)CONCAT31(uVar2,1);
    }
    goto LAB_01f2d90e;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_240 = DAT_026fb8b8;
  if (DAT_026fb8b8 != 0) {
    FUN_00d50b00();
  }
  local_238 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar2 = (uint3)((uint)uVar8 >> 8);
    uVar12 = CONCAT71((uint7)uVar2,1);
    if (param_2 != 0) {
      (**(code **)(*unaff_RDI + 0x5e8))();
      uVar12 = (ulonglong)CONCAT31(uVar2,1);
    }
    goto LAB_01f2d90e;
  }
  FUN_01cae990();
  plVar15 = local_60;
  local_230 = DAT_026fb8c8;
  if (DAT_026fb8c8 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  uVar8 = (**(code **)(*plVar15 + 0x50))();
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 == '\0') {
    FUN_01cae990();
    plVar15 = local_60;
    local_220 = DAT_027fff90;
    if (DAT_027fff90 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    uVar8 = (**(code **)(*plVar15 + 0x50))();
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar8 == '\0') {
      FUN_01cae990();
      plVar15 = local_60;
      local_210 = DAT_027fff98;
      if (DAT_027fff98 != 0) {
        FUN_00d50b00();
      }
      local_208 = '\x01';
      uVar8 = (**(code **)(*plVar15 + 0x50))();
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar8 == '\0') {
        FUN_01cae990();
        plVar15 = local_60;
        local_1e0 = DAT_027fff80;
        if (DAT_027fff80 != 0) {
          FUN_00d50b00();
        }
        local_1d8 = '\x01';
        uVar8 = (**(code **)(*plVar15 + 0x50))();
        if ((local_1d8 != '\0') && (local_1e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar8 != '\0') {
          uVar2 = (uint3)((uint)uVar8 >> 8);
          uVar12 = CONCAT71((uint7)uVar2,1);
          if (param_2 != 0) {
            (**(code **)(*unaff_RDI + 0x678))();
            uVar12 = (ulonglong)CONCAT31(uVar2,1);
          }
          goto LAB_01f2d90e;
        }
        FUN_01cae990();
        plVar15 = local_60;
        local_1d0 = DAT_027fffa0;
        if (DAT_027fffa0 != 0) {
          FUN_00d50b00();
        }
        local_1c8 = '\x01';
        uVar8 = (**(code **)(*plVar15 + 0x50))();
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar8 != '\0') {
          uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
          if (param_2 == 0) goto LAB_01f2d90e;
          FUN_01caec40();
          uVar12 = DAT_027fffa8;
          if (DAT_027fffa8 != 0) {
            FUN_00d50b00();
          }
          local_1c0 = uVar12;
          local_1b8 = '\x01';
          FUN_000175c0();
          plVar15 = local_60;
          if (local_58 == '\0') {
            if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (plVar15 != (longlong *)0x0) {
            local_1b0 = plVar15;
            local_1a8 = '\0';
            uVar9 = FUN_00ce3750();
            if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar4 = DAT_027fffb0;
            uVar12 = (ulonglong)uVar9;
            if ((char)uVar9 == '\0') {
              if (DAT_027fffb0 != 0) {
                FUN_00d50b00();
              }
              local_1a0 = uVar4;
              local_198 = '\x01';
              FUN_00cc7b40();
              uVar12 = uVar4;
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          goto LAB_01f2c6a9;
        }
        FUN_01cae990();
        plVar15 = local_60;
        local_190 = DAT_027fffb8;
        if (DAT_027fffb8 != 0) {
          FUN_00d50b00();
        }
        local_188 = '\x01';
        cVar7 = (**(code **)(*plVar15 + 0x50))();
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 != '\0') {
          lVar13 = unaff_RDI[9];
          if (lVar13 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            uVar12 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
            if (param_2 != 0) {
              lVar13 = unaff_RDI[9];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01e5eda0();
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
            }
            goto LAB_01f2d90e;
          }
LAB_01f2d90c:
          uVar12 = 0;
          goto LAB_01f2d90e;
        }
        FUN_01cae990();
        plVar15 = local_60;
        local_180 = DAT_027fffc0;
        if (DAT_027fffc0 != 0) {
          FUN_00d50b00();
        }
        local_178 = '\x01';
        cVar7 = (**(code **)(*plVar15 + 0x50))();
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          FUN_01cae990();
          plVar15 = local_60;
          local_160 = DAT_027fffc8;
          if (DAT_027fffc8 != 0) {
            FUN_00d50b00();
          }
          local_158 = '\x01';
          uVar8 = (**(code **)(*plVar15 + 0x50))();
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 != '\0') {
            bVar16 = *(int *)(unaff_RDI[0xd] + 0xc) != 0;
            uVar12 = (ulonglong)CONCAT31((int3)((uint)uVar8 >> 8),bVar16);
            if ((bVar16) && (param_2 != 0)) {
              FUN_00d216c0();
              FUN_00d6f370();
              plVar15 = local_60;
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              lVar13 = 0;
              if (plVar15 != (longlong *)0x0) {
                FUN_00d6f370();
                puVar11 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar11 = &DAT_02572358;
                pcVar3 = DAT_02572370;
                (*DAT_02572370)();
                local_140 = DAT_027fffd0;
                local_148 = '\x01';
                local_150 = puVar11;
                if (DAT_027fffd0 != 0) {
                  FUN_00d50b00();
                }
                local_138 = '\x01';
                FUN_00d6f570();
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d6f370();
                puVar11 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar11 = &DAT_02572358;
                (*pcVar3)();
                lVar13 = DAT_027fffd8;
                local_128 = '\x01';
                local_130 = puVar11;
                if (DAT_027fffd8 != 0) {
                  FUN_00d50b00();
                }
                local_120 = lVar13;
                local_118 = '\x01';
                FUN_00d6f570();
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              (**(code **)(*unaff_RDI + 0x4b0))();
              uVar12 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
            }
            goto LAB_01f2d90e;
          }
          FUN_01cae990();
          plVar15 = local_60;
          local_110 = DAT_027fffe0;
          if (DAT_027fffe0 != 0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          uVar8 = (**(code **)(*plVar15 + 0x50))();
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 != '\0') {
            uVar2 = (uint3)((uint)uVar8 >> 8);
            uVar12 = CONCAT71((uint7)uVar2,1);
            if (param_2 != 0) {
              FUN_00e82970();
              uVar12 = (ulonglong)CONCAT31(uVar2,1);
            }
            goto LAB_01f2d90e;
          }
          FUN_01cae990();
          plVar15 = local_60;
          local_100 = DAT_027fffe8;
          if (DAT_027fffe8 != 0) {
            FUN_00d50b00();
          }
          local_f8 = '\x01';
          uVar8 = (**(code **)(*plVar15 + 0x50))();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 == '\0') {
            FUN_01cae990();
            plVar15 = local_60;
            local_f0 = DAT_027ffff0;
            if (DAT_027ffff0 != 0) {
              FUN_00d50b00();
            }
            local_e8 = '\x01';
            uVar8 = (**(code **)(*plVar15 + 0x50))();
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar4 = DAT_027ffff8;
            if ((char)uVar8 == '\0') {
              FUN_01cae990();
              plVar15 = local_60;
              local_d0 = DAT_02800000;
              if (DAT_02800000 != 0) {
                FUN_00d50b00();
              }
              local_c8 = '\x01';
              uVar8 = (**(code **)(*plVar15 + 0x50))();
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)uVar8 == '\0') {
                FUN_01cb29c0();
                if (local_60 == (longlong *)0x0) {
                  cVar7 = '\0';
                }
                else {
                  FUN_01cb29c0();
                  cVar7 = FUN_01cb3500();
                  if ((local_68 != '\0') && (local_70 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar7 == '\0') {
                  local_90 = *unaff_RSI;
                  local_88 = '\0';
                  uVar9 = FUN_01d827c0();
                  uVar12 = (ulonglong)uVar9;
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01f2d90e;
                }
                FUN_01cae990();
                lVar13 = DAT_02800008;
                if (DAT_02800008 != 0) {
                  FUN_00d50b00();
                }
                local_288 = lVar13;
                FUN_00083ea0(2,&local_288);
                FUN_000b4da0();
                lVar6 = local_70;
                if (local_68 == '\0') {
                  if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_60 = (longlong *)&DAT_0253d630;
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                local_60 = &DAT_024c5048;
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != 0)) {
                  FUN_00d50b20();
                }
                lVar13 = DAT_027fff58;
                if (DAT_027fff58 != 0) {
                  FUN_00d50b00();
                }
                lVar5 = DAT_02800010;
                local_c0 = lVar13;
                local_b8 = '\x01';
                if (DAT_02800010 != 0) {
                  FUN_00d50b00();
                }
                local_b0 = lVar5;
                local_a8 = '\x01';
                FUN_01f6ca30();
                local_a0 = lVar6;
                local_98 = '\0';
                iVar10 = (**(code **)(*local_60 + 0x5d8))();
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
                if (iVar10 == 1) {
                  FUN_01cb29c0();
                  if (local_58 == '\0') {
                    if (local_60 != (longlong *)0x0) {
                      FUN_00d50b00();
                      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_01f2d8ef;
                    }
                  }
                  else if (local_60 != (longlong *)0x0) {
LAB_01f2d8ef:
                    FUN_01cb3480();
                    FUN_00d50b20();
                  }
                }
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01f2d90c;
              }
              uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
              if (param_2 == 0) goto LAB_01f2d90e;
              *(undefined1 *)((longlong)unaff_RDI + 0xe4) = 1;
            }
            else {
              uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
              if (param_2 == 0) goto LAB_01f2d90e;
              if (DAT_027ffff8 != 0) {
                FUN_00d50b00();
              }
              local_e0 = uVar4;
              local_d8 = '\x01';
              FUN_00cc7b40();
              uVar12 = uVar4;
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
            if (param_2 == 0) goto LAB_01f2d90e;
          }
          goto LAB_01f2c6a9;
        }
        FUN_01caeae0();
        FUN_01d66da0();
        local_170 = DAT_027fffc0;
        if (DAT_027fffc0 != 0) {
          FUN_00d50b00();
        }
        local_168 = '\x01';
        pplVar14 = &local_60;
        FUN_000175c0();
        plVar15 = local_60;
        FUN_0020e360();
        if (plVar15 == (longlong *)0x0) {
LAB_01f2d051:
          pplVar14 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar15 + 0x360))();
          cVar7 = FUN_00e85ea0();
          if (cVar7 == '\0') goto LAB_01f2d051;
        }
        plVar1 = *pplVar14;
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar14 + 1) = 0;
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        bVar16 = plVar1 != (longlong *)0x0;
        uVar12 = CONCAT71((int7)((ulonglong)plVar15 >> 8),bVar16);
        if ((param_2 ^ 1) == 0 && bVar16) {
          FUN_01e5d9c0();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((param_2 ^ 1) != 0 || !bVar16) goto LAB_01f2d90e;
      }
      else {
        uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
        if (param_2 == 0) goto LAB_01f2d90e;
        FUN_01caeae0();
        plVar15 = local_60;
        if (local_60 == (longlong *)0x0) {
          bVar16 = true;
          plVar15 = (longlong *)0x0;
        }
        else {
          if (local_58 == '\0') {
            FUN_00d50b00();
            bVar16 = false;
            if ((local_58 == '\0') || (bVar16 = false, local_60 == (longlong *)0x0))
            goto LAB_01f2ce79;
            FUN_00d50b20();
          }
          bVar16 = false;
        }
LAB_01f2ce79:
        FUN_01d65ea0();
        local_1f8 = '\0';
        local_200 = plVar15;
        iVar10 = FUN_01d5e2e0();
        if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar12 = *(ulonglong *)(*(longlong *)(unaff_RDI[0xd] + 0x10) + (longlong)iVar10 * 8);
        if (uVar12 != 0) {
          FUN_00d50b00();
        }
        local_1e8 = '\0';
        local_1f0 = uVar12;
        (**(code **)(*unaff_RDI + 0x528))();
        if ((local_1e8 != '\0') && (local_1f0 != 0)) {
          FUN_00d50b20();
        }
        if (uVar12 != 0) {
          FUN_00d50b20();
        }
        if (!bVar16 && plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
      if (param_2 == 0) goto LAB_01f2d90e;
      (**(code **)(*unaff_RDI + 0x5e0))();
      FUN_01f7e530();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar12 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
    if (param_2 == 0) goto LAB_01f2d90e;
    (**(code **)(*unaff_RDI + 0x5e0))();
    FUN_01f7e230();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01f2c6a9:
  uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
LAB_01f2d90e:
  return uVar12 & 0xffffffff;
}


