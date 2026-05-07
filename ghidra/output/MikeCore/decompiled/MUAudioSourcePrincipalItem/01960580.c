// Function: FUN_01960580
// Address: 01960580
// Size: 9438 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01960580(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar13;
  bool bVar14;
  undefined4 uVar15;
  longlong local_4c8;
  char local_4c0;
  longlong local_4b8;
  char local_4b0;
  longlong local_4a8;
  char local_4a0;
  longlong local_498;
  char local_490;
  longlong local_488;
  char local_480;
  longlong local_478;
  char local_470;
  longlong local_468;
  char local_460;
  longlong local_458;
  char local_450;
  longlong local_448;
  char local_440;
  longlong local_438;
  char local_430;
  longlong local_428;
  char local_420;
  longlong local_418;
  char local_410;
  longlong local_408;
  char local_400;
  longlong local_3f8;
  char local_3f0;
  longlong local_3e8;
  char local_3e0;
  longlong local_3d8;
  char local_3d0;
  longlong local_3c8;
  char local_3c0;
  longlong local_3b8;
  char local_3b0;
  longlong local_3a8;
  char local_3a0;
  longlong local_398;
  char local_390;
  longlong local_388;
  char local_380;
  longlong local_378;
  char local_370;
  longlong local_368;
  char local_360;
  longlong local_358;
  char local_350;
  longlong local_348;
  char local_340;
  ulonglong local_338;
  char local_330;
  longlong local_328;
  char local_320;
  ulonglong local_318;
  char local_310;
  longlong local_308;
  char local_300;
  ulonglong local_2f8;
  char local_2f0;
  longlong local_2e8;
  char local_2e0;
  longlong local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  ulonglong local_160;
  char local_158;
  ulonglong local_150;
  char local_148;
  ulonglong local_140;
  char local_138;
  ulonglong local_130;
  char local_128;
  ulonglong local_120;
  char local_118;
  ulonglong local_110;
  char local_108;
  ulonglong local_100;
  char local_f8;
  ulonglong local_f0;
  char local_e8;
  ulonglong local_e0;
  char local_d8;
  ulonglong local_d0;
  char local_c8;
  ulonglong local_c0;
  char local_b8;
  ulonglong local_b0;
  char local_a8;
  ulonglong local_a0;
  char local_98;
  ulonglong local_90;
  char local_88;
  ulonglong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_4c;
  ulonglong local_48;
  ulonglong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x178) == *unaff_RSI) {
    return;
  }
  plVar1 = (longlong *)(unaff_RDI + 0x178);
  if (*(longlong *)(unaff_RDI + 0x178) != 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar2 = (longlong *)(unaff_RDI + 0x168);
    (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
    uVar15 = FUN_00d50b00();
    local_4c8 = 0;
    local_4c0 = '\0';
    FUN_00e8b9a0(uVar15,&local_4c8);
    if ((local_4c0 != '\0') && (local_4c8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      (**(code **)(*plVar2 + 0x10))();
      FUN_00d50b00();
      local_4b8 = 0;
      local_4b0 = '\0';
      local_4a8 = 0;
      local_4a0 = '\0';
      plVar10 = &local_4a8;
      FUN_00cbadd0(plVar10,&local_4b8);
      param_1 = (pthread_key_t)plVar10;
      if ((local_4a0 != '\0') && (local_4a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_4b0 != '\0') && (local_4b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        FUN_00d50b20();
      }
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if (local_40 == 0) {
      bVar14 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      bVar14 = local_60 != 0;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar14) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      lVar7 = local_60;
      pvVar6 = _pthread_getspecific(param_1);
      lVar3 = local_60;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar3, lVar8 != 0)) {
        lVar7 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      FUN_013de560();
      uVar13 = local_40;
      if (local_40 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        uVar13 = 0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          uVar12 = 0;
          if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01960993;
          FUN_00d50b20();
        }
        else {
          local_38 = '\0';
        }
        uVar12 = 0;
      }
LAB_01960993:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (uVar13 != 0) {
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = FUN_00e8b990();
        if (lVar7 == 0) {
LAB_01960a37:
          pvVar6 = _pthread_getspecific(param_1);
          local_48 = CONCAT44(local_48._4_4_,(int)uVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          (**(code **)(*plVar2 + 0x10))();
          uVar15 = FUN_00d50b00();
          local_498 = 0;
          local_490 = '\0';
          FUN_00e8b9a0(uVar15,&local_498);
          uVar12 = local_48 & 0xffffffff;
          if ((local_490 != '\0') && (local_498 != 0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))();
            FUN_00d50b20();
          }
        }
        else {
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e8b990();
          cVar4 = FUN_00caf320();
          if (cVar4 != '\0') goto LAB_01960a37;
        }
        if ((char)uVar12 == '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  lVar7 = *unaff_RSI;
  lVar3 = *plVar1;
  lVar8 = lVar3;
  if (lVar3 != lVar7) {
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    *plVar1 = lVar7;
    lVar8 = lVar7;
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar8 = *plVar1;
    }
  }
  if (lVar8 == 0) goto LAB_0196283c;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = FUN_00e8b990();
  if (lVar7 == 0) goto LAB_0196283c;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar2 = (longlong *)(unaff_RDI + 0x168);
  (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
  FUN_00d50b00();
  local_488 = 0;
  local_480 = '\0';
  pVar9 = 4;
  FUN_00e8b850(4,&local_488);
  if ((local_480 != '\0') && (local_488 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_478 = 0;
  local_470 = '\0';
  FUN_007ef2d0();
  uVar15 = FUN_00e86210();
  local_468 = DAT_027e0b10;
  if (DAT_027e0b10 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_460 = '\x01';
  FUN_00c841b0(uVar15,&local_468);
  local_160 = local_40;
  local_158 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_158 = '\x01';
  puVar11 = &local_160;
  FUN_00cbad30(puVar11,&local_478,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_460 != '\0') && (local_468 != 0)) {
    FUN_00d50b20();
  }
  if ((local_470 != '\0') && (local_478 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_458 = 0;
  local_450 = '\0';
  FUN_007eece0();
  uVar15 = FUN_00e86210();
  local_448 = DAT_0272f6d8;
  if (DAT_0272f6d8 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_440 = '\x01';
  FUN_00c841b0(uVar15,&local_448);
  local_150 = local_40;
  local_148 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_148 = '\x01';
  puVar11 = &local_150;
  FUN_00cbad30(puVar11,&local_458,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_440 != '\0') && (local_448 != 0)) {
    FUN_00d50b20();
  }
  if ((local_450 != '\0') && (local_458 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_438 = 0;
  local_430 = '\0';
  FUN_011b49f0();
  uVar15 = FUN_00e86210();
  local_428 = DAT_027bf048;
  if (DAT_027bf048 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_420 = '\x01';
  FUN_00c841b0(uVar15,&local_428);
  local_140 = local_40;
  local_138 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_138 = '\x01';
  puVar11 = &local_140;
  FUN_00cbad30(puVar11,&local_438,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_420 != '\0') && (local_428 != 0)) {
    FUN_00d50b20();
  }
  if ((local_430 != '\0') && (local_438 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_418 = 0;
  local_410 = '\0';
  FUN_011b49f0();
  uVar15 = FUN_00e86210();
  local_408 = DAT_027e1e80;
  if (DAT_027e1e80 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_400 = '\x01';
  FUN_00c841b0(uVar15,&local_408);
  local_130 = local_40;
  local_128 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_128 = '\x01';
  puVar11 = &local_130;
  FUN_00cbad30(puVar11,&local_418,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_400 != '\0') && (local_408 != 0)) {
    FUN_00d50b20();
  }
  if ((local_410 != '\0') && (local_418 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_3f8 = 0;
  local_3f0 = '\0';
  FUN_0006e1c0();
  uVar15 = FUN_00e86210();
  local_3e8 = DAT_026d83e8;
  if (DAT_026d83e8 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_3e0 = '\x01';
  FUN_00c841b0(uVar15,&local_3e8);
  local_120 = local_40;
  local_118 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_118 = '\x01';
  puVar11 = &local_120;
  FUN_00cbad30(puVar11,&local_3f8,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_118 != '\0') && (local_120 != 0)) {
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_3d8 = 0;
  local_3d0 = '\0';
  FUN_0006e1c0();
  uVar15 = FUN_00e86210();
  local_3c8 = DAT_026d83f8;
  if (DAT_026d83f8 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_3c0 = '\x01';
  FUN_00c841b0(uVar15,&local_3c8);
  local_110 = local_40;
  local_108 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_108 = '\x01';
  puVar11 = &local_110;
  FUN_00cbad30(puVar11,&local_3d8,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3c0 != '\0') && (local_3c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3d0 != '\0') && (local_3d8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_3b8 = 0;
  local_3b0 = '\0';
  FUN_0006e1c0();
  uVar15 = FUN_00e86210();
  local_3a8 = DAT_027e3ba0;
  if (DAT_027e3ba0 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_3a0 = '\x01';
  FUN_00c841b0(uVar15,&local_3a8);
  local_100 = local_40;
  local_f8 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_f8 = '\x01';
  puVar11 = &local_100;
  FUN_00cbad30(puVar11,&local_3b8,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3a0 != '\0') && (local_3a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3b0 != '\0') && (local_3b8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_398 = 0;
  local_390 = '\0';
  FUN_0006e1c0();
  uVar15 = FUN_00e86210();
  local_388 = DAT_027e0b38;
  if (DAT_027e0b38 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_380 = '\x01';
  FUN_00c841b0(uVar15,&local_388);
  local_f0 = local_40;
  local_e8 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_e8 = '\x01';
  puVar11 = &local_f0;
  FUN_00cbad30(puVar11,&local_398,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_380 != '\0') && (local_388 != 0)) {
    FUN_00d50b20();
  }
  if ((local_390 != '\0') && (local_398 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_1f8 = 0;
  local_200 = *plVar1;
  if (local_200 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  FUN_0006e1c0();
  uVar15 = FUN_00e86210();
  local_378 = DAT_027e0af0;
  if (DAT_027e0af0 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_370 = '\x01';
  FUN_00c841b0(uVar15,&local_378);
  local_e0 = local_40;
  local_d8 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_d8 = '\x01';
  puVar11 = &local_e0;
  FUN_00cbad30(puVar11,&local_200,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_370 != '\0') && (local_378 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_1e8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_1e8 = '\x01';
  local_1d8 = 0;
  local_1e0 = *plVar1;
  local_1f0 = plVar2;
  if (local_1e0 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = '\x01';
  FUN_0006e1c0();
  uVar15 = FUN_00e86210();
  local_368 = DAT_027e0af8;
  if (DAT_027e0af8 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_360 = '\x01';
  FUN_00c841b0(uVar15,&local_368);
  local_d0 = local_40;
  local_c8 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c8 = '\x01';
  puVar11 = &local_d0;
  FUN_00cbad30(puVar11,&local_1e0,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_360 != '\0') && (local_368 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
    (**(code **)(*local_1f0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_1c8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_1c8 = '\x01';
  local_1b8 = 0;
  local_1c0 = *plVar1;
  local_1d0 = plVar2;
  if (local_1c0 != 0) {
    FUN_00d50b00();
  }
  local_1b8 = '\x01';
  FUN_0006e1c0();
  uVar15 = FUN_00e86210();
  local_358 = DAT_027e0b00;
  if (DAT_027e0b00 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_350 = '\x01';
  FUN_00c841b0(uVar15,&local_358);
  local_c0 = local_40;
  local_b8 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_b8 = '\x01';
  puVar11 = &local_c0;
  FUN_00cbad30(puVar11,&local_1c0,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_350 != '\0') && (local_358 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
    (**(code **)(*local_1d0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_1a8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_1a8 = '\x01';
  local_198 = 0;
  local_1a0 = *plVar1;
  local_1b0 = plVar2;
  if (local_1a0 != 0) {
    FUN_00d50b00();
  }
  local_198 = '\x01';
  FUN_0006e1c0();
  uVar15 = FUN_00e86210();
  local_348 = DAT_027e0b08;
  if (DAT_027e0b08 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_340 = '\x01';
  FUN_00c841b0(uVar15,&local_348);
  local_b0 = local_40;
  local_a8 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a8 = '\x01';
  puVar11 = &local_b0;
  FUN_00cbad30(puVar11,&local_1a0,4);
  pVar9 = (pthread_key_t)puVar11;
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_340 != '\0') && (local_348 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
    (**(code **)(*local_1b0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_40 == 0) {
    bVar14 = false;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    bVar14 = local_60 != 0;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar14) goto LAB_0196283c;
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  local_48 = local_40;
  uVar13 = local_40;
  if (local_40 == 0) {
    local_4c = 1;
    local_48 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_4c = 0;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_0196227c;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_4c = 0;
  }
LAB_0196227c:
  pVar9 = (pthread_key_t)uVar13;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar9 = (pthread_key_t)local_48;
    }
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = (pthread_key_t)local_48;
      }
      FUN_00e8b990();
      cVar4 = FUN_00caf320();
      if (cVar4 != '\0') {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_188 = 0;
        (**(code **)(*plVar2 + 0x10))();
        FUN_00d50b00();
        local_188 = '\x01';
        local_338 = local_48;
        local_330 = '\0';
        local_190 = plVar2;
        if ((DAT_027c0170 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
        uVar15 = FUN_00e86210();
        local_328 = DAT_027e0b40;
        if (DAT_027e0b40 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_320 = '\x01';
        FUN_00c841b0(uVar15,&local_328);
        local_a0 = local_40;
        local_98 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_98 = '\x01';
        puVar11 = &local_a0;
        FUN_00cbad30(puVar11,&local_338,4);
        pVar9 = (pthread_key_t)puVar11;
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_320 != '\0') && (local_328 != 0)) {
          FUN_00d50b20();
        }
        if ((local_330 != '\0') && (local_338 != 0)) {
          FUN_00d50b20();
        }
        if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
          (**(code **)(*local_190 + 0x10))();
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_178 = 0;
        (**(code **)(*plVar2 + 0x10))();
        FUN_00d50b00();
        local_178 = '\x01';
        local_318 = local_48;
        local_310 = '\0';
        local_180 = plVar2;
        if ((DAT_027c0170 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
        uVar15 = FUN_00e86210();
        local_308 = DAT_027e0b48;
        if (DAT_027e0b48 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_300 = '\x01';
        FUN_00c841b0(uVar15,&local_308);
        local_90 = local_40;
        local_88 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_88 = '\x01';
        puVar11 = &local_90;
        FUN_00cbad30(puVar11,&local_318,4);
        pVar9 = (pthread_key_t)puVar11;
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_300 != '\0') && (local_308 != 0)) {
          FUN_00d50b20();
        }
        if ((local_310 != '\0') && (local_318 != 0)) {
          FUN_00d50b20();
        }
        if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
          (**(code **)(*local_180 + 0x10))();
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_168 = 0;
        (**(code **)(*plVar2 + 0x10))();
        FUN_00d50b00();
        local_168 = '\x01';
        local_2f8 = local_48;
        local_2f0 = '\0';
        local_170 = plVar2;
        if ((DAT_027c0170 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
        uVar15 = FUN_00e86210();
        local_2e8 = DAT_027e0b50;
        if (DAT_027e0b50 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_2e0 = '\x01';
        FUN_00c841b0(uVar15,&local_2e8);
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
        FUN_00cbad30(&local_80,&local_2f8,4);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2e0 != '\0') && (local_2e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_2f0 != '\0') && (local_2f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
          (**(code **)(*local_170 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    if ((char)local_4c == '\0') {
      FUN_00d50b20();
    }
  }
LAB_0196283c:
  if (*plVar1 != 0) {
    FUN_0198a800();
  }
  return;
}


