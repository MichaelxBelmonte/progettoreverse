// Function: FUN_00767640
// Address: 00767640
// Size: 17225 bytes
// Class: MUElementAnalyzer
// String references:
//   "MDMetaWindowController"
//   "MUElementAnalyzer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00767640(double param_1)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong **pplVar14;
  longlong lVar15;
  void *pvVar16;
  char *pcVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  pthread_key_t pVar20;
  longlong lVar21;
  int iVar22;
  undefined1 uVar23;
  undefined7 uVar24;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar25;
  undefined4 uVar26;
  longlong *local_568;
  undefined1 local_560;
  longlong *local_558;
  undefined1 local_550;
  longlong *local_548;
  undefined1 local_540;
  undefined8 local_538;
  undefined1 local_530;
  longlong *local_528;
  undefined1 local_520;
  undefined1 local_510;
  longlong local_508;
  char local_500;
  longlong local_4f8;
  char local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  char local_4d8;
  longlong *local_4d0;
  char local_4c8;
  longlong *local_4c0;
  char local_4b8;
  longlong *local_4b0;
  char local_4a8;
  longlong *local_4a0;
  char local_498;
  longlong local_490;
  char local_488;
  longlong local_480;
  char local_478;
  longlong local_470;
  char local_468;
  longlong *local_460;
  char local_458;
  longlong local_450;
  char local_448;
  longlong local_440;
  char local_438;
  longlong *local_430;
  char local_428;
  longlong *local_420;
  char local_418;
  longlong local_410;
  char local_408;
  longlong local_400;
  char local_3f8;
  longlong *local_3f0;
  char local_3e8;
  longlong *local_3e0;
  char local_3d8;
  longlong *local_3d0;
  char local_3c8;
  longlong *local_3c0;
  char local_3b8;
  longlong *local_3b0;
  char local_3a8;
  longlong *local_3a0;
  char local_398;
  longlong *local_390;
  char local_388;
  longlong *local_380;
  char local_378;
  longlong *local_370;
  char local_368;
  longlong *local_360;
  char local_358;
  longlong *local_350;
  char local_348;
  longlong *local_340;
  char local_338;
  longlong local_330;
  char local_328;
  longlong local_320;
  char local_318;
  int local_310;
  int local_30c;
  double local_308;
  ulonglong local_300;
  longlong *local_2f8;
  char local_2f0;
  longlong *local_2e8;
  char local_2e0;
  longlong *local_2d8;
  char local_2d0;
  longlong *local_2c8;
  char local_2c0;
  longlong *local_2b8;
  char local_2b0;
  longlong *local_2a8;
  char local_2a0;
  longlong *local_298;
  char local_290;
  longlong *local_288;
  char local_280;
  longlong *local_278;
  char local_270;
  longlong *local_268;
  char local_260;
  longlong *local_258;
  char local_250;
  longlong *local_248;
  char local_240;
  longlong *local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong *local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  ulonglong local_158;
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140;
  char local_138;
  undefined8 *local_130;
  longlong *local_128;
  char local_10a;
  byte local_109;
  undefined8 local_108;
  longlong *local_100;
  char local_f8;
  undefined7 uStack_f7;
  char local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  int local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0 [8];
  longlong *local_98;
  undefined8 local_90;
  int local_88;
  longlong *local_80;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong *local_40;
  longlong *local_38;
  
  local_308 = param_1;
  FUN_01f27fe0();
  FUN_002a0530();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &DAT_02572358;
  local_130 = puVar12;
  (*DAT_02572370)();
  FUN_00757c60();
  plVar13 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60[0] = '\0';
  }
  local_510 = 1;
  bVar8 = FUN_0076e4d0();
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  local_128 = plVar13;
  FUN_00c9fe20();
  local_e0 = (longlong *)CONCAT71(local_e0._1_7_,local_60[0]);
  pplVar14 = (longlong **)local_60;
  if (local_60[0] == '\0') {
    pplVar14 = &local_e0;
  }
  *(char *)pplVar14 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    pplVar14 = (longlong **)FUN_00d50b20();
  }
  iVar10 = *(int *)((longlong)local_68 + 0xc);
  if ((char)local_e0 != '\0') {
    pplVar14 = (longlong **)FUN_00d50b20();
  }
  local_300 = CONCAT71((int7)((ulonglong)pplVar14 >> 8),1 < iVar10);
  if (bVar8 == 0) {
    FUN_00d46300();
    local_2b8 = local_e0;
    local_2b0 = 0;
    plVar13 = DAT_02729580;
    if ((char)local_d8 == '\0') {
      if (local_e0 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar13 = DAT_02729580;
      }
    }
    else {
      local_d8._0_1_ = '\0';
    }
    local_2b0 = '\x01';
    DAT_02729580 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      local_2b0 = '\x01';
      FUN_00d50b00();
    }
    local_60[0] = '\0';
    local_68 = plVar13;
    FUN_00ca0840();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_2b0 != '\0') && (local_2b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d46300();
    local_2c8 = local_e0;
    local_2c0 = 0;
    plVar13 = DAT_02729580;
    if ((char)local_d8 == '\0') {
      if (local_e0 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar13 = DAT_02729580;
      }
    }
    else {
      local_d8._0_1_ = '\0';
    }
    local_2c0 = '\x01';
    DAT_02729580 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      local_2c0 = '\x01';
      FUN_00d50b00();
    }
    local_60[0] = '\0';
    local_68 = plVar13;
    FUN_00ca0840();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_2c0 != '\0') && (local_2c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*unaff_RSI == 0) {
    local_158 = 0;
    local_e8 = (longlong *)0x0;
    bVar6 = false;
LAB_0076a841:
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_130;
    local_50 = 0xffffffff;
    local_48 = local_48 & 0xffffffff00000000;
    while( true ) {
      lVar15 = (longlong)(int)local_50;
      iVar10 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar10) break;
      local_558 = *(longlong **)(local_58[2] + 8 + lVar15 * 8);
      local_550 = 0;
      local_68 = local_558;
      FUN_007647b0();
      if (local_50._4_4_ != 0) {
        if ((longlong)local_50 < 0) {
          iVar10 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690();
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 + local_50._4_4_);
          iVar10 = 0;
        }
        local_50 = CONCAT44(iVar10,(int)local_50);
      }
    }
    FUN_001159b0();
  }
  else {
    local_d8._0_1_ = '\0';
    local_e0 = (longlong *)0x0;
    local_d0 = *(longlong **)(*unaff_RSI + 0x10);
    local_c8 = CONCAT44(local_c8._4_4_,0xffffffff);
    local_109 = bVar8 ^ 1;
    bVar6 = false;
    local_e8 = (longlong *)0x0;
    local_158 = 0;
    do {
      lVar15 = (longlong)(int)local_c8;
      local_310 = (int)local_c8 + 1;
      local_c8 = CONCAT44(local_c8._4_4_,local_310);
      local_30c = *(int *)((longlong)local_d0 + 0xc);
      if (local_30c <= local_310) break;
      lVar21 = local_d0[2];
      local_568 = *(longlong **)(lVar21 + 8 + lVar15 * 8);
      local_560 = 0;
      local_e0 = local_568;
      FUN_0076e660(lVar21,&local_568);
      pVar20 = (pthread_key_t)lVar21;
      local_38 = local_68;
      if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_0076efa0();
      local_40 = local_68;
      if (((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      if (local_38 == (longlong *)0x0) {
        pvVar16 = _pthread_getspecific(pVar20);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (pthread_key_t)local_40;
        }
        FUN_012e8920();
        pvVar16 = _pthread_getspecific(pVar20);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_4e0 = local_e0;
        local_4d8 = '\0';
        FUN_012cbe00();
        local_80 = local_68;
        plVar13 = local_68;
        if (local_68 == (longlong *)0x0) {
          local_80 = (longlong *)0x0;
          local_150 = 0;
        }
        else if (local_60[0] == '\0') {
          uVar18 = FUN_00d50b00();
          local_150 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          local_150 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
        }
        pVar20 = (pthread_key_t)plVar13;
        if ((local_4d8 != '\0') && (local_4e0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar16 = _pthread_getspecific(pVar20);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        local_2a8 = local_a8;
        local_2a0 = 0;
        if (local_a0[0] == '\0') {
          if (local_a8 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0[0] = '\0';
        }
        local_2a0 = '\x01';
        FUN_01275b30();
        local_80 = local_68;
        plVar13 = local_68;
        if (local_68 == (longlong *)0x0) {
          local_80 = (longlong *)0x0;
          local_150 = 0;
        }
        else if (local_60[0] == '\0') {
          uVar18 = FUN_00d50b00();
          local_150 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          local_150 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
        }
        pVar20 = (pthread_key_t)plVar13;
        if ((local_2a0 != '\0') && (local_2a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_80 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar16 = _pthread_getspecific(pVar20);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (pthread_key_t)local_40;
        }
        FUN_012e5ae0();
        plVar13 = local_68;
        local_4e8 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 == (longlong *)0x0) goto LAB_00767ed0;
          FUN_00d50b00();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar5 = false;
          if (*(int *)((longlong)plVar13 + 0xc) == 0) goto LAB_00767ed5;
        }
        else {
          if (local_68 == (longlong *)0x0) {
LAB_00767ed0:
            bVar5 = true;
          }
          else {
            bVar5 = false;
            if (*(int *)((longlong)local_68 + 0xc) != 0) goto LAB_00767fcd;
          }
LAB_00767ed5:
          pvVar16 = _pthread_getspecific(pVar20);
          if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar20 = (pthread_key_t)local_40;
          }
          FUN_00b8c730();
          FUN_00d8f1a0();
          plVar13 = local_68;
          local_290 = 0;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60[0] = '\0';
          }
          local_290 = '\x01';
          local_298 = plVar13;
          FUN_012e5f80();
          if ((local_290 != '\0') && (local_298 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_00767fcd:
        if (unaff_RDI[0xc] == 0) {
          FUN_00b88600();
          (**(code **)(*local_a8 + 0x3f0))();
          plVar13 = local_68;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
              goto LAB_00768033;
            }
            if (unaff_RDI[0xc] != 0) {
              unaff_RDI[0xc] = 0;
              goto LAB_00768078;
            }
          }
          else {
            local_60[0] = '\0';
LAB_00768033:
            plVar1 = (longlong *)unaff_RDI[0xc];
            if (plVar1 != plVar13) {
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              unaff_RDI[0xc] = (longlong)plVar13;
              if (plVar1 != (longlong *)0x0) {
LAB_00768078:
                FUN_00d50b20();
              }
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific(pVar20);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (pthread_key_t)local_80;
        }
        FUN_012642b0(SUB84(local_308,0));
        pvVar16 = _pthread_getspecific(pVar20);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (pthread_key_t)local_80;
        }
        FUN_012595a0(DAT_023b7c10);
        pvVar16 = _pthread_getspecific(pVar20);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (pthread_key_t)local_40;
        }
        local_4d0 = local_80;
        local_4c8 = '\0';
        FUN_012e6a70();
        if ((local_4c8 != '\0') && (local_4d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific(pVar20);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (pthread_key_t)local_40;
        }
        FUN_012e7fb0();
        pvVar16 = _pthread_getspecific(pVar20);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_4c0 = local_80;
        local_4b8 = '\0';
        FUN_0039e8b0();
        local_288 = local_a8;
        local_280 = 0;
        if (local_a0[0] == '\0') {
          if (local_a8 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0[0] = '\0';
        }
        local_280 = '\x01';
        FUN_0150ddd0();
        if ((local_280 != '\0') && (local_288 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_4b8 != '\0') && (local_4c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_4b0 = local_80;
        local_4a8 = '\0';
        FUN_0039e8b0();
        plVar13 = local_68;
        local_270 = 0;
        if (local_60[0] == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60[0] = '\0';
        }
        local_270 = '\x01';
        local_278 = plVar13;
        FUN_00e7bdb0();
        FUN_01287c80();
        if ((local_270 != '\0') && (local_278 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_4a8 != '\0') && (local_4b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific(pVar20);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = (pthread_key_t)local_40;
        }
        FUN_012e5ae0();
        iVar10 = *(int *)((longlong)local_68 + 0xc);
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar10 == 1) {
          pvVar16 = _pthread_getspecific(pVar20);
          if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar20 = (pthread_key_t)local_40;
          }
          FUN_012f49a0();
        }
        if (local_38 == (longlong *)0x0) {
          local_60[0] = '\0';
          local_68 = (longlong *)0x0;
          FUN_00da5ad0();
          uVar19 = local_50;
          local_50 = local_50 & 0xffffffffffffff00;
          local_58 = local_a8;
          pcVar17 = (char *)&local_50;
          if (local_a0[0] != '\0') {
            local_50 = CONCAT71(SUB87(uVar19,1),1);
            pcVar17 = local_a0;
          }
          *pcVar17 = '\0';
          if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_48 = FUN_00da7170();
          FUN_00da7180();
          if (local_58 == (longlong *)0x0) {
            bVar25 = false;
          }
          else {
            bVar25 = false;
            do {
              FUN_00b88600();
              local_268 = local_b8;
              local_260 = 0;
              if (local_b0 == '\0') {
                if (local_b8 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_b0 = '\0';
              }
              local_260 = '\x01';
              FUN_00742b20();
              pVar20 = 0;
              FUN_01500530();
              plVar13 = local_a8;
              if (local_a0[0] == '\0') {
                if (((local_a8 != (longlong *)0x0) && (FUN_00d50b00(), local_a0[0] != '\0')) &&
                   (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_a0[0] = '\0';
              }
              if ((local_260 != '\0') && (local_268 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 != (longlong *)0x0) {
                pvVar16 = _pthread_getspecific(pVar20);
                if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (pthread_key_t)local_40;
                }
                FUN_012e8920();
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_4a0 = local_e0;
                local_498 = '\0';
                FUN_012cb710();
                local_258 = local_b8;
                local_250 = 0;
                if (local_b0 == '\0') {
                  if (local_b8 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_b0 = '\0';
                }
                local_250 = '\x01';
                pVar20 = (pthread_key_t)&local_10a;
                FUN_01502670();
                plVar13 = local_a8;
                if (local_a8 == local_38) {
LAB_007687fc:
                  if (local_a0[0] != '\0') {
LAB_00768805:
                    if (local_a8 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (local_a0[0] == '\0') {
                    if (local_a8 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    if (local_38 != (longlong *)0x0) {
                      FUN_00d50b20();
                      local_38 = plVar13;
                      goto LAB_007687fc;
                    }
                    local_38 = plVar13;
                    if (local_a0[0] == '\0') goto LAB_00768816;
                    goto LAB_00768805;
                  }
                  if (local_38 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  local_a0[0] = '\0';
                  local_38 = plVar13;
                }
LAB_00768816:
                if ((local_250 != '\0') && (local_258 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_498 != '\0') && (local_4a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
                  FUN_00d50b20();
                }
                if (local_38 != (longlong *)0x0) {
                  if (local_10a != '\0') {
                    FUN_01f27fe0();
                    (**(code **)(*local_a8 + 0x560))();
                    if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  pvVar16 = _pthread_getspecific(pVar20);
                  if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                    pVar20 = (pthread_key_t)local_38;
                  }
                  iVar10 = FUN_01397620();
                  if (iVar10 != 0) {
                    (**(code **)(*unaff_RDI + 0x610))();
                    FUN_00d23310();
                    plVar13 = local_a8;
                    local_f8 = local_a0[0];
                    pcVar17 = local_a0;
                    if (local_a0[0] == '\0') {
                      pcVar17 = &local_f8;
                    }
                    *pcVar17 = '\0';
                    if ((local_a0[0] != '\0') && (plVar13 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_f8 == '\0') && (plVar13 != (longlong *)0x0)) {
                      FUN_00d50b00();
                    }
                    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_148 = plVar13;
                    if ((plVar13 == (longlong *)0x0) ||
                       (uVar18 = FUN_01e561b0(), plVar13 = local_a8, local_a8 == (longlong *)0x0)) {
                      FUN_01f27fe0();
                      uVar18 = (**(code **)(*local_a8 + 0x450))();
                      if ((char)uVar18 == '\0') {
                        bVar25 = false;
                      }
                      else {
                        FUN_01f27fe0();
                        uVar18 = FUN_01f2e7e0();
                        if (local_b8 == (longlong *)0x0) {
                          bVar25 = false;
                        }
                        else {
                          FUN_01f27fe0();
                          FUN_01f2e7e0();
                          FUN_01e5c650();
                          plVar13 = local_140;
                          uVar18 = 0;
                          if ((DAT_026fddb0 == '\0') &&
                             (uVar18 = ___cxa_guard_acquire(), (int)uVar18 != 0)) {
                            _DAT_026e0ab8 = FUN_00015ff0();
                            _DAT_026e0aa0 = "MDMetaWindowController";
                            _DAT_026e0aa8 = 0x198;
                            _DAT_026e0ab0 = FUN_0006dea0;
                            _DAT_026e0ac0 = 0;
                            uRam00000000026e0ac8 = 0;
                            _DAT_026e0ad0 = 0;
                            _DAT_026e0b48 = 0;
                            uRam00000000026e0b50 = 0;
                            _DAT_026e0b58 = 0;
                            DAT_026e0b5a = 1;
                            _DAT_026e0ad8 = 0;
                            uRam00000000026e0ae0 = 0;
                            _DAT_026e0ae8 = 0;
                            uRam00000000026e0af0 = 0;
                            _DAT_026e0af8 = 0;
                            uRam00000000026e0b00 = 0;
                            _DAT_026e0b08 = 0;
                            uRam00000000026e0b10 = 0;
                            _DAT_026e0b18 = 0;
                            uRam00000000026e0b20 = 0;
                            _DAT_026e0b28 = 0;
                            uRam00000000026e0b30 = 0;
                            _DAT_026e0b38 = 0;
                            uRam00000000026e0b40 = 0;
                            DAT_026e0b63 = 0;
                            _DAT_026e0b5b = 0;
                            uVar18 = ___cxa_guard_release();
                          }
                          pplVar14 = (longlong **)&DAT_02802688;
                          if (plVar13 != (longlong *)0x0) {
                            (**(code **)(*plVar13 + 0x360))();
                            uVar18 = FUN_00e85ea0();
                            pplVar14 = &local_140;
                            if ((char)uVar18 == '\0') {
                              pplVar14 = (longlong **)&DAT_02802688;
                            }
                          }
                          bVar25 = *pplVar14 != (longlong *)0x0;
                          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
                            uVar18 = FUN_00d50b20();
                          }
                          if ((local_500 != '\0') && (local_508 != 0)) {
                            uVar18 = FUN_00d50b20();
                          }
                          if ((local_4f0 != '\0') && (local_4f8 != 0)) {
                            uVar18 = FUN_00d50b20();
                          }
                        }
                        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                          uVar18 = FUN_00d50b20();
                        }
                        if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
                          uVar18 = FUN_00d50b20();
                        }
                      }
                      if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                        uVar18 = FUN_00d50b20();
                      }
                      local_158 = CONCAT44(local_158._4_4_,
                                           (int)CONCAT71((int7)((ulonglong)uVar18 >> 8),1));
                      if (bVar25) {
                        FUN_01f27fe0();
                        FUN_01f2e7e0();
                        FUN_01e5c650();
                        uVar18 = FUN_01e561b0();
                        plVar13 = local_a8;
                        if (local_a8 == (longlong *)0x0) {
                          plVar13 = (longlong *)0x0;
                          local_108 = 0;
                        }
                        else if (local_a0[0] == '\0') {
                          uVar18 = FUN_00d50b00();
                          local_108 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
                          if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_a0[0] = '\0';
                          local_108 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
                        }
                        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
                          FUN_00d50b20();
                        }
                        if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar13 != (longlong *)0x0) goto LAB_00768cc3;
                        plVar13 = (longlong *)0x0;
                      }
                      else {
                        plVar13 = (longlong *)0x0;
                        local_108 = 0;
                      }
                    }
                    else {
                      if (((local_a0[0] == '\0') && (uVar18 = FUN_00d50b00(), local_a0[0] != '\0'))
                         && (local_a8 != (longlong *)0x0)) {
                        uVar18 = FUN_00d50b20();
                      }
                      local_108 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
LAB_00768cc3:
                      lVar15 = DAT_026f6f70;
                      if (DAT_026f6f70 != 0) {
                        FUN_00d50b00();
                      }
                      lVar21 = DAT_02729588;
                      local_490 = lVar15;
                      local_488 = '\x01';
                      if (DAT_02729588 != 0) {
                        FUN_00d50b00();
                      }
                      local_480 = lVar21;
                      local_478 = '\x01';
                      local_470 = 0;
                      local_468 = '\0';
                      FUN_00d31230(&local_470,&local_480);
                      local_248 = local_a8;
                      local_240 = 0;
                      if (local_a0[0] == '\0') {
                        if (local_a8 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        local_a0[0] = '\0';
                      }
                      local_240 = '\x01';
                      local_458 = '\0';
                      local_460 = plVar13;
                      FUN_00172950();
                      if ((local_458 != '\0') && (local_460 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_240 != '\0') && (local_248 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_468 != '\0') && (local_470 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_478 != '\0') && (local_480 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_488 != '\0') && (local_490 != 0)) {
                        FUN_00d50b20();
                      }
                      local_158 = local_158 & 0xffffffff00000000;
                    }
                    local_100 = plVar13;
                    FUN_00d403d0();
                    local_2f0 = 0;
                    if (unaff_RDI != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    lVar15 = DAT_02729590;
                    local_2f0 = '\x01';
                    local_2f8 = unaff_RDI;
                    if (DAT_02729590 != 0) {
                      FUN_00d50b00();
                    }
                    local_450 = lVar15;
                    local_448 = '\x01';
                    local_440 = 0;
                    local_438 = '\0';
                    plVar13 = &local_440;
                    FUN_00d41430(plVar13,&local_450);
                    pVar20 = (pthread_key_t)plVar13;
                    if ((local_438 != '\0') && (local_440 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_448 != '\0') && (local_450 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_2f0 != '\0') && (local_2f8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pvVar16 = _pthread_getspecific(pVar20);
                    if (pvVar16 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_428 = '\0';
                    local_430 = (longlong *)0x0;
                    local_420 = (longlong *)0x0;
                    local_418 = '\0';
                    FUN_01397b20(iVar10,&local_420);
                    if ((local_418 != '\0') && (local_420 != (longlong *)0x0)) {
                      (**(code **)(*local_420 + 0x10))();
                      FUN_00d50b20();
                    }
                    if ((local_428 != '\0') && (local_430 != (longlong *)0x0)) {
                      (**(code **)(*local_430 + 0x10))();
                      FUN_00d50b20();
                    }
                    FUN_00d403d0();
                    local_2e0 = 0;
                    if (unaff_RDI != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    lVar15 = DAT_02729590;
                    local_2e0 = '\x01';
                    local_2e8 = unaff_RDI;
                    if (DAT_02729590 != 0) {
                      FUN_00d50b00();
                    }
                    local_410 = lVar15;
                    local_408 = '\x01';
                    local_400 = 0;
                    local_3f8 = '\0';
                    pVar20 = (pthread_key_t)&local_400;
                    FUN_00d41040();
                    if ((local_3f8 != '\0') && (local_400 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_408 != '\0') && (local_410 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_2e0 != '\0') && (local_2e8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((char)local_158 == '\0') {
                      FUN_00172bc0();
                    }
                    pvVar16 = _pthread_getspecific(pVar20);
                    if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                      pVar20 = (pthread_key_t)local_38;
                    }
                    FUN_013d8fe0();
                    if (local_148 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((char)local_108 != '\0' && (char)local_158 == '\0') {
                      FUN_00d50b20();
                    }
                  }
                  pvVar16 = _pthread_getspecific(pVar20);
                  if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                    pVar20 = (pthread_key_t)local_38;
                  }
                  FUN_01320d00();
                  pvVar16 = _pthread_getspecific(pVar20);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_3f0 = local_38;
                  local_3e8 = '\0';
                  uVar18 = FUN_0124c710();
                  if ((local_3e8 != '\0') && (local_3f0 != (longlong *)0x0)) {
                    uVar18 = FUN_00d50b20();
                  }
                  if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                    uVar18 = FUN_00d50b20();
                  }
                  bVar25 = true;
                  local_158 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
                }
                FUN_00d50b20();
              }
              FUN_00da7180();
              if (local_58 == (longlong *)0x0) break;
              local_58 = (longlong *)0x0;
              if ((char)local_50 == '\0') {
                local_50 = local_50 & 0xffffffffffffff00;
                break;
              }
              FUN_00d50b20();
              local_50 = local_50 & 0xffffffffffffff00;
            } while (local_58 != (longlong *)0x0);
          }
          local_58 = (undefined8 *)0x0;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar25 = true;
        }
        if (local_38 == (longlong *)0x0) {
          pvVar16 = _pthread_getspecific(pVar20);
          if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar20 = (pthread_key_t)local_80;
          }
          FUN_01266fe0();
          pvVar16 = _pthread_getspecific(pVar20);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar10 = FUN_012e6040();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_68 = local_80;
          local_60[0] = '\0';
          FUN_00d21140();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar10 == 3) goto LAB_0076a790;
LAB_00769a4b:
          local_380 = local_80;
          local_378 = '\0';
          FUN_0039e8b0();
          plVar13 = local_68;
          local_1c0 = 0;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60[0] = '\0';
          }
          local_1c0 = '\x01';
          local_1c8 = plVar13;
          pvVar16 = _pthread_getspecific(pVar20);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          local_1b8 = local_a8;
          local_1b0 = 0;
          if (local_a0[0] == '\0') {
            if (local_a8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0[0] = '\0';
          }
          local_1b0 = '\x01';
          FUN_0076f1c0();
          if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_378 != '\0') && (local_380 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar16 = _pthread_getspecific(pVar20);
          if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar20 = (pthread_key_t)local_38;
          }
          iVar10 = FUN_01326de0();
          if (iVar10 == 0) {
            local_68 = local_38;
            local_60[0] = '\0';
            cVar9 = FUN_00c9ff50();
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar9 == '\0') {
              bVar25 = false;
LAB_00769a0b:
              local_68 = local_80;
              local_60[0] = '\0';
              FUN_00d21140();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              bVar4 = true;
              bVar3 = true;
              if (bVar25) {
LAB_00769a43:
                if (bVar4) goto LAB_00769a4b;
                FUN_00d50b20();
                goto LAB_0076a790;
              }
            }
            else {
              local_390 = local_38;
              local_388 = '\0';
              FUN_0076f110();
              plVar13 = local_68;
              if (local_68 == (longlong *)0x0) {
                plVar13 = (longlong *)0x0;
                bVar25 = false;
              }
              else {
                if (local_60[0] == '\0') {
                  FUN_00d50b00();
                  bVar25 = true;
                  if ((local_60[0] == '\0') || (local_68 == (longlong *)0x0)) goto LAB_007699b1;
                  FUN_00d50b20();
                }
                else {
                  local_60[0] = '\0';
                }
                bVar25 = true;
              }
LAB_007699b1:
              if ((local_388 != '\0') && (local_390 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 == (longlong *)0x0) goto LAB_00769a0b;
              local_68 = local_80;
              local_60[0] = '\0';
              FUN_00d21140();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              bVar3 = false;
              bVar4 = bVar3;
              if (bVar25) goto LAB_00769a43;
            }
            if (bVar3) goto LAB_00769a4b;
          }
          else {
            if ((local_300 & 1) != 0) {
              if (local_e8 == (longlong *)0x0) {
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0132d610();
                local_e8 = local_68;
                plVar13 = local_68;
                if (local_68 == (longlong *)0x0) {
                  local_e8 = (longlong *)0x0;
                }
                else {
                  bVar6 = true;
                  if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) &&
                     (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                pVar20 = (pthread_key_t)plVar13;
              }
              else {
                pvVar16 = _pthread_getspecific(pVar20);
                if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (pthread_key_t)local_38;
                }
                FUN_0132d610();
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_3e0 = local_e8;
                local_3d8 = '\0';
                cVar9 = FUN_016ccf50();
                if ((local_3d8 != '\0') && (local_3e0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar9 == '\0') {
                  if (bVar6) {
                    FUN_00d50b20();
                  }
                  bVar6 = false;
                  local_e8 = (longlong *)0x0;
                  local_300 = 0;
                }
              }
            }
            if (bVar25) {
              FUN_00757c60();
              pvVar16 = _pthread_getspecific(pVar20);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012caf10();
              plVar13 = local_68;
              if (local_60[0] == '\0') {
                if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
                   (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_60[0] = '\0';
              }
              if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_100 = plVar13;
              if (bVar8 == 0) {
                uVar26 = FUN_0076f070();
                local_148 = (longlong *)CONCAT44(local_148._4_4_,uVar26);
                pvVar16 = _pthread_getspecific(pVar20);
                if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (pthread_key_t)local_38;
                }
                uVar18 = 0;
                plVar13 = (longlong *)0x0;
                FUN_013d8fe0();
              }
              else {
                pvVar16 = _pthread_getspecific(pVar20);
                if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (pthread_key_t)local_38;
                }
                FUN_0132d610();
                plVar1 = local_a8;
                local_230 = 0;
                if (local_a0[0] == '\0') {
                  if (local_a8 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0[0] = '\0';
                }
                local_230 = '\x01';
                local_238 = plVar1;
                FUN_016cbba0();
                plVar13 = local_68;
                if (local_68 == (longlong *)0x0) {
                  plVar13 = (longlong *)0x0;
                  uVar18 = 0;
                }
                else {
                  uVar24 = (undefined7)((ulonglong)plVar1 >> 8);
                  if (local_60[0] == '\0') {
                    FUN_00d50b00();
                    uVar18 = CONCAT71(uVar24,1);
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_60[0] = '\0';
                    uVar18 = CONCAT71(uVar24,1);
                  }
                }
                if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_308 != DAT_02390448) || (NAN(local_308) || NAN(DAT_02390448))) {
                  pvVar16 = _pthread_getspecific(pVar20);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_016ea7c0(SUB84(local_308,0));
                }
                local_148 = (longlong *)((ulonglong)local_148 & 0xffffffff00000000);
              }
              local_108 = uVar18;
              pvVar16 = _pthread_getspecific(pVar20);
              if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              FUN_012e8920();
              pvVar16 = _pthread_getspecific(pVar20);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012cade0();
              pvVar16 = _pthread_getspecific(pVar20);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015058d0();
              pvVar16 = _pthread_getspecific(pVar20);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar16 = _pthread_getspecific(pVar20);
              if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pVar20 = (pthread_key_t)local_38;
              }
              FUN_0132d900();
              local_220 = 0;
              lVar15 = CONCAT71(uStack_f7,local_f8);
              if (local_f0 == '\0') {
                if (lVar15 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_f0 = '\0';
              }
              local_220 = '\x01';
              local_228 = lVar15;
              cVar9 = FUN_01511080();
              if ((local_220 != '\0') && (local_228 != 0)) {
                FUN_00d50b20();
              }
              if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
                FUN_00d50b20();
              }
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar9 != '\0') {
                pvVar16 = _pthread_getspecific(pVar20);
                if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (pthread_key_t)local_40;
                }
                FUN_012e8920();
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012cade0();
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_015058d0();
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01510280();
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_018847d0();
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
                  FUN_00d50b20();
                }
              }
              if (((char)local_148 == '\0' && local_109 == 0) && (plVar13 != (longlong *)0x0)) {
                uVar26 = FUN_00d46300();
                local_218 = local_a8;
                local_210 = 0;
                plVar1 = DAT_02729580;
                if (local_a0[0] == '\0') {
                  if (local_a8 != (longlong *)0x0) {
                    uVar26 = FUN_00d50b00();
                    plVar1 = DAT_02729580;
                  }
                }
                else {
                  local_a0[0] = '\0';
                }
                local_210 = '\x01';
                DAT_02729580 = plVar1;
                if (plVar1 != (longlong *)0x0) {
                  local_210 = '\x01';
                  uVar26 = FUN_00d50b00();
                }
                local_60[0] = '\0';
                local_68 = plVar1;
                FUN_00ca0840(uVar26,&local_68);
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar20);
                if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (pthread_key_t)local_40;
                }
                FUN_012e8920();
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_3c8 = '\0';
                local_3d0 = plVar13;
                FUN_012cae50();
                if ((local_3c8 != '\0') && (local_3d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              pvVar16 = _pthread_getspecific(pVar20);
              if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pVar20 = (pthread_key_t)local_40;
              }
              local_3c0 = local_80;
              local_3b8 = '\0';
              FUN_0039e8b0();
              local_208 = local_a8;
              local_200 = 0;
              if (local_a0[0] == '\0') {
                if (local_a8 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a0[0] = '\0';
              }
              local_200 = '\x01';
              local_3b0 = local_38;
              local_3a8 = '\0';
              pvVar16 = _pthread_getspecific(pVar20);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              local_1f8 = local_b8;
              local_1f0 = 0;
              if (local_b0 == '\0') {
                if (local_b8 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_b0 = '\0';
              }
              uVar18 = local_108;
              local_1f0 = '\x01';
              pplVar14 = &local_3b0;
              FUN_012f0b60(pplVar14,&local_208,0,0,&local_1f8);
              plVar1 = local_68;
              pVar20 = (pthread_key_t)pplVar14;
              if (local_60[0] == '\0') {
                if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
                   (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_60[0] = '\0';
              }
              if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_3a8 != '\0') && (local_3b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_3b8 != '\0') && (local_3c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)local_148 != '\0') {
                local_3a0 = plVar1;
                local_398 = '\0';
                pvVar16 = _pthread_getspecific(pVar20);
                if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar20 = (pthread_key_t)local_38;
                }
                FUN_0132d610();
                plVar7 = local_68;
                local_1e0 = 0;
                if (local_60[0] == '\0') {
                  if (local_68 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_60[0] = '\0';
                }
                local_1e0 = '\x01';
                local_1e8 = plVar7;
                FUN_00757c60();
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012caf10();
                local_1d8 = local_a8;
                local_1d0 = 0;
                if (local_a0[0] == '\0') {
                  if (local_a8 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0[0] = '\0';
                }
                uVar18 = local_108;
                local_1d0 = '\x01';
                pvVar16 = _pthread_getspecific(pVar20);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a280();
                FUN_01297c10();
                if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_398 != '\0') && (local_3a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (local_100 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (((char)uVar18 != '\0') && (plVar13 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
LAB_0076a790:
        if (!bVar5) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_150 != '\0') {
          FUN_00d50b20();
        }
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    } while (local_80 != (longlong *)0x0);
    if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_310 < local_30c) {
      uVar19 = 0;
      goto LAB_0076ba86;
    }
    if (local_130 != (undefined8 *)0x0) goto LAB_0076a841;
  }
  FUN_00c9fe20();
  plVar13 = local_68;
  pplVar14 = (longlong **)local_60;
  if (local_60[0] == '\0') {
    pplVar14 = &local_e0;
  }
  local_e0 = (longlong *)CONCAT71(local_e0._1_7_,local_60[0]);
  *(char *)pplVar14 = '\0';
  if ((local_60[0] != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar20 = (pthread_key_t)pplVar14;
  iVar10 = *(int *)((longlong)plVar13 + 0xc);
  if ((char)local_e0 != '\0') {
    FUN_00d50b20();
  }
  if (iVar10 < 2) {
    if (unaff_RDI[0x28] != 0) {
      unaff_RDI[0x28] = 0;
      FUN_00d50b20();
    }
  }
  else if (unaff_RDI[0x28] == 0) {
    plVar13 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar13 + 0x18))();
    lVar15 = unaff_RDI[0x28];
    unaff_RDI[0x28] = (longlong)plVar13;
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
  }
  if ((*(int *)((longlong)local_130 + 0xc) < 2) && (unaff_RDI[0x28] != 0)) {
    unaff_RDI[0x28] = 0;
    FUN_00d50b20();
  }
  if (local_e8 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
    bVar5 = false;
  }
  else {
    if (unaff_RDI[0x28] != 0) {
      unaff_RDI[0x28] = 0;
      local_40 = (longlong *)0x0;
      FUN_00d50b20();
    }
    if (bVar6) {
      local_40 = (longlong *)0x0;
      FUN_00d50b00();
    }
    local_40 = local_e8;
    bVar5 = bVar6;
    if (bVar8 != 0) {
      FUN_00757c60();
      pvVar16 = _pthread_getspecific(pVar20);
      if (pvVar16 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_370 = local_e8;
      local_368 = '\0';
      FUN_016cbba0();
      local_1a8 = local_e0;
      local_1a0 = 0;
      if ((char)local_d8 == '\0') {
        if (local_e0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d8._0_1_ = '\0';
      }
      local_1a0 = '\x01';
      FUN_012cae50();
      if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_368 != '\0') && (local_370 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d46300();
      local_198 = local_e0;
      local_190 = 0;
      plVar13 = DAT_02729580;
      if ((char)local_d8 == '\0') {
        if (local_e0 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar13 = DAT_02729580;
        }
      }
      else {
        local_d8._0_1_ = '\0';
      }
      local_190 = '\x01';
      DAT_02729580 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        local_190 = '\x01';
        FUN_00d50b00();
      }
      local_60[0] = '\0';
      local_68 = plVar13;
      FUN_00ca0840();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = local_e8;
    }
  }
  *(undefined2 *)(unaff_RDI + 0x2b) = 0;
  unaff_RDI[0x2c] = 0;
  if (unaff_RDI[0x28] != 0) {
    FUN_00d46300();
    local_188 = local_e0;
    local_180 = 0;
    plVar13 = DAT_02729580;
    if ((char)local_d8 == '\0') {
      if (local_e0 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar13 = DAT_02729580;
      }
    }
    else {
      local_d8._0_1_ = '\0';
    }
    local_180 = '\x01';
    DAT_02729580 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      local_180 = '\x01';
      FUN_00d50b00();
    }
    local_60[0] = '\0';
    local_68 = plVar13;
    FUN_00ca0840();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar8 == 0) {
      cVar9 = FUN_0076f070();
      if (cVar9 != '\0') {
        *(undefined1 *)((longlong)unaff_RDI + 0x159) = 1;
        plVar13 = *(longlong **)local_130[2];
        pvVar16 = _pthread_getspecific(pVar20);
        if ((pvVar16 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
        }
        lVar15 = FUN_0125a280();
        unaff_RDI[0x2c] = lVar15;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 0x2b) = 1;
    }
  }
  if (unaff_RDI[0x2a] != 0) {
    unaff_RDI[0x2a] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] != 0) {
    plVar13 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar13 + 0x18))();
    lVar15 = unaff_RDI[0x2a];
    unaff_RDI[0x2a] = (longlong)plVar13;
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
  }
  local_60[0] = '\0';
  local_68 = (longlong *)0x0;
  local_58 = local_130;
  local_50 = 0xffffffff;
  local_48 = local_48 & 0xffffffff00000000;
  local_150 = CONCAT71(local_150._1_7_,local_40 != (longlong *)0x0);
  local_50._4_4_ = 0;
  while( true ) {
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar10 = -local_50._4_4_;
      }
      else {
        iVar10 = (int)local_50 - local_50._4_4_;
        local_50 = CONCAT44(local_50._4_4_,iVar10);
        FUN_00d23690();
        local_48 = CONCAT44(local_48._4_4_,(int)local_48 + local_50._4_4_);
        iVar10 = 0;
      }
      local_50 = CONCAT44(iVar10,(int)local_50);
    }
    lVar15 = (longlong)(int)local_50;
    iVar10 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar10);
    if (*(int *)((longlong)local_58 + 0xc) <= iVar10) break;
    lVar21 = local_58[2];
    local_68 = *(longlong **)(lVar21 + 8 + lVar15 * 8);
    pvVar16 = _pthread_getspecific((pthread_key_t)lVar21);
    pVar20 = (pthread_key_t)lVar21;
    if (pvVar16 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar16 = _pthread_getspecific(pVar20);
    if (pvVar16 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar11 = FUN_012e6040();
    plVar13 = (longlong *)(ulonglong)uVar11;
    if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (uVar11 != 3) {
      uVar23 = (char)local_150;
      if (unaff_RDI[0x28] != 0) {
        pvVar16 = _pthread_getspecific(pVar20);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar13 = local_e0;
        if (((((char)local_d8 == '\0') && (local_e0 != (longlong *)0x0)) &&
            (FUN_00d50b00(), (char)local_d8 != '\0')) && (local_e0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific(pVar20);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        plVar1 = local_a8;
        local_170 = 0;
        if (local_a0[0] == '\0') {
          if (local_a8 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0[0] = '\0';
        }
        local_170 = '\x01';
        local_178 = plVar1;
        FUN_00243390();
        plVar1 = local_e0;
        if ((char)local_d8 == '\0') {
          if (((local_e0 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_d8 != '\0')) &&
             (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_d8._0_1_ = '\0';
        }
        if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (1 < *(int *)((longlong)plVar1 + 0xc)) {
          local_e0 = local_68;
          local_d8._0_1_ = '\0';
          uVar26 = FUN_00d23f50();
          if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            uVar26 = FUN_00d50b20();
          }
          local_360 = plVar1;
          local_358 = '\0';
          local_350 = plVar13;
          local_348 = '\0';
          FUN_0076f270(uVar26,&local_350);
          if ((local_348 != '\0') && (local_350 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_358 != '\0') && (local_360 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        uVar23 = 1;
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      local_548 = local_68;
      local_540 = 0;
      local_538 = 0;
      local_530 = 0;
      local_528 = local_40;
      local_520 = 0;
      FUN_00764ff0(0,&local_548,&local_538,uVar23);
      plVar13 = local_e0;
      if (((char)local_d8 == '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_38 = plVar13;
      FUN_00c9fe20();
      plVar1 = local_e0;
      local_a8 = (longlong *)CONCAT71(local_a8._1_7_,(char)local_d8);
      pplVar14 = &local_d8;
      if ((char)local_d8 == '\0') {
        pplVar14 = &local_a8;
      }
      *(undefined1 *)pplVar14 = 0;
      if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar13 = plVar1;
      }
      if ((char)local_a8 == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar13 = plVar1;
          goto LAB_0076b34b;
        }
      }
      else if (plVar1 != (longlong *)0x0) {
LAB_0076b34b:
        local_d8._0_1_ = '\0';
        local_e0 = (longlong *)0x0;
        local_80 = plVar1;
        local_d0 = plVar1;
        local_c8 = 0xffffffff;
        local_c0 = 0;
        iVar10 = 0;
        while( true ) {
          iVar22 = 0;
          if (iVar10 != 0) {
            if (iVar10 < 1) {
              iVar22 = -iVar10;
            }
            else {
              local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 - iVar10);
              FUN_00d23690();
              local_c0 = local_c0 + local_c8._4_4_;
              iVar22 = 0;
            }
            local_c8 = CONCAT44(iVar22,(int)local_c8);
          }
          lVar15 = (longlong)(int)local_c8;
          iVar10 = (int)local_c8 + 1;
          local_c8 = CONCAT44(local_c8._4_4_,iVar10);
          if (*(int *)((longlong)local_d0 + 0xc) <= iVar10) break;
          local_e0 = *(longlong **)(local_d0[2] + 8 + lVar15 * 8);
          iVar10 = iVar22;
          if (local_38 != (longlong *)0x0) {
            local_a0[0] = '\0';
            local_a8 = (longlong *)0x0;
            local_98 = local_38;
            local_90 = 0xffffffff;
            local_88 = 0;
            local_90._4_4_ = 0;
            while( true ) {
              if (local_90._4_4_ != 0) {
                if (local_90._4_4_ < 1) {
                  iVar10 = -local_90._4_4_;
                }
                else {
                  iVar10 = (int)local_90 - local_90._4_4_;
                  local_90 = CONCAT44(local_90._4_4_,iVar10);
                  FUN_00d23690();
                  local_88 = local_88 + local_90._4_4_;
                  iVar10 = 0;
                }
                local_90 = CONCAT44(iVar10,(int)local_90);
              }
              lVar15 = (longlong)(int)local_90;
              iVar10 = (int)local_90 + 1;
              local_90 = CONCAT44(local_90._4_4_,iVar10);
              if (*(int *)((longlong)local_98 + 0xc) <= iVar10) break;
              plVar13 = *(longlong **)(local_98[2] + 8 + lVar15 * 8);
              local_a8 = plVar13;
              if ((DAT_026e0c38 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
                _DAT_026e0b88 = FUN_000fddb0();
                _DAT_026e0b70 = "MUElementAnalyzer";
                _DAT_026e0b78 = 0x180;
                _DAT_026e0b80 = FUN_000fdd80;
                _DAT_026e0b90 = 0;
                uRam00000000026e0b98 = 0;
                _DAT_026e0ba0 = 0;
                _DAT_026e0c18 = 0;
                uRam00000000026e0c20 = 0;
                _DAT_026e0c28 = 0;
                DAT_026e0c2a = 1;
                _DAT_026e0ba8 = 0;
                uRam00000000026e0bb0 = 0;
                _DAT_026e0bb8 = 0;
                uRam00000000026e0bc0 = 0;
                _DAT_026e0bc8 = 0;
                uRam00000000026e0bd0 = 0;
                _DAT_026e0bd8 = 0;
                uRam00000000026e0be0 = 0;
                _DAT_026e0be8 = 0;
                uRam00000000026e0bf0 = 0;
                _DAT_026e0bf8 = 0;
                uRam00000000026e0c00 = 0;
                _DAT_026e0c08 = 0;
                uRam00000000026e0c10 = 0;
                DAT_026e0c33 = 0;
                _DAT_026e0c2b = 0;
                ___cxa_guard_release();
              }
              pplVar14 = (longlong **)&DAT_02802688;
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x360))();
                cVar9 = FUN_00e85ea0();
                pplVar14 = &local_a8;
                if (cVar9 == '\0') {
                  pplVar14 = (longlong **)&DAT_02802688;
                }
              }
              if (*(char *)(pplVar14 + 1) == '\0') {
                if (*pplVar14 != (longlong *)0x0) {
                  FUN_00d50b00();
                  goto LAB_0076b541;
                }
              }
              else {
                *(undefined1 *)(pplVar14 + 1) = 0;
                if (*pplVar14 != (longlong *)0x0) {
LAB_0076b541:
                  uVar26 = FUN_00e33de0();
                  plVar13 = (longlong *)CONCAT71(uStack_f7,local_f8);
                  local_340 = local_e0;
                  local_338 = '\0';
                  uVar26 = FUN_000175c0(uVar26,&local_340);
                  local_168 = local_140;
                  local_160 = 0;
                  if (local_138 == '\0') {
                    if (local_140 != (longlong *)0x0) {
                      uVar26 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_138 = '\0';
                  }
                  local_160 = '\x01';
                  local_b8 = local_e0;
                  local_b0 = '\0';
                  FUN_00ca0840(uVar26,&local_b8);
                  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_338 != '\0') && (local_340 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
            }
            FUN_00097c40();
            iVar10 = local_c8._4_4_;
          }
        }
        FUN_00018280();
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_001159b0();
  if ((bVar8 != 0) && (cVar9 = FUN_00108e10(), cVar9 == '\0')) {
    FUN_0010a4f0();
  }
  plVar1 = DAT_026f6f08;
  if ((local_158 & 1) != 0) {
    if (DAT_026f6f08 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar2 = (double)FUN_00e7d6f0();
    uVar19 = (ulonglong)(dVar2 * DAT_023907c0);
    dVar2 = dVar2 * DAT_023907c0 - _DAT_023907c8;
    uVar26 = FUN_0071a120();
    if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
        (uVar26 = FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
      uVar26 = FUN_00d50b20();
    }
    bVar8 = (byte)(((longlong)dVar2 & (longlong)uVar19 >> 0x3f | uVar19) / 3);
    local_e0 = plVar1;
    local_d8._0_1_ = '\0';
    FUN_000175c0(uVar26,&local_e0);
    plVar13 = local_68;
    if (local_60[0] == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
    }
    if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (longlong *)0x0) {
      local_60[0] = '\0';
      local_68 = plVar13;
      bVar8 = FUN_00c70bc0();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar8 = plVar13 != (longlong *)0x0 & bVar8;
    plVar13 = (longlong *)CONCAT71((int7)((ulonglong)plVar13 >> 8),bVar8);
    if (bVar8 == 0) {
      FUN_00d403d0();
      local_330 = DAT_026f6d50;
      if (DAT_026f6d50 != 0) {
        FUN_00d50b00();
      }
      local_328 = '\x01';
      local_2d0 = 0;
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_2d0 = '\x01';
      local_320 = 0;
      local_318 = '\0';
      local_2d8 = unaff_RDI;
      FUN_00d40470(&local_320,&local_2d8,1,3);
      if ((local_318 != '\0') && (local_320 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2d0 != '\0') && (local_2d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_328 != '\0') && (local_330 != 0)) {
        FUN_00d50b20();
      }
      plVar13 = unaff_RDI;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar19 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
  if ((bVar5) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0076ba86:
  if ((bVar6) && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_128 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return uVar19 & 0xffffffff;
}


