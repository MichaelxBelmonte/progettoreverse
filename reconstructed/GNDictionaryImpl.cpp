// Reconstructed implementation of GNDictionaryImpl
// From MikeCore binary — reverse-engineered pseudocode

#include "GNDictionaryImpl.h"

// ============================================================
// @00ca2870 — 8571 bytes
// str: ""GNList""
// str: ""GNData""
// str: ""GNValue""
// str: ""\t""
// str: ""<string>%@</string>\n""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ca2870(int param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *unaff_RSI;
  longlong *plVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  float fVar15;
  longlong local_408;
  char local_400;
  longlong local_3f8;
  char local_3f0;
  longlong local_3e8;
  char local_3e0;
  longlong local_3d8;
  char local_3d0;
  longlong local_3b8;
  undefined1 local_3b0;
  longlong local_3a8;
  char local_3a0;
  longlong local_398;
  char local_390;
  longlong local_388;
  char local_380;
  longlong local_378;
  char local_370;
  longlong local_368;
  undefined1 local_360;
  longlong local_358;
  char local_350;
  longlong local_348;
  char local_340;
  undefined8 local_338;
  undefined1 local_330;
  undefined8 *local_328;
  undefined1 local_320;
  longlong local_318;
  char local_310;
  longlong local_308;
  char local_300;
  longlong local_2f8;
  char local_2f0;
  longlong local_2e8;
  char local_2e0;
  longlong local_2d8;
  char local_2d0;
  longlong local_2c8;
  char local_2c0;
  longlong local_2b8;
  char local_2b0;
  longlong local_2a8;
  char local_2a0;
  longlong local_298;
  char local_290;
  longlong local_288;
  char local_280;
  longlong local_278;
  undefined1 local_270;
  longlong local_268;
  char local_260;
  longlong local_258;
  char local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 *local_238;
  undefined1 local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  undefined1 local_200;
  undefined1 local_1f0;
  undefined1 local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  undefined8 *local_188;
  char local_180;
  undefined8 *local_178;
  char local_170;
  undefined8 *local_168;
  char local_160;
  undefined8 *local_158;
  char local_150;
  undefined8 *local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  char local_120;
  undefined8 *local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  undefined8 *local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  char local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  char local_80;
  char local_75;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  uint local_58;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  longlong *local_40;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  local_68 = puVar7;
  (*DAT_025795c0)();
  plVar9 = (longlong *)*param_2;
  if ((DAT_026fd0c0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_00ca28fa:
    plVar9 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar9 = param_2;
    if (cVar5 == '\0') goto LAB_00ca28fa;
  }
  local_1d8 = *plVar9;
  local_75 = (char)plVar9[1];
  if ((local_75 == '\0') || (local_1d8 == 0)) {
    if (local_1d8 == 0) {
      plVar9 = (longlong *)*param_2;
      if ((DAT_027048b0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
        _DAT_026cd478 = FUN_00d4fe50();
        DAT_026cd460 = "GNList";
        _DAT_026cd468 = 0x20;
        _DAT_026cd470 = FUN_00018210;
        _DAT_026cd480 = 0;
        uRam00000000026cd488 = 0;
        _DAT_026cd490 = 0;
        _DAT_026cd508 = 0;
        uRam00000000026cd510 = 0;
        _DAT_026cd518 = 0;
        DAT_026cd51a = 6;
        _DAT_026cd498 = 0;
        uRam00000000026cd4a0 = 0;
        _DAT_026cd4a8 = 0;
        uRam00000000026cd4b0 = 0;
        _DAT_026cd4b8 = 0;
        uRam00000000026cd4c0 = 0;
        _DAT_026cd4c8 = 0;
        uRam00000000026cd4d0 = 0;
        _DAT_026cd4d8 = 0;
        uRam00000000026cd4e0 = 0;
        _DAT_026cd4e8 = 0;
        uRam00000000026cd4f0 = 0;
        _DAT_026cd4f8 = 0;
        uRam00000000026cd500 = 0;
        DAT_026cd523 = 0;
        _DAT_026cd51b = 0;
        ___cxa_guard_release();
      }
      if (plVar9 == (longlong *)0x0) {
LAB_00ca2b4c:
        plVar9 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar9 = param_2;
        if (cVar5 == '\0') goto LAB_00ca2b4c;
      }
      lVar10 = *plVar9;
      local_74 = (char)plVar9[1];
      if ((local_74 == '\0') || (lVar10 == 0)) {
        if (lVar10 != 0) goto LAB_00ca2b7c;
        plVar9 = (longlong *)*param_2;
        if ((DAT_026fdd40 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
          _DAT_026cd0e8 = FUN_00d4fe50();
          DAT_026cd0d0 = "GNDictionary";
          _DAT_026cd0d8 = 0x28;
          _DAT_026cd0e0 = FUN_00022d20;
          _DAT_026cd0f0 = 0;
          uRam00000000026cd0f8 = 0;
          _DAT_026cd100 = 0;
          _DAT_026cd178 = 0;
          uRam00000000026cd180 = 0;
          _DAT_026cd188 = 0;
          DAT_026cd18a = 6;
          _DAT_026cd108 = 0;
          uRam00000000026cd110 = 0;
          _DAT_026cd118 = 0;
          uRam00000000026cd120 = 0;
          _DAT_026cd128 = 0;
          uRam00000000026cd130 = 0;
          _DAT_026cd138 = 0;
          uRam00000000026cd140 = 0;
          _DAT_026cd148 = 0;
          uRam00000000026cd150 = 0;
          _DAT_026cd158 = 0;
          uRam00000000026cd160 = 0;
          _DAT_026cd168 = 0;
          uRam00000000026cd170 = 0;
          DAT_026cd193 = 0;
          _DAT_026cd18b = 0;
          ___cxa_guard_release();
        }
        plVar12 = &DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 != '\0') {
            if ((DAT_026fd0c0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
              _DAT_026d5e58 = FUN_00d4fe50();
              DAT_026d5e40 = "GNString";
              _DAT_026d5e48 = 0x40;
              _DAT_026d5e50 = FUN_0005d920;
              _DAT_026d5e60 = 0;
              uRam00000000026d5e68 = 0;
              _DAT_026d5e70 = 0;
              uRam00000000026d5e78 = 0;
              _DAT_026d5e80 = 0;
              uRam00000000026d5e88 = 0;
              _DAT_026d5e90 = 0;
              uRam00000000026d5e98 = 0;
              _DAT_026d5ea0 = 0;
              uRam00000000026d5ea8 = 0;
              _DAT_026d5eb0 = 0;
              uRam00000000026d5eb8 = 0;
              _DAT_026d5ec0 = 0;
              uRam00000000026d5ec8 = 0;
              _DAT_026d5ed0 = 0;
              uRam00000000026d5ed8 = 0;
              _DAT_026d5ee0 = 0;
              uRam00000000026d5ee8 = 0;
              _DAT_026d5ef0 = 0;
              uRam00000000026d5ef8 = 0;
              _DAT_026d5f00 = 0;
              ___cxa_guard_release();
            }
            cVar5 = FUN_00e8db60();
            plVar12 = param_2;
            if (cVar5 == '\0') {
              plVar12 = &DAT_02802688;
            }
          }
        }
        lVar10 = *plVar12;
        local_73 = (char)plVar12[1];
        if ((local_73 == '\0') || (lVar10 == 0)) {
          if (lVar10 != 0) goto LAB_00ca2f28;
          plVar9 = (longlong *)*param_2;
          if ((DAT_026d0220 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
            _DAT_02789148 = FUN_00d4fe50();
            DAT_02789130 = "GNData";
            _DAT_02789138 = 0x28;
            _DAT_02789140 = FUN_000378a0;
            _DAT_02789150 = 0;
            uRam0000000002789158 = 0;
            _DAT_02789160 = 0;
            uRam0000000002789168 = 0;
            _DAT_02789170 = 0;
            uRam0000000002789178 = 0;
            _DAT_02789180 = 0;
            uRam0000000002789188 = 0;
            _DAT_02789190 = 0;
            uRam0000000002789198 = 0;
            _DAT_027891a0 = 0;
            uRam00000000027891a8 = 0;
            _DAT_027891b0 = 0;
            uRam00000000027891b8 = 0;
            _DAT_027891c0 = 0;
            uRam00000000027891c8 = 0;
            _DAT_027891d0 = 0;
            uRam00000000027891d8 = 0;
            _DAT_027891e0 = 0;
            uRam00000000027891e8 = 0;
            _DAT_027891f0 = 0;
            ___cxa_guard_release();
          }
          if (plVar9 == (longlong *)0x0) {
LAB_00ca3531:
            plVar9 = &DAT_02802688;
          }
          else {
            (**(code **)(*plVar9 + 0x360))();
            cVar5 = FUN_00e85ea0();
            plVar9 = param_2;
            if (cVar5 == '\0') goto LAB_00ca3531;
          }
          lVar10 = *plVar9;
          local_98 = CONCAT71(local_98._1_7_,(char)plVar9[1]);
          if (((char)plVar9[1] == '\0') || (lVar10 == 0)) {
            if (lVar10 != 0) goto LAB_00ca3563;
            plVar9 = (longlong *)*param_2;
            FUN_00053ac0();
            if (plVar9 == (longlong *)0x0) {
LAB_00ca377d:
              plVar9 = &DAT_02802688;
            }
            else {
              (**(code **)(*plVar9 + 0x360))();
              cVar5 = FUN_00e85ea0();
              plVar9 = param_2;
              if (cVar5 == '\0') goto LAB_00ca377d;
            }
            local_b8 = *plVar9;
            local_72 = (char)plVar9[1];
            if ((local_72 == '\0') || (local_b8 == 0)) {
              if (local_b8 != 0) goto LAB_00ca37ac;
              plVar9 = (longlong *)*param_2;
              if ((DAT_0270c850 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
                _DAT_026d4348 = FUN_00d4fe50();
                _DAT_026d4330 = "GNValue";
                _DAT_026d4338 = 0x18;
                _DAT_026d4340 = FUN_00053cb0;
                _DAT_026d4350 = 0;
                uRam00000000026d4358 = 0;
                _DAT_026d4360 = 0;
                uRam00000000026d4368 = 0;
                _DAT_026d4370 = 0;
                uRam00000000026d4378 = 0;
                _DAT_026d4380 = 0;
                uRam00000000026d4388 = 0;
                _DAT_026d4390 = 0;
                uRam00000000026d4398 = 0;
                _DAT_026d43a0 = 0;
                uRam00000000026d43a8 = 0;
                _DAT_026d43b0 = 0;
                uRam00000000026d43b8 = 0;
                _DAT_026d43c0 = 0;
                uRam00000000026d43c8 = 0;
                _DAT_026d43d0 = 0;
                uRam00000000026d43d8 = 0;
                _DAT_026d43e0 = 0;
                uRam00000000026d43e8 = 0;
                _DAT_026d43f0 = 0;
                ___cxa_guard_release();
              }
              if (plVar9 == (longlong *)0x0) {
LAB_00ca3841:
                plVar9 = &DAT_02802688;
              }
              else {
                (**(code **)(*plVar9 + 0x360))();
                cVar5 = FUN_00e85ea0();
                plVar9 = param_2;
                if (cVar5 == '\0') goto LAB_00ca3841;
              }
              plVar12 = (longlong *)*plVar9;
              local_71 = (char)plVar9[1];
              local_1d0 = plVar12;
              if ((local_71 == '\0') || (plVar12 == (longlong *)0x0)) {
                local_70 = lVar10;
                if (plVar12 != (longlong *)0x0) goto LAB_00ca387b;
                plVar9 = (longlong *)FUN_00e8fc40();
                FUN_00049200();
                uVar14 = (**(code **)(*plVar9 + 0x18))();
                local_1b8 = *param_2;
                local_1b0 = '\0';
                local_40 = plVar9;
                FUN_00d07ad0(uVar14,&local_1b8);
                local_b0 = local_60;
                if ((char)local_58 == '\0') {
                  if (local_60 != (undefined8 *)0x0) {
                    FUN_00d50b00();
                    if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_58 = local_58 & 0xffffff00;
                }
                if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                  FUN_00d50b20();
                }
                local_90 = local_b0[2];
                if (local_90 != 0) {
                  FUN_00d50b00();
                }
                uVar14 = FUN_00d8ede0();
                lVar10 = local_88;
                if (local_80 == '\0') {
                  if (local_88 != 0) {
                    uVar14 = FUN_00d50b00();
                  }
                }
                else {
                  local_80 = '\0';
                }
                puVar7 = DAT_02773320;
                local_1e0 = 1;
                if (DAT_02773320 != (undefined8 *)0x0) {
                  uVar14 = FUN_00d50b00();
                }
                local_60 = puVar7;
                local_58 = local_58 & 0xffffff00;
                FUN_00ca0840(uVar14,&local_60);
                if (puVar7 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
                if (lVar10 != 0) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (local_88 != 0)) {
                  FUN_00d50b20();
                }
                uVar14 = FUN_00d8dcb0();
                iVar11 = param_1;
                if (0 < param_1) {
                  do {
                    uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
                    if ((local_290 != '\0') && (local_298 != 0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                }
                uVar14 = FUN_00d8cbf0(uVar14,6);
                local_e8 = local_60;
                local_e0 = 0;
                if ((char)local_58 == '\0') {
                  if (local_60 != (undefined8 *)0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                }
                else {
                  local_58 = local_58 & 0xffffff00;
                }
                local_e0 = '\x01';
                FUN_00ccdbb0(uVar14,&local_e8);
                if ((local_280 != '\0') && (local_288 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if (0 < *(int *)(local_90 + 0xc)) {
                  lVar10 = 0;
                  do {
                    FUN_00d8eb70();
                    lVar13 = *(longlong *)(*(longlong *)(local_90 + 0x10) + lVar10 * 8);
                    if (lVar13 != 0) {
                      FUN_00d50b00();
                    }
                    local_270 = 1;
                    local_278 = lVar13;
                    uVar14 = FUN_00ca2310();
                    lVar1 = local_88;
                    local_58 = 1;
                    local_60 = &DAT_024c5048;
                    local_48 = 0;
                    if (local_88 != 0) {
                      uVar14 = FUN_00d50b00();
                    }
                    local_50 = lVar1;
                    local_48 = '\x01';
                    uVar14 = FUN_00d94d80(uVar14,&local_60);
                    local_60 = &DAT_024c5048;
                    if ((local_48 != '\0') && (local_50 != 0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != 0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    if (lVar13 != 0) {
                      uVar14 = FUN_00d50b20();
                    }
                    iVar11 = param_1 + 1;
                    if (-1 < param_1) {
                      do {
                        uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
                        if ((local_260 != '\0') && (local_268 != 0)) {
                          uVar14 = FUN_00d50b20();
                        }
                        iVar11 = iVar11 + -1;
                      } while (iVar11 != 0);
                    }
                    uVar14 = FUN_00d8cbf0(uVar14,6);
                    puVar7 = local_60;
                    local_d0 = 0;
                    if ((char)local_58 == '\0') {
                      if (local_60 != (undefined8 *)0x0) {
                        uVar14 = FUN_00d50b00();
                      }
                    }
                    else {
                      local_58 = local_58 & 0xffffff00;
                    }
                    local_d0 = '\x01';
                    local_d8 = puVar7;
                    uVar14 = FUN_00ccdbb0(uVar14,&local_d8);
                    if ((local_250 != '\0') && (local_258 != 0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    if ((local_d0 != '\0') && (local_d8 != (undefined8 *)0x0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    local_248 = *unaff_RSI;
                    local_240 = 0;
                    lVar13 = *(longlong *)(*(longlong *)(local_90 + 0x10) + lVar10 * 8);
                    if (lVar13 != 0) {
                      uVar14 = FUN_00d50b00();
                    }
                    local_80 = '\0';
                    local_88 = lVar13;
                    FUN_00c9fe40(uVar14,&local_88);
                    puVar7 = local_60;
                    local_a8._0_1_ = (char)local_58;
                    puVar8 = &local_58;
                    if ((char)local_58 == '\0') {
                      puVar8 = (uint *)&local_a8;
                    }
                    *(undefined1 *)puVar8 = 0;
                    if (((char)local_58 != '\0') && (puVar7 != (undefined8 *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (((char)local_a8 == '\0') && (puVar7 != (undefined8 *)0x0)) {
                      FUN_00d50b00();
                    }
                    local_238 = puVar7;
                    local_230 = 1;
                    FUN_00ca2870(param_1 + 1,&local_238);
                    if (puVar7 != (undefined8 *)0x0) {
                      FUN_00d50b20();
                    }
                    if (lVar13 != 0) {
                      FUN_00d50b20();
                    }
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < *(int *)(local_90 + 0xc));
                }
                uVar14 = FUN_00d8dcb0();
                if (0 < param_1) {
                  do {
                    uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
                    if ((local_220 != '\0') && (local_228 != 0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    param_1 = param_1 + -1;
                  } while (param_1 != 0);
                }
                uVar14 = FUN_00d8cbf0(uVar14,6);
                local_c8 = local_60;
                local_c0 = 0;
                if ((char)local_58 == '\0') {
                  if (local_60 != (undefined8 *)0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                }
                else {
                  local_58 = local_58 & 0xffffff00;
                }
                local_c0 = '\x01';
                FUN_00ccdbb0(uVar14,&local_c8);
                if ((local_210 != '\0') && (local_218 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_90 != 0) {
                  FUN_00d50b20();
                }
                if (local_b0 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
                bVar4 = true;
                bVar3 = true;
              }
              else {
                local_70 = lVar10;
                FUN_00d50b00();
LAB_00ca387b:
                if (DAT_028a72e0 == '\0') {
                  (**(code **)(*plVar12 + 0x370))();
                  lVar10 = CONCAT71(local_a8._1_7_,(char)local_a8);
                  if (local_a0 == '\0') {
                    if (lVar10 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_a0 = '\0';
                  }
                  local_1f0 = 1;
                  uVar14 = FUN_00ca2310();
                  local_50 = local_88;
                  local_58 = 1;
                  local_60 = &DAT_024c5048;
                  local_48 = 0;
                  if (local_88 != 0) {
                    uVar14 = FUN_00d50b00();
                  }
                  local_48 = '\x01';
                  uVar14 = FUN_00d94d80(uVar14,&local_60);
                  local_60 = &DAT_024c5048;
                  if ((local_48 != '\0') && (local_50 != 0)) {
                    uVar14 = FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    uVar14 = FUN_00d50b20();
                  }
                  if (lVar10 != 0) {
                    uVar14 = FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
                    uVar14 = FUN_00d50b20();
                  }
                }
                else {
                  (**(code **)(*plVar12 + 0x368))();
                  lVar10 = CONCAT71(local_a8._1_7_,(char)local_a8);
                  if (local_a0 == '\0') {
                    if (lVar10 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_a0 = '\0';
                  }
                  local_200 = 1;
                  uVar14 = FUN_00ca2310();
                  local_50 = local_88;
                  local_58 = 1;
                  local_60 = &DAT_024c5048;
                  local_48 = 0;
                  if (local_88 != 0) {
                    uVar14 = FUN_00d50b00();
                  }
                  local_48 = '\x01';
                  uVar14 = FUN_00d94d80(uVar14,&local_60);
                  local_60 = &DAT_024c5048;
                  if ((local_48 != '\0') && (local_50 != 0)) {
                    uVar14 = FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    uVar14 = FUN_00d50b20();
                  }
                  if (lVar10 != 0) {
                    uVar14 = FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
                    uVar14 = FUN_00d50b20();
                  }
                }
                if (0 < param_1) {
                  do {
                    uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
                    if ((local_2b0 != '\0') && (local_2b8 != 0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    param_1 = param_1 + -1;
                  } while (param_1 != 0);
                }
                uVar14 = FUN_00d8cbf0(uVar14,6);
                local_f8 = local_60;
                local_f0 = 0;
                if ((char)local_58 == '\0') {
                  if (local_60 != (undefined8 *)0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                }
                else {
                  local_58 = local_58 & 0xffffff00;
                }
                local_f0 = '\x01';
                FUN_00ccdbb0(uVar14,&local_f8);
                if ((local_2a0 != '\0') && (local_2a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                bVar4 = false;
                bVar3 = false;
                local_40 = (longlong *)0x0;
              }
              bVar2 = true;
              if ((local_71 != '\0') && (bVar2 = true, !bVar4)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_00d50b00();
LAB_00ca37ac:
              uVar6 = FUN_00dd6e50();
              lVar13 = DAT_027816e8;
              switch(uVar6) {
              case 0x49:
              case 0x65:
              case 0x69:
                local_54 = FUN_00d45870();
                local_58 = 1;
                local_60 = &DAT_024cc6f0;
                uVar14 = FUN_00d94d80(&DAT_024cc6f0,&local_60);
                break;
              default:
                uVar14 = extraout_XMM0_Da;
                local_70 = lVar10;
                if (DAT_027816e8 != 0) {
                  uVar14 = FUN_00d50b00();
                }
                local_1c8 = lVar13;
                local_1c0 = '\x01';
                uVar14 = FUN_00cc7b40(uVar14,DAT_025908a0);
                if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                  uVar14 = FUN_00d50b20();
                }
                break;
              case 0x62:
                cVar5 = FUN_00d45ad0();
                if (cVar5 == '\0') {
                  uVar14 = FUN_00d8dcb0();
                }
                else {
                  uVar14 = FUN_00d8dcb0();
                }
                break;
              case 99:
                local_70 = lVar10;
                local_54 = FUN_00d45870();
                local_58 = 1;
                local_60 = &DAT_024cc6f0;
                uVar14 = FUN_00d94d80(&DAT_024cc6f0,&local_60);
                break;
              case 100:
                fVar15 = (float)FUN_00d459e0();
                if (NAN(fVar15)) {
                  local_70 = lVar10;
                  uVar14 = FUN_00d8db40();
                }
                else {
                  local_70 = lVar10;
                  local_54 = FUN_00d459e0();
                  local_58 = 1;
                  local_60 = &DAT_024d0b28;
                  uVar14 = FUN_00d94d80(local_54,&local_60);
                }
                break;
              case 0x66:
                fVar15 = (float)FUN_00d459e0();
                if (NAN(fVar15)) {
                  local_70 = lVar10;
                  uVar14 = FUN_00d8db40();
                }
                else {
                  local_70 = lVar10;
                  local_54 = FUN_00d459e0();
                  local_58 = 1;
                  local_60 = &DAT_024d0b28;
                  uVar14 = FUN_00d94d80(local_54,&local_60);
                }
                break;
              case 0x6c:
                local_70 = lVar10;
                local_50 = FUN_00d45790();
                local_58 = 1;
                local_60 = (undefined8 *)&DAT_024da828;
                uVar14 = FUN_00d94d80(&DAT_024da828,&local_60);
              }
              if (0 < param_1) {
                do {
                  uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
                  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
                    uVar14 = FUN_00d50b20();
                  }
                  param_1 = param_1 + -1;
                } while (param_1 != 0);
              }
              uVar14 = FUN_00d8cbf0(uVar14,6);
              local_108 = local_60;
              local_100 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (undefined8 *)0x0) {
                  uVar14 = FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_100 = '\x01';
              FUN_00ccdbb0(uVar14,&local_108);
              if ((local_2c0 != '\0') && (local_2c8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              bVar2 = false;
              bVar3 = false;
              local_40 = (longlong *)0x0;
            }
            bVar4 = true;
            if ((local_72 != '\0') && (!bVar2)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d50b00();
LAB_00ca3563:
            FUN_00d8db40();
            FUN_00c92910(0,0x7fffffff);
            local_128 = local_60;
            local_120 = 0;
            if ((char)local_58 == '\0') {
              if (local_60 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = local_58 & 0xffffff00;
            }
            local_120 = '\x01';
            FUN_00d8dbf0();
            if ((local_120 != '\0') && (local_128 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            uVar14 = FUN_00d8db40();
            if (0 < param_1) {
              do {
                uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
                if ((local_2f0 != '\0') && (local_2f8 != 0)) {
                  uVar14 = FUN_00d50b20();
                }
                param_1 = param_1 + -1;
              } while (param_1 != 0);
            }
            uVar14 = FUN_00d8cbf0(uVar14,6);
            local_118 = local_60;
            local_110 = 0;
            if ((char)local_58 == '\0') {
              if (local_60 != (undefined8 *)0x0) {
                uVar14 = FUN_00d50b00();
              }
            }
            else {
              local_58 = local_58 & 0xffffff00;
            }
            local_110 = '\x01';
            FUN_00ccdbb0(uVar14,&local_118);
            if ((local_2e0 != '\0') && (local_2e8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            bVar4 = false;
            bVar3 = false;
            local_40 = (longlong *)0x0;
          }
          bVar2 = true;
          if (((char)local_98 != '\0') && (!bVar4)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
LAB_00ca2f28:
          lVar10 = *(longlong *)(lVar10 + 0x10);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          local_98 = lVar10;
          uVar14 = FUN_00d8dcb0();
          iVar11 = param_1;
          if (0 < param_1) {
            do {
              uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
              if ((local_380 != '\0') && (local_388 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          uVar14 = FUN_00d8cbf0(uVar14,6);
          local_158 = local_60;
          local_150 = 0;
          if ((char)local_58 == '\0') {
            if (local_60 != (undefined8 *)0x0) {
              uVar14 = FUN_00d50b00();
            }
          }
          else {
            local_58 = local_58 & 0xffffff00;
          }
          lVar10 = local_98;
          local_150 = '\x01';
          FUN_00ccdbb0(uVar14,&local_158);
          if ((local_370 != '\0') && (local_378 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (0 < *(int *)(lVar10 + 0xc)) {
            local_90 = CONCAT44(local_90._4_4_,param_1 + 1);
            local_40 = (longlong *)0x0;
            do {
              FUN_00d8eb70();
              lVar10 = *(longlong *)(*(longlong *)(local_98 + 0x10) + (longlong)local_40 * 8);
              if (lVar10 != 0) {
                FUN_00d50b00();
              }
              local_360 = 1;
              local_368 = lVar10;
              uVar14 = FUN_00ca2310();
              lVar13 = local_88;
              local_58 = 1;
              local_60 = &DAT_024c5048;
              local_48 = 0;
              if (local_88 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_50 = lVar13;
              local_48 = '\x01';
              uVar14 = FUN_00d94d80(uVar14,&local_60);
              local_60 = &DAT_024c5048;
              if ((local_48 != '\0') && (local_50 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (lVar10 != 0) {
                uVar14 = FUN_00d50b20();
              }
              if (-1 < param_1) {
                iVar11 = (int)local_90;
                do {
                  uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
                  if ((local_350 != '\0') && (local_358 != 0)) {
                    uVar14 = FUN_00d50b20();
                  }
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              uVar14 = FUN_00d8cbf0(uVar14,6);
              puVar7 = local_60;
              local_140 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (undefined8 *)0x0) {
                  uVar14 = FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_140 = '\x01';
              local_148 = puVar7;
              uVar14 = FUN_00ccdbb0(uVar14,&local_148);
              if ((local_340 != '\0') && (local_348 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
              local_338 = *unaff_RSI;
              local_330 = 0;
              lVar10 = *(longlong *)(*(longlong *)(local_98 + 0x10) + (longlong)local_40 * 8);
              if (lVar10 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_80 = '\0';
              local_88 = lVar10;
              FUN_00c9fe40(uVar14,&local_88);
              puVar7 = local_60;
              local_a8._0_1_ = (char)local_58;
              puVar8 = &local_58;
              if ((char)local_58 == '\0') {
                puVar8 = (uint *)&local_a8;
              }
              *(undefined1 *)puVar8 = 0;
              if (((char)local_58 != '\0') && (puVar7 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_a8 == '\0') && (puVar7 != (undefined8 *)0x0)) {
                FUN_00d50b00();
              }
              local_328 = puVar7;
              local_320 = 1;
              FUN_00ca2870(local_90 & 0xffffffff,&local_328);
              if (puVar7 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              if (lVar10 != 0) {
                FUN_00d50b20();
              }
              local_40 = (longlong *)((longlong)local_40 + 1);
            } while ((longlong)local_40 < (longlong)*(int *)(local_98 + 0xc));
          }
          uVar14 = FUN_00d8dcb0();
          lVar10 = local_98;
          if (0 < param_1) {
            do {
              uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
              if ((local_310 != '\0') && (local_318 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              param_1 = param_1 + -1;
            } while (param_1 != 0);
          }
          uVar14 = FUN_00d8cbf0(uVar14,6);
          local_138 = local_60;
          local_130 = 0;
          if ((char)local_58 == '\0') {
            if (local_60 != (undefined8 *)0x0) {
              uVar14 = FUN_00d50b00();
            }
          }
          else {
            local_58 = local_58 & 0xffffff00;
          }
          local_130 = '\x01';
          FUN_00ccdbb0(uVar14,&local_138);
          if ((local_300 != '\0') && (local_308 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          bVar2 = false;
          bVar3 = false;
          local_40 = (longlong *)0x0;
        }
        bVar4 = true;
        plVar9 = local_40;
        if ((local_73 != '\0') && (!bVar2)) {
          FUN_00d50b20();
          plVar9 = local_40;
        }
      }
      else {
        FUN_00d50b00();
LAB_00ca2b7c:
        uVar14 = FUN_00d8dcb0();
        iVar11 = param_1;
        if (0 < param_1) {
          do {
            uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
            if ((local_3e0 != '\0') && (local_3e8 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        uVar14 = FUN_00d8cbf0(uVar14,6);
        local_178 = local_60;
        local_170 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (undefined8 *)0x0) {
            uVar14 = FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        local_170 = '\x01';
        FUN_00ccdbb0(uVar14,&local_178);
        if ((local_3d0 != '\0') && (local_3d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (0 < *(int *)(lVar10 + 0xc)) {
          lVar13 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar13 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            local_3b0 = 1;
            local_3b8 = lVar1;
            FUN_00ca2870(param_1 + 1,&local_3b8);
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(lVar10 + 0xc));
        }
        uVar14 = FUN_00d8dcb0();
        if (0 < param_1) {
          do {
            uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
            if ((local_3a0 != '\0') && (local_3a8 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            param_1 = param_1 + -1;
          } while (param_1 != 0);
        }
        uVar14 = FUN_00d8cbf0(uVar14,6);
        local_168 = local_60;
        local_160 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (undefined8 *)0x0) {
            uVar14 = FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        local_160 = '\x01';
        FUN_00ccdbb0(uVar14,&local_168);
        if ((local_390 != '\0') && (local_398 != 0)) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = false;
        bVar3 = false;
        plVar9 = (longlong *)0x0;
      }
      bVar2 = true;
      if ((local_74 != '\0') && (!bVar4)) {
        FUN_00d50b20();
      }
      goto LAB_00ca2acc;
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar14 = FUN_00ca2310();
  local_50 = local_88;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  local_48 = 0;
  if (local_88 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_48 = '\x01';
  uVar14 = FUN_00d94d80(uVar14,&local_60);
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if (0 < param_1) {
    do {
      uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))(1,"\t");
      if ((local_400 != '\0') && (local_408 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  uVar14 = FUN_00d8cbf0(uVar14,6);
  local_188 = local_60;
  local_180 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      uVar14 = FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_180 = '\x01';
  FUN_00ccdbb0(uVar14,&local_188);
  if ((local_3f0 != '\0') && (local_3f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  bVar2 = false;
  bVar3 = false;
  plVar9 = (longlong *)0x0;
LAB_00ca2acc:
  if ((local_75 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



