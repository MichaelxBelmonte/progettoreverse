// Reconstructed implementation of MUAudioSourceDescription
// From MikeCore binary — reverse-engineered pseudocode

#include "MUAudioSourceDescription.h"

// ============================================================
// @0133bd20 — 34174 bytes
// str: ""MUAudioSourcePrincipalItem""
// str: ""MUAudioSourceDescription::cleanupOverlappingPotentialItemsForPrincipalItem(): wrong object type in "
// str: ""MUAudioSourceDescription::cleanupOverlappingPotentialItemsForPrincipalItem(): item not in _audioSou"
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013433fd) */
/* WARNING: Removing unreachable block (ram,0x01343409) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0133bd20(double *******param_1,double *param_2,double ******param_3,double *param_4,
                     char param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  pthread_key_t pVar9;
  undefined8 *puVar10;
  double *****pppppdVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  double *******pppppppdVar16;
  longlong lVar17;
  double ******ppppppdVar18;
  undefined7 uVar19;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  pthread_key_t pVar20;
  double *******pppppppdVar21;
  double *******pppppppdVar22;
  double *******pppppppdVar23;
  int iVar24;
  double *unaff_RSI;
  double *******unaff_RDI;
  double *******pppppppdVar25;
  double ******ppppppdVar26;
  double *pdVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined7 uVar31;
  ulonglong uVar30;
  bool bVar32;
  undefined4 extraout_XMM0_Da;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  char local_res8;
  char local_res10;
  char local_res18;
  byte local_res20;
  double *******local_3e8;
  undefined1 local_3e0;
  double *******local_3d8;
  undefined1 local_3d0;
  double ******local_3c8;
  undefined1 local_3c0;
  double *******local_3b8;
  undefined1 local_3b0;
  double local_3a8;
  undefined1 local_3a0;
  double local_398;
  undefined1 local_390;
  double local_388;
  undefined1 local_380;
  undefined8 *local_378;
  undefined1 local_370;
  double *****local_368;
  undefined1 local_360;
  double *******local_358;
  undefined1 local_350;
  double *******local_348;
  undefined1 local_340;
  double *******local_338;
  undefined1 local_330;
  double *******local_328;
  undefined1 local_320;
  double *******local_318;
  undefined1 local_310;
  undefined *local_308;
  longlong local_300;
  double *******local_2f8;
  undefined1 local_2f0;
  double *******local_2e8;
  undefined1 local_2e0;
  double *******local_2d8;
  undefined1 local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  double *******local_2a0;
  char local_298;
  double *******local_290;
  char local_288;
  double *******local_280;
  char local_278;
  double *******local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  undefined8 *local_240;
  char local_238;
  undefined8 *local_230;
  char local_228;
  double *******local_220;
  char local_218;
  double ******local_210;
  code *local_208;
  double ******local_200;
  char local_1f8;
  double ******local_1f0;
  char local_1e8;
  double *******local_1e0;
  char local_1d8;
  double *******local_1d0;
  char local_1c8;
  double ******local_1c0;
  char local_1b8;
  double *******local_1b0;
  char local_1a8;
  double *******local_1a0;
  char local_198;
  undefined8 local_190;
  double ******local_188;
  char local_180;
  double ******local_178;
  char local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  ulonglong local_150;
  double local_148;
  float local_13c;
  double local_138;
  ulonglong local_130;
  double *******local_128;
  double *******local_120;
  ulonglong local_118;
  double *******local_110;
  undefined8 *local_108;
  undefined8 local_100;
  double *******local_f8;
  double *******local_f0;
  double *******local_e8;
  double *******local_e0;
  double *******local_d8;
  ulonglong local_d0;
  double *******local_c0;
  char local_b8;
  double local_b0;
  double local_a0;
  ulonglong local_98;
  undefined8 *local_88;
  double *******local_80;
  char local_78;
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  double *local_58;
  double *******local_50;
  double *******local_48;
  double *******local_40;
  double *******local_38;
  
  local_f0 = param_1;
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pppppppdVar21 = (double *******)&DAT_02572358;
  local_308 = &DAT_02572358;
  *puVar10 = &DAT_02572358;
  local_208 = DAT_02572370;
  local_108 = puVar10;
  (*DAT_02572370)();
  pppppdVar11 = (double *****)FUN_00e7b4e0();
  *param_3 = pppppdVar11;
  *(undefined1 *)param_4 = 0;
  pppppppdVar16 = unaff_RDI;
  local_210 = param_3;
  local_58 = param_4;
  if (((unaff_RDI[0x3f] == (double ******)0x0) && (unaff_RDI[0x40] == (double ******)0x0)) &&
     (param_3 = unaff_RDI[0x29], param_3 != (double ******)0x0)) {
    pppppppdVar16 = (double *******)&DAT_02802558;
    local_48 = (double *******)0x0;
    local_d0 = 0;
    local_38 = (double *******)0x0;
    pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
    if (pvVar12 != (void *)0x0) {
      param_3 = unaff_RDI[0x29];
      local_48 = (double *******)0x0;
      local_d0 = 0;
      local_38 = (double *******)0x0;
      lVar14 = FUN_00e8b990();
      if (lVar14 != 0) {
        param_3 = (double ******)param_3[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
      }
    }
    pdVar27 = (double *)0x0;
    local_48 = (double *******)0x0;
    local_d0 = 0;
    local_38 = (double *******)0x0;
    iVar8 = FUN_0141bab0();
    param_4 = pdVar27;
    if (((iVar8 != 3) || (param_4 = (double *)0x0, *param_2 == 0.0)) || (*unaff_RSI == 0.0))
    goto LAB_0133bdce;
    pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_013de560();
    pppppppdVar22 = local_80;
    if (local_80 == (double *******)0x0) {
      local_d0 = 0;
      local_38 = (double *******)0x0;
    }
    else {
      if (local_78 == '\0') {
        local_d0 = 0;
        local_38 = (double *******)0x0;
        uVar13 = FUN_00d50b00();
      }
      else {
        local_78 = '\0';
      }
      local_d0 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      local_38 = pppppppdVar22;
    }
    pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
    if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
      pppppppdVar21 = local_38;
    }
    cVar5 = FUN_014bc070();
    if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_0133bddd;
    if (local_res10 != '\0') {
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      local_48 = local_80;
      pppppppdVar21 = local_80;
      if (local_80 == (double *******)0x0) {
        local_48 = (double *******)0x0;
        local_98 = 0;
      }
      else {
        local_98 = CONCAT71((int7)((ulonglong)local_80 >> 8),1);
        if (((local_78 == '\0') && (FUN_00d50b00(), local_78 != '\0')) &&
           (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pppppppdVar21 = local_38;
      }
      local_2b8 = '\0';
      local_2c0 = 0;
      FUN_014bc360();
      if ((local_2b8 != '\0') && (local_2c0 != 0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pppppppdVar21 = local_48;
      }
      pdVar27 = (double *)0x0;
      local_2a8 = '\0';
      local_2b0 = 0;
      FUN_014bc2e0();
      if ((local_2a8 != '\0') && (local_2b0 != 0)) {
        FUN_00d50b20();
      }
      if (*unaff_RSI != 0.0) {
        *unaff_RSI = 0.0;
        if (*(char *)(unaff_RSI + 1) != '\0') {
          FUN_00d50b20();
        }
        pdVar27 = (double *)0x0;
        *(undefined1 *)(unaff_RSI + 1) = 0;
      }
      goto LAB_0133bdec;
    }
    local_48 = (double *******)0x0;
    local_98 = 0;
LAB_0133c012:
    local_128 = (double *******)0x0;
    pppppppdVar21 = (double *******)0x0;
    local_58 = (double *)0x0;
    local_d8 = (double *******)0x0;
    local_f8 = (double *******)0x0;
    local_88 = (undefined8 *)0x0;
    bVar32 = false;
  }
  else {
LAB_0133bdce:
    local_d0 = 0;
    local_38 = (double *******)0x0;
    pdVar27 = param_4;
LAB_0133bddd:
    local_98 = 0;
    local_48 = (double *******)0x0;
LAB_0133bdec:
    pVar20 = (pthread_key_t)pppppppdVar21;
    if (*unaff_RSI == 0.0) {
      if (*param_2 == 0.0) goto LAB_0133c012;
      pppppppdVar16 = (double *******)&DAT_02802558;
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pppppppdVar22 = local_80;
      uVar19 = (undefined7)((ulonglong)param_3 >> 8);
      if (local_80 == local_48) {
        if (((char)local_98 == '\0') && (local_80 != (double *******)0x0)) {
          param_3 = (double ******)CONCAT71(uVar19,1);
          if (local_78 != '\0') goto LAB_0133c0bf;
          param_3 = (double ******)CONCAT71(uVar19,1);
          FUN_00d50b00();
          pppppppdVar22 = local_48;
        }
        else {
          param_3 = (double ******)(local_98 & 0xffffffff);
          pppppppdVar22 = local_48;
        }
joined_r0x0133c0af:
        local_48 = pppppppdVar22;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78 == '\0') {
          if (local_80 != (double *******)0x0) {
            FUN_00d50b00();
          }
          param_3 = (double ******)CONCAT71(uVar19,1);
          if (((char)local_98 != '\0') && (local_48 != (double *******)0x0)) {
            local_48 = pppppppdVar22;
            FUN_00d50b20();
            pppppppdVar22 = local_48;
          }
          goto joined_r0x0133c0af;
        }
        param_3 = (double ******)CONCAT71(uVar19,1);
        if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
          local_48 = local_80;
        }
        else {
          local_48 = local_80;
          FUN_00d50b20();
        }
      }
LAB_0133c0bf:
      if (local_48 == (double *******)0x0) {
        local_48 = (double *******)0x0;
      }
      else {
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pppppppdVar21 = local_48;
        }
        FUN_014bc340();
        pppppppdVar22 = local_80;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if (pppppppdVar22 != (double *******)0x0) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar21 = local_48;
          }
          FUN_014bc340();
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1d00();
          pppppppdVar22 = local_80;
          pppppppdVar16 = (double *******)*unaff_RSI;
          if (pppppppdVar16 == local_80) {
            if ((*(char *)(unaff_RSI + 1) != '\0') || (local_80 == (double *******)0x0))
            goto LAB_0133c274;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_0133c26f;
            }
LAB_0133c20a:
            pdVar27 = unaff_RSI + 1;
            *(undefined1 *)pdVar27 = 1;
            local_78 = '\0';
          }
          else {
            cVar5 = *(char *)(unaff_RSI + 1);
            if (local_78 != '\0') {
              *unaff_RSI = (double)local_80;
              if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0133c20a;
            }
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (double)pppppppdVar22;
            if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
              FUN_00d50b20();
            }
LAB_0133c26f:
            pdVar27 = unaff_RSI + 1;
            *(undefined1 *)pdVar27 = 1;
LAB_0133c274:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_98 = (ulonglong)param_3 & 0xffffffff;
LAB_0133c2ac:
      if (*param_2 != 0.0) {
        if (local_res10 == '\0') goto LAB_0133c65d;
LAB_0133c5a4:
        pVar20 = (pthread_key_t)pppppppdVar21;
        if (local_res8 == '\0') goto LAB_0133c65d;
        pppppppdVar16 = (double *******)*unaff_RSI;
        uVar31 = (undefined7)((ulonglong)param_3 >> 8);
        uVar19 = (undefined7)((ulonglong)pdVar27 >> 8);
        if (pppppppdVar16 != (double *******)0x0) {
          if (*param_2 != 0.0) goto LAB_0133be0c;
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            pppppppdVar16 = (double *******)*unaff_RSI;
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pppppppdVar16 =
                   (double *******)pppppppdVar16[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
            }
          }
          FUN_013de560();
          pppppppdVar22 = local_80;
          if (local_80 == local_38) {
            if (((char)local_d0 == '\0') && (local_80 != (double *******)0x0)) {
              uVar28 = CONCAT71(uVar19,1);
              if (local_78 != '\0') goto LAB_0133f025;
              uVar28 = CONCAT71(uVar19,1);
              FUN_00d50b00();
            }
            else {
              uVar28 = local_d0 & 0xffffffff;
            }
LAB_0133f011:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              uVar28 = CONCAT71(uVar19,1);
              if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
                local_38 = pppppppdVar22;
              }
              else {
                local_38 = pppppppdVar22;
                FUN_00d50b20();
              }
              goto LAB_0133f011;
            }
            uVar28 = CONCAT71(uVar19,1);
            if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
              local_38 = local_80;
            }
            else {
              local_38 = local_80;
              FUN_00d50b20();
            }
          }
LAB_0133f025:
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar21 = local_38;
          }
          FUN_014d1b50();
          pppppppdVar22 = local_80;
          if (local_80 == local_48) {
            if (((char)local_98 == '\0') && (local_80 != (double *******)0x0)) {
              uVar30 = CONCAT71(uVar31,1);
              if (local_78 != '\0') goto LAB_0133f222;
              uVar30 = CONCAT71(uVar31,1);
              FUN_00d50b00();
            }
            else {
              uVar30 = local_98 & 0xffffffff;
            }
LAB_0133f20e:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              uVar30 = CONCAT71(uVar31,1);
              if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
                local_48 = pppppppdVar22;
              }
              else {
                local_48 = pppppppdVar22;
                FUN_00d50b20();
              }
              goto LAB_0133f20e;
            }
            uVar30 = CONCAT71(uVar31,1);
            if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
              local_48 = local_80;
            }
            else {
              local_48 = local_80;
              FUN_00d50b20();
            }
          }
LAB_0133f222:
          if (local_48 == (double *******)0x0) {
            local_48 = (double *******)0x0;
          }
          else {
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pppppppdVar21 = local_48;
            }
            FUN_014d1d00();
            pppppppdVar22 = local_80;
            pppppppdVar16 = (double *******)*param_2;
            if (pppppppdVar16 == local_80) {
              if ((*(char *)(param_2 + 1) != '\0') || (local_80 == (double *******)0x0))
              goto LAB_0133f31a;
              local_40 = (double *******)(param_2 + 1);
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_0133f313;
              }
            }
            else {
              pppppppdVar21 = (double *******)(param_2 + 1);
              cVar5 = *(char *)(param_2 + 1);
              local_40 = pppppppdVar21;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
                *param_2 = (double)pppppppdVar22;
                if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
LAB_0133f313:
                *(undefined1 *)local_40 = 1;
LAB_0133f31a:
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0133c671;
              }
              *param_2 = (double)local_80;
              if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
LAB_013441aa:
            *(undefined1 *)local_40 = 1;
          }
          goto LAB_0133c671;
        }
        dVar35 = 0.0;
        if (*param_2 != 0.0) {
          pppppppdVar16 = (double *******)&DAT_02802558;
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pppppppdVar22 = local_80;
          if (local_80 == local_48) {
            if (((char)local_98 == '\0') && (local_48 != (double *******)0x0)) {
              uVar30 = CONCAT71(uVar31,1);
              if (local_78 != '\0') goto LAB_0133f129;
              uVar30 = CONCAT71(uVar31,1);
              FUN_00d50b00();
            }
            else {
              uVar30 = local_98 & 0xffffffff;
            }
LAB_0133f115:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              uVar30 = CONCAT71(uVar31,1);
              if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
                local_48 = pppppppdVar22;
              }
              else {
                local_48 = pppppppdVar22;
                FUN_00d50b20();
              }
              goto LAB_0133f115;
            }
            uVar30 = CONCAT71(uVar31,1);
            if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
              local_48 = local_80;
            }
            else {
              local_48 = local_80;
              FUN_00d50b20();
            }
          }
LAB_0133f129:
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar21 = local_48;
          }
          FUN_014d19a0();
          pppppppdVar22 = local_80;
          if (local_80 == local_38) {
            if (((char)local_d0 != '\0') || (local_38 == (double *******)0x0)) {
              uVar28 = local_d0 & 0xffffffff;
LAB_013440ec:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01344100;
            }
            if (local_78 == '\0') {
              uVar28 = CONCAT71(uVar19,1);
              FUN_00d50b00();
              goto LAB_013440ec;
            }
            uVar28 = CONCAT71(uVar19,1);
LAB_01344107:
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pppppppdVar21 = local_38;
            }
            FUN_014d1d00();
            pppppppdVar22 = local_80;
            pppppppdVar16 = (double *******)*unaff_RSI;
            if (pppppppdVar16 == local_80) {
              if ((*(char *)(unaff_RSI + 1) != '\0') || (local_80 == (double *******)0x0))
              goto LAB_013441fd;
              local_40 = (double *******)(unaff_RSI + 1);
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_013441f6;
              }
            }
            else {
              pppppppdVar21 = (double *******)(unaff_RSI + 1);
              cVar5 = *(char *)(unaff_RSI + 1);
              local_40 = pppppppdVar21;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
                *unaff_RSI = (double)pppppppdVar22;
                if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
LAB_013441f6:
                *(undefined1 *)local_40 = 1;
LAB_013441fd:
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0133c671;
              }
              *unaff_RSI = (double)local_80;
              if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            goto LAB_013441aa;
          }
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            uVar28 = CONCAT71(uVar19,1);
            if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
              local_38 = pppppppdVar22;
            }
            else {
              local_38 = pppppppdVar22;
              FUN_00d50b20();
            }
            goto LAB_013440ec;
          }
          uVar28 = CONCAT71(uVar19,1);
          if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
            local_38 = local_80;
          }
          else {
            local_38 = local_80;
            FUN_00d50b20();
          }
LAB_01344100:
          if (local_38 != (double *******)0x0) goto LAB_01344107;
          local_38 = (double *******)0x0;
          goto LAB_0133c671;
        }
LAB_0133c863:
        if (dVar35 != 0.0) {
          cVar5 = *(char *)(param_2 + 1);
          pppppppdVar16 = (double *******)CONCAT71((int7)((ulonglong)pppppppdVar16 >> 8),cVar5);
          if (cVar5 != '\0') {
            FUN_00d50b00();
          }
          *unaff_RSI = dVar35;
          *(char *)(unaff_RSI + 1) = cVar5;
        }
        pVar20 = (pthread_key_t)CONCAT71((int7)((ulonglong)pppppppdVar21 >> 8),1);
        local_138 = (double)CONCAT44(local_138._4_4_,pVar20);
        if (*param_2 != 0.0) {
          *param_2 = 0.0;
          if (*(char *)(param_2 + 1) != '\0') {
            FUN_00d50b20();
          }
          *(undefined1 *)(param_2 + 1) = 0;
        }
        goto LAB_0133be16;
      }
      pppppppdVar16 = (double *******)&DAT_02802558;
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pppppppdVar22 = local_80;
      uVar19 = (undefined7)((ulonglong)param_3 >> 8);
      if (local_80 == local_38) {
        if (((char)local_d0 == '\0') && (local_80 != (double *******)0x0)) {
          param_3 = (double ******)CONCAT71(uVar19,1);
          if (local_78 != '\0') goto LAB_0133c3c5;
          param_3 = (double ******)CONCAT71(uVar19,1);
          FUN_00d50b00();
          pppppppdVar22 = local_38;
        }
        else {
          param_3 = (double ******)(local_d0 & 0xffffffff);
          pppppppdVar22 = local_38;
        }
joined_r0x0133c3b5:
        local_38 = pppppppdVar22;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78 == '\0') {
          if (local_80 != (double *******)0x0) {
            FUN_00d50b00();
          }
          param_3 = (double ******)CONCAT71(uVar19,1);
          if (((char)local_d0 != '\0') && (local_38 != (double *******)0x0)) {
            local_38 = pppppppdVar22;
            FUN_00d50b20();
            pppppppdVar22 = local_38;
          }
          goto joined_r0x0133c3b5;
        }
        param_3 = (double ******)CONCAT71(uVar19,1);
        if (((char)local_d0 == '\0') || (local_38 == (double *******)0x0)) {
          local_38 = local_80;
        }
        else {
          local_38 = local_80;
          FUN_00d50b20();
        }
      }
LAB_0133c3c5:
      if (local_38 == (double *******)0x0) {
        local_38 = (double *******)0x0;
      }
      else {
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pppppppdVar21 = local_38;
        }
        FUN_014bc420();
        pppppppdVar22 = local_80;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if (pppppppdVar22 != (double *******)0x0) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar21 = local_38;
          }
          FUN_014bc420();
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1d00();
          pppppppdVar22 = local_80;
          pppppppdVar16 = (double *******)*param_2;
          if (pppppppdVar16 == local_80) {
            if ((*(char *)(param_2 + 1) != '\0') || (local_80 == (double *******)0x0))
            goto LAB_0133c562;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_0133c55d;
            }
LAB_0133c50c:
            pdVar27 = param_2 + 1;
            *(undefined1 *)pdVar27 = 1;
            local_78 = '\0';
          }
          else {
            cVar5 = *(char *)(param_2 + 1);
            if (local_78 != '\0') {
              *param_2 = (double)local_80;
              if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0133c50c;
            }
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            *param_2 = (double)pppppppdVar22;
            if ((cVar5 != '\0') && (pppppppdVar16 != (double *******)0x0)) {
              FUN_00d50b20();
            }
LAB_0133c55d:
            pdVar27 = param_2 + 1;
            *(undefined1 *)pdVar27 = 1;
LAB_0133c562:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_d0 = (ulonglong)param_3 & 0xffffffff;
      if (local_res10 != '\0') goto LAB_0133c5a4;
LAB_0133c65d:
      uVar30 = local_98 & 0xffffffff;
      uVar28 = local_d0 & 0xffffffff;
LAB_0133c671:
      pVar20 = (pthread_key_t)pppppppdVar21;
      uVar29 = (uint)uVar28;
      if (*unaff_RSI == 0.0) {
        dVar35 = *param_2;
        local_d0 = uVar28 & 0xffffffff;
        local_98 = uVar30 & 0xffffffff;
        goto LAB_0133c863;
      }
      local_138 = (double)((ulonglong)local_138 & 0xffffffff00000000);
    }
    else {
      if (*param_2 == 0.0) goto LAB_0133c2ac;
LAB_0133be0c:
      local_138 = (double)((ulonglong)local_138 & 0xffffffff00000000);
LAB_0133be16:
      uVar30 = local_98 & 0xffffffff;
      uVar29 = (uint)local_d0;
    }
    pvVar12 = _pthread_getspecific(pVar20);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_013de560();
    pppppppdVar21 = local_80;
    uVar19 = (undefined7)((ulonglong)uVar13 >> 8);
    cVar5 = (char)uVar29;
    if (local_80 == local_38) {
      if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
        local_d0 = CONCAT71(uVar19,1);
        if (local_78 != '\0') goto LAB_0133c8f9;
        local_d0 = CONCAT71(uVar19,1);
        FUN_00d50b00();
        pppppppdVar21 = local_38;
      }
      else {
        local_d0 = (ulonglong)uVar29;
        pppppppdVar21 = local_38;
      }
joined_r0x0133c7a4:
      local_38 = pppppppdVar21;
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (double *******)0x0) {
          uVar13 = FUN_00d50b00();
        }
        local_d0 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
        if ((cVar5 != '\0') && (local_38 != (double *******)0x0)) {
          local_38 = pppppppdVar21;
          FUN_00d50b20();
          pppppppdVar21 = local_38;
        }
        goto joined_r0x0133c7a4;
      }
      local_d0 = CONCAT71(uVar19,1);
      if ((cVar5 == '\0') || (local_38 == (double *******)0x0)) {
        local_38 = local_80;
      }
      else {
        local_38 = local_80;
        FUN_00d50b20();
      }
    }
LAB_0133c8f9:
    local_148 = *param_2;
    pVar9 = (pthread_key_t)uVar30;
    if (local_148 == 0.0) {
      local_118 = local_118 & 0xffffffff00000000;
      local_50 = (double *******)((ulonglong)local_50 & 0xffffffff00000000);
    }
    else {
      pvVar12 = _pthread_getspecific(pVar20);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pVar20 = (pthread_key_t)local_38;
      }
      uVar7 = FUN_014bc3c0();
      local_50 = (double *******)CONCAT44(local_50._4_4_,uVar7);
      pvVar12 = _pthread_getspecific(pVar20);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pVar20 = (pthread_key_t)local_38;
      }
      uVar13 = FUN_014bc420();
      local_118 = CONCAT44(local_118._4_4_,
                           (int)CONCAT71((int7)((ulonglong)uVar13 >> 8),
                                         local_80 != (double *******)0x0));
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar12 = _pthread_getspecific(pVar20);
    pppppppdVar21 = local_38;
    if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar14 != 0)
       ) {
      pppppppdVar21 = (double *******)local_38[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
    }
    pVar20 = pVar9;
    lVar14 = (*(code *)(*pppppppdVar21)[0x70])();
    pvVar12 = _pthread_getspecific(pVar20);
    if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      pVar20 = (pthread_key_t)local_38;
    }
    local_158 = (double)FUN_014bb590();
    pvVar12 = _pthread_getspecific(pVar20);
    pppppppdVar21 = local_38;
    if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar15 != 0)
       ) {
      pppppppdVar21 = (double *******)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    local_300 = (*(code *)(*pppppppdVar21)[0x71])();
    pvVar12 = _pthread_getspecific(pVar9);
    pppppppdVar21 = local_38;
    if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar15 != 0)
       ) {
      pppppppdVar21 = (double *******)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    pppppppdVar22 = (double *******)(uVar30 & 0xffffffff);
    local_13c = (float)(*(code *)(*pppppppdVar21)[0x7c])();
    pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
    if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      pppppppdVar22 = local_38;
    }
    local_160 = (double)FUN_014bb310();
    local_98._0_1_ = (char)uVar30;
    if (*param_2 == 0.0) {
      local_168 = (double)((ulonglong)local_168 & 0xffffffff00000000);
      local_2c8 = 0;
    }
    else {
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pppppppdVar21 = local_80;
      if (local_80 == local_48) {
        pppppppdVar21 = local_48;
        if (((char)local_98 == '\0') && (local_80 != (double *******)0x0)) {
          local_98._0_1_ = '\x01';
          if (local_78 != '\0') goto LAB_0133cd83;
          FUN_00d50b00();
          pppppppdVar21 = local_48;
          local_98._0_1_ = '\x01';
        }
joined_r0x0133cd73:
        local_48 = pppppppdVar21;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_78 == '\0') {
          if (local_80 != (double *******)0x0) {
            FUN_00d50b00();
          }
          bVar32 = (char)local_98 != '\0';
          local_98._0_1_ = '\x01';
          if ((bVar32) && (local_48 != (double *******)0x0)) {
            local_48 = pppppppdVar21;
            FUN_00d50b20();
            pppppppdVar21 = local_48;
            local_98._0_1_ = '\x01';
          }
          goto joined_r0x0133cd73;
        }
        if (((char)local_98 == '\0') || (local_48 == (double *******)0x0)) {
          local_48 = local_80;
          local_98._0_1_ = '\x01';
        }
        else {
          local_48 = local_80;
          FUN_00d50b20();
          local_98._0_1_ = '\x01';
        }
      }
LAB_0133cd83:
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
      if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        pppppppdVar22 = local_48;
      }
      local_158 = (double)FUN_014bb590();
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
      pppppppdVar21 = local_48;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar15 != 0)) {
        pppppppdVar22 = local_48;
        pppppppdVar21 = (double *******)local_48[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      local_2c8 = (*(code *)(*pppppppdVar21)[0x71])();
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
      pppppppdVar21 = local_48;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar15 != 0)) {
        pppppppdVar22 = local_48;
        pppppppdVar21 = (double *******)local_48[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      uVar7 = (*(code *)(*pppppppdVar21)[0x7c])();
      local_168 = (double)CONCAT44(local_168._4_4_,uVar7);
    }
    if (((unaff_RDI[0x3f] == (double ******)0x0) && (unaff_RDI[0x40] == (double ******)0x0)) &&
       (pppppppdVar16 = (double *******)unaff_RDI[0x29], pppppppdVar16 != (double *******)0x0)) {
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
      if (pvVar12 != (void *)0x0) {
        pppppppdVar16 = (double *******)unaff_RDI[0x29];
        lVar15 = FUN_00e8b990();
        if (lVar15 != 0) {
          pppppppdVar16 =
               (double *******)pppppppdVar16[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
      }
      iVar8 = FUN_0141bab0();
      if (iVar8 != 1) goto LAB_0133ceaa;
      local_3e8 = local_38;
      local_3e0 = 0;
      uVar7 = FUN_013699d0(extraout_XMM0_Da,&local_3e8);
      local_d8 = local_80;
      pppppppdVar22 = local_80;
      if (local_80 == (double *******)0x0) {
        local_d8 = (double *******)0x0;
        local_f8 = (double *******)0x0;
      }
      else {
        local_f8 = (double *******)CONCAT71((int7)((ulonglong)local_80 >> 8),1);
        if (local_78 == '\0') {
          uVar7 = FUN_00d50b00();
        }
      }
      if (local_48 != (double *******)0x0) {
        local_3d8 = local_48;
        local_3d0 = 0;
        uVar7 = FUN_013699d0(uVar7,&local_3d8);
        if (local_b8 == '\0') {
          if (local_c0 != (double *******)0x0) {
            uVar7 = FUN_00d50b00();
          }
        }
        else {
          local_b8 = '\0';
        }
        local_80 = local_c0;
        local_78 = '\0';
        FUN_00d214d0(uVar7,*(undefined4 *)((longlong)local_d8 + 0xc));
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if (local_c0 != (double *******)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
LAB_0133ceaa:
      local_f8 = (double *******)0x0;
      local_d8 = (double *******)0x0;
    }
    if (local_148 == 0.0) {
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_1f8 = 0;
      ppppppdVar18 = unaff_RDI[0x19];
      if (ppppppdVar18 != (double ******)0x0) {
        FUN_00d50b00();
      }
      dVar35 = local_138;
      local_1f8 = '\x01';
      local_200 = ppppppdVar18;
      FUN_014d3970((ulonglong)local_138 & 0xff,&local_200);
      local_e8 = local_80;
      pppppppdVar21 = local_80;
      if (local_80 == (double *******)0x0) {
        local_100 = (double *******)CONCAT44(local_100._4_4_,1);
        local_e8 = (double *******)0x0;
      }
      else {
        if (local_78 == '\0') {
          FUN_00d50b00();
          local_100 = (double *******)((ulonglong)local_100._4_4_ << 0x20);
          if ((local_78 == '\0') || (local_80 == (double *******)0x0)) goto LAB_0133d1f4;
          FUN_00d50b20();
        }
        else {
          local_78 = '\0';
        }
        local_100 = (double *******)((ulonglong)local_100 & 0xffffffff00000000);
      }
LAB_0133d1f4:
      if ((local_1f8 != '\0') && (local_200 != (double ******)0x0)) {
        FUN_00d50b20();
      }
      pVar20 = (pthread_key_t)pppppppdVar21;
      if (local_138._0_1_ == '\0') {
        if (local_e8 == (double *******)0x0) {
          ppppppdVar18 = unaff_RDI[7];
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            ppppppdVar18 = unaff_RDI[7];
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              ppppppdVar18 = (double ******)
                             ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          pppppppdVar21 = (double *******)(*(code *)(*ppppppdVar18)[0x6f])();
        }
        else {
          pvVar12 = _pthread_getspecific(pVar20);
          pppppppdVar16 = local_e8;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar16 = local_e8, lVar15 != 0)) {
            pppppppdVar21 = local_e8;
            pppppppdVar16 = (double *******)local_e8[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4]
            ;
          }
          pVar20 = (pthread_key_t)pppppppdVar21;
          pppppppdVar21 = (double *******)(*(code *)(*pppppppdVar16)[0x70])();
        }
      }
      else if (local_e8 == (double *******)0x0) {
        pppppppdVar21 = (double *******)0x0;
      }
      else {
        pvVar12 = _pthread_getspecific(pVar20);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (pthread_key_t)local_e8;
        }
        pppppppdVar21 = (double *******)FUN_014bb590();
      }
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_128 = (double *******)FUN_014e7f30(pppppppdVar21,(ulonglong)dVar35 & 0xff);
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
      pppppppdVar16 = local_38;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar16 = local_38, lVar15 != 0)) {
        pppppppdVar21 = local_38;
        pppppppdVar16 = (double *******)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      pVar20 = (pthread_key_t)pppppppdVar21;
      local_1e8 = 0;
      ppppppdVar18 = unaff_RDI[0x1d];
      if (ppppppdVar18 != (double ******)0x0) {
        FUN_00d50b00();
      }
      local_1e8 = '\x01';
      local_1f0 = ppppppdVar18;
      FUN_014d5a40();
      pppppppdVar21 = local_80;
      if (local_78 == '\0') {
        if (((local_80 != (double *******)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
           (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78 = '\0';
      }
      if ((local_1e8 != '\0') && (local_1f0 != (double ******)0x0)) {
        FUN_00d50b20();
      }
      ppppppdVar18 = unaff_RDI[0x34];
      if (ppppppdVar18 == (double ******)0x0) {
        FUN_0132d640();
        ppppppdVar18 = unaff_RDI[0x34];
      }
      if (ppppppdVar18 != (double ******)0x0) {
        FUN_00d50b00();
      }
      dVar35 = DAT_0241b6a8 / (double)ppppppdVar18[7];
      FUN_00d50b20();
      pvVar12 = _pthread_getspecific(pVar20);
      if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        pVar20 = (pthread_key_t)local_38;
      }
      uVar29 = FUN_014c2f20();
      pppppppdVar23 = (double *******)(ulonglong)uVar29;
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar8 = FUN_014c2f80();
      local_40 = (double *******)CONCAT44(local_40._4_4_,iVar8);
      if (0 < *(int *)((longlong)pppppppdVar21 + 0xc)) {
        iVar24 = (int)(dVar35 + DAT_023942d0);
        local_f0 = DAT_025908a0;
        local_e0 = (double *******)CONCAT44(local_e0._4_4_,iVar24 + iVar8);
        pppppppdVar16 = (double *******)0x0;
        do {
          ppppppdVar18 = (double ******)pppppppdVar21[2][(longlong)pppppppdVar16];
          local_80 = (double *******)ppppppdVar18;
          local_78 = '\0';
          if ((DAT_027c0170 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
            _DAT_02790158 = FUN_007ef2d0();
            _DAT_02790140 = "MUAudioSourcePrincipalItem";
            _DAT_02790148 = 0x138;
            _DAT_02790150 = FUN_010fe5c0;
            _DAT_02790160 = 0;
            uRam0000000002790168 = 0;
            _DAT_02790170 = 0;
            uRam0000000002790178 = 0;
            _DAT_02790180 = 0;
            uRam0000000002790188 = 0;
            _DAT_02790190 = 0;
            uRam0000000002790198 = 0;
            _DAT_027901a0 = 0;
            uRam00000000027901a8 = 0;
            _DAT_027901b0 = 0;
            uRam00000000027901b8 = 0;
            _DAT_027901c0 = 0;
            uRam00000000027901c8 = 0;
            _DAT_027901d0 = 0;
            uRam00000000027901d8 = 0;
            _DAT_027901e0 = 0;
            uRam00000000027901e8 = 0;
            _DAT_027901f0 = 0;
            uRam00000000027901f8 = 0;
            _DAT_02790200 = 0;
            ___cxa_guard_release();
          }
          pppppppdVar22 = (double *******)&DAT_02802688;
          if (ppppppdVar18 != (double ******)0x0) {
            (*(code *)(*ppppppdVar18)[0x6c])();
            cVar5 = FUN_00e85ea0();
            pppppppdVar22 = (double *******)&local_80;
            if (cVar5 == '\0') {
              pppppppdVar22 = (double *******)&DAT_02802688;
            }
          }
          ppppppdVar18 = *pppppppdVar22;
          if (*(char *)(pppppppdVar22 + 1) == '\0') {
            if (ppppppdVar18 != (double ******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pppppppdVar22 + 1) = 0;
          }
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (ppppppdVar18 == (double ******)0x0) {
            FUN_00e828a0();
          }
          local_78 = '\0';
          local_80 = (double *******)ppppppdVar18;
          cVar5 = FUN_00d23d70();
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            FUN_00e828a0();
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_014c2f20();
          if (iVar8 < (int)(uVar29 - iVar24)) {
LAB_0133de54:
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar8 = FUN_014c2f20();
            if (iVar8 < (int)uVar29) {
              pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_014c2f80();
              if ((int)uVar29 <= iVar8) {
                while( true ) {
                  pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  iVar8 = FUN_014c2f80();
                  pppppppdVar22 = (double *******)&DAT_02802558;
                  if (iVar8 < (int)uVar29) break;
                  pvVar12 = _pthread_getspecific(0x2802558);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014c3620();
                  pppppppdVar25 = local_80;
                  local_180 = 0;
                  if (local_78 == '\0') {
                    if (local_80 != (double *******)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_78 = '\0';
                  }
                  local_180 = '\x01';
                  local_188 = (double ******)pppppppdVar25;
                  FUN_014c2cf0();
                  if ((local_180 != '\0') && (local_188 != (double ******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                pvVar12 = _pthread_getspecific(0x2802558);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
                pppppppdVar25 = local_38;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar15 = FUN_00e8b990(), pppppppdVar25 = local_38, lVar15 != 0)) {
                  pppppppdVar22 = local_38;
                  pppppppdVar25 =
                       (double *******)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                pVar20 = (pthread_key_t)pppppppdVar22;
                (*(code *)(*pppppppdVar25)[0x70])();
                pvVar12 = _pthread_getspecific(pVar20);
                ppppppdVar26 = ppppppdVar18;
                if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  ppppppdVar26 = (double ******)
                                 ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                (*(code *)(*ppppppdVar26)[0x70])();
                FUN_014bb2b0();
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1d8 = 0;
                FUN_00d50b00();
                local_1d8 = '\x01';
                local_1e0 = unaff_RDI;
                FUN_014cfcc0();
                if ((local_1d8 != '\0') && (local_1e0 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0133e5b0;
              }
            }
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar8 = FUN_014c2f20();
            if (iVar8 <= (int)local_40._0_4_) {
              pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_014c2f80();
              if ((int)local_40._0_4_ < iVar8) {
                pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_110 = (double *******)FUN_014bb590();
                while( true ) {
                  pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  iVar8 = FUN_014c2f20();
                  pppppppdVar22 = (double *******)&DAT_02802558;
                  pVar20 = 0x2802558;
                  if ((int)local_40._0_4_ < iVar8) break;
                  pvVar12 = _pthread_getspecific(0x2802558);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014c35c0();
                  pppppppdVar25 = local_80;
                  local_170 = 0;
                  if (local_78 == '\0') {
                    if (local_80 != (double *******)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_78 = '\0';
                  }
                  local_170 = '\x01';
                  local_178 = (double ******)pppppppdVar25;
                  FUN_014c2cf0();
                  if ((local_170 != '\0') && (local_178 != (double ******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                pvVar12 = _pthread_getspecific(0x2802558);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific(pVar20);
                if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (pthread_key_t)local_38;
                }
                FUN_014bb590();
                FUN_014bb250();
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific(pVar20);
                ppppppdVar26 = ppppppdVar18;
                if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  ppppppdVar26 = (double ******)
                                 ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                (*(code *)(*ppppppdVar26)[0x70])();
                FUN_014bb2b0();
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1c8 = 0;
                FUN_00d50b00();
                local_1c8 = '\x01';
                local_1d0 = unaff_RDI;
                FUN_014cfcc0();
                if ((local_1c8 != '\0') && (local_1d0 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar8 = FUN_014c2f80();
            if ((int)local_e0 < iVar8) goto LAB_0133de54;
            local_3c0 = 0;
            local_3c8 = ppppppdVar18;
            FUN_013295b0();
          }
LAB_0133e5b0:
          if (ppppppdVar18 != (double ******)0x0) {
            FUN_00d50b20();
          }
          pppppppdVar16 = (double *******)((longlong)pppppppdVar16 + 1);
        } while ((longlong)pppppppdVar16 < (longlong)*(int *)((longlong)pppppppdVar21 + 0xc));
      }
      if (local_e8 != (double *******)0x0) {
        local_80 = local_e8;
        local_78 = '\0';
        bVar6 = FUN_00d23d70();
        pVar20 = (pthread_key_t)pppppppdVar21;
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar6 & local_res20) == 1) {
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d26c0();
        }
      }
      local_80 = local_38;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      bVar6 = (byte)local_100 | local_e8 == (double *******)0x0;
      pppppppdVar22 = (double *******)(ulonglong)CONCAT31((int3)((ulonglong)local_100 >> 8),bVar6);
      if (bVar6 == 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_res10 == '\0') {
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_48;
        }
        cVar5 = FUN_014bc070();
        if (cVar5 == '\0') {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_38;
          }
          cVar5 = FUN_014bc070();
          if (cVar5 == '\0') goto LAB_0133ec12;
        }
        ppppppdVar18 = unaff_RDI[7];
        if (ppppppdVar18 == (double ******)0x0) {
          local_40 = (double *******)0x0;
        }
        else {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            ppppppdVar18 = unaff_RDI[7];
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              ppppppdVar18 = (double ******)
                             ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          local_40 = (double *******)(*(code *)(*ppppppdVar18)[0x6e])();
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_48;
        }
        bVar6 = FUN_014bc070();
        dVar35 = (double)local_40 * DAT_023908d0;
        pppppppdVar21 =
             (double *******)CONCAT71((int7)((ulonglong)pppppppdVar22 >> 8),0 < (longlong)local_f0);
        if ((bVar6 & 0 < (longlong)local_f0) == 1) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          pppppppdVar21 = local_48;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar15 != 0)) {
            pppppppdVar21 = (double *******)local_48[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4]
            ;
          }
          lVar15 = (*(code *)(*pppppppdVar21)[0x71])();
          pppppppdVar16 = (double *******)(lVar15 - (int)dVar35);
          pppppppdVar21 = local_f0;
          if ((longlong)pppppppdVar16 < (longlong)local_f0) {
            pppppppdVar21 = pppppppdVar16;
            local_f0 = pppppppdVar16;
          }
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar21 = local_38;
        }
        bVar6 = FUN_014bc070();
        pppppppdVar21 =
             (double *******)CONCAT71((int7)((ulonglong)pppppppdVar21 >> 8),(longlong)local_f0 < 0);
        if ((bVar6 & (longlong)local_f0 < 0) == 1) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          pppppppdVar21 = local_38;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar15 != 0)) {
            pppppppdVar21 = (double *******)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4]
            ;
          }
          lVar15 = (*(code *)(*pppppppdVar21)[0x71])();
          pppppppdVar21 = (double *******)((int)dVar35 - lVar15);
          if ((longlong)local_f0 < (longlong)pppppppdVar21) {
            local_f0 = pppppppdVar21;
          }
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar21 = local_48;
        }
        bVar6 = FUN_014bc070();
        pppppppdVar21 =
             (double *******)CONCAT71((int7)((ulonglong)pppppppdVar21 >> 8),(longlong)local_f0 < 0);
        if ((bVar6 & (longlong)local_f0 < 0) == 1) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
          pppppppdVar21 = local_48;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar15 != 0)) {
            pppppppdVar21 = (double *******)local_48[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4]
            ;
          }
          local_128 = (double *******)(*(code *)(*pppppppdVar21)[0x70])();
          ppppppdVar18 = unaff_RDI[8];
          local_e0 = local_128;
          if (*(int *)((longlong)ppppppdVar18 + 0xc) < 1) {
            local_a0 = 0.0;
            pppppppdVar16 = (double *******)0x0;
            bVar32 = false;
            pppppppdVar23 = (double *******)0x0;
          }
          else {
            lVar15 = 0;
            pppppppdVar23 = (double *******)0x0;
            bVar32 = false;
            local_a0 = 0.0;
            pppppppdVar21 = (double *******)0x0;
            do {
              uVar28 = (ulonglong)local_a0 & 0xffffffff;
              pppppppdVar16 = (double *******)ppppppdVar18[2][lVar15];
              local_40 = pppppppdVar23;
              if (pppppppdVar23 == pppppppdVar16) {
                pVar20 = local_a0._0_4_;
                if ((!bVar32) && (pppppppdVar23 != (double *******)0x0)) {
                  bVar32 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (pppppppdVar16 != (double *******)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar32) && (local_40 != (double *******)0x0)) {
                  local_40 = pppppppdVar16;
                  FUN_00d50b20();
                  bVar32 = true;
                  pVar20 = local_a0._0_4_;
                }
                else {
                  bVar32 = true;
                  local_40 = pppppppdVar16;
                  pVar20 = local_a0._0_4_;
                }
              }
              pppppppdVar23 = local_40;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar13 = FUN_013de560();
              pppppppdVar16 = local_80;
              uVar19 = (undefined7)((ulonglong)uVar13 >> 8);
              cVar5 = (char)uVar28;
              if (local_80 == pppppppdVar21) {
                local_a0 = (double)uVar28;
                pppppppdVar16 = pppppppdVar21;
                if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
                  local_a0 = (double)CONCAT71(uVar19,1);
                  if (local_78 != '\0') goto LAB_0133d91e;
                  local_a0 = (double)CONCAT71(uVar19,1);
                  FUN_00d50b00();
                }
joined_r0x0133d8f6:
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_78 == '\0') {
                  if (local_80 != (double *******)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                  local_a0 = (double)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                  if ((cVar5 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                  goto joined_r0x0133d8f6;
                }
                local_a0 = (double)CONCAT71(uVar19,1);
                if ((cVar5 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0133d91e:
              if (pppppppdVar16 != local_38) {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                lVar17 = FUN_014bb590();
                if (lVar17 <= (longlong)local_e0) {
                  pvVar12 = _pthread_getspecific(pVar20);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar17 = FUN_014bb590();
                  if ((longlong)local_e0 - lVar17 < (longlong)local_128) {
                    pvVar12 = _pthread_getspecific((pthread_key_t)((longlong)local_e0 - lVar17));
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar17 = FUN_014bb590();
                    local_128 = (double *******)((longlong)local_e0 - lVar17);
                  }
                }
              }
              lVar15 = lVar15 + 1;
              ppppppdVar18 = unaff_RDI[8];
              pppppppdVar21 = pppppppdVar16;
            } while (lVar15 < *(int *)((longlong)ppppppdVar18 + 0xc));
          }
          pppppppdVar21 = (double *******)-(longlong)local_128;
          if ((longlong)local_f0 < (longlong)pppppppdVar21) {
            local_f0 = pppppppdVar21;
          }
        }
        else {
          local_a0 = 0.0;
          pppppppdVar16 = (double *******)0x0;
          bVar32 = false;
          pppppppdVar23 = (double *******)0x0;
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar21 = local_38;
        }
        bVar6 = FUN_014bc070();
        pppppppdVar22 =
             (double *******)CONCAT71((int7)((ulonglong)pppppppdVar21 >> 8),0 < (longlong)local_f0);
        pVar20 = (pthread_key_t)pppppppdVar22;
        if ((bVar6 & 0 < (longlong)local_f0) == 1) {
          pvVar12 = _pthread_getspecific(pVar20);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar20 = (pthread_key_t)local_38;
          }
          local_e0 = (double *******)FUN_014bb590();
          ppppppdVar18 = unaff_RDI[7];
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            ppppppdVar18 = unaff_RDI[7];
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              ppppppdVar18 = (double ******)
                             ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          lVar15 = (*(code *)(*ppppppdVar18)[0x6f])();
          local_128 = (double *******)(lVar15 - (longlong)local_e0);
          ppppppdVar18 = unaff_RDI[8];
          local_40 = pppppppdVar23;
          if (0 < *(int *)((longlong)ppppppdVar18 + 0xc)) {
            lVar15 = 0;
            pppppppdVar21 = pppppppdVar16;
            do {
              uVar28 = (ulonglong)local_a0 & 0xffffffff;
              pppppppdVar16 = (double *******)ppppppdVar18[2][lVar15];
              if (local_40 == pppppppdVar16) {
                pVar20 = local_a0._0_4_;
                if ((!bVar32) && (local_40 != (double *******)0x0)) {
                  bVar32 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (pppppppdVar16 != (double *******)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar32) && (local_40 != (double *******)0x0)) {
                  local_40 = pppppppdVar16;
                  FUN_00d50b20();
                  bVar32 = true;
                  pVar20 = local_a0._0_4_;
                }
                else {
                  bVar32 = true;
                  local_40 = pppppppdVar16;
                  pVar20 = local_a0._0_4_;
                }
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              uVar13 = FUN_013de560();
              pppppppdVar16 = local_80;
              uVar19 = (undefined7)((ulonglong)uVar13 >> 8);
              cVar5 = (char)uVar28;
              if (local_80 == pppppppdVar21) {
                pppppppdVar16 = pppppppdVar21;
                local_a0 = (double)uVar28;
                if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
                  local_a0 = (double)CONCAT71(uVar19,1);
                  if (local_78 != '\0') goto LAB_0133eade;
                  local_a0 = (double)CONCAT71(uVar19,1);
                  FUN_00d50b00();
                }
joined_r0x0133eab6:
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_78 == '\0') {
                  if (local_80 != (double *******)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                  local_a0 = (double)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                  if ((cVar5 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
                    FUN_00d50b20();
                  }
                  goto joined_r0x0133eab6;
                }
                local_a0 = (double)CONCAT71(uVar19,1);
                if ((cVar5 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0133eade:
              if (pppppppdVar16 != local_48) {
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar21 = pppppppdVar16;
                if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                  pppppppdVar21 =
                       (double *******)pppppppdVar16[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4]
                  ;
                }
                lVar17 = (*(code *)(*pppppppdVar21)[0x70])();
                if ((longlong)local_e0 <= lVar17) {
                  pvVar12 = _pthread_getspecific(pVar20);
                  pppppppdVar21 = pppppppdVar16;
                  if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                    pppppppdVar21 =
                         (double *******)
                         pppppppdVar16[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                  }
                  lVar17 = (*(code *)(*pppppppdVar21)[0x70])();
                  if (lVar17 - (longlong)local_e0 < (longlong)local_128) {
                    pvVar12 = _pthread_getspecific(pVar20);
                    pppppppdVar21 = pppppppdVar16;
                    if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                      pppppppdVar21 =
                           (double *******)
                           pppppppdVar16[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                    }
                    lVar17 = (*(code *)(*pppppppdVar21)[0x70])();
                    local_128 = (double *******)(lVar17 - (longlong)local_e0);
                  }
                }
              }
              lVar15 = lVar15 + 1;
              ppppppdVar18 = unaff_RDI[8];
              pppppppdVar21 = pppppppdVar16;
            } while (lVar15 < *(int *)((longlong)ppppppdVar18 + 0xc));
          }
          pppppppdVar22 = local_128;
          pppppppdVar23 = local_40;
          if ((longlong)local_128 < (longlong)local_f0) {
            local_f0 = local_128;
          }
        }
        if ((local_a0._0_1_ != '\0') && (pppppppdVar16 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar32) && (pppppppdVar23 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_0133ec12:
      pppppppdVar23 = local_f8;
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
      pppppppdVar21 = local_f8;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar23 = pppppppdVar21, lVar15 != 0)) {
        pppppppdVar22 = local_38;
      }
      local_2a0 = local_48;
      local_298 = '\0';
      local_128 = (double *******)FUN_014e3650();
      if ((local_298 != '\0') && (local_2a0 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      local_80 = local_38;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      local_80 = local_48;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_128 == (double *******)0x0) {
      bVar32 = false;
      local_88 = (undefined8 *)0x0;
      local_58 = (double *)0x0;
      pppppppdVar21 = (double *******)0x0;
    }
    else {
      if (local_res18 == '\0') goto LAB_0133f4a9;
      if (*param_2 == 0.0) {
        uVar1 = false;
LAB_0133f502:
        pVar20 = (pthread_key_t)pppppppdVar22;
        local_190 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        if ((local_138._0_1_ != '\0') &&
           (pppppppdVar21 = (double *******)*unaff_RSI, pppppppdVar21 != (double *******)0x0)) {
          uVar28 = CONCAT71((int7)((ulonglong)pppppppdVar23 >> 8),*(char *)(unaff_RSI + 1));
          if (*(char *)(unaff_RSI + 1) != '\0') {
            local_130 = 0;
            local_110 = (double *******)0x0;
            local_100 = (double *******)0x0;
            pppppppdVar16 = (double *******)0x0;
            local_150 = 0;
            local_120 = (double *******)0x0;
            FUN_00d50b00();
          }
          goto LAB_0133f56c;
        }
        local_120 = (double *******)0x0;
        local_150 = 0;
        local_130 = 0;
LAB_0133f6e1:
        local_110 = (double *******)0x0;
        local_100 = (double *******)0x0;
        local_e8 = (double *******)0x0;
        dVar35 = *param_2;
joined_r0x0133f70a:
        uVar2 = false;
      }
      else {
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        if (local_80 == (double *******)0x0) {
          bVar32 = false;
        }
        else {
          iVar8 = 5;
          pppppppdVar22 = unaff_RDI;
          if ((unaff_RDI[0x3f] == (double ******)0x0) &&
             (iVar8 = 6, unaff_RDI[0x40] == (double ******)0x0)) {
            if (unaff_RDI[0x29] == (double ******)0x0) {
              iVar8 = 0;
            }
            else {
              pvVar12 = _pthread_getspecific((pthread_key_t)unaff_RDI);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_0141bab0();
            }
          }
          bVar32 = iVar8 != 3;
        }
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar32) && (unaff_RDI[0x2a] != (double ******)0x0)) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_01538fa0();
          pVar20 = (pthread_key_t)pppppppdVar22;
          if (iVar8 == 0) goto LAB_0133f4a9;
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5500();
          pppppppdVar21 = local_80;
          if ((((local_78 == '\0') && (local_80 != (double *******)0x0)) &&
              (FUN_00d50b00(), local_78 != '\0')) && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          ppppppdVar18 = unaff_RDI[7];
          local_40 = pppppppdVar21;
          if (ppppppdVar18 == (double ******)0x0) {
            dVar35 = 0.0;
          }
          else {
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              ppppppdVar18 = unaff_RDI[7];
              lVar15 = FUN_00e8b990();
              if (lVar15 != 0) {
                ppppppdVar18 = (double ******)
                               ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
            }
            dVar35 = (double)(*(code *)(*ppppppdVar18)[0x6e])();
          }
          pVar9 = FUN_00e7d850(SUB84(dVar35 * DAT_0240f0f8,0));
          ppppppdVar18 = unaff_RDI[7];
          if (ppppppdVar18 == (double ******)0x0) {
            dVar35 = 0.0;
          }
          else {
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              ppppppdVar18 = unaff_RDI[7];
              lVar15 = FUN_00e8b990();
              if (lVar15 != 0) {
                ppppppdVar18 = (double ******)
                               ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
            }
            dVar35 = (double)(*(code *)(*ppppppdVar18)[0x6e])();
          }
          iVar8 = FUN_00e7d850(SUB84(dVar35 * DAT_0240f100,0));
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pppppppdVar21 = local_80;
          pvVar12 = _pthread_getspecific(pVar20);
          pppppppdVar16 = local_80;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar16, lVar15 != 0)) {
            pppppppdVar21 =
                 (double *******)pppppppdVar16[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          (*(code *)(*pppppppdVar21)[0x70])();
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pppppppdVar21 = local_80;
          pvVar12 = _pthread_getspecific(pVar20);
          pppppppdVar16 = local_80;
          if ((pvVar12 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar16, lVar15 != 0)) {
            pppppppdVar21 =
                 (double *******)pppppppdVar16[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          pppppppdVar21 = (double *******)(*(code *)(*pppppppdVar21)[0x71])();
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          pppppppdVar23 = local_40;
          pppppppdVar16 = (double *******)(longlong)iVar8;
          if ((longlong)pppppppdVar21 < (longlong)iVar8) {
            pppppppdVar16 = pppppppdVar21;
          }
          pvVar12 = _pthread_getspecific(pVar9);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          pppppppdVar22 = pppppppdVar16;
          FUN_014bad20();
          uVar1 = true;
          if (pppppppdVar23 != (double *******)0x0) {
            FUN_00d50b20();
          }
        }
        else {
LAB_0133f4a9:
          uVar1 = false;
        }
        pVar20 = (pthread_key_t)pppppppdVar22;
        pppppppdVar21 = (double *******)*param_2;
        if (pppppppdVar21 == (double *******)0x0) goto LAB_0133f502;
        uVar28 = CONCAT71((int7)((ulonglong)pppppppdVar23 >> 8),*(char *)(param_2 + 1));
        if (*(char *)(param_2 + 1) != '\0') {
          local_130 = 0;
          local_110 = (double *******)0x0;
          local_100 = (double *******)0x0;
          pppppppdVar16 = (double *******)0x0;
          local_150 = 0;
          local_120 = (double *******)0x0;
          FUN_00d50b00();
        }
LAB_0133f56c:
        local_150 = uVar28 & 0xffffffff;
        local_120 = pppppppdVar21;
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        local_110 = local_80;
        pppppppdVar22 = local_80;
        if (local_80 == (double *******)0x0) {
          local_130 = 0;
          local_110 = (double *******)0x0;
joined_r0x0133f623:
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_110 == (double *******)0x0) {
            local_190 = 0;
            goto LAB_0133f6e1;
          }
        }
        else {
          if (local_78 == '\0') {
            uVar13 = FUN_00d50b00();
            local_130 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            goto joined_r0x0133f623;
          }
          local_130 = CONCAT71((int7)((ulonglong)local_80 >> 8),1);
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        local_100 = local_80;
        pppppppdVar22 = local_80;
        if (local_80 == (double *******)0x0) {
          local_100 = (double *******)0x0;
          pppppppdVar16 = (double *******)0x0;
joined_r0x0133f6d4:
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar19 = (undefined7)((ulonglong)pppppppdVar16 >> 8);
          if (local_78 == '\0') {
            FUN_00d50b00();
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            goto joined_r0x0133f6d4;
          }
          pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        pppppppdVar21 = local_100;
        if ((pvVar12 != (void *)0x0) &&
           (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_100, lVar15 != 0)) {
          pppppppdVar22 = local_100;
          pppppppdVar21 = (double *******)local_100[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
        lVar15 = (*(code *)(*pppppppdVar21)[0x70])();
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pppppppdVar22 = local_120;
        }
        lVar17 = FUN_013de650();
        if (lVar17 <= lVar15) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_100;
          }
          local_40 = (double *******)FUN_014bacf0();
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_120;
          }
          dVar35 = (double)FUN_013de8d0();
          if ((double)local_40 - dVar35 <= DAT_023934c8) {
            local_190 = 0;
            dVar35 = *param_2;
            local_e8 = pppppppdVar16;
            goto joined_r0x0133f70a;
          }
        }
        local_3b8 = local_120;
        local_3b0 = 0;
        FUN_0133aef0();
        uVar2 = true;
        local_190 = 0;
        dVar35 = *param_2;
        local_e8 = pppppppdVar16;
      }
      pppppppdVar21 = local_e8;
      if ((dVar35 != 0.0) && (*unaff_RSI != 0.0)) {
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_013dfdd0();
        pppppppdVar21 = local_80;
        uVar19 = (undefined7)((ulonglong)pppppppdVar16 >> 8);
        if (local_80 == local_110) {
          if (((char)local_130 == '\0') && (local_80 != (double *******)0x0)) {
            if (local_78 != '\0') {
              uVar19 = (undefined7)((ulonglong)uVar13 >> 8);
              goto joined_r0x0133f9c0;
            }
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            FUN_00d50b00();
          }
          else {
            pppppppdVar16 = (double *******)(local_130 & 0xffffffff);
          }
LAB_0133fa31:
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_110 == (double *******)0x0) {
            local_110 = (double *******)0x0;
            local_130 = (ulonglong)pppppppdVar16 & 0xffffffff;
            pppppppdVar21 = local_e8;
            goto joined_r0x0133fb3f;
          }
          local_130 = (ulonglong)pppppppdVar16 & 0xffffffff;
        }
        else {
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            if (((char)local_130 == '\0') || (local_110 == (double *******)0x0)) {
              local_110 = pppppppdVar21;
            }
            else {
              local_110 = pppppppdVar21;
              FUN_00d50b20();
            }
            goto LAB_0133fa31;
          }
          if (((char)local_130 != '\0') && (local_110 != (double *******)0x0)) {
            local_110 = local_80;
            uVar13 = FUN_00d50b20();
          }
          uVar19 = (undefined7)((ulonglong)uVar13 >> 8);
          local_110 = pppppppdVar21;
joined_r0x0133f9c0:
          local_130 = CONCAT71(uVar19,1);
          if (local_110 == (double *******)0x0) {
            local_110 = (double *******)0x0;
            pppppppdVar21 = local_e8;
            goto joined_r0x0133fb3f;
          }
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_110;
        }
        FUN_013dd6a0();
        pppppppdVar21 = local_80;
        uVar19 = (undefined7)((ulonglong)pppppppdVar16 >> 8);
        if (local_80 == local_100) {
          pppppppdVar16 = local_e8;
          if (((char)local_e8 == '\0') && (local_80 != (double *******)0x0)) {
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            if (local_78 != '\0') goto LAB_0133fd4c;
            FUN_00d50b00();
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
          }
LAB_0133fd38:
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
            if (((char)local_e8 == '\0') || (local_100 == (double *******)0x0)) {
              local_100 = pppppppdVar21;
            }
            else {
              local_100 = pppppppdVar21;
              FUN_00d50b20();
            }
            goto LAB_0133fd38;
          }
          pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
          if (((char)local_e8 == '\0') || (local_100 == (double *******)0x0)) {
            local_100 = local_80;
          }
          else {
            local_100 = local_80;
            FUN_00d50b20();
          }
        }
LAB_0133fd4c:
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double *******)FUN_013de8d0();
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_100;
        }
        dVar35 = (double)FUN_014bb4b0();
        pppppppdVar21 = pppppppdVar16;
        if ((double)local_40 < dVar35) {
          local_3a8 = *unaff_RSI;
          local_3a0 = 0;
          uVar2 = true;
          FUN_0133aef0();
        }
      }
joined_r0x0133fb3f:
      local_e8 = pppppppdVar21;
      if (local_res20 != 0) {
        bVar32 = (bool)uVar2;
        if (*unaff_RSI != 0.0) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfdd0();
          pppppppdVar21 = local_80;
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (pppppppdVar21 == (double *******)0x0) {
            if (local_res10 != '\0') {
              local_398 = *unaff_RSI;
              local_390 = 0;
              pppppppdVar22 = (double *******)0x0;
              FUN_0135d2e0(0,&local_398);
              pppppppdVar21 = local_220;
              if (local_218 == '\0') {
                if (local_220 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_218 = '\0';
              }
              local_c0 = (double *******)*unaff_RSI;
              local_80 = pppppppdVar21;
              local_78 = '\0';
              local_b8 = '\0';
              uVar29 = FUN_01346520();
              pppppppdVar16 = (double *******)(ulonglong)uVar29;
              if (pppppppdVar21 != (double *******)0x0) {
                FUN_00d50b20();
              }
              bVar32 = true;
              if ((char)uVar29 != '\0') goto LAB_0133fbb8;
            }
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bcf30();
            bVar32 = (bool)uVar2;
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
LAB_0133fbb8:
        uVar2 = bVar32;
        if (*param_2 != 0.0) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfdd0();
          pppppppdVar21 = local_80;
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (pppppppdVar21 == (double *******)0x0) {
            if (local_res10 != '\0') {
              local_388 = *param_2;
              local_380 = 0;
              pppppppdVar22 = (double *******)0x0;
              FUN_0135d2e0(0,&local_388);
              if (local_218 == '\0') {
                if (local_220 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_218 = '\0';
              }
              local_c0 = (double *******)*param_2;
              local_80 = local_220;
              local_78 = '\0';
              local_b8 = '\0';
              uVar29 = FUN_01346520();
              pppppppdVar16 = (double *******)(ulonglong)uVar29;
              if (local_220 != (double *******)0x0) {
                FUN_00d50b20();
              }
              uVar2 = true;
              if ((char)uVar29 != '\0') goto LAB_0133fe23;
            }
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bcf30();
            uVar2 = bVar32;
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
LAB_0133fe23:
      if (*unaff_RSI != 0.0) {
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        pppppppdVar16 = local_e8;
        FUN_013e0cc0();
      }
      if (*param_2 != 0.0) {
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        pppppppdVar16 = local_e8;
        FUN_013e0cc0();
        if ((bool)uVar1) {
          pppppppdVar16 = (double *******)*param_2;
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            pppppppdVar16 = (double *******)*param_2;
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              pppppppdVar16 =
                   (double *******)pppppppdVar16[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          local_1b8 = 0;
          ppppppdVar18 = unaff_RDI[0x2a];
          if (ppppppdVar18 != (double ******)0x0) {
            FUN_00d50b00();
          }
          local_1b8 = '\x01';
          local_1c0 = ppppppdVar18;
          FUN_013e1570();
          if ((local_1b8 != '\0') && (local_1c0 != (double ******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pdVar27 = local_58;
      if (local_148 == 0.0) {
        bVar6 = 0;
        bVar32 = false;
joined_r0x013400c8:
        if ((bool)uVar2) goto LAB_013403a1;
LAB_01340391:
        if (((bVar6 & bVar32 & (byte)local_118) == 0) || (local_res10 == '\0')) goto LAB_013403a1;
      }
      else {
        cVar5 = (byte)local_118;
        if ((char)local_50 == '\0') {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_48;
          }
          local_290 = local_38;
          local_288 = '\0';
          cVar5 = FUN_014d36f0();
          if ((local_288 != '\0') && (local_290 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        if (((unaff_RDI[0x3f] == (double ******)0x0) && (unaff_RDI[0x40] == (double ******)0x0)) &&
           (pppppppdVar16 = (double *******)unaff_RDI[0x29], pppppppdVar16 != (double *******)0x0))
        {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if (pvVar12 != (void *)0x0) {
            pppppppdVar16 = (double *******)unaff_RDI[0x29];
            lVar15 = FUN_00e8b990();
            if (lVar15 != 0) {
              pppppppdVar16 =
                   (double *******)pppppppdVar16[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          iVar8 = FUN_0141bab0();
          if (iVar8 == 2) {
            cVar5 = (byte)local_118;
          }
        }
        if ((local_res10 == '\0') || (cVar5 != '\0')) {
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_38;
          }
          local_280 = local_48;
          local_278 = '\0';
          FUN_014bc360();
          if ((local_278 != '\0') && (local_280 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppdVar22 = local_48;
          }
          local_270 = local_38;
          local_268 = '\0';
          FUN_014bc2e0();
          bVar6 = 1;
          if ((local_268 != '\0') && (local_270 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          bVar32 = local_148 != 0.0;
          goto joined_r0x013400c8;
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_38;
        }
        local_258 = '\0';
        local_260 = 0;
        FUN_014bc360();
        if ((local_258 != '\0') && (local_260 != 0)) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
        if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pppppppdVar22 = local_48;
        }
        local_248 = '\0';
        local_250 = 0;
        FUN_014bc2e0();
        if ((local_248 != '\0') && (local_250 != 0)) {
          FUN_00d50b20();
        }
        bVar6 = 0;
        bVar32 = local_148 != 0.0;
        if (!(bool)uVar2) goto LAB_01340391;
LAB_013403a1:
        *(char *)pdVar27 = local_res10;
      }
      cVar5 = FUN_01334f30();
      if (cVar5 != '\0') {
        *(undefined1 *)pdVar27 = 1;
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar22);
      pppppppdVar21 = local_38;
      if ((pvVar12 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar15 != 0)) {
        pppppppdVar22 = local_38;
        pppppppdVar21 = (double *******)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      lVar15 = (*(code *)(*pppppppdVar21)[0x70])();
      pVar20 = (pthread_key_t)pppppppdVar22;
      if (lVar15 < lVar14) {
        pvVar12 = _pthread_getspecific(pVar20);
        pppppppdVar21 = local_38;
        if ((pvVar12 != (void *)0x0) &&
           (lVar14 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar14 != 0)) {
          pppppppdVar22 = local_38;
          pppppppdVar21 = (double *******)local_38[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
        }
        pVar20 = (pthread_key_t)pppppppdVar22;
        (*(code *)(*pppppppdVar21)[0x70])();
      }
      pvVar12 = _pthread_getspecific(pVar20);
      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pVar20 = (pthread_key_t)local_38;
      }
      lVar14 = FUN_014bb590();
      if ((longlong)local_158 < lVar14) {
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bb590();
      }
      pppppdVar11 = (double *****)FUN_00e7b4e0();
      *local_210 = pppppdVar11;
      ppppppdVar18 = local_210;
      if (unaff_RDI[0x3f] == (double ******)0x0) {
        if ((unaff_RDI[0x40] == (double ******)0x0) &&
           (pppppppdVar16 = (double *******)unaff_RDI[0x29], pppppppdVar16 != (double *******)0x0))
        {
          pvVar12 = _pthread_getspecific((pthread_key_t)local_210);
          if (pvVar12 != (void *)0x0) {
            pppppppdVar16 = (double *******)unaff_RDI[0x29];
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pppppppdVar16 =
                   (double *******)pppppppdVar16[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
            }
          }
          iVar8 = FUN_0141bab0();
          if (iVar8 == 3) {
            local_378 = local_108;
            local_370 = 0;
            FUN_0135d660();
          }
        }
        if (((unaff_RDI[0x3f] != (double ******)0x0) || (unaff_RDI[0x40] != (double ******)0x0)) ||
           (unaff_RDI[0x29] == (double ******)0x0)) goto LAB_01340524;
        pvVar12 = _pthread_getspecific((pthread_key_t)ppppppdVar18);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar8 = FUN_0141bab0();
        if (iVar8 != 1) goto LAB_01340524;
        if (0 < *(int *)((longlong)local_d8 + 0xc)) {
          lVar14 = 0;
          do {
            pppppdVar11 = local_d8[2][lVar14];
            if (pppppdVar11 != (double *****)0x0) {
              FUN_00d50b00();
            }
            local_360 = 1;
            local_368 = pppppdVar11;
            FUN_013295b0();
            if (pppppdVar11 != (double *****)0x0) {
              FUN_00d50b20();
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < *(int *)((longlong)local_d8 + 0xc));
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)local_d8);
        pppppppdVar21 = local_38;
        if ((pvVar12 != (void *)0x0) &&
           (lVar14 = FUN_00e8b990(), pppppppdVar21 = local_38, lVar14 != 0)) {
          pppppppdVar21 = (double *******)local_38[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
        }
        local_1a8 = 0;
        if (unaff_RDI != (double *******)0x0) {
          FUN_00d50b00();
        }
        local_1a8 = '\x01';
        local_1b0 = unaff_RDI;
        FUN_014e8b20();
        local_50 = local_80;
        pppppppdVar22 = local_80;
        if (local_80 == (double *******)0x0) {
          pppppppdVar16 = (double *******)CONCAT71((int7)((ulonglong)pppppppdVar21 >> 8),1);
          local_50 = (double *******)0x0;
          local_58 = (double *)0x0;
        }
        else {
          if (local_78 == '\0') {
            uVar13 = FUN_00d50b00();
            pppppppdVar16 = (double *******)0x0;
            local_58 = (double *)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            if ((local_78 == '\0') || (local_80 == (double *******)0x0)) goto LAB_0134424d;
            pppppppdVar21 = (double *******)FUN_00d50b20();
          }
          else {
            local_78 = '\0';
            pppppppdVar21 = local_80;
          }
          pppppppdVar16 = (double *******)0x0;
          local_58 = (double *)CONCAT71((int7)((ulonglong)pppppppdVar21 >> 8),1);
        }
LAB_0134424d:
        if ((local_1a8 != '\0') && (local_1b0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((byte)pppppppdVar16 == 0) {
          local_358 = local_50;
          local_350 = 0;
          FUN_013293f0();
        }
        pVar20 = (pthread_key_t)pppppppdVar22;
        if (local_48 != (double *******)0x0) {
          pvVar12 = _pthread_getspecific(pVar20);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pppppppdVar22 = local_48;
          }
          pVar20 = (pthread_key_t)pppppppdVar22;
          local_198 = 0;
          if (unaff_RDI != (double *******)0x0) {
            FUN_00d50b00();
          }
          local_198 = '\x01';
          local_1a0 = unaff_RDI;
          FUN_014e8b20();
          pppppppdVar21 = local_80;
          uVar19 = (undefined7)((ulonglong)pppppppdVar16 >> 8);
          if (local_80 == local_50) {
            bVar6 = (byte)pppppppdVar16 & local_80 != (double *******)0x0;
            pppppppdVar16 = (double *******)CONCAT71(uVar19,bVar6);
            if (bVar6 == 1) {
              if (local_78 != '\0') goto LAB_01344369;
              pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
              FUN_00d50b00();
            }
            else {
              pppppppdVar16 = (double *******)((ulonglong)local_58 & 0xffffffff);
            }
LAB_013444f7:
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar6 = (byte)local_58 & local_50 != (double *******)0x0;
              pVar20 = (pthread_key_t)CONCAT71((int7)((ulonglong)local_58 >> 8),bVar6);
              pppppppdVar16 = (double *******)CONCAT71(uVar19,1);
              if (bVar6 == 1) {
                local_50 = pppppppdVar21;
                FUN_00d50b20();
              }
              else {
                local_50 = pppppppdVar21;
              }
              goto LAB_013444f7;
            }
            bVar6 = (byte)local_58 & local_50 != (double *******)0x0;
            pVar20 = (pthread_key_t)CONCAT71((int7)((ulonglong)local_58 >> 8),bVar6);
            local_50 = pppppppdVar21;
            if (bVar6 == 1) {
              local_50 = local_80;
              FUN_00d50b20();
              local_50 = pppppppdVar21;
            }
LAB_01344369:
            local_78 = '\0';
            pppppppdVar16 = (double *******)CONCAT71((int7)((ulonglong)pppppppdVar16 >> 8),1);
          }
          if ((local_198 != '\0') && (local_1a0 != (double *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 != (double *******)0x0) {
            local_348 = local_50;
            local_340 = 0;
            FUN_013293f0();
            local_58 = (double *)((ulonglong)pppppppdVar16 & 0xffffffff);
            goto LAB_01340530;
          }
          local_58 = (double *)((ulonglong)pppppppdVar16 & 0xffffffff);
          goto LAB_01340526;
        }
      }
      else {
LAB_01340524:
        pVar20 = (pthread_key_t)ppppppdVar18;
        local_58 = (double *)0x0;
LAB_01340526:
        local_50 = (double *******)0x0;
      }
LAB_01340530:
      local_88 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_88 = local_308;
      (*local_208)();
      if (local_148 == 0.0) {
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_e0 = local_80;
        if (local_80 == (double *******)0x0) {
          local_118 = 0;
          local_e0 = (double *******)0x0;
        }
        else if (local_78 == '\0') {
          uVar13 = FUN_00d50b00();
          local_118 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
          if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
          local_118 = CONCAT71((int7)((ulonglong)local_80 >> 8),1);
        }
        if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar29 = *(uint *)((longlong)local_e0 + 0xc);
        if (0 < (int)uVar29) {
          dVar35 = (double)(longlong)local_128;
          lVar14 = (ulonglong)uVar29 + 1;
          pppppppdVar21 = (double *******)0x0;
          bVar32 = false;
          do {
            uVar29 = uVar29 - 1;
            pVar20 = uVar29;
            pvVar12 = _pthread_getspecific(uVar29);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            pppppppdVar22 = local_80;
            if (local_80 == pppppppdVar21) {
              pppppppdVar22 = pppppppdVar21;
              bVar3 = bVar32;
              if ((bVar32) || (local_80 == (double *******)0x0)) goto joined_r0x01341686;
              bVar3 = true;
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_0134166b;
              }
            }
            else if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if ((bVar32) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
                pppppppdVar21 = pppppppdVar22;
LAB_0134166b:
                pppppppdVar22 = pppppppdVar21;
                bVar3 = true;
              }
joined_r0x01341686:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if ((bVar32) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_138._0_1_ == '\0') {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = (double *******)FUN_01259520();
              ppppppdVar18 = unaff_RDI[7];
              if (ppppppdVar18 == (double ******)0x0) {
                local_b0 = 0.0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  ppppppdVar18 = unaff_RDI[7];
                  lVar15 = FUN_00e8b990();
                  if (lVar15 != 0) {
                    ppppppdVar18 = (double ******)
                                   ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                  }
                }
                local_b0 = (double)(*(code *)(*ppppppdVar18)[0x6e])();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_f0 = (double *******)FUN_01264170();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar36 = (double)FUN_0125a280();
              FUN_01259540(SUB84(((double)local_40 +
                                 ((dVar35 / local_b0) * (double)local_f0) / local_160) - dVar36,0));
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              pppppppdVar21 = local_80;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_2d0 = 1;
              local_2d8 = pppppppdVar21;
              local_310 = 0;
              local_318 = pppppppdVar22;
              FUN_0132a0a0();
              if (pppppppdVar21 != (double *******)0x0) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = (double *******)FUN_0125a280();
              ppppppdVar18 = unaff_RDI[7];
              if (ppppppdVar18 == (double ******)0x0) {
                local_b0 = 0.0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  ppppppdVar18 = unaff_RDI[7];
                  lVar15 = FUN_00e8b990();
                  if (lVar15 != 0) {
                    ppppppdVar18 = (double ******)
                                   ppppppdVar18[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                  }
                }
                local_b0 = (double)(*(code *)(*ppppppdVar18)[0x6e])();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_f0 = (double *******)FUN_01264170();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_168 = (double)FUN_01264170();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar36 = (double)FUN_0125a280();
              local_40 = (double *******)
                         ((double)local_40 + ((dVar35 / local_b0) * (double)local_f0) / local_160);
              FUN_01259540(SUB84((local_168 + dVar36) - (double)local_40,0));
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012642b0((int)local_40);
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              pppppppdVar21 = local_80;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_2e0 = 1;
              local_2e8 = pppppppdVar21;
              local_320 = 0;
              local_328 = pppppppdVar22;
              FUN_0132a0a0();
              if (pppppppdVar21 != (double *******)0x0) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            if (NAN(local_13c)) {
LAB_01341f2a:
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de3b0();
              FUN_012595a0();
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_0125a2c0();
              if (NAN(fVar33)) goto LAB_01341f2a;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_013de3b0();
              if (NAN(fVar33)) goto LAB_01341f2a;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar7 = FUN_0125a2c0();
              local_40 = (double *******)CONCAT44(local_40._4_4_,uVar7);
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_013de3b0();
              FUN_012595a0((local_40._0_4_ - local_13c) + fVar33);
            }
            local_78 = '\0';
            local_80 = pppppppdVar22;
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            lVar14 = lVar14 + -1;
            pppppppdVar21 = pppppppdVar22;
            bVar32 = bVar3;
          } while (1 < lVar14);
          local_40 = (double *******)0x0;
          local_f0 = (double *******)0x0;
          goto LAB_013432fd;
        }
        local_f0 = (double *******)0x0;
        local_40 = (double *******)0x0;
        bVar3 = false;
        pppppppdVar22 = (double *******)0x0;
LAB_01343308:
        local_78 = '\0';
        local_80 = (double *******)0x0;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        local_70 = local_88;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar8 = -local_68._4_4_;
            }
            else {
              iVar8 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar8);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar8 = 0;
            }
            local_68 = CONCAT44(iVar8,(int)local_68);
          }
          lVar14 = (longlong)(int)local_68;
          iVar8 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar8);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar8) break;
          lVar15 = local_70[2];
          local_80 = *(double ********)(lVar15 + 8 + lVar14 * 8);
          pvVar12 = _pthread_getspecific((pthread_key_t)lVar15);
          pVar20 = (pthread_key_t)lVar15;
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          if ((local_b8 == '\0') && (local_c0 != (double *******)0x0)) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126f610();
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar35 = (double)FUN_01264310();
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar36 = (double)FUN_01264170();
          if (dVar36 < dVar35) {
LAB_013435d0:
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de9b0();
            FUN_01259540();
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013defa0();
            FUN_01264390();
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012708c0();
            if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            if (local_c0 != (double *******)0x0) {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012708c0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01264380();
            if (dVar35 <= 0.0) goto LAB_013435d0;
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_01264380();
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar36 = (double)FUN_01264310();
            if (dVar35 <= dVar36) goto LAB_013435d0;
          }
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a5f0();
          pvVar12 = _pthread_getspecific(pVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012682a0();
          if (local_c0 != (double *******)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
      }
      else {
        pvVar12 = _pthread_getspecific(pVar20);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar12 = _pthread_getspecific(pVar20);
        pppppppdVar21 = local_c0;
        if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pppppppdVar21 = (double *******)local_c0[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
        }
        FUN_013dd790();
        local_e0 = local_80;
        if (local_80 == (double *******)0x0) {
          uVar7 = (undefined4)CONCAT71((int7)((ulonglong)pppppppdVar21 >> 8),1);
          local_118 = 0;
          local_e0 = (double *******)0x0;
        }
        else {
          if (local_78 == '\0') {
            uVar13 = FUN_00d50b00();
            uVar7 = 0;
            local_118 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            if ((local_78 == '\0') || (local_80 == (double *******)0x0)) goto LAB_01340749;
            pppppppdVar21 = (double *******)FUN_00d50b20();
          }
          else {
            local_78 = '\0';
            pppppppdVar21 = local_80;
          }
          local_118 = CONCAT71((int7)((ulonglong)pppppppdVar21 >> 8),1);
          uVar7 = 0;
        }
LAB_01340749:
        if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar29 = *(uint *)((longlong)local_e0 + 0xc);
        local_160 = (double)(longlong)local_128;
        pppppppdVar21 = (double *******)((longlong)local_128 + local_300);
        local_158 = (double)(longlong)pppppppdVar21;
        local_208 = (code *)CONCAT44(local_208._4_4_,uVar7);
        if ((int)uVar29 < 1) {
          pppppppdVar22 = (double *******)0x0;
          bVar3 = false;
          local_40 = (double *******)0x0;
          local_f0 = (double *******)0x0;
        }
        else {
          local_210 = (double ******)(double)local_300;
          pppppppdVar16 = (double *******)((ulonglong)uVar29 + 1);
          pppppppdVar21 = (double *******)(ulonglong)(uVar29 - 1);
          local_f0 = (double *******)0x0;
          local_40 = (double *******)0x0;
          bVar3 = false;
          pppppppdVar23 = (double *******)0x0;
          do {
            pppppppdVar25 = (double *******)((ulonglong)local_f0 & 0xffffffff);
            local_138 = (double)CONCAT44(local_138._4_4_,(pthread_key_t)pppppppdVar21);
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            pppppppdVar22 = local_80;
            if (local_80 == pppppppdVar23) {
              pppppppdVar22 = pppppppdVar23;
              bVar32 = bVar3;
              if ((bVar3) || (local_80 == (double *******)0x0)) goto joined_r0x01340906;
              bVar32 = true;
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_013408eb;
              }
            }
            else if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar32 = true;
              if ((bVar3) && (pppppppdVar23 != (double *******)0x0)) {
                FUN_00d50b20();
                pppppppdVar23 = pppppppdVar22;
LAB_013408eb:
                pppppppdVar22 = pppppppdVar23;
                bVar32 = true;
              }
joined_r0x01340906:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar32 = true;
              if ((bVar3) && (pppppppdVar23 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar32;
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar21);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_01268dd0();
            pppppppdVar23 = local_80;
            uVar19 = (undefined7)((ulonglong)uVar13 >> 8);
            cVar5 = (char)pppppppdVar25;
            if (local_80 == local_40) {
              local_f0 = pppppppdVar25;
              pppppppdVar23 = local_40;
              if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
                local_f0 = (double *******)CONCAT71(uVar19,1);
                if (local_78 != '\0') goto LAB_01340a6e;
                local_f0 = (double *******)CONCAT71(uVar19,1);
                FUN_00d50b00();
                pppppppdVar23 = local_40;
              }
joined_r0x01340a39:
              local_40 = pppppppdVar23;
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  uVar13 = FUN_00d50b00();
                }
                local_f0 = (double *******)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                if ((cVar5 != '\0') && (local_40 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x01340a39;
              }
              local_f0 = (double *******)CONCAT71(uVar19,1);
              if ((cVar5 == '\0') || (local_40 == (double *******)0x0)) {
                local_40 = local_80;
              }
              else {
                FUN_00d50b20();
                local_40 = pppppppdVar23;
              }
            }
LAB_01340a6e:
            pVar20 = (pthread_key_t)pppppppdVar21;
            if ((longlong)local_128 < 0) {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264180();
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar21 = local_c0;
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pppppppdVar21 =
                     (double *******)local_c0[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              (*(code *)(*pppppppdVar21)[0x6f])();
              pppppppdVar21 = local_80;
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar23 = local_80;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar23, lVar14 != 0)) {
                pppppppdVar21 =
                     (double *******)pppppppdVar23[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              ppppppdVar18 = unaff_RDI[7];
              if (ppppppdVar18 == (double ******)0x0) {
                dVar35 = 0.0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  ppppppdVar18 = unaff_RDI[7];
                  lVar14 = FUN_00e8b990();
                  if (lVar14 != 0) {
                    ppppppdVar18 = (double ******)
                                   ppppppdVar18[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                }
                dVar35 = (double)(*(code *)(*ppppppdVar18)[0x6e])();
              }
              local_a0 = (double)(*(code *)(*pppppppdVar21)[0x70])(SUB84(local_158 / dVar35,0));
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_148 = (double)FUN_0125a280();
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
LAB_01340f5e:
              local_a0 = local_a0 + local_148;
            }
            else {
              if (local_40 != (double *******)0x0) {
                pvVar12 = _pthread_getspecific(pVar20);
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar20 = (pthread_key_t)local_40;
                }
                FUN_01264180();
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar21 = local_c0;
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pppppppdVar21 =
                       (double *******)local_c0[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                (*(code *)(*pppppppdVar21)[0x6f])();
                pppppppdVar21 = local_80;
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar23 = local_80;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar23, lVar14 != 0)) {
                  pppppppdVar21 =
                       (double *******)pppppppdVar23[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                  ;
                }
                ppppppdVar18 = unaff_RDI[7];
                if (ppppppdVar18 == (double ******)0x0) {
                  dVar35 = 0.0;
                }
                else {
                  pvVar12 = _pthread_getspecific(pVar20);
                  if (pvVar12 != (void *)0x0) {
                    ppppppdVar18 = unaff_RDI[7];
                    lVar14 = FUN_00e8b990();
                    if (lVar14 != 0) {
                      ppppppdVar18 = (double ******)
                                     ppppppdVar18[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                    }
                  }
                  dVar35 = (double)(*(code *)(*ppppppdVar18)[0x6e])();
                }
                local_a0 = (double)(*(code *)(*pppppppdVar21)[0x70])(SUB84(local_160 / dVar35,0));
                pvVar12 = _pthread_getspecific(pVar20);
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar20 = (pthread_key_t)local_40;
                }
                local_148 = (double)FUN_0125a280();
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01340f5e;
              }
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar23 = local_38;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppppppdVar23 = local_38, lVar14 != 0)) {
                pppppppdVar21 = local_38;
                pppppppdVar23 =
                     (double *******)local_38[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              pVar20 = (pthread_key_t)pppppppdVar21;
              lVar14 = (*(code *)(*pppppppdVar23)[0x71])();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar35 = (double)FUN_01264170();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_a0 = (double)FUN_0125a280();
              local_a0 = ((double)lVar14 / (double)local_210) * dVar35 + local_a0;
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar35 = (double)FUN_0125a280();
            FUN_01259540(SUB84(local_a0 - dVar35,0));
            if (NAN(local_13c)) {
LAB_01341224:
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de3b0();
              FUN_012595a0();
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_0125a2c0();
              if (NAN(fVar33)) goto LAB_01341224;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_013de3b0();
              if (NAN(fVar33)) goto LAB_01341224;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_0125a2c0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar34 = (float)FUN_013de3b0();
              FUN_012595a0((fVar33 - local_13c) + fVar34);
            }
            local_78 = '\0';
            local_80 = pppppppdVar22;
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            pppppppdVar16 = (double *******)((longlong)pppppppdVar16 + -1);
            pppppppdVar21 = (double *******)(ulonglong)(local_138._0_4_ - 1);
            pppppppdVar23 = pppppppdVar22;
          } while (1 < (longlong)pppppppdVar16);
        }
        fVar33 = SUB84(pppppppdVar21,0);
        pvVar12 = _pthread_getspecific((pthread_key_t)fVar33);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar12 = _pthread_getspecific((pthread_key_t)fVar33);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        pppppppdVar21 = local_80;
        uVar31 = (undefined7)((ulonglong)pppppppdVar16 >> 8);
        uVar19 = extraout_var;
        if (local_80 == local_e0) {
          bVar6 = (byte)local_208 & local_80 != (double *******)0x0;
          fVar33 = (float)CONCAT31((int3)((ulonglong)local_208 >> 8),bVar6);
          if (bVar6 == 1) {
            if (local_78 != '\0') goto LAB_013413d7;
            pppppppdVar16 = (double *******)CONCAT71(uVar31,1);
            FUN_00d50b00();
          }
          else {
            pppppppdVar16 = (double *******)(local_118 & 0xffffffff);
          }
LAB_013420d8:
          if ((local_78 == '\0') || (local_80 == (double *******)0x0)) {
            local_118 = (ulonglong)pppppppdVar16 & 0xffffffff;
          }
          else {
            FUN_00d50b20();
            local_118 = (ulonglong)pppppppdVar16 & 0xffffffff;
          }
        }
        else {
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            pppppppdVar16 = (double *******)CONCAT71(uVar31,1);
            if ((byte)local_118 == '\0') {
              local_e0 = pppppppdVar21;
            }
            else {
              local_e0 = pppppppdVar21;
              FUN_00d50b20();
            }
            goto LAB_013420d8;
          }
          local_e0 = pppppppdVar21;
          if ((byte)local_118 != '\0') {
            local_e0 = local_80;
            FUN_00d50b20();
            local_e0 = pppppppdVar21;
            uVar19 = extraout_var_00;
          }
LAB_013413d7:
          local_78 = '\0';
          local_118 = CONCAT71(uVar19,1);
        }
        if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar29 = *(uint *)((longlong)local_e0 + 0xc);
        if (0 < (int)uVar29) {
          local_148 = (double)local_2c8;
          pppppppdVar16 = (double *******)((ulonglong)uVar29 + 1);
          fVar33 = (float)(uVar29 - 1);
          pppppppdVar21 = pppppppdVar22;
          do {
            pppppppdVar23 = (double *******)(ulonglong)(uint)fVar33;
            pppppppdVar22 = (double *******)((ulonglong)local_f0 & 0xffffffff);
            local_13c = fVar33;
            pvVar12 = _pthread_getspecific((pthread_key_t)fVar33);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_011ef8d0();
            pppppppdVar25 = local_80;
            uVar19 = (undefined7)((ulonglong)uVar13 >> 8);
            cVar5 = (char)pppppppdVar22;
            if (local_80 == local_40) {
              local_f0 = pppppppdVar22;
              pppppppdVar25 = local_40;
              if ((cVar5 == '\0') && (local_80 != (double *******)0x0)) {
                local_f0 = (double *******)CONCAT71(uVar19,1);
                if (local_78 != '\0') goto LAB_013422ce;
                local_f0 = (double *******)CONCAT71(uVar19,1);
                FUN_00d50b00();
                pppppppdVar25 = local_40;
              }
joined_r0x01342299:
              local_40 = pppppppdVar25;
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  uVar13 = FUN_00d50b00();
                }
                local_f0 = (double *******)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                if ((cVar5 != '\0') && (local_40 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x01342299;
              }
              local_f0 = (double *******)CONCAT71(uVar19,1);
              if ((cVar5 == '\0') || (local_40 == (double *******)0x0)) {
                local_40 = local_80;
              }
              else {
                FUN_00d50b20();
                local_40 = pppppppdVar25;
              }
            }
LAB_013422ce:
            pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar23);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pppppppdVar23 = local_40;
            }
            FUN_01268710();
            pppppppdVar22 = local_80;
            if (local_80 == pppppppdVar21) {
              pppppppdVar22 = pppppppdVar21;
              bVar32 = bVar3;
              if ((bVar3) || (local_80 == (double *******)0x0)) goto joined_r0x013423c6;
              bVar32 = true;
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_013423ab;
              }
            }
            else if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar32 = true;
              if ((bVar3) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
                pppppppdVar21 = pppppppdVar22;
LAB_013423ab:
                pppppppdVar22 = pppppppdVar21;
                bVar32 = true;
              }
joined_r0x013423c6:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar32 = true;
              if ((bVar3) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar32;
            pVar20 = (pthread_key_t)pppppppdVar23;
            if ((longlong)local_128 < 1) {
              if (pppppppdVar22 != (double *******)0x0) {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01264180();
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar21 = local_c0;
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pppppppdVar21 =
                       (double *******)local_c0[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                (*(code *)(*pppppppdVar21)[0x6f])();
                pppppppdVar21 = local_80;
                pvVar12 = _pthread_getspecific(pVar20);
                pppppppdVar23 = local_80;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar23, lVar14 != 0)) {
                  pppppppdVar21 =
                       (double *******)pppppppdVar23[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                  ;
                }
                ppppppdVar18 = unaff_RDI[7];
                if (ppppppdVar18 == (double ******)0x0) {
                  dVar35 = 0.0;
                }
                else {
                  pvVar12 = _pthread_getspecific(pVar20);
                  if (pvVar12 != (void *)0x0) {
                    ppppppdVar18 = unaff_RDI[7];
                    lVar14 = FUN_00e8b990();
                    if (lVar14 != 0) {
                      ppppppdVar18 = (double ******)
                                     ppppppdVar18[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                    }
                  }
                  dVar35 = (double)(*(code *)(*ppppppdVar18)[0x6e])();
                }
                local_a0 = (double)(*(code *)(*pppppppdVar21)[0x70])(SUB84(local_158 / dVar35,0));
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_138 = (double)FUN_0125a280();
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01342800;
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pppppppdVar23 = local_40;
              }
              local_a0 = (double)FUN_01259520();
              pvVar12 = _pthread_getspecific((pthread_key_t)pppppppdVar23);
              pppppppdVar21 = local_48;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppppppdVar21 = local_48, lVar14 != 0)) {
                pppppppdVar23 = local_48;
                pppppppdVar21 =
                     (double *******)local_48[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              pVar20 = (pthread_key_t)pppppppdVar23;
              lVar14 = (*(code *)(*pppppppdVar21)[0x71])();
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              dVar35 = (double)FUN_01264170();
              local_a0 = local_a0 - ((double)lVar14 / local_148) * dVar35;
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              FUN_01264180();
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar21 = local_c0;
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pppppppdVar21 =
                     (double *******)local_c0[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              (*(code *)(*pppppppdVar21)[0x6f])();
              pppppppdVar21 = local_80;
              pvVar12 = _pthread_getspecific(pVar20);
              pppppppdVar23 = local_80;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppppppdVar21 = pppppppdVar23, lVar14 != 0)) {
                pppppppdVar21 =
                     (double *******)pppppppdVar23[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              ppppppdVar18 = unaff_RDI[7];
              if (ppppppdVar18 == (double ******)0x0) {
                dVar35 = 0.0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  ppppppdVar18 = unaff_RDI[7];
                  lVar14 = FUN_00e8b990();
                  if (lVar14 != 0) {
                    ppppppdVar18 = (double ******)
                                   ppppppdVar18[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                }
                dVar35 = (double)(*(code *)(*ppppppdVar18)[0x6e])();
              }
              local_a0 = (double)(*(code *)(*pppppppdVar21)[0x70])(SUB84(local_160 / dVar35,0));
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              local_138 = (double)FUN_0125a280();
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
LAB_01342800:
              local_a0 = local_a0 + local_138;
            }
            pvVar12 = _pthread_getspecific(pVar20);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pVar20 = (pthread_key_t)local_40;
            }
            local_138 = (double)FUN_01259520();
            pvVar12 = _pthread_getspecific(pVar20);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pVar20 = (pthread_key_t)local_40;
            }
            FUN_012642b0(SUB84(local_a0,0));
            pvVar12 = _pthread_getspecific(pVar20);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pVar20 = (pthread_key_t)local_40;
            }
            FUN_01259540(SUB84(local_138 - local_a0,0));
            if (NAN((float)local_168)) {
LAB_01342bf1:
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de3b0();
              FUN_012595a0();
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              fVar33 = (float)FUN_0125a2c0();
              if (NAN(fVar33)) goto LAB_01342bf1;
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar33 = (float)FUN_013de3b0();
              if (NAN(fVar33)) goto LAB_01342bf1;
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              pvVar12 = _pthread_getspecific(pVar20);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              fVar33 = (float)FUN_0125a2c0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar34 = (float)FUN_013de3b0();
              FUN_012595a0((fVar33 - (float)local_168) + fVar34);
            }
            local_80 = local_40;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
              FUN_00d50b20();
            }
            pppppppdVar16 = (double *******)((longlong)pppppppdVar16 + -1);
            fVar33 = (float)((int)local_13c - 1);
            pppppppdVar21 = pppppppdVar22;
          } while (1 < (longlong)pppppppdVar16);
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)fVar33);
        if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          fVar33 = SUB84(local_38,0);
        }
        FUN_014bc420();
        if (local_80 == (double *******)0x0) {
          bVar32 = false;
        }
        else {
          pvVar12 = _pthread_getspecific((pthread_key_t)fVar33);
          if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            fVar33 = SUB84(local_38,0);
          }
          FUN_014bc420();
          bVar32 = local_c0 == local_48;
          if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)fVar33);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar12 = _pthread_getspecific((pthread_key_t)fVar33);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_013dd790();
        pppppppdVar21 = local_80;
        uVar19 = (undefined7)((ulonglong)pppppppdVar16 >> 8);
        if (local_80 == local_e0) {
          if (((byte)local_118 == '\0') && (local_80 != (double *******)0x0)) {
            pppppppdVar21 = local_e0;
            if (local_78 != '\0') goto LAB_01342e73;
            uVar28 = CONCAT71(uVar19,1);
            FUN_00d50b00();
          }
          else {
            uVar28 = local_118 & 0xffffffff;
          }
LAB_01342f0c:
          if ((local_78 == '\0') || (local_80 == (double *******)0x0)) {
            local_118 = uVar28 & 0xffffffff;
          }
          else {
            FUN_00d50b20();
            local_118 = uVar28 & 0xffffffff;
          }
        }
        else {
          if (local_78 == '\0') {
            if (local_80 != (double *******)0x0) {
              FUN_00d50b00();
            }
            uVar28 = CONCAT71(uVar19,1);
            if (((byte)local_118 == '\0') || (local_e0 == (double *******)0x0)) {
              local_e0 = pppppppdVar21;
            }
            else {
              local_e0 = pppppppdVar21;
              FUN_00d50b20();
            }
            goto LAB_01342f0c;
          }
          if (((byte)local_118 != '\0') && (local_e0 != (double *******)0x0)) {
            local_e0 = local_80;
            uVar13 = FUN_00d50b20();
          }
LAB_01342e73:
          local_78 = '\0';
          local_118 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
          local_e0 = pppppppdVar21;
        }
        if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar29 = *(uint *)((longlong)local_e0 + 0xc);
        if (0 < (int)uVar29) {
          lVar14 = (ulonglong)uVar29 + 1;
          pppppppdVar21 = pppppppdVar22;
          do {
            uVar29 = uVar29 - 1;
            pVar20 = uVar29;
            pvVar12 = _pthread_getspecific(uVar29);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            pppppppdVar22 = local_80;
            if (local_80 == pppppppdVar21) {
              pppppppdVar22 = pppppppdVar21;
              bVar4 = bVar3;
              if ((bVar3) || (local_80 == (double *******)0x0)) goto joined_r0x01343086;
              bVar4 = true;
              if (local_78 == '\0') {
                FUN_00d50b00();
                goto LAB_0134306b;
              }
            }
            else if (local_78 == '\0') {
              if (local_80 != (double *******)0x0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              if ((bVar3) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
                pppppppdVar21 = pppppppdVar22;
LAB_0134306b:
                pppppppdVar22 = pppppppdVar21;
                bVar4 = true;
              }
joined_r0x01343086:
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar4 = true;
              if ((bVar3) && (pppppppdVar21 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar4;
            if (bVar32) {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              pppppppdVar21 = local_80;
              if (local_78 == '\0') {
                if (local_80 != (double *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_2f0 = 1;
              local_2f8 = pppppppdVar21;
              local_330 = 0;
              local_338 = pppppppdVar22;
              FUN_0132a0a0();
              if (pppppppdVar21 != (double *******)0x0) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (double *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar12 = _pthread_getspecific(pVar20);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012708c0();
              pppppppdVar21 = local_80;
              if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                FUN_00d50b20();
              }
              if (pppppppdVar21 != (double *******)0x0) {
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012708c0();
                pvVar12 = _pthread_getspecific(pVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dffb0();
                if ((local_78 != '\0') && (local_80 != (double *******)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            lVar14 = lVar14 + -1;
            pppppppdVar21 = pppppppdVar22;
          } while (1 < lVar14);
        }
LAB_013432fd:
        if (local_88 != (undefined8 *)0x0) goto LAB_01343308;
      }
      if ((param_5 != '\0') && (*(int *)((longlong)local_88 + 0xc) != 0)) {
        local_238 = '\0';
        local_240 = local_88;
        FUN_00e7bdb0();
        FUN_01287c80();
        if ((local_238 != '\0') && (local_240 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_228 = '\0';
        local_230 = local_88;
        FUN_012879b0();
        if ((local_228 != '\0') && (local_230 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_f0 != '\0') && (local_40 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar3) && (pppppppdVar22 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (((byte)local_118 != '\0') && (local_e0 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_e8 != '\0') && (local_100 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_130 != '\0') && (local_110 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      bVar32 = true;
      pppppppdVar21 = local_50;
      if ((char)local_150 != '\0' && (char)local_190 == '\0') {
        FUN_00d50b20();
        pppppppdVar21 = local_50;
      }
    }
    if (local_108 == (undefined8 *)0x0) goto LAB_013439d2;
  }
  FUN_00d50b20();
LAB_013439d2:
  if ((bVar32) && (local_88 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_d8 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (pppppppdVar21 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_48 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (local_38 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  return (longlong)local_128;
}




// ============================================================
// @0134d090 — 7901 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0134edb3) */
/* WARNING: Removing unreachable block (ram,0x0134edbf) */
/* WARNING: Removing unreachable block (ram,0x0134edee) */
/* WARNING: Removing unreachable block (ram,0x0134edfa) */
/* WARNING: Removing unreachable block (ram,0x0134ee5d) */
/* WARNING: Removing unreachable block (ram,0x0134ee69) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134d090(double param_1,double param_2)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  pthread_key_t in_ECX;
  longlong **pplVar15;
  ulonglong uVar16;
  pthread_key_t pVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  double dVar23;
  double extraout_XMM0_Qa;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
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
  longlong *local_128;
  char local_120;
  longlong *local_d0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  longlong **local_a0;
  longlong *local_98;
  longlong **local_80;
  double local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  char local_40;
  longlong *local_38;
  
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  plVar4 = local_68;
  if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  plVar5 = local_68;
  if (((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  uVar20 = *(uint *)((longlong)plVar5 + 0xc);
  uVar21 = (ulonglong)uVar20;
  if (0 < (int)uVar20) {
    do {
      uVar1 = uVar21 - 1;
      plVar12 = (longlong *)(uVar1 & 0xffffffff);
      pvVar7 = _pthread_getspecific((pthread_key_t)uVar1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      local_38 = local_68;
      if (((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar12 = local_38;
      }
      FUN_01266fe0();
      plVar22 = local_68;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar22 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar12 = local_38;
        }
        FUN_012641c0();
        local_70 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 == (longlong *)0x0) goto LAB_0134d360;
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == (longlong *)0x0) {
LAB_0134d360:
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd790();
          plVar22 = local_68;
          if (local_60[0] == '\0') {
            if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
               (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60[0] = '\0';
          }
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar20 = *(uint *)((longlong)plVar22 + 0xc);
          if (0 < (int)uVar20) {
            lVar8 = (ulonglong)uVar20 + 1;
            do {
              uVar20 = uVar20 - 1;
              plVar12 = (longlong *)(ulonglong)uVar20;
              pvVar7 = _pthread_getspecific(uVar20);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef8d0();
              plVar22 = local_68;
              if (((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
                 ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (longlong *)0x0)))) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                plVar12 = local_38;
              }
              FUN_01266fe0();
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              if (local_68 == local_b0) {
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_98 = (longlong *)FUN_0125a280();
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  plVar12 = local_38;
                }
                local_78 = (double)FUN_01259520();
                if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((double)((ulonglong)((double)local_98 - local_78) & _DAT_023908f0) <
                    DAT_023b67d8) {
                  if (plVar22 != (longlong *)0x0) {
                    FUN_00d50b00();
                    FUN_00d50b20();
                    local_70 = plVar22;
                  }
                  break;
                }
              }
              else {
                if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if (plVar22 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
          }
          FUN_00d50b20();
        }
        pVar17 = (pthread_key_t)plVar12;
        if (local_70 == (longlong *)0x0) {
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar12 = local_38;
          }
          pVar17 = (pthread_key_t)plVar12;
          pvVar7 = _pthread_getspecific(pVar17);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de9b0();
          FUN_01259540();
          pvVar7 = _pthread_getspecific(pVar17);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a5f0();
        }
        else {
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_70;
          }
          dVar23 = (double)FUN_01264170();
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_70;
          }
          FUN_012708c0();
          plVar12 = local_68;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 == (longlong *)0x0) {
            bVar2 = false;
            local_d0 = (longlong *)0x0;
          }
          else {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_70;
            }
            FUN_012708c0();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            local_d0 = local_68;
            plVar12 = local_68;
            if (local_68 == (longlong *)0x0) {
              local_d0 = (longlong *)0x0;
              bVar2 = false;
            }
            else if (local_60[0] == '\0') {
              FUN_00d50b00();
              bVar2 = true;
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              bVar2 = true;
            }
            pVar17 = (pthread_key_t)plVar12;
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          uVar10 = FUN_0126e7e0();
          bVar3 = true;
          if (local_68 == (longlong *)0x0) {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_70;
            }
            uVar10 = FUN_0126e7e0();
            bVar3 = true;
            if (local_b0 == (longlong *)0x0) {
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (pthread_key_t)local_38;
              }
              local_98 = (longlong *)FUN_01264170();
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (pthread_key_t)local_70;
              }
              uVar10 = FUN_01264170();
              bVar3 = DAT_023934c8 <
                      (double)((ulonglong)((double)local_98 / param_1 - extraout_XMM0_Qa / param_2)
                              & _DAT_023908f0);
            }
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            uVar10 = FUN_00d50b20();
          }
          if (bVar3) {
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126e7e0();
            plVar12 = local_68;
            FUN_01111330();
            pplVar15 = (longlong **)&DAT_02802688;
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar15 = &local_68;
              if (cVar6 == '\0') {
                pplVar15 = (longlong **)&DAT_02802688;
              }
            }
            local_a0 = (longlong **)*pplVar15;
            if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_a0 != (longlong **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar15 + 1) = 0;
            }
            pVar17 = (pthread_key_t)pplVar15;
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126e7e0();
            plVar12 = local_68;
            FUN_01111330();
            pplVar15 = (longlong **)&DAT_02802688;
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar15 = &local_68;
              if (cVar6 == '\0') {
                pplVar15 = (longlong **)&DAT_02802688;
              }
            }
            local_80 = (longlong **)*pplVar15;
            if (*(char *)(pplVar15 + 1) == '\0') {
              if (local_80 != (longlong **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar15 + 1) = 0;
            }
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_a0 == (longlong **)0x0) {
              pplVar11 = (longlong **)FUN_011114e0();
              (*(code *)(*pplVar11)[3])();
              local_a0 = pplVar11;
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pplVar15 = local_a0;
              }
              FUN_013ef430(_DAT_02391038,_DAT_02391038);
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              pplVar11 = local_a0;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_a0, lVar8 != 0)) {
                pplVar15 = local_a0;
                pplVar11 = (longlong **)local_a0[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(code *)(*pplVar11)[0x83])(0,0);
              if ((local_1f8 != '\0') && (local_200 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              pplVar11 = local_a0;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_a0, lVar8 != 0)) {
                pplVar15 = local_a0;
                pplVar11 = (longlong **)local_a0[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(code *)(*pplVar11)[0x83])(param_1,param_1);
              if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                FUN_00d50b20();
              }
            }
            pVar17 = (pthread_key_t)pplVar15;
            if (local_80 == (longlong **)0x0) {
              pplVar11 = (longlong **)FUN_011114e0();
              (*(code *)(*pplVar11)[3])();
              local_80 = pplVar11;
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pplVar15 = local_80;
              }
              FUN_013ef430(_DAT_02391038,_DAT_02391038);
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              pplVar11 = local_80;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_80, lVar8 != 0)) {
                pplVar15 = local_80;
                pplVar11 = (longlong **)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              (*(code *)(*pplVar11)[0x83])(0,0);
              if ((local_1d8 != '\0') && (local_1e0 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
              pplVar11 = local_80;
              if ((pvVar7 != (void *)0x0) &&
                 (lVar8 = FUN_00e8b990(), pplVar11 = local_80, lVar8 != 0)) {
                pplVar15 = local_80;
                pplVar11 = (longlong **)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              pVar17 = (pthread_key_t)pplVar15;
              (*(code *)(*pplVar11)[0x83])(param_2,param_2);
              if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar12 = (longlong *)FUN_011114e0();
            (**(code **)(*plVar12 + 0x18))();
            local_98 = plVar12;
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_98;
            }
            FUN_013ef430(_DAT_02391038,_DAT_02391038);
            pvVar7 = _pthread_getspecific(pVar17);
            pplVar15 = local_a0;
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), pplVar15 = local_a0, lVar8 != 0)
               ) {
              pplVar15 = (longlong **)local_a0[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            FUN_013f2b00();
            local_b8 = local_68;
            if (local_68 == (longlong *)0x0) {
              uVar18 = (undefined4)CONCAT71((int7)((ulonglong)pplVar15 >> 8),1);
              uVar16 = 0;
              local_b8 = (longlong *)0x0;
            }
            else {
              plVar12 = local_68;
              if (local_60[0] == '\0') {
                FUN_00d50b00();
                uVar18 = 0;
                if (local_60[0] != '\0') {
                  uVar16 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
                  if (local_68 != (longlong *)0x0) {
                    FUN_00d50b20();
                    uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
                    uVar18 = 0;
                  }
                  goto LAB_0134e063;
                }
              }
              uVar18 = 0;
              uVar16 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
            }
LAB_0134e063:
            pvVar7 = _pthread_getspecific((pthread_key_t)uVar16);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar24 = (double)FUN_01264170();
            if (local_b8 != (longlong *)0x0) {
              local_60[0] = '\0';
              local_68 = (longlong *)0x0;
              local_58 = local_b8;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              while( true ) {
                if (local_50._4_4_ != 0) {
                  if (local_50._4_4_ < 1) {
                    iVar19 = -local_50._4_4_;
                  }
                  else {
                    iVar19 = (int)local_50 - local_50._4_4_;
                    local_50 = CONCAT44(local_50._4_4_,iVar19);
                    FUN_00d23690();
                    local_48 = local_48 + local_50._4_4_;
                    iVar19 = 0;
                  }
                  local_50 = CONCAT44(iVar19,(int)local_50);
                }
                lVar8 = (longlong)(int)local_50;
                iVar19 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar19);
                if (*(int *)((longlong)local_58 + 0xc) <= iVar19) break;
                plVar12 = (longlong *)local_58[2];
                local_68 = (longlong *)plVar12[lVar8 + 1];
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                plVar22 = local_98;
                if ((pvVar7 != (void *)0x0) &&
                   (lVar8 = FUN_00e8b990(), plVar22 = local_98, lVar8 != 0)) {
                  plVar12 = local_98;
                  plVar22 = (longlong *)local_98[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                }
                pVar17 = (pthread_key_t)plVar12;
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_78 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar10 = FUN_013faf20();
                (**(code **)(*plVar22 + 0x418))(local_78 * (dVar24 / param_1),uVar10);
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_01a81420();
            }
            FUN_00d23340();
            plVar12 = local_68;
            local_b0 = (longlong *)CONCAT71(local_b0._1_7_,local_60[0]);
            pplVar15 = &local_b0;
            pplVar11 = (longlong **)local_60;
            if (local_60[0] == '\0') {
              pplVar11 = pplVar15;
            }
            *(char *)pplVar11 = '\0';
            if ((local_60[0] != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific((pthread_key_t)pplVar15);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_78 = (double)FUN_013faed0();
            if (((char)local_b0 != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d23340();
            plVar12 = local_68;
            local_b0 = (longlong *)CONCAT71(local_b0._1_7_,local_60[0]);
            pplVar15 = &local_b0;
            pplVar11 = (longlong **)local_60;
            if (local_60[0] == '\0') {
              pplVar11 = pplVar15;
            }
            *(char *)pplVar11 = '\0';
            if ((local_60[0] != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar17 = (pthread_key_t)pplVar15;
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_013faf20();
            if (((char)local_b0 != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            plVar12 = local_68;
            if (local_68 == local_b8) {
              bVar14 = (byte)uVar18 & local_b8 != (longlong *)0x0;
              pVar17 = CONCAT31((int3)((uint)uVar18 >> 8),bVar14);
              if (bVar14 != 1) {
                cVar6 = (char)uVar16;
                goto joined_r0x0134e49e;
              }
              cVar6 = '\x01';
              if (local_60[0] == '\0') {
                FUN_00d50b00();
                goto LAB_0134e477;
              }
            }
            else if (local_60[0] == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar14 = (byte)(uVar16 & 0xffffffff) & local_b8 != (longlong *)0x0;
              pVar17 = (pthread_key_t)CONCAT71((int7)((uVar16 & 0xffffffff) >> 8),bVar14);
              cVar6 = '\x01';
              local_b8 = plVar12;
              if (bVar14 == 1) {
                FUN_00d50b20();
LAB_0134e477:
                cVar6 = '\x01';
              }
joined_r0x0134e49e:
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar14 = (byte)(uVar16 & 0xffffffff) & local_b8 != (longlong *)0x0;
              pVar17 = (pthread_key_t)CONCAT71((int7)((uVar16 & 0xffffffff) >> 8),bVar14);
              cVar6 = '\x01';
              if (bVar14 == 1) {
                FUN_00d50b20();
                local_b8 = plVar12;
              }
              else {
                local_b8 = local_68;
              }
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_70;
            }
            dVar26 = (double)FUN_01264170();
            if (local_b8 != (longlong *)0x0) {
              dVar24 = (dVar24 / param_1) * local_78;
              local_60[0] = '\0';
              local_68 = (longlong *)0x0;
              local_58 = local_b8;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              while( true ) {
                if (local_50._4_4_ != 0) {
                  if (local_50._4_4_ < 1) {
                    iVar19 = -local_50._4_4_;
                  }
                  else {
                    iVar19 = (int)local_50 - local_50._4_4_;
                    local_50 = CONCAT44(local_50._4_4_,iVar19);
                    FUN_00d23690();
                    local_48 = local_48 + local_50._4_4_;
                    iVar19 = 0;
                  }
                  local_50 = CONCAT44(iVar19,(int)local_50);
                }
                lVar8 = (longlong)(int)local_50;
                iVar19 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar19);
                if (*(int *)((longlong)local_58 + 0xc) <= iVar19) break;
                plVar12 = *(longlong **)(local_58[2] + 8 + lVar8 * 8);
                local_68 = plVar12;
                if (iVar19 != 0 || local_48 != 0) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)plVar12);
                  plVar22 = local_98;
                  if ((pvVar7 != (void *)0x0) &&
                     (lVar8 = FUN_00e8b990(), plVar22 = local_98, lVar8 != 0)) {
                    plVar12 = local_98;
                    plVar22 = (longlong *)local_98[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                  }
                  pVar17 = (pthread_key_t)plVar12;
                  pvVar7 = _pthread_getspecific(pVar17);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_78 = (double)FUN_013faed0();
                  pvVar7 = _pthread_getspecific(pVar17);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar27 = (double)FUN_013faf20();
                  (**(code **)(*plVar22 + 0x418))
                            (local_78 * (dVar26 / param_2) + dVar24 + 0.0,dVar27 + dVar25 + 0.0);
                  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_01a81420();
              pVar17 = (pthread_key_t)lVar8;
            }
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_a0;
            }
            FUN_013f2b00();
            uVar20 = *(uint *)((longlong)local_68 + 0xc);
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (2 < (int)uVar20) {
              pvVar7 = _pthread_getspecific(pVar17);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar17 = (pthread_key_t)local_98;
              }
              FUN_013f2b00();
              iVar19 = *(int *)((longlong)local_68 + 0xc);
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((int)uVar20 < iVar19) {
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013f2b00();
                lVar8 = local_68[2];
                lVar9 = *(longlong *)(lVar8 + (ulonglong)(uVar20 - 2) * 8);
                if (lVar9 != 0) {
                  FUN_00d50b00();
                }
                pVar17 = (pthread_key_t)lVar8;
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013f2b00();
                pVar17 = uVar20 - 1;
                local_78 = *(double *)(local_68[2] + (ulonglong)pVar17 * 8);
                if (local_78 != 0.0) {
                  FUN_00d50b00();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar17 = (pthread_key_t)local_98;
                }
                FUN_013f2b00();
                lVar8 = *(longlong *)(local_68[2] + (ulonglong)uVar20 * 8);
                if (lVar8 != 0) {
                  FUN_00d50b00();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar24 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar25 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar26 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar27 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar28 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar29 = (double)FUN_013faf20();
                pvVar7 = _pthread_getspecific(pVar17);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar30 = (double)FUN_013faed0();
                pvVar7 = _pthread_getspecific(pVar17);
                if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar17 = SUB84(local_78,0);
                }
                dVar31 = (double)FUN_013faed0();
                if ((double)((ulonglong)
                             ((dVar28 - dVar29) / (dVar30 - dVar31) -
                             (dVar24 - dVar25) / (dVar26 - dVar27)) & _DAT_023908f0) < DAT_02391030)
                {
                  pvVar7 = _pthread_getspecific(pVar17);
                  if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    pVar17 = (pthread_key_t)local_98;
                  }
                  FUN_013f3080();
                }
                if (lVar8 != 0) {
                  FUN_00d50b20();
                }
                if (local_78 != 0.0) {
                  FUN_00d50b20();
                }
                if (lVar9 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            if ((cVar6 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_80 != (longlong **)0x0) {
              FUN_00d50b20();
            }
            if (local_a0 != (longlong **)0x0) {
              FUN_00d50b20();
            }
            local_78 = (double)((ulonglong)local_78 & 0xffffffff00000000);
          }
          else {
            local_78 = (double)CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1));
            local_98 = (longlong *)0x0;
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          pvVar7 = _pthread_getspecific(pVar17);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          dVar24 = (double)FUN_01264170();
          FUN_01259540(dVar23 + dVar24);
          if (local_98 != (longlong *)0x0) {
            pvVar7 = _pthread_getspecific(pVar17);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar17 = (pthread_key_t)local_38;
            }
            FUN_0125e7c0();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de9b0();
            FUN_012902c0();
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01290740();
            pvVar7 = _pthread_getspecific(pVar17);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126dd90();
          }
          if (local_d0 != (longlong *)0x0) {
            local_b0 = local_38;
            FUN_00083ea0(2);
            FUN_00790070();
            if (local_120 == '\0') {
              if (local_128 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_120 = '\0';
            }
            local_b0 = local_128;
            local_a8 = '\0';
            FUN_00d21140();
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_128 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_68 = (longlong *)&DAT_0253d630;
            if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
              FUN_00d50b20();
            }
            local_68 = &DAT_024c5048;
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar2) {
              FUN_00d50b20();
            }
          }
          if (SUB81(local_78,0) == '\0' && local_98 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      bVar2 = 1 < (longlong)uVar21;
      uVar21 = uVar1;
    } while (bVar2);
    if (plVar5 == (longlong *)0x0) goto LAB_0134f006;
  }
  FUN_00d50b20();
LAB_0134f006:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @005b1e40 — 5742 bytes
// str: ""bool""
// str: ""GNUni""
// str: ""_documentControllers""
// str: ""MDNotificationObserver""
// str: ""GNList""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b1e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_005b1650();
  *unaff_RDI = &DAT_024ff828;
  unaff_RDI[9] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[10] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0xb] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0250c388;
  unaff_RDI[9] = &DAT_0250c9e8;
  unaff_RDI[10] = &DAT_0250ca38;
  unaff_RDI[0xb] = &DAT_0250ca68;
  FUN_005b3d30();
  FUN_005b3e10();
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b3ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPlaybackController");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b3fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocument");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b40d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_documentControllers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMetaDocumentController");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b41c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPlugInHostDocument");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b42b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformanceRenderer");
  }
  puVar4 = unaff_RDI + 0x13;
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b43a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderParameter");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDisplayPerformanceTimeMapper",param_3,param_4,puVar4);
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTimeGridSetter");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURelativeTimeProgressor");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDate");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNData");
  }
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02718b68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02718b30 = FUN_00082eb0();
        _DAT_02718b28 = "_isNewDocument";
        _DAT_02718b38 = 0;
        _DAT_02718b40 = 0x6200;
        _DAT_02718b48 = "bool";
        _DAT_02718b50 = 0;
        uRam0000000002718b58 = 0;
        _DAT_02718b60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_005b4940();
  FUN_005b4a20();
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02718c40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02718c08 = FUN_00082eb0();
        _DAT_02718c00 = "_isDetectionInProgress";
        _DAT_02718c10 = 0;
        _DAT_02718c18 = 0x6200;
        _DAT_02718c20 = "bool";
        _DAT_02718c28 = 0;
        uRam0000000002718c30 = 0;
        _DAT_02718c38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x20] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4ec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x23] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b50a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  unaff_RDI[0x24] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5190();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNJob");
  }
  unaff_RDI[0x25] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5280();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNJobCompletionController");
  }
  unaff_RDI[0x26] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUJobCompletionLock");
  }
  unaff_RDI[0x27] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUJobCompletionLock");
  }
  unaff_RDI[0x28] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  unaff_RDI[0x29] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDRecordingAmplitudeAnalyzer");
  }
  unaff_RDI[0x2a] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5730();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  *(undefined1 *)(unaff_RDI + 0x2b) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719078 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719040 = FUN_00082eb0();
        _DAT_02719038 = "_insertGroupDefinesPerformanceTempo";
        _DAT_02719048 = 0;
        _DAT_02719050 = 0x6200;
        _DAT_02719058 = "bool";
        _DAT_02719060 = 0;
        uRam0000000002719068 = 0;
        _DAT_02719070 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x159) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027190c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719088 = FUN_00082eb0();
        _DAT_02719080 = "_stretchInsertGroup";
        _DAT_02719090 = 0;
        _DAT_02719098 = 0x6200;
        _DAT_027190a0 = "bool";
        _DAT_027190a8 = 0;
        uRam00000000027190b0 = 0;
        _DAT_027190b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x2c] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719108 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027190d0 = FUN_00082eb0();
        _DAT_027190c8 = "_stretchInsertStartTime";
        _DAT_027190d8 = 0;
        _DAT_027190e0 = 0x6400;
        _DAT_027190e8 = "double";
        _DAT_027190f0 = 0;
        uRam00000000027190f8 = 0;
        _DAT_02719100 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x2d) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719150 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719118 = FUN_00082eb0();
        _DAT_02719110 = "_createdFromSoundfile";
        _DAT_02719120 = 0;
        _DAT_02719128 = 0x6200;
        _DAT_02719130 = "bool";
        _DAT_02719138 = 0;
        uRam0000000002719140 = 0;
        _DAT_02719148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x169) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719198 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719160 = FUN_00082eb0();
        _DAT_02719158 = "_timelineWasModified";
        _DAT_02719168 = 0;
        _DAT_02719170 = 0x6200;
        _DAT_02719178 = "bool";
        _DAT_02719180 = 0;
        uRam0000000002719188 = 0;
        _DAT_02719190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027191e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027191a8 = FUN_00082eb0();
        _DAT_027191a0 = "_recordingsInProgress";
        _DAT_027191b0 = 0;
        _DAT_027191b8 = 0x6900;
        _DAT_027191c0 = "GNInt";
        _DAT_027191c8 = 0;
        uRam00000000027191d0 = 0;
        _DAT_027191d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x2e) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719228 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027191f0 = FUN_00082eb0();
        _DAT_027191e8 = "_isComparing";
        _DAT_027191f8 = 0;
        _DAT_02719200 = 0x6200;
        _DAT_02719208 = "bool";
        _DAT_02719210 = 0;
        uRam0000000002719218 = 0;
        _DAT_02719220 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x171) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719270 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719238 = FUN_00082eb0();
        _DAT_02719230 = "_followsHostRegionSelection";
        _DAT_02719240 = 0;
        _DAT_02719248 = 0x6200;
        _DAT_02719250 = "bool";
        _DAT_02719258 = 0;
        uRam0000000002719260 = 0;
        _DAT_02719268 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x172) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027192b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719280 = FUN_00082eb0();
        _DAT_02719278 = "_zoomsToHostRegionSelection";
        _DAT_02719288 = 0;
        _DAT_02719290 = 0x6200;
        _DAT_02719298 = "bool";
        _DAT_027192a0 = 0;
        uRam00000000027192a8 = 0;
        _DAT_027192b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x174) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719300 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027192c8 = FUN_00082eb0();
        _DAT_027192c0 = "_shouldDisplayStructureProblemDialog";
        _DAT_027192d0 = 0;
        _DAT_027192d8 = 0x6900;
        _DAT_027192e0 = "GNInt";
        _DAT_027192e8 = 0;
        uRam00000000027192f0 = 0;
        _DAT_027192f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x2f) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719348 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719310 = FUN_00082eb0();
        _DAT_02719308 = "_shouldDisplayUnknownArchiveDialog";
        _DAT_02719318 = 0;
        _DAT_02719320 = 0x6200;
        _DAT_02719328 = "bool";
        _DAT_02719330 = 0;
        uRam0000000002719338 = 0;
        _DAT_02719340 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x179) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719390 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719358 = FUN_00082eb0();
        _DAT_02719350 = "_shouldDisplayImportedArchiveDialog";
        _DAT_02719360 = 0;
        _DAT_02719368 = 0x6200;
        _DAT_02719370 = "bool";
        _DAT_02719378 = 0;
        uRam0000000002719380 = 0;
        _DAT_02719388 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_005b5820();
  FUN_005b5900();
  FUN_005b59e0();
  unaff_RDI[0x33] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5ac0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDViewSettings");
  }
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5bb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDEditorDescription");
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5ca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  unaff_RDI[0x36] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5d90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription");
  }
  return;
}




// ============================================================
// @01351de0 — 5370 bytes
// str: ""MUAudioSourcePrincipalItem""
// str: ""MUAudioSourceDescription::_activateItem(): item must be MUAudioSourcePrincipalItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01352fe8) */
/* WARNING: Removing unreachable block (ram,0x01352ff0) */
/* WARNING: Removing unreachable block (ram,0x01352ff9) */
/* WARNING: Removing unreachable block (ram,0x013530c6) */
/* WARNING: Removing unreachable block (ram,0x01352e49) */
/* WARNING: Removing unreachable block (ram,0x01352e52) */
/* WARNING: Removing unreachable block (ram,0x013528b2) */
/* WARNING: Removing unreachable block (ram,0x013528bb) */
/* WARNING: Removing unreachable block (ram,0x01352dab) */
/* WARNING: Removing unreachable block (ram,0x01352db4) */
/* WARNING: Removing unreachable block (ram,0x01352f40) */
/* WARNING: Removing unreachable block (ram,0x01352f4b) */
/* WARNING: Removing unreachable block (ram,0x01352fc0) */
/* WARNING: Removing unreachable block (ram,0x01352f50) */
/* WARNING: Removing unreachable block (ram,0x013531a5) */
/* WARNING: Removing unreachable block (ram,0x013531b2) */
/* WARNING: Removing unreachable block (ram,0x0135312f) */
/* WARNING: Removing unreachable block (ram,0x01353138) */
/* WARNING: Removing unreachable block (ram,0x013526d8) */
/* WARNING: Removing unreachable block (ram,0x013528ea) */
/* WARNING: Removing unreachable block (ram,0x013528f3) */
/* WARNING: Removing unreachable block (ram,0x013529b9) */
/* WARNING: Removing unreachable block (ram,0x013529c2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01351de0(code *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined7 uVar18;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  pthread_key_t pVar19;
  undefined *puVar20;
  longlong *plVar21;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  longlong *local_res8;
  longlong *local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0;
  undefined8 *local_198;
  undefined1 local_190;
  longlong *local_188;
  undefined1 local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  undefined1 local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  pthread_key_t local_104;
  longlong *local_c0;
  char local_b8;
  longlong *local_88;
  longlong *local_80;
  undefined *local_70;
  longlong *local_60;
  longlong *local_58;
  longlong *local_48;
  char local_40;
  
  if (((*(longlong *)(unaff_RSI + 0x1f8) != 0) || (*(longlong *)(unaff_RSI + 0x200) != 0)) ||
     (*(longlong *)(unaff_RSI + 0x148) == 0)) {
LAB_01351e0b:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  local_104 = (pthread_key_t)param_1;
  pvVar12 = _pthread_getspecific(local_104);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar11 = FUN_0141bab0();
  if (iVar11 != 3) goto LAB_01351e0b;
  plVar1 = (longlong *)*param_2;
  if ((DAT_027c0170 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
    _DAT_02790158 = FUN_007ef2d0();
    _DAT_02790140 = "MUAudioSourcePrincipalItem";
    _DAT_02790148 = 0x138;
    param_1 = FUN_010fe5c0;
    _DAT_02790150 = FUN_010fe5c0;
    _DAT_02790160 = 0;
    uRam0000000002790168 = 0;
    _DAT_02790170 = 0;
    uRam0000000002790178 = 0;
    _DAT_02790180 = 0;
    uRam0000000002790188 = 0;
    _DAT_02790190 = 0;
    uRam0000000002790198 = 0;
    _DAT_027901a0 = 0;
    uRam00000000027901a8 = 0;
    _DAT_027901b0 = 0;
    uRam00000000027901b8 = 0;
    _DAT_027901c0 = 0;
    uRam00000000027901c8 = 0;
    _DAT_027901d0 = 0;
    uRam00000000027901d8 = 0;
    _DAT_027901e0 = 0;
    uRam00000000027901e8 = 0;
    _DAT_027901f0 = 0;
    uRam00000000027901f8 = 0;
    _DAT_02790200 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01351ed7:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar10 = FUN_00e85ea0();
    if (cVar10 == '\0') goto LAB_01351ed7;
  }
  plVar1 = (longlong *)*param_2;
  lVar8 = param_2[1];
  if (((char)lVar8 == '\0') || (plVar1 == (longlong *)0x0)) {
    if (plVar1 == (longlong *)0x0) {
      bVar4 = true;
      FUN_00e828a0();
    }
    else {
      bVar4 = false;
    }
  }
  else {
    FUN_00d50b00();
    bVar4 = false;
  }
  pvVar12 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_014ce440();
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_014ceed0();
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_014cfcc0();
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bfad0();
  pvVar12 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar21 = *(longlong **)(unaff_RSI + 0x38);
  if (plVar21 == (longlong *)0x0) {
    uVar23 = 0;
  }
  else {
    pvVar12 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar12 != (void *)0x0) {
      plVar21 = *(longlong **)(unaff_RSI + 0x38);
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        plVar21 = (longlong *)plVar21[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
    }
    uVar23 = (**(code **)(*plVar21 + 0x370))();
  }
  FUN_014bd640(uVar23);
  local_160 = param_3;
  if ((*param_4 == 0) || (*local_res8 == 0)) {
    puVar14 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar14 = &DAT_02572358;
    pcVar9 = DAT_02572370;
    (*DAT_02572370)();
    puVar16 = (undefined8 *)*param_4;
    if (puVar16 == puVar14) {
      if ((char)param_4[1] == '\0') goto LAB_01352207;
      FUN_00d50b20();
    }
    else {
      *param_4 = (longlong)puVar14;
      if (((char)param_4[1] != '\0') && (puVar16 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01352207:
      *(undefined1 *)(param_4 + 1) = 1;
    }
    puVar14 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar14 = &DAT_02572358;
    (*pcVar9)();
    puVar16 = (undefined8 *)*local_res8;
    if (puVar16 == puVar14) {
      if ((char)local_res8[1] == '\0') goto LAB_0135225b;
      FUN_00d50b20();
    }
    else {
      *local_res8 = (longlong)puVar14;
      if (((char)local_res8[1] != '\0') && (puVar16 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_0135225b:
      *(undefined1 *)(local_res8 + 1) = 1;
    }
    param_1 = *(code **)(unaff_RSI + 0x40);
    if (*(int *)(param_1 + 0xc) < 1) goto LAB_01352a21;
    lVar13 = 0;
    local_88 = (longlong *)0x0;
    bVar2 = false;
    local_60 = (longlong *)0x0;
    bVar5 = false;
    local_58 = (longlong *)0x0;
    bVar6 = false;
    local_80 = (longlong *)0x0;
    bVar7 = false;
    plVar21 = (longlong *)0x0;
    local_70 = (undefined *)0x0;
    do {
      plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar13 * 8);
      local_168 = lVar13;
      if (local_60 == plVar15) {
        if ((!bVar5) && (local_60 != (longlong *)0x0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar5 = true;
          local_60 = plVar15;
        }
        else {
          bVar5 = true;
          local_60 = plVar15;
        }
      }
      pVar19 = (pthread_key_t)param_1;
      pvVar12 = _pthread_getspecific(pVar19);
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar19 = (pthread_key_t)local_60;
      }
      FUN_013dfcb0();
      if (local_48 == local_58) {
        if ((!bVar6) && (local_48 != (longlong *)0x0)) {
          plVar15 = local_58;
          bVar3 = true;
          if (local_40 != '\0') goto LAB_01352477;
          bVar6 = true;
          FUN_00d50b00();
        }
LAB_01352463:
        plVar15 = local_58;
        bVar3 = bVar6;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        plVar15 = local_48;
        if ((bVar6) && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_58 = local_48;
          bVar6 = bVar3;
          goto LAB_01352463;
        }
      }
      else {
        bVar3 = true;
        if ((bVar6) && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_58 = local_48;
          plVar15 = local_58;
        }
        else {
          local_58 = local_48;
          plVar15 = local_58;
        }
      }
LAB_01352477:
      bVar6 = bVar3;
      local_58 = plVar15;
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      if (local_48 == local_80) {
        if ((!bVar7) && (local_48 != (longlong *)0x0)) {
          plVar15 = local_80;
          bVar3 = true;
          if (local_40 != '\0') goto LAB_01352588;
          bVar7 = true;
          FUN_00d50b00();
        }
LAB_0135254d:
        plVar15 = local_80;
        bVar3 = bVar7;
        if ((local_40 != '\0') && (plVar15 = local_80, local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar15 = local_80;
        }
      }
      else {
        plVar15 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar7) && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_80 = local_48;
            bVar7 = bVar3;
            goto LAB_0135254d;
          }
        }
        else {
          bVar3 = true;
          if ((bVar7) && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_01352588:
      bVar7 = bVar3;
      if (0 < *(int *)((longlong)plVar15 + 0xc)) {
        lVar13 = 0;
        plVar22 = plVar21;
        do {
          local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff);
          pVar19 = (pthread_key_t)plVar15;
          pvVar12 = _pthread_getspecific(pVar19);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar23 = FUN_011ef8d0();
          uVar18 = (undefined7)((ulonglong)uVar23 >> 8);
          cVar10 = (char)local_70;
          if (local_48 == plVar22) {
            if ((cVar10 == '\0') && (local_48 != (longlong *)0x0)) {
              local_70 = (undefined *)CONCAT71(uVar18,1);
              plVar21 = plVar22;
              if (local_40 != '\0') goto LAB_013526ee;
              local_70 = (undefined *)CONCAT71(uVar18,1);
              FUN_00d50b00();
            }
joined_r0x013526c0:
            plVar21 = plVar22;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar21 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                uVar23 = FUN_00d50b00();
              }
              local_70 = (undefined *)CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
              if ((cVar10 != '\0') && (plVar22 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar22 = local_48;
                goto joined_r0x013526c0;
              }
            }
            else {
              local_70 = (undefined *)CONCAT71(uVar18,1);
              if ((cVar10 != '\0') && (plVar22 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
LAB_013526ee:
          pvVar12 = _pthread_getspecific(pVar19);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_48 == local_88) {
            if ((bVar2) || (local_48 == (longlong *)0x0)) {
joined_r0x01352950:
              bVar3 = bVar2;
              plVar22 = local_88;
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              plVar22 = local_88;
              if (local_40 == '\0') {
                FUN_00d50b00();
                goto LAB_013527cf;
              }
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            plVar22 = local_48;
            if ((bVar2) && (plVar22 = local_48, local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_88 = local_48;
LAB_013527cf:
              bVar2 = true;
              goto joined_r0x01352950;
            }
          }
          else {
            bVar3 = true;
            plVar22 = local_48;
            if ((bVar2) && (plVar22 = local_48, local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar22 = local_48;
            }
          }
          local_88 = plVar22;
          bVar2 = bVar3;
          if (local_88 != (longlong *)0x0) {
            pVar19 = (pthread_key_t)local_88;
            pvVar12 = _pthread_getspecific(pVar19);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar24 = (double)FUN_0125a280();
            pvVar12 = _pthread_getspecific(pVar19);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_013de8d0();
            local_40 = '\0';
            cVar10 = FUN_00d24090();
            local_48 = local_88;
            if (cVar10 == '\0') {
              FUN_00d21140();
              FUN_00d470c0(dVar24 - dVar25);
              if (local_b8 == '\0') {
                if (local_c0 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_b8 = '\0';
              }
              local_48 = local_c0;
              local_40 = '\0';
              FUN_00d21140();
              if (local_c0 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          lVar13 = lVar13 + 1;
          plVar22 = plVar21;
        } while (lVar13 < *(int *)((longlong)plVar15 + 0xc));
      }
      lVar13 = local_168 + 1;
      param_1 = *(code **)(unaff_RSI + 0x40);
      local_80 = plVar15;
    } while (lVar13 < *(int *)(param_1 + 0xc));
  }
  else {
LAB_01352a21:
    local_70 = (undefined *)0x0;
    plVar21 = (longlong *)0x0;
    bVar7 = false;
    local_80 = (longlong *)0x0;
    bVar6 = false;
    local_58 = (longlong *)0x0;
    bVar5 = false;
    local_60 = (longlong *)0x0;
    bVar2 = false;
    local_88 = (longlong *)0x0;
  }
  pVar19 = (pthread_key_t)param_1;
  plVar15 = (longlong *)FUN_00115860();
  (**(code **)(*plVar15 + 0x18))();
  if (local_58 == plVar15) {
    plVar15 = local_58;
    if ((bVar6) || (local_58 == (longlong *)0x0)) {
      bVar3 = bVar6;
      if (local_58 == (longlong *)0x0) {
        local_58 = (longlong *)0x0;
        plVar15 = local_58;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
    if ((bVar6) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_58 = plVar15;
  pvVar12 = _pthread_getspecific(pVar19);
  if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
    pVar19 = (pthread_key_t)local_58;
  }
  local_140 = '\0';
  local_148 = plVar1;
  FUN_013dd650();
  if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(pVar19);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_138 = local_58;
  local_130 = '\0';
  FUN_014bc440();
  if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar15 = (longlong *)FUN_00e8fc40();
  FUN_007eeec0();
  (**(code **)(*plVar15 + 0x18))();
  if (plVar15 == local_60) {
    plVar15 = local_60;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  else if ((bVar5) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar15;
  pvVar12 = _pthread_getspecific(pVar19);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_128 = local_58;
  local_120 = '\0';
  FUN_013dfbc0();
  if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01327c60();
  if ((char)local_104 != '\0') {
    local_1c8 = local_60;
    local_1c0 = 0;
    pVar19 = 0;
    uVar23 = FUN_0135d2e0(0,&local_1c8);
    if (local_170 == '\0') {
      if (local_178 != 0) {
        uVar23 = FUN_00d50b00();
      }
    }
    else {
      local_170 = '\0';
    }
    FUN_01346520(uVar23,1);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar19);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014d26c0();
  }
  cVar10 = FUN_00d23d70();
  if (cVar10 != '\0') {
    local_1b0 = 0;
    local_1b8 = plVar1;
    FUN_013295b0();
  }
  local_1a0 = 0;
  local_1a8 = plVar1;
  FUN_01328c70();
  puVar16 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar20 = &DAT_02572358;
  *puVar16 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d21140();
  local_190 = 0;
  local_198 = puVar16;
  FUN_0135d660();
  if (*(int *)(*param_4 + 0xc) < 1) {
    *unaff_RDI = local_60;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar13 = 0;
    plVar15 = plVar21;
    local_48 = plVar1;
    do {
      pVar19 = (pthread_key_t)puVar20;
      local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff);
      uVar23 = FUN_00d45bc0();
      pvVar12 = _pthread_getspecific(pVar19);
      if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pVar19 = (pthread_key_t)local_60;
      }
      uVar23 = FUN_013e5700(uVar23);
      cVar10 = (char)local_70;
      if (local_48 == plVar15) {
        plVar21 = plVar15;
        if ((cVar10 == '\0') && (local_48 != (longlong *)0x0)) {
          local_70 = (undefined *)CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (local_48 != (longlong *)0x0) {
          uVar23 = FUN_00d50b00();
        }
        local_70 = (undefined *)CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
        plVar21 = local_48;
        if ((cVar10 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_110 = '\0';
      local_118 = plVar21;
      FUN_012e6a70();
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar23 = FUN_012e5ae0();
      if (local_48 != (longlong *)0x0) {
        uVar23 = FUN_00d50b00();
      }
      local_150 = 1;
      local_158 = local_48;
      local_180 = 0;
      local_188 = plVar21;
      FUN_0132a0a0(uVar23,&local_188);
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific(pVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0128c620();
      if (*local_160 != 0) {
        FUN_00d21140();
        local_48 = plVar21;
      }
      lVar13 = lVar13 + 1;
      puVar20 = local_70;
      plVar15 = plVar21;
    } while (lVar13 < *(int *)(*param_4 + 0xc));
    *unaff_RDI = local_60;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (puVar16 == (undefined8 *)0x0) goto LAB_01353209;
  }
  FUN_00d50b20();
LAB_01353209:
  if (((char)local_70 != '\0') && (plVar21 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)lVar8 == '\0' || bVar4) {
    return unaff_RDI;
  }
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @01355320 — 3734 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01355a6f) */
/* WARNING: Removing unreachable block (ram,0x01355a7b) */
/* WARNING: Removing unreachable block (ram,0x0135597d) */
/* WARNING: Removing unreachable block (ram,0x0135598d) */
/* WARNING: Removing unreachable block (ram,0x01355553) */
/* WARNING: Removing unreachable block (ram,0x01355563) */
/* WARNING: Removing unreachable block (ram,0x0135545a) */
/* WARNING: Removing unreachable block (ram,0x0135545f) */
/* WARNING: Removing unreachable block (ram,0x0135541d) */
/* WARNING: Removing unreachable block (ram,0x01355426) */
/* WARNING: Removing unreachable block (ram,0x01355657) */
/* WARNING: Removing unreachable block (ram,0x01355667) */
/* WARNING: Removing unreachable block (ram,0x013556ff) */
/* WARNING: Removing unreachable block (ram,0x01355704) */
/* WARNING: Removing unreachable block (ram,0x01355e02) */
/* WARNING: Removing unreachable block (ram,0x01355e0b) */
/* WARNING: Removing unreachable block (ram,0x01356229) */
/* WARNING: Removing unreachable block (ram,0x01356235) */
/* WARNING: Removing unreachable block (ram,0x0135626b) */
/* WARNING: Removing unreachable block (ram,0x0135627b) */
/* WARNING: Removing unreachable block (ram,0x0135583e) */
/* WARNING: Removing unreachable block (ram,0x0135584a) */
/* WARNING: Removing unreachable block (ram,0x01355cf6) */
/* WARNING: Removing unreachable block (ram,0x01355cff) */
/* WARNING: Removing unreachable block (ram,0x013560f0) */
/* WARNING: Removing unreachable block (ram,0x013560f9) */
/* WARNING: Removing unreachable block (ram,0x01356037) */
/* WARNING: Removing unreachable block (ram,0x01356060) */
/* WARNING: Removing unreachable block (ram,0x01355b1f) */
/* WARNING: Removing unreachable block (ram,0x01355b40) */
/* WARNING: Removing unreachable block (ram,0x0135576c) */
/* WARNING: Removing unreachable block (ram,0x01355790) */
/* WARNING: Removing unreachable block (ram,0x0135576e) */
/* WARNING: Removing unreachable block (ram,0x01355792) */
/* WARNING: Removing unreachable block (ram,0x01355577) */
/* WARNING: Removing unreachable block (ram,0x013555a0) */
/* WARNING: Removing unreachable block (ram,0x01355579) */
/* WARNING: Removing unreachable block (ram,0x013555a2) */
/* WARNING: Removing unreachable block (ram,0x013554b7) */
/* WARNING: Removing unreachable block (ram,0x013554e0) */
/* WARNING: Removing unreachable block (ram,0x013554b9) */
/* WARNING: Removing unreachable block (ram,0x013554e2) */
/* WARNING: Removing unreachable block (ram,0x013558bf) */
/* WARNING: Removing unreachable block (ram,0x013558cb) */
/* WARNING: Removing unreachable block (ram,0x01355b21) */
/* WARNING: Removing unreachable block (ram,0x01355b42) */
/* WARNING: Removing unreachable block (ram,0x01356039) */
/* WARNING: Removing unreachable block (ram,0x01356062) */
/* WARNING: Removing unreachable block (ram,0x01355c07) */
/* WARNING: Removing unreachable block (ram,0x01355c30) */
/* WARNING: Removing unreachable block (ram,0x01355c09) */
/* WARNING: Removing unreachable block (ram,0x01355c32) */
/* WARNING: Removing unreachable block (ram,0x01355c7b) */
/* WARNING: Removing unreachable block (ram,0x01355c84) */

void FUN_01355320(byte param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *unaff_RDI;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  longlong local_90;
  char local_88;
  int local_78;
  longlong local_68;
  int local_50;
  longlong local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = *param_2;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar12 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar12 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar3 = FUN_00d23d70();
      FUN_01366a10();
      if (lVar6 == 0) {
        bVar2 = true;
        local_68 = 0;
      }
      else {
        FUN_00d50b00();
        local_68 = 0;
        local_50 = -1;
        if (bVar3 == 0) {
          while( true ) {
            lVar7 = (longlong)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_50) break;
            local_68 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar7 * 8);
            cVar4 = FUN_0133aef0();
            if (cVar4 != '\0') {
              local_88 = '\0';
              FUN_00d235a0();
              local_90 = local_68;
            }
          }
        }
        else {
          while( true ) {
            lVar7 = (longlong)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_50) break;
            local_68 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar7 * 8);
            cVar4 = FUN_01366cc0(param_3,0);
            if ((cVar4 == '\0') && (cVar4 = FUN_0133aef0(), cVar4 != '\0')) {
              local_88 = '\0';
              FUN_00d235a0();
              local_90 = local_68;
            }
          }
        }
        FUN_001150f0();
        bVar2 = false;
      }
      if (((bVar3 & param_1) == 1) && (FUN_01367040(), local_68 != 0)) {
        FUN_00d50b00();
        local_50 = -1;
        while( true ) {
          lVar7 = (longlong)local_50;
          local_50 = local_50 + 1;
          if (*(int *)(local_68 + 0xc) <= local_50) break;
          lVar11 = *(longlong *)(local_68 + 0x10);
          lVar7 = *(longlong *)(lVar11 + 8 + lVar7 * 8);
          pvVar8 = _pthread_getspecific((pthread_key_t)lVar11);
          pVar9 = (pthread_key_t)lVar11;
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar14 = FUN_013dfdd0();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
              goto LAB_01355850;
            }
LAB_01355920:
            local_38 = '\0';
            FUN_01346520(uVar14,1);
            local_88 = '\0';
            FUN_00d235a0();
            local_90 = lVar7;
            local_40 = lVar7;
          }
          else {
            if (local_90 == 0) goto LAB_01355920;
LAB_01355850:
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if ((local_88 == '\0') && (local_90 != 0)) {
              FUN_00d50b00();
            }
            if ((local_90 == 0) || (local_90 == lVar6)) {
              if (local_90 != 0) goto LAB_01355755;
            }
            else {
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_014bb3e0();
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar16 = (double)FUN_014bb3e0();
              if (dVar15 < dVar16) {
                FUN_0133aef0();
                local_38 = '\0';
                FUN_01346520(lVar6,1);
                local_88 = '\0';
                FUN_00d235a0();
                local_90 = lVar7;
                local_40 = lVar7;
              }
LAB_01355755:
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_001150f0();
        FUN_00d50b20();
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar12 = lVar12 + 1;
      lVar6 = *param_2;
    } while (lVar12 < *(int *)(lVar6 + 0xc));
  }
  local_50 = -1;
LAB_01355b1b:
  do {
    lVar12 = local_90;
    lVar7 = (longlong)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(lVar6 + 0xc) <= local_50) {
      FUN_01a02100();
      if (puVar5 != (undefined8 *)0x0) {
        if (0 < *(int *)((longlong)puVar5 + 0xc)) {
          pVar9 = 0;
          do {
            lVar6 = local_90;
            pVar10 = pVar9;
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfef0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e0cc0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_90 != 0) {
              local_88 = '\0';
              local_90 = 0;
              local_78 = -1;
              while( true ) {
                lVar12 = (longlong)local_78;
                local_78 = local_78 + 1;
                if (*(int *)(lVar6 + 0xc) <= local_78) break;
                lVar7 = *(longlong *)(lVar6 + 0x10);
                local_90 = *(longlong *)(lVar7 + 8 + lVar12 * 8);
                pvVar8 = _pthread_getspecific((pthread_key_t)lVar7);
                pVar10 = (pthread_key_t)lVar7;
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126f610();
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a5f0();
                FUN_0039e8b0();
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_00e7bdb0();
                FUN_01287c80();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            pVar9 = pVar9 + 1;
          } while ((int)pVar9 < *(int *)((longlong)puVar5 + 0xc));
        }
        FUN_001150f0();
      }
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + 8 + lVar7 * 8);
    FUN_01366a10();
    if (local_88 == '\0') goto LAB_01355bb0;
  } while (local_90 == 0);
  goto LAB_01355bc4;
LAB_01355bb0:
  if (local_90 != 0) {
    FUN_00d50b00();
LAB_01355bc4:
    local_88 = '\0';
    local_90 = 0;
    local_78 = -1;
    while( true ) {
      lVar7 = (longlong)local_78;
      local_78 = local_78 + 1;
      if (*(int *)(lVar12 + 0xc) <= local_78) break;
      lVar11 = *(longlong *)(lVar12 + 0x10);
      local_90 = *(longlong *)(lVar11 + 8 + lVar7 * 8);
      cVar4 = FUN_00d23d70();
      pVar9 = (pthread_key_t)lVar11;
      if (cVar4 == '\0') {
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific(pVar9);
        plVar13 = plVar1;
        if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x3a0))();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bcf30();
        FUN_00d21140();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      local_40 = local_90;
    }
    FUN_001150f0();
    FUN_00d50b20();
  }
  goto LAB_01355b1b;
}




// ============================================================
// @013469e0 — 3662 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01347847) */
/* WARNING: Removing unreachable block (ram,0x01347857) */
/* WARNING: Removing unreachable block (ram,0x0134733b) */
/* WARNING: Removing unreachable block (ram,0x01347348) */
/* WARNING: Removing unreachable block (ram,0x013476cb) */
/* WARNING: Removing unreachable block (ram,0x013476db) */
/* WARNING: Removing unreachable block (ram,0x01347891) */
/* WARNING: Removing unreachable block (ram,0x0134789a) */

ulonglong FUN_013469e0(undefined8 param_1,longlong *param_2)

{
  dword dVar1;
  pthread_key_t pVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  void *pvVar15;
  longlong lVar16;
  pthread_key_t pVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  bool bVar23;
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  longlong local_78;
  longlong *local_70;
  char local_68;
  longlong *local_58;
  longlong *local_48;
  longlong *local_40;
  
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar17 = 0x2572358;
  *puVar14 = &DAT_02572358;
  (*DAT_02572370)();
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar15 = _pthread_getspecific(pVar17);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar11 = FUN_0141bab0();
    if (iVar11 != 3) goto LAB_01346a4d;
    puVar18 = *(undefined8 **)(unaff_RDI + 0x40);
    plVar21 = param_2;
    if (*(int *)((longlong)puVar18 + 0xc) < 1) {
      bVar5 = false;
      local_78 = 0;
      bVar8 = false;
      local_48 = (longlong *)0x0;
      bVar9 = false;
      local_58 = (longlong *)0x0;
      bVar6 = false;
      local_40 = (longlong *)0x0;
    }
    else {
      plVar19 = (longlong *)0x0;
      local_40 = (longlong *)0x0;
      bVar6 = false;
      local_58 = (longlong *)0x0;
      bVar9 = false;
      local_48 = (longlong *)0x0;
      bVar8 = false;
      local_78 = 0;
      bVar5 = false;
      do {
        plVar3 = *(longlong **)(puVar18[2] + (longlong)plVar19 * 8);
        if (local_48 == plVar3) {
          if ((!bVar8) && (local_48 != (longlong *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar3;
          }
          else {
            bVar8 = true;
            local_48 = plVar3;
          }
        }
        pVar17 = (pthread_key_t)puVar18;
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (pthread_key_t)local_48;
        }
        FUN_013de560();
        if (local_70 == local_40) {
          if ((!bVar6) && (local_70 != (longlong *)0x0)) {
            bVar6 = true;
            if (local_68 != '\0') goto LAB_01346d6e;
            FUN_00d50b00();
LAB_01346d2a:
            bVar6 = true;
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (bVar6) {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b20();
              local_40 = local_70;
              goto LAB_01346d2a;
            }
            local_40 = local_70;
            bVar6 = true;
          }
          else {
            local_40 = local_70;
            bVar6 = true;
          }
        }
        else if ((bVar6) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_40 = local_70;
          bVar6 = true;
        }
        else {
          local_40 = local_70;
          bVar6 = true;
        }
LAB_01346d6e:
        pvVar15 = _pthread_getspecific(pVar17);
        pVar2 = (pthread_key_t)local_40;
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = pVar2;
        }
        cVar10 = FUN_014bc070();
        if (cVar10 != '\0') {
          pvVar15 = _pthread_getspecific(pVar17);
          if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar17 = pVar2;
          }
          iVar11 = FUN_014c2f20();
          if (iVar11 == 0) {
            pvVar15 = _pthread_getspecific(pVar17);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pVar17 = pVar2;
            }
            FUN_014bc420();
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar21 = (longlong *)
                      CONCAT71((int7)((ulonglong)plVar21 >> 8),local_70 == (longlong *)0x0);
          }
          else {
            plVar21 = (longlong *)0x0;
          }
          pvVar15 = _pthread_getspecific(pVar17);
          if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar17 = pVar2;
          }
          FUN_014bc340();
          bVar23 = true;
          if (local_70 == (longlong *)0x0) {
            pvVar15 = _pthread_getspecific(pVar17);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pVar17 = pVar2;
            }
            iVar11 = FUN_014c2f20();
            bVar23 = iVar11 == 0;
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((bool)(bVar23 & (char)plVar21 == '\0')) {
            pvVar15 = _pthread_getspecific(pVar17);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_014c2f20();
            plVar21 = (longlong *)(ulonglong)uVar12;
            pvVar15 = _pthread_getspecific(pVar17);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar11 = FUN_014c2f80();
            local_e8 = FUN_00e7b4e0();
            lVar16 = *(longlong *)(unaff_RDI + 0x40);
            if (*(int *)(lVar16 + 0xc) < 1) {
              bVar23 = false;
LAB_013472cf:
              bVar4 = bVar23;
              if (iVar11 != *(int *)(unaff_RDI + 0x88) + -1) {
                bVar4 = true;
              }
            }
            else {
              plVar21 = (longlong *)0x0;
              bVar23 = false;
              bVar7 = false;
              lVar20 = local_78;
              do {
                local_78 = lVar20;
                if (plVar19 != plVar21) {
                  local_78 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + (longlong)plVar21 * 8);
                  lVar16 = lVar20;
                  if (lVar20 == local_78) {
                    local_78 = lVar20;
                    bVar4 = bVar5;
                    if ((!bVar5) && (lVar20 != 0)) {
                      FUN_00d50b00();
                      bVar4 = true;
                    }
                  }
                  else {
                    if (local_78 != 0) {
                      FUN_00d50b00();
                    }
                    bVar4 = true;
                    if ((bVar5) && (lVar20 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  bVar5 = bVar4;
                  pVar17 = (pthread_key_t)lVar16;
                  pvVar15 = _pthread_getspecific(pVar17);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013de560();
                  if (local_70 == local_58) {
                    if ((!bVar9) && (local_70 != (longlong *)0x0)) {
                      bVar9 = true;
                      if (local_68 != '\0') goto LAB_013471c7;
                      FUN_00d50b00();
LAB_01347186:
                      bVar9 = true;
                    }
                    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else if (local_68 == '\0') {
                    if (local_70 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    if (bVar9) {
                      if (local_58 != (longlong *)0x0) {
                        FUN_00d50b20();
                        local_58 = local_70;
                        goto LAB_01347186;
                      }
                      local_58 = local_70;
                      bVar9 = true;
                    }
                    else {
                      local_58 = local_70;
                      bVar9 = true;
                    }
                  }
                  else if ((bVar9) && (local_58 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    local_58 = local_70;
                    bVar9 = true;
                  }
                  else {
                    local_58 = local_70;
                    bVar9 = true;
                  }
LAB_013471c7:
                  pvVar15 = _pthread_getspecific(pVar17);
                  if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                    pVar17 = (pthread_key_t)local_58;
                  }
                  iVar13 = FUN_014c2f20();
                  pvVar15 = _pthread_getspecific(pVar17);
                  if (pvVar15 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014c2f80();
                  FUN_00e7b4e0();
                  cVar10 = FUN_00e7b530();
                  if (cVar10 != '\0') {
                    bVar23 = true;
                    bVar4 = true;
                    goto joined_r0x0134729e;
                  }
                  bVar7 = bVar23;
                  if (iVar13 == iVar11 + 1) {
                    bVar7 = true;
                  }
                  lVar16 = *(longlong *)(unaff_RDI + 0x40);
                  bVar23 = bVar7;
                }
                plVar21 = (longlong *)((longlong)plVar21 + 1);
                lVar20 = local_78;
              } while ((longlong)plVar21 < (longlong)*(int *)(lVar16 + 0xc));
              bVar23 = false;
              bVar4 = false;
joined_r0x0134729e:
              if (!bVar7) goto LAB_013472cf;
            }
            if (!bVar4) goto LAB_01346bb0;
          }
          local_70 = local_48;
          local_68 = '\0';
          FUN_00d21140();
        }
LAB_01346bb0:
        plVar19 = (longlong *)((longlong)plVar19 + 1);
        puVar18 = *(undefined8 **)(unaff_RDI + 0x40);
      } while ((longlong)plVar19 < (longlong)*(int *)((longlong)puVar18 + 0xc));
    }
    if (0 < *(int *)((longlong)puVar14 + 0xc)) {
      plVar21 = (longlong *)0x0;
      do {
        plVar19 = *(longlong **)(puVar14[2] + (longlong)plVar21 * 8);
        puVar18 = puVar14;
        if (local_48 == plVar19) {
          if ((!bVar8) && (local_48 != (longlong *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar19;
          }
          else {
            bVar8 = true;
            local_48 = plVar19;
          }
        }
        pVar17 = (pthread_key_t)puVar18;
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (pthread_key_t)local_48;
        }
        FUN_013de560();
        if (local_70 == local_40) {
          if ((!bVar6) && (local_70 != (longlong *)0x0)) {
            bVar6 = true;
            if (local_68 != '\0') goto LAB_0134754e;
            FUN_00d50b00();
LAB_0134750a:
            bVar6 = true;
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (bVar6) {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b20();
              local_40 = local_70;
              goto LAB_0134750a;
            }
            local_40 = local_70;
            bVar6 = true;
          }
          else {
            local_40 = local_70;
            bVar6 = true;
          }
        }
        else if ((bVar6) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_40 = local_70;
          bVar6 = true;
        }
        else {
          local_40 = local_70;
          bVar6 = true;
        }
LAB_0134754e:
        FUN_0134c610();
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (pthread_key_t)local_40;
        }
        FUN_014d20e0();
        pvVar15 = _pthread_getspecific(pVar17);
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar17 = (pthread_key_t)local_40;
        }
        FUN_014d23d0();
        FUN_01327e70();
        FUN_01327a80();
        FUN_01328e30();
        pvVar15 = _pthread_getspecific(pVar17);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
        plVar21 = (longlong *)((longlong)plVar21 + 1);
        puVar18 = puVar14;
      } while ((longlong)plVar21 < (longlong)*(int *)((longlong)puVar14 + 0xc));
    }
    local_108 = *param_2;
    local_100 = 0;
    FUN_0139d310(puVar18,&local_108);
    if (local_70 == (longlong *)0x0) {
      bVar23 = true;
      local_70 = (longlong *)0x0;
      dVar1 = MACH_HEADER.filetype;
    }
    else {
      if (local_68 == '\0') {
        FUN_00d50b00();
      }
      bVar23 = false;
      dVar1 = *(dword *)((longlong)local_70 + 0xc);
    }
    if (0 < (int)dVar1) {
      lVar16 = 0;
      do {
        plVar21 = *(longlong **)(local_70[2] + lVar16 * 8);
        if (local_48 == plVar21) {
          if ((!bVar8) && (local_48 != (longlong *)0x0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar21 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_48 = plVar21;
          }
          else {
            bVar8 = true;
            local_48 = plVar21;
          }
        }
        local_f8 = *unaff_RSI;
        local_f0 = 0;
        FUN_01399490();
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)((longlong)local_70 + 0xc));
    }
    if (*param_2 != 0) {
      FUN_00d214d0();
    }
    if (!bVar23) {
      FUN_00d50b20();
    }
    uVar22 = CONCAT71((int7)((ulonglong)plVar21 >> 8),1);
    if (puVar14 == (undefined8 *)0x0) goto LAB_01346a88;
  }
  else {
LAB_01346a4d:
    uVar22 = 0;
    bVar5 = false;
    local_78 = 0;
    bVar8 = false;
    local_48 = (longlong *)0x0;
    bVar9 = false;
    local_58 = (longlong *)0x0;
    bVar6 = false;
    local_40 = (longlong *)0x0;
  }
  FUN_00d50b20();
LAB_01346a88:
  if ((bVar5) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar22 & 0xffffffff;
}




// ============================================================
// @010ff5d0 — 3187 bytes
// str: ""bool""
// str: ""GNUni""
// str: ""SInt64""
// str: ""float""
// str: ""GNFraction""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010ff5d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025c7fc8;
  unaff_RDI[7] = &DAT_025eefe0;
  if (DAT_0272fca8 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025e6748;
  unaff_RDI[7] = &DAT_025e6ba8;
  unaff_RDI[8] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100450();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100540();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100630();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790418 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027903e0 = FUN_007ef2d0();
        _DAT_027903d8 = "_startSampleIndex";
        _DAT_027903e8 = 0;
        _DAT_027903f0 = 0x6c00;
        _DAT_027903f8 = "SInt64";
        _DAT_02790400 = 0;
        uRam0000000002790408 = 0;
        _DAT_02790410 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790460 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790428 = FUN_007ef2d0();
        _DAT_02790420 = "_sampleCount";
        _DAT_02790430 = 0;
        _DAT_02790438 = 0x6c00;
        _DAT_02790440 = "SInt64";
        _DAT_02790448 = 0;
        uRam0000000002790450 = 0;
        _DAT_02790458 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027904a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790470 = FUN_007ef2d0();
        _DAT_02790468 = "_signalEndSampleOffset";
        _DAT_02790478 = 0;
        _DAT_02790480 = 0x6c00;
        _DAT_02790488 = "SInt64";
        _DAT_02790490 = 0;
        uRam0000000002790498 = 0;
        _DAT_027904a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027904f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027904b8 = FUN_007ef2d0();
        _DAT_027904b0 = "_signalStartSampleOffset";
        _DAT_027904c0 = 0;
        _DAT_027904c8 = 0x6c00;
        _DAT_027904d0 = "SInt64";
        _DAT_027904d8 = 0;
        uRam00000000027904e0 = 0;
        _DAT_027904e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100720();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_owners";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDecomposedAudioSignal");
  }
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790580 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790548 = FUN_007ef2d0();
        _DAT_02790540 = "_pitchCenter";
        _DAT_02790550 = 0;
        _DAT_02790558 = 0x6600;
        _DAT_02790560 = "float";
        _DAT_02790568 = 0;
        uRam0000000002790570 = 0;
        _DAT_02790578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x84) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027905c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790590 = FUN_007ef2d0();
        _DAT_02790588 = "_energyClaimFactor";
        _DAT_02790598 = 0;
        _DAT_027905a0 = 0x6600;
        _DAT_027905a8 = "float";
        _DAT_027905b0 = 0;
        uRam00000000027905b8 = 0;
        _DAT_027905c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x11] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100810();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790658 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790620 = FUN_007ef2d0();
        _DAT_02790618 = "_detectionQuality";
        _DAT_02790628 = 0;
        _DAT_02790630 = 0x6600;
        _DAT_02790638 = "float";
        _DAT_02790640 = 0;
        uRam0000000002790648 = 0;
        _DAT_02790650 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x94) = 0x100000000;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027906a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790668 = FUN_007ef2d0();
        _DAT_02790660 = "_idealStartPulse";
        _DAT_02790670 = 0;
        _DAT_02790678 = 0x7101;
        _DAT_02790680 = "GNFraction";
        _DAT_02790688 = 0;
        uRam0000000002790690 = 0;
        _DAT_02790698 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x9c) = 0x100000000;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027906e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027906b0 = FUN_007ef2d0();
        _DAT_027906a8 = "_idealEndPulse";
        _DAT_027906b8 = 0;
        _DAT_027906c0 = 0x7101;
        _DAT_027906c8 = "GNFraction";
        _DAT_027906d0 = 0;
        uRam00000000027906d8 = 0;
        _DAT_027906e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790730 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027906f8 = FUN_007ef2d0();
        _DAT_027906f0 = "_isPreferredDivisionTriplets";
        _DAT_02790700 = 0;
        _DAT_02790708 = 0x6200;
        _DAT_02790710 = "bool";
        _DAT_02790718 = 0;
        uRam0000000002790720 = 0;
        _DAT_02790728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790778 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790740 = FUN_007ef2d0();
        _DAT_02790738 = "_preferredSubPulsesIndex";
        _DAT_02790748 = 0;
        _DAT_02790750 = 0x6900;
        _DAT_02790758 = "GNInt";
        _DAT_02790760 = 0;
        uRam0000000002790768 = 0;
        _DAT_02790770 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027907c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790788 = FUN_007ef2d0();
        _DAT_02790780 = "_isResidual";
        _DAT_02790790 = 0;
        _DAT_02790798 = 0x6200;
        _DAT_027907a0 = "bool";
        _DAT_027907a8 = 0;
        uRam00000000027907b0 = 0;
        _DAT_027907b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xad) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790808 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027907d0 = FUN_007ef2d0();
        _DAT_027907c8 = "_rightSeparationTypeIsSetExplicitly";
        _DAT_027907d8 = 0;
        _DAT_027907e0 = 0x6200;
        _DAT_027907e8 = "bool";
        _DAT_027907f0 = 0;
        uRam00000000027907f8 = 0;
        _DAT_02790800 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100900();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_rightAdjacentItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  unaff_RDI[0x17] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011009f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_leftAdjacentItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  unaff_RDI[0x18] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100ae0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  return;
}




// ============================================================
// @01350430 — 2985 bytes
// ============================================================

void FUN_01350430(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong unaff_RDI;
  longlong *plVar14;
  code *pcVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 *local_160;
  undefined1 local_158;
  longlong *local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  longlong *local_130;
  undefined1 local_128;
  longlong *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined1 local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  code *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar15 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar15)();
  local_80 = (longlong *)&DAT_02572358;
  local_98 = puVar5;
  if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(longlong *)(unaff_RDI + 0xe8);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(longlong *)(local_68 + 0x10);
      plVar12 = *(longlong **)(lVar8 + 8 + lVar6 * 8);
      local_78 = plVar12;
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
      plVar11 = local_78;
      pVar9 = (pthread_key_t)lVar8;
      if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
        plVar12 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
      plVar12 = local_78;
      if (*(float *)(unaff_RDI + 0x70) <= fVar17) {
        pvVar7 = _pthread_getspecific(pVar9);
        plVar11 = local_78;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
          plVar12 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
        if (fVar17 <= *(float *)(unaff_RDI + 0x74)) {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          if (*(float *)(unaff_RDI + 0x78) <= fVar17) {
            local_50 = local_78;
            local_48 = '\0';
            cVar2 = FUN_00d24090();
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              local_50 = local_78;
              local_48 = '\0';
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  if (*(longlong *)(unaff_RDI + 0x40) != 0) {
    local_88 = pcVar15;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(longlong *)(unaff_RDI + 0x40);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(longlong *)(local_68 + 0x10);
      local_78 = *(longlong **)(lVar8 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar9 = (pthread_key_t)lVar8;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar12 = local_50;
      if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      if (((cVar2 == '\0') && (plVar12 != *(longlong **)(unaff_RDI + 0x118))) &&
         ((plVar12 != *(longlong **)(unaff_RDI + 0x128) &&
          (plVar12 != *(longlong **)(unaff_RDI + 0x120))))) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar17 = (float)FUN_013de3b0();
        if (fVar17 < *(float *)(unaff_RDI + 0x70)) {
LAB_013508ab:
          bVar1 = false;
LAB_013508ae:
          local_50 = local_78;
          local_48 = '\0';
          bVar3 = FUN_00d24090();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar1) {
            bVar3 = bVar3 ^ 1;
            goto joined_r0x013508f6;
          }
          if (bVar3 != 0) goto LAB_01350a00;
        }
        else {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_013de3b0();
          if (*(float *)(unaff_RDI + 0x74) <= fVar17 && fVar17 != *(float *)(unaff_RDI + 0x74))
          goto LAB_013508ab;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          bVar1 = true;
          if (fVar17 < *(float *)(unaff_RDI + 0x78)) goto LAB_013508ae;
          bVar3 = 0;
joined_r0x013508f6:
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if (bVar3 == 0) goto LAB_01350a00;
        }
        local_50 = local_78;
        local_48 = '\0';
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01350a00:
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001150f0();
    pcVar15 = local_88;
  }
  plVar12 = local_80;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_88 = (code *)puVar5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = plVar12;
  uVar18 = (*pcVar15)();
  local_160 = local_98;
  local_158 = 0;
  local_90 = puVar5;
  uVar18 = FUN_013514e0(uVar18,&local_160);
  local_a0 = local_78;
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b00();
  }
  uVar16 = *(uint *)((longlong)puVar4 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (ulonglong)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar11 = (longlong *)(ulonglong)uVar16;
      plVar12 = *(longlong **)(puVar4[2] + (longlong)plVar11 * 8);
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_80 = plVar12;
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar11 = local_80;
        plVar12 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      pVar9 = (pthread_key_t)plVar11;
      (**(code **)(*plVar12 + 0x380))();
      pvVar7 = _pthread_getspecific(pVar9);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar12 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x388))();
      FUN_00e7b4e0();
      plVar12 = local_80;
      local_150 = local_80;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_e0 = 0;
      local_d8 = '\0';
      local_d0 = 0;
      local_c8 = '\0';
      uVar18 = FUN_01351de0(1,&local_150,&local_140,&local_e0);
      plVar11 = local_78;
      if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b00();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_c0 = (undefined8 *)local_88;
        local_b8 = '\0';
        FUN_015b4ee0();
        if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar11;
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  uVar16 = *(uint *)((longlong)local_98 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (ulonglong)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar12 = *(longlong **)(local_98[2] + (ulonglong)uVar16 * 8);
      uVar10 = uVar16;
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      uVar18 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x380))();
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x388))();
        uVar18 = FUN_00e7b4e0();
        local_128 = 0;
        local_130 = plVar12;
        cVar2 = FUN_01353c30(uVar18,1);
        uVar18 = extraout_XMM0_Da_00;
        if (cVar2 != '\0') {
          local_b0 = (undefined8 *)local_88;
          local_a8 = '\0';
          FUN_015b4ee0();
          if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          local_70 = '\0';
          local_78 = plVar12;
          uVar18 = FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  if (0xe < *(int *)((longlong)local_88 + 0x18) + 7U) {
    local_120 = local_a0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    uVar18 = FUN_013469e0(uVar18,&local_110);
    local_100 = (undefined8 *)local_88;
    local_f8 = 0;
    FUN_01353f80(uVar18,&local_100);
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @014ceed0 — 2760 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014cf8fc) */
/* WARNING: Removing unreachable block (ram,0x014cf908) */
/* WARNING: Removing unreachable block (ram,0x014cf032) */
/* WARNING: Removing unreachable block (ram,0x014cf03b) */
/* WARNING: Removing unreachable block (ram,0x014cf0d9) */
/* WARNING: Removing unreachable block (ram,0x014cf0e2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014ceed0(pthread_key_t param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  void *pvVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  pthread_key_t pVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  float fVar32;
  longlong local_50;
  char local_48;
  longlong local_40;
  longlong local_38;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    (**(code **)(*unaff_RDI + 0x378))();
    lVar22 = *unaff_RSI;
    if (lVar22 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_014cefab;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_014cefa6;
      }
    }
    else {
      lVar15 = unaff_RSI[1];
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar15 != '\0') && (lVar22 != 0)) {
          FUN_00d50b20();
        }
LAB_014cefa6:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014cefab:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014cefbf;
      }
      *unaff_RSI = local_50;
      if (((char)lVar15 != '\0') && (lVar22 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_014cefbf:
  if (*(int *)(unaff_RDI[0x21] + 0xc) == 0) {
    return;
  }
  pvVar20 = _pthread_getspecific(param_1);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  dVar16 = DAT_0238fee8;
  uVar3 = *(uint *)(local_50 + 0x30);
  uVar30 = (ulonglong)(int)uVar3;
  dVar5 = DAT_0238fee8 / *(double *)(local_50 + 0x38);
  uVar21 = (**(code **)(*unaff_RDI + 0x388))();
  uVar26 = (uVar21 | uVar30) >> 0x20;
  if (uVar26 == 0) {
    iVar19 = (int)((uVar21 & 0xffffffff) / (ulonglong)uVar3);
    uVar21 = (uVar21 & 0xffffffff) % (ulonglong)uVar3;
  }
  else {
    iVar19 = (int)((longlong)uVar21 / (longlong)uVar30);
    uVar21 = (longlong)uVar21 % (longlong)uVar30;
  }
  lVar22 = (**(code **)(*unaff_RDI + 0x380))(uVar26,uVar21);
  uVar18 = iVar19 + 2;
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar29 = 0;
  if (iVar19 < -1) {
    bVar13 = false;
    local_38 = 0;
    bVar12 = false;
    local_40 = 0;
  }
  else {
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (ulonglong)uVar18;
    }
    uVar26 = 0;
    local_40 = 0;
    bVar12 = false;
    local_38 = 0;
    bVar13 = false;
    do {
      dVar6 = (double)(iVar29 + lVar22) * (dVar16 / (double)(int)uVar3);
      uVar31 = FUN_014c36d0(iVar29,(int)dVar6);
      if (local_50 == local_40) {
        if ((bVar12) || (local_50 == 0)) {
          if ((local_48 != '\0') && (local_50 != 0)) {
            uVar31 = FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
          if (local_48 == '\0') {
            uVar31 = FUN_00d50b00();
          }
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar31 = FUN_00d50b00();
        }
        if ((!bVar12) || (local_40 == 0)) goto LAB_014cf280;
        uVar31 = FUN_00d50b20();
        local_40 = local_50;
        bVar12 = true;
      }
      else if ((bVar12) && (local_40 != 0)) {
        uVar31 = FUN_00d50b20();
        local_40 = local_50;
        bVar12 = true;
      }
      else {
LAB_014cf280:
        local_40 = local_50;
        bVar12 = true;
      }
      FUN_014c36d0(uVar31,(int)dVar6 + 1);
      if (local_50 == local_38) {
        lVar15 = local_38;
        if ((bVar13) || (local_50 == 0)) {
          bVar17 = bVar13;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar17 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        lVar15 = local_50;
        bVar17 = true;
        if (bVar13) {
          if (local_38 == 0) goto LAB_014cf370;
          FUN_00d50b20();
          lVar15 = local_50;
        }
      }
      else if ((bVar13) && (local_38 != 0)) {
        FUN_00d50b20();
        lVar15 = local_50;
        bVar17 = true;
      }
      else {
LAB_014cf370:
        lVar15 = local_50;
        bVar17 = true;
      }
      bVar13 = bVar17;
      local_38 = lVar15;
      fVar32 = 0.0;
      if ((((local_40 != 0) && (fVar32 = 0.0, local_38 != 0)) &&
          (fVar2 = *(float *)(local_40 + 0x10), !NAN(fVar2))) && (!NAN(*(float *)(local_38 + 0x10)))
         ) {
        fVar32 = (*(float *)(local_38 + 0x10) - fVar2) * ((float)dVar6 - (float)(int)dVar6) + fVar2;
      }
      *(float *)(*(longlong *)(local_50 + 0x10) + uVar26 * 4) = fVar32;
      uVar26 = uVar26 + 1;
      iVar29 = iVar29 + uVar3;
    } while (uVar21 != uVar26);
  }
  puVar23 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar23 = &DAT_025f0d98;
  puVar23[2] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  (*DAT_025f0db0)();
  FUN_015c1480(DAT_0241c3ec);
  fVar11 = _UNK_024114ac;
  fVar10 = _UNK_024114a8;
  fVar2 = _UNK_024114a4;
  uVar14 = _DAT_023945e0;
  fVar32 = DAT_0239426c;
  if (-2 < iVar19) {
    lVar22 = *(longlong *)(local_50 + 0x10);
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (ulonglong)uVar18;
    }
    if ((uint)uVar21 < 8) {
      uVar26 = 0;
    }
    else {
      uVar26 = (ulonglong)((uint)uVar21 & 0x7ffffff8);
      uVar27 = 0;
      do {
        pfVar1 = (float *)(lVar22 + uVar27 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(uint *)(lVar22 + uVar27 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar7 < fVar2) {
          *(uint *)(lVar22 + 4 + uVar27 * 4) = (uint)fVar7 ^ uVar14;
        }
        if (fVar8 < fVar10) {
          *(uint *)(lVar22 + 8 + uVar27 * 4) = (uint)fVar8 ^ uVar14;
        }
        if (fVar9 < fVar11) {
          *(uint *)(lVar22 + 0xc + uVar27 * 4) = (uint)fVar9 ^ uVar14;
        }
        pfVar1 = (float *)(lVar22 + 0x10 + uVar27 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(uint *)(lVar22 + 0x10 + uVar27 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar7 < fVar2) {
          *(uint *)(lVar22 + 0x14 + uVar27 * 4) = (uint)fVar7 ^ uVar14;
        }
        if (fVar8 < fVar10) {
          *(uint *)(lVar22 + 0x18 + uVar27 * 4) = (uint)fVar8 ^ uVar14;
        }
        if (fVar9 < fVar11) {
          *(uint *)(lVar22 + 0x1c + uVar27 * 4) = (uint)fVar9 ^ uVar14;
        }
        uVar27 = uVar27 + 8;
      } while (uVar26 != uVar27);
      uVar14 = _DAT_023945e0;
      fVar32 = DAT_0239426c;
      if (uVar26 == uVar21) goto LAB_014cf61b;
    }
    do {
      fVar2 = *(float *)(lVar22 + uVar26 * 4);
      if (fVar2 < fVar32) {
        *(uint *)(lVar22 + uVar26 * 4) = (uint)fVar2 ^ uVar14;
      }
      uVar26 = uVar26 + 1;
    } while (uVar21 != uVar26);
  }
LAB_014cf61b:
  uVar26 = (**(code **)(*unaff_RDI + 0x398))();
  uVar14 = _DAT_023945e0;
  uVar21 = (uVar26 | uVar30) >> 0x20;
  if (uVar21 == 0) {
    iVar19 = (int)((uVar26 & 0xffffffff) / (ulonglong)uVar3);
    uVar27 = (uVar26 & 0xffffffff) % (ulonglong)uVar3;
  }
  else {
    uVar27 = (longlong)uVar26 % (longlong)uVar30;
    iVar19 = (int)((longlong)uVar26 / (longlong)uVar30);
  }
  if (iVar19 < (int)uVar18) {
    uVar21 = *(ulonglong *)(local_50 + 0x10);
    uVar27 = (ulonglong)iVar19;
    uVar26 = (longlong)(int)uVar18 - uVar27;
    uVar3 = _DAT_023945e0;
    if (7 < uVar26) {
      uVar28 = uVar26 & 0xfffffffffffffff8;
      uVar27 = uVar27 + uVar28;
      lVar22 = uVar21 + (longlong)iVar19 * 4;
      uVar30 = 0;
      do {
        pfVar1 = (float *)(lVar22 + uVar30 * 4);
        fVar32 = pfVar1[1];
        fVar2 = pfVar1[2];
        fVar10 = pfVar1[3];
        if (0.0 < *pfVar1) {
          *(uint *)(lVar22 + uVar30 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar32 <= 0.0) {
          if (fVar2 > 0.0) goto LAB_014cf75c;
LAB_014cf71d:
          if (0.0 < fVar10) goto LAB_014cf729;
LAB_014cf778:
          pfVar1 = (float *)(lVar22 + 0x10 + uVar30 * 4);
          fVar32 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
        }
        else {
          *(uint *)(lVar22 + 4 + uVar30 * 4) = (uint)fVar32 ^ uVar14;
          if (fVar2 <= 0.0) goto LAB_014cf71d;
LAB_014cf75c:
          *(uint *)(lVar22 + 8 + uVar30 * 4) = (uint)fVar2 ^ uVar14;
          if (0.0 >= fVar10) goto LAB_014cf778;
LAB_014cf729:
          *(uint *)(lVar22 + 0xc + uVar30 * 4) = (uint)fVar10 ^ uVar14;
          pfVar1 = (float *)(lVar22 + 0x10 + uVar30 * 4);
          fVar32 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
        }
        if (0.0 < fVar32) {
          *(uint *)(lVar22 + 0x10 + uVar30 * 4) = (uint)fVar32 ^ uVar14;
        }
        if (0.0 < fVar2) {
          *(uint *)(lVar22 + 0x14 + uVar30 * 4) = (uint)fVar2 ^ uVar14;
        }
        if (0.0 < fVar10) {
          *(uint *)(lVar22 + 0x18 + uVar30 * 4) = (uint)fVar10 ^ uVar14;
        }
        if (0.0 < fVar11) {
          *(uint *)(lVar22 + 0x1c + uVar30 * 4) = (uint)fVar11 ^ uVar14;
        }
        uVar30 = uVar30 + 8;
      } while (uVar28 != uVar30);
      uVar3 = _DAT_023945e0;
      if (uVar26 == uVar28) goto LAB_014cf817;
    }
    do {
      fVar32 = *(float *)(uVar21 + uVar27 * 4);
      if (0.0 < fVar32) {
        *(uint *)(uVar21 + uVar27 * 4) = (uint)fVar32 ^ uVar3;
      }
      uVar27 = uVar27 + 1;
    } while ((longlong)(int)uVar18 != uVar27);
  }
LAB_014cf817:
  puVar24 = (undefined8 *)FUN_00e8fc40(uVar21,uVar27);
  FUN_00d4ff40();
  *(undefined1 *)(puVar24 + 7) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x3c) = 0;
  *(undefined2 *)(puVar24 + 8) = 0;
  pVar25 = 0x25dc9e8;
  *puVar24 = &DAT_025dc9e8;
  puVar24[9] = 0;
  puVar24[10] = 0;
  (*DAT_025dca00)();
  pvVar20 = _pthread_getspecific(pVar25);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84((double)(float)dVar5,0));
  pvVar20 = _pthread_getspecific(pVar25);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb890();
  if ((undefined8 *)unaff_RDI[9] != puVar24) {
    FUN_00d64850();
    puVar4 = (undefined8 *)unaff_RDI[9];
    if (puVar4 != puVar24) {
      FUN_00d50b00();
      unaff_RDI[9] = (longlong)puVar24;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  if (puVar23 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar13) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar12) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01348960 — 2714 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01348bba) */
/* WARNING: Removing unreachable block (ram,0x01348bc3) */
/* WARNING: Removing unreachable block (ram,0x013489f0) */
/* WARNING: Removing unreachable block (ram,0x013489fc) */
/* WARNING: Removing unreachable block (ram,0x01349387) */
/* WARNING: Removing unreachable block (ram,0x01349397) */
/* WARNING: Removing unreachable block (ram,0x01349351) */
/* WARNING: Removing unreachable block (ram,0x0134935e) */
/* WARNING: Removing unreachable block (ram,0x01349190) */
/* WARNING: Removing unreachable block (ram,0x01349199) */

void FUN_01348960(float param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong in_RCX;
  char unaff_SIL;
  int iVar6;
  bool bVar7;
  float fVar8;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  int local_64;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014ed740();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar5 = (pthread_key_t)in_RCX;
  if (local_a8 != 0) {
    if (*(int *)(local_a8 + 0xc) < 1) {
      local_64 = 0x7fffffff;
    }
    else {
      local_64 = 0x7fffffff;
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1 + DAT_02394254);
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1);
        if (unaff_SIL != '\0') {
          pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == 0) {
            bVar7 = false;
          }
          else {
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            if (local_60 == 0) {
              bVar7 = false;
            }
            else {
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150eb60();
              if (local_108 == 0) {
                bVar7 = false;
              }
              else {
                pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                if (local_f8 == 0) {
                  bVar7 = false;
                }
                else {
                  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0152ebe0();
                  bVar7 = local_118 != 0;
                  if ((local_110 != '\0') && (local_118 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (bVar7) {
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0150eb60();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01822e80();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar1 = FUN_01507f00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              in_RCX = local_40;
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar2 = FUN_01773f20();
            if (local_64 == 0x7fffffff) {
              local_64 = iVar1 - iVar2;
            }
            if (local_40 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        pVar5 = (pthread_key_t)in_RCX;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_a8 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
    if (local_64 != 0x7fffffff) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed740();
    }
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01347c70 — 2169 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013483bc) */
/* WARNING: Removing unreachable block (ram,0x013483c8) */

uint FUN_01347c70(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *plVar11;
  pthread_key_t pVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  byte bVar16;
  longlong local_b8;
  char local_b0;
  longlong *local_68;
  uint local_54;
  char local_50 [8];
  longlong *local_48;
  char local_40 [15];
  char local_31;
  
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  plVar13 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01347cfe;
    }
LAB_01347d5b:
    bVar6 = true;
  }
  else {
    if (local_48 == (longlong *)0x0) goto LAB_01347d5b;
LAB_01347cfe:
    pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      param_1 = plVar13;
    }
    cVar8 = FUN_014bc070();
    param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    local_54 = (uint)param_1;
    if (cVar8 != '\0') {
      bVar6 = false;
      goto LAB_01348516;
    }
    pvVar9 = _pthread_getspecific(local_54);
    if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      param_1 = plVar13;
      plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    cVar8 = (**(code **)(*plVar13 + 0x3c0))();
    bVar6 = false;
    if (cVar8 != '\0') goto LAB_01348516;
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  plVar13 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)plVar13 + 0xc) < 1) {
    local_54 = 0;
  }
  else {
    lVar15 = 0;
    local_54 = 0;
    do {
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      plVar7 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = plVar7;
      }
      FUN_01267000();
      pVar12 = (pthread_key_t)param_1;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01347fb0;
        }
LAB_01348080:
        bVar5 = true;
LAB_01348145:
        bVar4 = true;
LAB_01348155:
        bVar3 = true;
        local_68 = (longlong *)0x0;
        bVar2 = false;
      }
      else {
        if (local_48 == (longlong *)0x0) goto LAB_01348080;
LAB_01347fb0:
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        if (local_48 == (longlong *)0x0) {
          bVar5 = false;
          param_1 = local_48;
          goto LAB_01348145;
        }
        plVar11 = local_48;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505b90();
        if (local_48 == (longlong *)0x0) {
          bVar5 = false;
          bVar4 = false;
          param_1 = local_48;
          goto LAB_01348155;
        }
        plVar11 = local_48;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0179acd0();
        FUN_00d23340();
        local_68 = local_48;
        local_50[0] = local_40[0];
        param_1 = (longlong *)local_50;
        plVar11 = (longlong *)local_40;
        if (local_40[0] == '\0') {
          plVar11 = param_1;
        }
        *(undefined1 *)plVar11 = 0;
        if ((local_40[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (longlong *)0x0) {
          bVar2 = false;
          local_68 = (longlong *)0x0;
        }
        else {
          bVar2 = true;
          if (local_50[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = false;
        bVar5 = false;
        bVar4 = false;
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = plVar7;
      }
      FUN_0128c200();
      plVar11 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_013482a7;
        }
        bVar16 = (local_54 & 1) == 0;
        cVar8 = local_68 == (longlong *)0x0;
      }
      else {
LAB_013482a7:
        local_31 = local_68 == (longlong *)0x0;
        if (((bool)local_31) || (plVar11 == (longlong *)0x0)) {
LAB_01348410:
          bVar16 = (local_54 & 1) == 0;
          cVar8 = local_31;
          if (plVar11 == (longlong *)0x0) goto LAB_01348453;
        }
        else {
          pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            param_1 = local_68;
          }
          FUN_017e5950();
          plVar14 = local_48;
          if (local_48 == (longlong *)0x0) {
            bVar1 = true;
            plVar14 = (longlong *)0x0;
          }
          else {
            if (local_40[0] == '\0') {
              FUN_00d50b00();
              bVar1 = false;
              if ((local_40[0] == '\0') || (local_48 == (longlong *)0x0)) goto LAB_013483b3;
              FUN_00d50b20();
            }
            else {
              local_40[0] = '\0';
            }
            bVar1 = false;
          }
LAB_013483b3:
          if (plVar14 == (longlong *)0x0) goto LAB_01348410;
          pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_54 = FUN_017dcae0();
          bVar16 = (byte)local_54 ^ 1;
          if (!bVar1) {
            FUN_00d50b20();
          }
        }
        cVar8 = local_31;
        FUN_00d50b20();
      }
LAB_01348453:
      if ((bVar2) && (cVar8 == '\0')) {
        FUN_00d50b20();
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      if (!bVar4) {
        FUN_00d50b20();
      }
      if (!bVar5) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    } while ((bVar16 != 0) && (lVar15 = lVar15 + 1, lVar15 < *(int *)((longlong)plVar13 + 0xc)));
  }
  FUN_00d50b20();
  local_54 = local_54 & 0xffffff01;
LAB_01348516:
  if (!bVar6) {
    FUN_00d50b20();
  }
  return local_54;
}




// ============================================================
// @014ce440 — 1975 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014ceb57) */
/* WARNING: Removing unreachable block (ram,0x014ceb63) */
/* WARNING: Removing unreachable block (ram,0x014ce5a3) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce6d6) */
/* WARNING: Removing unreachable block (ram,0x014ce6df) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014ce440(pthread_key_t param_1)

{
  double dVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong *local_50;
  char local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) goto LAB_014ce52f;
  (**(code **)(*unaff_RDI + 0x378))();
  plVar17 = (longlong *)*unaff_RSI;
  if (plVar17 == local_50) {
    if (((char)unaff_RSI[1] != '\0') || (local_50 == (longlong *)0x0)) goto LAB_014ce51b;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_014ce516;
    }
  }
  else {
    lVar12 = unaff_RSI[1];
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_50;
      if (((char)lVar12 != '\0') && (plVar17 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_014ce516:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014ce51b:
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_014ce52f;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar12 != '\0') && (plVar17 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014ce52f:
  if (*(int *)(unaff_RDI[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    dVar1 = (double)local_50[7];
    uVar2 = *(uint *)(local_50 + 6);
    uVar11 = (ulonglong)(int)uVar2;
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar10 = _pthread_getspecific(param_1);
    plVar17 = local_50;
    if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
      plVar17 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
    dVar20 = (double)(**(code **)(*plVar17 + 0x370))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(*unaff_RDI + 0x388))();
    uVar16 = (uVar13 | uVar11) >> 0x20;
    if (uVar16 == 0) {
      uVar11 = (uVar13 & 0xffffffff) % (ulonglong)uVar2;
      iVar9 = (int)((uVar13 & 0xffffffff) / (ulonglong)uVar2);
    }
    else {
      iVar9 = (int)((longlong)uVar13 / (longlong)uVar11);
      uVar11 = (longlong)uVar13 % (longlong)uVar11;
    }
    lVar12 = (**(code **)(*unaff_RDI + 0x380))(uVar16,uVar11);
    FUN_00c8e690();
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar18 = 0;
    if (iVar9 < -1) {
      bVar6 = false;
      local_40 = (longlong *)0x0;
      bVar7 = false;
      local_38 = (longlong *)0x0;
    }
    else {
      dVar23 = DAT_0238fee8 / (double)(int)uVar2;
      uVar11 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar11 = (ulonglong)(iVar9 + 2U);
      }
      auVar5._4_4_ = (float)dVar20;
      auVar5._0_4_ = (float)dVar20;
      uVar13 = 0;
      local_38 = (longlong *)0x0;
      bVar7 = false;
      local_40 = (longlong *)0x0;
      bVar6 = false;
      do {
        dVar20 = (double)(iVar18 + lVar12) * dVar23;
        auVar4._4_8_ = (ulonglong)dVar20 >> 0x20;
        auVar4._0_4_ = (float)dVar20;
        uVar21 = FUN_014c36d0(auVar4._0_8_,(int)dVar20);
        if (local_50 == local_38) {
          if ((bVar6) || (local_50 == (longlong *)0x0)) {
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              uVar21 = FUN_00d50b20();
            }
          }
          else {
            bVar6 = true;
            if (local_48 == '\0') {
              uVar21 = FUN_00d50b00();
            }
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          if ((!bVar6) || (local_38 == (longlong *)0x0)) goto LAB_014ce870;
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else if ((bVar6) && (local_38 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else {
LAB_014ce870:
          local_38 = local_50;
          bVar6 = true;
        }
        FUN_014c36d0(uVar21,(int)dVar20 + 1);
        if (local_50 == local_40) {
          plVar17 = local_40;
          if ((bVar7) || (local_50 == (longlong *)0x0)) {
            bVar8 = bVar7;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar17 = local_50;
          bVar8 = true;
          if (bVar7) {
            if (local_40 == (longlong *)0x0) goto LAB_014ce940;
            FUN_00d50b20();
            plVar17 = local_50;
          }
        }
        else if ((bVar7) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar17 = local_50;
          bVar8 = true;
        }
        else {
LAB_014ce940:
          plVar17 = local_50;
          bVar8 = true;
        }
        bVar7 = bVar8;
        local_40 = plVar17;
        fVar19 = 0.0;
        if ((local_38 != (longlong *)0x0) && (fVar19 = 0.0, local_40 != (longlong *)0x0)) {
          insertps(ZEXT416(*(uint *)((longlong)local_40 + 0x14)),
                   *(undefined4 *)((longlong)local_38 + 0x14),0x10);
          uVar21 = _exp2f();
          auVar22._0_8_ = _exp2f();
          auVar22._8_8_ = extraout_XMM0_Qb_00;
          auVar24._8_8_ = extraout_XMM0_Qb;
          auVar24._0_8_ = uVar21;
          auVar24 = insertps(auVar24,auVar22,0x10);
          auVar25._0_4_ = auVar24._0_4_ * _DAT_0240e480;
          auVar25._4_4_ = auVar24._4_4_ * _UNK_0240e484;
          auVar25._8_4_ = auVar24._8_4_ * _UNK_0240e488;
          auVar25._12_4_ = auVar24._12_4_ * _UNK_0240e48c;
          auVar5._8_8_ = 0;
          auVar24 = divps(auVar5,auVar25);
          fVar19 = (auVar24._0_4_ - auVar24._4_4_) * ((float)dVar20 - (float)(int)dVar20) +
                   auVar24._4_4_;
        }
        *(float *)(local_50[2] + uVar13 * 4) = fVar19;
        uVar13 = uVar13 + 1;
        iVar18 = iVar18 + uVar2;
      } while (uVar11 != uVar13);
    }
    puVar14 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)(puVar14 + 7) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x3c) = 0;
    *(undefined2 *)(puVar14 + 8) = 0;
    pVar15 = 0x25dc9e8;
    *puVar14 = &DAT_025dc9e8;
    puVar14[9] = 0;
    puVar14[10] = 0;
    (*DAT_025dca00)();
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950((double)(float)(DAT_0238fee8 / dVar1));
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    if ((undefined8 *)unaff_RDI[0x11] != puVar14) {
      FUN_00d64850();
      puVar3 = (undefined8 *)unaff_RDI[0x11];
      if (puVar3 != puVar14) {
        FUN_00d50b00();
        unaff_RDI[0x11] = (longlong)puVar14;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_00d50b20();
    if ((bVar7) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @0133b360 — 1971 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0133b699) */
/* WARNING: Removing unreachable block (ram,0x0133b6a2) */
/* WARNING: Removing unreachable block (ram,0x0133b560) */
/* WARNING: Removing unreachable block (ram,0x0133b569) */
/* WARNING: Removing unreachable block (ram,0x0133b671) */
/* WARNING: Removing unreachable block (ram,0x0133b67a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133b360(pthread_key_t param_1)

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  undefined *puVar11;
  longlong *plVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong local_40;
  char local_38;
  
  if ((*unaff_RSI != 0) || (MACH_HEADER.filetype == 0)) {
    lVar5 = **(longlong **)(*unaff_RSI + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    plVar12 = *(longlong **)(lVar5 + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar12 + 0x370))();
    plVar12 = *(longlong **)(unaff_RDI + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar15 = (double)(**(code **)(*plVar12 + 0x370))();
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar11 = &DAT_02572358;
    *puVar6 = &DAT_02572358;
    uVar16 = (*DAT_02572370)();
    lVar5 = *unaff_RSI;
    if (0 < *(int *)(lVar5 + 0xc)) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar4 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        lVar5 = *(longlong *)(lVar5 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if (0 < *(int *)(lVar5 + 0xc)) {
          lVar7 = 0;
          do {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dfdd0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013e5500();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                local_38 = '\0';
                FUN_00d21140();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(lVar5 + 0xc));
        }
        uVar16 = FUN_00d50b20();
        lVar4 = lVar4 + 1;
        lVar5 = *unaff_RSI;
        puVar11 = (undefined *)(longlong)*(int *)(lVar5 + 0xc);
      } while (lVar4 < (longlong)puVar11);
    }
    FUN_00d242c0(uVar16,0);
    pcVar1 = DAT_025e6278;
    if (0 < *(int *)((longlong)puVar6 + 0xc)) {
      dVar15 = dVar15 / dVar14;
      lVar5 = 0;
      do {
        plVar12 = *(longlong **)(puVar6[2] + lVar5 * 8);
        lVar4 = lVar5;
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_014bacf0();
        lVar4 = *(longlong *)(unaff_RDI + 0xd0);
        if (0 < *(int *)(lVar4 + 0xc)) {
          lVar7 = 0;
          do {
            lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar7 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_014bacf0();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if ((double)((ulonglong)(dVar17 - dVar14) & _DAT_023908f0) < DAT_0240d3c0)
            goto LAB_0133bb35;
            lVar7 = lVar7 + 1;
            lVar4 = *(longlong *)(unaff_RDI + 0xd0);
          } while (lVar7 < *(int *)(lVar4 + 0xc));
        }
        pVar10 = (pthread_key_t)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        lVar4 = (**(code **)(*plVar13 + 0x3a0))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        lVar7 = (**(code **)(*plVar13 + 0x390))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar13 + 0x388))();
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_007ef480();
        pVar10 = 0x25e6250;
        *puVar9 = &DAT_025e6260;
        puVar9[7] = &DAT_025e66c0;
        puVar9[0x1c] = 0;
        puVar9[0x19] = 0;
        puVar9[0x1a] = 0;
        *(undefined4 *)(puVar9 + 0x1b) = 0;
        (*pcVar1)();
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar18._0_8_ =
             (double)((ulonglong)((double)lVar4 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar4 * dVar15;
        auVar18._8_8_ = _UNK_023945c8;
        roundsd(ZEXT816(0),auVar18,0xb);
        auVar19._0_8_ =
             (double)((ulonglong)((double)lVar7 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar7 * dVar15;
        auVar19._8_8_ = _UNK_023945c8;
        auVar18 = roundsd(ZEXT816(0),auVar19,0xb);
        auVar20._0_8_ =
             (double)((ulonglong)((double)lVar8 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar8 * dVar15;
        auVar20._8_8_ = _UNK_023945c8;
        auVar19 = roundsd(ZEXT816(0),auVar20,0xb);
        lVar4 = (longlong)auVar19._0_8_;
        FUN_014bad20(lVar4,(longlong)auVar18._0_8_);
        pVar10 = (pthread_key_t)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bae60();
        FUN_014bae10();
        FUN_01329030();
        FUN_00d50b20();
LAB_0133bb35:
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((longlong)puVar6 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0134c610 — 1849 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0134cbe1) */
/* WARNING: Removing unreachable block (ram,0x0134cbed) */
/* WARNING: Removing unreachable block (ram,0x0134c799) */
/* WARNING: Removing unreachable block (ram,0x0134c7a2) */
/* WARNING: Removing unreachable block (ram,0x0134c685) */
/* WARNING: Removing unreachable block (ram,0x0134c68e) */
/* WARNING: Removing unreachable block (ram,0x0134c6ed) */
/* WARNING: Removing unreachable block (ram,0x0134c6f6) */
/* WARNING: Removing unreachable block (ram,0x0134cccd) */
/* WARNING: Removing unreachable block (ram,0x0134ccd6) */

void FUN_0134c610(pthread_key_t param_1)

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong lVar3;
  uint uVar4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  uVar4 = *(uint *)(local_40 + 0xc);
  if (0 < (int)uVar4) {
    lVar3 = (ulonglong)uVar4 + 1;
    do {
      uVar4 = uVar4 - 1;
      pVar2 = uVar4;
      pvVar1 = _pthread_getspecific(uVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508450();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0039e8b0();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_0150ec20();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6e20();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128dda0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
  }
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @014cfcc0 — 1752 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014d0331) */
/* WARNING: Removing unreachable block (ram,0x014d033d) */
/* WARNING: Removing unreachable block (ram,0x014d0369) */
/* WARNING: Removing unreachable block (ram,0x014d0375) */
/* WARNING: Removing unreachable block (ram,0x014cfe5d) */
/* WARNING: Removing unreachable block (ram,0x014cfe66) */
/* WARNING: Removing unreachable block (ram,0x014cfefe) */
/* WARNING: Removing unreachable block (ram,0x014cff07) */

void FUN_014cfcc0(pthread_key_t param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  pthread_key_t pVar14;
  ulonglong uVar15;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) goto LAB_014cfdaf;
  (**(code **)(*unaff_RDI + 0x378))();
  lVar12 = *unaff_RSI;
  if (lVar12 == local_58) {
    if (((char)unaff_RSI[1] != '\0') || (local_58 == 0)) goto LAB_014cfd9b;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_014cfd96;
    }
  }
  else {
    lVar6 = unaff_RSI[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_58;
      if (((char)lVar6 != '\0') && (lVar12 != 0)) {
        FUN_00d50b20();
      }
LAB_014cfd96:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014cfd9b:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014cfdaf;
    }
    *unaff_RSI = local_58;
    if (((char)lVar6 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014cfdaf:
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar18 = (float)FUN_0132db90();
  if (*(int *)(unaff_RDI[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    dVar7 = DAT_0238fee8;
    uVar1 = *(uint *)(local_58 + 0x30);
    uVar16 = (ulonglong)(int)uVar1;
    dVar2 = DAT_0238fee8 / *(double *)(local_58 + 0x38);
    uVar11 = (**(code **)(*unaff_RDI + 0x388))();
    uVar15 = (uVar11 | uVar16) >> 0x20;
    if (uVar15 == 0) {
      uVar16 = (uVar11 & 0xffffffff) % (ulonglong)uVar1;
      iVar9 = (int)((uVar11 & 0xffffffff) / (ulonglong)uVar1);
    }
    else {
      iVar9 = (int)((longlong)uVar11 / (longlong)uVar16);
      uVar16 = (longlong)uVar11 % (longlong)uVar16;
    }
    lVar12 = (**(code **)(*unaff_RDI + 0x380))(uVar15,uVar16);
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar17 = 0;
    if (iVar9 < -1) {
      local_48 = 0;
      bVar4 = false;
      local_40 = 0;
      bVar5 = false;
    }
    else {
      uVar16 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar16 = (ulonglong)(iVar9 + 2U);
      }
      uVar11 = 0;
      bVar5 = false;
      local_40 = 0;
      bVar4 = false;
      local_48 = 0;
      do {
        dVar3 = (double)(iVar17 + lVar12) * (dVar7 / (double)(int)uVar1);
        uVar19 = FUN_014c36d0((float)dVar3,(int)dVar3);
        if (local_58 == local_48) {
          if ((bVar4) || (local_58 == 0)) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar19 = FUN_00d50b20();
            }
          }
          else {
            bVar4 = true;
            if (local_50 == '\0') {
              uVar19 = FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            uVar19 = FUN_00d50b00();
          }
          if ((!bVar4) || (local_48 == 0)) goto LAB_014d0090;
          uVar19 = FUN_00d50b20();
          local_48 = local_58;
          bVar4 = true;
        }
        else if ((bVar4) && (local_48 != 0)) {
          uVar19 = FUN_00d50b20();
          local_48 = local_58;
          bVar4 = true;
        }
        else {
LAB_014d0090:
          local_48 = local_58;
          bVar4 = true;
        }
        FUN_014c36d0(uVar19,(int)dVar3 + 1);
        if (local_58 == local_40) {
          lVar6 = local_40;
          if ((bVar5) || (local_58 == 0)) {
            bVar8 = bVar5;
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = true;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          lVar6 = local_58;
          bVar8 = true;
          if (bVar5) {
            if (local_40 == 0) goto LAB_014d0170;
            FUN_00d50b20();
            lVar6 = local_58;
          }
        }
        else if ((bVar5) && (local_40 != 0)) {
          FUN_00d50b20();
          lVar6 = local_58;
          bVar8 = true;
        }
        else {
LAB_014d0170:
          lVar6 = local_58;
          bVar8 = true;
        }
        bVar5 = bVar8;
        local_40 = lVar6;
        fVar20 = 0.0;
        if ((local_48 != 0) && (fVar20 = 0.0, local_40 != 0)) {
          fVar20 = *(float *)(local_48 + 0x28) * fVar18;
          fVar20 = (*(float *)(local_40 + 0x28) * fVar18 - fVar20) *
                   ((float)dVar3 - (float)(int)dVar3) + fVar20;
        }
        *(float *)(*(longlong *)(local_58 + 0x10) + uVar11 * 4) = fVar20;
        uVar11 = uVar11 + 1;
        iVar17 = iVar17 + uVar1;
      } while (uVar16 != uVar11);
    }
    puVar13 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = 0;
    *(undefined2 *)(puVar13 + 8) = 0;
    pVar14 = 0x25dc9e8;
    *puVar13 = &DAT_025dc9e8;
    puVar13[9] = 0;
    puVar13[10] = 0;
    (*DAT_025dca00)();
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950(SUB84((double)(float)dVar2,0));
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    FUN_014bc1d0();
    FUN_00d50b20();
    if ((bVar5) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @013514e0 — 1647 bytes
// ============================================================

undefined8 * FUN_013514e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  undefined7 uVar11;
  longlong *plVar10;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  longlong local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_78 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*param_2 + 0xc) < 1) {
    plVar3 = (longlong *)0x0;
    local_38 = 0;
    local_60 = 0;
    lVar9 = 0;
    local_58 = 0;
    local_40 = 0;
  }
  else {
    lVar12 = 0;
    local_40 = 0;
    local_58 = 0;
    lVar9 = 0;
    local_60 = 0;
    lVar13 = 0;
    local_38 = 0;
    plVar3 = (longlong *)0x0;
    plVar10 = param_2;
    do {
      pVar7 = (pthread_key_t)lVar13;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_013dd7c0();
      lVar13 = local_50;
      uVar11 = (undefined7)((ulonglong)plVar10 >> 8);
      if (local_50 == local_40) {
        lVar13 = local_40;
        if (((char)local_58 != '\0') || (local_50 == 0)) {
          plVar10 = (longlong *)(local_58 & 0xffffffff);
          goto joined_r0x013516bd;
        }
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_013516d0;
        }
LAB_01351655:
        local_48 = '\0';
        local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        local_40 = lVar13;
      }
      else {
        if (local_48 != '\0') {
          if (((char)local_58 != '\0') && (local_40 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          goto LAB_01351655;
        }
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        plVar10 = (longlong *)CONCAT71(uVar11,1);
        if (((char)local_58 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
          local_40 = lVar13;
LAB_013516d0:
          plVar10 = (longlong *)CONCAT71(uVar11,1);
          lVar13 = local_40;
        }
joined_r0x013516bd:
        local_40 = lVar13;
        if ((local_48 == '\0') || (local_50 == 0)) {
          local_58 = (ulonglong)plVar10 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_58 = (ulonglong)plVar10 & 0xffffffff;
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)(local_40 + 0xc)) {
        lVar13 = 0;
        do {
          plVar10 = plVar3;
          lVar6 = *(longlong *)(local_40 + 0x10);
          lVar1 = *(longlong *)(lVar6 + lVar13 * 8);
          lVar8 = local_40;
          plVar3 = plVar10;
          if (lVar9 == lVar1) {
            if (((char)local_60 == '\0') && (lVar9 != 0)) {
              local_60 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              plVar3 = (longlong *)0x0;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              plVar3 = (longlong *)(local_60 & 0xffffffff);
              lVar6 = FUN_00d50b00();
            }
            if (((char)local_60 == '\0') || (lVar9 == 0)) {
              local_60 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              lVar9 = lVar1;
            }
            else {
              plVar3 = (longlong *)(local_60 & 0xffffffff);
              uVar5 = FUN_00d50b20();
              local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
              lVar9 = lVar1;
            }
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          lVar6 = local_50;
          uVar11 = (undefined7)((ulonglong)plVar3 >> 8);
          cVar2 = (char)plVar10;
          lVar1 = local_50;
          if (local_50 == local_38) {
            plVar3 = plVar10;
            lVar6 = local_38;
            if ((cVar2 == '\0') && (local_50 != 0)) {
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              lVar6 = local_38;
              if (local_48 != '\0') goto joined_r0x013519fe;
              FUN_00d50b00();
LAB_0135189f:
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              lVar6 = local_38;
            }
joined_r0x01351ab8:
            local_38 = lVar6;
            lVar1 = local_50;
            if (local_48 != '\0') {
LAB_013518a9:
              lVar1 = local_50;
              lVar6 = local_38;
              if (local_50 != 0) {
                FUN_00d50b20();
                lVar1 = local_50;
                lVar6 = local_38;
              }
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              if (cVar2 == '\0') goto joined_r0x01351ab8;
              if (local_38 != 0) {
                FUN_00d50b20();
                local_38 = lVar6;
                goto LAB_0135189f;
              }
              local_38 = lVar6;
              lVar1 = local_50;
              if (local_48 == '\0') goto joined_r0x013519fe;
              goto LAB_013518a9;
            }
            plVar3 = (longlong *)CONCAT71(uVar11,1);
            if ((cVar2 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
              lVar1 = local_50;
            }
          }
joined_r0x013519fe:
          local_50 = lVar6;
          local_38 = local_50;
          if (local_50 != 0) {
            pVar7 = (pthread_key_t)local_50;
            local_48 = '\0';
            cVar2 = FUN_00ca18c0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = local_50;
            if (cVar2 == '\0') {
              pvVar4 = _pthread_getspecific(pVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar14 = (double)FUN_0125a280();
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar12);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_013de8d0();
              uVar5 = FUN_00d470c0(dVar14 - dVar15);
              lVar6 = local_50;
              local_68 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar5 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_68 = '\x01';
              local_70 = lVar6;
              local_88 = local_38;
              local_80 = '\0';
              FUN_0139d260(uVar5,&local_88);
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              lVar1 = local_50;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
                lVar1 = local_50;
              }
            }
          }
          local_50 = lVar1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(local_40 + 0xc));
      }
      lVar12 = lVar12 + 1;
      lVar13 = (longlong)*(int *)(*param_2 + 0xc);
    } while (lVar12 < lVar13);
  }
  *unaff_RDI = local_78;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)plVar3 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @010f06d0 — 1637 bytes
// str: ""bool""
// str: ""GNUni""
// str: ""MUTimeline""
// str: ""_useAutomaticDetection""
// str: ""_percussiveSeparation""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f06d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar11;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025e0530;
  FUN_010f0e90();
  FUN_010f0f70();
  FUN_010f1050();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1130();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d030 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278cff8 = FUN_010f03e0();
        _DAT_0278cff0 = "_useAutomaticDetection";
        _DAT_0278d000 = 0;
        _DAT_0278d008 = 0x6200;
        _DAT_0278d010 = "bool";
        _DAT_0278d018 = 0;
        uRam000000000278d020 = 0;
        _DAT_0278d028 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x55) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d078 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d040 = FUN_010f03e0();
        _DAT_0278d038 = "_percussiveSeparation";
        _DAT_0278d048 = 0;
        _DAT_0278d050 = 0x6200;
        _DAT_0278d058 = "bool";
        _DAT_0278d060 = 0;
        uRam000000000278d068 = 0;
        _DAT_0278d070 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x56) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d0c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d088 = FUN_010f03e0();
        _DAT_0278d080 = "_hasDistinctAttacks";
        _DAT_0278d090 = 0;
        _DAT_0278d098 = 0x6200;
        _DAT_0278d0a0 = "bool";
        _DAT_0278d0a8 = 0;
        uRam000000000278d0b0 = 0;
        _DAT_0278d0b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x57) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d108 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d0d0 = FUN_010f03e0();
        _DAT_0278d0c8 = "_findSibilantPointsAutomatically";
        _DAT_0278d0d8 = 0;
        _DAT_0278d0e0 = 0x6200;
        _DAT_0278d0e8 = "bool";
        _DAT_0278d0f0 = 0;
        uRam000000000278d0f8 = 0;
        _DAT_0278d100 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d150 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d118 = FUN_010f03e0();
        _DAT_0278d110 = "_isPreliminary";
        _DAT_0278d120 = 0;
        _DAT_0278d128 = 0x6200;
        _DAT_0278d130 = "bool";
        _DAT_0278d138 = 0;
        uRam000000000278d140 = 0;
        _DAT_0278d148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x59) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d198 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d160 = FUN_010f03e0();
        _DAT_0278d158 = "_isTonalicOnly";
        _DAT_0278d168 = 0;
        _DAT_0278d170 = 0x6200;
        _DAT_0278d178 = "bool";
        _DAT_0278d180 = 0;
        uRam000000000278d188 = 0;
        _DAT_0278d190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x5a) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d1e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d1a8 = FUN_010f03e0();
        _DAT_0278d1a0 = "_allowAutomaticPolyphonicDetection";
        _DAT_0278d1b0 = 0;
        _DAT_0278d1b8 = 0x6200;
        _DAT_0278d1c0 = "bool";
        _DAT_0278d1c8 = 0;
        uRam000000000278d1d0 = 0;
        _DAT_0278d1d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  puVar11 = unaff_RDI + 0xc;
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f12c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline",param_3,param_4,puVar11);
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f13b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f14a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  return;
}




// ============================================================
// @0134fa60 — 1546 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0134ffeb) */
/* WARNING: Removing unreachable block (ram,0x0134fff7) */
/* WARNING: Removing unreachable block (ram,0x01350090) */
/* WARNING: Removing unreachable block (ram,0x013500a0) */

void FUN_0134fa60(void)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b0;
  char local_a8;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  ulonglong local_50;
  longlong local_48;
  char local_40 [8];
  longlong local_38;
  
  if (0 < *(int *)(*unaff_RSI + 0xc)) {
    lVar10 = 0;
    local_50 = 0;
    local_38 = 0;
    bVar2 = false;
    lVar6 = 0;
    do {
      uVar3 = local_50;
      cVar1 = (char)local_50;
      FUN_00d23310();
      lVar9 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar9 != 0)) {
        pcVar4 = (char *)FUN_00d50b20();
      }
      if (lVar9 == lVar6) {
        if ((cVar1 == '\0') && (lVar9 != 0)) {
          local_50 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
          lVar9 = lVar6;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_60 == '\0') || (lVar9 == 0)) {
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
        else {
          FUN_00d50b20();
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
      }
      else if (local_60 == '\0') {
        if (lVar9 != 0) {
          pcVar4 = (char *)FUN_00d50b00();
        }
        local_50 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      lVar6 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)pcVar8;
      if (lVar6 == local_38) {
        if ((bVar2) || (lVar6 == 0)) {
          if ((local_60 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_60 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar2) || (local_38 == 0)) goto LAB_0134fc90;
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else {
LAB_0134fc90:
        local_38 = lVar6;
        bVar2 = true;
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_48 == 0) {
        bVar11 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (pthread_key_t)local_38;
        }
        FUN_0125e7c0();
        if (CONCAT71(uStack_5f,local_60) == 0) {
          bVar11 = false;
          lVar6 = 0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          bVar11 = local_c8 == local_108;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = CONCAT71(uStack_5f,local_60);
        }
        if ((local_58 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        local_e0 = 0;
        local_d8 = local_38;
        local_d0 = 0;
        local_e8 = lVar9;
        FUN_01329cf0(&local_d8,&local_e8);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_00e7bdb0();
      FUN_01287c80();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_012879b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
      lVar6 = lVar9;
    } while (lVar10 < *(int *)(*unaff_RSI + 0xc));
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01353f80 — 1469 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0135443f) */
/* WARNING: Removing unreachable block (ram,0x01354448) */

void FUN_01353f80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_RDI;
  longlong lVar10;
  undefined8 local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40;
  
  if (*(char *)(unaff_RDI + 0x1a9) == '\0') {
    if (*(char *)(unaff_RDI + 0x172) == '\0') {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar6 = &DAT_02572358;
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      lVar8 = *param_2;
      if (*(int *)(lVar8 + 0x18) < 8) {
        bVar2 = false;
        lVar10 = 0;
      }
      else {
        lVar9 = 0;
        lVar10 = 0;
        bVar2 = false;
        local_f0 = param_2;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar8 + 0x10) + 4 + lVar9 * 8);
          lVar8 = *(longlong *)(unaff_RDI + 0x40);
          local_f8 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          FUN_013903d0(0,0,(longlong)iVar1,0);
          lVar9 = local_e8;
          if (local_e8 == lVar10) {
            lVar9 = lVar10;
            if ((bVar2) || (local_e8 == 0)) {
              bVar3 = bVar2;
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
            }
            else if (local_e0 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
            }
            else {
              bVar3 = true;
            }
          }
          else if (local_e0 == '\0') {
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            local_e0 = '\0';
            bVar3 = true;
          }
          bVar2 = bVar3;
          lVar10 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (0 < *(int *)(lVar10 + 0xc)) {
            lVar8 = 0;
            do {
              lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar8 * 8);
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              FUN_00d235a0();
              if (lVar9 != 0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(lVar10 + 0xc));
          }
          lVar9 = local_f8 + 1;
          lVar8 = *local_f0;
          iVar1 = *(int *)(lVar8 + 0x18);
          iVar7 = iVar1 + 7;
          if (-1 < iVar1) {
            iVar7 = iVar1;
          }
          puVar6 = (undefined *)(longlong)(iVar7 >> 3);
        } while (lVar9 < (longlong)puVar6);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar8 = 0;
        do {
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = '\0';
          local_98 = 0;
          FUN_014cfcc0();
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((longlong)puVar4 + 0xc));
      }
      if (*(char *)(unaff_RDI + 0x1a8) != '\x01') {
        FUN_00d64850();
        *(undefined1 *)(unaff_RDI + 0x1a8) = 1;
        FUN_00d64910();
      }
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d403d0();
      local_d8 = DAT_027bf410;
      if (DAT_027bf410 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      FUN_00d50b00();
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d40470(&local_c8,&stack0xffffffffffffff80,3,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_118 = 0;
      local_110 = 0;
      local_108 = *param_2;
      local_100 = 0;
      FUN_0134a250(&local_108,&local_118,0,0);
      FUN_00d403d0();
      local_b8 = DAT_027e0908;
      if (DAT_027e0908 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d50b00();
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d40470(&local_a8,&stack0xffffffffffffff90,3,3);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @0134b5a0 — 1452 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0134bacf) */
/* WARNING: Removing unreachable block (ram,0x0134bad8) */
/* WARNING: Removing unreachable block (ram,0x0134b8ee) */
/* WARNING: Removing unreachable block (ram,0x0134b8f7) */
/* WARNING: Removing unreachable block (ram,0x0134ba91) */
/* WARNING: Removing unreachable block (ram,0x0134ba9e) */

undefined8 * FUN_0134b5a0(longlong *param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(unaff_RSI + 0x40);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar1 = false;
    lVar9 = 0;
    bVar2 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar2 = false;
    lVar9 = 0;
    lVar8 = 0;
    bVar1 = false;
    do {
      pVar7 = (pthread_key_t)lVar8;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar11 * 8);
      if (lVar9 == lVar5) {
        if ((!bVar1) && (lVar9 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar9 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar9 = lVar5;
        }
        else {
          bVar1 = true;
          lVar9 = lVar5;
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (param_3 == '\0') {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_0134b620;
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == 0) {
          if (*param_1 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (*param_2 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5500();
          if (lVar10 == local_50) {
            if ((bVar2) || (lVar10 == 0)) goto joined_r0x0134ba47;
            bVar2 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
              lVar5 = lVar10;
              goto LAB_0134ba0b;
            }
          }
          else if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            lVar5 = local_50;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_0134ba0b:
            bVar2 = true;
            lVar10 = lVar5;
joined_r0x0134ba47:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar2) && (lVar10 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar10 = local_50;
          }
          else {
            bVar2 = true;
            lVar10 = local_50;
          }
          local_48 = '\0';
          FUN_00d235a0();
          local_50 = lVar10;
        }
      }
LAB_0134b620:
      lVar11 = lVar11 + 1;
      lVar5 = *(longlong *)(unaff_RSI + 0x40);
      lVar8 = (longlong)*(int *)(lVar5 + 0xc);
    } while (lVar11 < lVar8);
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01349bf0 — 1386 bytes
// ============================================================

void FUN_01349bf0(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong *plVar8;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
LAB_01349fcd:
    if (*(longlong *)(unaff_RDI + 0x200) != 0) {
      return;
    }
    if (*(longlong *)(unaff_RDI + 0x148) == 0) {
      return;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) {
      return;
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 1) {
      if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
        return;
      }
      goto LAB_01349fcd;
    }
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar8 = *(longlong **)(unaff_RDI + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar8 + 0x370))();
  lVar4 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_70 = 0;
    local_78 = 0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = lVar4;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar2 = -local_60._4_4_;
        }
        else {
          iVar2 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar2);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar2 = 0;
        }
        local_60 = CONCAT44(iVar2,(int)local_60);
      }
      lVar5 = (longlong)(int)local_60;
      iVar2 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      if (*(int *)(local_68 + 0xc) <= iVar2) break;
      lVar7 = *(longlong *)(local_68 + 0x10);
      local_78 = *(undefined8 *)(lVar7 + 8 + lVar5 * 8);
      cVar1 = FUN_01347c70();
      pVar6 = (pthread_key_t)lVar7;
      if (cVar1 == '\0') {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        plVar8 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01349e07;
          }
        }
        else if (local_88 != (longlong *)0x0) {
LAB_01349e07:
          pvVar3 = _pthread_getspecific(pVar6);
          plVar9 = plVar8;
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          fVar10 = (float)(**(code **)(*plVar9 + 0x3e0))();
          if (!NAN(fVar10)) {
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00d50b00();
            pVar6 = 1;
            FUN_014d9720(1,1);
            if (unaff_RDI != 0) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar6);
            plVar9 = plVar8;
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            fVar11 = (float)(**(code **)(*plVar9 + 0x3e0))();
            if (NAN(fVar11)) {
              pvVar3 = _pthread_getspecific(pVar6);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bd3c0(fVar10);
            }
            pvVar3 = _pthread_getspecific(pVar6);
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            fVar11 = (float)(**(code **)(*plVar8 + 0x3e0))();
            FUN_01348960(fVar11 - fVar10);
          }
          FUN_00d50b20();
        }
      }
    }
    lVar5 = local_68;
    FUN_001150f0();
    param_1 = (pthread_key_t)lVar5;
  }
  if (unaff_SIL == '\0') goto LAB_0134a0c6;
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) goto LAB_0134a061;
  }
  else {
LAB_0134a061:
    cVar1 = FUN_01334f30();
    if (cVar1 == '\0') goto LAB_0134a0c6;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_0134a250(&local_98,&local_a8,0,0,0,0);
LAB_0134a0c6:
  if (*(char *)(unaff_RDI + 0x141) != '\x01') {
    FUN_00d64850();
    *(undefined1 *)(unaff_RDI + 0x141) = 1;
    FUN_00d64910();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @013549f0 — 1267 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01354ca8) */
/* WARNING: Removing unreachable block (ram,0x01354cb1) */
/* WARNING: Removing unreachable block (ram,0x01354b3f) */
/* WARNING: Removing unreachable block (ram,0x01354b48) */
/* WARNING: Removing unreachable block (ram,0x01354c6f) */
/* WARNING: Removing unreachable block (ram,0x01354c78) */
/* WARNING: Removing unreachable block (ram,0x01354e86) */
/* WARNING: Removing unreachable block (ram,0x01354e8f) */
/* WARNING: Removing unreachable block (ram,0x01354b78) */
/* WARNING: Removing unreachable block (ram,0x01354b81) */

void FUN_013549f0(float param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  undefined *puVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  
  fVar11 = *(float *)(unaff_RDI + 0x7c);
  if ((fVar11 != param_1) || (NAN(fVar11) || NAN(param_1))) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x7c) = param_1;
    FUN_00d64910();
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &DAT_02572358;
    *puVar4 = &DAT_02572358;
    pcVar2 = DAT_02572370;
    (*DAT_02572370)();
    if (param_1 <= fVar11) {
      lVar10 = *(longlong *)(unaff_RDI + 0x100);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (pthread_key_t)puVar8;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar9 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_014bae60();
          if ((param_1 <= fVar11) && (cVar3 = FUN_00d23d70(), cVar3 == '\0')) {
            FUN_00d21140();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar10 = *(longlong *)(unaff_RDI + 0x100);
          puVar8 = (undefined *)(longlong)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (longlong)puVar8);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329970();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329030();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
      }
    }
    else {
      lVar10 = *(longlong *)(unaff_RDI + 0xd0);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (pthread_key_t)puVar8;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar9 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_014bae60();
          if ((fVar11 < param_1) && (cVar3 = FUN_00d23d70(), cVar3 == '\0')) {
            FUN_00d21140();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar10 = *(longlong *)(unaff_RDI + 0xd0);
          puVar8 = (undefined *)(longlong)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (longlong)puVar8);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013291f0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013297b0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
      }
    }
    if (*(longlong *)(unaff_RDI + 0x1b8) == 0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      (*pcVar2)();
      puVar1 = *(undefined8 **)(unaff_RDI + 0x1b8);
      if (puVar1 == puVar6) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x1b8) = puVar6;
        if (puVar1 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (0 < *(int *)((longlong)puVar4 + 0xc)) {
      lVar10 = 0;
      do {
        lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d235a0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01346520 — 952 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01346776) */
/* WARNING: Removing unreachable block (ram,0x0134677f) */
/* WARNING: Removing unreachable block (ram,0x01346715) */
/* WARNING: Removing unreachable block (ram,0x0134671e) */
/* WARNING: Removing unreachable block (ram,0x013468a8) */
/* WARNING: Removing unreachable block (ram,0x013468b1) */
/* WARNING: Removing unreachable block (ram,0x0134665f) */
/* WARNING: Removing unreachable block (ram,0x01346648) */
/* WARNING: Removing unreachable block (ram,0x01346656) */
/* WARNING: Removing unreachable block (ram,0x013468cb) */

uint FUN_01346520(pthread_key_t param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  
  if (*unaff_RDI != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == 0) {
      if (param_2 != '\0') {
        param_1 = 0;
        cVar1 = FUN_01366cc0(0,0,param_3,param_4,0);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        plVar4 = (longlong *)FUN_00115860();
        (**(code **)(*plVar4 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = (pthread_key_t)plVar4;
        }
        FUN_013dd650();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc440();
        plVar4 = (longlong *)*unaff_RDI;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          plVar4 = (longlong *)*unaff_RDI;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar4 + 0x3a0))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = 0;
        }
        FUN_014bcf30();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfce0();
        FUN_00d50b20();
      }
      return uVar2 ^ 1;
    }
  }
  return 0;
}




// ============================================================
// @01366cc0 — 848 bytes
// ============================================================

undefined8 FUN_01366cc0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double local_68;
  longlong local_60;
  char local_58;
  double local_48;
  double local_40;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = (double)FUN_013de8d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_013de9b0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_013dee00();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_013dee60();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_013de790();
      if (DAT_023942d0 < (double)lVar3 / (double)lVar4) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      pvVar2 = _pthread_getspecific(param_1);
      lVar3 = local_60;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar3 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      plVar6 = *(longlong **)(lVar3 + 0x38);
      if (plVar6 == (longlong *)0x0) {
        local_68 = 0.0;
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          plVar6 = *(longlong **)(lVar3 + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        local_68 = (double)(**(code **)(*plVar6 + 0x370))();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      dVar7 = (double)lVar3 / local_68 + DAT_0240d3e0;
      dVar8 = 0.0;
      if (0.0 <= dVar7) {
        dVar8 = dVar7;
      }
      local_48 = local_48 + dVar8;
      local_40 = local_40 - dVar8;
    }
  }
  uVar5 = FUN_013676b0(local_48,local_40);
  return uVar5;
}




// ============================================================
// @0134bda0 — 830 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0134c0a0) */
/* WARNING: Removing unreachable block (ram,0x0134c0ad) */
/* WARNING: Removing unreachable block (ram,0x0134c025) */
/* WARNING: Removing unreachable block (ram,0x0134c032) */

undefined8 * FUN_0134bda0(undefined8 param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  bool bVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  longlong local_50;
  char local_48;
  longlong local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = *(longlong *)(unaff_RSI + 0x40);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    local_38 = 0;
    bVar9 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar9 = false;
    local_38 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      pVar7 = (pthread_key_t)lVar8;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar11 * 8);
      if (local_38 == lVar6) {
        if ((!bVar2) && (local_38 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_38 = lVar6;
        }
        else {
          bVar2 = true;
          local_38 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar7 = (pthread_key_t)local_38;
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (pthread_key_t)local_38;
        }
        FUN_013de560();
        if (local_50 == lVar10) {
          lVar6 = lVar10;
          bVar1 = bVar9;
          if ((!bVar9) && (local_50 != 0)) {
            bVar1 = true;
            if (local_48 != '\0') goto LAB_0134c000;
            FUN_00d50b00();
            bVar1 = true;
          }
LAB_0134bfec:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = local_50;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar9) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0134bfec;
          }
          bVar1 = true;
          if ((bVar9) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_0134c000:
        lVar10 = lVar6;
        bVar9 = bVar1;
        if (param_2 == '\0') {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if (cVar3 == '\0') {
            local_48 = '\0';
            FUN_00d21140();
            local_50 = lVar6;
          }
        }
        else {
          local_48 = '\0';
          FUN_00d21140();
          local_50 = lVar6;
        }
      }
      lVar11 = lVar11 + 1;
      lVar6 = *(longlong *)(unaff_RSI + 0x40);
      lVar8 = (longlong)*(int *)(lVar6 + 0xc);
    } while (lVar11 < lVar8);
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @0133aef0 — 754 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0133b160) */
/* WARNING: Removing unreachable block (ram,0x0133b0ad) */
/* WARNING: Removing unreachable block (ram,0x0133b0a4) */
/* WARNING: Removing unreachable block (ram,0x0133b0fd) */
/* WARNING: Removing unreachable block (ram,0x0133b106) */
/* WARNING: Removing unreachable block (ram,0x0133b169) */
/* WARNING: Removing unreachable block (ram,0x0133afd9) */
/* WARNING: Removing unreachable block (ram,0x0133afe2) */
/* WARNING: Removing unreachable block (ram,0x0133af71) */
/* WARNING: Removing unreachable block (ram,0x0133af7a) */
/* WARNING: Removing unreachable block (ram,0x0133b047) */
/* WARNING: Removing unreachable block (ram,0x0133b050) */

ulonglong FUN_0133aef0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfdd0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0133af7f;
    }
  }
  else if (local_40 != 0) {
LAB_0133af7f:
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd650();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc570();
    lVar3 = *unaff_RDI;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar3 = *unaff_RDI;
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    FUN_013dfce0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bcf30();
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    FUN_00d50b20();
    goto LAB_0133b1d1;
  }
  uVar4 = 0;
LAB_0133b1d1:
  return uVar4 & 0xffffffff;
}




// ============================================================
// @01349890 — 725 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013499e7) */
/* WARNING: Removing unreachable block (ram,0x013499f0) */

void FUN_01349890(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  longlong *local_48;
  char local_40;
  
  plVar5 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar5 != (longlong *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar5 = *(longlong **)(unaff_RDI + 0x38);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    uVar9 = (**(code **)(*plVar5 + 0x370))();
    lVar3 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar3 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar3 + 0xc)) {
        iVar6 = 0;
        do {
          cVar1 = FUN_01347c70();
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_01349a00;
              }
            }
            else if (local_48 != (longlong *)0x0) {
LAB_01349a00:
              pvVar2 = _pthread_getspecific(param_1);
              plVar5 = local_48;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
              fVar7 = (float)(**(code **)(*plVar5 + 0x3e0))();
              if (!NAN(fVar7)) {
                pvVar2 = _pthread_getspecific(param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bd640(uVar9);
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                if (NAN(fVar8)) {
                  pvVar2 = _pthread_getspecific(param_1);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bd3c0(fVar7);
                }
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                FUN_01348960(fVar8 - fVar7);
              }
              FUN_00d50b20();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar3 + 0xc));
      }
      FUN_001150f0();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01353c30 — 697 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01353eb9) */
/* WARNING: Removing unreachable block (ram,0x01353ec2) */
/* WARNING: Removing unreachable block (ram,0x01353d1d) */
/* WARNING: Removing unreachable block (ram,0x01353d26) */

uint FUN_01353c30(undefined8 param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_0141bab0();
    if (iVar1 == 3) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_58 == 0) {
        pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        local_58 = 0;
      }
      else if (local_50 == '\0') {
        FUN_00d50b00();
        pVar4 = 0;
      }
      else {
        pVar4 = 0;
      }
      pVar5 = pVar4;
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        FUN_0134c610();
        FUN_01327e70();
        FUN_01327a80();
        FUN_01328e30();
        if (param_2 != '\0') {
          FUN_013293f0();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d20e0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d23d0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
      }
      if ((char)pVar4 != '\0' || local_58 == 0) {
        return uVar2 ^ 1;
      }
      FUN_00d50b20();
      return uVar2 ^ 1;
    }
  }
  return 0;
}




// ============================================================
// @014c36d0 — 685 bytes
// ============================================================

longlong * FUN_014c36d0(pthread_key_t param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  int iVar6;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_014c34a0();
  lVar5 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == 0) goto LAB_014c371a;
  }
  else {
    if (local_40 != 0) goto LAB_014c3963;
LAB_014c371a:
    cVar2 = (**(code **)(*unaff_RSI + 1000))();
    iVar6 = -1;
    if ((cVar2 != '\0') && (lVar1 = **(longlong **)(unaff_RSI[0x21] + 0x10), lVar1 != 0)) {
      FUN_00d50b00();
      iVar6 = *(int *)(lVar1 + 0xc);
      FUN_00d50b20();
    }
    if (param_2 < iVar6) {
      FUN_014bc340();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc340();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*unaff_RSI + 1000))();
      if ((cVar2 == '\0') ||
         (lVar5 = **(longlong **)(unaff_RSI[0x21] + 0x10),
         **(longlong **)(unaff_RSI[0x21] + 0x10) == 0)) {
LAB_014c3960:
        lVar5 = 0;
        goto LAB_014c3963;
      }
    }
    else {
      FUN_014bc420();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc420();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*unaff_RSI + 1000))();
      if (cVar2 == '\0') goto LAB_014c3960;
      FUN_00d23340();
      pcVar4 = &local_50;
      if (local_38[0] != '\0') {
        pcVar4 = local_38;
      }
      local_50 = local_38[0];
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = local_40;
      if ((local_50 != '\0') || (local_40 == 0)) goto LAB_014c3963;
    }
  }
  FUN_00d50b00();
LAB_014c3963:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @01109be0 — 648 bytes
// ============================================================

void FUN_01109be0(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_025d8f90;
  if (unaff_RDI[0x40] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x39] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x38] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x37] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x36] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x34] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x33] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x29] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x27] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x25] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x24] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x23] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x22] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x21] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x20] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x19] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x16] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xd] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xc] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xb] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[10] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[9] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[8] != 0) {
    FUN_00d50b20();
  }
  FUN_00d4ffa0();
  return;
}




// ============================================================
// @0110ae80 — 610 bytes
// str: ""MUAudioSourceComponent""
// str: ""MUAudioSourceDescription""
// str: ""MUAudioSourceElement""
// str: ""_audioSourceElements""
// str: ""_audioSourceElement""
// ============================================================

void FUN_0110ae80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar11;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025d9690;
  unaff_RDI[7] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b200();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b2f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b3e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b4d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent",param_3,param_4,puVar11);
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b5c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b6b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceElements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  return;
}




// ============================================================
// @010f5320 — 610 bytes
// str: ""bool""
// str: ""GNUni""
// str: ""MUAnalyzer""
// str: ""MUTrackAudioRecorder""
// str: ""MUAudioSourceDescription""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f5320(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025d0298;
  unaff_RDI[7] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5670();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5760();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5850();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAnalyzer");
  }
  FUN_010f5940();
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5a20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackAudioRecorder");
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027bf760 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027bf728 = FUN_00115af0();
        _DAT_027bf720 = "_isAudioAccessible";
        _DAT_027bf730 = 0;
        _DAT_027bf738 = 0x6211;
        _DAT_027bf740 = "bool";
        _DAT_027bf748 = 0;
        uRam00000000027bf750 = 0;
        _DAT_027bf758 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0110c460 — 599 bytes
// str: ""float""
// str: ""MUAudioSourceDescription""
// str: ""GNInt""
// str: ""_sampleOffset""
// str: ""MUAudioSourceInstrument""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0110c460(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar10;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025bc438;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02793290 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02793258 = FUN_0110c220();
        _DAT_02793250 = "_amount";
        _DAT_02793260 = 0;
        _DAT_02793268 = 0x6600;
        _DAT_02793270 = "float";
        _DAT_02793278 = 0;
        uRam0000000002793280 = 0;
        _DAT_02793288 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027932d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027932a0 = FUN_0110c220();
        _DAT_02793298 = "_sampleOffset";
        _DAT_027932a8 = 0;
        _DAT_027932b0 = 0x6900;
        _DAT_027932b8 = "GNInt";
        _DAT_027932c0 = 0;
        uRam00000000027932c8 = 0;
        _DAT_027932d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110c710();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceInstrumentPortions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110c800();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceInstrumentPortions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceInstrument");
  }
  return;
}




// ============================================================
// @00839f30 — 581 bytes
// str: ""MUPitchSystemRulerView""
// str: ""MUAudioSourceDescriptionType""
// str: ""_currentDescriptionType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00839f30(void)

{
  int iVar1;
  
  if (DAT_027153a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02715380 = _DAT_0238fcc0;
      uRam0000000002715384 = _UNK_0238fcc4;
      uRam0000000002715388 = _UNK_0238fcc8;
      uRam000000000271538c = _UNK_0238fccc;
      _DAT_02715390 = 0x500000004;
      _DAT_02715398 = 6;
      DAT_0271539c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027153d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027153a8 = "MUAudioSourceDescriptionType";
      _DAT_027153b0 = 7;
      DAT_027153b4 = DAT_0271539c;
      _DAT_027153b8 = &DAT_02715380;
      _DAT_027153c0 = &DAT_02715340;
      _DAT_027153c8 = 0;
      uRam00000000027153d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02736730 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027366a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f9768 = FUN_0006d940();
          _DAT_026f9750 = "MUPitchSystemRulerView";
          _DAT_026f9758 = 0x168;
          _DAT_026f9760 = FUN_002757e0;
          _DAT_026f9770 = 0;
          uRam00000000026f9778 = 0;
          _DAT_026f9780 = 0;
          _DAT_026f97f8 = 0;
          uRam00000000026f9800 = 0;
          _DAT_026f9808 = 0;
          DAT_026f980a = 1;
          _DAT_026f9788 = 0;
          uRam00000000026f9790 = 0;
          _DAT_026f9798 = 0;
          uRam00000000026f97a0 = 0;
          _DAT_026f97a8 = 0;
          uRam00000000026f97b0 = 0;
          _DAT_026f97b8 = 0;
          uRam00000000026f97c0 = 0;
          _DAT_026f97c8 = 0;
          uRam00000000026f97d0 = 0;
          _DAT_026f97d8 = 0;
          uRam00000000026f97e0 = 0;
          _DAT_026f97e8 = 0;
          uRam00000000026f97f0 = 0;
          DAT_026f9813 = 0;
          _DAT_026f980b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027366f0 = "_currentDescriptionType";
      _DAT_027366f8 = &DAT_026f9750;
      _DAT_02736700 = 0;
      _DAT_02736708 = 0x6500;
      _DAT_02736710 = "MUAudioSourceDescriptionType";
      _DAT_02736718 = &DAT_027153a8;
      _DAT_02736720 = 0;
      uRam0000000002736728 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027366f0;
}




// ============================================================
// @0135d660 — 556 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0135d7f7) */
/* WARNING: Removing unreachable block (ram,0x0135d72e) */
/* WARNING: Removing unreachable block (ram,0x0135d737) */
/* WARNING: Removing unreachable block (ram,0x0135d797) */
/* WARNING: Removing unreachable block (ram,0x0135d78e) */
/* WARNING: Removing unreachable block (ram,0x0135d7ee) */

void FUN_0135d660(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  FUN_0138f140();
  lVar1 = *unaff_RSI;
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar6 = 0;
    do {
      pVar4 = (pthread_key_t)param_1;
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ce440();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ceed0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014cfcc0();
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        plVar5 = *(longlong **)(unaff_RDI + 0x38);
        if (plVar5 != (longlong *)0x0) goto LAB_0135d850;
LAB_0135d831:
        uVar7 = 0;
      }
      else {
        plVar5 = *(longlong **)(unaff_RDI + 0x38);
        if (plVar5 == (longlong *)0x0) goto LAB_0135d831;
LAB_0135d850:
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          plVar5 = *(longlong **)(unaff_RDI + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        uVar7 = (**(code **)(*plVar5 + 0x370))();
      }
      FUN_014bd640(uVar7);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar1 = *unaff_RSI;
      param_1 = (longlong)*(int *)(lVar1 + 0xc);
    } while (lVar6 < param_1);
  }
  return;
}



