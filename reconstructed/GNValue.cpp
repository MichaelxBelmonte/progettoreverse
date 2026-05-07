// Reconstructed implementation of GNValue
// From MikeCore binary — reverse-engineered pseudocode

#include "GNValue.h"

// ============================================================
// @01c9dc20 — 11620 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c9dc20(double param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  pthread_key_t pVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  void *pvVar13;
  longlong **pplVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  int extraout_var;
  undefined4 in_ECX;
  pthread_key_t pVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar26;
  longlong lVar27;
  byte bVar28;
  bool bVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  double dVar32;
  char local_res8;
  longlong local_418;
  undefined1 local_410;
  longlong local_408;
  undefined1 local_400;
  longlong local_3f8;
  undefined1 local_3f0;
  longlong *local_3e8;
  undefined1 local_3e0;
  longlong *local_3d8;
  undefined1 local_3d0;
  longlong local_3c8;
  undefined1 local_3c0;
  longlong *local_3b8;
  undefined1 local_3b0;
  longlong *local_3a8;
  undefined1 local_3a0;
  longlong *local_398;
  undefined1 local_390;
  longlong local_388;
  undefined1 local_380;
  longlong local_378;
  undefined1 local_370;
  double local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  undefined1 local_340;
  longlong *local_338;
  longlong local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong *local_318;
  longlong local_310;
  char local_308;
  longlong local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  longlong local_2e0;
  char local_2d8;
  longlong local_2d0;
  char local_2c8;
  longlong *local_2c0;
  char local_2b8;
  longlong *local_2b0;
  char local_2a8;
  longlong *local_2a0;
  char local_298;
  longlong *local_290;
  char local_288;
  longlong *local_280;
  char local_278;
  longlong *local_270;
  char local_268;
  longlong *local_260;
  char local_258;
  longlong *local_250;
  char local_248;
  longlong *local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong *local_220;
  char local_218;
  longlong *local_210;
  char local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  double local_1b8;
  longlong *local_1b0;
  undefined4 local_1a4;
  longlong *local_1a0;
  longlong *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  longlong *local_168;
  byte local_14c;
  longlong *local_138;
  longlong *local_130;
  longlong *local_120;
  longlong *local_110;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_d8;
  double local_c0;
  double local_b8;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_88;
  char local_80;
  byte local_71;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    uVar25 = 0;
    goto LAB_01ca0943;
  }
  local_358 = param_3;
  local_318 = param_4;
  local_200 = param_2;
  local_1a4 = in_ECX;
  FUN_00d23310();
  plVar8 = local_68;
  pplVar26 = (longlong **)local_60;
  local_88 = (longlong *)CONCAT71(local_88._1_7_,local_60[0]);
  pplVar14 = pplVar26;
  if (local_60[0] == '\0') {
    pplVar14 = &local_88;
  }
  *(char *)pplVar14 = '\0';
  if ((local_60[0] != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific((pthread_key_t)pplVar26);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012eb770();
  plVar21 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_310 = *unaff_RSI;
  local_308 = '\0';
  uVar31 = FUN_012fc0c0();
  plVar8 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (longlong *)0x0) && (uVar31 = FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      uVar31 = FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_308 != '\0') && (local_310 != 0)) {
    uVar31 = FUN_00d50b20();
  }
  lVar19 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar19 != 0) {
    uVar31 = FUN_00d50b00();
  }
  uVar12 = FUN_01c99400(uVar31,0);
  if (lVar19 != 0) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar17 = local_68;
  pplVar26 = &local_40;
  if (local_60[0] != '\0') {
    pplVar26 = (longlong **)local_60;
  }
  local_40 = (longlong *)CONCAT71(local_40._1_7_,local_60[0]);
  *(undefined1 *)pplVar26 = 0;
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)((longlong)plVar17 + 0xc);
  if ((char)local_40 != '\0') {
    FUN_00d50b20();
  }
  if ((uVar12 == 1) && (1 < (int)uVar1)) {
    bVar5 = false;
    local_14c = 1;
    uVar12 = uVar1;
LAB_01c9dea9:
    if (plVar21 == (longlong *)0x0) {
      local_300 = *unaff_RSI;
      local_2f8 = '\0';
      FUN_012e8850();
      plVar17 = local_68;
      plVar21 = (longlong *)*unaff_RSI;
      if (plVar21 == local_68) {
        if (((char)unaff_RSI[1] != '\0') || (local_68 == (longlong *)0x0)) goto LAB_01c9df8c;
        if (local_60[0] == '\0') {
          FUN_00d50b00();
          goto LAB_01c9df87;
        }
LAB_01c9dfac:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_60[0] = '\0';
      }
      else {
        lVar19 = unaff_RSI[1];
        if (local_60[0] != '\0') {
          *unaff_RSI = (longlong)local_68;
          if (((char)lVar19 != '\0') && (plVar21 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c9dfac;
        }
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar17;
        if (((char)lVar19 != '\0') && (plVar21 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01c9df87:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01c9df8c:
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_2f8 != '\0') && (local_300 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d23310();
    plVar21 = local_68;
    local_88 = (longlong *)CONCAT71(local_88._1_7_,local_60[0]);
    pplVar26 = &local_88;
    pplVar14 = (longlong **)local_60;
    if (local_60[0] == '\0') {
      pplVar14 = pplVar26;
    }
    *(char *)pplVar14 = '\0';
    if ((local_60[0] != '\0') && (plVar21 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific((pthread_key_t)pplVar26);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    local_198 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (((char)local_88 != '\0') && (plVar21 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar19 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar19 != 0) {
      FUN_00d50b00();
    }
    local_410 = 1;
    local_408 = *unaff_RSI;
    local_400 = 0;
    plVar21 = &local_408;
    local_418 = lVar19;
    FUN_01c99560(plVar21,&local_418,local_res8);
    local_a8 = local_68;
    pVar20 = (pthread_key_t)plVar21;
    if ((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar19 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 == (longlong *)0x0) {
      uVar25 = 0;
    }
    else {
      uVar3 = (ulonglong)param_2 >> 0x20;
      if (uVar3 == 0) {
        if (local_res8 != '\0') {
          local_188 = 0;
          local_120 = (longlong *)0x0;
          goto LAB_01c9e250;
        }
        uVar25 = CONCAT71((int7)((ulonglong)local_a8 >> 8),1);
      }
      else {
        lVar19 = *(longlong *)(unaff_RDI + 0x38);
        if (lVar19 != 0) {
          FUN_00d50b00();
        }
        local_3f0 = 1;
        local_3f8 = lVar19;
        FUN_01ca1c50(local_res8,&local_3f8);
        local_120 = local_68;
        plVar21 = local_68;
        if (local_68 == (longlong *)0x0) {
          local_120 = (longlong *)0x0;
          local_188 = 0;
        }
        else if (local_60[0] == '\0') {
          uVar18 = FUN_00d50b00();
          local_188 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          local_188 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
        }
        pVar20 = (pthread_key_t)plVar21;
        if (lVar19 != 0) {
          FUN_00d50b20();
        }
        uVar25 = CONCAT71((int7)((ulonglong)lVar19 >> 8),local_120 != (longlong *)0x0);
        if ((local_120 != (longlong *)0x0) && (local_res8 != '\0')) {
LAB_01c9e250:
          puVar15 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar15 = &DAT_02572358;
          pcVar7 = DAT_02572370;
          (*DAT_02572370)();
          puVar16 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar16 = &DAT_02572358;
          (*pcVar7)();
          local_190 = puVar16;
          puVar16 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar16 = &DAT_02572358;
          uVar31 = (*pcVar7)();
          local_3e8 = local_a8;
          local_3e0 = 0;
          local_3d8 = local_198;
          local_3d0 = 0;
          local_178 = puVar16;
          FUN_01c9b940(uVar31,&local_3d8);
          local_1f8 = FUN_00e7bdb0();
          if (uVar3 == 0) {
            if (!NAN(param_1)) {
              lVar19 = local_a8[2];
              if (lVar19 != 0) {
                FUN_00d50b00();
              }
              local_2c8 = '\x01';
              local_2d0 = lVar19;
              FUN_01266770();
              pvVar13 = _pthread_getspecific(pVar20);
              if (pvVar13 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1b8 = (double)FUN_0125a280();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_2c8 != '\0') && (local_2d0 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01c9e653;
            }
            plVar21 = (longlong *)local_a8[5];
            local_1b8 = DAT_023908c8;
          }
          else {
            lVar19 = local_a8[2];
            if (lVar19 != 0) {
              FUN_00d50b00();
            }
            local_2e8 = '\x01';
            local_2f0 = lVar19;
            FUN_01266770();
            pvVar13 = _pthread_getspecific(pVar20);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar13 = _pthread_getspecific(pVar20);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar13 = _pthread_getspecific(pVar20);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_1f8 = FUN_01507970();
            uVar31 = extraout_XMM0_Da;
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              uVar31 = FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              uVar31 = FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              uVar31 = FUN_00d50b20();
            }
            if ((local_2e8 != '\0') && (local_2f0 != 0)) {
              uVar31 = FUN_00d50b20();
            }
            lVar19 = DAT_027ed440;
            if (DAT_027ed440 != 0) {
              uVar31 = FUN_00d50b00();
            }
            local_2e0 = lVar19;
            local_2d8 = '\x01';
            pplVar26 = &local_68;
            FUN_01cacbe0(uVar31,&local_2e0);
            plVar21 = local_68;
            if ((DAT_0270c850 == '\0') && (iVar24 = ___cxa_guard_acquire(), iVar24 != 0)) {
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
            if (plVar21 == (longlong *)0x0) {
LAB_01c9e4fa:
              pplVar26 = (longlong **)&DAT_02802688;
            }
            else {
              (**(code **)(*plVar21 + 0x360))();
              cVar10 = FUN_00e85ea0();
              if (cVar10 == '\0') goto LAB_01c9e4fa;
            }
            plVar21 = *pplVar26;
            if (*(char *)(pplVar26 + 1) == '\0') {
              if (plVar21 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar26 + 1) = 0;
            }
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2d8 != '\0') && (local_2e0 != 0)) {
              FUN_00d50b20();
            }
            local_1b8 = DAT_023908c8;
            if (plVar21 != (longlong *)0x0) {
              local_68 = (longlong *)FUN_00dd6320();
              FUN_00e7b820();
              FUN_00d50b20();
            }
LAB_01c9e653:
            plVar21 = (longlong *)local_a8[5];
          }
          if (plVar21 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_100 = plVar21;
          if (0 < (int)uVar12) {
            local_350 = (longlong *)(ulonglong)uVar12;
            local_1b0 = (longlong *)0x0;
            do {
              uVar31 = FUN_00c9fe20();
              plVar21 = local_68;
              local_88 = (longlong *)CONCAT71(local_88._1_7_,local_60[0]);
              pplVar26 = (longlong **)local_60;
              if (local_60[0] == '\0') {
                pplVar26 = &local_88;
              }
              *(char *)pplVar26 = '\0';
              if ((local_60[0] != '\0') && (plVar21 != (longlong *)0x0)) {
                uVar31 = FUN_00d50b20();
              }
              plVar17 = local_1b0;
              if (bVar5) {
                plVar17 = (longlong *)0x0;
              }
              plVar21 = *(longlong **)(plVar21[2] + (longlong)plVar17 * 8);
              local_1c8 = 0;
              if (plVar21 != (longlong *)0x0) {
                uVar31 = FUN_00d50b00();
              }
              local_1c8 = '\x01';
              local_1d0 = plVar21;
              FUN_00802d30(uVar31,&local_1d0);
              local_130 = local_40;
              if (local_40 == (longlong *)0x0) {
                bVar6 = true;
                local_130 = (longlong *)0x0;
              }
              else {
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  bVar6 = false;
                  if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01c9e7d4;
                  FUN_00d50b20();
                }
                else {
                  local_38 = '\0';
                }
                bVar6 = false;
              }
LAB_01c9e7d4:
              if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)local_88 != '\0') {
                FUN_00d50b20();
              }
              local_360 = (longlong *)0x0;
              if (local_14c == 0) {
                local_360 = local_1b0;
              }
              if (0 < *(int *)((longlong)local_130 + 0xc)) {
                local_71 = local_1b0 != (longlong *)0x0 & local_14c;
                lVar19 = 0;
                bVar28 = local_71;
                do {
                  local_330 = lVar19;
                  if ((lVar19 != 0 | bVar28) == 1) {
                    lVar19 = *(longlong *)(unaff_RDI + 0x38);
                    if (lVar19 != 0) {
                      FUN_00d50b00();
                    }
                    local_370 = 1;
                    local_3c8 = *unaff_RSI;
                    local_3c0 = 0;
                    local_378 = lVar19;
                    FUN_01c99560(&local_3c8,&local_378,1);
                    plVar21 = local_68;
                    if (local_68 == local_a8) {
                      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (local_60[0] == '\0') {
                      if (local_68 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      bVar29 = local_a8 != (longlong *)0x0;
                      local_a8 = plVar21;
                      if (bVar29) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      bVar29 = local_a8 != (longlong *)0x0;
                      local_a8 = plVar21;
                      if (bVar29) {
                        FUN_00d50b20();
                      }
                    }
                    if (lVar19 != 0) {
                      FUN_00d50b20();
                    }
                    local_3b0 = 0;
                    local_3a8 = local_198;
                    local_3a0 = 0;
                    local_3b8 = local_a8;
                    FUN_01c9b940();
                    plVar21 = (longlong *)local_a8[5];
                    if (plVar21 == (longlong *)0x0) {
                      if (local_100 != (longlong *)0x0) goto LAB_01c9e9cd;
                    }
                    else {
                      FUN_00d50b00();
                      if (plVar21 == local_100) {
                        FUN_00d50b20();
                      }
                      else {
LAB_01c9e9cd:
                        bVar29 = local_100 != (longlong *)0x0;
                        local_100 = plVar21;
                        if (bVar29) {
                          FUN_00d50b20();
                        }
                      }
                    }
                  }
                  plVar17 = *(longlong **)(local_130[2] + local_330 * 8);
                  if (plVar17 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_1f0 = plVar17;
                  FUN_00ca1380();
                  plVar21 = local_68;
                  local_40 = (longlong *)CONCAT71(local_40._1_7_,local_60[0]);
                  pplVar26 = (longlong **)local_60;
                  if (local_60[0] == '\0') {
                    pplVar26 = &local_40;
                  }
                  *(char *)pplVar26 = '\0';
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_70 = *(longlong **)(plVar21[2] + (longlong)local_360 * 8);
                  bVar29 = local_70 == (longlong *)0x0;
                  plVar22 = local_360;
                  if (bVar29) {
                  }
                  else {
                    FUN_00d50b00();
                  }
                  bVar29 = !bVar29;
                  if ((char)local_40 != '\0') {
                    FUN_00d50b20();
                  }
                  local_f8 = (longlong *)FUN_00e7bdb0();
                  if (uVar3 == 0) {
                    local_b8 = DAT_023908c8;
                    if (!NAN(param_1)) {
                      local_2b0 = local_70;
                      local_2a8 = '\0';
                      FUN_01266770();
                      pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      dVar32 = (double)FUN_0125a280();
                      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_2a8 != '\0') && (local_2b0 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_b8 = (dVar32 + param_1) - local_1b8;
                    }
                  }
                  else {
                    local_2c0 = local_70;
                    local_2b8 = '\0';
                    FUN_01266770();
                    pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0125e930();
                    pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0152ebe0();
                    pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_1c0 = (longlong *)FUN_01507970();
                    local_f8 = local_200;
                    FUN_00e7b820();
                    FUN_00e7b970();
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_b8 = DAT_023908c8;
                    if ((local_2b8 != '\0') && (local_2c0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                      local_b8 = DAT_023908c8;
                    }
                  }
                  local_1c0 = (longlong *)0x0;
                  local_320 = FUN_012f92d0();
                  local_170 = 0;
                  local_1e8 = FUN_00e7bcc0();
                  pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                  if (pvVar13 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012eb770();
                  plVar21 = local_68;
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  pVar20 = (pthread_key_t)plVar22;
                  local_a0 = plVar17;
                  if (plVar21 == (longlong *)0x0) {
                    local_d8 = (longlong *)0x0;
                    local_170 = 0;
                    plVar17 = (longlong *)0x0;
                  }
                  else {
                    if (plVar17 == (longlong *)0x0) {
                      local_d8 = (longlong *)0x0;
                      local_170 = 0;
                      if (uVar3 == 0) goto LAB_01c9ef21;
LAB_01c9ee06:
                      pvVar13 = _pthread_getspecific(pVar20);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      pVar20 = 4;
                      local_f8 = (longlong *)FUN_012f9380(4,local_320);
                      pvVar13 = _pthread_getspecific(pVar20);
                      plVar23 = local_d8;
                      if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                        plVar23 = (longlong *)
                                  local_d8[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                      }
                      FUN_00e7bcc0();
                      local_1e8 = FUN_012f9410();
                    }
                    else {
                      local_170 = 0;
                      uVar18 = FUN_00d50b00();
                      pVar20 = (pthread_key_t)plVar22;
                      local_170 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
                      local_1c0 = plVar17;
                      local_d8 = plVar17;
                      if (uVar3 != 0) goto LAB_01c9ee06;
LAB_01c9ef21:
                      pVar20 = (pthread_key_t)plVar22;
                      plVar23 = plVar21;
                      if (!NAN(param_1)) {
                        pvVar13 = _pthread_getspecific(pVar20);
                        if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                          plVar22 = local_d8;
                        }
                        pVar20 = (pthread_key_t)plVar22;
                        local_b8 = (double)FUN_012f8e60(SUB84(local_b8,0));
                      }
                    }
                    pvVar13 = _pthread_getspecific(pVar20);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012eb770();
                    plVar21 = local_68;
                    if (local_68 == plVar17) {
joined_r0x01c9f032:
                      plVar21 = plVar23;
                      if (local_60[0] != '\0') {
LAB_01c9f0a0:
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      if (local_60[0] == '\0') {
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        local_1f0 = plVar21;
                        if (plVar17 != (longlong *)0x0) {
                          FUN_00d50b20();
                          local_a0 = plVar21;
                          plVar23 = plVar21;
                          goto joined_r0x01c9f032;
                        }
                        local_a0 = plVar21;
                        if (local_60[0] == '\0') goto LAB_01c9f0b0;
                        goto LAB_01c9f0a0;
                      }
                      local_1f0 = local_68;
                      if (plVar17 == (longlong *)0x0) {
                        local_a0 = local_68;
                        plVar21 = plVar23;
                      }
                      else {
                        FUN_00d50b20();
                        local_a0 = plVar21;
                        plVar21 = plVar23;
                      }
                    }
                  }
LAB_01c9f0b0:
                  if ((*(char *)(unaff_RDI + 0x2c) == '\0') &&
                     (*(int *)((longlong)local_70 + 0xc) != 0)) {
                    pvVar13 = _pthread_getspecific(pVar20);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012f8840();
                    plVar21 = local_70;
                    local_2a0 = local_70;
                    local_298 = '\0';
                    FUN_00243390();
                    plVar22 = local_68;
                    if (local_68 == plVar21) {
joined_r0x01c9f5cc:
                      if (local_60[0] != '\0') {
LAB_01c9f613:
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      if (local_60[0] == '\0') {
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        bVar29 = true;
                        if (local_70 != (longlong *)0x0) {
                          FUN_00d50b20();
                          local_70 = plVar22;
                          goto joined_r0x01c9f5cc;
                        }
                        local_70 = plVar22;
                        if (local_60[0] == '\0') goto LAB_01c9f621;
                        goto LAB_01c9f613;
                      }
                      if (local_70 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      local_60[0] = '\0';
                      bVar29 = true;
                      local_70 = plVar22;
                    }
LAB_01c9f621:
                    if ((local_298 != '\0') && (local_2a0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pVar20 = 0;
                    if (local_70 == (longlong *)0x0) {
                      bVar11 = false;
                    }
                    else {
                      local_60[0] = '\0';
                      local_68 = (longlong *)0x0;
                      local_58 = local_70;
                      local_50 = 0xffffffff;
                      local_48 = 0;
                      bVar11 = false;
                      uVar12 = 0;
                      while( true ) {
                        if (uVar12 != 0) {
                          if ((int)uVar12 < 1) {
                            iVar24 = -uVar12;
                          }
                          else {
                            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar12);
                            FUN_00d23690(uVar12,uVar12);
                            local_48 = local_48 + local_50._4_4_;
                            iVar24 = 0;
                          }
                          local_50 = CONCAT44(iVar24,(int)local_50);
                        }
                        lVar19 = (longlong)(int)local_50;
                        iVar24 = (int)local_50 + 1;
                        local_50 = CONCAT44(local_50._4_4_,iVar24);
                        if (*(int *)((longlong)local_58 + 0xc) <= iVar24) break;
                        lVar27 = local_58[2];
                        local_68 = *(longlong **)(lVar27 + 8 + lVar19 * 8);
                        pvVar13 = _pthread_getspecific((pthread_key_t)lVar27);
                        pVar20 = (pthread_key_t)lVar27;
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0126ef70();
                        plVar22 = local_40;
                        plVar21 = local_88;
                        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar21 == plVar22) {
                          uVar12 = local_50._4_4_;
                        }
                        else {
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_01275420();
                          plVar21 = local_68;
                          pvVar13 = _pthread_getspecific(pVar20);
                          plVar22 = local_68;
                          if ((pvVar13 != (void *)0x0) &&
                             (lVar19 = FUN_00e8b990(), plVar21 = plVar22, lVar19 != 0)) {
                            plVar21 = (longlong *)
                                      plVar22[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                          }
                          FUN_0128dda0();
                          uVar12 = ~local_50._4_4_;
                          local_50 = CONCAT44(uVar12,(int)local_50);
                          bVar11 = true;
                        }
                      }
                      plVar22 = local_58;
                      FUN_001159b0();
                      pVar20 = (pthread_key_t)plVar22;
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    bVar11 = false;
                  }
                  plVar22 = local_70;
                  bVar28 = local_71;
                  if ((*(char *)(unaff_RDI + 0x2b) == '\0') &&
                     (plVar21 = local_70, *(int *)((longlong)local_70 + 0xc) != 0)) {
                    local_290 = local_70;
                    local_288 = '\0';
                    FUN_00243390();
                    plVar21 = local_68;
                    if (local_68 == plVar22) {
                      if (!bVar29) {
                        if (local_60[0] != '\0') goto LAB_01c9f866;
                        bVar29 = true;
                        FUN_00d50b00();
                      }
LAB_01c9fbeb:
                      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (local_60[0] == '\0') {
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        if (bVar29) {
                          FUN_00d50b20();
                          local_70 = plVar21;
                          bVar29 = true;
                        }
                        else {
                          local_70 = plVar21;
                          bVar29 = true;
                        }
                        goto LAB_01c9fbeb;
                      }
                      if (bVar29) {
                        FUN_00d50b20();
                        local_70 = plVar21;
                      }
                      else {
                        local_70 = local_68;
                      }
LAB_01c9f866:
                      local_60[0] = '\0';
                      bVar29 = true;
                    }
                    if ((local_288 != '\0') && (local_290 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_280 = local_70;
                    local_278 = '\0';
                    FUN_01266770();
                    plVar22 = local_68;
                    if (local_60[0] == '\0') {
                      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0'))
                         && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_60[0] = '\0';
                    }
                    if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pvVar13 = _pthread_getspecific(pVar20);
                    pVar2 = (pthread_key_t)plVar22;
                    if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                      pVar20 = pVar2;
                    }
                    FUN_0125e930();
                    pvVar13 = _pthread_getspecific(pVar20);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0152ebe0();
                    plVar21 = local_68;
                    pvVar13 = _pthread_getspecific(pVar20);
                    plVar23 = local_68;
                    if ((pvVar13 != (void *)0x0) &&
                       (lVar19 = FUN_00e8b990(), plVar21 = plVar23, lVar19 != 0)) {
                      plVar21 = (longlong *)plVar23[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                    }
                    local_1e0 = FUN_01507970();
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_68 = local_f8;
                    FUN_00e7b970();
                    local_338 = local_68;
                    pvVar13 = _pthread_getspecific(pVar20);
                    if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                      pVar20 = pVar2;
                    }
                    dVar32 = (double)FUN_0125a280();
                    if (local_70 != (longlong *)0x0) {
                      local_368 = local_b8 - dVar32;
                      local_60[0] = '\0';
                      local_68 = (longlong *)0x0;
                      local_58 = local_70;
                      local_50 = 0xffffffff;
                      local_48 = 0;
                      local_1a0 = local_d8;
                      local_168 = local_d8;
                      local_138 = local_d8;
                      local_180 = local_d8;
                      plVar23 = local_d8;
                      local_328 = local_d8;
                      local_110 = local_d8;
                      while( true ) {
                        lVar19 = (longlong)(int)local_50;
                        iVar24 = (int)local_50 + 1;
                        local_50 = CONCAT44(local_50._4_4_,iVar24);
                        if (*(int *)((longlong)local_58 + 0xc) <= iVar24) break;
                        lVar27 = local_58[2];
                        local_68 = *(longlong **)(lVar27 + 8 + lVar19 * 8);
                        FUN_00e7bcc0();
                        pVar20 = (pthread_key_t)lVar27;
                        if (uVar3 == 0) {
                          if (!NAN(param_1)) {
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            local_c0 = (double)FUN_01259650();
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            dVar32 = (double)FUN_012f75b0();
                            local_c0 = local_c0 + local_368;
                            if (dVar32 <= local_c0) {
                              pvVar13 = _pthread_getspecific(pVar20);
                              if ((pvVar13 != (void *)0x0) &&
                                 (lVar19 = FUN_00e8b990(), local_180 = plVar23, lVar19 != 0)) {
                                local_180 = (longlong *)
                                            plVar23[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                              }
                              local_1d8 = (double)FUN_012f75b0();
                              pvVar13 = _pthread_getspecific(pVar20);
                              if (pvVar13 != (void *)0x0) {
                                lVar19 = FUN_00e8b990();
                                if (lVar19 == 0) {
                                  local_138 = local_110;
                                }
                                else {
                                  local_138 = local_110;
                                }
                              }
                              dVar32 = (double)FUN_012f7690();
                              local_180 = local_138;
                              plVar23 = local_138;
                              if (local_c0 < local_1d8 + dVar32) goto LAB_01ca0490;
                            }
                            goto LAB_01ca0645;
                          }
LAB_01ca0215:
                          local_c0 = 0.0;
LAB_01ca0490:
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          uVar31 = FUN_0125a2c0();
                          local_1d8 = (double)CONCAT44(local_1d8._4_4_,uVar31);
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_0125e7c0();
                          plVar21 = local_88;
                          if (local_80 == '\0') {
                            if (local_88 != (longlong *)0x0) {
                              FUN_00d50b00();
                            }
                          }
                          else {
                            local_80 = '\0';
                          }
                          local_340 = 1;
                          local_348 = plVar21;
                          local_398 = local_a0;
                          local_390 = 0;
                          pVar20 = (pthread_key_t)&local_398;
                          FUN_01c925b0(SUB84(local_c0,0),(ulonglong)local_1d8 & 0xffffffff);
                          plVar9 = local_40;
                          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
                            FUN_00d50b00();
                          }
                          if (plVar21 != (longlong *)0x0) {
                            FUN_00d50b20();
                          }
                          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          local_38 = '\0';
                          local_40 = plVar9;
                          uVar12 = FUN_00d23d70();
                          plVar21 = (longlong *)(ulonglong)uVar12;
                          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((char)uVar12 == '\0') {
                            local_38 = '\0';
                            local_40 = plVar9;
                            FUN_00d21140();
                            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          if (plVar9 != (longlong *)0x0) {
                            FUN_00d50b20();
                          }
                          if ((char)uVar12 != '\0') goto LAB_01ca0645;
                          bVar30 = local_50 < 0;
                          uVar12 = local_50._4_4_;
                        }
                        else {
                          if ((char)local_1a4 == '\0') {
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            FUN_0125e930();
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            FUN_0152ebe0();
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            FUN_01507970();
                            FUN_00e7b820();
                            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            goto LAB_01ca0215;
                          }
                          pvVar13 = _pthread_getspecific(pVar20);
                          local_110 = local_328;
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_0125e930();
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_0152ebe0();
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_01507970();
                          FUN_00e7b820();
                          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 == (void *)0x0) {
                            local_110 = local_168;
                          }
                          else {
                            lVar19 = FUN_00e8b990();
                            if (lVar19 == 0) {
                            }
                            else {
                            }
                          }
                          local_168 = local_110;
                          local_40 = (longlong *)FUN_012f9540();
                          if (((extraout_var == 0) || ((ulonglong)local_40 >> 0x20 == 0)) ||
                             (cVar10 = FUN_00e7c020(), cVar10 == '\0')) {
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                              local_1a0 = local_d8;
                            }
                            plVar23 = local_1a0;
                            local_88 = (longlong *)FUN_012f96f0();
                            local_110 = plVar23;
                            local_328 = plVar23;
                            if ((extraout_var == 0) || ((ulonglong)local_88 >> 0x20 == 0)) {
                              local_c0 = 0.0;
                              local_168 = local_1a0;
                              local_138 = local_1a0;
                              local_180 = local_1a0;
                            }
                            else {
                              cVar10 = FUN_00e7c020();
                              local_c0 = 0.0;
                              local_168 = local_1a0;
                              local_138 = local_1a0;
                              local_180 = local_1a0;
                              if (cVar10 == '\0') goto LAB_01ca0645;
                            }
                            goto LAB_01ca0490;
                          }
                          local_138 = local_168;
                          local_180 = local_168;
                          plVar23 = local_110;
LAB_01ca0645:
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_01275420();
                          plVar21 = local_68;
                          pvVar13 = _pthread_getspecific(pVar20);
                          plVar9 = local_68;
                          if ((pvVar13 != (void *)0x0) &&
                             (lVar19 = FUN_00e8b990(), plVar21 = plVar9, lVar19 != 0)) {
                            plVar21 = (longlong *)
                                      plVar9[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                          }
                          FUN_0128dda0();
                          lVar19 = local_50;
                          uVar12 = ~local_50._4_4_;
                          local_50 = CONCAT44(uVar12,(int)local_50);
                          bVar11 = true;
                          bVar30 = -1 < lVar19;
                        }
                        if (uVar12 != 0) {
                          if (uVar12 == 0 || bVar30) {
                            iVar24 = -uVar12;
                          }
                          else {
                            local_50._4_4_ = (uint)((ulonglong)local_50 >> 0x20);
                            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar12);
                            FUN_00d23690();
                            local_48 = local_48 + local_50._4_4_;
                            iVar24 = 0;
                          }
                          local_50 = CONCAT44(iVar24,(int)local_50);
                        }
                      }
                      plVar23 = local_58;
                      FUN_001159b0();
                      pVar20 = (pthread_key_t)plVar23;
                    }
                    bVar28 = local_71;
                    if (plVar22 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  if (((bVar11) && (local_70 != (longlong *)0x0)) &&
                     (*(int *)((longlong)local_70 + 0xc) != 0)) {
                    if (uVar3 == 0) {
                      if (!NAN(param_1)) {
                        local_260 = local_70;
                        local_258 = '\0';
                        FUN_01266770();
                        plVar21 = local_68;
                        pvVar13 = _pthread_getspecific(pVar20);
                        plVar22 = local_68;
                        if ((pvVar13 != (void *)0x0) &&
                           (lVar19 = FUN_00e8b990(), plVar21 = plVar22, lVar19 != 0)) {
                          plVar21 = (longlong *)
                                    plVar22[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                        }
                        dVar32 = (double)FUN_0125a280();
                        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        local_b8 = (dVar32 + param_1) - local_1b8;
                        if (local_d8 != (longlong *)0x0) {
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          uVar12 = FUN_012f8e60(SUB84(local_b8,0));
                          local_b8 = (double)(ulonglong)uVar12;
                        }
                      }
                    }
                    else {
                      local_270 = local_70;
                      local_268 = '\0';
                      FUN_01266770();
                      pvVar13 = _pthread_getspecific(pVar20);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0125e930();
                      pvVar13 = _pthread_getspecific(pVar20);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0152ebe0();
                      plVar21 = local_68;
                      pvVar13 = _pthread_getspecific(pVar20);
                      plVar22 = local_68;
                      if ((pvVar13 != (void *)0x0) &&
                         (lVar19 = FUN_00e8b990(), plVar21 = plVar22, lVar19 != 0)) {
                        plVar21 = (longlong *)
                                  plVar22[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                      }
                      local_1e0 = FUN_01507970();
                      local_f8 = local_200;
                      FUN_00e7b820();
                      FUN_00e7b970();
                      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_268 != '\0') && (local_270 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (local_d8 != (longlong *)0x0) {
                        pvVar13 = _pthread_getspecific(pVar20);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        pVar20 = 4;
                        local_f8 = (longlong *)FUN_012f9380(4,local_320);
                        pvVar13 = _pthread_getspecific(pVar20);
                        plVar21 = local_d8;
                        if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                          plVar21 = (longlong *)
                                    local_d8[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                        }
                        FUN_00e7bcc0();
                        local_1e8 = FUN_012f9410();
                      }
                    }
                  }
                  if ((local_70 != (longlong *)0x0) && (*(int *)((longlong)local_70 + 0xc) != 0)) {
                    if (uVar3 == 0) {
                      if (!NAN(param_1)) {
                        pvVar13 = _pthread_getspecific(pVar20);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        local_220 = local_70;
                        local_218 = '\0';
                        FUN_012ee5e0(SUB84(local_b8,0),DAT_023908c8);
                        if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      pvVar13 = _pthread_getspecific(pVar20);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      local_250 = local_70;
                      local_248 = '\0';
                      local_240 = local_120;
                      local_238 = '\0';
                      local_68 = local_358;
                      FUN_00e7bac0();
                      local_230 = 0;
                      local_228 = '\0';
                      FUN_012ef510(local_f8,&local_240,(char)local_1a4,local_68);
                      if ((local_228 != '\0') && (local_230 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_248 != '\0') && (local_250 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    pplVar26 = &local_1c0;
                    if (local_d8 == (longlong *)0x0) {
                      pplVar26 = &local_1f0;
                    }
                    local_68 = *pplVar26;
                    local_60[0] = '\0';
                    FUN_00d21140();
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_68 = local_70;
                    local_60[0] = '\0';
                    FUN_00d21140();
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (((char)local_170 != '\0') && (plVar17 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((bVar29) && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_a0 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  lVar19 = local_330 + 1;
                } while (lVar19 < *(int *)((longlong)local_130 + 0xc));
              }
              if (!bVar6) {
                FUN_00d50b20();
              }
              local_1b0 = (longlong *)((longlong)local_1b0 + 1);
            } while (local_1b0 != local_350);
          }
          lVar19 = *local_318;
          if ((lVar19 != 0) && (0 < *(int *)((longlong)puVar15 + 0xc))) {
            lVar27 = 1;
            while( true ) {
              lVar4 = *(longlong *)(puVar15[2] + -8 + lVar27 * 8);
              if (lVar4 != 0) {
                FUN_00d50b00();
              }
              local_380 = 1;
              plVar21 = *(longlong **)(local_190[2] + -8 + lVar27 * 8);
              local_388 = lVar4;
              if (plVar21 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_208 = '\x01';
              local_210 = plVar21;
              uVar31 = FUN_01c9d710(&local_210,&local_388);
              plVar17 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  uVar31 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_68 = plVar17;
              local_60[0] = '\0';
              FUN_00d214d0(uVar31,*(undefined4 *)(lVar19 + 0xc));
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar17 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (lVar4 != 0) {
                FUN_00d50b20();
              }
              if (*(int *)((longlong)puVar15 + 0xc) <= lVar27) break;
              lVar19 = *local_318;
              lVar27 = lVar27 + 1;
            }
          }
          if (local_100 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_178 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (local_190 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          uVar25 = CONCAT71((int7)((ulonglong)plVar21 >> 8),1);
          if (puVar15 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (((char)local_188 != '\0') && (local_120 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_198 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if ((1 < (int)uVar12) && (uVar1 == 1)) {
      local_14c = 0;
      bVar5 = true;
      goto LAB_01c9dea9;
    }
    bVar5 = false;
    local_14c = 0;
    uVar25 = 0;
    if (uVar12 == uVar1) goto LAB_01c9dea9;
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01ca0943:
  return uVar25 & 0xffffffff;
}




// ============================================================
// @01b68f20 — 10768 bytes
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b68f20(undefined8 param_1,undefined8 param_2)

{
  longlong ******pppppplVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *******ppppppplVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  void *pvVar12;
  longlong *plVar13;
  char *pcVar14;
  ulonglong uVar15;
  pthread_key_t pVar16;
  longlong *******in_RCX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *******ppppppplVar17;
  longlong *******ppppppplVar18;
  longlong *******ppppppplVar19;
  float fVar20;
  float extraout_XMM0_Da;
  undefined4 uVar21;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  double dVar25;
  float extraout_XMM0_Db_01;
  undefined8 uVar26;
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  float fVar32;
  double dVar33;
  undefined4 in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_378;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  float local_328;
  float fStack_324;
  longlong ******local_318;
  char local_310;
  longlong *******local_308;
  char local_300;
  longlong ******local_2f8;
  char local_2f0;
  longlong ******local_2e8;
  char local_2e0;
  longlong *******local_2d8;
  char local_2d0;
  longlong ******local_2c8;
  char local_2c0;
  longlong *******local_2b8;
  char local_2b0;
  longlong *******local_2a8;
  char local_2a0;
  longlong ******local_298;
  char local_290;
  longlong local_288;
  char local_280;
  longlong ******local_278;
  char local_270;
  longlong *******local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong *******local_248;
  char local_240;
  undefined1 local_238 [16];
  float local_228;
  undefined4 uStack_224;
  longlong *******local_210;
  char local_208;
  longlong *******local_200;
  char local_1f8;
  longlong *******local_1f0;
  char local_1e8;
  longlong *******local_1e0;
  longlong *******local_1d8;
  char local_1d0;
  longlong *******local_1c8;
  char local_1c0;
  longlong *******local_1b8;
  char local_1b0;
  longlong *******local_1a8;
  char local_1a0;
  longlong *******local_198;
  char local_190;
  longlong *******local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong ******local_168;
  char local_160;
  longlong *******local_158;
  char local_150;
  longlong *******local_148;
  char local_140;
  longlong *******local_138;
  longlong *******local_130;
  undefined1 local_128 [16];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong ******local_d0;
  char local_c8;
  undefined4 local_c0;
  int iStack_bc;
  char local_b8;
  longlong *******local_b0;
  char local_a8 [8];
  longlong local_a0;
  char local_98;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  undefined4 local_60;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *******local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_03;
  
  local_328 = (float)param_2;
  fStack_324 = (float)((ulonglong)param_2 >> 0x20);
  local_228 = (float)param_1;
  uStack_224 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((DAT_028b5430 == (longlong *******)0x0) || (DAT_028b5439 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b5430 == (longlong *******)0x0) {
      FUN_01cfc6a0();
      local_d8 = 0;
      FUN_01cfc6a0();
      local_d4 = 0x3e99999a;
      FUN_01cfc6a0();
      local_e8 = local_d0;
      FUN_01a01f50(&local_e8,&local_d8,&local_d4,&local_110);
      local_b0 = (longlong *******)&DAT_026b2470;
      local_60 = 0x3f800000;
      FUN_01f7b9d0();
      ppppppplVar17 = DAT_028b5430;
      if (DAT_028b5430 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *******)0x0) {
            ppppppplVar17 = (longlong *******)0x0;
          }
          else {
            FUN_00d50b00();
            ppppppplVar17 = local_40;
          }
        }
        else {
          local_38 = '\0';
          ppppppplVar17 = local_40;
        }
        bVar9 = DAT_028b5430 != (longlong *******)0x0;
        DAT_028b5430 = ppppppplVar17;
        if (bVar9) {
          FUN_00d50b20();
          ppppppplVar17 = local_40;
        }
      }
      if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5438 == '\0')) {
        DAT_028b5438 = '\x01';
        FUN_00e8cb90();
        ppppppplVar17 = local_40;
      }
      if ((local_38 != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_02628b38;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_024f9300;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_024c5048;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT44(iStack_bc,local_c0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0();
      local_d8 = 0;
      FUN_01cfc6a0();
      local_d4 = 0x3e99999a;
      FUN_01cfc6a0();
      local_e8 = local_d0;
      FUN_01a01f50(&local_e8,&local_d8,&local_d4,&local_110);
      local_b0 = (longlong *******)&DAT_026b2470;
      local_60 = 0x3f800000;
      FUN_01f7b9d0();
      ppppppplVar17 = DAT_028b5440;
      if (DAT_028b5440 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *******)0x0) {
            ppppppplVar17 = (longlong *******)0x0;
          }
          else {
            FUN_00d50b00();
            ppppppplVar17 = local_40;
          }
        }
        else {
          local_38 = '\0';
          ppppppplVar17 = local_40;
        }
        bVar9 = DAT_028b5440 != (longlong *******)0x0;
        DAT_028b5440 = ppppppplVar17;
        if (bVar9) {
          FUN_00d50b20();
          ppppppplVar17 = local_40;
        }
      }
      if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5448 == '\0')) {
        DAT_028b5448 = '\x01';
        FUN_00e8cb90();
        ppppppplVar17 = local_40;
      }
      if ((local_38 != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_02628b38;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_024f9300;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_024c5048;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT44(iStack_bc,local_c0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0();
      local_d8 = 0;
      FUN_01cfc6a0();
      local_d4 = 0x3e99999a;
      FUN_01cfc6a0();
      local_f0 = CONCAT71(uStack_4f,local_50);
      local_e8 = local_d0;
      local_110._4_4_ = iStack_bc;
      in_RCX = (longlong *******)&local_e8;
      FUN_01a01f50(in_RCX,&local_d8,&local_d4,&local_110);
      local_b0 = (longlong *******)&DAT_026b2470;
      local_60 = 0x3f800000;
      FUN_01f7b9d0();
      ppppppplVar17 = DAT_028b5450;
      if (DAT_028b5450 != local_40) {
        in_RCX = DAT_028b5450;
        if (local_38 == '\0') {
          if (local_40 == (longlong *******)0x0) {
            ppppppplVar17 = (longlong *******)0x0;
          }
          else {
            FUN_00d50b00();
            ppppppplVar17 = local_40;
            in_RCX = DAT_028b5450;
          }
        }
        else {
          local_38 = '\0';
          ppppppplVar17 = local_40;
        }
        DAT_028b5450 = ppppppplVar17;
        if (in_RCX != (longlong *******)0x0) {
          FUN_00d50b20();
          ppppppplVar17 = local_40;
        }
      }
      if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5458 == '\0')) {
        DAT_028b5458 = '\x01';
        FUN_00e8cb90();
        ppppppplVar17 = local_40;
      }
      if ((local_38 != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_02628b38;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_024f9300;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (longlong *******)&DAT_024c5048;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT44(iStack_bc,local_c0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0();
      ppppppplVar17 = DAT_028b5430;
      if (DAT_028b5430 != local_b0) {
        in_RCX = DAT_028b5430;
        if (local_a8[0] == '\0') {
          if (local_b0 == (longlong *******)0x0) {
            ppppppplVar17 = (longlong *******)0x0;
          }
          else {
            FUN_00d50b00();
            ppppppplVar17 = local_b0;
            in_RCX = DAT_028b5430;
          }
        }
        else {
          local_a8[0] = '\0';
          ppppppplVar17 = local_b0;
        }
        DAT_028b5430 = ppppppplVar17;
        if (in_RCX != (longlong *******)0x0) {
          FUN_00d50b20();
          ppppppplVar17 = local_b0;
        }
      }
      if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5438 == '\0')) {
        DAT_028b5438 = '\x01';
        FUN_00e8cb90();
        ppppppplVar17 = local_b0;
      }
      if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0();
      ppppppplVar17 = DAT_028b5440;
      if (DAT_028b5440 != local_b0) {
        in_RCX = DAT_028b5440;
        if (local_a8[0] == '\0') {
          if (local_b0 == (longlong *******)0x0) {
            ppppppplVar17 = (longlong *******)0x0;
          }
          else {
            FUN_00d50b00();
            ppppppplVar17 = local_b0;
            in_RCX = DAT_028b5440;
          }
        }
        else {
          local_a8[0] = '\0';
          ppppppplVar17 = local_b0;
        }
        DAT_028b5440 = ppppppplVar17;
        if (in_RCX != (longlong *******)0x0) {
          FUN_00d50b20();
          ppppppplVar17 = local_b0;
        }
      }
      if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5448 == '\0')) {
        DAT_028b5448 = '\x01';
        FUN_00e8cb90();
        ppppppplVar17 = local_b0;
      }
      if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0();
      ppppppplVar17 = DAT_028b5450;
      if (DAT_028b5450 != local_b0) {
        in_RCX = DAT_028b5450;
        if (local_a8[0] == '\0') {
          if (local_b0 == (longlong *******)0x0) {
            ppppppplVar17 = (longlong *******)0x0;
          }
          else {
            FUN_00d50b00();
            ppppppplVar17 = local_b0;
            in_RCX = DAT_028b5450;
          }
        }
        else {
          local_a8[0] = '\0';
          ppppppplVar17 = local_b0;
        }
        DAT_028b5450 = ppppppplVar17;
        if (in_RCX != (longlong *******)0x0) {
          FUN_00d50b20();
          ppppppplVar17 = local_b0;
        }
      }
      if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5458 == '\0')) {
        DAT_028b5458 = '\x01';
        FUN_00e8cb90();
        ppppppplVar17 = local_b0;
      }
      if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      ppppppplVar17 = (longlong *******)&local_b0;
      (**(code **)(*unaff_RDI + 0x640))();
      ppppppplVar19 = local_b0;
      FUN_00209700();
      if (ppppppplVar19 == (longlong *******)0x0) {
LAB_01b6984b:
        ppppppplVar17 = (longlong *******)&DAT_02802688;
      }
      else {
        (*(code *)(*ppppppplVar19)[0x6c])();
        cVar10 = FUN_00e85ea0();
        if (cVar10 == '\0') goto LAB_01b6984b;
      }
      pppppplVar1 = *ppppppplVar17;
      if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppplVar1 != (longlong ******)0x0) {
        (**(code **)(*unaff_RDI + 0x640))();
        ppppppplVar18 = local_b0;
        ppppppplVar19 = DAT_028b5450;
        ppppppplVar17 = (longlong *******)local_b0[0x1a];
        if (DAT_028b5450 != ppppppplVar17) {
          if (ppppppplVar17 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
          DAT_028b5450 = ppppppplVar17;
          if (ppppppplVar19 != (longlong *******)0x0) {
            FUN_00d50b20();
          }
          ppppppplVar17 = (longlong *******)ppppppplVar18[0x1a];
        }
        if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5458 == '\0')) {
          DAT_028b5458 = '\x01';
          FUN_00e8cb90();
        }
        if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x640))();
      (*(code *)(*local_40)[0x73])();
      ppppppplVar17 = DAT_028b5430;
      if (DAT_028b5430 != local_b0) {
        in_RCX = DAT_028b5430;
        if (local_a8[0] == '\0') {
          if (local_b0 == (longlong *******)0x0) {
            ppppppplVar17 = (longlong *******)0x0;
          }
          else {
            FUN_00d50b00();
            ppppppplVar17 = local_b0;
            in_RCX = DAT_028b5430;
          }
        }
        else {
          local_a8[0] = '\0';
          ppppppplVar17 = local_b0;
        }
        DAT_028b5430 = ppppppplVar17;
        if (in_RCX != (longlong *******)0x0) {
          FUN_00d50b20();
          ppppppplVar17 = local_b0;
        }
      }
      if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5438 == '\0')) {
        DAT_028b5438 = '\x01';
        FUN_00e8cb90();
        ppppppplVar17 = local_b0;
      }
      if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0();
      ppppppplVar17 = DAT_028b5440;
      if (DAT_028b5440 != local_b0) {
        in_RCX = DAT_028b5440;
        if (local_a8[0] == '\0') {
          if (local_b0 == (longlong *******)0x0) {
            ppppppplVar17 = (longlong *******)0x0;
          }
          else {
            FUN_00d50b00();
            ppppppplVar17 = local_b0;
            in_RCX = DAT_028b5440;
          }
        }
        else {
          local_a8[0] = '\0';
          ppppppplVar17 = local_b0;
        }
        DAT_028b5440 = ppppppplVar17;
        if (in_RCX != (longlong *******)0x0) {
          FUN_00d50b20();
          ppppppplVar17 = local_b0;
        }
      }
      if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5448 == '\0')) {
        DAT_028b5448 = '\x01';
        FUN_00e8cb90();
        ppppppplVar17 = local_b0;
      }
      if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      DAT_028b5439 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b5439 = '\x01';
      FUN_00e8cb70();
    }
  }
  (**(code **)(*unaff_RDI + 0x978))();
  ppppppplVar17 = local_b0;
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar17 != (longlong *******)0x0) {
    (**(code **)(*unaff_RDI + 0x978))();
    (**(code **)(&UNK_00001510 + *(longlong *)CONCAT71(uStack_4f,local_50)))();
    local_1d8 = local_40;
    local_1d0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1d0 = '\x01';
    FUN_01cfd130();
    ppppppplVar17 = DAT_028b5430;
    if (DAT_028b5430 != local_b0) {
      in_RCX = DAT_028b5430;
      if (local_a8[0] == '\0') {
        if (local_b0 == (longlong *******)0x0) {
          ppppppplVar17 = (longlong *******)0x0;
        }
        else {
          FUN_00d50b00();
          ppppppplVar17 = local_b0;
          in_RCX = DAT_028b5430;
        }
      }
      else {
        local_a8[0] = '\0';
        ppppppplVar17 = local_b0;
      }
      DAT_028b5430 = ppppppplVar17;
      if (in_RCX != (longlong *******)0x0) {
        FUN_00d50b20();
        ppppppplVar17 = local_b0;
      }
    }
    if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5438 == '\0')) {
      DAT_028b5438 = '\x01';
      FUN_00e8cb90();
      ppppppplVar17 = local_b0;
    }
    if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x978))();
    (**(code **)(&UNK_00001518 + *(longlong *)CONCAT71(uStack_4f,local_50)))();
    local_1c8 = local_40;
    local_1c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1c0 = '\x01';
    FUN_01cfd130();
    ppppppplVar17 = DAT_028b5440;
    if (DAT_028b5440 != local_b0) {
      in_RCX = DAT_028b5440;
      if (local_a8[0] == '\0') {
        if (local_b0 == (longlong *******)0x0) {
          ppppppplVar17 = (longlong *******)0x0;
        }
        else {
          FUN_00d50b00();
          ppppppplVar17 = local_b0;
          in_RCX = DAT_028b5440;
        }
      }
      else {
        local_a8[0] = '\0';
        ppppppplVar17 = local_b0;
      }
      DAT_028b5440 = ppppppplVar17;
      if (in_RCX != (longlong *******)0x0) {
        FUN_00d50b20();
        ppppppplVar17 = local_b0;
      }
    }
    if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5448 == '\0')) {
      DAT_028b5448 = '\x01';
      FUN_00e8cb90();
      ppppppplVar17 = local_b0;
    }
    if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1c0 != '\0') && (local_1c8 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
  }
  cVar10 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar10 == '\0') {
    FUN_01cfc6a0();
    ppppppplVar17 = DAT_028b5430;
    if (DAT_028b5430 != local_b0) {
      in_RCX = DAT_028b5430;
      if (local_a8[0] == '\0') {
        if (local_b0 == (longlong *******)0x0) {
          ppppppplVar17 = (longlong *******)0x0;
        }
        else {
          FUN_00d50b00();
          ppppppplVar17 = local_b0;
          in_RCX = DAT_028b5430;
        }
      }
      else {
        local_a8[0] = '\0';
        ppppppplVar17 = local_b0;
      }
      DAT_028b5430 = ppppppplVar17;
      if (in_RCX != (longlong *******)0x0) {
        FUN_00d50b20();
        ppppppplVar17 = local_b0;
      }
    }
    if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5438 == '\0')) {
      DAT_028b5438 = '\x01';
      FUN_00e8cb90();
      ppppppplVar17 = local_b0;
    }
    if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cfc6a0();
    ppppppplVar17 = DAT_028b5440;
    if (DAT_028b5440 != local_b0) {
      in_RCX = DAT_028b5440;
      if (local_a8[0] == '\0') {
        if (local_b0 == (longlong *******)0x0) {
          ppppppplVar17 = (longlong *******)0x0;
        }
        else {
          FUN_00d50b00();
          ppppppplVar17 = local_b0;
          in_RCX = DAT_028b5440;
        }
      }
      else {
        local_a8[0] = '\0';
        ppppppplVar17 = local_b0;
      }
      DAT_028b5440 = ppppppplVar17;
      if (in_RCX != (longlong *******)0x0) {
        FUN_00d50b20();
        ppppppplVar17 = local_b0;
      }
    }
    if ((ppppppplVar17 != (longlong *******)0x0) && (DAT_028b5448 == '\0')) {
      DAT_028b5448 = '\x01';
      FUN_00e8cb90();
      ppppppplVar17 = local_b0;
    }
    if ((local_a8[0] != '\0') && (ppppppplVar17 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d48370();
  fVar20 = fStack_324;
  fVar32 = in_XMM1_Dd;
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  local_210 = DAT_028b5440;
  local_208 = 0;
  if (DAT_028b5440 != (longlong *******)0x0) {
    FUN_00d50b00();
  }
  local_208 = '\x01';
  FUN_01d488d0();
  if ((local_208 != '\0') && (local_210 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar13 + 0x3b0))();
  (**(code **)(*unaff_RDI + 0x640))();
  (*(code *)(*local_40)[0x74])();
  local_1b8 = local_b0;
  local_1b0 = 0;
  if (local_a8[0] == '\0') {
    if (local_b0 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8[0] = '\0';
  }
  local_1b0 = '\x01';
  FUN_01d488d0();
  if ((local_1b0 != '\0') && (local_1b8 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (*(code *)(*local_40)[0x6e])();
  local_1a8 = local_b0;
  local_1a0 = 0;
  if (local_a8[0] == '\0') {
    if (local_b0 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8[0] = '\0';
  }
  local_1a0 = '\x01';
  FUN_01d48a10();
  if ((local_1a0 != '\0') && (local_1a8 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  local_108._4_4_ = fVar20 + extraout_XMM0_Db;
  local_108._0_4_ = fVar20 + extraout_XMM0_Db + DAT_02390d00;
  uStack_100._0_4_ = fVar32 + extraout_XMM0_Dd;
  uStack_100._4_4_ = fVar32 + extraout_XMM0_Dd;
  fVar20 = local_228 + local_328 + DAT_02390d00;
  FUN_01e3f820();
  (**(code **)(*plVar13 + 0x3e0))();
  (**(code **)(*unaff_RDI + 0xa60))();
  bVar9 = true;
  if ((local_b0 != (longlong *******)0x0) && (unaff_RDI[0x2b] != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    bVar9 = false;
  }
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (bVar9) {
    FUN_01d48390();
    return;
  }
  FUN_01d48990();
  local_138 = local_b0;
  if ((((local_a8[0] == '\0') && (local_b0 != (longlong *******)0x0)) &&
      (FUN_00d50b00(), local_a8[0] != '\0')) && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48ad0();
  local_130 = local_b0;
  if (((local_a8[0] == '\0') && (local_b0 != (longlong *******)0x0)) &&
     ((FUN_00d50b00(), local_a8[0] != '\0' && (local_b0 != (longlong *******)0x0)))) {
    FUN_00d50b20();
  }
  uVar22 = 0;
  uVar24 = 0;
  FUN_01cfcdc0();
  local_1e0 = local_b0;
  if (((local_a8[0] == '\0') && (local_b0 != (longlong *******)0x0)) &&
     ((FUN_00d50b00(), local_a8[0] != '\0' && (local_b0 != (longlong *******)0x0)))) {
    FUN_00d50b20();
  }
  FUN_01e436c0();
  uStack_100 = uVar24;
  local_108 = (undefined1  [8])uVar22;
  local_128._4_4_ = extraout_XMM0_Db_00;
  local_128._0_4_ = extraout_XMM0_Da;
  local_128._8_4_ = (int)extraout_XMM0_Qb;
  local_128._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  uVar22 = (**(code **)(*unaff_RDI + 0xa70))(DAT_023b1608 + extraout_XMM0_Da);
  auVar39._4_12_ = local_128._4_12_;
  auVar39._0_4_ = local_128._0_4_ + (float)local_108._0_4_ + DAT_02390d00 + DAT_02390d34;
  uVar23 = (**(code **)(*unaff_RDI + 0xa70))(auVar39._0_8_);
  local_38 = '\0';
  local_40 = (longlong *******)0x0;
  local_110 = CONCAT44(local_110._4_4_,0xffffffff);
  (**(code **)(*unaff_RDI + 0x7b0))();
  ppppppplVar17 = local_b0;
  if ((((local_a8[0] == '\0') && (local_b0 != (longlong *******)0x0)) &&
      (FUN_00d50b00(), local_a8[0] != '\0')) && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cf9ad0();
  uVar24 = FUN_01cf5cf0();
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar23;
  dVar25 = (double)FUN_00e7b500(uVar22);
  dVar33 = auVar28._0_8_;
  if (((double)unaff_RDI[0x38] == dVar25) && (!NAN((double)unaff_RDI[0x38]) && !NAN(dVar25))) {
    if (((double)unaff_RDI[0x39] == dVar33) && (!NAN((double)unaff_RDI[0x39]) && !NAN(dVar33)))
    goto LAB_01b6a4f0;
  }
  if (unaff_RDI[0x37] != 0) {
    unaff_RDI[0x37] = 0;
    local_108 = (undefined1  [8])dVar33;
    local_128._0_8_ = dVar25;
    FUN_00d50b20();
    auVar28._8_8_ = 0;
    auVar28._0_8_ = local_108;
    dVar25 = (double)local_128._0_8_;
  }
LAB_01b6a4f0:
  unaff_RDI[0x38] = (longlong)dVar25;
  unaff_RDI[0x39] = auVar28._0_8_;
  FUN_01e3f820();
  fVar32 = extraout_XMM0_Db_01 + auVar28._4_4_ + DAT_02390d00;
LAB_01b6a530:
  pVar16 = (pthread_key_t)in_RCX;
  lVar2 = unaff_RDI[0x2b];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar12 = _pthread_getspecific(pVar16);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar26 = 0;
  in_RCX = (longlong *******)&local_c0;
  uVar15 = uVar23;
  cVar10 = FUN_01252f30(uVar22,&local_40,&local_f0,&local_110);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar10 == '\0') {
    cVar10 = (**(code **)(*unaff_RDI + 0x9a0))();
    if (((cVar10 != '\0') && (cVar10 = FUN_01e420b0(), cVar10 != '\0')) &&
       (cVar10 = (**(code **)(*unaff_RDI + 0x9d0))(), cVar10 != '\0')) {
      auVar6._8_4_ = in_XMM1_Dc;
      auVar6._0_8_ = param_2;
      auVar6._12_4_ = in_XMM1_Dd;
      auVar30._4_4_ = fStack_324;
      auVar30._0_4_ = fStack_324;
      auVar30._8_4_ = in_XMM1_Dd;
      auVar30._12_4_ = in_XMM1_Dd;
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = fStack_324 + DAT_02390d00;
      auVar44 = insertps(auVar6,auVar31,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
      uVar23 = (**(code **)(*unaff_RDI + 0x9d8))();
      uVar15 = (**(code **)(*unaff_RDI + 0x9e0))();
      FUN_01e3f820();
      _local_108 = auVar44;
      if (uVar23 >> 0x20 == 0) {
        local_128 = ZEXT416((uint)DAT_02390d00);
      }
      else {
        uVar22 = (**(code **)(*unaff_RDI + 0xa68))();
        auVar45._0_4_ = _DAT_023945e0 & (uint)(float)uVar22;
        auVar45._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar22 >> 0x20);
        auVar45._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_06;
        auVar45._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
        auVar44._4_12_ = SUB1612(auVar45 | _DAT_023945f0,4);
        auVar44._0_4_ = SUB164(auVar45 | _DAT_023945f0,0) + (float)uVar22;
        local_128 = roundss(ZEXT816(0),auVar44,0xb);
      }
      if (uVar15 >> 0x20 != 0) {
        uVar22 = (**(code **)(*unaff_RDI + 0xa68))();
        auVar46._0_4_ = _DAT_023945e0 & (uint)(float)uVar22;
        auVar46._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar22 >> 0x20);
        auVar46._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_07;
        auVar46._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
        auVar44._4_12_ = SUB1612(auVar46 | _DAT_023945f0,4);
        auVar44._0_4_ = SUB164(auVar46 | _DAT_023945f0,0) + (float)uVar22;
        _local_108 = roundss(ZEXT816(0),auVar44,0xb);
      }
      FUN_01e3f820();
      auVar49._4_12_ = local_108._4_12_;
      auVar49._0_4_ = (local_108._0_4_ - local_128._0_4_) + DAT_02390124;
      auVar47._4_4_ = auVar44._4_4_;
      auVar47._0_4_ = auVar47._4_4_;
      auVar47._12_4_ = auVar44._12_4_;
      auVar47._8_4_ = auVar47._12_4_;
      auVar48._4_12_ = auVar47._4_12_;
      auVar48._0_4_ = auVar47._4_4_ + DAT_02390124;
      auVar28 = insertps(auVar49,auVar48,0x10);
      auVar39 = blendps(local_128,_DAT_0241c730,0xe);
      local_108 = (undefined1  [8])FUN_00d05530(auVar39._0_8_);
      uStack_100 = extraout_XMM0_Qb_08;
      local_128 = auVar28;
      (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
      FUN_01d48b40();
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x4b8))();
      local_148 = local_b0;
      local_140 = 0;
      if (local_a8[0] == '\0') {
        if (local_b0 != (longlong *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8[0] = '\0';
      }
      local_140 = '\x01';
      FUN_01d488d0();
      if ((local_140 != '\0') && (local_148 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
    }
    FUN_01d48390();
    if (unaff_RDI[0x29] != 0) {
      uVar22 = (**(code **)(*unaff_RDI + 0x640))();
      local_258 = DAT_026e41f0;
      plVar13 = (longlong *)CONCAT71(uStack_4f,local_50);
      if (DAT_026e41f0 != 0) {
        uVar22 = FUN_00d50b00();
      }
      local_250 = '\x01';
      (**(code **)(*plVar13 + 0x3b0))(uVar22,&local_258);
      ppppppplVar19 = local_b0;
      if (local_a8[0] == '\0') {
        if (((local_b0 != (longlong *******)0x0) && (FUN_00d50b00(), local_a8[0] != '\0')) &&
           (local_b0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a8[0] = '\0';
      }
      if ((local_250 != '\0') && (local_258 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar19 == (longlong *******)0x0) {
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x3a0))();
        if (local_b0 != (longlong *******)0x0) {
          ppppppplVar19 = local_b0;
          if (local_a8[0] == '\0') {
            FUN_00d50b00();
            if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_a8[0] = '\0';
          }
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      local_240 = '\0';
      local_248 = ppppppplVar19;
      FUN_01d488d0();
      if ((local_240 != '\0') && (local_248 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      plVar13 = (longlong *)*unaff_RSI;
      (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x4d8))();
      FUN_00d05530();
      (**(code **)(*plVar13 + 0x3b0))();
      if (ppppppplVar19 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
    }
    if (ppppppplVar17 != (longlong *******)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if (local_1e0 != (longlong *******)0x0) {
      FUN_00d50b20();
    }
    if (local_130 != (longlong *******)0x0) {
      FUN_00d50b20();
    }
    if (local_138 != (longlong *******)0x0) {
      FUN_00d50b20();
    }
    return;
  }
  if (local_40 != (longlong *******)0x0) goto code_r0x01b6a5d5;
  goto LAB_01b6b015;
code_r0x01b6a5d5:
  FUN_01e3f820();
  uStack_100 = uVar26;
  local_108 = (undefined1  [8])uVar15;
  local_128 = ZEXT416((uint)DAT_02390d00);
  if (iStack_bc != 0) {
    uVar26 = (**(code **)(*unaff_RDI + 0xa68))();
    auVar34._0_4_ = (uint)(float)uVar26 & _DAT_023945e0;
    auVar34._4_4_ = (uint)((ulonglong)uVar26 >> 0x20) & _UNK_023945e4;
    auVar34._8_4_ = (uint)extraout_XMM0_Qb_01 & _UNK_023945e8;
    auVar34._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20) & _UNK_023945ec;
    auVar35._4_12_ = SUB1612(auVar34 | _DAT_023945f0,4);
    auVar35._0_4_ = SUB164(auVar34 | _DAT_023945f0,0) + (float)uVar26;
    local_128 = roundss(ZEXT816(0),auVar35,0xb);
  }
  if (local_f0 >> 0x20 != 0) {
    uVar26 = (**(code **)(*unaff_RDI + 0xa68))();
    auVar36._0_4_ = (uint)(float)uVar26 & _DAT_023945e0;
    auVar36._4_4_ = (uint)((ulonglong)uVar26 >> 0x20) & _UNK_023945e4;
    auVar36._8_4_ = (uint)extraout_XMM0_Qb_02 & _UNK_023945e8;
    auVar36._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) & _UNK_023945ec;
    auVar37._4_12_ = SUB1612(auVar36 | _DAT_023945f0,4);
    auVar37._0_4_ = SUB164(auVar36 | _DAT_023945f0,0) + (float)uVar26;
    _local_108 = roundss(ZEXT816(0),auVar37,0xb);
  }
  auVar27._0_8_ = FUN_01e3f820();
  auVar27._8_8_ = extraout_XMM0_Qb_03;
  fVar3 = local_128._0_4_;
  auVar38._4_4_ = local_108._4_4_;
  auVar38._0_4_ = (float)local_108._0_4_ - fVar3;
  auVar38._8_4_ = (undefined4)uStack_100;
  auVar38._12_4_ = uStack_100._4_4_;
  auVar39 = insertps(auVar38,fVar32,0x10);
  local_3b8 = (float)uVar24;
  uStack_3b4 = (undefined4)((ulonglong)uVar24 >> 0x20);
  uStack_3b0 = (undefined4)extraout_XMM0_Qb_00;
  uStack_3ac = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  if (fVar3 - local_3b8 < 0.0) {
    auVar5._4_4_ = local_108._4_4_;
    auVar5._0_4_ = ((float)local_108._0_4_ - fVar3) - (local_3b8 - fVar3);
    auVar5._8_4_ = (undefined4)uStack_100;
    auVar5._12_4_ = uStack_100._4_4_;
    auVar39 = blendps(auVar39,auVar5,1);
    auVar4._4_4_ = uStack_3b4;
    auVar4._0_4_ = (local_3b8 - fVar3) + fVar3;
    auVar4._8_4_ = uStack_3b0;
    auVar4._12_4_ = uStack_3ac;
    auVar28 = blendps(auVar27,auVar4,1);
  }
  else {
    auVar28 = blendps(auVar27,local_128,1);
  }
  cVar10 = FUN_00d054a0(auVar28._0_8_,auVar39._0_8_,local_228);
  ppppppplVar19 = DAT_028b5430;
  if (cVar10 == '\0') goto LAB_01b6a530;
  local_1f8 = 0;
  if (DAT_028b5430 != (longlong *******)0x0) {
    FUN_00d50b00();
  }
  local_200 = ppppppplVar19;
  local_1f8 = '\x01';
  uVar26 = FUN_01d488d0();
  if ((local_1f8 != '\0') && (local_200 != (longlong *******)0x0)) {
    uVar26 = FUN_00d50b20();
  }
  local_318 = (longlong ******)local_40;
  local_310 = '\0';
  (**(code **)(*unaff_RDI + 0x950))(uVar26,&local_318);
  ppppppplVar19 = local_b0;
  if (local_a8[0] == '\0') {
    if (((local_b0 != (longlong *******)0x0) && (FUN_00d50b00(), local_a8[0] != '\0')) &&
       (local_b0 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8[0] = '\0';
  }
  if ((local_310 != '\0') && (local_318 != (longlong ******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar19 != (longlong *******)0x0) {
    local_308 = ppppppplVar19;
    local_300 = '\0';
    FUN_01d488d0();
    if ((local_300 != '\0') && (local_308 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_2f8 = (longlong ******)local_40;
  local_2f0 = '\0';
  cVar10 = (**(code **)(*unaff_RDI + 0x9c8))();
  if ((local_2f0 != '\0') && (local_2f8 != (longlong ******)0x0)) {
    FUN_00d50b20();
  }
  ppppppplVar19 = DAT_028b5450;
  if (cVar10 != '\0') {
    local_1e8 = 0;
    if (DAT_028b5450 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
    local_1f0 = ppppppplVar19;
    local_1e8 = '\x01';
    FUN_01d488d0();
    if ((local_1e8 != '\0') && (local_1f0 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  local_338 = auVar39._0_4_;
  uStack_334 = auVar39._4_4_;
  uStack_330 = auVar39._8_4_;
  uStack_32c = auVar39._12_4_;
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x3a0))();
  ppppppplVar19 = local_b0;
  local_190 = 0;
  if (local_a8[0] == '\0') {
    if (local_b0 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8[0] = '\0';
  }
  local_190 = '\x01';
  local_198 = ppppppplVar19;
  FUN_01d488d0();
  if ((local_190 != '\0') && (local_198 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if (local_228 <= (float)local_128._0_4_) {
    plVar13 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    local_338 = extraout_XMM0_Db_02;
    uStack_334 = extraout_XMM0_Db_02;
    uStack_330 = extraout_XMM0_Dd_00;
    uStack_32c = extraout_XMM0_Dd_00;
    (**(code **)(*plVar13 + 0x3e0))();
  }
  if ((float)local_108._0_4_ <= fVar20) {
    plVar13 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    local_338 = extraout_XMM0_Db_03;
    uStack_334 = extraout_XMM0_Db_03;
    uStack_330 = extraout_XMM0_Dd_01;
    uStack_32c = extraout_XMM0_Dd_01;
    (**(code **)(*plVar13 + 0x3e0))();
  }
  if (unaff_RDI[0x37] == 0) {
    plVar13 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar13 + 0x18))();
    lVar2 = unaff_RDI[0x37];
    unaff_RDI[0x37] = (longlong)plVar13;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  local_2e8 = (longlong ******)local_40;
  local_2e0 = '\0';
  uVar26 = FUN_01b6d110(CONCAT44(iStack_bc,local_c0),&local_2e8);
  ppppppplVar19 = local_b0;
  if ((local_a8[0] == '\0') && (local_b0 != (longlong *******)0x0)) {
    uVar26 = FUN_00d50b00();
  }
  if ((local_2e0 != '\0') && (local_2e8 != (longlong ******)0x0)) {
    uVar26 = FUN_00d50b20();
  }
  local_2d8 = ppppppplVar19;
  local_2d0 = '\0';
  FUN_00c9fe40(uVar26,&local_2d8);
  ppppppplVar18 = local_b0;
  local_50 = local_a8[0];
  pcVar14 = local_a8;
  if (local_a8[0] == '\0') {
    pcVar14 = &local_50;
  }
  *pcVar14 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 == '\0') && (ppppppplVar18 != (longlong *******)0x0)) {
    FUN_00d50b00();
  }
  if ((local_2d0 != '\0') && (local_2d8 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar18 == (longlong *******)0x0) {
    local_2c8 = (longlong ******)local_40;
    local_2c0 = '\0';
    uVar26 = (**(code **)(*unaff_RDI + 0x940))(CONCAT44(iStack_bc,local_c0),&local_2c8);
    ppppppplVar18 = local_b0;
    if (local_b0 == (longlong *******)0x0) {
      local_e0 = 0;
      ppppppplVar18 = (longlong *******)0x0;
    }
    else if (local_a8[0] == '\0') {
      uVar26 = FUN_00d50b00();
      local_e0 = CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
      if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_a8[0] = '\0';
      local_e0 = CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
    }
    if ((local_2c0 != '\0') && (local_2c8 != (longlong ******)0x0)) {
      FUN_00d50b20();
    }
    auVar40 = ZEXT416((uint)DAT_02390d28);
    if (ppppppplVar18 != (longlong *******)0x0) {
      iVar11 = FUN_00d8c7a0();
      auVar40 = ZEXT416((uint)DAT_02390d28);
      if (0 < iVar11) {
        local_2b0 = '\0';
        local_2b8 = ppppppplVar18;
        local_238._0_8_ = FUN_01d43d10();
        local_238._8_8_ = extraout_XMM0_Qb_04;
        if ((local_2b0 != '\0') && (local_2b8 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        auVar40 = local_238;
        if (local_238._0_4_ <= DAT_02390d28) {
          auVar40._4_12_ = local_238._4_12_;
          auVar40._0_4_ = DAT_02390d28;
        }
      }
    }
    auVar41._4_12_ = auVar40._4_12_;
    auVar41._0_4_ = auVar40._0_4_ + DAT_023908d8;
    auVar29._4_12_ = auVar28._4_12_;
    auVar29._0_4_ = auVar28._0_4_ + DAT_023908d8;
    auVar28 = blendps(auVar29,_DAT_0238ff00,0xe);
    local_378 = auVar28._0_4_;
    local_238 = blendps(auVar41,auVar39,0xe);
    uVar26 = FUN_00dd6480();
    ppppppplVar7 = (longlong *******)CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (ppppppplVar7 != (longlong *******)0x0) {
        uVar26 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_2a8 = ppppppplVar19;
    local_2a0 = '\0';
    local_a8[0] = '\0';
    local_b0 = ppppppplVar7;
    FUN_00ca0840(uVar26,&local_2a8);
    if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_2a0 != '\0') && (local_2a8 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if (ppppppplVar7 != (longlong *******)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (ppppppplVar18 == (longlong *******)0x0) goto LAB_01b6aba6;
  }
  else {
    local_378 = FUN_00dd6ab0();
    local_238._4_4_ = uStack_334;
    local_238._0_4_ = local_338;
    local_238._8_4_ = uStack_330;
    local_238._12_4_ = uStack_32c;
    FUN_00d50b20();
    local_e0 = 0;
LAB_01b6aba6:
    local_298 = (longlong ******)local_40;
    local_290 = '\0';
    in_RCX = (longlong *******)CONCAT44(iStack_bc,local_c0);
    uVar26 = (**(code **)(*unaff_RDI + 0x940))(in_RCX,&local_298);
    ppppppplVar18 = local_b0;
    if (local_b0 == (longlong *******)0x0) {
      ppppppplVar18 = (longlong *******)0x0;
    }
    else if (local_a8[0] == '\0') {
      uVar26 = FUN_00d50b00();
      local_e0 = CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
      if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_a8[0] = '\0';
      local_e0 = CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
    }
    if ((local_290 != '\0') && (local_298 != (longlong ******)0x0)) {
      FUN_00d50b20();
    }
    if (ppppppplVar18 == (longlong *******)0x0) {
      bVar8 = true;
      bVar9 = true;
      goto joined_r0x01b6aff5;
    }
  }
  cVar10 = FUN_00d05440();
  if (cVar10 == '\0') {
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  }
  local_288 = *unaff_RSI;
  local_280 = '\0';
  local_278 = (longlong ******)local_40;
  local_270 = '\0';
  local_260 = '\0';
  in_RCX = (longlong *******)&local_268;
  local_268 = ppppppplVar18;
  (**(code **)(*unaff_RDI + 0x918))(in_RCX,&local_278,local_378,local_f0);
  if ((local_260 != '\0') && (local_268 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != (longlong ******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  cVar10 = FUN_00d05440();
  if (cVar10 == '\0') {
    FUN_01d48390();
  }
  bVar8 = false;
  bVar9 = false;
joined_r0x01b6aff5:
  if (ppppppplVar19 != (longlong *******)0x0) {
    FUN_00d50b20();
    bVar9 = bVar8;
  }
  if ((char)local_e0 != '\0' && !bVar9) {
    FUN_00d50b20();
  }
LAB_01b6b015:
  local_e8 = (longlong ******)unaff_RDI[0x33];
  if ((((ulonglong)local_e8 >> 0x20 != 0) &&
      ((iStack_bc == 0 || (cVar10 = FUN_00e7c020(), cVar10 != '\0')))) &&
     ((local_f0._4_4_ == 0 || ((local_e8._4_4_ != 0 && (cVar10 = FUN_00e7c020(), cVar10 != '\0')))))
     ) {
    if ((*(float *)((longlong)unaff_RDI + 0x1a4) != DAT_0239424c) ||
       (NAN(*(float *)((longlong)unaff_RDI + 0x1a4)) || NAN(DAT_0239424c))) {
      (**(code **)(*unaff_RDI + 0x978))();
      ppppppplVar19 = local_b0;
      if (local_a8[0] == '\0') {
        if (local_b0 == (longlong *******)0x0) goto LAB_01b6a530;
        FUN_00d50b00();
        if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_b0 == (longlong *******)0x0) goto LAB_01b6a530;
      if (local_40 == (longlong *******)0x0) {
        (**(code **)(&UNK_00001538 + (longlong)*ppppppplVar19))();
        ppppppplVar19 = local_b0;
        local_150 = 0;
        if (local_a8[0] == '\0') {
          if (local_b0 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8[0] = '\0';
        }
        local_150 = '\x01';
        local_158 = ppppppplVar19;
        FUN_01d488d0();
        if ((local_150 != '\0') && (local_158 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(&UNK_00001538 + (longlong)*ppppppplVar19))();
        local_170 = 0;
        lVar2 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_170 = '\x01';
        local_178 = lVar2;
        (**(code **)(&UNK_00001530 + (longlong)*ppppppplVar19))();
        local_168 = local_d0;
        local_160 = 0;
        if (local_c8 == '\0') {
          if (local_d0 != (longlong ******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        local_160 = '\x01';
        FUN_01cfd290();
        ppppppplVar19 = local_b0;
        local_180 = 0;
        if (local_a8[0] == '\0') {
          if (local_b0 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8[0] = '\0';
        }
        local_180 = '\x01';
        local_188 = ppppppplVar19;
        FUN_01d488d0();
        if ((local_180 != '\0') && (local_188 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8[0] != '\0') && (local_b0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != (longlong ******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong ******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      uVar21 = FUN_01d48a00();
      local_108._0_4_ = uVar21;
      FUN_01d489d0();
      uVar26 = (**(code **)(*unaff_RDI + 0xa68))();
      auVar42._0_4_ = (uint)(float)uVar26 & _DAT_023945e0;
      auVar42._4_4_ = (uint)((ulonglong)uVar26 >> 0x20) & _UNK_023945e4;
      auVar42._8_4_ = (uint)extraout_XMM0_Qb_05 & _UNK_023945e8;
      auVar42._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_05 >> 0x20) & _UNK_023945ec;
      auVar43._4_12_ = SUB1612(auVar42 | _DAT_023945f0,4);
      auVar43._0_4_ = SUB164(auVar42 | _DAT_023945f0,0) + (float)uVar26;
      roundss(ZEXT816(0),auVar43,0xb);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      FUN_01d489d0();
      FUN_00d50b20();
    }
  }
  goto LAB_01b6a530;
}




// ============================================================
// @01dc2170 — 4530 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dc221d) */
/* WARNING: Removing unreachable block (ram,0x01dc2226) */
/* WARNING: Removing unreachable block (ram,0x01dc2390) */
/* WARNING: Removing unreachable block (ram,0x01dc2399) */
/* WARNING: Removing unreachable block (ram,0x01dc2afe) */
/* WARNING: Removing unreachable block (ram,0x01dc2b07) */
/* WARNING: Removing unreachable block (ram,0x01dc293c) */
/* WARNING: Removing unreachable block (ram,0x01dc280c) */
/* WARNING: Removing unreachable block (ram,0x01dc2815) */
/* WARNING: Removing unreachable block (ram,0x01dc28a9) */
/* WARNING: Removing unreachable block (ram,0x01dc28b2) */
/* WARNING: Removing unreachable block (ram,0x01dc2a60) */
/* WARNING: Removing unreachable block (ram,0x01dc2a69) */
/* WARNING: Removing unreachable block (ram,0x01dc2b5b) */
/* WARNING: Removing unreachable block (ram,0x01dc2b64) */

undefined8 * FUN_01dc2170(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar9;
  longlong lVar10;
  longlong local_310;
  char local_308;
  longlong *local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  longlong local_2e0;
  char local_2d8;
  longlong local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
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
  longlong *local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01dc0d60();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_01dc0d60();
  FUN_01dcc290();
  local_70 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar2 = true;
    local_70 = (longlong *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar2 = false;
  }
  else {
    local_38 = '\0';
    bVar2 = false;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01dc0d60();
  FUN_01dd96b0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_01dc0d60();
    lVar10 = local_140;
    FUN_01dd96b0();
    FUN_01dc0d60();
    local_e0 = 0;
    if ((local_308 == '\0') && (local_310 != 0)) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_e8 = local_310;
    local_300 = local_70;
    local_2f8 = '\0';
    (**(code **)(*local_68 + 0x88))(&local_300,&local_e8);
    local_58 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = true;
      local_58 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      local_38 = '\0';
      bVar1 = false;
    }
    if ((local_2f8 != '\0') && (local_300 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_138 != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (bVar1) {
        FUN_00d50b00();
        *unaff_RDI = local_58;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        *unaff_RDI = local_58;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      bVar9 = true;
      bVar1 = false;
      local_48 = (longlong *)0x0;
      goto LAB_01dc32dd;
    }
  }
  local_58 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*local_58 + 0x18))();
  FUN_01d5e5a0();
  bVar5 = FUN_01db9b00();
  lVar10 = DAT_027f2750;
  if (bVar5 == 0) {
    bVar1 = false;
    local_48 = (longlong *)0x0;
  }
  else {
    if (DAT_027f2750 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027f2758;
    local_2f0 = lVar10;
    local_2e8 = '\x01';
    if (DAT_027f2758 != 0) {
      FUN_00d50b00();
    }
    local_2e0 = lVar3;
    local_2d8 = '\x01';
    local_2d0 = 0;
    local_2c8 = '\0';
    FUN_00d31230(&local_2d0,&local_2e0);
    local_d0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_d0 = '\x01';
    local_d8 = local_40;
    local_2b8 = '\0';
    local_2c0 = 0;
    FUN_01d5d9b0();
    if ((local_2b8 != '\0') && (local_2c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_2c8 != '\0') && (local_2d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d8 != '\0') && (local_2e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2e8 != '\0') && (local_2f0 != 0)) {
      FUN_00d50b20();
    }
    local_48 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*local_48 + 0x18))();
    FUN_01d5e5a0();
    local_2b0 = DAT_027f2750;
    if (DAT_027f2750 != 0) {
      FUN_00d50b00();
    }
    lVar10 = DAT_027f2760;
    local_2a8 = '\x01';
    if (DAT_027f2760 != 0) {
      FUN_00d50b00();
    }
    local_2a0 = lVar10;
    local_298 = '\x01';
    local_290 = 0;
    local_288 = '\0';
    FUN_00d31230(&local_290,&local_2a0);
    local_c0 = 0;
    lVar10 = DAT_027f2768;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      lVar10 = DAT_027f2768;
    }
    local_c0 = '\x01';
    local_c8 = local_40;
    DAT_027f2768 = lVar10;
    if (lVar10 != 0) {
      local_c0 = '\x01';
      FUN_00d50b00();
    }
    local_278 = '\x01';
    local_270 = 0;
    local_268 = '\0';
    local_280 = lVar10;
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_01d5da60(&local_270,&local_280,&stack0xfffffffffffffed0);
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    if ((local_268 != '\0') && (local_270 != 0)) {
      FUN_00d50b20();
    }
    if ((local_278 != '\0') && (local_280 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_288 != '\0') && (local_290 != 0)) {
      FUN_00d50b20();
    }
    if ((local_298 != '\0') && (local_2a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2a8 != '\0') && (local_2b0 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    cVar6 = FUN_01db9d40();
    if (cVar6 != '\0') {
      FUN_01db9f80();
    }
    FUN_01d66ab0();
    local_260 = DAT_027f2750;
    if (DAT_027f2750 != 0) {
      FUN_00d50b00();
    }
    lVar10 = DAT_027f2770;
    local_258 = '\x01';
    if (DAT_027f2770 != 0) {
      FUN_00d50b00();
    }
    local_250 = lVar10;
    local_248 = '\x01';
    local_240 = 0;
    local_238 = '\0';
    FUN_00d31230(&local_240,&local_250);
    local_b0 = 0;
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar10 = DAT_027f2778;
    local_b0 = '\x01';
    local_b8 = local_40;
    if (DAT_027f2778 != 0) {
      local_b0 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_228 = '\x01';
    local_220 = 0;
    local_218 = '\0';
    local_230 = lVar10;
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_01d5da60(&local_220,&local_230,&stack0xfffffffffffffee0);
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    cVar6 = FUN_01db9d40();
    if (cVar6 != '\0') {
      FUN_01db9f80();
    }
    FUN_01d66ab0();
    FUN_01d5e230();
    local_208 = '\0';
    local_210 = local_48;
    FUN_01d654e0();
    if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = true;
  }
  FUN_01dc0d60();
  cVar6 = FUN_01dcca70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    FUN_01dc0d60();
    iVar7 = FUN_01dca080();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar10 = DAT_027f2750;
    if (1 < iVar7) {
      if (DAT_027f2750 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027f2780;
      local_200 = lVar10;
      local_1f8 = '\x01';
      if (DAT_027f2780 != 0) {
        FUN_00d50b00();
      }
      local_1f0 = lVar3;
      local_1e8 = '\x01';
      local_1e0 = 0;
      local_1d8 = '\0';
      FUN_00d31230(&local_1e0,&local_1f0);
      local_a0 = 0;
      local_1d0 = DAT_027f2788;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          local_1d0 = DAT_027f2788;
        }
      }
      else {
        local_38 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = local_40;
      DAT_027f2788 = local_1d0;
      if (local_1d0 != 0) {
        local_a0 = '\x01';
        FUN_00d50b00();
      }
      local_1c8 = '\x01';
      local_1c0 = 0;
      local_1b8 = '\0';
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      FUN_01d5da60(&local_1c0,&local_1d0,&stack0xfffffffffffffef0);
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f8 != '\0') && (local_200 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01dc0d60();
    FUN_01dcd300();
    iVar7 = *(int *)((longlong)local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar10 = DAT_027f2750;
    if (iVar7 != 0) {
      if (DAT_027f2750 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027f2790;
      local_1b0 = lVar10;
      local_1a8 = '\x01';
      if (DAT_027f2790 != 0) {
        FUN_00d50b00();
      }
      local_1a0 = lVar3;
      local_198 = '\x01';
      local_190 = 0;
      local_188 = '\0';
      FUN_00d31230(&local_190,&local_1a0);
      local_90 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_90 = '\x01';
      local_98 = local_40;
      local_178 = '\0';
      local_180 = 0;
      FUN_01d5d9b0();
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      plVar8 = (longlong *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar8 + 0x18))();
      if (plVar8 == local_48) {
        plVar8 = local_48;
        if (bVar5 == 0) {
          bVar1 = true;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        bVar1 = true;
        if ((bVar5 & local_48 != (longlong *)0x0) == 1) {
          FUN_00d50b20();
        }
      }
      FUN_01d5e5a0();
      lVar10 = 0;
      while( true ) {
        FUN_01dc0d60();
        FUN_01dcd300();
        iVar7 = *(int *)((longlong)local_40 + 0xc);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar7 <= lVar10) break;
        FUN_01dc0d60();
        lVar4 = local_140;
        FUN_01dcd300();
        FUN_01db9ab0();
        local_80 = 0;
        lVar3 = DAT_027f2798;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            lVar3 = DAT_027f2798;
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = '\x01';
        local_88 = local_40;
        DAT_027f2798 = lVar3;
        if (lVar3 != 0) {
          local_80 = '\x01';
          FUN_00d50b00();
        }
        local_168 = '\x01';
        local_160 = 0;
        local_158 = '\0';
        local_170 = lVar3;
        if (unaff_RSI != 0) {
          FUN_00d50b00();
        }
        FUN_01d5da60(&local_160,&local_170,&stack0xffffffffffffff00);
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        FUN_01d65490();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      }
      FUN_01d5e230();
      local_148 = '\0';
      local_150 = plVar8;
      FUN_01d654e0();
      if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = plVar8;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  iVar7 = FUN_01d5b230();
  if (iVar7 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  bVar9 = iVar7 != 0;
LAB_01dc32dd:
  if (!bVar2 && local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar9 && local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01b7e1b0 — 4430 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b7e36b) */
/* WARNING: Removing unreachable block (ram,0x01b7e377) */
/* WARNING: Removing unreachable block (ram,0x01b7e3f6) */
/* WARNING: Removing unreachable block (ram,0x01b7e402) */

ulonglong FUN_01b7e1b0(undefined8 param_1,byte param_2)

{
  longlong ***ppplVar1;
  longlong ***ppplVar2;
  char cVar3;
  uint uVar4;
  longlong ****pppplVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  undefined4 *puVar11;
  longlong ****pppplVar12;
  longlong *unaff_RDI;
  longlong ****pppplVar13;
  undefined1 local_108 [4];
  uint uStack_104;
  undefined8 local_100;
  longlong ***local_f8;
  longlong ***local_f0;
  longlong ***local_e8;
  longlong ***local_e0;
  char local_d8;
  longlong ***local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong ***local_98;
  longlong ***local_90;
  char local_88;
  undefined4 local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int iStack_64;
  longlong ***local_60;
  char local_58;
  undefined8 local_50;
  longlong ***local_48;
  longlong ***local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xad0))();
  if (local_38[0] == '\0') {
    if ((longlong ****)local_40 != (longlong ****)0x0) {
      local_98 = local_40;
      FUN_00d50b00();
      if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b7e21e;
    }
  }
  else {
    local_98 = local_40;
    if ((longlong ****)local_40 != (longlong ****)0x0) {
LAB_01b7e21e:
      cVar3 = (**(code **)(*unaff_RDI + 0xa78))();
      if ((cVar3 != '\0') && (cVar3 = (**(code **)(*unaff_RDI + 0x9d0))(), cVar3 != '\0')) {
        local_78 = (longlong ****)(**(code **)(*unaff_RDI + 0x9d8))();
        local_b8 = (longlong ****)(**(code **)(*unaff_RDI + 0x9e0))();
        local_c0 = local_78;
        pppplVar5 = local_78;
        local_50 = local_b8;
        FUN_01ca6970();
        ppplVar1 = local_40;
        pVar10 = (pthread_key_t)pppplVar5;
        if ((local_38[0] == '\0') &&
           ((((longlong ****)local_40 != (longlong ****)0x0 && (FUN_00d50b00(), local_38[0] != '\0')
             ) && ((longlong ****)local_40 != (longlong ****)0x0)))) {
          FUN_00d50b20();
        }
        local_f8 = ppplVar1;
        FUN_01ca8220();
        local_40 = local_98;
        local_38[0] = '\0';
        uVar4 = FUN_00d23d70();
        uVar9 = (ulonglong)uVar4;
        if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && ((longlong ****)local_90 != (longlong ****)0x0)) {
          FUN_00d50b20();
        }
        if (((byte)uVar4 & param_2) != 0) {
          FUN_01ca7f90();
          local_e8 = local_40;
          if (local_38[0] == '\0') {
            if ((((longlong ****)local_40 != (longlong ****)0x0) &&
                (FUN_00d50b00(), local_38[0] != '\0')) &&
               ((longlong ****)local_40 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
          if ((longlong ****)local_e8 == (longlong ****)0x0) {
            uVar9 = 0;
            goto LAB_01b7f0b9;
          }
          pppplVar5 = (longlong ****)FUN_00e8fc40();
          FUN_0002cb50();
          (*(code *)(*pppplVar5)[3])();
          local_f0 = (longlong ***)pppplVar5;
          FUN_00e549d0();
          local_48 = local_40;
          if (local_38[0] == '\0') {
            if ((((longlong ****)local_40 != (longlong ****)0x0) &&
                (FUN_00d50b00(), local_38[0] != '\0')) &&
               ((longlong ****)local_40 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
          if ((longlong ****)local_48 != (longlong ****)0x0) {
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar11 = &local_68;
            FUN_01252670(puVar11,0,local_108,0);
            ppplVar1 = local_40;
            pVar10 = (pthread_key_t)puVar11;
            local_e0 = (longlong ***)CONCAT71(local_e0._1_7_,local_38[0]);
            pppplVar5 = &local_e0;
            if (local_38[0] != '\0') {
              pppplVar5 = (longlong ****)local_38;
            }
            *(undefined1 *)pppplVar5 = 0;
            if ((local_38[0] != '\0') && ((longlong ****)ppplVar1 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            local_88 = 0;
            if (((char)local_e0 == '\0') && ((longlong ****)ppplVar1 != (longlong ****)0x0)) {
              FUN_00d50b00();
            }
            local_90 = ppplVar1;
            local_88 = '\x01';
            if ((longlong ****)ppplVar1 == (longlong ****)0x0) {
              pvVar6 = _pthread_getspecific(pVar10);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar11 = &local_68;
              FUN_01253c10(puVar11,&local_90,local_108,0);
              pVar10 = (pthread_key_t)puVar11;
            }
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012527b0(&local_100,0,&local_80,0);
            pppplVar5 = (longlong ****)local_40;
            pppplVar12 = &local_60;
            pppplVar13 = (longlong ****)local_38;
            if (local_38[0] == '\0') {
              pppplVar13 = pppplVar12;
            }
            local_60 = (longlong ***)CONCAT71(local_60._1_7_,local_38[0]);
            *(undefined1 *)pppplVar13 = 0;
            if ((local_38[0] != '\0') && (pppplVar5 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            local_d8 = 0;
            if (((char)local_60 == '\0') && (pppplVar5 != (longlong ****)0x0)) {
              FUN_00d50b00();
            }
            local_e0 = (longlong ***)pppplVar5;
            local_d8 = '\x01';
            if (pppplVar5 == (longlong ****)0x0) {
              pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              pppplVar12 = (longlong ****)&local_100;
              FUN_012535e0(pppplVar12,&local_e0,&local_80,0);
            }
            (**(code **)(*unaff_RDI + 0xa48))();
            if ((iStack_64 != 0) && (iStack_7c != 0)) {
              pppplVar12 = (longlong ****)((ulonglong)unaff_RDI[0x33] >> 0x20);
              if (((pppplVar12 != (longlong ****)0x0) &&
                  ((local_78._4_4_ == 0 ||
                   (local_40 = (longlong ***)unaff_RDI[0x33], cVar3 = FUN_00e7c020(), cVar3 == '\0')
                   ))) && ((local_50._4_4_ == 0 ||
                           ((local_60 = (longlong ***)unaff_RDI[0x33],
                            (ulonglong)local_60 >> 0x20 != 0 &&
                            (cVar3 = FUN_00e7c020(), cVar3 == '\0')))))) {
                local_38[0] = '\0';
                local_40 = (longlong ***)0x0;
                local_a8 = 0xffffffff;
                do {
                  pVar10 = (pthread_key_t)pppplVar12;
                  lVar7 = unaff_RDI[0x2b];
                  if (lVar7 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar6 = _pthread_getspecific(pVar10);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pppplVar12 = local_50;
                  uVar4 = FUN_01252960(local_50,local_78,&local_40,&local_60);
                  pppplVar5 = (longlong ****)(ulonglong)uVar4;
                  if (lVar7 != 0) {
                    FUN_00d50b20();
                  }
                } while (((byte)uVar4 & (longlong ****)local_40 == (longlong ****)0x0) != 0);
                if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                  FUN_00d50b20();
                }
                if ((byte)uVar4 == 0) {
                  local_58 = '\0';
                  local_60 = (longlong ***)0x0;
                  local_c4 = 0xffffffff;
LAB_01b7f0f1:
                  do {
                    pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
                    pppplVar5 = (longlong ****)local_48;
                    if ((pvVar6 != (void *)0x0) &&
                       (lVar7 = FUN_00e8b990(), pppplVar5 = (longlong ****)local_48, lVar7 != 0)) {
                      pppplVar5 = (longlong ****)
                                  local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    uVar8 = FUN_00e7bdb0();
                    pppplVar12 = (longlong ****)FUN_00e7bdb0();
                    cVar3 = FUN_01252960(pppplVar12,uVar8,&local_60,&local_b0);
                    if (cVar3 == '\0') goto LAB_01b7f2f4;
                  } while ((longlong ****)local_60 == (longlong ****)0x0);
                  local_40 = (longlong ***)local_b0;
                  FUN_00e7b970();
                  local_70 = (longlong ****)unaff_RDI[0x33];
                  FUN_00e7b820();
                  local_a0 = (longlong ****)local_40;
                  local_40 = (longlong ***)CONCAT44(uStack_a4,local_a8);
                  FUN_00e7b970();
                  local_d0 = (longlong ***)unaff_RDI[0x33];
                  FUN_00e7b820();
                  local_70 = (longlong ****)local_40;
                  pVar10 = (pthread_key_t)((ulonglong)local_40 >> 0x20);
                  if ((local_a0._4_4_ != 0) && (local_50._4_4_ != 0)) {
                    cVar3 = FUN_00e7c020();
                    if (cVar3 == '\0') goto LAB_01b7f2f4;
                    pVar10 = (pthread_key_t)((ulonglong)local_70 >> 0x20);
                  }
                  if (((pVar10 != 0) && (local_50._4_4_ != 0)) &&
                     (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
                    local_70 = local_50;
                  }
                  lVar7 = unaff_RDI[0x2b];
                  if (lVar7 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar6 = _pthread_getspecific(pVar10);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = local_60;
                  local_38[0] = '\0';
                  pppplVar12 = local_70;
                  FUN_012502a0(local_70,local_a0,(char)unaff_RDI[0x36]);
                  if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                    FUN_00d50b20();
                  }
                  if (lVar7 != 0) {
                    FUN_00d50b20();
                  }
                  goto LAB_01b7f0f1;
                }
              }
            }
            if ((local_78._4_4_ == 0) && ((ulonglong)local_50 >> 0x20 == 0)) {
              lVar7 = unaff_RDI[0x2b];
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_38[0] = '\0';
              local_40 = (longlong ***)0x0;
              FUN_0124f820();
              if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
              local_a0 = (longlong ****)CONCAT44(local_a0._4_4_,0xffffffff);
              local_58 = '\0';
              local_60 = (longlong ***)0x0;
              while( true ) {
                pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
                pppplVar5 = (longlong ****)local_48;
                if ((pvVar6 != (void *)0x0) &&
                   (lVar7 = FUN_00e8b990(), pppplVar5 = (longlong ****)local_48, lVar7 != 0)) {
                  pppplVar5 = (longlong ****)local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                  ;
                }
                uVar8 = FUN_00e7bdb0();
                pppplVar12 = (longlong ****)FUN_00e7bdb0();
                cVar3 = FUN_01252960(pppplVar12,uVar8,&local_60,&local_b0);
                pVar10 = (pthread_key_t)pppplVar12;
                if (cVar3 == '\0') break;
                if ((longlong ****)local_60 != (longlong ****)0x0) {
                  lVar7 = unaff_RDI[0x2b];
                  if (lVar7 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar6 = _pthread_getspecific(pVar10);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pppplVar12 = (longlong ****)CONCAT44(uStack_a4,local_a8);
                  local_40 = local_60;
                  local_38[0] = '\0';
                  FUN_012502a0(pppplVar12,local_b0,0);
                  if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                    FUN_00d50b20();
                  }
                  if (lVar7 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              if ((local_58 != '\0') && ((longlong ****)local_60 != (longlong ****)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01b7ef63;
            }
            if (((iStack_64 == 0) || (local_100._4_4_ == 0)) ||
               (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
              uVar9 = CONCAT44(iStack_64,local_68);
              if (iStack_64 == 0) {
                pppplVar12 = (longlong ****)0x0;
                if (local_100._4_4_ == 0) goto LAB_01b7ea6f;
              }
              else {
                pppplVar12 = (longlong ****)CONCAT44(iStack_7c,local_80);
LAB_01b7eac4:
                if (((ulonglong)pppplVar12 >> 0x20 != 0) && ((ulonglong)local_78 >> 0x20 != 0)) {
                  if (local_50._4_4_ == 0) {
                    local_40 = (longlong ***)pppplVar12;
                    FUN_00e7b970();
                    local_60 = local_40;
                    local_40 = (longlong ***)local_78;
                    FUN_00e7b820();
                    local_50 = (longlong ****)local_40;
                    local_c0 = (longlong ****)local_40;
                    local_b8 = (longlong ****)FUN_00e7bdb0();
                  }
                  local_b0 = local_78;
                  if ((ulonglong)local_78 >> 0x20 != 0) {
LAB_01b7eb68:
                    if ((local_50._4_4_ != 0) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
                      local_c4 = 0xffffffff;
                      local_58 = '\0';
                      local_60 = (longlong ***)0x0;
LAB_01b7eba0:
                      pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
                      if (pvVar6 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      pppplVar12 = (longlong ****)CONCAT44(iStack_7c,local_80);
                      cVar3 = FUN_01252960(pppplVar12,CONCAT44(iStack_64,local_68),&local_60,
                                           &local_a8);
                      if (cVar3 == '\0') goto LAB_01b7ed64;
                      local_40 = (longlong ***)CONCAT44(uStack_a4,local_a8);
                      FUN_00e7b970();
                      FUN_00e7b820();
                      local_70 = (longlong ****)local_40;
                      local_40 = (longlong ***)local_a0;
                      FUN_00e7b970();
                      FUN_00e7b820();
                      local_d0 = local_40;
                      pppplVar12 = (longlong ****)((ulonglong)local_40 >> 0x20);
                      pVar10 = (pthread_key_t)((ulonglong)local_40 >> 0x20);
                      if ((local_70._4_4_ != 0) && (local_50._4_4_ != 0)) {
                        cVar3 = FUN_00e7c020();
                        if (cVar3 == '\0') goto LAB_01b7ed64;
                        pVar10 = (pthread_key_t)((ulonglong)local_d0 >> 0x20);
                      }
                      if (((pVar10 != 0) && (local_50._4_4_ != 0)) &&
                         (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
                        local_d0 = (longlong ***)local_50;
                      }
                      pppplVar5 = (longlong ****)unaff_RDI[0x2b];
                      if (pppplVar5 != (longlong ****)0x0) {
                        FUN_00d50b00();
                      }
                      pvVar6 = _pthread_getspecific(pVar10);
                      if (pvVar6 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      local_40 = local_60;
                      local_38[0] = '\0';
                      pppplVar12 = (longlong ****)local_d0;
                      FUN_012502a0(local_d0,local_70,(char)unaff_RDI[0x36]);
                      if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0))
                      {
                        FUN_00d50b20();
                      }
                      if (pppplVar5 != (longlong ****)0x0) {
                        FUN_00d50b20();
                      }
                      goto LAB_01b7eba0;
                    }
                  }
                  goto LAB_01b7ef63;
                }
              }
            }
            else {
LAB_01b7ea6f:
              if (((uStack_104 == 0) || (iStack_7c == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0')
                 ) {
                pppplVar12 = (longlong ****)CONCAT44(iStack_7c,local_80);
                uVar9 = CONCAT44(iStack_64,local_68);
                if ((((ulonglong)uStack_104 << 0x20 | (ulonglong)pppplVar12) >> 0x20 != 0) &&
                   (iStack_64 != 0)) goto LAB_01b7eac4;
              }
              else {
                uVar9 = CONCAT44(iStack_64,local_68);
              }
            }
            pVar10 = (pthread_key_t)pppplVar12;
            lVar7 = unaff_RDI[0x2b];
            if (((*(char *)((longlong)unaff_RDI + 0x1b4) == '\0') ||
                (pVar10 = 0, (ulonglong)local_78 >> 0x20 == 0)) ||
               ((pVar10 = (pthread_key_t)((ulonglong)local_50 >> 0x20),
                (ulonglong)local_50 >> 0x20 != 0 || ((uVar9 >> 0x20 == 0 || (iStack_7c == 0)))))) {
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific(pVar10);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = local_90;
              local_38[0] = '\0';
              FUN_012502a0(local_50,local_78,(char)unaff_RDI[0x36]);
              if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific(pVar10);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              pppplVar5 = local_78;
              ppplVar1 = local_90;
              local_40 = (longlong ***)local_78;
              FUN_00e7b820();
              FUN_00e7b970();
              ppplVar2 = local_40;
              local_40 = ppplVar1;
              local_38[0] = '\0';
              FUN_012502a0(ppplVar2,pppplVar5,(char)unaff_RDI[0x36]);
              if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
              local_40 = (longlong ***)local_78;
              FUN_00e7b820();
              FUN_00e7b970();
              local_c0 = (longlong ****)local_40;
              local_b8 = (longlong ****)FUN_00e7bdb0();
            }
            goto LAB_01b7ef63;
          }
          goto LAB_01b7f095;
        }
        goto LAB_01b7f0b9;
      }
      uVar9 = 0;
      goto LAB_01b7e44e;
    }
  }
  uVar9 = 0;
  goto LAB_01b7e45e;
LAB_01b7ed64:
  local_40 = (longlong ***)CONCAT44(iStack_7c,local_80);
  FUN_00e7b970();
  local_70 = (longlong ****)local_40;
  FUN_00e7b820();
  if ((local_58 != '\0') && ((longlong ****)local_60 != (longlong ****)0x0)) {
    FUN_00d50b20();
  }
  if (local_b0._4_4_ == 0) goto LAB_01b7ef63;
  goto LAB_01b7eb68;
LAB_01b7f2f4:
  if ((local_58 != '\0') && ((longlong ****)local_60 != (longlong ****)0x0)) {
    FUN_00d50b20();
  }
LAB_01b7ef63:
  (**(code **)(*unaff_RDI + 0xa50))();
  cVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar3 != '\0') {
    if ((local_c0._4_4_ == 0) && (uVar9 = (**(code **)(*unaff_RDI + 0x9d8))(), uVar9 >> 0x20 == 0))
    {
LAB_01b7efd3:
      if ((local_b8._4_4_ != 0) || (uVar9 = (**(code **)(*unaff_RDI + 0x9e0))(), uVar9 >> 0x20 != 0)
         ) {
        local_60 = (longlong ***)(**(code **)(*unaff_RDI + 0x9e0))();
        if (((local_b8._4_4_ == 0) || ((ulonglong)local_60 >> 0x20 == 0)) ||
           (cVar3 = FUN_00e7c000(), cVar3 == '\0')) goto LAB_01b7f021;
      }
    }
    else {
      local_40 = (longlong ***)(**(code **)(*unaff_RDI + 0x9d8))();
      if ((local_c0._4_4_ != 0) &&
         (((ulonglong)local_40 >> 0x20 != 0 && (cVar3 = FUN_00e7c000(), cVar3 != '\0'))))
      goto LAB_01b7efd3;
LAB_01b7f021:
      (**(code **)(*unaff_RDI + 0x9f0))();
      FUN_01b7bf20();
    }
  }
  if ((local_d8 != '\0') && ((longlong ****)local_e0 != (longlong ****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && ((longlong ****)local_90 != (longlong ****)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((longlong ****)local_f0 == (longlong ****)0x0) {
    uVar9 = CONCAT71((int7)((ulonglong)pppplVar5 >> 8),1);
  }
  else {
LAB_01b7f095:
    uVar9 = CONCAT71((int7)((ulonglong)pppplVar5 >> 8),(longlong ****)local_48 != (longlong ****)0x0
                    );
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b7f0b9:
  if ((longlong ****)local_f8 != (longlong ****)0x0) {
    FUN_00d50b20();
  }
LAB_01b7e44e:
  FUN_00d50b20();
LAB_01b7e45e:
  return uVar9 & 0xffffffff;
}




// ============================================================
// @00dd9520 — 4345 bytes
// str: ""multipart/form-data; boundary=%@""
// str: ""\r\n--%@\r\n""
// str: ""Content-Disposition: form-data; name=\"%@\"\r\n\r\n""
// str: ""Content-Disposition: form-data; name=\"%@\"; filename=\"%@\"\r\n""
// str: ""\r\n--%@--\r\n""
// ============================================================

void FUN_00dd9520(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong *unaff_RDI;
  undefined8 *puVar9;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  undefined8 *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined8 *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 *local_88;
  longlong *local_80;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  char local_58;
  undefined8 *local_50;
  longlong *local_48;
  char local_40;
  
  if ((longlong *)unaff_RDI[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x18))();
    plVar3 = local_80;
    if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x18))();
      local_110 = (longlong)local_80;
      local_108 = 0;
      local_198 = DAT_02784490;
      if ((char)local_78[0] == '\0') {
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
          local_198 = DAT_02784490;
        }
      }
      else {
        local_78[0] = local_78[0] & 0xffffff00;
      }
      local_108 = '\x01';
      DAT_02784490 = local_198;
      if (local_198 != 0) {
        local_108 = '\x01';
        FUN_00d50b00();
      }
      local_190 = '\x01';
      FUN_00de8b00();
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = DAT_02784498;
  if (DAT_02784498 != 0) {
    FUN_00d50b00();
  }
  local_188 = lVar6;
  local_180 = '\x01';
  FUN_00e94b30();
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  local_130 = 0;
  lVar6 = unaff_RDI[2];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_130 = '\x01';
  local_138 = lVar6;
  FUN_00db9a70();
  FUN_00dbb440();
  local_100 = (longlong)local_80;
  local_f8 = 0;
  local_178 = DAT_027844a0;
  if ((char)local_78[0] == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
      local_178 = DAT_027844a0;
    }
  }
  else {
    local_78[0] = local_78[0] & 0xffffff00;
  }
  local_f8 = '\x01';
  DAT_027844a0 = local_178;
  if (local_178 != 0) {
    local_f8 = '\x01';
    FUN_00d50b00();
  }
  local_170 = '\x01';
  (**(code **)(*unaff_RDI + 0x3a8))();
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  puVar9 = DAT_02784118;
  if (DAT_02784118 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_78[0] = 1;
  local_80 = &DAT_024c5048;
  local_68 = local_68 & 0xffffffffffffff00;
  local_88 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_70 = puVar9;
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_00d8cb40();
  puVar4 = local_b0;
  if ((char)local_a8[0] == '\0') {
    if (local_b0 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a8[0] = local_a8[0] & 0xffffff00;
  }
  local_80 = &DAT_024c5048;
  if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027844b8;
  local_50 = puVar4;
  local_168 = puVar4;
  local_160 = '\0';
  if (DAT_027844b8 != 0) {
    FUN_00d50b00();
  }
  local_158 = lVar6;
  local_150 = '\x01';
  (**(code **)(*unaff_RDI + 0x3a8))();
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  lVar6 = unaff_RDI[0x13];
  unaff_RDI[0x13] = (longlong)puVar4;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar3 = local_80;
  local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)local_78[0]);
  ppuVar5 = (undefined8 **)local_78;
  if ((char)local_78[0] == '\0') {
    ppuVar5 = &local_b0;
  }
  *(undefined1 *)ppuVar5 = 0;
  if (((char)local_78[0] != '\0') && (plVar3 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  iVar7 = *(int *)((longlong)plVar3 + 0xc);
  if ((char)local_b0 != '\0') {
    FUN_00d50b20();
  }
  if (iVar7 != 0) {
    FUN_00c9fe20();
    plVar3 = local_80;
    ppuVar5 = (undefined8 **)local_78;
    if ((char)local_78[0] == '\0') {
      ppuVar5 = &local_b0;
    }
    local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)local_78[0]);
    *(undefined1 *)ppuVar5 = 0;
    if (((char)local_78[0] != '\0') && (plVar3 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_b0 == '\0') {
      if (plVar3 == (undefined8 *)0x0) goto LAB_00dd9ed0;
      FUN_00d50b00();
    }
    else if (plVar3 == (undefined8 *)0x0) goto LAB_00dd9ed0;
    local_78[0] = local_78[0] & 0xffffff00;
    local_80 = (undefined8 *)0x0;
    local_1a0 = plVar3;
    local_70 = plVar3;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar7 = -local_68._4_4_;
        }
        else {
          iVar7 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar7);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar7 = 0;
        }
        local_68 = CONCAT44(iVar7,(int)local_68);
      }
      puVar9 = local_88;
      lVar6 = (longlong)(int)local_68;
      iVar7 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar7);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar7) break;
      local_148 = *(undefined8 **)(local_70[2] + 8 + lVar6 * 8);
      local_140 = '\0';
      local_80 = local_148;
      FUN_000175c0(unaff_RDI,&local_148);
      local_f0 = local_48;
      local_e8 = 0;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_e8 = '\x01';
      FUN_00d97750();
      puVar9 = local_b0;
      if ((char)local_a8[0] == '\0') {
        if (local_b0 != (undefined8 *)0x0) {
          FUN_00d50b00();
          if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8[0] = local_a8[0] & 0xffffff00;
      }
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar4 = local_88;
      if (puVar9 != (undefined8 *)0x0) {
        local_1a8 = puVar9;
        local_a8[0] = 1;
        local_b0 = &DAT_024c5048;
        local_98 = local_98 & 0xffffffffffffff00;
        if (local_88 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_a0 = puVar4;
        local_98 = CONCAT71(local_98._1_7_,1);
        FUN_00d8cb40();
        FUN_00d8cbf0();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_00c92190();
        FUN_00d50b20();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        local_b0 = &DAT_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        plVar3 = local_80;
        local_a8[0] = 1;
        local_b0 = &DAT_024c5048;
        local_98 = local_98 & 0xffffffffffffff00;
        if (local_80 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_a0 = plVar3;
        local_98 = CONCAT71(local_98._1_7_,1);
        FUN_00d8cb40();
        FUN_00d8cbf0();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_00c92190();
        FUN_00d50b20();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        local_b0 = &DAT_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d8cbf0();
        if ((char)local_a8[0] == '\0') {
          if (local_b0 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8[0] = local_a8[0] & 0xffffff00;
        }
        FUN_00c92190();
        FUN_00d50b20();
        if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_00dd9ed0:
  if ((undefined8 *)unaff_RDI[0x19] != (undefined8 *)0x0) {
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_b0 = (undefined8 *)0x0;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_a0 = (undefined8 *)unaff_RDI[0x19];
    while( true ) {
      puVar9 = local_88;
      lVar6 = (longlong)(int)local_98;
      iVar7 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar7);
      if (*(int *)((longlong)local_a0 + 0xc) <= iVar7) break;
      local_b0 = *(undefined8 **)(local_a0[2] + 8 + lVar6 * 8);
      local_78[0] = 1;
      local_80 = &DAT_024c5048;
      local_68 = local_68 & 0xffffffffffffff00;
      if (local_88 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar9;
      local_68 = CONCAT71(local_68._1_7_,1);
      FUN_00d8cb40();
      FUN_00d8cbf0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00c92190();
      FUN_00d50b20();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      lVar6 = local_b0[3];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      lVar1 = local_b0[4];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar1;
      local_118 = lVar6;
      FUN_00083ea0(2,&local_1b0);
      FUN_00d8cb40();
      FUN_00d8cbf0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00c92190();
      FUN_00d50b20();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      local_80 = (longlong *)&DAT_0253d630;
      if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar6 = DAT_02784120;
      if (DAT_02784120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cbf0();
      if ((char)local_78[0] == '\0') {
        if (local_80 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78[0] = local_78[0] & 0xffffff00;
      }
      FUN_00c92190();
      FUN_00d50b20();
      if (((char)local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (local_b0[2] != 0) {
        FUN_00d50b00();
      }
      FUN_00c92190();
      FUN_00d50b20();
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar7 = -local_98._4_4_;
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 - local_98._4_4_);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar7 = 0;
        }
        local_98 = CONCAT44(iVar7,(int)local_98);
      }
    }
    FUN_00ddb4f0();
    puVar9 = local_88;
  }
  local_78[0] = 1;
  local_80 = &DAT_024c5048;
  local_68 = local_68 & 0xffffffffffffff00;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_68 = CONCAT71(local_68._1_7_,1);
  local_70 = puVar9;
  FUN_00d8cb40();
  FUN_00d8cbf0();
  local_e0 = local_b0;
  local_d8 = 0;
  if ((char)local_a8[0] == '\0') {
    if (local_b0 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8[0] = local_a8[0] & 0xffffff00;
  }
  local_d8 = '\x01';
  FUN_00c8e5b0();
  if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8[0] != '\0') && (local_b0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  unaff_RDI[0x1a] = (longlong)*(int *)(unaff_RDI[0x13] + 0x18);
  FUN_00dd9100();
  FUN_00e922a0();
  puVar4 = local_50;
  if (local_80 != (longlong *)0x0) {
    iVar7 = *(int *)(unaff_RDI[0x19] + 0xc);
    if ((char)local_78[0] != '\0') {
      (**(code **)(*local_80 + 0x10))();
      FUN_00d50b20();
    }
    puVar4 = local_50;
    if (iVar7 != 0) {
      FUN_00e922a0();
      plVar3 = local_48;
      local_120 = 0;
      FUN_00d50b00();
      local_120 = '\x01';
      local_128 = unaff_RDI;
      FUN_00d23310();
      puVar4 = local_b0;
      puVar8 = (uint *)&local_118;
      if ((char)local_a8[0] != '\0') {
        puVar8 = local_a8;
      }
      local_118 = CONCAT71(local_118._1_7_,(char)local_a8[0]);
      *(undefined1 *)puVar8 = 0;
      if (((char)local_a8[0] != '\0') && (puVar4 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar2 = (undefined8 *)puVar4[4];
      if (puVar2 == (undefined8 *)0x0) {
        local_78[0] = 1;
        local_80 = &DAT_024c5048;
        local_68 = local_68 & 0xffffffffffffff00;
      }
      else {
        FUN_00d50b00();
        local_78[0] = 1;
        local_80 = &DAT_024c5048;
        local_68 = local_68 & 0xffffffffffffff00;
        FUN_00d50b00();
      }
      local_68 = CONCAT71(local_68._1_7_,1);
      local_70 = puVar2;
      FUN_00d8cb40();
      local_d0 = local_c0;
      local_c8 = 0;
      if (local_b8 == '\0') {
        if (local_c0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      puVar4 = local_50;
      local_c8 = '\x01';
      (**(code **)(*plVar3 + 0x20))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_118 != '\0') {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b791a0 — 3940 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b79855) */
/* WARNING: Removing unreachable block (ram,0x01b79865) */
/* WARNING: Removing unreachable block (ram,0x01b79bfc) */
/* WARNING: Removing unreachable block (ram,0x01b79c08) */
/* WARNING: Removing unreachable block (ram,0x01b7a06e) */
/* WARNING: Removing unreachable block (ram,0x01b7a07a) */

void FUN_01b791a0(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  longlong *unaff_RDI;
  longlong unaff_R12;
  bool bVar14;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  ulonglong local_a8;
  char local_a0;
  undefined4 local_98;
  int iStack_94;
  char local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  char local_68 [16];
  undefined8 local_58;
  char local_50;
  longlong local_40;
  char local_38 [8];
  
  if ((longlong *)unaff_RDI[0x29] == (longlong *)0x0) {
    return;
  }
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x970))();
  if (local_40 == 0) {
    cVar1 = '\x01';
  }
  else {
    (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x970))();
    iVar2 = FUN_00d8c7a0();
    if (iVar2 == 0) {
      cVar1 = '\x01';
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x970))();
      FUN_00d95590();
      lVar6 = CONCAT44(iStack_94,local_98);
      if (local_90 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      cVar1 = FUN_00d90dc0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (CONCAT44(iStack_94,local_98) != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x970))();
    local_c0 = local_58;
    local_b8 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_b8 = '\x01';
    lVar6 = unaff_RDI[0x2a];
    (**(code **)(*unaff_RDI + 0x948))(lVar6,&local_c0);
    param_1 = (pthread_key_t)lVar6;
    if (local_38[0] == '\0') {
      if (local_40 == 0) {
        local_80 = 0;
      }
      else {
        local_80 = local_40;
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_80 = local_40;
      local_38[0] = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 == 0) {
      local_70 = (**(code **)(*unaff_RDI + 0x9d8))();
      local_78 = (**(code **)(*unaff_RDI + 0x9e0))();
      local_80 = 0;
      goto LAB_01b7a003;
    }
  }
  else {
    local_80 = 0;
  }
  (**(code **)(*unaff_RDI + 0xa48))();
  uVar4 = unaff_RDI[0x2a];
  if (uVar4 >> 0x20 == 0) {
    unaff_R12 = unaff_RDI[0x2b];
    if (unaff_R12 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar7 = &local_70;
    FUN_01252670(puVar7,0,&local_78,0);
    uVar8 = CONCAT71((int7)((ulonglong)puVar7 >> 8),local_38[0]);
    pcVar12 = local_68 + 8;
    if (local_38[0] != '\0') {
      pcVar12 = local_38;
    }
    local_68[8] = local_38[0];
    *pcVar12 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_1 = (pthread_key_t)uVar8;
    if (local_40 == 0) goto LAB_01b79527;
    bVar14 = true;
    lVar6 = local_40;
    local_b0 = unaff_R12;
    if (local_68[8] != '\0') {
      FUN_00d50b20();
    }
LAB_01b796ad:
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    pVar5 = (pthread_key_t)uVar8;
    if (!bVar14) goto LAB_01b796c7;
LAB_01b79606:
    if ((*(char *)((longlong)unaff_RDI + 0x1b4) == '\0') && (cVar1 == '\x01')) {
      if ((local_70 >> 0x20 != 0) ||
         (pVar5 = (pthread_key_t)(local_78 >> 0x20), local_78 >> 0x20 != 0)) {
        local_50 = '\0';
        local_58 = 0;
        if (local_70 >> 0x20 == 0) {
          lVar6 = unaff_RDI[0x2b];
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = local_78;
          FUN_012521f0(local_78,0,&local_a8,&local_98);
          pVar5 = (pthread_key_t)CONCAT71((int7)(uVar4 >> 8),local_38[0]);
          pcVar12 = local_68;
          if (local_38[0] != '\0') {
            pcVar12 = local_38;
          }
          local_68[0] = local_38[0];
          *pcVar12 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          cVar1 = local_50;
          lVar9 = local_58;
          if (local_58 == local_40) {
            if ((local_50 == '\0') && (local_40 != 0)) {
              if (local_68[0] == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01b79edf;
            }
            if ((local_68[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_68[0] == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              local_58 = local_40;
              if ((cVar1 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = local_40;
              if ((local_50 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01b79edf:
            local_50 = '\x01';
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            lVar6 = unaff_RDI[0x2b];
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar9 = local_58;
            local_38[0] = '\0';
            FUN_012502a0(CONCAT44(iStack_94,local_98),local_70,(char)unaff_RDI[0x36]);
            if ((local_38[0] != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          lVar6 = unaff_RDI[0x2b];
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = local_70;
          FUN_012521f0(local_70,0,&local_a8,&local_98);
          pVar5 = (pthread_key_t)CONCAT71((int7)(uVar4 >> 8),local_38[0]);
          pcVar12 = local_68;
          if (local_38[0] != '\0') {
            pcVar12 = local_38;
          }
          local_68[0] = local_38[0];
          *pcVar12 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          cVar1 = local_50;
          lVar9 = local_58;
          if (local_58 == local_40) {
            if ((local_50 == '\0') && (local_40 != 0)) {
              if (local_68[0] == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01b79dd7;
            }
            if ((local_68[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_68[0] == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              local_58 = local_40;
              if ((cVar1 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = local_40;
              if ((local_50 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01b79dd7:
            local_50 = '\x01';
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            lVar6 = unaff_RDI[0x2b];
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar11 = &local_a8;
            cVar1 = FUN_012535e0(puVar11,&local_58,&local_98,0);
            pVar5 = (pthread_key_t)puVar11;
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            if (cVar1 != '\0') {
              lVar6 = unaff_RDI[0x2b];
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar9 = local_58;
              local_38[0] = '\0';
              FUN_012502a0(local_78,local_a8,(char)unaff_RDI[0x36]);
              if ((local_38[0] != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if ((char)unaff_RDI[0x3b] != '\0') {
        local_70 = unaff_RDI[0x2a];
      }
      lVar6 = unaff_RDI[0x2b];
      plVar10 = unaff_RDI;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar10);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = local_80;
      local_38[0] = '\0';
      FUN_012502a0(local_78,local_70,(char)unaff_RDI[0x36]);
      if ((local_38[0] != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xa80))(local_78,local_70);
    }
  }
  else {
LAB_01b79527:
    lVar6 = unaff_RDI[0x2b];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar9 = unaff_RDI[0x2a];
    FUN_012521f0(lVar9,0,&local_70,&local_78);
    uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),local_38[0]);
    pcVar12 = (char *)&local_58;
    if (local_38[0] != '\0') {
      pcVar12 = local_38;
    }
    local_58 = CONCAT71(local_58._1_7_,local_38[0]);
    *pcVar12 = '\0';
    local_b0 = unaff_R12;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar14 = local_40 != 0;
    if (((char)local_58 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    pVar5 = (pthread_key_t)uVar8;
    if (uVar4 >> 0x20 == 0) goto LAB_01b796ad;
    if (local_40 != 0) goto LAB_01b79606;
LAB_01b796c7:
    if (cVar1 == '\0') {
      local_a8 = FUN_00e7bcc0();
      uVar13 = (undefined4)CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      if (unaff_RDI[0x2c] == 0) {
LAB_01b7986f:
        local_40 = 0;
      }
      else {
        FUN_01a8c310();
        pVar5 = (pthread_key_t)uVar8;
        if (local_40 == 0) goto LAB_01b7986f;
        if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar5 = 0;
        local_58 = FUN_016cac90(0,1);
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (((local_58._4_4_ != 0) && (*(int *)((longlong)unaff_RDI + 0x154) != 0)) &&
           (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
          local_98 = 1;
          FUN_00e7c260();
        }
        uVar8 = 0;
        uVar4 = FUN_016cac90(0,2);
        FUN_00e7b970();
        local_a8 = uVar4;
        if ((uVar4 >> 0x20 != 0) && (cVar1 = FUN_00e7c650(), cVar1 == '\0')) {
          local_a8 = FUN_00e7bcc0();
        }
        uVar13 = 0;
      }
      local_b0 = CONCAT44(local_b0._4_4_,uVar13);
      uVar4 = unaff_RDI[0x2a];
      local_88 = local_40;
      local_70 = uVar4;
      FUN_00e7b820();
      local_68[0] = -1;
      local_68[1] = -1;
      local_68[2] = -1;
      local_68[3] = -1;
      local_50 = '\0';
      local_58 = 0;
      local_78 = uVar4;
      do {
        pVar5 = (pthread_key_t)uVar8;
        lVar6 = unaff_RDI[0x2b];
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = local_78;
        cVar1 = FUN_01252960(local_78,local_70,&local_58,&local_98);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar5 = (pthread_key_t)uVar8;
        if (cVar1 == '\0') goto LAB_01b79b2b;
      } while (local_58 == 0);
      local_78 = CONCAT44(iStack_94,local_98);
      if (((local_70._4_4_ != 0) && (iStack_94 != 0)) &&
         (cVar1 = FUN_00e7c020(), uVar4 = local_78, cVar1 == '\0')) {
        FUN_00e7b970();
        local_70 = uVar4;
      }
LAB_01b79b2b:
      lVar6 = unaff_RDI[0x2b];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = local_80;
      local_38[0] = '\0';
      FUN_012502a0(local_78,local_70,(char)unaff_RDI[0x36]);
      if ((local_38[0] != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xa80))(local_78,local_70);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_b0 == '\0') {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0xa50))();
LAB_01b7a003:
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x478))();
  if (unaff_RDI[0x29] != 0) {
    unaff_RDI[0x29] = 0;
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x998))();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_RDI + 0x9a8))();
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_RDI + 0x9f0))();
    FUN_01e42250();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d13d80 — 3612 bytes
// ============================================================

ulonglong FUN_01d13d80(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong unaff_R14;
  undefined7 uVar11;
  longlong *plVar12;
  longlong local_278;
  char local_270;
  longlong local_268;
  char local_260;
  longlong *local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong *local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  int local_124;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  int local_70;
  undefined8 local_6c;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  ulonglong local_48;
  longlong *local_40;
  uint local_34;
  
  local_278 = *unaff_RSI;
  local_270 = '\0';
  FUN_01ccaae0(param_1,&local_278);
  local_98 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  if (local_98 != (longlong *)0x0) {
    FUN_01d28610();
    if (local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        local_90 = local_88;
        FUN_00d50b00();
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d13e76;
      }
    }
    else {
      local_90 = local_88;
      if (local_88 != (longlong *)0x0) {
LAB_01d13e76:
        local_268 = *unaff_RSI;
        local_260 = '\0';
        FUN_01ccab60();
        local_60 = local_88;
        if (local_80 == '\0') {
          if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
             (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80 = '\0';
        }
        if ((local_260 != '\0') && (local_268 != 0)) {
          FUN_00d50b20();
        }
        plVar12 = local_60;
        if (local_60 == (longlong *)0x0) goto LAB_01d14b61;
        cVar4 = FUN_00d8ca50();
        lVar9 = DAT_02774da0;
        if (cVar4 == '\0') {
          (**(code **)(*local_98 + 0x3f8))();
          local_a8 = local_58;
          local_a0 = 0;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_a0 = '\x01';
          FUN_00c880c0();
          plVar7 = local_88;
          if (local_80 == '\0') {
            if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
               (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = '\0';
          }
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar11 = (undefined7)(unaff_R14 >> 8);
          unaff_R14 = CONCAT71(uVar11,1);
          plVar12 = local_60;
          if (plVar7 == (longlong *)0x0) goto LAB_01d14b61;
          local_258 = local_60;
          local_250 = '\0';
          FUN_00c841b0();
          plVar12 = local_88;
          if (local_80 == '\0') {
            if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
               (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = '\0';
          }
          if ((local_250 != '\0') && (local_258 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 == (longlong *)0x0) {
            FUN_00d50b20();
            plVar12 = local_60;
            goto LAB_01d14b61;
          }
          local_118 = 0;
          (**(code **)(*(longlong *)(unaff_RDI + 0x50) + 0x10))();
          FUN_00d50b00();
          local_118 = '\x01';
          local_248 = 0;
          local_240 = '\0';
          local_238 = plVar12;
          local_230 = '\0';
          local_120 = (longlong *)(unaff_RDI + 0x50);
          FUN_00cbad30(&local_238,&local_248,0x20);
          if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_240 != '\0') && (local_248 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
            (**(code **)(*local_120 + 0x10))();
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
          unaff_R14 = CONCAT71(uVar11,1);
          bVar3 = false;
LAB_01d14b68:
          bVar2 = bVar3;
          FUN_00d50b20();
        }
        else {
          if (DAT_02774da0 != 0) {
            FUN_00d50b00();
          }
          local_228 = lVar9;
          local_220 = '\x01';
          FUN_00d91000(1,&local_228);
          plVar7 = local_88;
          if (local_80 == '\0') {
            if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
               (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = '\0';
          }
          if ((local_220 != '\0') && (local_228 != 0)) {
            FUN_00d50b20();
          }
          plVar12 = local_60;
          if (plVar7 == (longlong *)0x0) {
LAB_01d14b61:
            bVar3 = true;
            bVar2 = true;
          }
          else {
            local_80 = '\0';
            local_88 = (longlong *)0x0;
            local_b0 = plVar7;
            local_78 = plVar7;
            local_6c = 0;
            plVar12 = (longlong *)(unaff_RDI + 0x50);
            lVar9 = 0;
            plVar7 = (longlong *)0x0;
            local_48 = 0;
            while( true ) {
              iVar8 = (int)lVar9;
              iVar6 = *(int *)((longlong)local_b0 + 0xc);
              local_70 = iVar8;
              if (iVar6 <= iVar8) break;
              plVar1 = *(longlong **)(local_b0[2] + lVar9 * 8);
              local_124 = iVar6;
              local_88 = plVar1;
              if (iVar8 == 0) {
                uVar5 = FUN_01d25f70();
                plVar10 = local_58;
                uVar11 = (undefined7)((ulonglong)uVar5 >> 8);
                if (local_58 == plVar7) {
                  plVar10 = plVar7;
                  if (((char)local_48 != '\0') || (local_58 == (longlong *)0x0)) {
                    local_34 = (uint)local_48;
                    goto LAB_01d1407c;
                  }
                  local_34 = (uint)CONCAT71(uVar11,1);
                  if (local_50 == '\0') {
                    local_34 = (uint)CONCAT71(uVar11,1);
                    FUN_00d50b00();
                    if (local_50 == '\0') goto LAB_01d14090;
                    goto LAB_01d14082;
                  }
                }
                else {
                  if (local_50 != '\0') {
                    local_34 = (uint)CONCAT71(uVar11,1);
                    if (((char)local_48 != '\0') && (plVar7 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01d14090;
                  }
                  if (local_58 != (longlong *)0x0) {
                    uVar5 = FUN_00d50b00();
                  }
                  local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                  if (((char)local_48 != '\0') && (plVar7 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01d1407c:
                  plVar7 = plVar10;
                  plVar10 = plVar7;
                  if (local_50 != '\0') {
LAB_01d14082:
                    plVar10 = plVar7;
                    if (local_58 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                }
LAB_01d14090:
                if (plVar10 != (longlong *)0x0) {
                  local_40 = plVar10;
                  if (*(int *)((longlong)local_b0 + 0xc) == 1) goto LAB_01d145fe;
                  goto LAB_01d140bb;
                }
                local_108 = 0;
                (**(code **)(*plVar12 + 0x10))();
                FUN_00d50b00();
                local_108 = '\x01';
                local_218 = 0;
                local_210 = '\0';
                local_208 = 0;
                local_200 = '\0';
                local_110 = plVar12;
                FUN_00cbadd0(&local_208,&local_218);
                plVar12 = local_60;
                if ((local_200 != '\0') && (local_208 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_210 != '\0') && (local_218 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                  (**(code **)(*local_110 + 0x10))();
                  FUN_00d50b20();
                }
                plVar7 = (longlong *)0x0;
LAB_01d14b1a:
                unaff_R14 = 0;
LAB_01d14b1d:
                FUN_00018280();
                cVar4 = (char)local_34;
                iVar6 = local_124;
                goto LAB_01d14b36;
              }
              local_34 = (uint)local_48;
              local_40 = plVar7;
              if (iVar8 + 1 == iVar6) {
LAB_01d145fe:
                plVar7 = local_40;
                local_1f0 = '\0';
                local_1f8 = plVar1;
                FUN_00c841b0();
                plVar10 = local_58;
                if (local_50 == '\0') {
                  if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                     (local_58 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_50 = '\0';
                }
                if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar10 == (longlong *)0x0) {
                  local_e8 = 0;
                  (**(code **)(*plVar12 + 0x10))();
                  FUN_00d50b00();
                  local_e8 = '\x01';
                  local_1c8 = 0;
                  local_1c0 = '\0';
                  local_1b8 = 0;
                  local_1b0 = '\0';
                  local_f0 = plVar12;
                  FUN_00cbadd0(&local_1b8,&local_1c8);
                  plVar12 = local_60;
                  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                    (**(code **)(*local_f0 + 0x10))();
                    FUN_00d50b20();
                  }
                  goto LAB_01d14b1a;
                }
                local_f8 = 0;
                (**(code **)(*plVar12 + 0x10))();
                FUN_00d50b00();
                local_f8 = '\x01';
                local_1e8 = 0;
                local_1e0 = '\0';
                local_1d8 = plVar10;
                local_1d0 = '\0';
                local_100 = plVar12;
                FUN_00cbad30(&local_1d8,&local_1e8,0x20);
                plVar12 = local_60;
                if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1e0 != '\0') && (local_1e8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
                  (**(code **)(*local_100 + 0x10))();
                  FUN_00d50b20();
                }
                unaff_R14 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
                FUN_00d50b20();
                goto LAB_01d14b1d;
              }
LAB_01d140bb:
              lVar9 = lVar9 + 1;
              local_1a0 = '\0';
              local_1a8 = plVar1;
              FUN_00c84370();
              plVar1 = local_58;
              if (local_50 == '\0') {
                if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                   (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
              }
              if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar7 = local_40;
              if (plVar1 == (longlong *)0x0) {
                FUN_00c7e7b0();
                plVar1 = local_58;
                local_198 = DAT_027ef808;
                if (DAT_027ef808 != 0) {
                  FUN_00d50b00();
                }
                local_190 = '\x01';
                (**(code **)(*plVar1 + 0x50))();
                if ((local_190 != '\0') && (local_198 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_d8 = 0;
                (**(code **)(*plVar12 + 0x10))();
                FUN_00d50b00();
                local_d8 = '\x01';
                local_188 = 0;
                local_180 = '\0';
                local_178 = 0;
                local_170 = '\0';
                local_e0 = plVar12;
                FUN_00cbadd0(&local_178,&local_188);
                plVar12 = local_60;
                if ((local_170 != '\0') && (local_178 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                  (**(code **)(*local_e0 + 0x10))();
                  FUN_00d50b20();
                }
                goto LAB_01d14b1a;
              }
              local_c8 = 0;
              (**(code **)(*plVar12 + 0x10))();
              FUN_00d50b00();
              local_c8 = '\x01';
              local_168 = 0;
              local_160 = '\0';
              local_158 = plVar1;
              local_150 = '\0';
              local_d0 = plVar12;
              FUN_00cbad30(&local_158,&local_168,0x20);
              if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_160 != '\0') && (local_168 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                (**(code **)(*local_d0 + 0x10))();
                FUN_00d50b20();
              }
              uVar5 = FUN_00d77e40();
              plVar7 = local_40;
              uVar11 = (undefined7)((ulonglong)uVar5 >> 8);
              if (local_58 == local_40) {
                if (((char)local_34 != '\0') || (local_58 == (longlong *)0x0)) {
                  local_48 = (ulonglong)local_34;
                  goto LAB_01d142a3;
                }
                local_48 = CONCAT71(uVar11,1);
                if (local_50 == '\0') {
                  local_48 = CONCAT71(uVar11,1);
                  FUN_00d50b00();
                  if (local_50 == '\0') goto LAB_01d142b7;
                  goto LAB_01d142a9;
                }
              }
              else {
                plVar7 = local_58;
                if (local_50 != '\0') {
                  local_48 = CONCAT71(uVar11,1);
                  if (((char)local_34 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01d142b7;
                }
                if (local_58 != (longlong *)0x0) {
                  uVar5 = FUN_00d50b00();
                }
                local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                if (((char)local_34 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01d142a3:
                if (local_50 != '\0') {
LAB_01d142a9:
                  if (local_58 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                }
              }
LAB_01d142b7:
              if (plVar7 == (longlong *)0x0) {
                local_b8 = 0;
                (**(code **)(*plVar12 + 0x10))();
                FUN_00d50b00();
                local_b8 = '\x01';
                local_148 = 0;
                local_140 = '\0';
                local_138 = 0;
                local_130 = '\0';
                local_c0 = plVar12;
                FUN_00cbadd0(&local_138,&local_148);
                plVar12 = local_60;
                if ((local_130 != '\0') && (local_138 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_140 != '\0') && (local_148 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                  (**(code **)(*local_c0 + 0x10))();
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                plVar7 = (longlong *)0x0;
                local_34 = (uint)local_48;
                goto LAB_01d14b1a;
              }
              FUN_00d50b20();
            }
            FUN_00018280();
            unaff_R14 = 0;
            cVar4 = (char)local_48;
            plVar12 = local_60;
LAB_01d14b36:
            if ((cVar4 != '\0') && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (iVar6 <= iVar8) goto LAB_01d14b61;
            bVar3 = false;
            bVar2 = false;
          }
          if (plVar12 != (longlong *)0x0) goto LAB_01d14b68;
        }
        FUN_00d50b20();
        if (!bVar2) goto LAB_01d14b83;
      }
    }
  }
  unaff_R14 = 0;
LAB_01d14b83:
  if (local_98 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_R14 & 0xffffff01;
}




// ============================================================
// @01b96de0 — 3459 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01b96de0(pthread_key_t param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  longlong **pplVar13;
  undefined4 uVar14;
  undefined8 local_120;
  ulonglong local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  char local_a0;
  ulonglong local_98;
  longlong *local_90;
  char local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if ((cVar2 == '\0') || (cVar2 = (**(code **)(*unaff_RDI + 0xa20))(), cVar2 == '\0')) {
    uVar11 = 0;
    goto LAB_01b96e4d;
  }
  (**(code **)(*unaff_RDI + 0x978))();
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  uVar3 = FUN_01b71a90();
  uVar11 = (ulonglong)uVar3;
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar3 & param_2) == 0) goto LAB_01b96e4d;
  plVar5 = (longlong *)FUN_00e7bdb0();
  local_98 = FUN_00e7bdb0();
  FUN_01caeae0();
  plVar12 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b96f18;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01b96f18:
    local_58 = plVar12;
    uVar14 = FUN_01d66da0();
    local_110 = DAT_027e2690;
    local_60 = plVar5;
    if (DAT_027e2690 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_108 = '\x01';
    pplVar13 = &local_40;
    FUN_000175c0(uVar14,&local_110);
    plVar12 = local_40;
    if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026d4348 = FUN_00d4fe50();
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      param_1 = 0x53cb0;
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
    if (plVar12 == (longlong *)0x0) {
LAB_01b96f9e:
      pplVar13 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01b96f9e;
    }
    plVar12 = *pplVar13;
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar13 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_01d66da0();
    local_100 = DAT_027652e0;
    if (DAT_027652e0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    pplVar13 = &local_40;
    FUN_000175c0(uVar14,&local_100);
    plVar5 = local_40;
    if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026d4348 = FUN_00d4fe50();
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      param_1 = 0x53cb0;
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
    if (plVar5 == (longlong *)0x0) {
LAB_01b97088:
      pplVar13 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01b97088;
    }
    plVar10 = *pplVar13;
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar13 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar12 == (longlong *)0x0) || (plVar10 == (longlong *)0x0)) {
      FUN_01e42030();
      if (local_40 == (longlong *)0x0) {
        cVar2 = '\0';
      }
      else {
        FUN_01e42030();
        FUN_01d8b200();
        if (local_50 == unaff_RDI) {
          cVar2 = (**(code **)(*unaff_RDI + 0x9d0))();
        }
        else {
          cVar2 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar5 = local_60;
      if (cVar2 != '\0') {
        plVar5 = (longlong *)(**(code **)(*unaff_RDI + 0x9d8))();
        local_98 = (**(code **)(*unaff_RDI + 0x9e0))();
      }
    }
    else {
      plVar5 = (longlong *)FUN_00dd6320();
      local_98 = FUN_00dd6320();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x988))();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar12 = (longlong *)0x0;
  if (unaff_RDI[0x3f] == 0) {
LAB_01b972f4:
    local_80 = 0;
    local_60 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = unaff_RDI[0x3f];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    plVar12 = &DAT_02802558;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    plVar10 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) goto LAB_01b972f4;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_60 = local_40;
    plVar10 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    param_1 = (pthread_key_t)plVar10;
    FUN_00d50b20();
  }
  if ((local_58 != (longlong *)0x0) && (*(int *)((longlong)local_58 + 0xc) != 0)) {
    FUN_01787610();
    local_68 = local_40;
    plVar12 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), plVar12 = local_68, local_38 != '\0')) &&
        (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    local_f0 = local_58;
    local_e8 = '\0';
    (**(code **)(*plVar12 + 0x370))();
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01787560();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    plVar12 = local_40;
    pvVar6 = _pthread_getspecific(param_1);
    plVar10 = local_40;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar12 = plVar10, lVar7 != 0)) {
      plVar12 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    FUN_017874b0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((ulonglong)plVar5 >> 0x20 == 0) && (local_98 >> 0x20 == 0)) {
      local_e0 = local_60;
      local_d8 = '\0';
      (**(code **)(*local_68 + 0x380))(plVar5,&local_e0,local_98,(int)unaff_RDI[0x43]);
      plVar10 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0xa48))();
        FUN_01b6d0d0();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar5);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = '\0';
        local_40 = (longlong *)0x0;
        FUN_0124f820();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = '\0';
        local_50 = (longlong *)0x0;
        local_ac = 0xffffffff;
        while( true ) {
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar5);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar12 = (longlong *)FUN_00e7bdb0();
          uVar8 = FUN_00e7bdb0();
          cVar2 = FUN_01252960(uVar8,plVar12,&local_50,&local_120);
          pVar9 = (pthread_key_t)uVar8;
          if (cVar2 == '\0') break;
          FUN_01b6d0d0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d51d20();
          plVar12 = local_a8;
          if (local_a0 == '\0') {
            if (local_a8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_40 = plVar12;
          local_38 = '\0';
          plVar5 = (longlong *)local_118;
          FUN_012502a0(local_118,local_120,1);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*unaff_RDI + 0xa50))();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_68 == (longlong *)0x0) goto LAB_01b97983;
      }
    }
    else {
      local_d0 = local_60;
      local_c8 = '\0';
      local_c0 = 0;
      local_b8 = '\0';
      uVar11 = (ulonglong)plVar5;
      (**(code **)(*local_68 + 0x378))(plVar5,&local_d0,local_98,&local_c0);
      plVar10 = local_40;
      pVar9 = (pthread_key_t)uVar11;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0xa48))();
        FUN_01b6d0d0();
        plVar12 = local_50;
        pvVar6 = _pthread_getspecific(pVar9);
        plVar1 = local_50;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar12 = plVar1, lVar7 != 0)) {
          plVar12 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        local_38 = '\0';
        local_40 = plVar10;
        FUN_012502a0(local_98,plVar5,(char)unaff_RDI[0x36]);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xa50))();
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
LAB_01b97983:
  if (((char)local_80 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01b96e4d:
  return uVar11 & 0xffffffff;
}




// ============================================================
// @01a72920 — 2771 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01a72aa4) */
/* WARNING: Removing unreachable block (ram,0x01a72aad) */
/* WARNING: Removing unreachable block (ram,0x01a72b94) */
/* WARNING: Removing unreachable block (ram,0x01a72b9d) */
/* WARNING: Removing unreachable block (ram,0x01a732f2) */
/* WARNING: Removing unreachable block (ram,0x01a732fb) */
/* WARNING: Removing unreachable block (ram,0x01a72cb6) */
/* WARNING: Removing unreachable block (ram,0x01a72cc3) */
/* WARNING: Removing unreachable block (ram,0x01a72d9d) */
/* WARNING: Removing unreachable block (ram,0x01a72da6) */
/* WARNING: Removing unreachable block (ram,0x01a72b80) */
/* WARNING: Removing unreachable block (ram,0x01a72b89) */

longlong * FUN_01a72920(pthread_key_t param_1,undefined8 param_2,char param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  short sVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong *unaff_RDI;
  longlong *plVar12;
  longlong local_50;
  char local_48;
  
  pVar10 = param_1;
  iVar4 = FUN_01715620();
  if (*param_4 == 0) {
    iVar5 = 0;
    cVar2 = '\0';
  }
  else {
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01743720();
    plVar12 = (longlong *)*param_4;
    if (plVar12 == (longlong *)0x0) {
      cVar2 = '\0';
    }
    else {
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        plVar12 = (longlong *)*param_4;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      cVar2 = (**(code **)(*plVar12 + 0x400))();
    }
  }
  iVar4 = iVar4 * 7;
  iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
  iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
  lVar8 = local_50;
  if ((param_3 == '\0') && (*param_4 != 0)) {
    FUN_017178d0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    do {
      iVar4 = iVar4 + param_1 * 2 + -1;
      iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
      iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
      cVar3 = FUN_01716980();
    } while (cVar3 == '\0');
    uVar11 = 0;
    iVar6 = 0;
    if (cVar2 == '\0') {
LAB_01a72cf6:
      if (iVar6 < iVar5) {
        iVar6 = -1;
        if (5 < iVar5) {
          iVar6 = iVar5 + -6;
        }
      }
      else {
        iVar6 = -6;
        if (iVar5 < -5) {
          iVar6 = iVar5 + -1;
        }
      }
      sVar9 = (short)((short)iVar4 * 7) % 0xc;
      iVar5 = sVar9 + 0xc;
      if (-1 < sVar9) {
        iVar5 = (int)sVar9;
      }
      iVar5 = iVar5 - iVar6;
      uVar11 = (int)(iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc)
               >> 0x1f & 0xc;
    }
    else if (((iVar5 != 1) || (iVar4 != 6)) && ((iVar5 != 2 || (iVar4 != 1)))) {
      iVar5 = iVar5 + -3;
      iVar6 = -(uint)(iVar5 == 0);
      goto LAB_01a72cf6;
    }
    FUN_01716350(uVar11);
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    if (iVar4 == 0) {
LAB_01a72e0b:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 1 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((1 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 2) goto LAB_01a72e69;
LAB_01a72ec4:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 3 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((3 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 4) goto LAB_01a72f1f;
LAB_01a72f7a:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 5 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((5 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 6) goto LAB_01a72fd7;
LAB_01a73034:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 7 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((7 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 8) goto LAB_01a7308f;
LAB_01a730ea:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 9 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((9 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 10) goto LAB_01a73145;
LAB_01a731a0:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar5 = FUN_01715480();
        iVar4 = 0xb - iVar5 >> 0x1f;
        FUN_01715d40((((uint)((0xb - iVar5) / 6 + iVar4) >> 1) - iVar4) * 0xc,0);
      }
    }
    else {
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        FUN_01715480();
        FUN_01715d40(0,0);
      }
      if (iVar4 != 1) goto LAB_01a72e0b;
LAB_01a72e69:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 2 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((2 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 3) goto LAB_01a72ec4;
LAB_01a72f1f:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 4 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((4 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 5) goto LAB_01a72f7a;
LAB_01a72fd7:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 6 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((6 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 7) goto LAB_01a73034;
LAB_01a7308f:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 8 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((8 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 9) goto LAB_01a730ea;
LAB_01a73145:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 10 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((10 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 0xb) goto LAB_01a731a0;
    }
    FUN_01716e60();
    FUN_01716350();
    if (local_50 == 0) {
      lVar8 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    iVar4 = 1;
    do {
      cVar2 = FUN_01716e70();
      if (cVar2 != '\0') {
        FUN_01717260();
        FUN_01715480();
        cVar2 = FUN_01716980();
        if ((cVar2 != '\0') && (iVar5 = FUN_01717260(), iVar5 == -1)) {
          FUN_01717260();
        }
        FUN_01715d40();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xd);
    if (local_50 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
      goto LAB_01a733a7;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1) goto LAB_01a733c4;
  }
  else {
    FUN_01716260();
    if (local_50 == 0) {
      lVar8 = 0;
      bVar1 = false;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    FUN_01715d30();
LAB_01a733a7:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1) goto LAB_01a733c4;
  }
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
LAB_01a733c4:
  *unaff_RDI = lVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @00dc1400 — 2620 bytes
// ============================================================

void FUN_00dc1400(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar9;
  bool bVar10;
  undefined1 local_res8;
  undefined8 *local_res10;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined1 local_278;
  longlong *local_270;
  undefined1 local_268;
  longlong local_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined1 local_248;
  longlong local_240;
  undefined1 local_238;
  undefined8 local_230;
  undefined1 local_228;
  longlong *local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined1 local_208;
  longlong *local_200;
  undefined1 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined1 local_178;
  longlong *local_170;
  undefined1 local_168;
  longlong *local_160;
  undefined1 local_158;
  longlong *local_150;
  undefined1 local_148;
  undefined8 *local_140;
  undefined1 local_138 [8];
  undefined1 local_130;
  ulonglong local_128;
  longlong *local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  if (*param_1 == 0) {
    return;
  }
  local_140 = param_3;
  FUN_00dbdd00();
  plVar7 = local_58;
  if ((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_118 = plVar7;
  local_110 = '\0';
  local_290 = *param_4;
  local_288 = 0;
  FUN_00dbe290(&local_290,&local_118,local_res8);
  plVar1 = local_58;
  if (plVar7 == local_58) {
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50[0] == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar9 = plVar7 != (longlong *)0x0;
    plVar7 = plVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  else {
    bVar9 = plVar7 != (longlong *)0x0;
    plVar7 = plVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_100 = '\0';
  local_280 = *local_res10;
  local_278 = 0;
  local_108 = plVar7;
  FUN_00dbe120();
  plVar1 = local_58;
  if (plVar7 == local_58) {
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50[0] == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar9 = plVar7 != (longlong *)0x0;
    plVar7 = plVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  else {
    bVar9 = plVar7 != (longlong *)0x0;
    plVar7 = plVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_58;
  local_68 = local_50[0];
  pcVar5 = &local_68;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00dc1666;
    }
  }
  else if (plVar1 != (longlong *)0x0) {
LAB_00dc1666:
    local_50[0] = '\0';
    local_58 = (longlong *)0x0;
    local_120 = plVar1;
    local_48 = plVar1;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    bVar9 = false;
    local_128 = param_2 & 0xffffffff;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar8 = -local_40._4_4_;
        }
        else {
          iVar8 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar8);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar8 = 0;
        }
        local_40 = CONCAT44(iVar8,(int)local_40);
      }
      lVar2 = DAT_027f37d8;
      lVar6 = (longlong)(int)local_40;
      iVar8 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar8);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar8) break;
      plVar1 = *(longlong **)(local_48[2] + 8 + lVar6 * 8);
      local_58 = plVar1;
      if (DAT_027f37d8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar2;
      local_f0 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_e8 = local_58;
        local_e0 = '\0';
        FUN_000175c0();
        lVar2 = CONCAT71(uStack_67,local_68);
        if (local_60 == '\0') {
          if (((lVar2 != 0) && (FUN_00d50b00(), local_60 != '\0')) &&
             (CONCAT71(uStack_67,local_68) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_270 = local_58;
        local_268 = 0;
        local_258 = 0;
        local_260 = lVar2;
        cVar4 = FUN_00dc2ff0();
        if (cVar4 == '\0') {
          bVar9 = true;
        }
        else {
          local_250 = *unaff_RDI;
          local_248 = 0;
          local_d0 = '\0';
          local_c8 = local_58;
          local_c0 = '\0';
          local_238 = 0;
          local_240 = lVar2;
          local_d8 = plVar7;
          FUN_00dbf000();
          lVar6 = local_98;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_130 = 1;
          FUN_00dbebd0(&local_c8,&local_d8,local_138);
          plVar1 = (longlong *)CONCAT71(uStack_67,local_68);
          if (plVar7 == plVar1) {
            if ((local_60 != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_60 == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar10 = plVar7 != (longlong *)0x0;
            plVar7 = plVar1;
            if (bVar10) {
              FUN_00d50b20();
            }
          }
          else {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_60 = '\0';
            plVar7 = plVar1;
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
    if (local_120 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar3 = local_128;
    if (bVar9) {
      local_210 = *unaff_RSI;
      local_208 = 0;
      local_1f8 = 0;
      local_200 = plVar7;
      FUN_00dbdf50();
      plVar1 = local_58;
      if ((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_160 = plVar1;
      local_158 = 1;
      FUN_00dbfc90(&local_160,0);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00c9fe20();
      plVar1 = local_58;
      pcVar5 = local_50;
      if (local_50[0] == '\0') {
        pcVar5 = &local_68;
      }
      local_68 = local_50[0];
      *pcVar5 = '\0';
      if ((local_50[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_00dc1b68;
        }
      }
      else if (plVar1 != (longlong *)0x0) {
LAB_00dc1b68:
        local_50[0] = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar1;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar8 = -local_40._4_4_;
            }
            else {
              iVar8 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar8);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar8 = 0;
            }
            local_40 = CONCAT44(iVar8,(int)local_40);
          }
          lVar2 = DAT_027f37d8;
          lVar6 = (longlong)(int)local_40;
          iVar8 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar8);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar8) break;
          plVar1 = *(longlong **)(local_48[2] + 8 + lVar6 * 8);
          local_58 = plVar1;
          if (DAT_027f37d8 != 0) {
            FUN_00d50b00();
          }
          local_b8 = lVar2;
          local_b0 = '\x01';
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            local_a8 = local_58;
            local_a0 = '\0';
            FUN_000175c0();
            lVar2 = CONCAT71(uStack_67,local_68);
            if (local_60 == '\0') {
              if (((lVar2 != 0) && (FUN_00d50b00(), local_60 != '\0')) &&
                 (CONCAT71(uStack_67,local_68) != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
            }
            if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_1f0 = local_58;
            local_1e8 = 0;
            local_1d8 = 0;
            local_1e0 = lVar2;
            cVar4 = FUN_00dc2ff0();
            if (cVar4 == '\0') {
              local_1d0 = *unaff_RDI;
              local_1c8 = 0;
              local_1c0 = *unaff_RSI;
              local_1b8 = 0;
              local_1a8 = 0;
              local_1a0 = local_58;
              local_198 = 0;
              local_1b0 = lVar2;
              FUN_00dc3440(&local_1b0,(int)uVar3 + 1,&local_1a0,0);
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00018280();
        FUN_00d50b20();
      }
      local_190 = *unaff_RSI;
      local_188 = 0;
      local_180 = *local_140;
      local_178 = 0;
      FUN_00dbe030();
      plVar1 = local_58;
      if ((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_150 = plVar1;
      local_148 = 1;
      FUN_00dbfc90(&local_150,0);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00dc1e30;
    }
  }
  local_230 = *unaff_RSI;
  local_228 = 0;
  local_218 = 0;
  local_220 = plVar7;
  FUN_00dbde70();
  plVar1 = local_58;
  if ((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_170 = plVar1;
  local_168 = 1;
  FUN_00dbfc90(&local_170,0);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00dc1e30:
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00dde270 — 2509 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dde270(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *in_RDX;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar11 = (undefined4)param_2;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*DAT_025795c0)();
  plVar9 = (longlong *)*in_RDX;
  if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
LAB_00dde2f3:
    plVar9 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar9 = in_RDX;
    if (cVar4 == '\0') goto LAB_00dde2f3;
  }
  lVar1 = *plVar9;
  cVar4 = (char)plVar9[1];
  if ((cVar4 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      plVar9 = (longlong *)*in_RDX;
      if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
LAB_00dde501:
        in_RDX = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar9 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_00dde501;
      }
      lVar1 = *in_RDX;
      lVar10 = in_RDX[1];
      if (((char)lVar10 == '\0') || (lVar1 == 0)) {
        if (lVar1 == 0) {
          if (*(longlong *)(unaff_RSI + 0x18) != 0) {
            *(undefined8 *)(unaff_RSI + 0x18) = 0;
            FUN_00d50b20();
          }
          goto LAB_00ddeaba;
        }
      }
      else {
        FUN_00d50b00();
        FUN_00d50b00();
      }
      lVar2 = *(longlong *)(unaff_RSI + 0x18);
      if (lVar2 != lVar1) {
        FUN_00d50b00();
        *(longlong *)(unaff_RSI + 0x18) = lVar1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(char *)(unaff_RSI + 0x10) == '\0') {
        uVar5 = FUN_00dd6e50();
        *(undefined1 *)(unaff_RSI + 0x10) = uVar5;
      }
      uVar5 = FUN_00dd6e50();
      switch(uVar5) {
      case 0x45:
        if (*(char *)(unaff_RSI + 0xc) != '\0') {
          FUN_00dd6b50();
          FUN_00dddff0();
        }
        if (*(char *)(unaff_RSI + 0xd) != '\0') {
          FUN_00dd6b50();
          FUN_00dddff0(extraout_XMM0_Db);
        }
        if (*(char *)(unaff_RSI + 0xe) != '\0') {
          FUN_00dd6b50();
          FUN_00dddff0(uVar11);
        }
        if (*(char *)(unaff_RSI + 0xf) != '\0') {
          FUN_00dd6b50();
          FUN_00dddff0(uVar12);
        }
        break;
      case 0x50:
        if (*(char *)(unaff_RSI + 0xc) != '\0') {
          FUN_00dd6bf0();
          FUN_00dddff0();
        }
        if (*(char *)(unaff_RSI + 0xd) != '\0') {
          FUN_00dd6bf0();
          FUN_00dddff0(extraout_XMM0_Db_01);
        }
        break;
      case 0x52:
        if (*(char *)(unaff_RSI + 0xc) != '\0') {
          FUN_00dd6ab0();
          FUN_00dddff0();
        }
        if (*(char *)(unaff_RSI + 0xd) != '\0') {
          FUN_00dd6ab0();
          FUN_00dddff0(extraout_XMM0_Db_00);
        }
        if (*(char *)(unaff_RSI + 0xe) != '\0') {
          FUN_00dd6ab0();
          FUN_00dddff0(uVar11);
        }
        if (*(char *)(unaff_RSI + 0xf) != '\0') {
          FUN_00dd6ab0();
          FUN_00dddff0(uVar12);
        }
        break;
      case 0x53:
        if (*(char *)(unaff_RSI + 0xe) != '\0') {
          FUN_00dd6c90();
          FUN_00dddff0();
        }
        if (*(char *)(unaff_RSI + 0xf) != '\0') {
          FUN_00dd6c90();
          FUN_00dddff0(extraout_XMM0_Db_02);
        }
      }
      if ((char)lVar10 != '\0') {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      goto LAB_00ddeaba;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_31 = cVar4;
  if (*(longlong *)(unaff_RSI + 0x18) != 0) {
    *(undefined8 *)(unaff_RSI + 0x18) = 0;
    FUN_00d50b20();
  }
  lVar10 = DAT_0276cc80;
  if (DAT_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar10;
  local_80 = '\x01';
  FUN_00d91000(1,&local_88);
  lVar10 = local_48;
  if (local_48 == 0) {
    bVar3 = true;
    lVar10 = 0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_40 == '\0') || (local_48 == 0)) goto LAB_00dde3a2;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_00dde3a2:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  iVar6 = *(int *)(lVar10 + 0xc);
  if (iVar6 == 4) {
    if (*(char *)(unaff_RSI + 0xc) != '\0') {
      FUN_00d8d7b0();
      FUN_00dddff0();
    }
    if (*(char *)(unaff_RSI + 0xd) != '\0') {
      FUN_00d8d7b0();
      FUN_00dddff0();
    }
    if (*(char *)(unaff_RSI + 0xe) != '\0') {
      FUN_00d8d7b0();
      FUN_00dddff0();
    }
    if (*(char *)(unaff_RSI + 0xf) != '\0') {
      FUN_00d8d7b0();
      FUN_00dddff0();
    }
    local_70 = '\0';
    local_78 = lVar1;
    FUN_00d96410();
    FUN_00dd6480();
    lVar2 = *(longlong *)(unaff_RSI + 0x18);
    lVar8 = lVar2;
    if (lVar2 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == 0) {
          lVar8 = 0;
          goto LAB_00dde4b3;
        }
        FUN_00d50b00();
        lVar2 = *(longlong *)(unaff_RSI + 0x18);
        *(longlong *)(unaff_RSI + 0x18) = local_48;
        lVar8 = local_48;
      }
      else {
        local_40 = '\0';
        lVar8 = local_48;
LAB_00dde4b3:
        *(longlong *)(unaff_RSI + 0x18) = lVar8;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar8 = local_48;
      }
    }
    if ((local_40 != '\0') && (lVar8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (*(char *)(unaff_RSI + 0x10) == '\0') {
      *(undefined1 *)(unaff_RSI + 0x10) = 0x52;
    }
    iVar6 = *(int *)(lVar10 + 0xc);
  }
  if (iVar6 == 2) {
    if (*(char *)(unaff_RSI + 0xc) == '\0') {
      if (*(char *)(unaff_RSI + 0xd) != '\0') goto LAB_00dde5e6;
      if (*(char *)(unaff_RSI + 0xe) != '\0') {
        FUN_00d8d7b0();
        FUN_00dddff0();
      }
      if (*(char *)(unaff_RSI + 0xf) != '\0') {
        FUN_00d8d7b0();
        FUN_00dddff0();
      }
      local_50 = '\0';
      local_58 = lVar1;
      FUN_00d96b50();
      FUN_00dd6740();
      lVar1 = *(longlong *)(unaff_RSI + 0x18);
      lVar10 = lVar1;
      if (lVar1 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar10 = 0;
            goto LAB_00dde879;
          }
          FUN_00d50b00();
          lVar1 = *(longlong *)(unaff_RSI + 0x18);
          *(longlong *)(unaff_RSI + 0x18) = local_48;
          lVar10 = local_48;
        }
        else {
          local_40 = '\0';
          lVar10 = local_48;
LAB_00dde879:
          *(longlong *)(unaff_RSI + 0x18) = lVar10;
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
          lVar10 = local_48;
        }
      }
      if ((local_40 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (*(char *)(unaff_RSI + 0x10) == '\0') {
        *(undefined1 *)(unaff_RSI + 0x10) = 0x53;
      }
    }
    else {
      FUN_00d8d7b0();
      FUN_00dddff0();
      if (*(char *)(unaff_RSI + 0xd) != '\0') {
LAB_00dde5e6:
        FUN_00d8d7b0();
        FUN_00dddff0();
      }
      local_60 = '\0';
      local_68 = lVar1;
      FUN_00d96ea0();
      FUN_00dd65e0();
      lVar1 = *(longlong *)(unaff_RSI + 0x18);
      lVar10 = lVar1;
      if (lVar1 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar10 = 0;
            goto LAB_00dde646;
          }
          FUN_00d50b00();
          lVar1 = *(longlong *)(unaff_RSI + 0x18);
          *(longlong *)(unaff_RSI + 0x18) = local_48;
          lVar10 = local_48;
        }
        else {
          local_40 = '\0';
          lVar10 = local_48;
LAB_00dde646:
          *(longlong *)(unaff_RSI + 0x18) = lVar10;
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
          lVar10 = local_48;
        }
      }
      if ((local_40 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (*(char *)(unaff_RSI + 0x10) == '\0') {
        *(undefined1 *)(unaff_RSI + 0x10) = 0x50;
      }
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
LAB_00ddeaba:
  FUN_00d8c7d0();
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01a70ac0 — 2501 bytes
// str: ""_scaleModeSequence""
// str: ""_chordSequence""
// ============================================================

void FUN_01a70ac0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) == *unaff_RSI) {
    return;
  }
  plVar7 = (longlong *)(unaff_RDI + 0x1f8);
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar6 = (longlong *)(unaff_RDI + 0x138);
    local_108 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
    FUN_00d50b00();
    local_108 = '\x01';
    local_110 = plVar6;
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a70bce;
LAB_01a70bbd:
      local_98 = 0;
      FUN_00d50b00();
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01a70bbd;
LAB_01a70bce:
      lVar4 = 0;
    }
    local_98 = '\x01';
    local_a0 = lVar4;
    FUN_00e8b9a0();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
      (**(code **)(*local_110 + 0x10))();
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = 0;
    (**(code **)(*plVar6 + 0x10))();
    FUN_00d50b00();
    local_f8 = '\x01';
    local_100 = plVar6;
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a70cf4;
LAB_01a70ce6:
      local_88 = 0;
      FUN_00d50b00();
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01a70ce6;
LAB_01a70cf4:
      lVar4 = 0;
    }
    local_88 = '\x01';
    local_90 = lVar4;
    FUN_00e8b9a0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      lVar4 = FUN_00cafdf0();
      if (lVar4 == 0) {
        local_d8 = 0;
        (**(code **)(*plVar6 + 0x10))();
        FUN_00d50b00();
        local_d8 = '\x01';
        local_e0 = plVar6;
        FUN_00cbb340();
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          (**(code **)(*local_e0 + 0x10))();
          FUN_00d50b20();
        }
      }
      else {
        FUN_00cafdf0();
        local_e8 = 0;
        (**(code **)(*plVar6 + 0x10))();
        FUN_00d50b00();
        local_e8 = '\x01';
        local_f0 = plVar6;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510030();
        local_60 = local_40;
        local_58 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_58 = '\x01';
        local_138 = '\0';
        local_140 = 0;
        plVar6 = &local_140;
        FUN_00cbadd0(plVar6,&local_60);
        param_1 = (pthread_key_t)plVar6;
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          (**(code **)(*local_f0 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  lVar4 = *unaff_RSI;
  lVar1 = *plVar7;
  lVar2 = lVar1;
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *plVar7 = lVar4;
    lVar2 = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = *plVar7;
    }
  }
  if (lVar2 == 0) {
    local_40 = 0;
    local_38 = '\0';
    FUN_01b6d800();
    if (local_38 == '\0') {
      return;
    }
    if (local_40 != 0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  lVar4 = local_120;
  if (local_118 == '\0') {
    if (local_120 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_118 = '\0';
  }
  local_40 = lVar4;
  local_38 = '\0';
  FUN_01b6d800();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c8 = 0;
  plVar7 = (longlong *)(unaff_RDI + 0x138);
  (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
  FUN_00d50b00();
  local_c8 = '\x01';
  local_d0 = plVar7;
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a7115e;
LAB_01a71150:
    local_78 = 0;
    FUN_00d50b00();
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 != 0) goto LAB_01a71150;
LAB_01a7115e:
    lVar4 = 0;
  }
  local_78 = '\x01';
  pVar5 = 0x10;
  local_80 = lVar4;
  FUN_00e8b850(0x10,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    (**(code **)(*local_d0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b8 = 0;
  (**(code **)(*plVar7 + 0x10))();
  FUN_00d50b00();
  local_b8 = '\x01';
  local_c0 = plVar7;
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      goto joined_r0x01a71262;
    }
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30);
joined_r0x01a71262:
    if (lVar4 != 0) {
      local_68 = 0;
      FUN_00d50b00();
      goto LAB_01a71274;
    }
  }
  lVar4 = 0;
LAB_01a71274:
  local_68 = '\x01';
  pVar5 = 0x10;
  local_70 = lVar4;
  FUN_00e8b850(0x10,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_40 != 0) {
    lVar4 = FUN_00cafdf0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00cafdf0();
      local_a8 = 0;
      (**(code **)(*plVar7 + 0x10))();
      FUN_00d50b00();
      local_a8 = '\x01';
      local_b0 = plVar7;
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      local_128 = '\0';
      local_130 = 0;
      FUN_00cbad80(&local_130,&local_50,0x20);
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        (**(code **)(*local_b0 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01b95ae0 — 2480 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b962f1) */
/* WARNING: Removing unreachable block (ram,0x01b962fd) */

undefined8 * FUN_01b95ae0(undefined8 param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined7 uVar11;
  int iVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar13;
  bool bVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 *local_148;
  undefined1 local_140;
  longlong *local_138;
  undefined1 local_130;
  undefined8 *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined4 local_b0;
  int local_ac;
  longlong *local_a8;
  longlong local_90;
  char local_88;
  longlong *local_78;
  longlong *local_68;
  char local_60 [8];
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  char local_38 [8];
  
  local_110 = param_1;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  pVar6 = (pthread_key_t)param_1;
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  local_b0 = (undefined4)param_3;
  if (unaff_RSI[0x3f] == 0) {
LAB_01b95c19:
    uVar9 = 0;
    local_78 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = unaff_RSI[0x3f];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_60[0] == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_68 == (longlong *)0x0) goto LAB_01b95c19;
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_78 = local_68;
    plVar7 = local_68;
    if (local_68 == (longlong *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = CONCAT71((uint7)((ulonglong)param_3 >> 8) & 0xffffff,1);
      if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pVar6 = (pthread_key_t)plVar7;
    FUN_00d50b20();
  }
  local_118 = uVar9;
  (**(code **)(*unaff_RSI + 0x988))();
  if (local_60[0] == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b95cfc;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_01b95cfc:
    local_a8 = local_68;
    local_ac = *(int *)((longlong)local_68 + 0xc);
    if (local_ac == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*pcVar2)();
      uVar11 = (undefined7)((ulonglong)local_68 >> 8);
      plVar7 = local_68;
      if (param_2 >> 0x20 == 0) {
        FUN_01b920e0();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = 0;
        FUN_01252670(0,0,0,0);
        pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar9 >> 8),local_60[0]);
        pcVar10 = local_38;
        if (local_60[0] != '\0') {
          pcVar10 = local_60;
        }
        local_38[0] = local_60[0];
        *pcVar10 = '\0';
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT71(uVar11,1);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01b920e0();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = param_2;
        FUN_012521f0(param_2,0,0,0);
        pVar6 = (pthread_key_t)CONCAT71((int7)(uVar8 >> 8),local_60[0]);
        pcVar10 = local_38;
        if (local_60[0] != '\0') {
          pcVar10 = local_60;
        }
        local_38[0] = local_60[0];
        *pcVar10 = '\0';
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT71(uVar11,1);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      local_108 = uVar9;
      FUN_01787610();
      if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_100 = local_a8;
      local_f8 = '\0';
      (**(code **)(*local_68 + 0x370))();
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01787560();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017874b0();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar13 = local_68;
      if (param_4 == '\0') {
        local_d0 = local_78;
        local_c8 = '\0';
        local_b8 = '\0';
        local_c0 = puVar5;
        (**(code **)(*local_68 + 0x378))(param_2,&local_d0,local_110,&local_c0);
        if (local_68 == (longlong *)0x0) {
          bVar14 = false;
          plVar13 = (longlong *)0x0;
        }
        else if (local_60[0] == '\0') {
          FUN_00d50b00();
          bVar14 = true;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          bVar14 = true;
        }
        if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_f0 = local_78;
        local_e8 = '\0';
        local_d8 = '\0';
        local_e0 = puVar5;
        (**(code **)(*local_68 + 0x378))(param_2,&local_f0,local_110,&local_e0);
        if (local_68 == (longlong *)0x0) {
          bVar14 = false;
          plVar13 = (longlong *)0x0;
        }
        else if (local_60[0] == '\0') {
          FUN_00d50b00();
          bVar14 = true;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          bVar14 = true;
        }
        if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_60[0] = '\0';
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = puVar5;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar12 = -local_50._4_4_;
          }
          else {
            iVar12 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar12);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar12 = 0;
          }
          local_50 = CONCAT44(iVar12,(int)local_50);
        }
        iVar12 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar12);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar12) break;
        FUN_00d21140();
      }
      FUN_0176e420();
      if (plVar13 != (longlong *)0x0) {
        local_140 = 0;
        local_148 = puVar3;
        iVar12 = FUN_01b9a7b0(param_2,&local_148);
        if (iVar12 == -1) {
          local_60[0] = '\0';
          FUN_00d23370(extraout_XMM0_Da,0);
          if ((local_60[0] != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((plVar7 != (longlong *)0x0) && ((char)local_b0 != '\0')) {
        local_130 = 0;
        local_120 = 0;
        local_138 = plVar7;
        local_128 = puVar3;
        iVar12 = FUN_01b9a7b0(param_2,&local_128);
        if (iVar12 == -1) {
          local_60[0] = '\0';
          FUN_00d23370(extraout_XMM0_Da_00,0);
          if ((local_60[0] != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      *unaff_RDI = puVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((bVar14) && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_108 != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    bVar14 = local_ac != 0;
    FUN_00d50b20();
    goto LAB_01b9645b;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  bVar14 = false;
LAB_01b9645b:
  if (((char)local_118 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar14 && puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01b9ba10 — 2274 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b9c021) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b9ba10(pthread_key_t param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  bool bVar13;
  float fVar14;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb_02;
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_05;
  float fVar18;
  float in_XMM1_Dd;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined8 local_e8;
  undefined1 local_a8 [16];
  undefined8 local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  undefined8 extraout_XMM0_Qb_04;
  
  plVar3 = local_60;
  fVar18 = (float)((ulonglong)param_2 >> 0x20);
  local_90 = FUN_00e7bdb0();
  local_e8 = FUN_00e7bdb0();
  local_a8._0_8_ = FUN_01e436c0();
  local_a8._8_8_ = extraout_XMM0_Qb;
  iVar5 = FUN_01d3a5a0();
  plVar12 = local_60;
  if (iVar5 == 1) {
    FUN_01d3abf0();
    local_a8._0_8_ = FUN_01e466c0();
    local_a8._8_8_ = extraout_XMM0_Qb_00;
    FUN_01b920e0();
    plVar2 = local_88;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*unaff_RDI + 0xa70))();
    FUN_012523c0(&local_90,0,&local_e8,0);
    local_38[0] = local_58[0];
    pcVar11 = local_38;
    pcVar8 = local_58;
    if (local_58[0] == '\0') {
      pcVar8 = pcVar11;
    }
    *pcVar8 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar10 = (pthread_key_t)pcVar11;
    if ((local_38[0] == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_80 != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01b920e0();
    plVar2 = local_88;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*unaff_RDI + 0xa70))();
    FUN_012523c0(&local_90,0,&local_e8,0);
    pcVar11 = local_58;
    if (local_58[0] == '\0') {
      pcVar11 = local_38;
    }
    local_38[0] = local_58[0];
    *pcVar11 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      local_78 = 0;
    }
    else {
      local_78 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
      local_68 = local_60;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_80 != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x6f8))();
    if (local_60 == (longlong *)0x0) {
      bVar1 = false;
      plVar12 = (longlong *)0x0;
    }
    else {
      bVar1 = true;
      if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_90._4_4_ == 0) {
      local_a8._0_8_ = FUN_01e436c0();
      local_a8._8_8_ = extraout_XMM0_Qb_02;
    }
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar4 = (**(code **)(*unaff_RDI + 0x9d0))();
    if (cVar4 != '\0') {
      uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
      local_90 = uVar7;
      local_e8 = (**(code **)(*unaff_RDI + 0x9e0))();
      if (uVar7 >> 0x20 != 0) {
        auVar21._0_8_ = (**(code **)(*unaff_RDI + 0xa68))();
        auVar21._8_8_ = extraout_XMM0_Qb_01;
        auVar15._4_12_ = auVar21._4_12_;
        auVar15._0_4_ = (float)auVar21._0_8_ + DAT_02390124;
        auVar21 = blendps(auVar15,_DAT_023b1620,0xe);
        (**(code **)(*unaff_RDI + 0x6f8))(auVar21._0_8_);
        if (local_60 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_78 = 0;
        local_68 = (longlong *)0x0;
        goto LAB_01b9bdb7;
      }
    }
    local_78 = 0;
    local_68 = (longlong *)0x0;
    bVar1 = false;
    plVar12 = (longlong *)0x0;
  }
LAB_01b9bdb7:
  (**(code **)(*unaff_RDI + 0x640))();
  lVar9 = DAT_027e2710;
  if (DAT_027e2710 != 0) {
    FUN_00d50b00();
  }
  local_128 = 0;
  local_120 = '\0';
  (**(code **)(*local_60 + 0x5d0))(0,&local_128);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_90 >> 0x20 != 0) {
    local_a8._0_8_ = (**(code **)(*unaff_RDI + 0xa68))();
    local_a8._8_8_ = extraout_XMM0_Qb_03;
  }
  FUN_01e3f820();
  iVar5 = FUN_01d3a5a0();
  if (iVar5 == 1) {
    FUN_01d3abf0();
    auVar16._0_8_ = FUN_01e466c0();
    auVar16._8_8_ = extraout_XMM0_Qb_04;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = (float)auVar16._0_8_ + DAT_02394210;
    bVar13 = (float)local_a8._0_4_ < auVar17._0_4_;
    if (bVar13) {
      local_a8 = auVar17;
    }
  }
  fVar14 = (float)FUN_01e436c0();
  if ((float)local_a8._0_4_ < fVar14) {
    local_a8._0_8_ = FUN_01e436c0();
    local_a8._8_8_ = extraout_XMM0_Qb_05;
  }
  if (plVar12 == (longlong *)0x0) goto LAB_01b9c2bc;
  if (local_68 == (longlong *)0x0) {
    iVar5 = -1;
LAB_01b9c1ae:
    FUN_00d50b00();
    bVar13 = false;
  }
  else {
    local_118 = local_68;
    local_110 = '\0';
    (**(code **)(*unaff_RDI + 0x940))(local_90);
    if (local_58[0] == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (longlong *)0x0) goto LAB_01b9c2bc;
    FUN_01d5e2b0();
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b9bfea;
      }
LAB_01b9c0fb:
      iVar5 = -1;
      bVar13 = false;
    }
    else {
      if (local_60 == (longlong *)0x0) goto LAB_01b9c0fb;
LAB_01b9bfea:
      local_58[0] = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar3;
      local_48 = 0xffffffff;
      local_40 = 0;
      bVar13 = false;
      while( true ) {
        lVar9 = (longlong)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)((longlong)local_50 + 0xc) <= iVar5) break;
        local_60 = *(longlong **)(local_50[2] + 8 + lVar9 * 8);
        FUN_01d65230();
        local_108 = plVar3;
        local_100 = '\0';
        cVar4 = (**(code **)(*local_88 + 0x50))();
        if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          iVar5 = local_40 + (int)local_48;
          goto LAB_01b9c116;
        }
        cVar4 = FUN_01d65e30();
        if (cVar4 != '\0') {
          bVar13 = true;
        }
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
      }
      iVar5 = -1;
LAB_01b9c116:
      FUN_002a0a30();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (bVar13) {
      (**(code **)(*unaff_RDI + 0x640))();
      fVar14 = (float)(**(code **)(*local_60 + 0x5c8))();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_a8._0_4_ = local_a8._0_4_ - fVar14;
      goto LAB_01b9c1ae;
    }
    if (unaff_RDI != (longlong *)0x0) goto LAB_01b9c1ae;
    bVar13 = true;
  }
  FUN_01d62b10();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar13) {
    FUN_00d50b00();
  }
  fVar14 = (fVar18 - extraout_XMM0_Db) * DAT_0239011c;
  auVar19._0_4_ = _DAT_023945e0 & (uint)fVar14;
  auVar19._4_4_ = _UNK_023945e4 & (uint)(fVar18 - extraout_XMM0_Db);
  auVar19._8_4_ = _UNK_023945e8 & (uint)(in_XMM1_Dd - extraout_XMM0_Dd);
  auVar19._12_4_ = _UNK_023945ec & (uint)(in_XMM1_Dd - extraout_XMM0_Dd);
  auVar20._4_12_ = SUB1612(auVar19 | _DAT_023945f0,4);
  auVar20._0_4_ = SUB164(auVar19 | _DAT_023945f0,0) + fVar14;
  auVar21 = roundss(auVar20,auVar20,0xb);
  auVar21 = insertps(local_a8,auVar21,0x10);
  local_f8 = 0;
  local_f0 = '\0';
  FUN_01d5ef60(auVar21._0_8_,iVar5);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_01d62b80();
LAB_01b9c2bc:
  if (((char)local_78 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00dbf000 — 2218 bytes
// str: ""GNValue""
// str: ""%f""
// str: ""%lld""
// str: ""&#x%X;""
// str: ""GNString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00dbf000(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da_00;
  undefined *local_e8;
  undefined4 local_e0;
  ushort local_dc;
  undefined *local_d8;
  code *local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined *local_98;
  char local_90;
  undefined *local_88;
  char local_80;
  longlong local_78;
  undefined *local_70;
  char local_68;
  undefined *local_60;
  uint local_58;
  undefined8 local_50;
  ushort local_42;
  
  plVar12 = (longlong *)*unaff_RSI;
  if ((DAT_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  if (plVar12 == (longlong *)0x0) {
LAB_00dbf053:
    plVar12 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar6 = FUN_00e85ea0();
    plVar12 = unaff_RSI;
    if (cVar6 == '\0') goto LAB_00dbf053;
  }
  lVar1 = *plVar12;
  lVar13 = plVar12[1];
  if (((char)lVar13 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
LAB_00dbf07e:
    local_c0 = '\0';
    local_c8 = lVar1;
    FUN_00ca2310();
    puVar3 = local_a8;
    if (local_a0 == '\0') {
      if (local_a8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    iVar7 = FUN_00d8c7a0();
    if (iVar7 < 1) {
      *unaff_RDI = (longlong)puVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_d0 = DAT_025795c0;
      iVar7 = 0;
      local_d8 = &DAT_025795a8;
      puVar16 = puVar3;
      local_78 = lVar1;
      do {
        local_42 = FUN_00d8cbc0();
        if (local_42 < 0x80) {
          if (puVar3 != puVar16) {
            FUN_00d8ea20(extraout_XMM0_Da,1);
          }
        }
        else {
          uVar18 = extraout_XMM0_Da;
          if (puVar3 == puVar16) {
            puVar9 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = local_d8;
            uVar18 = (*local_d0)();
            if (puVar9 == puVar3) {
              uVar18 = FUN_00d50b20();
            }
            else {
              bVar17 = puVar16 != (undefined8 *)0x0;
              puVar16 = puVar9;
              if (bVar17) {
                uVar18 = FUN_00d50b20();
              }
            }
            if (iVar7 != 0) {
              FUN_00d97ce0(uVar18,iVar7);
              uVar5 = local_58;
              local_60 = local_70;
              local_58 = local_58 & 0xffffff00;
              if (local_68 == '\0') {
                if (local_70 != (undefined *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58._1_3_ = SUB43(uVar5,1);
                local_68 = '\0';
              }
              local_58 = CONCAT31(local_58._1_3_,1);
              uVar18 = FUN_00d8dbf0();
              if (((char)local_58 != '\0') && (local_60 != (undefined *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (undefined *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
            }
          }
          local_e0 = 1;
          local_e8 = &DAT_0257c088;
          local_dc = local_42;
          FUN_00d8cb40(uVar18,&local_e8);
          local_98 = local_70;
          local_90 = 0;
          if (local_68 == '\0') {
            if (local_70 != (undefined *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_90 = '\x01';
          FUN_00d8dbf0();
          if ((local_90 != '\0') && (local_98 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar8 = FUN_00d8c7a0();
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar8);
      if (puVar3 != puVar16) {
        FUN_00d8c7d0();
      }
      *unaff_RDI = (longlong)puVar16;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((char)lVar13 != '\0') {
      FUN_00d50b20();
    }
    return unaff_RDI;
  }
  if (lVar1 != 0) goto LAB_00dbf07e;
  plVar12 = (longlong *)*unaff_RSI;
  FUN_00053ac0();
  if (plVar12 == (longlong *)0x0) {
LAB_00dbf3e0:
    plVar12 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar6 = FUN_00e85ea0();
    plVar12 = unaff_RSI;
    if (cVar6 == '\0') goto LAB_00dbf3e0;
  }
  lVar1 = plVar12[1];
  if (((char)lVar1 == '\0') || (*plVar12 == 0)) {
    if (*plVar12 == 0) {
      plVar12 = (longlong *)*unaff_RSI;
      if ((DAT_0270c850 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
      if (plVar12 == (longlong *)0x0) {
LAB_00dbf5da:
        unaff_RSI = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar12 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00dbf5da;
      }
      plVar12 = (longlong *)*unaff_RSI;
      lVar1 = unaff_RSI[1];
      if (((char)lVar1 != '\0') && (plVar12 != (longlong *)0x0)) {
        FUN_00d50b00();
LAB_00dbf644:
        (**(code **)(*plVar12 + 0x368))();
        local_88 = local_60;
        local_80 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (undefined *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        local_80 = '\x01';
        FUN_00ca2310();
        if ((local_80 != '\0') && (local_88 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)lVar1 == '\0') {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
      if (plVar12 != (longlong *)0x0) goto LAB_00dbf644;
      goto LAB_00dbf479;
    }
  }
  else {
    FUN_00d50b00();
  }
  cVar6 = FUN_00dd6e50();
  lVar13 = DAT_02783b20;
  bVar17 = true;
  uVar10 = (ulonglong)((int)cVar6 - 0x49U);
  if ((int)cVar6 - 0x49U < 0x24) {
    if ((0x914000001U >> (uVar10 & 0x3f) & 1) == 0) {
      if ((0x28000000UL >> (uVar10 & 0x3f) & 1) == 0) {
        if (uVar10 != 0x19) goto LAB_00dbf464;
        cVar6 = FUN_00d45ad0();
        lVar2 = DAT_027e3c48;
        lVar13 = DAT_02787960;
        if (cVar6 == '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          lVar13 = lVar2;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        *unaff_RDI = lVar13;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        if (DAT_02783b20 != 0) {
          FUN_00d50b00();
        }
        local_50 = FUN_00d45bc0();
        local_58 = 1;
        local_60 = &DAT_024de5e0;
        FUN_00d8cb40((int)local_50,&local_60);
        puVar4 = local_70;
        if ((((local_68 == '\0') && (local_70 != (undefined *)0x0)) &&
            (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        local_b8 = lVar13;
        local_b0 = '\0';
        cVar6 = FUN_00d8f400();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        puVar15 = puVar4;
        if (cVar6 != '\0') {
          FUN_00d8c7a0();
          FUN_00d8c7a0();
          uVar11 = FUN_00e7b4e0();
          FUN_00d8e3d0(extraout_XMM0_Da_00,uVar11);
          puVar15 = local_60;
          puVar14 = puVar4;
          if (puVar4 != local_60) {
            if ((char)local_58 != '\0') {
              if (puVar4 != (undefined *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_00dbf737;
            }
            if (local_60 != (undefined *)0x0) {
              FUN_00d50b00();
            }
            puVar14 = puVar15;
            if (puVar4 != (undefined *)0x0) {
              FUN_00d50b20();
            }
          }
          puVar15 = puVar14;
          if (((char)local_58 != '\0') && (local_60 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_00dbf737:
        *unaff_RDI = (longlong)puVar15;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = FUN_00d45790();
      local_58 = 1;
      local_60 = &DAT_024da828;
      FUN_00d8cb40(&DAT_024da828,&local_60);
    }
    bVar17 = false;
  }
LAB_00dbf464:
  if ((char)lVar1 != '\0') {
    FUN_00d50b20();
  }
  if (!bVar17) {
    return unaff_RDI;
  }
LAB_00dbf479:
  FUN_00d8ede0();
  return unaff_RDI;
}




// ============================================================
// @01b9abf0 — 2206 bytes
// ============================================================

void FUN_01b9abf0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  pthread_key_t pVar10;
  byte unaff_SIL;
  longlong *unaff_RDI;
  longlong lVar11;
  uint uVar12;
  longlong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  char local_d0;
  int local_c4;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  undefined4 local_a4;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 *local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  char local_50 [16];
  longlong local_40;
  char local_38 [8];
  
  cVar3 = (**(code **)(*unaff_RDI + 0x9d0))();
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = (**(code **)(*unaff_RDI + 0x9e8))();
  if (cVar3 != '\0') {
    return;
  }
  local_b8 = '\0';
  local_c0 = 0;
  local_a4 = 0xffffffff;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  local_68 = puVar5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  local_78 = puVar5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  local_80 = puVar5;
  if (unaff_RDI[0x3f] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar11 = unaff_RDI[0x3f];
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    lVar1 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      local_70 = local_40;
      param_1 = local_40;
      if (local_40 == 0) {
        local_90 = 0;
      }
      else {
        local_90 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
        if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      goto LAB_01b9ae22;
    }
  }
  local_90 = 0;
  local_70 = 0;
LAB_01b9ae22:
  local_c4 = (uint)(unaff_SIL ^ 1) * 2 + -1;
  do {
    do {
      do {
        pVar10 = (pthread_key_t)param_1;
        FUN_01b6d0d0();
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
        param_1 = (**(code **)(*unaff_RDI + 0x9e0))();
        cVar3 = FUN_01252960(param_1,uVar7,&local_c0,&local_b0);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        puVar5 = local_68;
        if (cVar3 == '\0') {
          if (0 < *(int *)((longlong)local_68 + 0xc)) {
            (**(code **)(*unaff_RDI + 0xa48))();
            if (0 < *(int *)((longlong)puVar5 + 0xc)) {
              lVar11 = 0;
              do {
                pVar10 = (pthread_key_t)param_1;
                FUN_01b6d0d0();
                pvVar6 = _pthread_getspecific(pVar10);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                lVar1 = *(longlong *)(local_80[2] + lVar11 * 8);
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                uVar7 = FUN_00dd6320();
                param_1 = FUN_00dd6320();
                local_38[0] = '\0';
                local_40 = lVar1;
                FUN_012502a0(param_1,uVar7,(char)unaff_RDI[0x36]);
                puVar5 = local_68;
                if ((local_38[0] != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
                  FUN_00d50b20();
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < *(int *)((longlong)puVar5 + 0xc));
            }
            FUN_00d23310();
            lVar11 = local_40;
            pcVar8 = &local_60;
            if (local_38[0] != '\0') {
              pcVar8 = local_38;
            }
            local_60 = local_38[0];
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
            local_98 = 0;
            if (local_60 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_98 = '\x01';
            local_a0 = lVar11;
            FUN_00d23310();
            lVar11 = local_40;
            local_50[0] = local_38[0];
            pcVar8 = local_50;
            if (local_38[0] != '\0') {
              pcVar8 = local_38;
            }
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
            local_88 = lVar11;
            uVar7 = FUN_00dd6320();
            FUN_00d23310();
            lVar11 = local_40;
            pcVar8 = local_38;
            if (local_38[0] == '\0') {
              pcVar8 = local_50 + 8;
            }
            local_50[8] = local_38[0];
            *pcVar8 = '\0';
            if ((local_38[0] != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = local_88;
            uVar9 = FUN_00dd6320();
            (**(code **)(*unaff_RDI + 0xa80))(uVar9,uVar7);
            if ((local_50[8] != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*unaff_RDI + 0xa50))();
          }
          if (((char)local_90 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (local_80 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (local_78 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          return;
        }
      } while (local_c0 == 0);
      local_d8 = local_c0;
      local_d0 = '\0';
      param_1 = local_b0;
      (**(code **)(*unaff_RDI + 0x940))(local_b0,&local_d8);
      lVar11 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    } while (lVar11 == 0);
    local_88 = lVar11;
    FUN_01b95ae0(local_e0,local_b0,1,0);
    lVar11 = local_40;
    if ((local_38[0] == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    local_f0 = lVar11;
    local_e8 = 0;
    param_1 = local_b0;
    iVar4 = FUN_01b9a7b0(local_b0,&local_f0);
    if ((iVar4 == -1) || (uVar12 = iVar4 + local_c4, (int)uVar12 < 0)) {
      if (lVar11 != 0) goto LAB_01b9ae47;
    }
    else {
      if ((int)uVar12 < *(int *)(lVar11 + 0xc)) {
        FUN_00dd67f0();
        lVar1 = CONCAT71(uStack_5f,local_60);
        if (local_58 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_38[0] = '\0';
        local_40 = lVar1;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
          FUN_00d50b20();
        }
        FUN_00dd67f0();
        lVar1 = CONCAT71(uStack_5f,local_60);
        if (local_58 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_38[0] = '\0';
        local_40 = lVar1;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
          FUN_00d50b20();
        }
        param_1 = *(longlong *)(lVar11 + 0x10);
        lVar11 = *(longlong *)(param_1 + (ulonglong)uVar12 * 8);
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        local_38[0] = '\0';
        local_40 = lVar11;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
LAB_01b9ae47:
      FUN_00d50b20();
    }
    FUN_00d50b20();
  } while( true );
}




// ============================================================
// @01a6f360 — 2162 bytes
// str: ""GNValue""
// str: ""MUChord""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01a6f360(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *unaff_RDI;
  longlong **pplVar11;
  undefined4 uVar12;
  undefined1 local_d8 [4];
  int local_d4;
  undefined1 local_d0 [4];
  int local_cc;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 != '\0') {
    FUN_01caeae0();
    plVar1 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a6f3d3;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_01a6f3d3:
      local_70 = plVar1;
      uVar12 = FUN_01d66da0();
      local_c8 = DAT_027e2688;
      if (DAT_027e2688 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_c0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_c8);
      plVar1 = local_48;
      if ((DAT_02794b40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_02794a90 = FUN_00d4fe50();
        _DAT_02794a78 = "MUChord";
        _DAT_02794a80 = 0x20;
        param_1 = 0x1113770;
        _DAT_02794a88 = FUN_01113770;
        _DAT_02794a98 = 0;
        uRam0000000002794aa0 = 0;
        _DAT_02794aa8 = 0;
        _DAT_02794b20 = 0;
        uRam0000000002794b28 = 0;
        _DAT_02794b30 = 0;
        DAT_02794b32 = 2;
        _DAT_02794ab0 = 0;
        uRam0000000002794ab8 = 0;
        _DAT_02794ac0 = 0;
        uRam0000000002794ac8 = 0;
        _DAT_02794ad0 = 0;
        uRam0000000002794ad8 = 0;
        _DAT_02794ae0 = 0;
        uRam0000000002794ae8 = 0;
        _DAT_02794af0 = 0;
        uRam0000000002794af8 = 0;
        _DAT_02794b00 = 0;
        uRam0000000002794b08 = 0;
        _DAT_02794b10 = 0;
        uRam0000000002794b18 = 0;
        DAT_02794b3b = 0;
        _DAT_02794b33 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (longlong *)0x0) {
LAB_01a6f45a:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f45a;
      }
      local_68 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01d66da0();
      local_b8 = DAT_027e2690;
      if (DAT_027e2690 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_b0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_b8);
      plVar1 = local_48;
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        param_1 = 0x53cb0;
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
      if (plVar1 == (longlong *)0x0) {
LAB_01a6f553:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f553;
      }
      local_60 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01d66da0();
      local_a8 = DAT_027652e0;
      if (DAT_027652e0 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_a0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_a8);
      plVar1 = local_48;
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        param_1 = 0x53cb0;
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
      if (plVar1 == (longlong *)0x0) {
LAB_01a6f641:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f641;
      }
      plVar1 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((((local_68 == (longlong *)0x0) || (local_60 == (longlong *)0x0)) ||
          (plVar1 == (longlong *)0x0)) || (param_2 == '\0')) {
        if (plVar1 != (longlong *)0x0) goto LAB_01a6f96a;
      }
      else {
        FUN_01a66e80();
        uVar10 = local_58;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_00dd6320();
        FUN_012521f0(uVar6,0,local_d8,local_d0);
        plVar1 = local_48;
        pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar6 >> 8),local_40[0]);
        pcVar9 = local_38;
        if (local_40[0] != '\0') {
          pcVar9 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if ((local_50 != '\0') && (uVar10 != 0)) {
          FUN_00d50b20();
        }
        local_78 = plVar1;
        if (plVar1 == (longlong *)0x0) {
LAB_01a6f858:
          (**(code **)(*unaff_RDI + 0xa48))();
          FUN_01a66e80();
          uVar10 = local_58;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = FUN_00dd6320();
          uVar7 = FUN_00dd6320();
          local_48 = local_68;
          local_40[0] = '\0';
          FUN_012502a0(uVar7,uVar6,(char)unaff_RDI[0x36]);
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (uVar10 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0xa50))();
          local_88 = local_68;
          local_80 = '\0';
          uVar6 = FUN_00dd6320();
          uVar7 = FUN_00dd6320();
          (**(code **)(*unaff_RDI + 0xa80))(uVar7,uVar6);
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_78 == (longlong *)0x0) goto LAB_01a6f96a;
        }
        else {
          local_98 = local_68;
          local_90 = '\0';
          cVar2 = (**(code **)(*plVar1 + 0x50))();
          bVar3 = 1;
          if ((((cVar2 != '\0') && (local_48 = (longlong *)FUN_00dd6320(), local_d4 != 0)) &&
              ((ulonglong)local_48 >> 0x20 != 0)) &&
             (((cVar2 = FUN_00e7c000(), cVar2 != '\0' && (local_58 = FUN_00dd6320(), local_cc != 0))
              && (local_58 >> 0x20 != 0)))) {
            bVar3 = FUN_00e7c000();
            bVar3 = bVar3 ^ 1;
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar3 != 0) goto LAB_01a6f858;
        }
        FUN_00d50b20();
LAB_01a6f96a:
        FUN_00d50b20();
      }
      plVar1 = local_68;
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar10 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      FUN_00d50b20();
      goto LAB_01a6f99c;
    }
  }
  uVar10 = 0;
LAB_01a6f99c:
  return uVar10 & 0xffffffff;
}




// ============================================================
// @01c957d0 — 2056 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c95c15) */
/* WARNING: Removing unreachable block (ram,0x01c95c1b) */
/* WARNING: Removing unreachable block (ram,0x01c95ae4) */
/* WARNING: Removing unreachable block (ram,0x01c95c27) */
/* WARNING: Removing unreachable block (ram,0x01c95c64) */
/* WARNING: Removing unreachable block (ram,0x01c95c69) */
/* WARNING: Removing unreachable block (ram,0x01c95c71) */
/* WARNING: Removing unreachable block (ram,0x01c95cc1) */
/* WARNING: Removing unreachable block (ram,0x01c95cca) */
/* WARNING: Removing unreachable block (ram,0x01c95c79) */
/* WARNING: Removing unreachable block (ram,0x01c95bc1) */
/* WARNING: Removing unreachable block (ram,0x01c95bca) */
/* WARNING: Removing unreachable block (ram,0x01c95b5d) */
/* WARNING: Removing unreachable block (ram,0x01c95b66) */
/* WARNING: Removing unreachable block (ram,0x01c95a4b) */
/* WARNING: Removing unreachable block (ram,0x01c95a50) */
/* WARNING: Removing unreachable block (ram,0x01c95a55) */
/* WARNING: Removing unreachable block (ram,0x01c95c8e) */
/* WARNING: Removing unreachable block (ram,0x01c95c9b) */
/* WARNING: Removing unreachable block (ram,0x01c95a70) */
/* WARNING: Removing unreachable block (ram,0x01c95a73) */
/* WARNING: Removing unreachable block (ram,0x01c958bf) */
/* WARNING: Removing unreachable block (ram,0x01c9583d) */
/* WARNING: Removing unreachable block (ram,0x01c95846) */
/* WARNING: Removing unreachable block (ram,0x01c95916) */
/* WARNING: Removing unreachable block (ram,0x01c9591f) */
/* WARNING: Removing unreachable block (ram,0x01c95924) */
/* WARNING: Removing unreachable block (ram,0x01c95934) */
/* WARNING: Removing unreachable block (ram,0x01c95940) */
/* WARNING: Removing unreachable block (ram,0x01c95b90) */
/* WARNING: Removing unreachable block (ram,0x01c95b99) */
/* WARNING: Removing unreachable block (ram,0x01c95d30) */
/* WARNING: Removing unreachable block (ram,0x01c95e2d) */
/* WARNING: Removing unreachable block (ram,0x01c95e36) */
/* WARNING: Removing unreachable block (ram,0x01c95e91) */
/* WARNING: Removing unreachable block (ram,0x01c95e9a) */
/* WARNING: Removing unreachable block (ram,0x01c95ee5) */
/* WARNING: Removing unreachable block (ram,0x01c95eeb) */
/* WARNING: Removing unreachable block (ram,0x01c95dbd) */
/* WARNING: Removing unreachable block (ram,0x01c95ef7) */
/* WARNING: Removing unreachable block (ram,0x01c95f34) */
/* WARNING: Removing unreachable block (ram,0x01c95f39) */
/* WARNING: Removing unreachable block (ram,0x01c95f41) */
/* WARNING: Removing unreachable block (ram,0x01c95f91) */
/* WARNING: Removing unreachable block (ram,0x01c95f9a) */
/* WARNING: Removing unreachable block (ram,0x01c95f5e) */
/* WARNING: Removing unreachable block (ram,0x01c95f6b) */
/* WARNING: Removing unreachable block (ram,0x01c95f49) */
/* WARNING: Removing unreachable block (ram,0x01c95abd) */
/* WARNING: Removing unreachable block (ram,0x01c95ac6) */
/* WARNING: Removing unreachable block (ram,0x01c95d8b) */
/* WARNING: Removing unreachable block (ram,0x01c95d97) */
/* WARNING: Removing unreachable block (ram,0x01c95d9c) */
/* WARNING: Removing unreachable block (ram,0x01c95ad1) */
/* WARNING: Removing unreachable block (ram,0x01c95add) */
/* WARNING: Removing unreachable block (ram,0x01c95d0b) */
/* WARNING: Removing unreachable block (ram,0x01c95d10) */
/* WARNING: Removing unreachable block (ram,0x01c95d15) */
/* WARNING: Removing unreachable block (ram,0x01c95d33) */
/* WARNING: Removing unreachable block (ram,0x01c95da2) */
/* WARNING: Removing unreachable block (ram,0x01c95dab) */
/* WARNING: Removing unreachable block (ram,0x01c95e60) */
/* WARNING: Removing unreachable block (ram,0x01c95e69) */

longlong * FUN_01c957d0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_58;
  longlong local_48;
  longlong local_40;
  
  if (*(char *)(unaff_RSI + 0x29) == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar10 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar10;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar10;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    local_40 = *param_2;
    FUN_00d214d0();
    if (*(int *)((longlong)puVar4 + 0xc) < 2) {
      *unaff_RDI = (longlong)puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_01271180();
      bVar11 = local_40 == 0;
      if (bVar11) {
        local_58 = 0;
      }
      else {
        FUN_00d50b00();
        local_58 = local_40;
      }
      if (*(int *)(local_58 + 0xc) < 1) {
        bVar8 = false;
        lVar10 = 0;
        bVar2 = false;
        local_48 = 0;
      }
      else {
        lVar7 = 0;
        local_48 = 0;
        bVar2 = false;
        lVar10 = 0;
        bVar8 = false;
        do {
          lVar9 = *(longlong *)(*(longlong *)(local_58 + 0x10) + lVar7 * 8);
          lVar6 = local_58;
          if (local_48 == lVar9) {
            if ((!bVar2) && (local_48 != 0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_48 != 0)) {
              FUN_00d50b20();
              bVar2 = true;
              local_48 = lVar9;
            }
            else {
              bVar2 = true;
              local_48 = lVar9;
            }
          }
          FUN_01266770();
          if (local_40 == lVar10) {
            bVar1 = bVar8;
            lVar9 = lVar10;
            if ((!bVar8) && (local_40 != 0)) {
              FUN_00d50b00();
              bVar1 = true;
            }
          }
          else {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            lVar9 = local_40;
            if ((bVar8) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          while (lVar9 != 0) {
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar3 = FUN_01263cf0();
            if (((cVar3 == '\0') || (cVar3 = FUN_00d23d70(), local_40 = lVar9, cVar3 == '\0')) ||
               (cVar3 = FUN_00d23d70(), cVar3 == '\0')) goto LAB_01c95ce3;
            FUN_00d23f50();
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            if ((!bVar1) && (lVar9 != 0)) {
              FUN_00d50b00();
              bVar1 = true;
            }
          }
          lVar9 = 0;
LAB_01c95ce3:
          FUN_01266b80();
          if (local_40 == lVar9) {
            bVar8 = bVar1;
            lVar10 = lVar9;
            if ((!bVar1) && (local_40 != 0)) {
              FUN_00d50b00();
              bVar8 = true;
            }
          }
          else {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            bVar8 = true;
            lVar10 = local_40;
            if ((bVar1) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          while (lVar10 != 0) {
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar3 = FUN_01263cf0();
            if (((cVar3 == '\0') || (cVar3 = FUN_00d23d70(), local_40 = lVar10, cVar3 == '\0')) ||
               (cVar3 = FUN_00d23d70(), cVar3 == '\0')) goto LAB_01c95983;
            FUN_00d23f50();
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            if ((!bVar8) && (lVar10 != 0)) {
              FUN_00d50b00();
              bVar8 = true;
            }
          }
          lVar10 = 0;
LAB_01c95983:
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(local_58 + 0xc));
      }
      *unaff_RDI = (longlong)puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((bVar8) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar11) {
        FUN_00d50b20();
      }
    }
  }
  return unaff_RDI;
}




// ============================================================
// @01dc0e10 — 2033 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dc1189) */
/* WARNING: Removing unreachable block (ram,0x01dc1192) */
/* WARNING: Removing unreachable block (ram,0x01dc10a8) */
/* WARNING: Removing unreachable block (ram,0x01dc0e59) */
/* WARNING: Removing unreachable block (ram,0x01dc0e62) */
/* WARNING: Removing unreachable block (ram,0x01dc0fb5) */
/* WARNING: Removing unreachable block (ram,0x01dc12b9) */
/* WARNING: Removing unreachable block (ram,0x01dc12c5) */
/* WARNING: Removing unreachable block (ram,0x01dc1469) */
/* WARNING: Removing unreachable block (ram,0x01dc1472) */
/* WARNING: Removing unreachable block (ram,0x01dc135a) */
/* WARNING: Removing unreachable block (ram,0x01dc1367) */
/* WARNING: Removing unreachable block (ram,0x01dc14f1) */
/* WARNING: Removing unreachable block (ram,0x01dc14fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc0e10(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *unaff_RSI;
  longlong *plVar10;
  longlong *unaff_RDI;
  bool bVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_f8;
  float fStack_f4;
  longlong local_e8;
  char local_e0;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_40;
  char local_38;
  
  plVar5 = local_40;
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01dc0d60();
  if (local_40 == (longlong *)0x0) {
    bVar2 = true;
    bVar11 = false;
    plVar14 = (longlong *)0x0;
    bVar3 = false;
    plVar12 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_01d48370();
    bVar11 = false;
    bVar3 = false;
    plVar12 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
    for (iVar9 = 0; iVar7 = FUN_01dca080(), iVar9 < iVar7; iVar9 = iVar9 + 1) {
      FUN_01dcc290();
      if (local_40 == plVar12) {
        if ((bVar3) || (local_40 == (longlong *)0x0)) {
joined_r0x01dc0f9d:
          plVar10 = plVar12;
          bVar2 = bVar3;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar10 = plVar12;
          bVar2 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01dc0f88;
          }
        }
      }
      else {
        plVar10 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar3) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar12 = local_40;
LAB_01dc0f88:
            bVar3 = true;
            goto joined_r0x01dc0f9d;
          }
        }
        else {
          bVar2 = true;
          if ((bVar3) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar3 = bVar2;
      FUN_01db99d0();
      if (local_40 == plVar14) {
        if ((bVar11) || (local_40 == (longlong *)0x0)) {
joined_r0x01dc1090:
          plVar13 = plVar14;
          bVar2 = bVar11;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar13 = plVar14;
          bVar2 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01dc1078;
          }
        }
      }
      else {
        plVar13 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar11) && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar14 = local_40;
LAB_01dc1078:
            bVar11 = true;
            goto joined_r0x01dc1090;
          }
        }
        else {
          bVar2 = true;
          if ((bVar11) && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar11 = bVar2;
      FUN_01db9ab0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar13 + 0x958))();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      cVar6 = FUN_01dd3d00();
      if (cVar6 == '\0') {
LAB_01dc11d0:
        (**(code **)(*plVar13 + 0x918))();
      }
      else {
        FUN_01dd32b0();
        local_38 = '\0';
        cVar6 = FUN_00d24090();
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        local_40 = plVar10;
        if (cVar6 == '\0') goto LAB_01dc11d0;
        (**(code **)(*plVar13 + 0x918))();
      }
      local_58 = FUN_01db9a50();
      uStack_50 = extraout_XMM0_Qb;
      fVar15 = (float)FUN_01dce580();
      auVar19._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
      auVar19._8_8_ = extraout_XMM0_Qb_00;
      auVar18._4_12_ = local_58._4_12_;
      auVar18._0_4_ = (float)local_58 + fVar15;
      auVar19 = insertps(auVar18,auVar19,0x10);
      (**(code **)(*plVar13 + 0x4d0))();
      if (iVar9 == DAT_028b8a5c) {
        (**(code **)(*plVar5 + 0x3a0))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar12 = (longlong *)*unaff_RSI;
        FUN_01e3f820();
        (**(code **)(*plVar12 + 0x3b0))();
      }
      else {
        FUN_01e3f820();
        (**(code **)(*plVar13 + 0x610))();
        cVar6 = FUN_01db9b00();
        if (cVar6 != '\0') {
          fVar15 = (float)FUN_01db9a50();
          FUN_01e3f820();
          auVar18 = ZEXT416((uint)fVar15);
          if (auVar19._4_4_ + auVar19._4_4_ < fVar15) {
            cVar6 = FUN_01db9d40();
            plVar12 = local_40;
            if (cVar6 == '\0') {
              (**(code **)(*unaff_RDI + 0x920))(extraout_XMM0_Qa,0xffffffff);
              if (local_40 == (longlong *)0x0) {
                plVar12 = (longlong *)0x0;
              }
              else if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
            else {
              uVar8 = FUN_01db9f80();
              (**(code **)(*unaff_RDI + 0x920))(*unaff_RDI,uVar8);
              if (local_40 == (longlong *)0x0) goto LAB_01dc13de;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
            if (plVar12 != (longlong *)0x0) {
              uVar16 = FUN_01e3f820();
              local_f8 = (float)uVar16;
              fStack_f4 = (float)((ulonglong)uVar16 >> 0x20);
              FUN_01d526f0();
              local_58._0_4_ = auVar18._0_4_;
              local_58._4_4_ = auVar18._4_4_;
              uStack_50._0_4_ = auVar18._8_4_;
              uStack_50._4_4_ = auVar18._12_4_;
              auVar1._8_8_ = extraout_XMM0_Qb_02;
              auVar1._0_8_ = uVar16;
              auVar17._0_4_ = ((float)local_58 - local_58._4_4_) + local_f8;
              auVar17._4_4_ = (local_58._4_4_ - local_58._4_4_) + fStack_f4;
              auVar17._8_4_ = ((float)uStack_50 - uStack_50._4_4_) + (float)extraout_XMM0_Qb_02;
              auVar17._12_4_ =
                   (uStack_50._4_4_ - uStack_50._4_4_) +
                   (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
              auVar19 = blendps(auVar17,auVar1,2);
              FUN_00d05510(auVar19._0_8_);
              (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
              FUN_00d50b20();
            }
          }
        }
      }
LAB_01dc13de:
      plVar12 = (longlong *)*unaff_RSI;
      local_58 = FUN_01db9a50();
      uStack_50 = extraout_XMM0_Qb_01;
      fVar15 = (float)FUN_01dce580();
      auVar20._4_12_ = local_58._4_12_;
      auVar20._0_4_ = (float)local_58 + fVar15;
      blendps(auVar20,_DAT_0238ff00,0xe);
      (**(code **)(*plVar12 + 0x368))();
      plVar12 = plVar10;
      plVar14 = plVar13;
    }
    FUN_01d48390();
    lVar4 = DAT_028b8a48;
    bVar2 = false;
    if (DAT_028b8a5c != -1) {
      if (DAT_028b8a48 != 0) {
        plVar10 = (longlong *)*unaff_RSI;
        FUN_00d50b00();
        (**(code **)(*plVar10 + 0x400))();
        bVar2 = false;
        if (lVar4 == 0) goto joined_r0x01dc15dd;
        FUN_00d50b20();
      }
      bVar2 = false;
    }
  }
joined_r0x01dc15dd:
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar11) && (plVar14 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01a884d0 — 1847 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01a8851e) */
/* WARNING: Removing unreachable block (ram,0x01a88527) */

void FUN_01a884d0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RDI;
  bool bVar6;
  longlong *local_a0;
  char local_98;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01a89190();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01a88592;
    FUN_00d50b00();
LAB_01a8852c:
    FUN_01a13070();
    if (local_40 == 0) {
      bVar6 = false;
    }
    else {
      FUN_01a13070();
      (**(code **)(*local_60 + 0xa18))();
      bVar6 = local_50 != 0;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      FUN_01a13070();
      (**(code **)(*local_60 + 0xa18))();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01912530();
      lVar2 = *(longlong *)(unaff_RDI + 0xe8);
      lVar5 = lVar2;
      if (lVar2 != local_40) {
        lVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
            goto LAB_01a88758;
          }
          FUN_00d50b00();
          lVar2 = *(longlong *)(unaff_RDI + 0xe8);
          *(longlong *)(unaff_RDI + 0xe8) = local_40;
        }
        else {
          local_38 = '\0';
LAB_01a88758:
          *(longlong *)(unaff_RDI + 0xe8) = lVar5;
        }
        param_1 = (pthread_key_t)lVar2;
        if (lVar2 != 0) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = *(longlong **)(unaff_RDI + 0xd8);
      plVar3 = *(longlong **)(unaff_RDI + 0xe8);
      FUN_01a13070();
      (**(code **)(*local_a0 + 0xa18))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
      FUN_016c98e0();
      FUN_00d470c0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*plVar3 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x968))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = *(longlong **)(unaff_RDI + 0xe0);
      plVar3 = *(longlong **)(unaff_RDI + 0xe8);
      FUN_01a13070();
      (**(code **)(*local_a0 + 0xa18))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
      FUN_016c98e0();
      FUN_00d470c0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*plVar3 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x968))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar6 = false;
      goto LAB_01a88bb3;
    }
    bVar6 = false;
  }
  else {
    if (local_40 != 0) goto LAB_01a8852c;
LAB_01a88592:
    bVar6 = true;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xd8);
  FUN_00e9aaa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x968))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xe0);
  FUN_00e9aaa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x968))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_01a88bb3:
  (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x998))();
  if (!bVar6) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00dd7810 — 1719 bytes
// str: ""Cannot create value with typed string %@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dd7d54) */
/* WARNING: Removing unreachable block (ram,0x00dd7d60) */
/* WARNING: Removing unreachable block (ram,0x00dd7cb4) */
/* WARNING: Removing unreachable block (ram,0x00dd7cc0) */
/* WARNING: Removing unreachable block (ram,0x00dd7c11) */
/* WARNING: Removing unreachable block (ram,0x00dd7c1d) */
/* WARNING: Removing unreachable block (ram,0x00dd7b6e) */
/* WARNING: Removing unreachable block (ram,0x00dd7b7a) */
/* WARNING: Removing unreachable block (ram,0x00dd7ac8) */
/* WARNING: Removing unreachable block (ram,0x00dd7ad4) */
/* WARNING: Removing unreachable block (ram,0x00dd7a25) */
/* WARNING: Removing unreachable block (ram,0x00dd7a31) */

undefined8 FUN_00dd7810(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  
  iVar7 = FUN_00d8c7a0();
  if ((iVar7 == 0) || (cVar6 = FUN_00d8ca70(), lVar3 = DAT_02772088, cVar6 != '('))
  goto LAB_00dd7e91;
  if (DAT_02772088 != 0) {
    FUN_00d50b00();
  }
  iVar7 = FUN_00d90650();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (iVar7 != -1) {
    FUN_00d97ce0(param_1,iVar7 + 1);
    plVar4 = local_60;
    if (((((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_58 != '\0')) && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d8f140(param_1,iVar7 + 1);
    plVar5 = local_60;
    plVar1 = (longlong *)*unaff_RSI;
    if (plVar1 == local_60) {
      if (((char)unaff_RSI[1] != '\0') || (local_60 == (longlong *)0x0)) goto LAB_00dd798c;
      if ((char)local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_00dd7984;
      }
LAB_00dd794d:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    else {
      lVar3 = unaff_RSI[1];
      if ((char)local_58 != '\0') {
        *unaff_RSI = (longlong)local_60;
        if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00dd794d;
      }
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar5;
      if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00dd7984:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00dd798c:
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = DAT_02784098;
    if (DAT_02784098 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840a0;
    if (cVar6 != '\0') {
      FUN_00d96ea0();
      FUN_00dd65e0();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840a0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840a8;
    if (cVar6 != '\0') {
      FUN_00d96b50();
      FUN_00dd6740();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840a8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840b0;
    if (cVar6 != '\0') {
      FUN_00d971f0();
      FUN_00dd67f0();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840b0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840b8;
    if (cVar6 != '\0') {
      FUN_00d96410();
      FUN_00dd6480();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840b8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840c0;
    if (cVar6 != '\0') {
      FUN_00d967b0();
      FUN_00dd6530();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840c0 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027840c8;
    if (cVar6 != '\0') {
      FUN_00d97540();
      FUN_00dd6690();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (DAT_027840c8 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x50))();
    if (cVar6 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      iVar7 = FUN_00d8c7a0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (iVar7 == 1) {
        FUN_00d8ca70();
        FUN_00dd68a0();
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
    FUN_00d50b20();
  }
  lVar3 = DAT_027732f0;
  if (DAT_027732f0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *unaff_RSI;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar2;
  FUN_00cc7b40(param_1,&local_60);
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_00dd7e91:
  FUN_00dd6e60();
  return unaff_RDI;
}




// ============================================================
// @01a6e960 — 1609 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01a6e960(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  undefined4 uVar10;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar4 = (**(code **)(*unaff_RDI + 0xa78))();
  if ((cVar4 == '\0') || (cVar4 = (**(code **)(*unaff_RDI + 0xa20))(), cVar4 == '\0')) {
    uVar8 = 0;
    goto LAB_01a6e9c8;
  }
  (**(code **)(*unaff_RDI + 0x978))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar5 = FUN_01b71a90();
  uVar8 = (ulonglong)uVar5;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar5 & param_2) == 0) goto LAB_01a6e9c8;
  FUN_00d403d0();
  lVar3 = DAT_027e2678;
  if (DAT_027e2678 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff88,3,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00e7bdb0();
  local_80 = FUN_00e7bdb0();
  uVar10 = FUN_01caeae0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a6eb5e;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01a6eb5e:
    uVar10 = FUN_01d66da0();
    local_a0 = DAT_027e2690;
    if (DAT_027e2690 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_98 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar10,&local_a0);
    plVar1 = local_40;
    if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    if (plVar1 == (longlong *)0x0) {
LAB_01a6ebe7:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01a6ebe7;
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_01d66da0();
    local_90 = DAT_027652e0;
    if (DAT_027652e0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_88 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar10,&local_90);
    plVar2 = local_40;
    if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    if (plVar2 == (longlong *)0x0) {
LAB_01a6eccc:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01a6eccc;
    }
    plVar2 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) {
      FUN_01e42030();
      if (local_40 == (longlong *)0x0) {
        cVar4 = '\0';
      }
      else {
        FUN_01e42030();
        FUN_01d8b200();
        if (local_50 == unaff_RDI) {
          cVar4 = (**(code **)(*unaff_RDI + 0x9d0))();
        }
        else {
          cVar4 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
        local_80 = (**(code **)(*unaff_RDI + 0x9e0))();
      }
    }
    else {
      uVar7 = FUN_00dd6320();
      local_80 = FUN_00dd6320();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar10 = FUN_00d50b20();
  }
  FUN_01a6e330(uVar10,local_80);
  uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
LAB_01a6e9c8:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @01d10400 — 1595 bytes
// str: ""GNValue""
// str: ""GNMultipleValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d106d0) */
/* WARNING: Removing unreachable block (ram,0x01d106e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d10400(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_88;
  longlong local_48;
  char local_40;
  
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d3c38 = FUN_00d4fe50();
    _DAT_026d3c20 = "GNMultipleValue";
    _DAT_026d3c28 = 0x18;
    _DAT_026d3c30 = FUN_00050c70;
    _DAT_026d3c40 = 0;
    uRam00000000026d3c48 = 0;
    _DAT_026d3c50 = 0;
    uRam00000000026d3c58 = 0;
    _DAT_026d3c60 = 0;
    uRam00000000026d3c68 = 0;
    _DAT_026d3c70 = 0;
    uRam00000000026d3c78 = 0;
    _DAT_026d3c80 = 0;
    uRam00000000026d3c88 = 0;
    _DAT_026d3c90 = 0;
    uRam00000000026d3c98 = 0;
    _DAT_026d3ca0 = 0;
    uRam00000000026d3ca8 = 0;
    _DAT_026d3cb0 = 0;
    uRam00000000026d3cb8 = 0;
    _DAT_026d3cc0 = 0;
    uRam00000000026d3cc8 = 0;
    _DAT_026d3cd0 = 0;
    uRam00000000026d3cd8 = 0;
    _DAT_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01d10450:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_01d10450;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 != 0) goto LAB_01d1047c;
  }
  else {
    FUN_00d50b00();
LAB_01d1047c:
    FUN_00e987e0();
    lVar1 = *unaff_RSI;
    if (lVar1 == local_48) {
      if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
        if (local_40 != '\0') goto LAB_01d104d7;
        FUN_00d50b00();
        goto LAB_01d1050c;
      }
LAB_01d10513:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_48;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01d1050c:
        local_88 = unaff_RSI + 1;
        *(undefined1 *)local_88 = 1;
        goto LAB_01d10513;
      }
      *unaff_RSI = local_48;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d104d7:
      local_88 = unaff_RSI + 1;
      *(undefined1 *)local_88 = 1;
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)*unaff_RSI;
  if (plVar6 == (longlong *)0x0) {
    FUN_00d8ede0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x968))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == '\0') {
      return;
    }
    if (local_48 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_00053ac0();
  (**(code **)(*plVar6 + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar6 = unaff_RSI;
  if (cVar4 == '\0') {
    plVar6 = &DAT_02802688;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_01d105b3:
    cVar4 = FUN_00dd6e50();
    if (cVar4 == 'f') {
      FUN_00d459e0();
      (**(code **)(*unaff_RDI + 0x928))();
    }
    else {
      FUN_00d45870();
      (**(code **)(*unaff_RDI + 0x918))();
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_01d105b3;
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 == (longlong *)0x0) {
LAB_01d10691:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_01d10691;
  }
  if (*plVar6 != 0) {
    (**(code **)(*unaff_RDI + 0x968))();
    return;
  }
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar4 != '\0') goto LAB_01d10729;
  }
  plVar6 = &DAT_02802688;
LAB_01d10729:
  if (*plVar6 != 0) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x968))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == '\0') {
      return;
    }
    if (local_48 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 400))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  (**(code **)(*unaff_RDI + 0x968))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == '\0') {
    return;
  }
  if (local_48 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01b989f0 — 1512 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01b989f0(pthread_key_t param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  undefined4 uVar11;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar3 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar3 != '\0') {
    FUN_01caeae0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b98a66;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_01b98a66:
      local_60 = plVar1;
      uVar11 = FUN_01d66da0();
      local_a8 = DAT_027ebef0;
      if (DAT_027ebef0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_a0 = '\x01';
      pplVar10 = &local_40;
      FUN_000175c0(uVar11,&local_a8);
      plVar1 = local_40;
      FUN_0013de80();
      if (plVar1 == (longlong *)0x0) {
LAB_01b98adb:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01b98adb;
      }
      local_58 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar11 = FUN_01d66da0();
      local_98 = DAT_027e2690;
      if (DAT_027e2690 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_90 = '\x01';
      pplVar10 = &local_40;
      FUN_000175c0(uVar11,&local_98);
      plVar1 = local_40;
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        param_1 = 0x53cb0;
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
      local_64 = param_2;
      if (plVar1 == (longlong *)0x0) {
LAB_01b98bd1:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01b98bd1;
      }
      plVar1 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar11 = FUN_01d66da0();
      lVar8 = DAT_027652e0;
      if (DAT_027652e0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_88 = lVar8;
      local_80 = '\x01';
      pplVar10 = &local_40;
      FUN_000175c0(uVar11,&local_88);
      plVar2 = local_40;
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        param_1 = 0x53cb0;
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
      if (plVar2 == (longlong *)0x0) {
LAB_01b98cae:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01b98cae;
      }
      plVar2 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((((local_58 == (longlong *)0x0) || (plVar1 == (longlong *)0x0)) ||
          (plVar2 == (longlong *)0x0)) || ((char)local_64 == '\0')) {
        if (plVar2 != (longlong *)0x0) goto LAB_01b98e45;
      }
      else {
        (**(code **)(*unaff_RDI + 0xa48))();
        FUN_01b6d0d0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_00dd6320();
        uVar7 = FUN_00dd6320();
        local_40 = local_58;
        local_38 = '\0';
        FUN_012502a0(uVar7,uVar6,(char)unaff_RDI[0x36]);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        local_78 = local_58;
        local_70 = '\0';
        uVar6 = FUN_00dd6320();
        uVar7 = FUN_00dd6320();
        lVar8 = *unaff_RDI;
        (**(code **)(lVar8 + 0xa80))(uVar7,uVar6);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xa50))();
LAB_01b98e45:
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
      FUN_00d50b20();
      goto LAB_01b98e73;
    }
  }
  uVar9 = 0;
LAB_01b98e73:
  return uVar9 & 0xffffffff;
}




// ============================================================
// @00ddef40 — 1511 bytes
// ============================================================

void FUN_00ddef40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *in_RDX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 in_XMM1_Qb;
  longlong local_78;
  char local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38;
  char local_30;
  
  if ((*in_RDX == 0) || (iVar8 = FUN_00d8c7a0(), local_78 = DAT_0276cc80, iVar8 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if (DAT_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_00d91000(1,&local_78);
  lVar6 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  switch(*(undefined1 *)(unaff_RSI + 0x10)) {
  case 0x45:
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      local_48 = ZEXT816(0);
      local_58 = ZEXT816(0);
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    else {
      local_48._0_8_ = FUN_00dd6b50();
      local_48._8_8_ = extraout_XMM0_Qb;
      local_58._8_8_ = in_XMM1_Qb;
      local_58._0_8_ = param_2;
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    if ((cVar1 != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = extraout_XMM0_Qb_03;
      FUN_00d23620();
      auVar2._4_4_ = uStack_64;
      auVar2._0_4_ = local_68;
      auVar2._8_8_ = uStack_60;
      local_48 = blendps(local_48,auVar2,1);
    }
    if ((*(char *)(unaff_RSI + 0xd) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00d23620();
      local_48 = insertps(local_48,local_68,0x10);
    }
    if ((*(char *)(unaff_RSI + 0xe) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = extraout_XMM0_Qb_04;
      FUN_00d23620();
      auVar3._4_4_ = uStack_64;
      auVar3._0_4_ = local_68;
      auVar3._8_8_ = uStack_60;
      local_58 = blendps(local_58,auVar3,1);
    }
    if ((*(char *)(unaff_RSI + 0xf) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00d23620();
      insertps(local_58,local_68,0x10);
    }
    FUN_00dd6530();
    lVar7 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00ddf50a;
      }
LAB_00ddf500:
      local_38 = 0;
    }
    break;
  default:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_00ddf50a;
  case 0x50:
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      local_48 = ZEXT816(0);
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    else {
      local_48._0_8_ = FUN_00dd6bf0();
      local_48._8_8_ = extraout_XMM0_Qb_00;
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    if ((cVar1 != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      local_58._0_8_ = FUN_00d8d7b0();
      local_58._8_8_ = extraout_XMM0_Qb_05;
      FUN_00d23620();
      local_48 = blendps(local_48,local_58,1);
    }
    if ((*(char *)(unaff_RSI + 0xd) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      local_58._0_8_ = FUN_00d8d7b0();
      local_58._8_8_ = extraout_XMM0_Qb_06;
      FUN_00d23620();
      insertps(local_48,local_58._0_4_,0x10);
    }
    FUN_00dd65e0();
    lVar7 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00ddf50a;
      }
      goto LAB_00ddf500;
    }
    break;
  case 0x52:
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      local_48 = ZEXT816(0);
      local_58 = ZEXT816(0);
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    else {
      local_48._0_8_ = FUN_00dd6ab0();
      local_48._8_8_ = extraout_XMM0_Qb_01;
      local_58._8_8_ = in_XMM1_Qb;
      local_58._0_8_ = param_2;
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    if ((cVar1 != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = extraout_XMM0_Qb_07;
      FUN_00d23620();
      auVar4._4_4_ = uStack_64;
      auVar4._0_4_ = local_68;
      auVar4._8_8_ = uStack_60;
      local_48 = blendps(local_48,auVar4,1);
    }
    if ((*(char *)(unaff_RSI + 0xd) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00d23620();
      local_48 = insertps(local_48,local_68,0x10);
    }
    if ((*(char *)(unaff_RSI + 0xe) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = extraout_XMM0_Qb_08;
      FUN_00d23620();
      auVar5._4_4_ = uStack_64;
      auVar5._0_4_ = local_68;
      auVar5._8_8_ = uStack_60;
      local_58 = blendps(local_58,auVar5,1);
    }
    if ((*(char *)(unaff_RSI + 0xf) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00d23620();
      insertps(local_58,local_68,0x10);
    }
    FUN_00dd6480();
    lVar7 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00ddf50a;
      }
      goto LAB_00ddf500;
    }
    break;
  case 0x53:
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      local_48 = ZEXT816(0);
      cVar1 = *(char *)(unaff_RSI + 0xe);
    }
    else {
      local_48._0_8_ = FUN_00dd6c90();
      local_48._8_8_ = extraout_XMM0_Qb_02;
      cVar1 = *(char *)(unaff_RSI + 0xe);
    }
    if ((cVar1 != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      local_58._0_8_ = FUN_00d8d7b0();
      local_58._8_8_ = extraout_XMM0_Qb_09;
      FUN_00d23620();
      local_48 = blendps(local_48,local_58,1);
    }
    if ((*(char *)(unaff_RSI + 0xf) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      local_58._0_8_ = FUN_00d8d7b0();
      local_58._8_8_ = extraout_XMM0_Qb_10;
      FUN_00d23620();
      insertps(local_48,local_58._0_4_,0x10);
    }
    FUN_00dd6740();
    lVar7 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00ddf50a;
      }
      goto LAB_00ddf500;
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00ddf50a:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d83f70 — 1453 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01d83f70(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar9;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_31;
  
  FUN_01f97770();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_f0 = *param_1;
  local_e8 = '\0';
  uVar9 = FUN_01f97ca0(&local_f0,&stack0xffffffffffffff90);
  local_40 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (longlong *)0x0) && (uVar9 = FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (unaff_RSI != (longlong *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_e0 = *param_1;
  local_d8 = '\0';
  pplVar8 = &local_50;
  (**(code **)(*unaff_RSI + 0x88))(uVar9,&local_e0);
  plVar1 = local_50;
  if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  if (plVar1 == (longlong *)0x0) {
LAB_01d840a5:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01d840a5;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  plVar7 = (longlong *)*param_2;
  if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  if (plVar7 == (longlong *)0x0) {
LAB_01d84167:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar7 = param_2;
    if (cVar5 == '\0') goto LAB_01d84167;
  }
  lVar2 = *plVar7;
  local_31 = (char)plVar7[1];
  if ((local_31 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar7 = local_40;
  if ((plVar1 == (longlong *)0x0) || (lVar2 == 0)) {
LAB_01d84230:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    bVar4 = false;
    bVar3 = false;
    plVar7 = local_40;
  }
  else {
    if (local_40 == (longlong *)0x0) {
      local_b8 = '\0';
      local_c0 = lVar2;
      cVar5 = (**(code **)(*plVar1 + 0x50))();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') goto LAB_01d84230;
      local_b0 = *param_1;
      local_a8 = '\0';
      local_a0 = *param_2;
      local_98 = '\0';
      (**(code **)(*unaff_RSI + 0x410))(&local_a0,&local_b0);
      plVar7 = local_40;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
        if (local_48 == '\0') {
          FUN_00d50b00();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      local_88 = '\0';
      local_90 = plVar1;
      FUN_01f995d0();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_78 = '\0';
      local_80 = lVar2;
      FUN_01f99620();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar7 + 0x378))();
    }
    else {
      local_c8 = '\0';
      local_d0 = lVar2;
      FUN_01f993b0();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = plVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar4 = true;
    bVar3 = true;
  }
  if ((local_31 != '\0') && (bVar3 = bVar4, lVar2 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3 && plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00dbff30 — 1442 bytes
// ============================================================

void FUN_00dbff30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar3;
  bool bVar4;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  undefined8 *local_f8;
  undefined1 local_d8 [8];
  undefined1 local_d0;
  undefined8 *local_c8;
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
  undefined4 local_5c;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  lVar1 = DAT_02783b28;
  local_5c = param_4;
  if (DAT_02783b28 != 0) {
    FUN_00d50b00();
  }
  local_f8 = param_1;
  local_c8 = param_3;
  FUN_00dbdbc0();
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00dbdd00();
  lVar3 = local_48;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02783b10;
  lVar1 = DAT_02783b08;
  if ((char)local_5c == '\0') {
    local_168 = *unaff_RDI;
    local_160 = 0;
    local_a0 = lVar3;
    local_98 = '\0';
    if (DAT_02783b10 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    local_158 = *local_c8;
    local_150 = 0;
    FUN_00dbebd0(&local_90,&local_a0,&local_158);
    lVar1 = local_48;
    if (lVar3 == local_48) {
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar4 = lVar3 != 0;
      lVar3 = lVar1;
      if (bVar4) {
        FUN_00d50b20();
      }
    }
    else {
      bVar4 = lVar3 != 0;
      lVar3 = lVar1;
      if (bVar4) {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = lVar3;
    local_b8 = '\0';
    if (DAT_02783b08 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    local_178 = *local_c8;
    local_170 = 0;
    FUN_00dbebd0(&local_b0,&local_c0,&local_178);
    lVar1 = local_48;
    if (lVar3 == local_48) {
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar4 = lVar3 != 0;
      lVar3 = lVar1;
      if (bVar4) {
        FUN_00d50b20();
      }
    }
    else {
      bVar4 = lVar3 != 0;
      lVar3 = lVar1;
      if (bVar4) {
        FUN_00d50b20();
      }
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02783b18;
  local_148 = *unaff_RDI;
  local_140 = 0;
  local_78 = '\0';
  local_80 = lVar3;
  if (DAT_02783b18 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  local_138 = *local_f8;
  local_130 = 0;
  FUN_00dbf000();
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_d0 = 1;
  FUN_00dbebd0(&local_70,&local_80,local_d8);
  lVar2 = local_48;
  if (lVar3 == local_48) {
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar4 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_40 = '\0';
    lVar3 = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_128 = *unaff_RSI;
  local_120 = 0;
  local_110 = 0;
  FUN_00dbde70();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_108 = local_48;
  local_100 = 1;
  FUN_00dbfc90(&local_108,0);
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01a72180 — 1406 bytes
// ============================================================

void FUN_01a72180(ulonglong param_1,undefined4 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  uint unaff_ESI;
  longlong *unaff_RDI;
  ulonglong local_d8;
  undefined1 local_d0;
  ulonglong local_c8;
  undefined1 local_c0;
  ulonglong local_b8;
  char local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  char local_78;
  ulonglong local_70;
  int local_64;
  ulonglong local_60;
  byte local_58;
  ulonglong local_50;
  char local_48 [8];
  ulonglong local_40;
  char local_38 [8];
  
  local_a0 = param_2;
  local_9c = unaff_ESI;
  uVar4 = (**(code **)(*unaff_RDI + 0x9d8))();
  local_50 = uVar4;
  local_60 = (**(code **)(*unaff_RDI + 0x9e0))();
  if (((uVar4 >> 0x20 == 0) || (local_60 >> 0x20 == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0'))
  {
    local_58 = 0;
    local_60 = 0;
    local_a4 = 0xffffffff;
    local_40 = 0;
    local_70 = 0;
    local_64 = 0;
    while( true ) {
      pVar8 = (pthread_key_t)param_1;
      FUN_01b6d0d0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = (**(code **)(*unaff_RDI + 0x9d8))();
      param_1 = (**(code **)(*unaff_RDI + 0x9e0))();
      cVar3 = FUN_01252960(param_1,uVar6,&local_60,&local_88);
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = local_70;
      if (cVar3 == '\0') break;
      if ((local_60 != 0) && (param_1 = 0, local_88 >> 0x20 != 0)) {
        pVar8 = (pthread_key_t)(local_98 >> 0x20);
        param_1 = 0;
        if (local_98 >> 0x20 != 0) {
          if (unaff_RDI[0x3f] == 0) {
            uVar4 = 0;
          }
          else {
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01510d50();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012521f0(local_88,0,0,0);
            uVar4 = local_50;
            local_38[0] = local_48[0];
            pcVar7 = local_48;
            if (local_48[0] == '\0') {
              pcVar7 = local_38;
            }
            *pcVar7 = '\0';
            if ((local_48[0] != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_38[0] == '\0') {
              if (uVar4 == 0) {
                uVar4 = 0;
              }
              else {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          local_d8 = local_60;
          local_d0 = 0;
          local_c0 = 0;
          pVar8 = local_9c & 0xff;
          local_c8 = uVar4;
          local_90 = uVar4;
          FUN_01a72920((undefined1)local_9c,&local_d8,(undefined1)local_a0,&local_c8);
          uVar2 = local_50;
          bVar1 = local_58;
          uVar4 = local_60;
          if (local_60 == local_50) {
            if ((local_58 == 0) && (local_50 != 0)) {
              if (local_48[0] == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01a724cc;
            }
            if ((local_48[0] != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_48[0] == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              local_60 = uVar2;
              if ((bVar1 != 0) && (uVar4 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = local_50;
              if ((local_58 != 0) && (uVar4 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01a724cc:
            local_58 = 1;
          }
          if (local_64 == 0) {
            uVar4 = local_40;
            (**(code **)(*unaff_RDI + 0xa48))();
            pVar8 = (pthread_key_t)uVar4;
          }
          FUN_01b6d0d0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_50 = local_60;
          local_48[0] = '\0';
          param_1 = local_98;
          uVar6 = FUN_012502a0(local_98,local_88,0);
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar6 = FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            uVar6 = FUN_00d50b20();
          }
          bVar1 = local_58;
          uVar4 = local_60;
          if (local_64 == 0) {
            if (local_70 == local_60) {
              if (((local_58 != 0) && ((char)local_40 == '\0')) && (local_70 != 0)) {
                local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if ((local_58 != 0) && (local_60 != 0)) {
                FUN_00d50b00();
              }
              if (((char)local_40 == '\0') || (local_70 == 0)) {
                local_40 = (ulonglong)(uint)bVar1;
                local_70 = uVar4;
              }
              else {
                local_70 = uVar4;
                FUN_00d50b20();
                local_40 = (ulonglong)(uint)bVar1;
              }
            }
          }
          local_64 = local_64 + 1;
          if (local_90 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (local_64 != 0) {
      if (local_64 == 1) {
        local_b8 = local_60;
        local_b0 = '\0';
        (**(code **)(*unaff_RDI + 0xa80))(local_98,local_88);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0xa50))();
    }
    if (((char)local_40 != '\0') && (uVar4 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != 0) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01dbc160 — 1399 bytes
// str: ""GNValue""
// str: ""GNMultipleValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbc160(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
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
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_0277a3a0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar5 != 0)) {
    _DAT_026d3c38 = FUN_00d4fe50();
    _DAT_026d3c20 = "GNMultipleValue";
    _DAT_026d3c28 = 0x18;
    _DAT_026d3c30 = FUN_00050c70;
    _DAT_026d3c40 = 0;
    uRam00000000026d3c48 = 0;
    _DAT_026d3c50 = 0;
    uRam00000000026d3c58 = 0;
    _DAT_026d3c60 = 0;
    uRam00000000026d3c68 = 0;
    _DAT_026d3c70 = 0;
    uRam00000000026d3c78 = 0;
    _DAT_026d3c80 = 0;
    uRam00000000026d3c88 = 0;
    _DAT_026d3c90 = 0;
    uRam00000000026d3c98 = 0;
    _DAT_026d3ca0 = 0;
    uRam00000000026d3ca8 = 0;
    _DAT_026d3cb0 = 0;
    uRam00000000026d3cb8 = 0;
    _DAT_026d3cc0 = 0;
    uRam00000000026d3cc8 = 0;
    _DAT_026d3cd0 = 0;
    uRam00000000026d3cd8 = 0;
    _DAT_026d3ce0 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01dbc1b2:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01dbc1b2;
  }
  lVar1 = *plVar6;
  lVar3 = plVar6[1];
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
LAB_01dbc1dd:
    FUN_00e99c70();
    plVar6 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_c8 = '\0';
    local_88 = 0;
    lVar2 = unaff_RDI[0x39];
    local_d0 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_90 = lVar2;
    FUN_00d8ede0();
    local_50 = local_a0;
    local_48 = 0;
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar6 + 0x368))(&local_90,&local_d0,&local_50);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*unaff_RDI + 0x968))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((char)lVar3 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (lVar1 != 0) goto LAB_01dbc1dd;
  if ((longlong *)unaff_RDI[0x39] != (longlong *)0x0) {
    local_c0 = *unaff_RSI;
    local_b8 = '\0';
    (**(code **)(*(longlong *)unaff_RDI[0x39] + 0x388))(param_1,&local_c0);
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*unaff_RDI + 0x968))();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_b8 == '\0') {
      return;
    }
    if (local_c0 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar4 != '\0') goto LAB_01dbc42f;
  }
  plVar6 = &DAT_02802688;
LAB_01dbc42f:
  if (*plVar6 != 0) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*unaff_RDI + 0x968))();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == '\0') {
      return;
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_01d10400();
  if (local_a8 == '\0') {
    return;
  }
  if (local_b0 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00dc25a0 — 1347 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dc2738) */

void FUN_00dc25a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_d0;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  int local_48;
  int iStack_44;
  int local_40;
  char local_38 [8];
  
  plVar2 = local_60;
  local_c0 = *unaff_RSI;
  if (local_c0 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_b8 = '\0';
  FUN_00d6c240();
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00dc5330();
  if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00ca1380();
  local_38[0] = local_58[0];
  pcVar5 = local_58;
  if (local_58[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00dc270b;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_00dc270b:
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar2;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    while( true ) {
      lVar1 = DAT_02783b38;
      lVar6 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)local_50 + 0xc) <= local_48) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
      if (DAT_02783b38 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar1;
      local_a8 = '\x01';
      cVar3 = (**(code **)(*local_60 + 0x50))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        iVar8 = local_40 + local_48;
        FUN_00018280();
        goto joined_r0x00dc27fb;
      }
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
    }
    iVar8 = -1;
    FUN_00018280();
joined_r0x00dc27fb:
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (iVar8 != -1) {
      FUN_00c9fe20();
      pcVar5 = local_58;
      if (local_58[0] == '\0') {
        pcVar5 = local_38;
      }
      local_38[0] = local_58[0];
      *pcVar5 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(local_60[2] + (longlong)iVar8 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      iVar8 = FUN_00d8c7a0();
      lVar6 = DAT_02783b68;
      if (iVar8 < 7) {
LAB_00dc29a0:
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      else {
        if (DAT_02783b68 != 0) {
          FUN_00d50b00();
        }
        local_a0 = lVar6;
        local_98 = '\x01';
        cVar3 = FUN_00d90870();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((cVar3 == '\0') || (sVar4 = FUN_00d8cbc0(), sVar4 != 0x3a)) goto LAB_00dc29a0;
        FUN_00d8f140();
        if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar7 + 0x18))();
        FUN_00d6be50();
        if (local_58[0] == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00dc2a0c;
          }
        }
        else if (local_60 != (longlong *)0x0) {
LAB_00dc2a0c:
          local_58[0] = '\0';
          iStack_44 = 0;
          local_40 = 0;
          local_50 = local_60;
          for (lVar6 = 0; local_48 = (int)lVar6, local_48 < *(int *)((longlong)local_60 + 0xc);
              lVar6 = lVar6 + 1) {
            local_c8 = 0;
            local_d0 = plVar7;
            FUN_00dc6010(local_60,&local_d0,param_3,param_4,0,
                         *(undefined8 *)(local_60[2] + lVar6 * 8),0);
          }
          FUN_00bea5a0();
          FUN_00d50b20();
        }
        *unaff_RDI = plVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00dc29c0;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00dc29c0:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00e8e840 — 1274 bytes
// ============================================================

void FUN_00e8e840(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar6;
  undefined8 uVar7;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
LAB_00e8e930:
    FUN_00e7bdb0();
    FUN_00dd67f0();
    lVar4 = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 != '\0') goto LAB_00e8ecee;
    if (local_40 != 0) {
      FUN_00d50b00();
      *unaff_RDI = lVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_38 == '\0') {
        return;
      }
      if (local_40 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else {
    uVar7 = FUN_00d95590();
    local_88 = 0;
    local_90 = CONCAT44(uStack_4c,local_50);
    if (local_48 == '\0') {
      if (local_90 != 0) {
        uVar7 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_88 = '\x01';
    FUN_00d97f20(uVar7,&local_90);
    iVar3 = FUN_00d8c7a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 == 0) goto LAB_00e8e930;
    FUN_00d4c220();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    cVar2 = FUN_00d90f10();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_02704060;
    if (cVar2 == '\0') {
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      FUN_00d91000(1,&local_a8);
      local_58 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (*(int *)(local_58 + 0xc) == 1) {
        FUN_00d8d560();
        lVar4 = FUN_00e7bcc0();
      }
      else if (*(int *)(local_58 + 0xc) < 2) {
        lVar4 = 0x100000000;
      }
      else {
        plVar5 = *(longlong **)(local_58 + 0x10);
        lVar4 = *plVar5;
        if (lVar4 != 0) {
          FUN_00d50b00();
          plVar5 = *(longlong **)(local_58 + 0x10);
        }
        lVar1 = plVar5[1];
        local_98 = lVar4;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_60 = lVar1;
        uVar7 = FUN_00d95590();
        local_68 = 0;
        local_70 = CONCAT44(uStack_4c,local_50);
        if (local_48 == '\0') {
          if (local_70 != 0) {
            uVar7 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_68 = '\x01';
        FUN_00d91bc0(uVar7,&local_70);
        lVar4 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)(lVar4 + 0xc) < 2) {
          FUN_00d8d560();
          FUN_00d8d560();
          lVar4 = FUN_00e7bcc0();
        }
        else {
          local_50 = FUN_00d8d560();
          FUN_00d8d560();
          FUN_00d8d560();
          local_40 = FUN_00e7bcc0();
          FUN_00e7c260();
          lVar4 = local_40;
        }
        FUN_00d50b20();
        lVar1 = local_98;
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(ulonglong *)(unaff_RSI + 0x10) >> 0x20 != 0) {
        local_40 = lVar4;
        FUN_00e7c860();
        FUN_00e7cd00();
      }
      FUN_00d50b20();
    }
    else {
      iVar3 = *(int *)(unaff_RSI + 0x14);
      fVar6 = (float)FUN_00d8d7b0();
      if (iVar3 == 0) {
        FUN_00e7d000((double)fVar6,DAT_023d5f50);
      }
      else {
        FUN_00e7cd00();
      }
    }
    FUN_00dd67f0();
    lVar4 = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 != '\0') goto LAB_00e8ecee;
    if (local_40 != 0) {
      FUN_00d50b00();
      *unaff_RDI = lVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_38 == '\0') {
        return;
      }
      if (local_40 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  local_40 = 0;
LAB_00e8ecee:
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00e90760 — 1212 bytes
// ============================================================

ulonglong FUN_00e90760(undefined8 param_1,undefined8 param_2,mach_vm_size_t param_3,int param_4)

{
  mach_vm_address_t *source_address;
  mach_vm_address_t *address;
  kern_return_t kVar1;
  ulonglong uVar2;
  longlong lVar3;
  segment_command *psVar4;
  void *pvVar5;
  mach_vm_address_t mVar6;
  boolean_t unaff_EBX;
  void *pvVar7;
  mach_vm_address_t *unaff_RSI;
  ulonglong unaff_RDI;
  mach_vm_size_t size;
  vm_prot_t unaff_R12D;
  mach_vm_address_t *pmVar8;
  vm_prot_t unaff_R13D;
  mach_vm_address_t *pmVar9;
  vm_inherit_t unaff_R14D;
  mem_entry_name_port_t object;
  void *pvVar10;
  
  if (unaff_RSI == (mach_vm_address_t *)0x0) {
    FUN_00e905a0();
    return 0;
  }
  if (unaff_RDI == 0) {
    uVar2 = FUN_00e8fc40();
    return uVar2;
  }
  if ((unaff_RDI & 0x10) == 0) {
    lVar3 = *(longlong *)(unaff_RDI & 0xffffffffffff0000);
    pvVar7 = (void *)0x0;
    source_address = (mach_vm_address_t *)(&DAT_028026d8)[(longlong)*(int *)(lVar3 + 4) * 7];
  }
  else {
    pvVar7 = (void *)(unaff_RDI - 0x10);
    lVar3 = *(longlong *)(unaff_RDI - 0x10);
    source_address = *(mach_vm_address_t **)(unaff_RDI - 8);
  }
  psVar4 = (segment_command *)0x0;
  if ((((((((unaff_RSI <= DAT_028026e0) ||
           (psVar4 = (segment_command *)((longlong)&MACH_HEADER.magic + 1),
           unaff_RSI <= DAT_02802718)) ||
          (psVar4 = (segment_command *)((longlong)&MACH_HEADER.magic + 2), unaff_RSI <= DAT_02802750
          )) || ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.magic + 3),
                 unaff_RSI <= DAT_02802788 ||
                 (psVar4 = (segment_command *)&MACH_HEADER.cputype, unaff_RSI <= DAT_028027c0)))) ||
        ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.cputype + 1),
         unaff_RSI <= DAT_028027f8 ||
         ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.cputype + 2),
          unaff_RSI <= DAT_02802830 ||
          (psVar4 = (segment_command *)((longlong)&MACH_HEADER.cputype + 3),
          unaff_RSI <= DAT_02802868)))))) ||
       ((psVar4 = (segment_command *)&MACH_HEADER.cpusubtype, unaff_RSI <= DAT_028028a0 ||
        ((((((psVar4 = (segment_command *)((longlong)&MACH_HEADER.cpusubtype + 1),
             unaff_RSI <= DAT_028028d8 ||
             (psVar4 = (segment_command *)((longlong)&MACH_HEADER.cpusubtype + 2),
             unaff_RSI <= DAT_02802910)) ||
            (psVar4 = (segment_command *)((longlong)&MACH_HEADER.cpusubtype + 3),
            unaff_RSI <= DAT_02802948)) ||
           (((psVar4 = (segment_command *)&MACH_HEADER.filetype, unaff_RSI <= DAT_02802980 ||
             (psVar4 = (segment_command *)((longlong)&MACH_HEADER.filetype + 1),
             unaff_RSI <= DAT_028029b8)) ||
            ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.filetype + 2),
             unaff_RSI <= DAT_028029f0 ||
             ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.filetype + 3),
              unaff_RSI <= DAT_02802a28 ||
              (psVar4 = (segment_command *)&MACH_HEADER.ncmds, unaff_RSI <= DAT_02802a60)))))))) ||
          (psVar4 = (segment_command *)((longlong)&MACH_HEADER.ncmds + 1), unaff_RSI <= DAT_02802a98
          )) || (((psVar4 = (segment_command *)((longlong)&MACH_HEADER.ncmds + 2),
                  unaff_RSI <= DAT_02802ad0 ||
                  (psVar4 = (segment_command *)((longlong)&MACH_HEADER.ncmds + 3),
                  unaff_RSI <= DAT_02802b08)) ||
                 (psVar4 = (segment_command *)&MACH_HEADER.sizeofcmds, unaff_RSI <= DAT_02802b40))))
        )))) || (((psVar4 = (segment_command *)((longlong)&MACH_HEADER.sizeofcmds + 1),
                  unaff_RSI <= DAT_02802b78 ||
                  (psVar4 = (segment_command *)((longlong)&MACH_HEADER.sizeofcmds + 2),
                  unaff_RSI <= DAT_02802bb0)) ||
                 (((psVar4 = (segment_command *)((longlong)&MACH_HEADER.sizeofcmds + 3),
                   unaff_RSI <= DAT_02802be8 ||
                   ((psVar4 = (segment_command *)&MACH_HEADER.flags, unaff_RSI <= DAT_02802c20 ||
                    (psVar4 = (segment_command *)((longlong)&MACH_HEADER.flags + 1),
                    unaff_RSI <= DAT_02802c58)))) ||
                  (psVar4 = (segment_command *)((longlong)&MACH_HEADER.flags + 2),
                  unaff_RSI <= DAT_02802c90)))))) ||
     (((((psVar4 = (segment_command *)((longlong)&MACH_HEADER.flags + 3), unaff_RSI <= DAT_02802cc8
         || (psVar4 = (segment_command *)&MACH_HEADER.reserved, unaff_RSI <= DAT_02802d00)) ||
        (psVar4 = (segment_command *)((longlong)&MACH_HEADER.reserved + 1),
        unaff_RSI <= DAT_02802d38)) ||
       ((psVar4 = (segment_command *)((longlong)&MACH_HEADER.reserved + 2),
        unaff_RSI <= DAT_02802d70 ||
        (psVar4 = (segment_command *)((longlong)&MACH_HEADER.reserved + 3),
        unaff_RSI <= DAT_02802da8)))) ||
      ((psVar4 = &segment_command_00000020, unaff_RSI <= DAT_02802de0 ||
       ((psVar4 = (segment_command *)((longlong)&segment_command_00000020.cmd + 1),
        unaff_RSI <= DAT_02802e18 ||
        (psVar4 = (segment_command *)((longlong)&segment_command_00000020.cmd + 2),
        unaff_RSI <= DAT_02802e50)))))))) {
    if ((lVar3 != 0) && (*(int *)(lVar3 + 4) == (int)psVar4)) {
      if ((&DAT_028026ec)[(longlong)psVar4 * 0x38] == '\0') {
        *(mach_vm_address_t **)((longlong)pvVar7 + 8) = unaff_RSI + 2;
        return unaff_RDI;
      }
      return unaff_RDI;
    }
LAB_00e90a9a:
    uVar2 = FUN_00e8fc40();
    pmVar9 = source_address + -2;
    if ((unaff_RDI & 0x10) == 0) {
      pmVar9 = source_address;
    }
    if (unaff_RSI < pmVar9) {
      pmVar9 = unaff_RSI;
    }
    _memcpy(psVar4,pmVar9,(size_t)param_3);
    FUN_00e905a0();
    return uVar2;
  }
  if (lVar3 != 0) goto LAB_00e90a9a;
  pmVar8 = (mach_vm_address_t *)
           ((ulonglong)(&UNK_0000400f + (longlong)unaff_RSI) & 0xffffffffffffc000);
  mVar6 = (longlong)source_address - (longlong)pmVar8;
  pmVar9 = source_address;
  if (mVar6 == 0) goto LAB_00e90a68;
  if (pmVar8 <= source_address) {
    if (0xffff < mVar6) {
      _mach_vm_deallocate(0x22,mVar6,param_3);
      pmVar9 = pmVar8;
    }
    goto LAB_00e90a68;
  }
  pmVar9 = source_address + 0x2000;
  address = (mach_vm_address_t *)0x10000;
  if ((mach_vm_address_t *)0xffff <
      (mach_vm_address_t *)((longlong)pmVar8 - (longlong)source_address)) {
    pmVar9 = pmVar8;
    address = (mach_vm_address_t *)((longlong)pmVar8 - (longlong)source_address);
  }
  lVar3 = (longlong)source_address + (longlong)pvVar7;
  object = 0xe90b2b;
  kVar1 = _mach_vm_allocate(lVar3 == 0 | 0xfa000000,address,param_3,param_4);
  if ((kVar1 == 0) && (lVar3 != 0)) goto LAB_00e90a68;
  pmVar9 = (mach_vm_address_t *)((longlong)pmVar9 + 0x3fffU & 0xffffffffffffc000);
  pvVar10 = (void *)0x0;
  pvVar7 = (void *)0x0;
  pvVar5 = (void *)((longlong)&MACH_HEADER.reserved + 3);
  size = 0xfa000001;
  mVar6 = 0;
  kVar1 = _mach_vm_map(0x1f,pmVar9,0xfa000001,0,1,object,0,unaff_EBX,unaff_R12D,unaff_R13D,
                       unaff_R14D);
  if ((kVar1 == 0) && (pvVar7 = pvVar10, pvVar10 != (void *)0x0)) {
    if (source_address < (mach_vm_address_t *)0x10000) goto LAB_00e90bfa;
LAB_00e90be4:
    pvVar5 = pvVar7;
    kVar1 = _mach_vm_copy((vm_map_t)pvVar7,(mach_vm_address_t)source_address,size,mVar6);
    pvVar10 = pvVar7;
    if (kVar1 != 0) goto LAB_00e90bfa;
  }
  else {
    FUN_00e8f250();
    pvVar10 = pvVar7;
    if ((mach_vm_address_t *)0xffff < source_address) goto LAB_00e90be4;
LAB_00e90bfa:
    _memcpy(pvVar5,source_address,(size_t)size);
    pvVar7 = pvVar10;
  }
  _mach_vm_deallocate((vm_map_t)pvVar5,(mach_vm_address_t)source_address,size);
LAB_00e90a68:
  *(mach_vm_address_t **)((longlong)pvVar7 + 8) = pmVar9;
  return (longlong)pvVar7 + 0x10;
}




// ============================================================
// @00dd6f70 — 1194 bytes
// str: ""%@ can not be converted into an GNValue.""
// ============================================================

void FUN_00dd6f70(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 extraout_XMM0_Qb_01;
  
  cVar4 = FUN_00d8ca50();
  lVar1 = DAT_02704060;
  if (cVar4 == '\0') {
    local_48 = '\0';
    uStack_47 = 0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar1;
    local_90 = '\x01';
    pvVar8 = (void *)((longlong)&MACH_HEADER.magic + 1);
    uVar7 = FUN_00d91000(1,&local_98);
    puVar11 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      local_48 = '\0';
      uStack_47 = 0;
    }
    else if ((char)uStack_60 == '\0') {
      uVar7 = FUN_00d50b00();
      uStack_47 = (undefined7)((ulonglong)uVar7 >> 8);
      local_48 = '\x01';
      if (((char)uStack_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      uStack_47 = (undefined7)((ulonglong)uVar7 >> 8);
      local_48 = '\x01';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)((longlong)puVar11 + 0xc) == 2) {
      FUN_00d8d560();
      FUN_00d8d560();
      local_68 = (undefined8 *)FUN_00e7bcc0();
      *(undefined1 *)(unaff_RDI + 0xc) = 0x71;
      uVar6 = FUN_00e82730();
      pvVar9 = (void *)(ulonglong)uVar6;
      if ((int)uVar6 < 9) {
        pvVar9 = (void *)(longlong)(int)uVar6;
      }
      else {
        uVar7 = FUN_00e83010();
        *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
      }
      _memcpy(pvVar8,pvVar9,param_3);
      cVar4 = local_48;
      goto joined_r0x00dd740f;
    }
  }
  lVar1 = DAT_0276cc80;
  if (DAT_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  pvVar8 = (void *)((longlong)&MACH_HEADER.magic + 1);
  uVar7 = FUN_00d91000(1,&local_88);
  puVar10 = local_68;
  if (local_68 == puVar11) {
    puVar10 = puVar11;
    cVar4 = local_48;
    if ((local_48 != '\0') || (local_68 == (undefined8 *)0x0)) goto joined_r0x00dd715d;
    if ((char)uStack_60 == '\0') {
      uVar7 = FUN_00d50b00();
      goto LAB_00dd714a;
    }
LAB_00dd7115:
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cVar4 = '\x01';
  }
  else {
    if ((char)uStack_60 != '\0') {
      if ((local_48 != '\0') && (puVar11 != (undefined8 *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      goto LAB_00dd7115;
    }
    if (local_68 != (undefined8 *)0x0) {
      uVar7 = FUN_00d50b00();
    }
    cVar4 = '\x01';
    if ((local_48 != '\0') && (puVar11 != (undefined8 *)0x0)) {
      uVar7 = FUN_00d50b20();
      puVar11 = puVar10;
LAB_00dd714a:
      puVar10 = puVar11;
      cVar4 = '\x01';
    }
joined_r0x00dd715d:
    if (((char)uStack_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = DAT_027732f0;
  if (*(int *)((longlong)puVar10 + 0xc) == 2) {
    cVar5 = FUN_00d8ca50();
    if ((cVar5 == '\0') && (cVar5 = FUN_00d8ca50(), cVar5 == '\0')) {
      FUN_00d8d560();
      FUN_00d8d560();
      local_68 = (undefined8 *)FUN_00e7b4e0();
      *(undefined1 *)(unaff_RDI + 0xc) = 0x43;
      uVar6 = FUN_00e82730();
      pvVar9 = (void *)(ulonglong)uVar6;
      if ((int)uVar6 < 9) {
LAB_00dd73d9:
        _memcpy(pvVar8,(void *)(longlong)(int)uVar6,param_3);
        goto joined_r0x00dd740f;
      }
      uVar7 = FUN_00e83010();
    }
    else {
      uVar7 = FUN_00d8d7b0();
      local_48 = (char)uVar7;
      uStack_47 = (undefined7)((ulonglong)uVar7 >> 8);
      uStack_40 = extraout_XMM0_Qb_02;
      auVar15._0_8_ = FUN_00d8d7b0();
      auVar15._8_8_ = extraout_XMM0_Qb_03;
      auVar14._1_7_ = uStack_47;
      auVar14[0] = local_48;
      auVar14._8_8_ = uStack_40;
      auVar14 = insertps(auVar14,auVar15,0x10);
      local_68 = auVar14._0_8_;
      *(undefined1 *)(unaff_RDI + 0xc) = 0x50;
      uVar6 = FUN_00e82730();
      pvVar9 = (void *)(ulonglong)uVar6;
      if ((int)uVar6 < 9) goto LAB_00dd73d9;
      uVar7 = FUN_00e83010();
    }
  }
  else {
    if (*(int *)((longlong)puVar10 + 0xc) != 4) {
      if (DAT_027732f0 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      lVar1 = *unaff_RSI;
      uStack_60 = CONCAT44(uStack_60._4_4_,1);
      local_68 = &DAT_024c5048;
      if (lVar1 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_50 = '\x01';
      local_58 = lVar1;
      FUN_00cc7b40(uVar7,&local_68);
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      goto joined_r0x00dd740f;
    }
    uVar7 = FUN_00d8d7b0();
    local_48 = (char)uVar7;
    uStack_47 = (undefined7)((ulonglong)uVar7 >> 8);
    uStack_40 = extraout_XMM0_Qb;
    uVar12 = FUN_00d8d7b0();
    uVar7 = FUN_00d8d7b0();
    auVar13._0_8_ = FUN_00d8d7b0();
    auVar13._8_8_ = extraout_XMM0_Qb_01;
    auVar3._1_7_ = uStack_47;
    auVar3[0] = local_48;
    auVar3._8_8_ = uStack_40;
    auVar14 = insertps(auVar3,uVar12,0x10);
    auVar2._8_8_ = extraout_XMM0_Qb_00;
    auVar2._0_8_ = uVar7;
    auVar15 = insertps(auVar2,auVar13,0x10);
    local_68 = auVar14._0_8_;
    uStack_60 = auVar15._0_8_;
    *(undefined1 *)(unaff_RDI + 0xc) = 0x52;
    uVar6 = FUN_00e82730();
    pvVar9 = (void *)(ulonglong)uVar6;
    if ((int)uVar6 < 9) goto LAB_00dd73d9;
    uVar7 = FUN_00e83010();
  }
  *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
  _memcpy(pvVar8,pvVar9,param_3);
joined_r0x00dd740f:
  if (cVar4 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b99bc0 — 1187 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_01b99bc0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined4 local_64;
  longlong local_60;
  char local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(char *)((longlong)unaff_RDI + 0x215) == '\0') {
    return 0;
  }
  local_a8 = FUN_00e7bdb0();
  local_a0 = FUN_00e7bdb0();
  FUN_01caeae0();
  plVar1 = local_40;
  uVar5 = extraout_XMM0_Da;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b99e94;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01b99e94;
  local_50 = plVar1;
  uVar5 = FUN_01d66da0();
  local_98 = DAT_027e2690;
  local_64 = param_2;
  if (DAT_027e2690 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_90 = '\x01';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_98);
  plVar1 = local_40;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 == (longlong *)0x0) {
LAB_01b99ce5:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b99ce5;
  }
  local_48 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01d66da0();
  local_88 = DAT_027652e0;
  if (DAT_027652e0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_88);
  plVar1 = local_40;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 == (longlong *)0x0) {
LAB_01b99dd2:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b99dd2;
  }
  param_2 = local_64;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
    local_a8 = FUN_00dd6320();
    local_a0 = FUN_00dd6320();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  uVar5 = extraout_XMM0_Da_00;
LAB_01b99e94:
  if (local_a8 >> 0x20 != 0) {
    return 0;
  }
  if (local_a0 >> 0x20 == 0) {
    if ((char)param_2 != '\0') {
      *(undefined4 *)(unaff_RDI + 0x43) = 0xffffffff;
      local_78 = *unaff_RSI;
      local_70 = '\0';
      (**(code **)(*unaff_RDI + 0xb18))(uVar5,1);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      *(undefined4 *)(unaff_RDI + 0x43) = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}




// ============================================================
// @01b99510 — 1187 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_01b99510(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined4 local_64;
  longlong local_60;
  char local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(char *)((longlong)unaff_RDI + 0x214) == '\0') {
    return 0;
  }
  local_a8 = FUN_00e7bdb0();
  local_a0 = FUN_00e7bdb0();
  FUN_01caeae0();
  plVar1 = local_40;
  uVar5 = extraout_XMM0_Da;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b997e4;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01b997e4;
  local_50 = plVar1;
  uVar5 = FUN_01d66da0();
  local_98 = DAT_027e2690;
  local_64 = param_2;
  if (DAT_027e2690 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_90 = '\x01';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_98);
  plVar1 = local_40;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 == (longlong *)0x0) {
LAB_01b99635:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b99635;
  }
  local_48 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01d66da0();
  local_88 = DAT_027652e0;
  if (DAT_027652e0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar4 = &local_40;
  FUN_000175c0(uVar5,&local_88);
  plVar1 = local_40;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 == (longlong *)0x0) {
LAB_01b99722:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b99722;
  }
  param_2 = local_64;
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
    local_a8 = FUN_00dd6320();
    local_a0 = FUN_00dd6320();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  uVar5 = extraout_XMM0_Da_00;
LAB_01b997e4:
  if (local_a8 >> 0x20 != 0) {
    return 0;
  }
  if (local_a0 >> 0x20 == 0) {
    if ((char)param_2 != '\0') {
      *(undefined4 *)(unaff_RDI + 0x43) = 1;
      local_78 = *unaff_RSI;
      local_70 = '\0';
      (**(code **)(*unaff_RDI + 0xb18))(uVar5,1);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      *(undefined4 *)(unaff_RDI + 0x43) = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}




// ============================================================
// @00dc0c90 — 1175 bytes
// str: ""<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n""
// str: ""xmlns:x=\"%@\" xmlns=\"%@\"""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dc0d56) */
/* WARNING: Removing unreachable block (ram,0x00dc0d62) */
/* WARNING: Removing unreachable block (ram,0x00dc0fea) */
/* WARNING: Removing unreachable block (ram,0x00dc0ffa) */

undefined8 * FUN_00dc0c90(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  longlong local_160;
  char local_158;
  undefined8 local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined1 local_b8;
  longlong local_90;
  char local_88;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  char local_40;
  longlong local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (longlong)&DAT_0256d868;
  plVar6[2] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
  *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
  (*DAT_0256d880)();
  uVar7 = FUN_00cccf90();
  uVar7 = FUN_00d8cb40(uVar7,DAT_025908a0);
  puVar3 = local_78;
  if ((((local_70 == '\0') && (local_78 != (undefined8 *)0x0)) &&
      (uVar7 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (undefined8 *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  uVar7 = FUN_00d8cbf0(uVar7,6);
  local_48 = local_78;
  local_40 = 0;
  if (local_70 == '\0') {
    if (local_78 != (undefined8 *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_40 = '\x01';
  FUN_00ccdbb0(uVar7,&local_48);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02783b38;
  if (DAT_02783b38 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02783b40;
  if (DAT_02783b40 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = lVar2;
  uVar7 = FUN_00083ea0(2,&local_c8);
  uVar7 = FUN_00d8cb40(uVar7,&local_78);
  local_38 = local_90;
  if ((local_88 == '\0') && (local_90 != 0)) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = (undefined8 *)&DAT_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = DAT_02783b48;
  if (DAT_02783b48 != 0) {
    uVar7 = FUN_00d50b00();
  }
  lVar2 = DAT_02783b60;
  local_130 = *unaff_RSI;
  local_128 = 0;
  local_120 = lVar1;
  local_118 = 0;
  if (DAT_02783b60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_110 = lVar2;
  local_108 = 1;
  FUN_00dbdbc0(uVar7,&local_110);
  puVar4 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_b8 = 1;
  local_c0 = puVar4;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = local_38;
  local_e8 = 0;
  FUN_00dc1400(&local_130,0,&local_c0,&local_100);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x368))();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @01f983b0 — 1120 bytes
// str: ""GNValue""
// str: ""GNColor""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f985dd) */
/* WARNING: Removing unreachable block (ram,0x01f985ea) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f983b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  double dVar7;
  undefined8 uVar8;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  dVar7 = (double)FUN_00e7d6f0();
  dVar7 = dVar7 - *(double *)(unaff_RSI + 0x60);
  if (dVar7 < *(double *)(unaff_RSI + 0x30)) {
    dVar7 = dVar7 / *(double *)(unaff_RSI + 0x30);
    iVar5 = *(int *)(unaff_RSI + 0x18);
    if (iVar5 == 1) goto LAB_01f9841e;
LAB_01f983eb:
    if (iVar5 == 3) {
      dVar7 = (SQRT(dVar7) - dVar7 * dVar7) * dVar7 + dVar7 * dVar7;
    }
    else if (iVar5 == 2) {
      dVar7 = SQRT(dVar7);
    }
  }
  else {
    iVar5 = *(int *)(unaff_RSI + 0x18);
    dVar7 = DAT_0238fee8;
    if (iVar5 != 1) goto LAB_01f983eb;
LAB_01f9841e:
    dVar7 = dVar7 * dVar7;
  }
  if ((dVar7 == 0.0) && (!NAN(dVar7))) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar1 = *(longlong *)(unaff_RSI + 0x20);
joined_r0x01f98486:
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  if ((dVar7 == DAT_0238fee8) && (!NAN(dVar7) && !NAN(DAT_0238fee8))) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar1 = *(longlong *)(unaff_RSI + 0x28);
    goto joined_r0x01f98486;
  }
  if (*(longlong *)(unaff_RSI + 0x48) != 0) goto LAB_01f9859c;
  uVar8 = FUN_00d4efa0();
  local_30 = 0;
  local_38 = *(longlong *)(unaff_RSI + 0x38);
  if (local_38 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_30 = '\x01';
  FUN_00c837f0(uVar8,&local_38);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = *(longlong **)(unaff_RSI + 0x20);
  if ((DAT_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026fd0e8 = FUN_00d4fe50();
    DAT_026fd0d0 = "GNColor";
    _DAT_026fd0d8 = 0x30;
    _DAT_026fd0e0 = FUN_001b8c30;
    _DAT_026fd0f0 = 0;
    uRam00000000026fd0f8 = 0;
    _DAT_026fd100 = 0;
    uRam00000000026fd108 = 0;
    _DAT_026fd110 = 0;
    uRam00000000026fd118 = 0;
    _DAT_026fd120 = 0;
    uRam00000000026fd128 = 0;
    _DAT_026fd130 = 0;
    uRam00000000026fd138 = 0;
    _DAT_026fd140 = 0;
    uRam00000000026fd148 = 0;
    _DAT_026fd150 = 0;
    uRam00000000026fd158 = 0;
    _DAT_026fd160 = 0;
    uRam00000000026fd168 = 0;
    _DAT_026fd170 = 0;
    uRam00000000026fd178 = 0;
    _DAT_026fd180 = 0;
    uRam00000000026fd188 = 0;
    _DAT_026fd190 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_01f9856b:
    if (DAT_02802688 == 0) goto LAB_01f98602;
LAB_01f9857c:
    pcVar6 = FUN_01f98990;
    goto switchD_01f98680_caseD_66;
  }
  (**(code **)(*plVar2 + 0x360))();
  cVar3 = FUN_00e85ea0();
  if (cVar3 == '\0') goto LAB_01f9856b;
  if (*(longlong *)(unaff_RSI + 0x20) != 0) goto LAB_01f9857c;
LAB_01f98602:
  if (local_48 == 0) {
    plVar2 = *(longlong **)(unaff_RSI + 0x28);
    if (plVar2 == (longlong *)0x0) goto LAB_01f9859c;
    if ((DAT_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
    (**(code **)(*plVar2 + 0x360))();
    FUN_00e85ea0();
    uVar4 = FUN_00dd6e50();
  }
  else {
    uVar4 = *(undefined1 *)(*(longlong *)(local_48 + 0x60) + 0x19);
  }
  pcVar6 = FUN_01f98d30;
  switch(uVar4) {
  case 0x45:
    pcVar6 = FUN_01f98fe0;
    break;
  default:
    goto switchD_01f98680_caseD_46;
  case 0x52:
    pcVar6 = FUN_01f98ee0;
    break;
  case 100:
    pcVar6 = FUN_01f98e10;
    break;
  case 0x66:
    break;
  }
switchD_01f98680_caseD_66:
  *(code **)(unaff_RSI + 0x48) = pcVar6;
  *(undefined8 *)(unaff_RSI + 0x50) = 0;
switchD_01f98680_caseD_46:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_01f9859c:
  pcVar6 = *(code **)(unaff_RSI + 0x48);
  if (((ulonglong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(longlong *)(unaff_RSI + *(longlong *)(unaff_RSI + 0x50)) + -1);
  }
  (*pcVar6)(dVar7);
  return;
}




// ============================================================
// @00e8e380 — 1117 bytes
// str: ""GNValue""
// str: ""%I/%I""
// str: ""GNString""
// str: ""%s%I %I/%I""
// str: ""%s%I/%I""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e8e380(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  int local_3c;
  undefined8 local_38;
  
  plVar6 = (longlong *)*param_2;
  if ((DAT_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 == (longlong *)0x0) {
LAB_00e8e3d3:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar4 == '\0') goto LAB_00e8e3d3;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00e8e3fe:
    local_38 = (undefined8 *)FUN_00dd6320();
    if ((ulonglong)local_38 >> 0x20 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
      cVar4 = FUN_00e7c630();
      lVar2 = DAT_0276ce70;
      if (cVar4 == '\0') {
        if (*(char *)(unaff_RSI + 0xc) == '\0') {
          local_60 = 2;
          uStack_5c = SUB84(local_38,0);
          local_68 = (undefined8 *)&DAT_024c3df0;
          local_58 = local_38._4_4_;
          FUN_00d8cb40(extraout_XMM0_Da,&local_68);
        }
        else {
          local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
          if (local_38._4_4_ == 0) {
            local_58 = 0x1ff0050;
            uVar7 = 0;
          }
          else {
            cVar4 = FUN_00e7c6b0();
            if (cVar4 == '\0') {
              local_38 = (undefined8 *)FUN_00e7bfe0();
              uVar7 = (ulonglong)local_38 >> 0x20;
              local_58 = 0x202fcc4;
            }
            else {
              local_58 = 0x1ff0050;
              uVar7 = (ulonglong)local_38 >> 0x20;
            }
          }
          local_3c = (int)local_38 / (int)uVar7;
          local_68 = local_38;
          uVar8 = FUN_00e7c280(uVar7,(longlong)(int)local_38 % (longlong)(int)uVar7 & 0xffffffff);
          puVar3 = local_68;
          uStack_54 = 0;
          if ((int)local_68 == 0) {
            local_60 = 2;
            local_68 = &DAT_024f6780;
            local_50 = (undefined8 *)CONCAT44(local_50._4_4_,local_3c);
            FUN_00d8cb40(uVar8,&local_68);
          }
          else if (local_3c == 0) {
            local_60 = 3;
            local_50 = local_38;
            local_68 = (undefined8 *)&DAT_024f6748;
            FUN_00d8cb40(0,&local_68);
          }
          else {
            local_60 = 4;
            local_50 = (undefined8 *)CONCAT44((int)local_68,local_3c);
            local_68 = (undefined8 *)&DAT_025914d0;
            local_48 = (undefined4)((ulonglong)puVar3 >> 0x20);
            FUN_00d8cb40(local_3c,&local_68);
          }
        }
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
    }
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_00e8e3fe;
  plVar6 = (longlong *)*param_2;
  if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00e8e4ed;
  }
  param_2 = &DAT_02802688;
LAB_00e8e4ed:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00ddbe50 — 1117 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ddc007) */
/* WARNING: Removing unreachable block (ram,0x00ddc013) */
/* WARNING: Removing unreachable block (ram,0x00ddc264) */
/* WARNING: Removing unreachable block (ram,0x00ddc26d) */

ulonglong FUN_00ddbe50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  int local_34;
  
  lVar5 = unaff_RDI[4];
  cVar6 = (**(code **)(*unaff_RDI + 0x388))();
  if (cVar6 == '\0') {
    lVar8 = *unaff_RSI;
    if (0 < *(int *)(lVar8 + 0xc)) {
      local_34 = -1;
      lVar13 = 0;
      lVar12 = 0;
      bVar2 = false;
      local_58 = 0;
      bVar4 = false;
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar13 * 8);
        if (lVar12 == lVar8) {
          if ((!bVar2) && (lVar12 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar12 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar12 = lVar8;
          }
          else {
            bVar2 = true;
            lVar12 = lVar8;
          }
        }
        (**(code **)(*unaff_RDI + 0x370))();
        (**(code **)(*unaff_RDI + 0x380))();
        (**(code **)(*unaff_RDI + 0x390))();
        (**(code **)(*unaff_RDI + 0x380))();
        FUN_00e7b4e0();
        uVar9 = FUN_00d906a0();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = (int)uVar9;
        lVar8 = local_58;
        bVar3 = bVar4;
        if (((iVar11 != -1) && (iVar7 = FUN_00d8c7a0(), iVar7 == (int)((ulonglong)uVar9 >> 0x20)))
           && ((local_34 == -1 || (iVar11 < local_34)))) {
          local_34 = iVar11;
          if (local_58 == lVar12) {
            if (((bVar2) && (!bVar4)) && (lVar12 != 0)) {
              FUN_00d50b00();
              bVar3 = true;
            }
          }
          else {
            if ((bVar2) && (lVar12 != 0)) {
              FUN_00d50b00();
            }
            lVar8 = lVar12;
            bVar3 = bVar2;
            if ((bVar4) && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        local_58 = lVar8;
        lVar13 = lVar13 + 1;
        lVar8 = *unaff_RSI;
        bVar4 = bVar3;
      } while (lVar13 < *(int *)(lVar8 + 0xc));
      if (local_34 == -1) {
        uVar14 = 0;
        local_34 = (int)lVar5;
      }
      else {
        if (param_2 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &DAT_025795a8;
          (*DAT_025795c0)();
          puVar1 = (undefined8 *)*param_2;
          if (puVar1 == puVar10) {
            if (*(char *)(param_2 + 1) == '\0') goto LAB_00ddc18a;
            FUN_00d50b20();
          }
          else {
            *param_2 = puVar10;
            if ((*(char *)(param_2 + 1) != '\0') && (puVar1 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
LAB_00ddc18a:
            *(undefined1 *)(param_2 + 1) = 1;
          }
          lVar13 = FUN_00d8d520();
          (**(code **)(*unaff_RDI + 0x380))();
          FUN_00d8ea20();
          FUN_00d8c7d0();
        }
        uVar14 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
        if (param_1 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &DAT_025795a8;
          (*DAT_025795c0)();
          puVar1 = (undefined8 *)*param_1;
          if (puVar1 == puVar10) {
            if (*(char *)(param_1 + 1) == '\0') goto LAB_00ddc242;
            FUN_00d50b20();
          }
          else {
            *param_1 = puVar10;
            if ((*(char *)(param_1 + 1) != '\0') && (puVar1 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
LAB_00ddc242:
            *(undefined1 *)(param_1 + 1) = 1;
          }
          FUN_00d8dbf0();
          FUN_00d8c7d0();
        }
      }
      *(int *)(unaff_RDI + 4) = local_34;
      if ((bVar3) && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (lVar12 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00ddc157;
    }
    *(int *)(unaff_RDI + 4) = (int)lVar5;
  }
  uVar14 = 0;
LAB_00ddc157:
  return uVar14 & 0xffffffff;
}




// ============================================================
// @01e1cd40 — 1116 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e1cea6) */
/* WARNING: Removing unreachable block (ram,0x01e1ceb6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1cd40(undefined4 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar1 = DAT_027f3348;
  plVar4 = (longlong *)*param_2;
  local_38 = param_3;
  local_34 = param_1;
  if (DAT_027f3348 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01e1cf6c;
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar4 == (longlong *)0x0) {
LAB_01e1cdf5:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_01e1cdf5;
  }
  if (*plVar4 != 0) {
    cVar2 = FUN_00dd6e50();
    if ((cVar2 != 'E') && (cVar2 = FUN_00dd6e50(), local_98 = DAT_027f3350, cVar2 != 'R')) {
      if (DAT_027f3350 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      (**(code **)(*unaff_RDI + 0x1f0))((undefined1)local_34,&local_98,(undefined1)local_38);
      if (local_90 == '\0') {
        return;
      }
      if (local_98 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    goto LAB_01e1cf6c;
  }
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar4 == (longlong *)0x0) {
LAB_01e1cef8:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_01e1cef8;
  }
  lVar1 = DAT_0276cc80;
  if (*plVar4 != 0) {
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    FUN_00d91000(1,&local_88);
    iVar3 = *(int *)(local_c8 + 0xc);
    if (local_c0 != '\0') {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027f3350;
    if (iVar3 != 4) {
      local_78 = *unaff_RSI;
      local_70 = '\0';
      if (DAT_027f3350 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      (**(code **)(*unaff_RDI + 0x1f0))((undefined1)local_34,&local_68,(undefined1)local_38);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 == '\0') {
        return;
      }
      if (local_78 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
LAB_01e1cf6c:
  local_58 = *unaff_RSI;
  local_50 = '\0';
  local_48 = *param_2;
  local_40 = '\0';
  FUN_00d5adf0((undefined1)local_34,&local_48,(undefined1)local_38);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01660e50 — 1110 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01660f2d) */
/* WARNING: Removing unreachable block (ram,0x01660f36) */

void FUN_01660e50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  longlong local_80;
  char local_78;
  
  lVar2 = *(longlong *)(unaff_RDI + 0xf0);
  if (lVar2 == 0) {
    if (*unaff_RSI != 0) goto LAB_01660f76;
  }
  else {
    FUN_00d50b00();
    if (lVar2 == *unaff_RSI) goto LAB_01661291;
    FUN_01666660();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = lVar2;
    }
    FUN_0164ced0();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = lVar2;
    }
    FUN_0164cea0();
    *(undefined4 *)(unaff_RDI + 0x118) = 0x3f800000;
    FUN_016670f0();
    FUN_01667210();
LAB_01660f76:
    if (*unaff_RSI != 0) {
      *(undefined8 *)(unaff_RDI + 200) = *(undefined8 *)(unaff_RDI + 0xc0);
      *(undefined8 *)(unaff_RDI + 0xd8) = *(undefined8 *)(unaff_RDI + 0xd0);
      *(undefined4 *)(unaff_RDI + 0xe4) = *(undefined4 *)(unaff_RDI + 0xe0);
      *(undefined1 *)(unaff_RDI + 0xe8) = 0;
      *(undefined1 *)(unaff_RDI + 0x106) = 0;
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(longlong *)(unaff_RDI + 0x90) + 0x10))();
      FUN_00d50b00();
      FUN_0164cea0();
      if ((longlong *)(unaff_RDI + 0x90) != (longlong *)0x0) {
        (**(code **)(*(longlong *)(unaff_RDI + 0x90) + 0x10))();
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e31390();
      FUN_0164ced0();
    }
    plVar1 = (longlong *)(unaff_RDI + 0xf0);
    FUN_00d64850();
    lVar6 = *unaff_RSI;
    lVar3 = *plVar1;
    if (lVar3 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar1 = lVar6;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (*unaff_RSI != 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df30();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_80 == 0) {
        plVar9 = (longlong *)*plVar1;
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          plVar9 = (longlong *)*plVar1;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar9 + 0x3d0))();
      }
      FUN_01665fa0();
    }
    pVar7 = (pthread_key_t)param_1;
    if (lVar2 != 0) {
      lVar6 = *(longlong *)(unaff_RDI + 0xa8);
      if (lVar6 != 0) {
        for (iVar8 = 0; pVar7 = (pthread_key_t)param_1, iVar8 < *(int *)(lVar6 + 0xc);
            iVar8 = iVar8 + 1) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01652cd0();
        }
        FUN_0049cc10();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
    cVar4 = FUN_01733c10();
    if ((cVar4 == '\0') && (*(longlong *)(unaff_RDI + 0xf0) != 0)) {
      FUN_016818b0();
    }
  }
  if (lVar2 == 0) {
    return;
  }
LAB_01661291:
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c75180 — 1053 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c75498) */
/* WARNING: Removing unreachable block (ram,0x00c754a0) */
/* WARNING: Removing unreachable block (ram,0x00c7550d) */
/* WARNING: Removing unreachable block (ram,0x00c754a5) */
/* WARNING: Removing unreachable block (ram,0x00c75399) */
/* WARNING: Removing unreachable block (ram,0x00c753a2) */
/* WARNING: Removing unreachable block (ram,0x00c7534f) */
/* WARNING: Removing unreachable block (ram,0x00c75358) */
/* WARNING: Removing unreachable block (ram,0x00c753e3) */
/* WARNING: Removing unreachable block (ram,0x00c753ec) */
/* WARNING: Removing unreachable block (ram,0x00c75531) */
/* WARNING: Removing unreachable block (ram,0x00c75540) */
/* WARNING: Removing unreachable block (ram,0x00c75549) */
/* WARNING: Removing unreachable block (ram,0x00c7557a) */
/* WARNING: Removing unreachable block (ram,0x00c75587) */

void FUN_00c75180(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong local_40;
  
  *(undefined4 *)(unaff_RDI + 0x50) = 1;
  FUN_00d216c0();
  FUN_00d216c0();
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x28) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x48);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x48) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02578b00;
  (*DAT_02578b18)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x30);
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x30) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(1,1);
  lVar7 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00d7a410();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x58);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x120))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00e3a1c0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00e39f80();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  local_40 = *(longlong *)(unaff_RDI + 0x38);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00e39f80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  if (*(longlong *)(unaff_RDI + 0x30) != 0) {
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x28);
  if (0 < *(int *)(*(longlong *)(lVar7 + 0x10) + 0xc)) {
    lVar8 = 0;
    bVar3 = false;
    lVar9 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x10) + lVar8 * 8) +
                  0x128))();
      if (local_40 == lVar9) {
        lVar10 = lVar9;
        bVar4 = bVar3;
        if ((!bVar3) && (local_40 != 0)) {
          FUN_00d50b00();
          goto LAB_00c75505;
        }
      }
      else {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        lVar10 = local_40;
        bVar4 = true;
        if ((bVar3) && (lVar9 != 0)) {
          FUN_00d50b20();
          lVar9 = local_40;
LAB_00c75505:
          lVar10 = lVar9;
          bVar4 = true;
        }
      }
      bVar3 = bVar4;
      if (lVar10 != 0) {
        FUN_00e3a1c0();
        local_40 = lVar10;
      }
      lVar8 = lVar8 + 1;
      lVar7 = *(longlong *)(unaff_RDI + 0x28);
      lVar9 = lVar10;
    } while (lVar8 < *(int *)(*(longlong *)(lVar7 + 0x10) + 0xc));
    if ((bVar3) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01b71c50 — 1051 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b71d15) */
/* WARNING: Removing unreachable block (ram,0x01b71d62) */
/* WARNING: Removing unreachable block (ram,0x01b71d67) */
/* WARNING: Removing unreachable block (ram,0x01b71d6f) */
/* WARNING: Removing unreachable block (ram,0x01b71d78) */
/* WARNING: Removing unreachable block (ram,0x01b72059) */
/* WARNING: Removing unreachable block (ram,0x01b72066) */
/* WARNING: Removing unreachable block (ram,0x01b71d1b) */
/* WARNING: Removing unreachable block (ram,0x01b71d20) */
/* WARNING: Removing unreachable block (ram,0x01b71d2b) */
/* WARNING: Removing unreachable block (ram,0x01b71d4b) */
/* WARNING: Removing unreachable block (ram,0x01b71d58) */

ulonglong FUN_01b71c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  longlong *unaff_RDI;
  undefined8 unaff_R15;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  double local_78;
  longlong local_68;
  char local_60;
  longlong lVar10;
  int iVar11;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x978))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    (**(code **)(*unaff_RDI + 0x978))();
    (**(code **)(*local_40 + 0xe38))();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 == 0) || (*(int *)(local_68 + 0xc) == 0)) {
      uVar8 = (**(code **)(*unaff_RDI + 0x978))();
      (**(code **)(*local_40 + 0x9d0))(uVar8,0);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == 0) goto LAB_01b71ec0;
    }
    uVar7 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    if (*(int *)(local_68 + 0xc) == 0) {
      bVar1 = true;
    }
    else {
      cVar2 = (**(code **)(*unaff_RDI + 0x9a0))();
      lVar5 = *unaff_RDI;
      if (cVar2 == '\0') {
        (**(code **)(lVar5 + 0x998))();
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x9d0))();
        if (cVar2 != '\0') {
          uVar3 = (**(code **)(*unaff_RDI + 0x9d8))();
          if (uVar3 >> 0x20 == 0) {
            local_78 = DAT_0241d9d8;
          }
          else {
            (**(code **)(*unaff_RDI + 0x978))();
            (**(code **)(*local_40 + 0xa18))();
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*unaff_RDI + 0x9d8))();
            local_78 = (double)FUN_016c98e0(uVar8,0);
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar3 = (**(code **)(*unaff_RDI + 0x9e0))();
          dVar9 = DAT_0241d9e0;
          if (uVar3 >> 0x20 != 0) {
            (**(code **)(*unaff_RDI + 0x978))();
            (**(code **)(*local_40 + 0xa18))();
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*unaff_RDI + 0x9e0))();
            dVar9 = (double)FUN_016c98e0(uVar8,0);
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar6 = 0;
          lVar10 = local_68;
          do {
            if (*(int *)(local_68 + 0xc) <= iVar6) {
              FUN_001159b0();
              bVar1 = false;
              uVar7 = 0;
              goto LAB_01b71eb4;
            }
            iVar11 = iVar6;
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_012754d0(local_78,dVar9 - local_78,param_3,param_4,lVar10,iVar11);
            iVar6 = iVar6 + 1;
          } while (cVar2 == '\0');
          FUN_001159b0();
        }
      }
      bVar1 = false;
    }
LAB_01b71eb4:
    FUN_00d50b20();
    if (!bVar1) goto LAB_01b71ec3;
  }
LAB_01b71ec0:
  uVar7 = 0;
LAB_01b71ec3:
  return uVar7 & 0xffffffff;
}




// ============================================================
// @01b9f1e0 — 1028 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b9f4cb) */
/* WARNING: Removing unreachable block (ram,0x01b9f51f) */
/* WARNING: Removing unreachable block (ram,0x01b9f52c) */
/* WARNING: Removing unreachable block (ram,0x01b9f3e1) */
/* WARNING: Removing unreachable block (ram,0x01b9f575) */
/* WARNING: Removing unreachable block (ram,0x01b9f57e) */
/* WARNING: Removing unreachable block (ram,0x01b9f436) */
/* WARNING: Removing unreachable block (ram,0x01b9f5c4) */
/* WARNING: Removing unreachable block (ram,0x01b9f5cd) */
/* WARNING: Removing unreachable block (ram,0x01b9f21f) */
/* WARNING: Removing unreachable block (ram,0x01b9f228) */
/* WARNING: Removing unreachable block (ram,0x01b9f300) */
/* WARNING: Removing unreachable block (ram,0x01b9f320) */
/* WARNING: Removing unreachable block (ram,0x01b9f302) */
/* WARNING: Removing unreachable block (ram,0x01b9f322) */

void FUN_01b9f1e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *unaff_RDI;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  longlong local_50;
  char local_48;
  int local_38;
  
  lVar2 = local_50;
  (**(code **)(*unaff_RDI + 0x3f8))();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)unaff_RDI[0x1b];
  if (*(int *)(local_50 + 0xc) == 0) {
    (**(code **)(*plVar1 + 0x998))();
    plVar1 = (longlong *)unaff_RDI[0x1b];
    FUN_00e9aaa0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*unaff_RDI + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*unaff_RDI + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
    local_50 = 0;
    local_38 = -1;
    local_58 = DAT_02391074;
    local_54 = DAT_02391078;
    fVar6 = local_58;
    while( true ) {
      local_58 = fVar6;
      lVar4 = (longlong)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_38) break;
      local_50 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar2 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar6 = (float)FUN_01265b60();
      fVar7 = fVar6;
      if (local_54 <= fVar6) {
        fVar7 = local_54;
      }
      local_54 = fVar7;
      if (fVar6 <= local_58) {
        fVar6 = local_58;
      }
    }
    FUN_00083b20();
    if (*(int *)(lVar2 + 0xc) == 1) {
      plVar1 = (longlong *)unaff_RDI[0x1b];
      (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x378))(local_54);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar1 = (longlong *)unaff_RDI[0x1b];
      if ((local_54 != local_58) || (NAN(local_54) || NAN(local_58))) {
        FUN_00e99dd0();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x378))();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01ba1ff0 — 1028 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ba22db) */
/* WARNING: Removing unreachable block (ram,0x01ba232f) */
/* WARNING: Removing unreachable block (ram,0x01ba233c) */
/* WARNING: Removing unreachable block (ram,0x01ba21f1) */
/* WARNING: Removing unreachable block (ram,0x01ba2385) */
/* WARNING: Removing unreachable block (ram,0x01ba238e) */
/* WARNING: Removing unreachable block (ram,0x01ba2246) */
/* WARNING: Removing unreachable block (ram,0x01ba23d4) */
/* WARNING: Removing unreachable block (ram,0x01ba23dd) */
/* WARNING: Removing unreachable block (ram,0x01ba202f) */
/* WARNING: Removing unreachable block (ram,0x01ba2038) */
/* WARNING: Removing unreachable block (ram,0x01ba2110) */
/* WARNING: Removing unreachable block (ram,0x01ba2130) */
/* WARNING: Removing unreachable block (ram,0x01ba2112) */
/* WARNING: Removing unreachable block (ram,0x01ba2132) */

void FUN_01ba1ff0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *unaff_RDI;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  longlong local_50;
  char local_48;
  int local_38;
  
  lVar2 = local_50;
  (**(code **)(*unaff_RDI + 0x3f8))();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)unaff_RDI[0x1b];
  if (*(int *)(local_50 + 0xc) == 0) {
    (**(code **)(*plVar1 + 0x998))();
    plVar1 = (longlong *)unaff_RDI[0x1b];
    FUN_00e9aaa0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*unaff_RDI + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*unaff_RDI + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
    local_50 = 0;
    local_38 = -1;
    local_58 = DAT_02391074;
    local_54 = DAT_02391078;
    fVar6 = local_58;
    while( true ) {
      local_58 = fVar6;
      lVar4 = (longlong)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_38) break;
      local_50 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar2 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar6 = (float)FUN_01265b70();
      fVar7 = fVar6;
      if (local_54 <= fVar6) {
        fVar7 = local_54;
      }
      local_54 = fVar7;
      if (fVar6 <= local_58) {
        fVar6 = local_58;
      }
    }
    FUN_00083b20();
    if (*(int *)(lVar2 + 0xc) == 1) {
      plVar1 = (longlong *)unaff_RDI[0x1b];
      (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x378))(local_54);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar1 = (longlong *)unaff_RDI[0x1b];
      if ((local_54 != local_58) || (NAN(local_54) || NAN(local_58))) {
        FUN_00e99dd0();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x378))();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01b9a270 — 1004 bytes
// ============================================================

char FUN_01b9a270(pthread_key_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  longlong *unaff_RDI;
  ulonglong local_70;
  ulonglong local_68;
  undefined4 local_60 [2];
  char local_58 [8];
  ulonglong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38;
  char local_30 [8];
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*unaff_RDI + 0x9d0))();
    if ((cVar2 != '\0') && (param_2 != '\0')) {
      uVar3 = (**(code **)(*unaff_RDI + 0x9d8))();
      local_70 = uVar3;
      local_68 = (**(code **)(*unaff_RDI + 0x9e0))();
      if (uVar3 >> 0x20 == 0) {
        if (local_68 >> 0x20 == 0) {
          FUN_01b6d0d0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar7 = local_60;
          FUN_01252670(puVar7,0,local_58,0);
          uVar3 = local_50;
          pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar7 >> 8),local_48[0]);
          pcVar8 = local_30;
          if (local_48[0] != '\0') {
            pcVar8 = local_48;
          }
          local_30[0] = local_48[0];
          *pcVar8 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (uVar3 == 0) {
            uVar3 = 0;
            bVar1 = false;
          }
          else {
            bVar1 = true;
            if (local_30[0] == '\0') {
              FUN_00d50b00();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01b6d0d0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_60[0] = 1;
          local_50 = local_68;
          FUN_00e7c260();
          uVar6 = local_50;
          FUN_012521f0(local_50,0,0,&local_68);
          uVar3 = local_50;
          pVar5 = (pthread_key_t)CONCAT71((int7)(uVar6 >> 8),local_48[0]);
          pcVar8 = local_58;
          if (local_48[0] != '\0') {
            pcVar8 = local_48;
          }
          local_58[0] = local_48[0];
          *pcVar8 = '\0';
          if ((local_48[0] != '\0') && (uVar3 != 0)) {
            FUN_00d50b20();
          }
          if (uVar3 == 0) {
            uVar3 = 0;
            bVar1 = false;
          }
          else {
            bVar1 = true;
            if (local_58[0] == '\0') {
              FUN_00d50b00();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01b6d0d0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60[0] = 1;
        local_50 = local_70;
        FUN_00e7c280();
        uVar6 = local_50;
        FUN_012521f0(local_50,0,&local_70,0);
        uVar3 = local_50;
        pVar5 = (pthread_key_t)CONCAT71((int7)(uVar6 >> 8),local_48[0]);
        pcVar8 = local_58;
        if (local_48[0] != '\0') {
          pcVar8 = local_48;
        }
        local_58[0] = local_48[0];
        *pcVar8 = '\0';
        if ((local_48[0] != '\0') && (uVar3 != 0)) {
          FUN_00d50b20();
        }
        if (uVar3 == 0) {
          uVar3 = 0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_58[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)unaff_RDI[0x42] == '\0') && (uVar3 != 0)) {
        FUN_01b6d0d0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48[0] = '\0';
        local_50 = uVar3;
        FUN_012502a0(local_68,local_70,(char)unaff_RDI[0x36]);
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01b92310();
      }
      if ((bVar1) && (uVar3 != 0)) {
        FUN_00d50b20();
      }
      cVar2 = '\x01';
    }
  }
  return cVar2;
}




// ============================================================
// @01b9f870 — 997 bytes
// ============================================================

ulonglong FUN_01b9f870(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  longlong local_98;
  char local_90;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_70;
  float local_6c;
  longlong local_68;
  longlong local_40;
  char local_38;
  
  uVar5 = (**(code **)(*unaff_RDI + 0x688))();
  plVar9 = (longlong *)(ulonglong)uVar5;
  if (((char)uVar5 != '\0') && (param_2 != '\0')) {
    plVar1 = (longlong *)unaff_RDI[0x1c];
    (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x960))();
    lVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = (**(code **)(*plVar1 + 0x380))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x960))();
    local_6c = (float)FUN_00d8d7b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar10 = (**(code **)(*unaff_RDI + 0x3f8))();
    lVar7 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar8 = 0;
      plVar9 = &local_40;
      local_68 = lVar7;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar8 * 8);
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_90 = '\0';
        local_98 = lVar2;
        FUN_019a54a0(uVar10,&local_98);
        lVar7 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        uVar10 = 0;
        uVar14 = 0;
        uVar13 = (ulonglong)local_70;
        if (lVar7 != 0) {
          fVar11 = (float)FUN_00d459e0();
          uVar13 = FUN_00aea5e0(fVar11 + local_6c);
          uVar10 = extraout_XMM0_Dc;
          uVar14 = extraout_XMM0_Dd;
        }
        local_88 = uVar13;
        uStack_80 = uVar10;
        uStack_7c = uVar14;
        fVar11 = (float)FUN_00aea610();
        if (DAT_02390434 < fVar11) {
          local_88 = FUN_00aea5e0(DAT_02390434);
          uStack_80 = extraout_XMM0_Dc_00;
          uStack_7c = extraout_XMM0_Dd_00;
        }
        fVar11 = (float)FUN_00aea610((uint)local_88);
        bVar3 = DAT_0241b664 < fVar11;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = -(uint)bVar3 & (uint)local_88;
        FUN_01265b00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0125e930();
        lVar4 = local_40;
        local_88 = lVar7;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar4 != 0) {
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_0152e890(uVar12);
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
        }
        lVar7 = local_68;
        if (local_88 != 0) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar7 + 0xc));
    }
    FUN_00d50b20();
    plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),(char)uVar5);
  }
  return (ulonglong)plVar9 & 0xffffffff;
}




// ============================================================
// @01a70580 — 987 bytes
// ============================================================

undefined8 FUN_01a70580(pthread_key_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint7 uVar7;
  uint7 extraout_var;
  uint7 extraout_var_00;
  uint7 extraout_var_01;
  uint7 extraout_var_02;
  uint7 extraout_var_03;
  ulonglong uVar8;
  char *pcVar9;
  longlong *unaff_RDI;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  char local_38 [8];
  char local_30 [8];
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*unaff_RDI + 0x9d0))();
    if (((char)uVar4 != '\0') && (param_2 != '\0')) {
      uVar5 = (**(code **)(*unaff_RDI + 0x9d8))();
      local_68 = uVar5;
      local_60 = (**(code **)(*unaff_RDI + 0x9e0))();
      if ((char)unaff_RDI[0x40] == '\0') {
        if (uVar5 >> 0x20 == 0) {
          if (local_60 >> 0x20 == 0) {
            bVar1 = false;
            uVar5 = 0;
          }
          else {
            FUN_01b6d0d0();
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_54 = 1;
            local_40 = local_60;
            FUN_00e7c260();
            uVar8 = local_40;
            FUN_012521f0(local_40,0,0,&local_60);
            uVar5 = local_40;
            param_1 = (pthread_key_t)CONCAT71((int7)(uVar8 >> 8),local_38[0]);
            pcVar9 = local_30;
            if (local_38[0] != '\0') {
              pcVar9 = local_38;
            }
            local_30[0] = local_38[0];
            *pcVar9 = '\0';
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (uVar5 == 0) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
              if (local_30[0] == '\0') {
                FUN_00d50b00();
              }
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01b6d0d0();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_54 = 1;
          local_40 = local_68;
          FUN_00e7c280();
          uVar8 = local_40;
          FUN_012521f0(local_40,0,&local_68,0);
          uVar5 = local_40;
          param_1 = (pthread_key_t)CONCAT71((int7)(uVar8 >> 8),local_38[0]);
          pcVar9 = local_30;
          if (local_38[0] != '\0') {
            pcVar9 = local_38;
          }
          local_30[0] = local_38[0];
          *pcVar9 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (uVar5 == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            if (local_30[0] == '\0') {
              FUN_00d50b00();
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_01b6d0d0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38[0] = '\0';
        local_40 = uVar5;
        FUN_012502a0(local_60,local_68,(char)unaff_RDI[0x36]);
        uVar7 = extraout_var_00;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
          uVar7 = extraout_var_01;
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
          uVar7 = extraout_var_02;
        }
        if ((bVar1) && (uVar5 != 0)) {
          FUN_00d50b20();
          uVar7 = extraout_var_03;
        }
      }
      else {
        bVar3 = (**(code **)(*unaff_RDI + 0x9e8))();
        FUN_01b6d0d0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = 0;
        local_38[0] = '\0';
        FUN_012502a0(local_60,local_68,(char)unaff_RDI[0x36]);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        uVar7 = (uint7)(local_68 >> 0x28);
        if ((bVar3 & local_68 >> 0x20 != 0) == 1) {
          FUN_01a68710();
          uVar7 = extraout_var;
        }
      }
      uVar4 = CONCAT71(uVar7,1);
    }
  }
  return uVar4;
}




// ============================================================
// @01dbd5a0 — 987 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dbd8e8) */
/* WARNING: Removing unreachable block (ram,0x01dbd8f4) */
/* WARNING: Removing unreachable block (ram,0x01dbd94b) */
/* WARNING: Removing unreachable block (ram,0x01dbd957) */

void FUN_01dbd5a0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar10;
  float fVar11;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_88;
  char local_80;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  uVar6 = FUN_01e3f820();
  local_f8 = (float)uVar6;
  fStack_f4 = (float)((ulonglong)uVar6 >> 0x20);
  fStack_f0 = (float)extraout_XMM0_Qb;
  fStack_ec = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  (**(code **)(*unaff_RDI + 0x640))();
  lVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x9e8))();
  lVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x9e8))();
  (**(code **)(*unaff_RDI + 0x960))();
  local_48 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_88;
  auVar9._4_4_ = fVar11;
  auVar9._0_4_ = fVar10;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar7._4_12_ = auVar9._4_12_;
  auVar7._0_4_ = fVar10 + DAT_023b8b2c;
  FUN_01d44870(auVar7._0_8_,&local_50);
  lVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*unaff_RDI + 0xad8))();
  (**(code **)(*unaff_RDI + 0xad8))();
  (**(code **)(*unaff_RDI + 0x9e8))();
  FUN_01d43ca0();
  (**(code **)(*plVar1 + 0x3f0))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (*(char *)((longlong)unaff_RDI + 0x239) != '\0') {
    fStack_f4 = fStack_f4 + fVar11;
    fStack_ec = fStack_ec + in_XMM1_Dd;
    fVar10 = ((local_f8 + auVar7._0_4_ + DAT_02390d00) - fVar11 * DAT_0239011c) + DAT_02390d2c;
    fVar11 = (fStack_f4 + DAT_02390d00) - fVar11 * DAT_0239011c;
    auVar8._4_4_ = fStack_f4;
    auVar8._0_4_ = fVar10;
    auVar8._8_4_ = fStack_f0 + in_XMM1_Dc;
    auVar8._12_4_ = fStack_ec;
    auVar9 = insertps(auVar8,ZEXT416((uint)(DAT_02390124 + fVar11)),0x10);
    FUN_01cb3a60(auVar9._0_8_,DAT_02394298);
    auVar3._4_4_ = fStack_f4;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = fStack_f0 + in_XMM1_Dc;
    auVar3._12_4_ = fStack_ec;
    auVar2._4_4_ = fStack_f4;
    auVar2._0_4_ = fVar11 + DAT_02390d00;
    auVar2._8_4_ = fStack_ec;
    auVar2._12_4_ = fStack_ec;
    auVar9 = insertps(auVar3,auVar2,0x10);
    FUN_01cb3a60(auVar9._0_8_,DAT_02394298);
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01ca2090 — 975 bytes
// ============================================================

undefined8 FUN_01ca2090(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong *unaff_RSI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI == 0) goto LAB_01ca21e4;
  local_68 = '\0';
  local_70 = *unaff_RSI;
  FUN_01c957d0(param_1,&local_70);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01ca2147;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = local_40;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01ca2147:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = *unaff_RSI;
  if ((local_60 == 0) || (*(int *)(local_60 + 0xc) == 0)) {
LAB_01ca21e4:
    uVar5 = FUN_00e7bdb0();
    return uVar5;
  }
  local_58 = '\0';
  FUN_01266770();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    lVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 == 0) {
        uVar5 = FUN_00e7bdb0();
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507970();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_01a8c310();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c98e0();
        uVar5 = FUN_01a8fc90();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01ca2445;
    }
  }
  uVar5 = FUN_00e7bdb0();
  if (lVar1 == 0) {
    return uVar5;
  }
LAB_01ca2445:
  FUN_00d50b20();
  return uVar5;
}




// ============================================================
// @01ca29a0 — 956 bytes
// ============================================================

ulonglong FUN_01ca29a0(pthread_key_t param_1,undefined8 param_2)

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *unaff_RSI;
  ulonglong local_80;
  char local_78;
  ulonglong local_70;
  char local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  ulonglong local_40;
  char local_38;
  
  local_60 = param_2;
  if (*unaff_RSI == 0) goto LAB_01ca2aea;
  local_78 = '\0';
  local_80 = *unaff_RSI;
  FUN_01c957d0(param_1,&local_80);
  uVar4 = local_40;
  uVar3 = *unaff_RSI;
  if (uVar3 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01ca2a5d;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = uVar4;
      if (((char)uVar5 != '\0') && (uVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = local_40;
      if (((char)uVar5 != '\0') && (uVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01ca2a5d:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) {
    FUN_01ca25e0();
    uVar3 = local_40;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    uVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (uVar4 == 0) {
      uVar4 = FUN_00e7bdb0();
    }
    else {
      local_48 = uVar3;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_01a8c310();
      uVar3 = local_48;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c98e0();
      uVar4 = FUN_01a8fc90();
      local_58 = uVar4;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_70 = *unaff_RSI;
      local_68 = '\0';
      uVar5 = FUN_01ca2090();
      local_40 = uVar5;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (((uVar4 >> 0x20 != 0) && (uVar5 >> 0x20 != 0)) &&
         (cVar1 = FUN_00e7c020(), uVar4 = local_58, cVar1 == '\0')) {
        uVar4 = FUN_01a8fc00();
      }
    }
    if (uVar3 != 0) {
      FUN_00d50b20();
    }
    return uVar4;
  }
LAB_01ca2aea:
  uVar3 = FUN_00e7bdb0();
  return uVar3;
}




// ============================================================
// @00e901e0 — 947 bytes
// ============================================================

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00e901e0(uint param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  memory_object_offset_t unaff_RSI;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  mem_entry_name_port_t in_stack_ffffffffffffffa0;
  undefined8 uVar11;
  uint *puVar12;
  uint in_stack_ffffffffffffffc0;
  
  puVar6 = (uint *)param_2[6];
  puVar12 = puVar6;
  if (puVar6 == (uint *)0x0) {
LAB_00e90268:
    for (puVar6 = (uint *)*param_2; puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
      uVar11 = 0xe9028a;
      uVar5 = FUN_00e31390();
      in_stack_ffffffffffffffa0 = (mem_entry_name_port_t)uVar11;
      do {
        if (((uVar5 & 1) != 0) ||
           (in_stack_ffffffffffffffa0 = (mem_entry_name_port_t)uVar11, (uVar5 & 0xfffe) == 0)) {
          in_stack_ffffffffffffffc0 = uVar5 & 0xfffffffe;
          break;
        }
        in_stack_ffffffffffffffc0 = uVar5 | 1;
        uVar11 = 0xe902bd;
        cVar4 = FUN_00e314a0(1,in_stack_ffffffffffffffc0);
        in_stack_ffffffffffffffa0 = (mem_entry_name_port_t)uVar11;
      } while (cVar4 == '\0');
      if ((in_stack_ffffffffffffffc0 & 1) != 0) goto LAB_00e902df;
    }
  }
  else {
    in_stack_ffffffffffffffa0 = 0xe90215;
    uVar5 = FUN_00e31390();
    do {
      if (((uVar5 & 1) != 0) || ((uVar5 & 0xfffe) == 0)) {
        in_stack_ffffffffffffffc0 = uVar5 & 0xfffffffe;
        break;
      }
      in_stack_ffffffffffffffc0 = uVar5 | 1;
      in_stack_ffffffffffffffa0 = 0xe90245;
      cVar4 = FUN_00e314a0(1,in_stack_ffffffffffffffc0);
    } while (cVar4 == '\0');
    if ((in_stack_ffffffffffffffc0 & 1) == 0) goto LAB_00e90268;
LAB_00e902df:
    if (puVar6 != (uint *)0x0) goto joined_r0x00e904a3;
  }
  _mach_vm_map(0xffff,(mach_vm_address_t *)0x10000,0xfa000001,0,1,in_stack_ffffffffffffffa0,
               unaff_RSI,(boolean_t)puVar12,param_1,in_stack_ffffffffffffffc0,0);
  FUN_00e8f250();
  puVar6 = (uint *)FUN_00e91940(&stack0xffffffffffffffc0);
  if (puVar6 == (uint *)0x0) {
    puVar6 = (uint *)FUN_00e912b0();
    puVar6[1] = param_1;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    uVar5 = FUN_00e31390();
    in_stack_ffffffffffffffc0 = (uVar5 & 0x10000) + (*(uint *)(param_2 + 3) & 0x7fff) * 2 + 1;
    *puVar6 = in_stack_ffffffffffffffc0;
    plVar2 = *(longlong **)(puVar6 + 2);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = *(ushort *)(param_2 + 3);
      uVar7 = 0;
      if (1 < uVar1) {
        do {
          uVar5 = (int)uVar7 + 1;
          *(uint *)((longlong)plVar2 +
                   (ulonglong)(byte)(&DAT_028026ec)[(longlong)(int)puVar6[1] * 0x38] * 0x10 +
                   uVar7 * (&DAT_028026d8)[(longlong)(int)puVar6[1] * 7] + 0x10) = uVar5;
          uVar7 = (ulonglong)(uVar5 & 0xffff);
        } while ((int)(uVar5 & 0xffff) < (int)(uVar1 - 1));
        uVar7 = (ulonglong)(uVar5 & 0xffff);
      }
      *(undefined4 *)
       ((longlong)plVar2 +
       (ulonglong)(byte)(&DAT_028026ec)[(longlong)(int)puVar6[1] * 0x38] * 0x10 +
       uVar7 * (&DAT_028026d8)[(longlong)(int)puVar6[1] * 7] + 0x10) = 0x7fff;
      if (*(char *)((longlong)param_2 + 0x1c) != '\0') {
        *plVar2 = (longlong)puVar6;
      }
    }
    uVar11 = FUN_00e313b0();
    *(undefined8 *)(puVar6 + 4) = uVar11;
    cVar4 = FUN_00e31450(3,puVar6);
    while (cVar4 == '\0') {
      *(undefined8 *)(puVar6 + 4) = uVar11;
      cVar4 = FUN_00e31450(3,puVar6);
    }
  }
joined_r0x00e904a3:
  do {
    if ((in_stack_ffffffffffffffc0 & 0xfffe) == 0) {
      puVar9 = (undefined8 *)0x0;
      goto LAB_00e9051c;
    }
    lVar3 = *(longlong *)(puVar6 + 2);
    lVar8 = (ulonglong)(byte)(&DAT_028026ec)[(longlong)(int)puVar6[1] * 0x38] * 0x10 +
            (ulonglong)(in_stack_ffffffffffffffc0 >> 0x11) *
            (&DAT_028026d8)[(longlong)(int)puVar6[1] * 7];
    uVar5 = in_stack_ffffffffffffffc0 + 0xfffe & 0xfffe;
    cVar4 = FUN_00e314a0(0,in_stack_ffffffffffffffc0 & 0x10000 |
                           *(int *)(lVar3 + 0x10 + lVar8) << 0x11 | uVar5);
  } while (cVar4 == '\0');
  puVar10 = (undefined8 *)(lVar8 + lVar3);
  puVar9 = puVar10 + 2;
  if ((&DAT_028026ec)[(longlong)(int)puVar6[1] * 0x38] == '\0') {
    *puVar10 = puVar6;
    puVar10[1] = unaff_RSI + 0x10;
  }
  FUN_00e314f0();
  if (uVar5 == 0) {
LAB_00e9051c:
    if (puVar12 == (uint *)0x0) {
      return puVar9;
    }
    puVar6 = (uint *)0x0;
  }
  else if (puVar12 == puVar6) {
    return puVar9;
  }
  FUN_00e31450(0,puVar6);
  return puVar9;
}




// ============================================================
// @01a71c20 — 922 bytes
// ============================================================

void FUN_01a71c20(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  ulonglong uVar9;
  byte unaff_SIL;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  char local_58;
  ulonglong local_50;
  int local_44;
  ulonglong local_40;
  char local_38;
  
  uVar5 = (**(code **)(*unaff_RDI + 0x9d8))();
  local_40 = uVar5;
  local_60 = (**(code **)(*unaff_RDI + 0x9e0))();
  if ((((uVar5 >> 0x20 == 0) || (local_60 >> 0x20 == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0'))
     && (cVar3 = (**(code **)(*unaff_RDI + 0x9e8))(), cVar3 == '\0')) {
    local_58 = '\0';
    local_60 = 0;
    local_44 = 0;
LAB_01a71cd0:
    pVar8 = (pthread_key_t)param_1;
    FUN_01b6d0d0();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
    param_1 = (**(code **)(*unaff_RDI + 0x9e0))();
    cVar3 = FUN_01252960(param_1,uVar7,&local_60,&local_80);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      if (((local_60 != 0) && (local_80 >> 0x20 != 0)) &&
         (param_1 = local_78, local_78 >> 0x20 != 0)) {
        FUN_01a6c2e0(local_78,local_80,1);
        uVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_01a71cd0;
          FUN_00d50b00();
        }
        else if (local_40 == 0) goto LAB_01a71cd0;
        if (*(int *)(uVar5 + 0xc) != 0) {
          local_40 = local_60;
          local_38 = '\0';
          iVar4 = FUN_00d237a0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          pVar8 = (pthread_key_t)param_1;
          if (iVar4 == -1) {
            iVar4 = *(int *)(uVar5 + 0xc) / 2;
          }
          iVar4 = iVar4 + (uint)(unaff_SIL ^ 1) * 2 + -1;
          if ((-1 < iVar4) && (iVar4 < *(int *)(uVar5 + 0xc))) {
            if (local_44 == 0) {
              (**(code **)(*unaff_RDI + 0xa48))();
            }
            local_50 = CONCAT44(local_50._4_4_,iVar4);
            FUN_01b6d0d0();
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar9 = local_50 & 0xffffffff;
            uVar1 = *(ulonglong *)(*(longlong *)(uVar5 + 0x10) + uVar9 * 8);
            if (uVar1 != 0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            local_50 = uVar1;
            local_40 = uVar1;
            FUN_012502a0(local_78,local_80,0);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = *(longlong *)(*(longlong *)(uVar5 + 0x10) + uVar9 * 8);
            local_68 = 0;
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            local_68 = '\x01';
            param_1 = local_78;
            local_70 = lVar2;
            (**(code **)(*unaff_RDI + 0xa80))(local_78,local_80);
            local_44 = local_44 + 1;
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      goto LAB_01a71cd0;
    }
    if (0 < local_44) {
      (**(code **)(*unaff_RDI + 0xa50))();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01b7f9c0 — 894 bytes
// ============================================================

ulonglong FUN_01b7f9c0(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 unaff_RBX;
  undefined7 uVar9;
  longlong *unaff_RDI;
  ulonglong uVar10;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*unaff_RDI + 0xa78))();
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*unaff_RDI + 0x9d0))(), cVar3 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar4 = (**(code **)(*unaff_RDI + 0x9d8))();
    uVar5 = (**(code **)(*unaff_RDI + 0x9e0))();
    uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if ((*(char *)((longlong)unaff_RDI + 0x1b4) == '\0') &&
       (param_1 = (pthread_key_t)(uVar4 >> 0x20), uVar4 >> 0x20 == 0)) {
      bVar2 = uVar5 >> 0x20 == 0;
      uVar7 = CONCAT71(uVar9,!bVar2);
      if (bVar2) goto LAB_01b7fa37;
    }
    else {
      uVar7 = CONCAT71(uVar9,1);
    }
    if (param_2 != '\0') {
      (**(code **)(*unaff_RDI + 0xa48))();
      if (*(char *)((longlong)unaff_RDI + 0x1b4) == '\0') {
        if (uVar4 >> 0x20 == 0) {
          if (uVar5 >> 0x20 == 0) {
            bVar2 = false;
            uVar10 = 0;
          }
          else {
            lVar1 = unaff_RDI[0x2b];
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e7c260();
            uVar7 = uVar5;
            FUN_012521f0(uVar5,0,0,0);
            param_1 = (pthread_key_t)CONCAT71((int7)(uVar7 >> 8),local_40[0]);
            pcVar8 = local_38;
            if (local_40[0] != '\0') {
              pcVar8 = local_40;
            }
            local_38[0] = local_40[0];
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (uVar5 != 0)) {
              FUN_00d50b20();
            }
            if (uVar5 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
              if (local_38[0] == '\0') {
                FUN_00d50b00();
              }
            }
            uVar10 = uVar5;
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          lVar1 = unaff_RDI[0x2b];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e7c280();
          uVar7 = uVar4;
          FUN_012521f0(uVar4,0,0,0);
          param_1 = (pthread_key_t)CONCAT71((int7)(uVar7 >> 8),local_40[0]);
          pcVar8 = local_38;
          if (local_40[0] != '\0') {
            pcVar8 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar8 = '\0';
          if ((local_40[0] != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
          if (uVar4 == 0) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            if (local_38[0] == '\0') {
              FUN_00d50b00();
            }
          }
          uVar10 = uVar4;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        bVar2 = false;
        uVar10 = 0;
      }
      lVar1 = unaff_RDI[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40[0] = '\0';
      FUN_012502a0(uVar5,uVar4,(char)unaff_RDI[0x36]);
      if ((local_40[0] != '\0') && (uVar10 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xa50))();
      uVar7 = CONCAT71((int7)(uVar5 >> 8),1);
      if ((bVar2) && (uVar10 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01b7fa37:
  return uVar7 & 0xffffffff;
}




// ============================================================
// @01ba0110 — 888 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ba01b7) */
/* WARNING: Removing unreachable block (ram,0x01ba01c0) */

void FUN_01ba0110(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_40;
  char local_38;
  
  FUN_01d3a560();
  iVar5 = FUN_01d3b590();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 8) {
    FUN_00c9eb90(DAT_02394254);
  }
  else {
    FUN_00c9eb90(DAT_02391090);
  }
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = false;
    plVar9 = local_40;
  }
  if (unaff_RDI[0x1b] == *unaff_RSI) {
    FUN_00e38430();
  }
  FUN_00e99dd0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x960))();
  lVar8 = local_98;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  cVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (0 < *(int *)((longlong)plVar9 + 0xc))) {
    lVar7 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(plVar9[2] + lVar7 * 8);
      if (lVar8 == lVar1) {
        if ((!bVar2) && (lVar8 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar8 = lVar1;
        }
        else {
          bVar2 = true;
          lVar8 = lVar1;
        }
      }
      if (unaff_RDI[0x1b] == *unaff_RSI) {
        pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RSI);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b60();
        FUN_00aea610();
        uVar10 = FUN_00d46dc0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_a0 = '\0';
        local_a8 = lVar8;
        FUN_019b43b0(uVar10,&local_a8);
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)plVar9 + 0xc));
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3 && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e8fc40 — 883 bytes
// ============================================================

undefined8 * FUN_00e8fc40(pthread_key_t param_1)

{
  kern_return_t kVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  vm_prot_t unaff_EBX;
  vm_inherit_t unaff_EBP;
  ulonglong unaff_RDI;
  longlong lVar5;
  vm_prot_t unaff_R14D;
  mem_entry_name_port_t object;
  memory_object_offset_t in_stack_ffffffffffffffd8;
  undefined8 *puVar6;
  
  if (unaff_RDI == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    object = 0xe8fc62;
    pvVar2 = _pthread_getspecific(param_1);
    lVar4 = 0;
    if (pvVar2 == (void *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)((longlong)pvVar2 + 0x58);
    }
    if (((((((((unaff_RDI <= DAT_028026e0) || (lVar4 = 1, unaff_RDI <= DAT_02802718)) ||
             (lVar4 = 2, unaff_RDI <= DAT_02802750)) ||
            ((lVar4 = 3, unaff_RDI <= DAT_02802788 || (lVar4 = 4, unaff_RDI <= DAT_028027c0)))) ||
           ((lVar4 = 5, unaff_RDI <= DAT_028027f8 ||
            ((lVar4 = 6, unaff_RDI <= DAT_02802830 || (lVar4 = 7, unaff_RDI <= DAT_02802868)))))) ||
          (lVar4 = 8, unaff_RDI <= DAT_028028a0)) ||
         (((((lVar4 = 9, unaff_RDI <= DAT_028028d8 || (lVar4 = 10, unaff_RDI <= DAT_02802910)) ||
            (lVar4 = 0xb, unaff_RDI <= DAT_02802948)) ||
           (((lVar4 = 0xc, unaff_RDI <= DAT_02802980 || (lVar4 = 0xd, unaff_RDI <= DAT_028029b8)) ||
            ((lVar4 = 0xe, unaff_RDI <= DAT_028029f0 ||
             ((lVar4 = 0xf, unaff_RDI <= DAT_02802a28 || (lVar4 = 0x10, unaff_RDI <= DAT_02802a60)))
             ))))) ||
          ((lVar4 = 0x11, unaff_RDI <= DAT_02802a98 ||
           (((lVar4 = 0x12, unaff_RDI <= DAT_02802ad0 || (lVar4 = 0x13, unaff_RDI <= DAT_02802b08))
            || (lVar4 = 0x14, unaff_RDI <= DAT_02802b40)))))))) ||
        ((((lVar4 = 0x15, unaff_RDI <= DAT_02802b78 || (lVar4 = 0x16, unaff_RDI <= DAT_02802bb0)) ||
          (((lVar4 = 0x17, unaff_RDI <= DAT_02802be8 ||
            ((lVar4 = 0x18, unaff_RDI <= DAT_02802c20 || (lVar4 = 0x19, unaff_RDI <= DAT_02802c58)))
            ) || (lVar4 = 0x1a, unaff_RDI <= DAT_02802c90)))) ||
         ((((lVar4 = 0x1b, unaff_RDI <= DAT_02802cc8 || (lVar4 = 0x1c, unaff_RDI <= DAT_02802d00))
           || (lVar4 = 0x1d, unaff_RDI <= DAT_02802d38)) ||
          ((lVar4 = 0x1e, unaff_RDI <= DAT_02802d70 || (lVar4 = 0x1f, unaff_RDI <= DAT_02802da8)))))
         ))) || ((lVar4 = 0x20, unaff_RDI <= DAT_02802de0 ||
                 ((lVar4 = 0x21, unaff_RDI <= DAT_02802e18 ||
                  (lVar4 = 0x22, unaff_RDI <= DAT_02802e50)))))) {
      if (lVar5 != 0) {
        puVar3 = (undefined8 *)FUN_00e8ffc0();
        return puVar3;
      }
      puVar3 = (undefined8 *)FUN_00e901e0(lVar4,&DAT_028026d0 + lVar4 * 7);
      return puVar3;
    }
    puVar6 = (undefined8 *)0x0;
    kVar1 = _mach_vm_map(0x1f,(mach_vm_address_t *)
                              ((ulonglong)(&UNK_0000400f + unaff_RDI) & 0xffffffffffffc000),
                         0xfa000001,0,1,object,in_stack_ffffffffffffffd8,0,unaff_EBX,unaff_R14D,
                         unaff_EBP);
    puVar3 = (undefined8 *)0x0;
    if (kVar1 == 0) {
      puVar3 = puVar6;
    }
    if (puVar3 == (undefined8 *)0x0) {
      FUN_00e8f250();
    }
    *puVar3 = 0;
    puVar3[1] = (mach_vm_address_t *)((ulonglong)(&UNK_0000400f + unaff_RDI) & 0xffffffffffffc000);
    puVar3 = puVar3 + 2;
    FUN_00e314f0();
  }
  return puVar3;
}




// ============================================================
// @01dc0220 — 882 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dc0314) */
/* WARNING: Removing unreachable block (ram,0x01dc0320) */
/* WARNING: Removing unreachable block (ram,0x01dc0365) */
/* WARNING: Removing unreachable block (ram,0x01dc0371) */

void FUN_01dc0220(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  undefined8 uVar7;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  char local_38;
  
  uVar7 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x640))();
  local_50 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x920))();
  uVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*local_50 + 0x3f0))((float)uVar7,param_2,uVar4,uVar3);
  plVar6 = (longlong *)unaff_RDI[0x30];
  if (plVar6 == (longlong *)0x0) {
    uVar5 = (**(code **)(*local_50 + 0x370))();
    plVar6 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      local_48 = 0;
    }
    else {
      local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar5 = FUN_00d50b00();
    local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  FUN_01d48a10();
  FUN_01cfbc00();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x960))();
  local_58 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_58 = '\x01';
  local_60 = local_90;
  FUN_01d44870(param_2 + DAT_023b8b2c,&local_60);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x3f0))
            (DAT_02394298 + (float)uVar7,(float)((ulonglong)uVar7 >> 0x20) + DAT_023b36a0);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (((char)local_48 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dc1cd0 — 850 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dc1fdf) */
/* WARNING: Removing unreachable block (ram,0x01dc1fe8) */
/* WARNING: Removing unreachable block (ram,0x01dc1e9d) */
/* WARNING: Removing unreachable block (ram,0x01dc1eaa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1cd0(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RDI;
  bool bVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fStack_b4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x140) != 0) {
    *(undefined8 *)(unaff_RDI + 0x140) = 0;
    FUN_00d50b20();
  }
  FUN_01d3a560();
  iVar4 = FUN_01d3b630();
  if (iVar4 == 2) {
    FUN_01dc0d60();
    bVar7 = local_80 != 0;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar7 = false;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar7) {
LAB_01dc1e78:
    FUN_01e459c0();
    return;
  }
  FUN_01d3abf0();
  FUN_01e466c0();
  iVar4 = 0;
LAB_01dc1da4:
  FUN_01dc0d60();
  iVar5 = FUN_01dca080();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 <= iVar4) goto LAB_01dc1e78;
  local_98 = FUN_01dc1b40();
  uStack_90 = extraout_XMM0_Qb;
  uVar8 = FUN_01dc1b40();
  auVar11._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar11._0_8_ = uVar8;
  auVar11._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar12._4_12_ = local_98._4_12_;
  auVar12._0_4_ = (float)local_98 - (float)uVar8;
  FUN_01e3f820();
  blendps(auVar11,auVar12,1);
  auVar10._8_8_ = extraout_XMM0_Qb_00;
  auVar10._0_8_ = uVar8;
  blendps(ZEXT816(0),auVar10,1);
  cVar3 = FUN_00d05410();
  if (cVar3 == '\0') {
LAB_01dc1da0:
    iVar4 = iVar4 + 1;
    goto LAB_01dc1da4;
  }
  FUN_01dc2170(extraout_XMM0_Qa,iVar4);
  if (local_38 != '\0') {
    if (local_40 != 0) goto LAB_01dc1ebc;
    goto LAB_01dc1da0;
  }
  if (local_40 == 0) goto LAB_01dc1da0;
  FUN_00d50b00();
LAB_01dc1ebc:
  iVar5 = FUN_01d5b230();
  if (iVar5 == 0) goto LAB_01dc2001;
  uVar9 = FUN_01dc0d60();
  FUN_01dcc290(uVar9,iVar4);
  lVar1 = *(longlong *)(unaff_RDI + 0x140);
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01dc1f06;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x140);
      *(longlong *)(unaff_RDI + 0x140) = local_40;
    }
    else {
      local_38 = '\0';
LAB_01dc1f06:
      *(longlong *)(unaff_RDI + 0x140) = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  fStack_b4 = auVar11._4_4_;
  auVar2._8_8_ = extraout_XMM0_Qb_00;
  auVar2._0_8_ = uVar8;
  auVar10 = insertps(auVar2,ZEXT416((uint)(fStack_b4 + 0.0)),0x10);
  auVar12 = blendps(auVar12,_DAT_023907b0,0xe);
  FUN_01d5ef60(auVar10._0_8_,auVar12._0_8_);
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
LAB_01dc2001:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01ba2d00 — 842 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ba2d8e) */
/* WARNING: Removing unreachable block (ram,0x01ba2d97) */

void FUN_01ba2d00(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_48;
  char local_40;
  
  FUN_01d3a560();
  iVar5 = FUN_01d3b590();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x1d) = *(undefined4 *)(&DAT_0241c4d8 + (ulonglong)(iVar5 == 8) * 4);
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_48 == (longlong *)0x0) {
    bVar3 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = local_48;
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
  }
  if (unaff_RDI[0x1b] == *unaff_RSI) {
    FUN_00e38430();
  }
  FUN_00e99dd0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x960))();
  lVar8 = local_90;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  cVar4 = (**(code **)(*local_48 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (0 < *(int *)((longlong)plVar9 + 0xc))) {
    lVar7 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(plVar9[2] + lVar7 * 8);
      if (lVar8 == lVar1) {
        if ((!bVar2) && (lVar8 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar8 = lVar1;
        }
        else {
          bVar2 = true;
          lVar8 = lVar1;
        }
      }
      if (unaff_RDI[0x1b] == *unaff_RSI) {
        pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RSI);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b70();
        uVar10 = FUN_00d46dc0();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_98 = '\0';
        local_a0 = lVar8;
        FUN_019b43b0(uVar10,&local_a0);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)plVar9 + 0xc));
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3 && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01a89570 — 841 bytes
// ============================================================

void FUN_01a89570(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar4 = (longlong *)(unaff_RDI + 0xb8);
    (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e2a30;
    if (DAT_027e2a30 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    pVar3 = 0x20;
    FUN_00e8b850(0x20,&local_70);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar4 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e2a38;
    if (DAT_027e2a38 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e8b850(0x20,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01a89b50 — 831 bytes
// ============================================================

void FUN_01a89b50(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar3;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar3 = (longlong *)(unaff_RDI + 0xb8);
    (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e2a30;
    if (DAT_027e2a30 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e8b9a0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar3 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e2a38;
    if (DAT_027e2a38 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e8b9a0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00dc07c0 — 815 bytes
// ============================================================

void FUN_00dc07c0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar4;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 local_98 [8];
  undefined1 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_54 = param_2;
  (**(code **)(*(longlong *)*param_1 + 0x360))();
  FUN_00dbdde0();
  lVar1 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\0';
  local_100 = *param_3;
  local_f8 = 0;
  FUN_00dbe290(&local_100,&local_88,param_4);
  lVar2 = local_40;
  if (lVar1 == local_40) {
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar4 = lVar1 != 0;
    lVar1 = lVar2;
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    bVar4 = lVar1 != 0;
    lVar1 = lVar2;
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02783b30;
  local_f0 = *unaff_RDI;
  local_e8 = 0;
  local_70 = '\0';
  local_78 = lVar1;
  if (DAT_02783b30 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  local_e0 = *param_1;
  local_d8 = 0;
  FUN_00dbf000();
  lVar2 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_90 = 1;
  FUN_00dbebd0(&local_68,&local_78,local_98);
  lVar3 = local_40;
  if (lVar1 == local_40) {
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar4 = lVar1 != 0;
    lVar1 = lVar3;
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    lVar1 = lVar3;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_d0 = *unaff_RSI;
  local_c8 = 0;
  local_b8 = 0;
  FUN_00dbde70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_b0 = local_40;
  local_a8 = 1;
  FUN_00dbfc90(&local_b0,0);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dbe380 — 806 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dbe66f) */
/* WARNING: Removing unreachable block (ram,0x01dbe67b) */

void FUN_01dbe380(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar10 = (float)((ulonglong)param_2 >> 0x20);
  fVar9 = (float)param_2;
  uVar4 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x9e8))();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x9e8))();
  (**(code **)(*unaff_RDI + 0x960))();
  local_48 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_80;
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar5._4_12_ = auVar8._4_12_;
  auVar5._0_4_ = fVar9 + DAT_023b8b2c;
  FUN_01d44870(auVar5._0_8_,&local_50);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*unaff_RDI + 0xb58))();
  (**(code **)(*unaff_RDI + 0xb58))();
  (**(code **)(*unaff_RDI + 0x9e8))();
  FUN_01d43ca0();
  (**(code **)(*plVar1 + 0x3f0))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(char *)((longlong)unaff_RDI + 0x261) != '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    local_c8 = (float)uVar4;
    fStack_c4 = (float)((ulonglong)uVar4 >> 0x20);
    fStack_c0 = (float)extraout_XMM0_Qb;
    fStack_bc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar6._0_4_ = local_c8 + auVar5._0_4_;
    auVar6._4_4_ = fStack_c4 + fVar10;
    auVar6._8_4_ = fStack_c0 + in_XMM1_Dc;
    auVar6._12_4_ = fStack_bc + in_XMM1_Dd;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = ((auVar6._0_4_ + DAT_02390d00) - fVar10 * DAT_0239011c) + DAT_02390d2c;
    auVar2._4_4_ = auVar6._4_4_;
    auVar2._0_4_ = (auVar6._4_4_ + DAT_02390d00) - fVar10 * DAT_0239011c;
    auVar2._8_4_ = auVar6._12_4_;
    auVar2._12_4_ = auVar6._12_4_;
    auVar8 = insertps(auVar7,auVar2,0x10);
    FUN_01cb3a60(auVar8._0_8_,3);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01dbcf20 — 792 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dbd201) */
/* WARNING: Removing unreachable block (ram,0x01dbd20d) */

void FUN_01dbcf20(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar10 = (float)((ulonglong)param_2 >> 0x20);
  fVar9 = (float)param_2;
  uVar4 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x9e8))();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x9e8))();
  (**(code **)(*unaff_RDI + 0x960))();
  local_48 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_80;
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar5._4_12_ = auVar8._4_12_;
  auVar5._0_4_ = fVar9 + DAT_023b8b2c;
  FUN_01d44870(auVar5._0_8_,&local_50);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*unaff_RDI + 0xad8))();
  (**(code **)(*unaff_RDI + 0xad8))();
  (**(code **)(*unaff_RDI + 0x9e8))();
  FUN_01d43ca0();
  (**(code **)(*plVar1 + 0x3f0))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  local_c8 = (float)uVar4;
  fStack_c4 = (float)((ulonglong)uVar4 >> 0x20);
  fStack_c0 = (float)extraout_XMM0_Qb;
  fStack_bc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar6._0_4_ = local_c8 + auVar5._0_4_;
  auVar6._4_4_ = fStack_c4 + fVar10;
  auVar6._8_4_ = fStack_c0 + in_XMM1_Dc;
  auVar6._12_4_ = fStack_bc + in_XMM1_Dd;
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = ((auVar6._0_4_ + DAT_02390d00) - fVar10 * DAT_0239011c) + DAT_02390d2c;
  auVar2._4_4_ = auVar6._4_4_;
  auVar2._0_4_ = (auVar6._4_4_ + DAT_02390d00) - fVar10 * DAT_0239011c;
  auVar2._8_4_ = auVar6._12_4_;
  auVar2._12_4_ = auVar6._12_4_;
  auVar8 = insertps(auVar7,auVar2,0x10);
  FUN_01cb3a60(auVar8._0_8_,3);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c73be0 — 771 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c73d2f) */
/* WARNING: Removing unreachable block (ram,0x00c73d3b) */
/* WARNING: Removing unreachable block (ram,0x00c73d71) */
/* WARNING: Removing unreachable block (ram,0x00c73d7a) */
/* WARNING: Removing unreachable block (ram,0x00c73dcc) */
/* WARNING: Removing unreachable block (ram,0x00c73dd5) */

undefined8 * FUN_00c73be0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  longlong lVar4;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  (**(code **)(*(longlong *)*param_2 + 0x368))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d8dbf0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7a0();
  cVar2 = FUN_00d8ca70();
  lVar1 = DAT_0270b790;
  lVar4 = DAT_026fce10;
  if (cVar2 == '-') {
    if (DAT_0270b790 != 0) {
      FUN_00d50b00();
      lVar4 = lVar1;
      goto LAB_00c73cef;
    }
  }
  else if (DAT_026fce10 != 0) {
    FUN_00d50b00();
    goto LAB_00c73cef;
  }
  lVar4 = 0;
LAB_00c73cef:
  FUN_00d8c7a0();
  FUN_00e7b4e0();
  FUN_00d8e100();
  FUN_00d8c7d0();
  FUN_00cddf30();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*(longlong *)*param_2 + 0x498))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x4a0))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*param_2 + 0x488))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x490))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @008c6154 — 755 bytes
// str: ""version""
// str: ""inactiveTimeout""
// str: ""sharedLicenseInfo""
// str: ""connectionId""
// str: ""OpenDirectLocationConnectionReturn""
// ============================================================

int FUN_008c6154(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*unaff_RSI + 0x20))();
  iVar2 = (**(code **)(*unaff_RSI + 0x30))(1,0xb);
  iVar3 = (**(code **)(*unaff_RSI + 0xa8))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x30))(2,8);
  iVar6 = (**(code **)(*unaff_RSI + 0x90))();
  iVar7 = (**(code **)(*unaff_RSI + 0x38))();
  iVar8 = (**(code **)(*unaff_RSI + 0x30))(3,8);
  iVar9 = (**(code **)(*unaff_RSI + 0x90))();
  iVar10 = (**(code **)(*unaff_RSI + 0x38))();
  iVar11 = (**(code **)(*unaff_RSI + 0x30))(4,0xf);
  iVar12 = (**(code **)(*unaff_RSI + 0x58))();
  iVar12 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12;
  for (plVar13 = *(longlong **)(unaff_RDI + 0x28); plVar13 != *(longlong **)(unaff_RDI + 0x30);
      plVar13 = plVar13 + 6) {
    iVar1 = (**(code **)(*plVar13 + 0x18))();
    iVar12 = iVar12 + iVar1;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x60))();
  iVar2 = (**(code **)(*unaff_RSI + 0x38))();
  iVar2 = iVar1 + iVar12 + iVar2;
  if (*(char *)(unaff_RDI + 0x260) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(5,0xc);
    iVar3 = FUN_008894f0();
    iVar4 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(unaff_RDI + 0x261) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(6,0xc);
    iVar3 = FUN_0088b428();
    iVar4 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  if (*(char *)(unaff_RDI + 0x262) != '\0') {
    iVar1 = (**(code **)(*unaff_RSI + 0x30))(0xc44,0xc);
    iVar3 = FUN_008f16c6();
    iVar4 = (**(code **)(*unaff_RSI + 0x38))();
    iVar2 = iVar1 + iVar2 + iVar3 + iVar4;
  }
  iVar1 = (**(code **)(*unaff_RSI + 0x30))(&DAT_00002710,8);
  iVar3 = (**(code **)(*unaff_RSI + 0x90))();
  iVar4 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = (**(code **)(*unaff_RSI + 0x40))();
  iVar6 = (**(code **)(*unaff_RSI + 0x28))();
  *(int *)((longlong)unaff_RSI + 0x1c) = *(int *)((longlong)unaff_RSI + 0x1c) + -1;
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6;
}




// ============================================================
// @00c73090 — 748 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c731a9) */
/* WARNING: Removing unreachable block (ram,0x00c731b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c73090(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined8 local_68;
  
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_00c730d8:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RDI;
    if (cVar3 == '\0') goto LAB_00c730d8;
  }
  lVar1 = plVar5[1];
  if (((char)lVar1 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00c730ff:
    local_68 = FUN_00dd6ab0();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return local_68;
  }
  if (*plVar5 != 0) goto LAB_00c730ff;
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c7316b;
  }
  unaff_RDI = &DAT_02802688;
LAB_00c7316b:
  lVar2 = DAT_027720b0;
  lVar1 = unaff_RDI[1];
  if (((char)lVar1 == '\0') || (*unaff_RDI == 0)) {
    if (*unaff_RDI == 0) {
      if (DAT_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      return DAT_023dccec;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_68 = FUN_00d96410();
  if ((char)lVar1 == '\0') {
    return local_68;
  }
  FUN_00d50b20();
  return local_68;
}




// ============================================================
// @00c73430 — 748 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c73549) */
/* WARNING: Removing unreachable block (ram,0x00c73552) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c73430(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined8 local_68;
  
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_00c73478:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RDI;
    if (cVar3 == '\0') goto LAB_00c73478;
  }
  lVar1 = plVar5[1];
  if (((char)lVar1 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00c7349f:
    local_68 = FUN_00dd6b50();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return local_68;
  }
  if (*plVar5 != 0) goto LAB_00c7349f;
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c7350b;
  }
  unaff_RDI = &DAT_02802688;
LAB_00c7350b:
  lVar2 = DAT_027720b0;
  lVar1 = unaff_RDI[1];
  if (((char)lVar1 == '\0') || (*unaff_RDI == 0)) {
    if (*unaff_RDI == 0) {
      if (DAT_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      return DAT_023dcd0c;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_68 = FUN_00d967b0();
  if ((char)lVar1 == '\0') {
    return local_68;
  }
  FUN_00d50b20();
  return local_68;
}




// ============================================================
// @01ca25e0 — 742 bytes
// ============================================================

longlong * FUN_01ca25e0(longlong param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined7 uVar6;
  undefined7 extraout_var;
  longlong lVar5;
  pthread_key_t pVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  double dVar11;
  double extraout_XMM0_Qa;
  double local_68;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_68 = (double)FUN_012646c0();
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d23310();
  uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar6 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (undefined4)CONCAT71(uVar6,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar5 = *unaff_RSI;
  if (*(int *)(lVar5 + 0xc) < 2) {
    uVar9 = 0;
    lVar8 = 0;
  }
  else {
    lVar10 = 1;
    lVar8 = 0;
    uVar9 = 0;
    do {
      pVar7 = (pthread_key_t)param_1;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar10 * 8);
      if (lVar8 == lVar5) {
        if (((char)uVar9 == '\0') && (lVar8 != 0)) {
          uVar9 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar9 == '\0') || (lVar8 == 0)) {
          uVar9 = 1;
          lVar8 = lVar5;
        }
        else {
          FUN_00d50b20();
          uVar9 = 1;
          lVar8 = lVar5;
        }
      }
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_012646c0();
      lVar5 = local_48;
      uVar1 = local_3c;
      if (local_68 < dVar11) {
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012646c0();
        local_68 = extraout_XMM0_Qa;
        if (local_48 == lVar8) {
          lVar5 = local_48;
          uVar1 = local_3c;
          if ((((char)uVar9 != '\0') && ((char)local_3c == '\0')) && (lVar8 != 0)) {
            local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
            FUN_00d50b00();
            lVar5 = local_48;
            uVar1 = local_3c;
          }
        }
        else {
          if (((char)uVar9 != '\0') && (lVar8 != 0)) {
            FUN_00d50b00();
          }
          lVar5 = lVar8;
          uVar1 = uVar9;
          if (((char)local_3c != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_3c = uVar1;
      local_48 = lVar5;
      lVar10 = lVar10 + 1;
      lVar5 = *unaff_RSI;
      param_1 = (longlong)*(int *)(lVar5 + 0xc);
    } while (lVar10 < param_1);
  }
  lVar5 = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)uVar9 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00d1ea30 — 737 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d1ea8b) */
/* WARNING: Removing unreachable block (ram,0x00d1ea90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d1ea30(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  longlong *local_20;
  char local_18;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  local_78 = *unaff_RSI;
  local_70 = 0;
  FUN_00d1c6d0(0,&local_78);
  local_18 = local_38 != '\0';
  local_20 = local_40;
  if ((bool)local_18) {
    local_38 = '\0';
  }
  if ((DAT_0270c850 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  plVar1 = local_20;
  plVar2 = DAT_02802688;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar1 = local_20;
    plVar2 = DAT_02802688;
    if (cVar4 != '\0') {
      plVar2 = local_20;
    }
  }
  local_20 = plVar1;
  if (plVar2 == (longlong *)0x0) {
    if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
    plVar3 = DAT_02802688;
    plVar2 = local_30;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar3 = DAT_02802688;
      plVar2 = local_30;
      if (cVar4 != '\0') {
        plVar3 = local_20;
      }
    }
    local_30 = plVar3;
    if (local_30 == (longlong *)0x0) {
      uStack_60 = 0;
      uStack_50 = 0;
      local_68 = DAT_023dcd0c;
      local_58 = DAT_023dcd14;
      local_30 = plVar2;
    }
    else {
      local_28 = '\0';
      local_68 = FUN_00d967b0();
      uStack_60 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
      local_58 = CONCAT44(uVar7,uVar6);
      uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68 = FUN_00dd6b50();
    uStack_60 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    local_58 = CONCAT44(uVar7,uVar6);
    uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
  }
  if ((local_18 != '\0') && (local_20 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return local_68;
}




// ============================================================
// @00c72d10 — 727 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c72e1d) */
/* WARNING: Removing unreachable block (ram,0x00c72e26) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c72d10(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined8 local_58;
  
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_00c72d58:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RDI;
    if (cVar3 == '\0') goto LAB_00c72d58;
  }
  lVar1 = plVar5[1];
  if (((char)lVar1 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00c72d7f:
    local_58 = FUN_00dd6c90();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return local_58;
  }
  if (*plVar5 != 0) goto LAB_00c72d7f;
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c72de3;
  }
  unaff_RDI = &DAT_02802688;
LAB_00c72de3:
  lVar2 = DAT_027720b0;
  lVar1 = unaff_RDI[1];
  if (((char)lVar1 == '\0') || (*unaff_RDI == 0)) {
    if (*unaff_RDI == 0) {
      if (DAT_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      return DAT_023dcce4;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_58 = FUN_00d96b50();
  if ((char)lVar1 == '\0') {
    return local_58;
  }
  FUN_00d50b20();
  return local_58;
}




// ============================================================
// @00e90e50 — 727 bytes
// ============================================================

void FUN_00e90e50(void)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  code *unaff_RDI;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int local_3c;
  
  iVar11 = 10;
  lVar9 = 0;
  do {
    uVar1 = (&DAT_028026e8)[lVar9 * 0x1c];
    if (((&DAT_028026ec)[lVar9 * 0x38] == '\0') &&
       (*(char *)((longlong)&DAT_028026b0 + lVar9 * 0x38 + 4) != '\0')) {
      iVar4 = 10;
      do {
        (*unaff_RDI)(0xff,0xff,iVar4,iVar11);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x49b);
      iVar11 = iVar11 + 10;
    }
    for (lVar7 = (&DAT_028026d0)[lVar9 * 7]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x10)) {
      while( true ) {
        uVar8 = (uint)uVar1;
        uVar3 = FUN_00e31390();
        if (((uVar3 & 1) != 0) && (*(longlong *)(lVar7 + 8) != 0)) {
          (*unaff_RDI)(0xff,0,6,iVar11);
          (*unaff_RDI)(0xff,0,7,iVar11);
          (*unaff_RDI)(0xff,0,8,iVar11);
        }
        lVar2 = *(longlong *)(lVar7 + 8);
        if (uVar1 == 0) {
          local_3c = 0;
          iVar4 = iVar11;
        }
        else {
          local_3c = 0;
          iVar10 = 10;
          do {
            iVar5 = iVar10 + 1;
            (*unaff_RDI)(0xff,-(lVar2 == 0),iVar10,iVar11);
            if (0x4a4 < iVar10) {
              local_3c = local_3c + 1;
              (*unaff_RDI)(0xff,0xff,iVar5,iVar11);
              iVar11 = iVar11 + 1;
              iVar5 = 10;
            }
            uVar8 = uVar8 - 1;
            iVar4 = iVar11;
            iVar10 = iVar5;
          } while (uVar8 != 0);
        }
        if (*(longlong *)(lVar7 + 8) == 0) break;
        uVar3 = uVar3 >> 0x11;
        iVar11 = iVar4 + 1;
        while (((ushort)uVar3 < uVar1 && (*(longlong *)(lVar7 + 8) != 0))) {
          uVar6 = uVar3 & 0xffff;
          uVar8 = uVar6 + 10;
          iVar10 = iVar4 - local_3c;
          if (0x49b < uVar6) {
            if (0x93f < uVar8) {
              uVar8 = 0x940;
            }
            uVar3 = ((uVar3 - uVar8) + 0x4a4 & 0xffff) / 0x49b;
            uVar8 = (uVar6 + uVar3 * -0x49b) - 0x491;
            iVar10 = uVar3 + (iVar11 - local_3c);
          }
          (*unaff_RDI)(0xff,0,uVar8,iVar10);
          uVar3 = *(uint *)(*(longlong *)(lVar7 + 8) + 0x10 +
                           (ulonglong)(byte)(&DAT_028026ec)[(longlong)*(int *)(lVar7 + 4) * 0x38] *
                           0x10 + (ulonglong)uVar6 *
                                  (&DAT_028026d8)[(longlong)*(int *)(lVar7 + 4) * 7]);
          if ((uVar3 & 0xffff) == uVar6) goto LAB_00e91134;
        }
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if (lVar7 == 0) goto LAB_00e90e80;
      }
LAB_00e91134:
      iVar11 = iVar4 + 1;
    }
LAB_00e90e80:
    iVar11 = iVar11 + 10;
    lVar9 = lVar9 + 1;
    if (lVar9 == 0x23) {
      return;
    }
  } while( true );
}




// ============================================================
// @00c72990 — 727 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c72a9d) */
/* WARNING: Removing unreachable block (ram,0x00c72aa6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c72990(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined8 local_58;
  
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_00c729d8:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RDI;
    if (cVar3 == '\0') goto LAB_00c729d8;
  }
  lVar1 = plVar5[1];
  if (((char)lVar1 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00c729ff:
    local_58 = FUN_00dd6bf0();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return local_58;
  }
  if (*plVar5 != 0) goto LAB_00c729ff;
  plVar5 = (longlong *)*unaff_RDI;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c72a63;
  }
  unaff_RDI = &DAT_02802688;
LAB_00c72a63:
  lVar2 = DAT_027720b0;
  lVar1 = unaff_RDI[1];
  if (((char)lVar1 == '\0') || (*unaff_RDI == 0)) {
    if (*unaff_RDI == 0) {
      if (DAT_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      return DAT_023dccdc;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_58 = FUN_00d96ea0();
  if ((char)lVar1 == '\0') {
    return local_58;
  }
  FUN_00d50b20();
  return local_58;
}




// ============================================================
// @00c72290 — 724 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c7239a) */
/* WARNING: Removing unreachable block (ram,0x00c723a3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c72290(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  
  plVar6 = (longlong *)*unaff_RDI;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 == (longlong *)0x0) {
LAB_00c722d8:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = unaff_RDI;
    if (cVar3 == '\0') goto LAB_00c722d8;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00c722ff:
    uVar5 = FUN_00dd63c0();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return uVar5;
  }
  if (*plVar6 != 0) goto LAB_00c722ff;
  plVar6 = (longlong *)*unaff_RDI;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c72361;
  }
  unaff_RDI = &DAT_02802688;
LAB_00c72361:
  lVar2 = DAT_027720b0;
  lVar1 = unaff_RDI[1];
  if (((char)lVar1 == '\0') || (*unaff_RDI == 0)) {
    if (*unaff_RDI == 0) {
      if (DAT_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      uVar5 = FUN_00e7b4e0();
      return uVar5;
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar5 = FUN_00d97540();
  if ((char)lVar1 == '\0') {
    return uVar5;
  }
  FUN_00d50b20();
  return uVar5;
}




// ============================================================
// @00c72610 — 721 bytes
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c7271a) */
/* WARNING: Removing unreachable block (ram,0x00c72723) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c72610(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  
  plVar6 = (longlong *)*unaff_RDI;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 == (longlong *)0x0) {
LAB_00c72658:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = unaff_RDI;
    if (cVar3 == '\0') goto LAB_00c72658;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00c7267f:
    uVar5 = FUN_00dd6320();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return uVar5;
  }
  if (*plVar6 != 0) goto LAB_00c7267f;
  plVar6 = (longlong *)*unaff_RDI;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c726e1;
  }
  unaff_RDI = &DAT_02802688;
LAB_00c726e1:
  lVar2 = DAT_027720b0;
  lVar1 = unaff_RDI[1];
  if (((char)lVar1 == '\0') || (*unaff_RDI == 0)) {
    if (*unaff_RDI == 0) {
      if (DAT_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      uVar5 = FUN_00e7bdb0();
      return uVar5;
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar5 = FUN_00d971f0();
  if ((char)lVar1 == '\0') {
    return uVar5;
  }
  FUN_00d50b20();
  return uVar5;
}




// ============================================================
// @01a18fb0 — 708 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01a19121) */
/* WARNING: Removing unreachable block (ram,0x01a1912a) */
/* WARNING: Removing unreachable block (ram,0x01a1923f) */
/* WARNING: Removing unreachable block (ram,0x01a19248) */
/* WARNING: Removing unreachable block (ram,0x01a190a3) */
/* WARNING: Removing unreachable block (ram,0x01a190ac) */

void FUN_01a18fb0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *local_48;
  char local_40;
  
  uVar6 = param_2;
  uVar4 = FUN_01e3f820();
  FUN_01a18ed0();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*unaff_RDI + 0x9a0))();
  cVar1 = (**(code **)(*unaff_RDI + 0xb58))();
  uVar5 = (**(code **)(*unaff_RDI + 0xb20))();
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))(param_1,param_2);
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = FUN_01d91db0();
  if (cVar2 != '\0') {
    (**(code **)(*local_48 + 0x3f0))(uVar4,uVar6,0,cVar1);
  }
  lVar3 = unaff_RDI[0x43];
  if (lVar3 == 0) {
    FUN_01a18460();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_01a18660();
    }
    lVar3 = unaff_RDI[0x43];
    if (lVar3 == 0) goto LAB_01a191da;
  }
  FUN_00d50b00();
  FUN_01d48ff0(uVar4,uVar6,uVar4,uVar6);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_01a191da:
  if (cVar1 != '\0') {
    (**(code **)(*local_48 + 0x3f8))(uVar4,uVar6,(int)unaff_RDI[0x2e],uVar5);
  }
  FUN_01d48390();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d85680 — 696 bytes
// str: ""addObject:""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d858cc) */
/* WARNING: Removing unreachable block (ram,0x01d85714) */
/* WARNING: Removing unreachable block (ram,0x01d8571d) */
/* WARNING: Removing unreachable block (ram,0x01d856d9) */
/* WARNING: Removing unreachable block (ram,0x01d856e2) */
/* WARNING: Removing unreachable block (ram,0x01d85807) */
/* WARNING: Removing unreachable block (ram,0x01d858a3) */
/* WARNING: Removing unreachable block (ram,0x01d858b0) */

void FUN_01d85680(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_40;
  char local_38;
  
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_01ca6a90();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01cae190();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  if (*(int *)(local_40 + 0xc) < 1) {
    lVar3 = 0;
    bVar2 = false;
  }
  else {
    lVar4 = 0;
    bVar2 = false;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar4 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01ca74b0();
      if (lVar5 == local_40) {
        lVar3 = lVar5;
        if ((!bVar2) && (lVar5 != 0)) {
          if (local_38 != '\0') goto LAB_01d857f7;
          FUN_00d50b00();
          goto LAB_01d85835;
        }
joined_r0x01d8584a:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar5 != 0)) {
            FUN_00d50b20();
          }
LAB_01d85835:
          bVar2 = true;
          goto joined_r0x01d8584a;
        }
        if ((bVar2) && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_01d857f7:
        local_38 = '\0';
        bVar2 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00e1cfc0();
      (*(code *)PTR__objc_msgSend_024a9998)();
      lVar4 = lVar4 + 1;
      lVar5 = lVar3;
    } while (lVar4 < *(int *)(local_40 + 0xc));
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_release_024a99a0)();
  if ((bVar2) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e8dcc0 — 690 bytes
// str: ""GNValue""
// str: ""GNString""
// str: ""%I,%I""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e8dcc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  plVar6 = (longlong *)*param_2;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 == (longlong *)0x0) {
LAB_00e8dd0d:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar3 == '\0') goto LAB_00e8dd0d;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00e8dd34:
    uVar5 = FUN_00dd63c0();
    local_38 = 2;
    local_34 = (undefined4)uVar5;
    local_40 = &DAT_024c3df0;
    local_30 = (undefined4)(uVar5 >> 0x20);
    FUN_00d8cb40(uVar5 >> 0x20,&local_40);
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_00e8dd34;
  plVar6 = (longlong *)*param_2;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00e8ddbd;
  }
  param_2 = &DAT_02802688;
LAB_00e8ddbd:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01ca2ec0 — 674 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ca2ec0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t in_ECX;
  longlong **pplVar6;
  double dVar7;
  longlong local_50;
  char local_48;
  double local_40;
  longlong *local_38;
  char local_30;
  
  lVar2 = DAT_027ed440;
  local_40 = (double)param_1;
  if (DAT_027ed440 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_50 = lVar2;
  local_48 = '\x01';
  pplVar6 = &local_38;
  FUN_01cacbe0(param_1,&local_50);
  plVar1 = local_38;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d4348 = FUN_00d4fe50();
    _DAT_026d4330 = "GNValue";
    _DAT_026d4338 = 0x18;
    in_ECX = 0x53cb0;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01ca2f47;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_01ca2f47:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00dd6320();
    FUN_01a8c310();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_016c25f0(local_40);
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    dVar7 = (double)FUN_00e7c860();
    FUN_01a8c310();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_016c26c0(local_40 - dVar7);
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01a8fc90(local_40);
  return;
}




// ============================================================
// @01a8a330 — 657 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01a8a330(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar6;
  undefined4 uVar7;
  longlong local_70;
  char local_68;
  undefined4 local_5c;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_70 = *param_1;
  local_68 = '\0';
  pplVar6 = &local_40;
  local_5c = param_3;
  (**(code **)(**(longlong **)(unaff_RSI + 0xe8) + 0x390))(param_1,&local_70);
  plVar1 = local_40;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar1 == (longlong *)0x0) {
    pplVar6 = &DAT_02802688;
    plVar1 = DAT_02802688;
    cVar3 = DAT_02802690;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar6 = &DAT_02802688;
    }
    plVar1 = *pplVar6;
    cVar3 = *(char *)(pplVar6 + 1);
  }
  if (cVar3 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar2 = *param_1;
    if ((char)param_1[1] == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  else {
    uVar5 = FUN_00dd6320();
    plVar1 = *(longlong **)(unaff_RSI + 0xe8);
    uVar7 = FUN_00dd67f0(uVar5 & 0xffffffff00000000);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar7 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x388))(uVar7,&local_50);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01d133b0 — 648 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d13412) */

void FUN_01d133b0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
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
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  if (local_40 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (local_38 != '\0') {
      plVar5 = (longlong *)0x0;
    }
  }
  else {
    plVar5 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar1 = DAT_027e7c20;
  if (plVar5 != (longlong *)0x0) {
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar1;
    local_88 = '\x01';
    FUN_01ccaae0(param_1,&local_90);
    lVar1 = DAT_027edfc8;
    bVar6 = true;
    if (local_40 == (longlong *)0x0) {
      if (DAT_027edfc8 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_01ccaae0(param_1,&local_80);
      bVar6 = local_a0 != 0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0xa20))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027ef7e8;
      if (DAT_027ef7e8 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar1;
      local_68 = '\x01';
      (**(code **)(*plVar5 + 0xa10))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_001f8a30();
      (**(code **)(*plVar5 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = plVar5;
      if (cVar2 == '\0') {
        plVar4 = DAT_02802688;
      }
      if (plVar4 != (longlong *)0x0) {
        local_58 = 0;
        (**(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x10))();
        FUN_00d50b00();
        local_58 = '\x01';
        local_60 = (longlong *)(unaff_RDI + 0x48);
        (**(code **)(*plVar5 + 0xae0))();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          (**(code **)(*local_60 + 0x10))();
          FUN_00d50b20();
        }
        uVar3 = FUN_01e05890();
        *(undefined1 *)(unaff_RDI + 0x58) = uVar3;
      }
    }
  }
  FUN_01cc9ce0();
  if ((local_40 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01ba2680 — 632 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ba2772) */
/* WARNING: Removing unreachable block (ram,0x01ba277b) */
/* WARNING: Removing unreachable block (ram,0x01ba289b) */
/* WARNING: Removing unreachable block (ram,0x01ba28a8) */

ulonglong FUN_01ba2680(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  void *pvVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  uVar3 = (**(code **)(*unaff_RDI + 0x688))();
  uVar5 = (ulonglong)uVar3;
  if (((char)uVar3 != '\0') && (param_2 != '\0')) {
    plVar1 = (longlong *)unaff_RDI[0x1c];
    (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x960))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    fVar6 = (float)(**(code **)(*plVar1 + 0x380))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    uVar7 = (**(code **)(*unaff_RDI + 0x3f8))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      uVar7 = FUN_00d50b00();
    }
    if (0 < *(int *)(local_48 + 0xc)) {
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + uVar5 * 8);
        if (lVar2 != 0) {
          uVar7 = FUN_00d50b00();
        }
        local_70 = '\0';
        local_78 = lVar2;
        FUN_019a54a0(uVar7,&local_78);
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01259600(fVar6);
        }
        else {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar8 = (float)FUN_00d459e0();
          FUN_01259600(fVar8 + fVar6);
          uVar7 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar7 = FUN_00d50b20();
        }
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)*(int *)(local_48 + 0xc));
    }
    FUN_00d50b20();
    uVar5 = CONCAT71((int7)(uVar5 >> 8),(char)uVar3);
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @01a89190 — 628 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01a89257) */
/* WARNING: Removing unreachable block (ram,0x01a8925c) */

void FUN_01a89190(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong **pplVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RSI + 0x630))();
  if (local_38 == (longlong *)0x0) {
    bVar6 = true;
  }
  else {
    (**(code **)(*unaff_RSI + 0x630))();
    bVar6 = *(int *)((longlong)local_48 + 0xc) != 1;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) goto LAB_01a8931a;
  (**(code **)(*unaff_RSI + 0x630))();
  FUN_00d23310();
  plVar1 = local_38;
  local_40 = local_30 != '\0';
  local_48 = local_38;
  if ((bool)local_40) {
    local_30 = '\0';
  }
  FUN_0006e1c0();
  if (plVar1 == (longlong *)0x0) {
LAB_01a8928c:
    pplVar3 = &DAT_02802688;
    plVar5 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01a8929c;
LAB_01a892af:
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01a8928c;
    pplVar3 = &local_48;
    plVar5 = local_48;
    if (local_40 == '\0') goto LAB_01a892af;
LAB_01a8929c:
    *(undefined1 *)(pplVar3 + 1) = 0;
  }
  if ((local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    plVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    return;
  }
LAB_01a8931a:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @00ddd990 — 615 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00ddd990(void)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  double *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar13;
  int iVar14;
  double local_58;
  int local_3c;
  
  lVar3 = unaff_RDI[4];
  cVar5 = (**(code **)(*unaff_RDI + 0x388))();
  if (cVar5 == '\0') {
    (**(code **)(*unaff_RDI + 0x3a8))();
    lVar4 = unaff_RDI[4];
    iVar9 = (**(code **)(*unaff_RDI + 0x390))();
    if ((int)lVar4 < iVar9) {
      lVar4 = unaff_RDI[4];
      iVar9 = (**(code **)(*unaff_RDI + 0x390))();
      if ((int)lVar4 < iVar9) {
        sVar7 = FUN_00d8cbc0();
        bVar2 = false;
        bVar6 = false;
        if (sVar7 != 0x2b) {
          if (sVar7 != 0x2d) goto LAB_00ddda23;
          bVar6 = true;
        }
        bVar2 = bVar6;
        *(int *)(unaff_RDI + 4) = (int)unaff_RDI[4] + 1;
      }
      else {
        bVar2 = false;
      }
LAB_00ddda23:
      lVar4 = unaff_RDI[4];
      iVar9 = (**(code **)(*unaff_RDI + 0x390))();
      if ((int)lVar4 < iVar9) {
        local_58 = 0.0;
        bVar6 = false;
        bVar13 = false;
        iVar9 = 0;
        do {
          uVar8 = FUN_00d8cbc0();
          if ((ushort)(uVar8 - 0x30) < 10) {
            if (local_58 < _DAT_023dfa20) {
              local_58 = local_58 * _DAT_0241eeb8 + (double)(int)(uVar8 - 0x30);
              bVar6 = true;
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar9 = iVar9 + (char)-bVar13;
          }
          else if ((bVar13) || (bVar13 = true, uVar8 != 0x2e)) break;
          iVar14 = (int)unaff_RDI[4] + 1;
          *(int *)(unaff_RDI + 4) = iVar14;
          iVar10 = (**(code **)(*unaff_RDI + 0x390))();
        } while (iVar14 < iVar10);
        if (bVar6) {
          lVar4 = unaff_RDI[4];
          iVar14 = (**(code **)(*unaff_RDI + 0x390))();
          uVar12 = (undefined7)((ulonglong)unaff_RDI >> 8);
          iVar10 = iVar9;
          if (((int)lVar4 < iVar14) && ((uVar8 | 0x20) == 0x65)) {
            *(int *)(unaff_RDI + 4) = (int)unaff_RDI[4] + 1;
            cVar5 = (**(code **)(*unaff_RDI + 0x410))();
            if (cVar5 == '\0') goto LAB_00dddaf9;
            if ((local_58 != 0.0) || (NAN(local_58))) {
              if (iVar9 < 1) {
                if ((iVar9 == 0) || (iVar10 = -0x80000000, -0x80000000 - iVar9 <= local_3c))
                goto LAB_00dddba5;
              }
              else {
                iVar10 = 0x7fffffff;
                if (local_3c <= 0x7fffffff - iVar9) {
LAB_00dddba5:
                  iVar10 = local_3c + iVar9;
                }
              }
            }
          }
          uVar11 = CONCAT71(uVar12,1);
          if (unaff_RSI != (double *)0x0) {
            uVar11 = CONCAT71(uVar12,1);
            if (((local_58 != 0.0) || (NAN(local_58))) && (iVar10 != 0)) {
              dVar1 = (double)___exp10(SUB84((double)iVar10,0));
              local_58 = local_58 * dVar1;
            }
            if (bVar2) {
              *unaff_RSI = (double)((ulonglong)local_58 ^ _DAT_023945b0);
            }
            else {
              *unaff_RSI = local_58;
            }
          }
          goto LAB_00dddb01;
        }
      }
LAB_00dddaf9:
      *(int *)(unaff_RDI + 4) = (int)lVar3;
    }
    else {
      *(int *)(unaff_RDI + 4) = (int)lVar3;
    }
  }
  uVar11 = 0;
LAB_00dddb01:
  return uVar11 & 0xffffffff;
}




// ============================================================
// @00dd8370 — 614 bytes
// ============================================================

ulonglong FUN_00dd8370(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *unaff_RDI;
  ulonglong uVar12;
  
  if ((*unaff_RDI == 0) || (iVar10 = FUN_00d8c7a0(), iVar10 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    cVar9 = FUN_00d8ca70();
    lVar2 = DAT_02784098;
    if (cVar9 == '(') {
      lVar1 = *unaff_RDI;
      if (DAT_02784098 != 0) {
        FUN_00d50b00();
      }
      cVar9 = FUN_00d90870();
      lVar3 = DAT_027840a0;
      uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if (cVar9 == '\0') {
        lVar1 = *unaff_RDI;
        if (DAT_027840a0 != 0) {
          FUN_00d50b00();
        }
        cVar9 = FUN_00d90870();
        lVar4 = DAT_027840a8;
        uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        if (cVar9 == '\0') {
          lVar1 = *unaff_RDI;
          if (DAT_027840a8 != 0) {
            FUN_00d50b00();
          }
          cVar9 = FUN_00d90870();
          lVar5 = DAT_027840b0;
          uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
          if (cVar9 == '\0') {
            lVar1 = *unaff_RDI;
            if (DAT_027840b0 != 0) {
              FUN_00d50b00();
            }
            cVar9 = FUN_00d90870();
            lVar6 = DAT_027840b8;
            uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
            if (cVar9 == '\0') {
              lVar1 = *unaff_RDI;
              if (DAT_027840b8 != 0) {
                FUN_00d50b00();
              }
              cVar9 = FUN_00d90870();
              lVar7 = DAT_027840c0;
              uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
              if (cVar9 == '\0') {
                lVar1 = *unaff_RDI;
                if (DAT_027840c0 != 0) {
                  FUN_00d50b00();
                }
                cVar9 = FUN_00d90870();
                lVar8 = DAT_027840c8;
                uVar12 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
                if (cVar9 == '\0') {
                  if (DAT_027840c8 != 0) {
                    FUN_00d50b00();
                  }
                  uVar11 = FUN_00d90870();
                  uVar12 = (ulonglong)uVar11;
                  if (lVar8 != 0) {
                    FUN_00d50b20();
                  }
                }
                if (lVar7 != 0) {
                  FUN_00d50b20();
                }
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar12 & 0xffffffff;
}




// ============================================================
// @01d13800 — 612 bytes
// ============================================================

void FUN_01d13800(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  lVar6 = DAT_028b7f48;
  if ((DAT_028b7f48 == 0) || (DAT_028b7f51 == '\0')) {
    FUN_00e8cb50();
    lVar6 = DAT_027e7c20;
    if (DAT_028b7f48 == 0) {
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027057d0;
      local_38 = lVar6;
      if (DAT_027057d0 != 0) {
        FUN_00d50b00();
      }
      lVar6 = DAT_027ef7f0;
      if (DAT_027ef7f0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027ef7f8;
      if (DAT_027ef7f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027ef800;
      if (DAT_027ef800 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = lVar6;
      local_58 = lVar3;
      local_50 = lVar4;
      FUN_007f7a00(&local_60,&local_68,&local_58,&local_50);
      FUN_000b6830();
      lVar5 = DAT_028b7f48;
      if (DAT_028b7f48 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar5 = local_48;
        }
        bVar1 = DAT_028b7f48 != 0;
        DAT_028b7f48 = lVar5;
        if (bVar1) {
          FUN_00d50b20();
          lVar5 = local_48;
        }
      }
      if ((lVar5 != 0) && (DAT_028b7f50 == '\0')) {
        DAT_028b7f50 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_48;
      }
      if ((local_40 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_007f76c0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      DAT_028b7f51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7f51 = '\x01';
      FUN_00e8cb70();
    }
    lVar6 = DAT_028b7f48;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar6 == 0) {
      lVar6 = 0;
      goto LAB_01d13a3c;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01d13a3c:
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c74170 — 606 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c742cd) */
/* WARNING: Removing unreachable block (ram,0x00c74325) */
/* WARNING: Removing unreachable block (ram,0x00c7432a) */
/* WARNING: Removing unreachable block (ram,0x00c74332) */
/* WARNING: Removing unreachable block (ram,0x00c74337) */
/* WARNING: Removing unreachable block (ram,0x00c742d3) */
/* WARNING: Removing unreachable block (ram,0x00c742d8) */
/* WARNING: Removing unreachable block (ram,0x00c742e3) */
/* WARNING: Removing unreachable block (ram,0x00c7423d) */
/* WARNING: Removing unreachable block (ram,0x00c74246) */
/* WARNING: Removing unreachable block (ram,0x00c741fd) */
/* WARNING: Removing unreachable block (ram,0x00c74206) */
/* WARNING: Removing unreachable block (ram,0x00c74251) */
/* WARNING: Removing unreachable block (ram,0x00c7425a) */
/* WARNING: Removing unreachable block (ram,0x00c7435c) */
/* WARNING: Removing unreachable block (ram,0x00c74365) */
/* WARNING: Removing unreachable block (ram,0x00c741b5) */
/* WARNING: Removing unreachable block (ram,0x00c741be) */
/* WARNING: Removing unreachable block (ram,0x00c74304) */
/* WARNING: Removing unreachable block (ram,0x00c74311) */

void FUN_00c74170(void)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  FUN_00c8e710();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00daa540();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar1 = (**(code **)(*unaff_RSI + 0x618))();
  *(undefined1 *)(unaff_RSI + 0xd) = uVar1;
  (**(code **)(*unaff_RSI + 0x608))();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    (**(code **)(*unaff_RSI + 0x608))();
    (**(code **)(*local_90 + 0x368))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = 0;
  if (((char)unaff_RSI[0xd] != '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    lVar2 = local_40;
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dbdd40 — 601 bytes
// ============================================================

void FUN_01dbdd40(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  uVar6 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x9e8))();
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d48a10();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x9e8))();
  (**(code **)(*unaff_RDI + 0x960))();
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
  local_48 = local_78;
  FUN_01d44870(param_2 + DAT_023b8b2c,&local_48);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  fVar3 = (float)(**(code **)(*unaff_RDI + 0xb48))();
  fVar4 = (float)(**(code **)(*unaff_RDI + 0xb48))();
  (**(code **)(*unaff_RDI + 0x9e8))();
  fVar5 = (float)FUN_01d43ca0();
  (**(code **)(*plVar1 + 0x3f0))
            (fVar3 + (float)uVar6,(float)((ulonglong)uVar6 >> 0x20) + fVar4 + fVar5);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @018bc9c0 — 591 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_018bc9c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  plVar1 = (longlong *)*param_2;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_018bca16;
  }
  param_2 = &DAT_02802688;
LAB_018bca16:
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined4 *)(puVar4 + 7) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *puVar4 = &DAT_02613a08;
    pVar6 = 0;
    puVar4[10] = 0x100000000;
    (*DAT_02613a20)();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_01822120();
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00dd6320();
    FUN_018bce30();
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}




// ============================================================
// @016601d0 — 585 bytes
// str: ""GNValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_016601d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  plVar1 = (longlong *)*param_2;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01660226;
  }
  param_2 = &DAT_02802688;
LAB_01660226:
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined4 *)(puVar4 + 7) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    pVar6 = 0x2616568;
    *puVar4 = &DAT_02616568;
    puVar4[10] = 0;
    (*DAT_02616580)();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_01822120();
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00dd63c0();
    FUN_0190b370();
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}




// ============================================================
// @00dd9100 — 578 bytes
// str: ""uploading %3.0f %%: %@""
// ============================================================

void FUN_00dd9100(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar5;
  undefined4 uVar6;
  longlong local_b0;
  char local_a8 [8];
  longlong *local_a0;
  char local_98;
  float local_8c;
  longlong local_88;
  char local_80;
  longlong *local_78;
  undefined4 local_70;
  float local_6c;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (unaff_RDI[0x1b] != unaff_RSI) {
    unaff_RDI[0x1b] = unaff_RSI;
    FUN_00e922a0();
    if (local_78 != (longlong *)0x0) {
      iVar1 = *(int *)(unaff_RDI[0x19] + 0xc);
      if ((char)local_70 != '\0') {
        (**(code **)(*local_78 + 0x10))();
        FUN_00d50b20();
      }
      if (iVar1 != 0) {
        FUN_00e922a0();
        plVar3 = local_a0;
        FUN_00d50b00();
        local_8c = (float)(**(code **)(*unaff_RDI + 0x390))();
        FUN_00d23310();
        pcVar4 = local_38;
        if (local_a8[0] != '\0') {
          pcVar4 = local_a8;
        }
        local_38[0] = local_a8[0];
        *pcVar4 = '\0';
        if ((local_a8[0] != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = *(longlong *)(local_b0 + 0x20);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        fVar5 = local_8c * DAT_023908e0;
        local_70 = 2;
        local_78 = (longlong *)&DAT_024ff418;
        local_60 = 0;
        local_6c = fVar5;
        if (lVar2 != 0) {
          fVar5 = (float)FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar2;
        uVar6 = FUN_00d8cb40(fVar5,&local_78);
        local_48 = local_88;
        local_40 = 0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            uVar6 = FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_40 = '\x01';
        (**(code **)(*plVar3 + 0x20))(uVar6,&local_48);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_78 = (longlong *)&DAT_024ff418;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          (**(code **)(*local_a0 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ============================================================
// @00e8f8c0 — 566 bytes
// ============================================================

void FUN_00e8f8c0(pthread_key_t param_1,undefined8 param_2,mach_vm_size_t param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  vm_map_t vVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_40;
  char local_38;
  
  pvVar7 = _pthread_getspecific(param_1);
  if ((pvVar7 == (void *)0x0) || (*(longlong *)((longlong)pvVar7 + 0x58) == 0)) {
    FUN_00da5ad0();
    cVar4 = *(char *)(local_40 + 0x18);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      lVar10 = 0;
      do {
        uVar1 = (&DAT_028026e8)[lVar10 * 0x1c];
        lVar11 = (&DAT_028026d0)[lVar10 * 7];
        if (lVar11 == 0) {
LAB_00e8f930:
          (&DAT_028026f0)[lVar10 * 7] = 0;
          (&DAT_028026f8)[lVar10 * 7] = 0;
        }
        else {
          bVar3 = false;
          do {
            if (*(longlong *)(lVar11 + 8) != 0) {
              uVar5 = FUN_00e31390();
              do {
                if (((uVar5 & 1) != 0) || ((uVar5 >> 1 & 0x7fff) < (uint)uVar1)) {
                  lVar11 = *(longlong *)(lVar11 + 0x10);
                  goto joined_r0x00e8f987;
                }
                vVar9 = 1;
                cVar4 = FUN_00e314a0(1,uVar5 | 1);
              } while (cVar4 == '\0');
              *(undefined8 *)(lVar11 + 8) = 0;
              FUN_00e314f0();
              if (DAT_028026b8 == 0) {
                _mach_vm_deallocate(vVar9,0x10000,param_3);
              }
              else {
                FUN_00e91b20();
              }
            }
            if (!bVar3) {
              (&DAT_028026f0)[lVar10 * 7] = lVar11;
              bVar3 = true;
            }
            lVar11 = *(longlong *)(lVar11 + 0x10);
            (&DAT_028026f8)[lVar10 * 7] = lVar11;
joined_r0x00e8f987:
          } while (lVar11 != 0);
          if (!bVar3) goto LAB_00e8f930;
        }
        lVar11 = DAT_028026b0;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x23);
      while (iVar6 = FUN_00e31390(), iVar6 < *(int *)(lVar11 + 0xc)) {
        FUN_00e91340();
      }
      FUN_00e8fb20();
      puVar8 = (undefined8 *)FUN_00e313b0();
      while (puVar8 != (undefined8 *)0x0) {
        while( true ) {
          puVar2 = (undefined8 *)*puVar8;
          vVar9 = 1;
          cVar4 = FUN_00e31450(1,puVar2);
          if (cVar4 != '\0') break;
          if (puVar8 == (undefined8 *)0x0) {
            return;
          }
        }
        _mach_vm_deallocate(vVar9,puVar8[1],param_3);
        puVar8 = puVar2;
      }
    }
  }
  return;
}




// ============================================================
// @01b9c8a0 — 555 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b9c8d4) */
/* WARNING: Removing unreachable block (ram,0x01b9c8dd) */

void FUN_01b9c8a0(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  
  FUN_01b7c2c0();
  if (*(char *)(unaff_RDI + 0x213) == '\0') {
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_0013de80();
  if (plVar1 == (longlong *)0x0) {
LAB_01b9c91d:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b9c91d;
  }
  lVar2 = unaff_RSI[1];
  if (((char)lVar2 == '\0') || (*unaff_RSI == 0)) {
    if (*unaff_RSI == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01b9c7d0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    if (*(longlong *)(unaff_RDI + 0x1f8) != 0) goto LAB_01b9c996;
LAB_01b9ca26:
    local_58 = '\0';
    local_60 = 0;
  }
  else {
    local_68 = '\0';
    if (*(longlong *)(unaff_RDI + 0x1f8) == 0) goto LAB_01b9ca26;
LAB_01b9c996:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510b20(0,param_2,0,0);
    if (local_58 != '\0') {
      local_40 = local_60;
      local_58 = '\0';
      goto LAB_01b9ca4f;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      local_40 = local_60;
      goto LAB_01b9ca4f;
    }
  }
  local_40 = 0;
LAB_01b9ca4f:
  FUN_01b82620();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b9cc10 — 555 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b9cc44) */
/* WARNING: Removing unreachable block (ram,0x01b9cc4d) */

void FUN_01b9cc10(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  
  FUN_01b7c310();
  if (*(char *)(unaff_RDI + 0x213) == '\0') {
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_0013de80();
  if (plVar1 == (longlong *)0x0) {
LAB_01b9cc8d:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b9cc8d;
  }
  lVar2 = unaff_RSI[1];
  if (((char)lVar2 == '\0') || (*unaff_RSI == 0)) {
    if (*unaff_RSI == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01b9c7d0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    if (*(longlong *)(unaff_RDI + 0x1f8) != 0) goto LAB_01b9cd06;
LAB_01b9cd96:
    local_58 = '\0';
    local_60 = 0;
  }
  else {
    local_68 = '\0';
    if (*(longlong *)(unaff_RDI + 0x1f8) == 0) goto LAB_01b9cd96;
LAB_01b9cd06:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510b20(0,param_2,0,0);
    if (local_58 != '\0') {
      local_40 = local_60;
      local_58 = '\0';
      goto LAB_01b9cdbf;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      local_40 = local_60;
      goto LAB_01b9cdbf;
    }
  }
  local_40 = 0;
LAB_01b9cdbf:
  FUN_01b82620();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e90c20 — 551 bytes
// ============================================================

ulonglong FUN_00e90c20(void)

{
  ulonglong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = DAT_028026e0;
  if (((((((((DAT_028026e0 < unaff_RDI) && (uVar1 = DAT_02802718, DAT_02802718 < unaff_RDI)) &&
           (uVar1 = DAT_02802750, DAT_02802750 < unaff_RDI)) &&
          ((uVar1 = DAT_02802788, DAT_02802788 < unaff_RDI &&
           (uVar1 = DAT_028027c0, DAT_028027c0 < unaff_RDI)))) &&
         ((uVar1 = DAT_028027f8, DAT_028027f8 < unaff_RDI &&
          ((uVar1 = DAT_02802830, DAT_02802830 < unaff_RDI &&
           (uVar1 = DAT_02802868, DAT_02802868 < unaff_RDI)))))) &&
        (uVar1 = DAT_028028a0, DAT_028028a0 < unaff_RDI)) &&
       (((((uVar1 = DAT_028028d8, DAT_028028d8 < unaff_RDI &&
           (uVar1 = DAT_02802910, DAT_02802910 < unaff_RDI)) &&
          (uVar1 = DAT_02802948, DAT_02802948 < unaff_RDI)) &&
         (((uVar1 = DAT_02802980, DAT_02802980 < unaff_RDI &&
           (uVar1 = DAT_028029b8, DAT_028029b8 < unaff_RDI)) &&
          ((uVar1 = DAT_028029f0, DAT_028029f0 < unaff_RDI &&
           ((uVar1 = DAT_02802a28, DAT_02802a28 < unaff_RDI &&
            (uVar1 = DAT_02802a60, DAT_02802a60 < unaff_RDI)))))))) &&
        ((uVar1 = DAT_02802a98, DAT_02802a98 < unaff_RDI &&
         (((uVar1 = DAT_02802ad0, DAT_02802ad0 < unaff_RDI &&
           (uVar1 = DAT_02802b08, DAT_02802b08 < unaff_RDI)) &&
          (uVar1 = DAT_02802b40, DAT_02802b40 < unaff_RDI)))))))) &&
      ((((uVar1 = DAT_02802b78, DAT_02802b78 < unaff_RDI &&
         (uVar1 = DAT_02802bb0, DAT_02802bb0 < unaff_RDI)) &&
        (((uVar1 = DAT_02802be8, DAT_02802be8 < unaff_RDI &&
          ((uVar1 = DAT_02802c20, DAT_02802c20 < unaff_RDI &&
           (uVar1 = DAT_02802c58, DAT_02802c58 < unaff_RDI)))) &&
         (uVar1 = DAT_02802c90, DAT_02802c90 < unaff_RDI)))) &&
       ((((uVar1 = DAT_02802cc8, DAT_02802cc8 < unaff_RDI &&
          (uVar1 = DAT_02802d00, DAT_02802d00 < unaff_RDI)) &&
         (uVar1 = DAT_02802d38, DAT_02802d38 < unaff_RDI)) &&
        ((uVar1 = DAT_02802d70, DAT_02802d70 < unaff_RDI &&
         (uVar1 = DAT_02802da8, DAT_02802da8 < unaff_RDI)))))))) &&
     ((uVar1 = DAT_02802de0, DAT_02802de0 < unaff_RDI &&
      ((uVar1 = DAT_02802e18, DAT_02802e18 < unaff_RDI &&
       (uVar1 = DAT_02802e50, DAT_02802e50 < unaff_RDI)))))) {
    uVar1 = ((ulonglong)(&UNK_0000400f + unaff_RDI) & 0xffffffffffffc000) - 0x10;
  }
  return uVar1;
}




// ============================================================
// @01ba1c90 — 550 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ba1d85) */
/* WARNING: Removing unreachable block (ram,0x01ba1d8e) */
/* WARNING: Removing unreachable block (ram,0x01ba1cf7) */
/* WARNING: Removing unreachable block (ram,0x01ba1d00) */

void FUN_01ba1c90(void)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong local_48;
  char local_40;
  
  (**(code **)(*unaff_RDI + 0x3f8))();
  lVar5 = local_48;
  if (local_48 == 0) {
    bVar2 = 1;
    lVar5 = 0;
    bVar3 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar2 = 0;
    bVar3 = true;
  }
  else {
    bVar2 = 0;
    bVar3 = true;
  }
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01ba19d0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  FUN_01a13090();
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_48 == lVar5) {
    if ((bool)(bVar2 & local_48 != 0)) {
      bVar4 = true;
      if (local_40 != '\0') goto LAB_01ba1e30;
      bVar3 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != '\0') {
      bVar4 = true;
      lVar5 = local_48;
      if (bVar3) {
        FUN_00d50b20();
      }
      goto LAB_01ba1e30;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar4 = true;
    lVar5 = local_48;
    if (!bVar3) goto LAB_01ba1e30;
    FUN_00d50b20();
    bVar3 = true;
  }
  bVar4 = bVar3;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01ba1e30:
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01ba1700();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  if (bVar4) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b9ee80 — 550 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b9ef75) */
/* WARNING: Removing unreachable block (ram,0x01b9ef7e) */
/* WARNING: Removing unreachable block (ram,0x01b9eee7) */
/* WARNING: Removing unreachable block (ram,0x01b9eef0) */

void FUN_01b9ee80(void)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong local_48;
  char local_40;
  
  (**(code **)(*unaff_RDI + 0x3f8))();
  lVar5 = local_48;
  if (local_48 == 0) {
    bVar2 = 1;
    lVar5 = 0;
    bVar3 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar2 = 0;
    bVar3 = true;
  }
  else {
    bVar2 = 0;
    bVar3 = true;
  }
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01b9ebc0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  FUN_01a13090();
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_48 == lVar5) {
    if ((bool)(bVar2 & local_48 != 0)) {
      bVar4 = true;
      if (local_40 != '\0') goto LAB_01b9f020;
      bVar3 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != '\0') {
      bVar4 = true;
      lVar5 = local_48;
      if (bVar3) {
        FUN_00d50b20();
      }
      goto LAB_01b9f020;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar4 = true;
    lVar5 = local_48;
    if (!bVar3) goto LAB_01b9f020;
    FUN_00d50b20();
    bVar3 = true;
  }
  bVar4 = bVar3;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01b9f020:
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01b9e8f0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  if (bVar4) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e8f2a0 — 548 bytes
// ============================================================

void FUN_00e8f2a0(ulonglong *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulonglong uVar4;
  size_t sVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  
  FUN_00e8f270();
  if (DAT_028026c8 == '\0') {
    param_1 = &DAT_023e1a30;
    puVar9 = &DAT_028026ec;
    uVar10 = 0;
    do {
      *(undefined8 *)(puVar9 + -0x1c) = 0;
      if (uVar10 < 0x10) {
        uVar8 = *param_1;
        uVar11 = 1;
        uVar12 = uVar8;
        if (uVar8 < 0xffe1) {
          uVar4 = 0xffe0 / (uVar8 & 0xffffffff);
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar8 = *(ulonglong *)(&DAT_023e1ab0 + (ulonglong)((int)uVar10 - 0x10) * 8);
        uVar12 = uVar8 - 0x10;
        if (uVar8 < 0x10001) {
          uVar11 = 0;
          uVar4 = 0x10000 / (uVar8 & 0xffffffff);
        }
        else {
          uVar4 = 0;
          uVar11 = 0;
        }
      }
      *(ulonglong *)(puVar9 + -0x14) = uVar8;
      *(ulonglong *)(puVar9 + -0xc) = uVar12;
      uVar1 = (ushort)uVar4;
      *(ushort *)(puVar9 + -4) = uVar1;
      *puVar9 = uVar11;
      if (uVar1 < 8) {
        uVar7 = 1;
      }
      else {
        uVar7 = (undefined2)((uVar4 & 0xffff) >> 2);
      }
      uVar6 = 0x10;
      if (uVar1 < 0x40) {
        uVar6 = uVar7;
      }
      *(undefined2 *)(puVar9 + -2) = uVar6;
      uVar10 = uVar10 + 1;
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 0x38;
    } while (uVar10 != 0x23);
    DAT_028026c8 = '\x01';
  }
  sVar5 = (size_t)param_1;
  if (DAT_02802e80 == 0) {
    DAT_02802e80 = 0x10000;
    DAT_02802e88 = 0xaa9;
  }
  puVar2 = _malloc(sVar5);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_00e8f250();
  }
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  DAT_028026a8 = puVar2;
  puVar2 = _malloc(sVar5);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_00e8f250();
  }
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  DAT_028026b0 = puVar2;
  FUN_00e31530();
  puVar2 = _malloc(sVar5);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_00e8f250();
  }
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  DAT_028026b8 = puVar2;
  FUN_00e31530();
  FUN_00e31530();
  pvVar3 = _malloc(sVar5);
  if (pvVar3 == (void *)0x0) {
    FUN_00e8f250();
  }
  FUN_00e91180();
  DAT_028026a0 = pvVar3;
  FUN_00e39b30();
  return;
}




// ============================================================
// @00e91580 — 545 bytes
// ============================================================

int * FUN_00e91580(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  uint local_48 [2];
  undefined4 local_40;
  int local_3c;
  ulonglong local_38;
  
  uVar1 = *(ushort *)((longlong)unaff_RSI + 0x1a);
  piVar6 = (int *)*unaff_RSI;
  local_40 = param_1;
  local_3c = param_2;
  do {
    if (piVar6 == (int *)0x0) {
LAB_00e91626:
      uVar5 = FUN_00e917b0();
      piVar6 = (int *)FUN_00e91940(local_48,uVar5);
      if (piVar6 == (int *)0x0) {
        if ((char)local_40 == '\0') {
          piVar6 = (int *)FUN_00e912b0();
        }
        else {
          piVar6 = (int *)FUN_00e91a90();
        }
        piVar6[1] = local_3c;
        *(undefined8 *)(piVar6 + 2) = uVar5;
        piVar6[4] = 0;
        piVar6[5] = 0;
        uVar4 = FUN_00e31390();
        *piVar6 = (uVar4 & 0x10000) + (*(uint *)(unaff_RSI + 3) & 0x7fff) * 2 + 1;
        puVar2 = *(undefined8 **)(piVar6 + 2);
        if (puVar2 != (undefined8 *)0x0) {
          uVar1 = *(ushort *)(unaff_RSI + 3);
          uVar7 = 0;
          if (1 < uVar1) {
            do {
              uVar4 = (int)uVar7 + 1;
              *(uint *)((longlong)puVar2 +
                       (ulonglong)(byte)(&DAT_028026ec)[(longlong)piVar6[1] * 0x38] * 0x10 +
                       uVar7 * (&DAT_028026d8)[(longlong)piVar6[1] * 7] + 0x10) = uVar4;
              uVar7 = (ulonglong)(uVar4 & 0xffff);
            } while ((int)(uVar4 & 0xffff) < (int)(uVar1 - 1));
            uVar7 = (ulonglong)(uVar4 & 0xffff);
          }
          *(undefined4 *)
           ((longlong)puVar2 +
           (ulonglong)(byte)(&DAT_028026ec)[(longlong)piVar6[1] * 0x38] * 0x10 +
           uVar7 * (&DAT_028026d8)[(longlong)piVar6[1] * 7] + 0x10) = 0x7fff;
          if (*(char *)((longlong)unaff_RSI + 0x1c) != '\0') {
            *puVar2 = piVar6;
          }
        }
        local_38 = FUN_00e313b0();
        *(ulonglong *)(piVar6 + 4) = local_38;
        cVar3 = FUN_00e31450(3,piVar6);
        while (cVar3 == '\0') {
          *(ulonglong *)(piVar6 + 4) = local_38;
          cVar3 = FUN_00e31450(3,piVar6);
        }
      }
      return piVar6;
    }
    uVar4 = FUN_00e31390();
    local_38 = CONCAT44(local_38._4_4_,uVar4);
    if ((uVar4 & 1) == 0) {
      do {
        if ((uVar4 >> 1 & 0x7fff) < (uint)uVar1) break;
        uVar4 = uVar4 | 1;
        cVar3 = FUN_00e314a0(1,uVar4);
        if (cVar3 != '\0') goto LAB_00e91608;
        uVar4 = (uint)local_38;
      } while ((local_38 & 1) == 0);
    }
    uVar4 = uVar4 & 0xfffffffe;
LAB_00e91608:
    local_48[0] = uVar4;
    if ((uVar4 & 1) != 0) {
      if (piVar6 != (int *)0x0) {
        return piVar6;
      }
      goto LAB_00e91626;
    }
    piVar6 = *(int **)(piVar6 + 4);
  } while( true );
}




// ============================================================
// @01b9dd50 — 540 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b9dea6) */
/* WARNING: Removing unreachable block (ram,0x01b9deb3) */
/* WARNING: Removing unreachable block (ram,0x01b9def8) */
/* WARNING: Removing unreachable block (ram,0x01b9df01) */
/* WARNING: Removing unreachable block (ram,0x01b9df55) */
/* WARNING: Removing unreachable block (ram,0x01b9df62) */
/* WARNING: Removing unreachable block (ram,0x01b9dd9d) */
/* WARNING: Removing unreachable block (ram,0x01b9dda6) */
/* WARNING: Removing unreachable block (ram,0x01b9de31) */
/* WARNING: Removing unreachable block (ram,0x01b9de3a) */

void FUN_01b9dd50(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_38;
  char local_30;
  
  if ((*(int *)(unaff_RDI + 0x1f0) == 0) && (*(char *)(unaff_RDI + 0x1ec) == '\0')) {
    uVar2 = *(undefined4 *)(unaff_RDI + 0x170);
    *(undefined4 *)(unaff_RDI + 0x170) = 0;
    FUN_01d21c00();
    *(undefined4 *)(unaff_RDI + 0x170) = uVar2;
    lVar1 = DAT_027e5238;
  }
  else {
    FUN_01d21c00();
    lVar1 = DAT_027e5238;
  }
  DAT_027e5238 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    if (*(char *)(unaff_RDI + 0x1ec) == '\0') {
      uVar2 = FUN_01e3f820();
      uVar3 = FUN_01d526f0();
      uVar2 = FUN_00d05510(uVar2,param_2,uVar3);
      if (*(int *)(unaff_RDI + 0x1f0) == 0) {
        FUN_01d49110(uVar2,DAT_0239011c);
      }
      else {
        (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e8ffc0 — 535 bytes
// ============================================================

longlong * FUN_00e8ffc0(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong *plVar7;
  
  lVar5 = *(longlong *)(unaff_RDI + (longlong)param_1 * 8);
  uVar4 = FUN_00e31390();
joined_r0x00e8fffa:
  if ((uVar4 & 0xfffe) != 0) goto LAB_00e90010;
  lVar5 = FUN_00e91580(1,param_1);
  *(longlong *)(unaff_RDI + (longlong)param_1 * 8) = lVar5;
  uVar4 = FUN_00e31390();
  cVar3 = FUN_00e314a0(0,uVar4 & 0xfffffffe);
  while (cVar3 == '\0') {
    cVar3 = FUN_00e314a0(0,uVar4 & 0xfffffffe);
  }
  uVar4 = FUN_00e31390();
  if ((uVar4 & 0xfffe) == 0) {
    return (longlong *)0x0;
  }
  while( true ) {
    lVar2 = *(longlong *)(lVar5 + 8);
    lVar6 = (ulonglong)(byte)(&DAT_028026ec)[(longlong)*(int *)(lVar5 + 4) * 0x38] * 0x10 +
            (ulonglong)(uVar4 >> 0x11) * (&DAT_028026d8)[(longlong)*(int *)(lVar5 + 4) * 7];
    cVar3 = FUN_00e314a0(0,uVar4 + 0xfffe & 0xfffe |
                           uVar4 & 0x10001 | *(int *)(lVar2 + 0x10 + lVar6) << 0x11);
    if (cVar3 != '\0') break;
    if ((uVar4 & 0xfffe) == 0) {
      return (longlong *)0x0;
    }
  }
  plVar1 = (longlong *)(lVar2 + lVar6);
  plVar7 = plVar1 + 2;
  if ((&DAT_028026ec)[(longlong)*(int *)(lVar5 + 4) * 0x38] != '\0') goto LAB_00e901bb;
  *plVar1 = lVar5;
  goto LAB_00e901af;
LAB_00e90010:
  lVar2 = *(longlong *)(lVar5 + 8);
  lVar6 = (ulonglong)(byte)(&DAT_028026ec)[(longlong)*(int *)(lVar5 + 4) * 0x38] * 0x10 +
          (ulonglong)(uVar4 >> 0x11) * (&DAT_028026d8)[(longlong)*(int *)(lVar5 + 4) * 7];
  cVar3 = FUN_00e314a0(0,uVar4 + 0xfffe & 0xfffe |
                         uVar4 & 0x10001 | *(int *)(lVar2 + 0x10 + lVar6) << 0x11);
  if (cVar3 != '\0') {
    plVar1 = (longlong *)(lVar2 + lVar6);
    plVar7 = plVar1 + 2;
    if ((&DAT_028026ec)[(longlong)*(int *)(lVar5 + 4) * 0x38] == '\0') {
      *plVar1 = lVar5;
LAB_00e901af:
      plVar7[-1] = unaff_RSI + 0x10;
    }
LAB_00e901bb:
    FUN_00e314f0();
    return plVar7;
  }
  goto joined_r0x00e8fffa;
}




// ============================================================
// @01d11980 — 518 bytes
// ============================================================

longlong * FUN_01d11980(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar9 [16];
  longlong *local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  FUN_01e40eb0();
  plVar6 = local_48;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) goto LAB_01d11b78;
  FUN_01e40eb0();
  (**(code **)(*local_60 + 0x4a0))();
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    plVar6 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_34 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_01d11a1a;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = 0;
  }
LAB_01d11a1a:
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (0 < *(int *)((longlong)plVar6 + 0xc)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(plVar6[2] + lVar7 * 8);
      if (plVar1 != unaff_RSI) {
        local_40 = '\0';
        local_48 = plVar1;
        FUN_00085720();
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar5 = &local_48;
          if (cVar4 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        plVar2 = *pplVar5;
        if (*(char *)(pplVar5 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar5 + 1) = 0;
          if ((local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar2 != (longlong *)0x0) {
          fVar8 = (float)(**(code **)(*plVar2 + 0x4d8))();
          if (fVar8 < *(float *)((longlong)unaff_RSI + 0x10c)) {
            (**(code **)(*unaff_RSI + 0x4d8))();
            auVar3._4_4_ = extraout_XMM0_Db;
            auVar3._0_4_ = fVar8;
            auVar3._8_4_ = extraout_XMM0_Dc;
            auVar3._12_4_ = extraout_XMM0_Dd;
            auVar9._4_12_ = auVar3._4_12_;
            auVar9._0_4_ = fVar8 + DAT_024112b0;
            blendps(auVar9,auVar3,0xe);
            cVar4 = FUN_00d054a0();
            if (cVar4 != '\0') {
              *unaff_RDI = (longlong)plVar2;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              if ((char)local_34 != '\0') {
                return unaff_RDI;
              }
              FUN_00d50b20();
              return unaff_RDI;
            }
          }
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)plVar6 + 0xc));
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
LAB_01d11b78:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}




// ============================================================
// @00c745a0 — 512 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c7468f) */
/* WARNING: Removing unreachable block (ram,0x00c74698) */
/* WARNING: Removing unreachable block (ram,0x00c74611) */
/* WARNING: Removing unreachable block (ram,0x00c7461a) */
/* WARNING: Removing unreachable block (ram,0x00c746ec) */
/* WARNING: Removing unreachable block (ram,0x00c746f5) */

ulonglong FUN_00c745a0(undefined8 param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  FUN_00ccb910();
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) {
    uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
    bVar1 = true;
    plVar6 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      uVar5 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00c7460b;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar1 = false;
    uVar5 = 0;
  }
LAB_00c7460b:
  if (plVar6 == (longlong *)0x0) {
    uVar4 = 0;
    goto LAB_00c74783;
  }
  uVar3 = FUN_00daa700();
  plVar7 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    plVar7 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_34 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00c74689;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = 0;
  }
LAB_00c74689:
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x368))();
    if ((local_a0 == '\0') || (local_a8 == 0)) {
      uVar4 = 0;
    }
    else {
      FUN_00d50b20();
      uVar4 = 0;
    }
  }
  else {
    local_50 = '\0';
    local_58 = plVar7;
    uVar2 = (**(code **)(*unaff_RDI + 0x618))(param_1,&local_58);
    *(undefined1 *)(unaff_RDI + 0xd) = uVar2;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar6 + 0x368))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = CONCAT71(uVar5,(char)unaff_RDI[0xd] != '\0');
    if ((char)local_34 == '\0') {
      FUN_00d50b20();
    }
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_00c74783:
  return uVar4 & 0xffffffff;
}




// ============================================================
// @01d11040 — 511 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d11107) */
/* WARNING: Removing unreachable block (ram,0x01d11110) */
/* WARNING: Removing unreachable block (ram,0x01d1116c) */
/* WARNING: Removing unreachable block (ram,0x01d11175) */
/* WARNING: Removing unreachable block (ram,0x01d110c8) */
/* WARNING: Removing unreachable block (ram,0x01d110d1) */
/* WARNING: Removing unreachable block (ram,0x01d11085) */
/* WARNING: Removing unreachable block (ram,0x01d1108e) */
/* WARNING: Removing unreachable block (ram,0x01d111d5) */
/* WARNING: Removing unreachable block (ram,0x01d111e2) */

void FUN_01d11040(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong *unaff_RDI;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0xa18))();
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0xab0))();
    if (local_40 != (longlong *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      local_50 = local_40;
      FUN_01caeba0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      FUN_01caeb80();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x3b8))(param_1,0);
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      bVar1 = false;
      bVar2 = false;
      goto LAB_01d111fb;
    }
    bVar1 = false;
  }
  bVar2 = true;
  local_50 = (longlong *)0x0;
LAB_01d111fb:
  (**(code **)(*unaff_RDI + 0x998))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2 && local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00ddc6f0 — 504 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ddc87f) */
/* WARNING: Removing unreachable block (ram,0x00ddc888) */

ulonglong FUN_00ddc6f0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  int iVar8;
  
  cVar4 = (**(code **)(*unaff_RDI + 0x388))();
  pcVar3 = DAT_025795c0;
  if (cVar4 != '\0') {
LAB_00ddc717:
    uVar7 = 0;
    goto LAB_00ddc8aa;
  }
  iVar8 = (int)unaff_RDI[4];
  bVar2 = false;
  puVar6 = (undefined8 *)0x0;
  while (iVar5 = (**(code **)(*unaff_RDI + 0x390))(), iVar8 < iVar5) {
    FUN_00d8cbc0();
    cVar4 = FUN_00d90d50();
    if (cVar4 != '\0') break;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025795a8;
      (*pcVar3)();
      bVar2 = true;
    }
    FUN_00d8ea20();
    iVar8 = (int)unaff_RDI[4] + 1;
    *(int *)(unaff_RDI + 4) = iVar8;
  }
  if (puVar6 == (undefined8 *)0x0) {
    cVar4 = (**(code **)(*unaff_RDI + 0x388))();
    if (cVar4 != '\0') goto LAB_00ddc717;
    cVar4 = (**(code **)(*unaff_RDI + 0x388))();
    if (cVar4 == '\0') {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025795a8;
      (*pcVar3)();
      bVar2 = true;
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    unaff_RDI = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *unaff_RDI = (longlong)&DAT_025795a8;
    (*pcVar3)();
    plVar1 = (longlong *)*param_2;
    if (plVar1 == unaff_RDI) {
      if (*(char *)(param_2 + 1) == '\0') goto LAB_00ddc860;
      FUN_00d50b20();
    }
    else {
      *param_2 = unaff_RDI;
      if ((*(char *)(param_2 + 1) != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00ddc860:
      *(undefined1 *)(param_2 + 1) = 1;
    }
    FUN_00d8dbf0();
    FUN_00d8c7d0();
  }
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_00ddc8aa:
  return uVar7 & 0xffffffff;
}




// ============================================================
// @00e8dfb0 — 502 bytes
// ============================================================

void FUN_00e8dfb0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar2 = DAT_0276cc80;
  if (*param_2 == 0) {
    FUN_00e7b4e0();
    FUN_00dd6690();
    lVar2 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_30 == '\0') {
          return;
        }
        if (local_38 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      local_38 = 0;
    }
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  if (DAT_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_00d91000(1,&local_48);
  lVar2 = local_38;
  if (local_38 == 0) {
    bVar1 = true;
    lVar2 = 0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_30 == '\0') || (local_38 == 0)) goto LAB_00e8e06f;
      FUN_00d50b20();
    }
    else {
      local_30 = '\0';
    }
    bVar1 = false;
  }
LAB_00e8e06f:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar2 + 0xc) == 2) {
    FUN_00d8d560();
    FUN_00d8d560();
    FUN_00dd6690();
    lVar2 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00e8e149;
      }
LAB_00e8e178:
      local_38 = 0;
    }
  }
  else {
    FUN_00e7b4e0();
    FUN_00dd6690();
    lVar2 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00e8e149;
      }
      goto LAB_00e8e178;
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x00e8e149:
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}



