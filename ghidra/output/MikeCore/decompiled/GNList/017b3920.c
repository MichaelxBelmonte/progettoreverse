// Function: FUN_017b3920
// Address: 017b3920
// Size: 17189 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
//   "unable to load scales of version %I from creator: \"%@\" creatorVersion: %@"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017b3920(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  pthread_key_t pVar12;
  code *pcVar13;
  longlong unaff_RDI;
  longlong **pplVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  longlong *local_580;
  code *local_578;
  longlong local_570;
  char local_568;
  longlong local_560;
  char local_558;
  longlong local_550;
  char local_548;
  longlong local_540;
  char local_538;
  longlong *local_530;
  char local_528;
  longlong *local_520;
  char local_518;
  longlong local_510;
  char local_508;
  longlong *local_500;
  char local_4f8;
  longlong local_4f0;
  char local_4e8;
  longlong local_4e0;
  char local_4d8;
  longlong local_4d0;
  char local_4c8;
  longlong local_4c0;
  char local_4b8;
  longlong local_4b0;
  char local_4a8;
  longlong local_4a0;
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
  longlong local_430;
  char local_428;
  longlong local_420;
  char local_418;
  longlong local_410;
  char local_408;
  longlong *local_400;
  char local_3f8;
  longlong local_3f0;
  char local_3e8;
  longlong *local_3e0;
  char local_3d8;
  longlong local_3d0;
  char local_3c8;
  longlong *local_3c0;
  char local_3b8;
  longlong local_3b0;
  char local_3a8;
  longlong local_3a0;
  char local_398;
  longlong local_390;
  char local_388;
  longlong local_380;
  char local_378;
  longlong local_370;
  char local_368;
  longlong local_360;
  char local_358;
  longlong local_350;
  char local_348;
  undefined8 *local_340;
  char local_338;
  undefined8 *local_330;
  char local_328;
  longlong local_320;
  char local_318;
  undefined8 *local_310;
  char local_308;
  undefined8 *local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  longlong *local_2e0;
  char local_2d8;
  longlong *local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  undefined8 *local_290;
  char local_288;
  longlong *local_280;
  char local_278;
  int local_26c;
  undefined8 *local_268;
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
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  code *local_1e0;
  code *local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
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
  code *local_a8;
  code *local_a0;
  int local_94;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_68;
  char local_60;
  code *local_58;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  char local_40;
  
  if (*(longlong *)(unaff_RDI + 0x38) == 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar4[10] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined4 *)(puVar4 + 9) = 0;
    param_1 = 0x25fee18;
    *puVar4 = &DAT_025fee18;
    *(undefined8 *)((longlong)puVar4 + 0x6c) = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    *(undefined2 *)(puVar4 + 0xd) = 0;
    (*DAT_025fee30)();
    puVar9 = *(undefined8 **)(unaff_RDI + 0x38);
    if (puVar9 != puVar4) {
      FUN_00d50b00();
      *(undefined8 **)(unaff_RDI + 0x38) = puVar4;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar16 = FUN_00d50b20();
  }
  else {
    FUN_00d50b00();
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2068;
  local_94 = 1;
  if (DAT_027d2068 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_570 = lVar8;
  local_568 = '\x01';
  uVar16 = FUN_000175c0(uVar16,&local_570);
  plVar6 = local_68;
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_568 != '\0') && (local_570 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2068;
  if (plVar6 != (longlong *)0x0) {
    if (DAT_027d2068 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_560 = lVar8;
    local_558 = '\x01';
    FUN_000175c0(uVar16,&local_560);
    local_1d0 = local_68;
    local_1c8 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_1c8 = '\x01';
    local_94 = FUN_00c716c0();
    uVar16 = extraout_XMM0_Da;
    if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_558 != '\0') && (local_560 != 0)) {
      uVar16 = FUN_00d50b20();
    }
  }
  lVar8 = DAT_027c2508;
  if (2 < local_94) {
    if (DAT_027c2508 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_550 = lVar8;
    local_548 = '\x01';
    pplVar14 = &local_68;
    uVar16 = FUN_000175c0(uVar16,&local_550);
    plVar6 = local_68;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar2 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_14, iVar2 != 0)) {
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
      uVar16 = ___cxa_guard_release();
    }
    if (plVar6 == (longlong *)0x0) {
LAB_017b3bb4:
      pplVar14 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      uVar16 = extraout_XMM0_Da_00;
      if (cVar1 == '\0') goto LAB_017b3bb4;
    }
    plVar6 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar6 != (longlong *)0x0) {
        uVar16 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_548 != '\0') && (local_550 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    plVar15 = DAT_02766278;
    if ((plVar6 == (longlong *)0x0) && (DAT_02766278 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b00();
      plVar6 = plVar15;
    }
    lVar8 = DAT_027c2510;
    if (DAT_027c2510 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_540 = lVar8;
    local_538 = '\x01';
    pplVar14 = &local_68;
    FUN_000175c0(uVar16,&local_540);
    plVar15 = local_68;
    if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    if (plVar15 == (longlong *)0x0) {
LAB_017b3ca3:
      pplVar14 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar15 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_017b3ca3;
    }
    plVar15 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar15 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_538 != '\0') && (local_540 != 0)) {
      FUN_00d50b20();
    }
    plVar10 = DAT_02766278;
    if ((plVar15 == (longlong *)0x0) && (DAT_02766278 != (longlong *)0x0)) {
      FUN_00d50b00();
      plVar15 = plVar10;
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    uVar16 = FUN_00d46530();
    local_1c0 = local_90;
    local_1b8 = 0;
    plVar10 = DAT_027d2af0;
    if (local_88 == '\0') {
      if (local_90 != (longlong *)0x0) {
        uVar16 = FUN_00d50b00();
        plVar10 = DAT_027d2af0;
      }
    }
    else {
      local_88 = '\0';
    }
    local_1b8 = '\x01';
    DAT_027d2af0 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      local_1b8 = '\x01';
      uVar16 = FUN_00d50b00();
    }
    local_60 = '\0';
    local_68 = plVar10;
    uVar16 = FUN_00ca0840(uVar16,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    plVar10 = DAT_027d2af8;
    local_528 = '\0';
    local_530 = plVar6;
    if (DAT_027d2af8 != (longlong *)0x0) {
      uVar16 = FUN_00d50b00();
    }
    local_68 = plVar10;
    local_60 = '\0';
    uVar16 = FUN_00ca0840(uVar16,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_528 != '\0') && (local_530 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    plVar10 = DAT_027d2b00;
    local_518 = '\0';
    local_520 = plVar15;
    if (DAT_027d2b00 != (longlong *)0x0) {
      uVar16 = FUN_00d50b00();
    }
    local_68 = plVar10;
    local_60 = '\0';
    FUN_00ca0840(uVar16,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_518 != '\0') && (local_520 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = DAT_027d2b08;
    if (DAT_027d2b08 != 0) {
      FUN_00d50b00();
    }
    local_510 = lVar8;
    local_508 = '\x01';
    local_4f8 = '\0';
    local_580 = plVar15;
    local_500 = plVar5;
    local_90 = plVar6;
    FUN_017c0a40(&local_580,&local_90,3);
    pplVar14 = &local_68;
    FUN_00cc7c70(pplVar14,
                 "unable to load scales of version %I from creator: \"%@\" creatorVersion: %@");
    param_1 = (pthread_key_t)pplVar14;
    local_68 = (longlong *)&DAT_02603868;
    if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
      FUN_00d50b20();
    }
    local_68 = &DAT_0263cdb0;
    if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_4f8 != '\0') && (local_500 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_508 != '\0') && (local_510 != 0)) {
      FUN_00d50b20();
    }
    uVar16 = FUN_00d50b20();
    if (plVar15 != (longlong *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      uVar16 = FUN_00d50b20();
    }
  }
  lVar8 = DAT_027d2b10;
  if (DAT_027d2b10 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_4f0 = lVar8;
  local_4e8 = '\x01';
  pplVar14 = &local_68;
  uVar16 = FUN_000175c0(uVar16,&local_4f0);
  plVar6 = local_68;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_10, iVar2 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
    uVar16 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_017b4095:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da_01;
    if (cVar1 == '\0') goto LAB_017b4095;
  }
  plVar6 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_4e8 != '\0') && (local_4f0 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    if (*(longlong **)(unaff_RDI + 0x50) != plVar6) {
      FUN_00d64850();
      plVar15 = *(longlong **)(unaff_RDI + 0x50);
      if (plVar15 != plVar6) {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0x50) = plVar6;
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b18;
  if (DAT_027d2b18 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_4e0 = lVar8;
  local_4d8 = '\x01';
  FUN_000175c0(uVar16,&local_4e0);
  local_1b0 = local_68;
  local_1a8 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_1a8 = '\x01';
  cVar1 = FUN_00c70bc0();
  uVar16 = extraout_XMM0_Da_02;
  if (*(char *)(unaff_RDI + 0x58) != cVar1) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x58) = cVar1;
    uVar16 = FUN_00d64910();
  }
  if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_4d8 != '\0') && (local_4e0 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b20;
  if (DAT_027d2b20 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_4d0 = lVar8;
  local_4c8 = '\x01';
  FUN_000175c0(uVar16,&local_4d0);
  local_1a0 = local_68;
  local_198 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_198 = '\x01';
  cVar1 = FUN_00c70bc0();
  uVar16 = extraout_XMM0_Da_03;
  if (*(char *)(unaff_RDI + 0x59) != cVar1) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x59) = cVar1;
    uVar16 = FUN_00d64910();
  }
  if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_4c8 != '\0') && (local_4d0 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b28;
  if (DAT_027d2b28 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_4c0 = lVar8;
  local_4b8 = '\x01';
  FUN_000175c0(uVar16,&local_4c0);
  local_190 = local_68;
  local_188 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_188 = '\x01';
  cVar1 = FUN_00c70bc0();
  uVar16 = extraout_XMM0_Da_04;
  if (*(char *)(unaff_RDI + 0x5a) != cVar1) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x5a) = cVar1;
    uVar16 = FUN_00d64910();
  }
  if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_4b8 != '\0') && (local_4c0 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b30;
  if (DAT_027d2b30 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_4b0 = lVar8;
  local_4a8 = '\x01';
  FUN_000175c0(uVar16,&local_4b0);
  local_180 = local_68;
  local_178 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_178 = '\x01';
  cVar1 = FUN_00c70bc0();
  uVar16 = extraout_XMM0_Da_05;
  if (*(char *)(unaff_RDI + 0x5b) != cVar1) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x5b) = cVar1;
    uVar16 = FUN_00d64910();
  }
  if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_4a8 != '\0') && (local_4b0 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b38;
  if (DAT_027d2b38 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_4a0 = lVar8;
  local_498 = '\x01';
  FUN_000175c0(uVar16,&local_4a0);
  local_170 = local_68;
  local_168 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_168 = '\x01';
  cVar1 = FUN_00c70bc0();
  uVar16 = extraout_XMM0_Da_06;
  if (*(char *)(unaff_RDI + 0x5c) != cVar1) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x5c) = cVar1;
    uVar16 = FUN_00d64910();
  }
  if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_498 != '\0') && (local_4a0 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027feca0;
  if (DAT_027feca0 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_490 = lVar8;
  local_488 = '\x01';
  pplVar14 = &local_68;
  uVar16 = FUN_000175c0(uVar16,&local_490);
  plVar6 = local_68;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_11, iVar2 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
    uVar16 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_017b4692:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da_07;
    if (cVar1 == '\0') goto LAB_017b4692;
  }
  plVar6 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_488 != '\0') && (local_490 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    if (*(longlong **)(unaff_RDI + 0x48) != plVar6) {
      FUN_00d64850();
      plVar15 = *(longlong **)(unaff_RDI + 0x48);
      if (plVar15 != plVar6) {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0x48) = plVar6;
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027092b8;
  if (DAT_027092b8 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_480 = lVar8;
  local_478 = '\x01';
  pplVar14 = &local_68;
  FUN_000175c0(uVar16,&local_480);
  plVar6 = local_68;
  if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
LAB_017b47ad:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_017b47ad;
  }
  plVar6 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0x40) != plVar6) {
    FUN_00d64850();
    plVar15 = *(longlong **)(unaff_RDI + 0x40);
    if (plVar15 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x40) = plVar6;
      if (plVar15 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_478 != '\0') && (local_480 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_01a016a0();
  local_80 = plVar6;
  uVar16 = (**(code **)(*plVar6 + 0x18))();
  local_470 = DAT_027d2b40;
  if (DAT_027d2b40 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_468 = '\x01';
  pplVar14 = &local_68;
  FUN_000175c0(uVar16,&local_470);
  plVar6 = local_68;
  if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
LAB_017b48f3:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_017b48f3;
  }
  plVar6 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_468 != '\0') && (local_470 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_458 = '\0';
    local_460 = plVar6;
    FUN_0176fd70();
    if ((local_458 != '\0') && (local_460 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar8 = DAT_027d2b48;
  if (DAT_027d2b48 != 0) {
    FUN_00d50b00();
  }
  local_450 = lVar8;
  local_448 = '\x01';
  FUN_000175c0();
  local_160 = local_68;
  local_158 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_158 = '\x01';
  FUN_00c70bc0();
  FUN_01770880();
  if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_448 != '\0') && (local_450 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar8 = DAT_027d2b50;
  if (DAT_027d2b50 != 0) {
    FUN_00d50b00();
  }
  local_440 = lVar8;
  local_438 = '\x01';
  FUN_000175c0();
  local_150 = local_68;
  local_148 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_148 = '\x01';
  FUN_00c716c0();
  FUN_01770eb0();
  if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_438 != '\0') && (local_440 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar8 = DAT_027e3cf0;
  if (DAT_027e3cf0 != 0) {
    FUN_00d50b00();
  }
  local_430 = lVar8;
  local_428 = '\x01';
  FUN_000175c0();
  local_140 = local_68;
  local_138 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_138 = '\x01';
  FUN_00c71d60();
  FUN_01770230();
  if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_428 != '\0') && (local_430 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar8 = DAT_027cd548;
  if (DAT_027cd548 != 0) {
    FUN_00d50b00();
  }
  local_420 = lVar8;
  local_418 = '\x01';
  FUN_000175c0();
  local_130 = local_68;
  local_128 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_128 = '\x01';
  FUN_00c716c0();
  FUN_01770300();
  if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_418 != '\0') && (local_420 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0013e060();
  uVar16 = (**(code **)(*plVar6 + 0x18))();
  local_410 = DAT_027e3dc0;
  if (DAT_027e3dc0 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_408 = '\x01';
  pplVar14 = &local_68;
  uVar16 = FUN_000175c0(uVar16,&local_410);
  plVar15 = local_68;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_12, iVar2 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
    uVar16 = ___cxa_guard_release();
  }
  if (plVar15 == (longlong *)0x0) {
LAB_017b4e95:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar15 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da_08;
    if (cVar1 == '\0') goto LAB_017b4e95;
  }
  plVar15 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar15 != (longlong *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_408 != '\0') && (local_410 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  pVar12 = (pthread_key_t)plVar6;
  if (plVar15 != (longlong *)0x0) {
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = pVar12;
    }
    local_3f8 = '\0';
    local_400 = plVar15;
    FUN_01735c40();
    if ((local_3f8 != '\0') && (local_400 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b58;
  if (DAT_027d2b58 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_3f0 = lVar8;
  local_3e8 = '\x01';
  pplVar14 = &local_68;
  uVar16 = FUN_000175c0(uVar16,&local_3f0);
  plVar15 = local_68;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_13, iVar2 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
    uVar16 = ___cxa_guard_release();
  }
  if (plVar15 == (longlong *)0x0) {
LAB_017b4fd8:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar15 + 0x360))();
    cVar1 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da_09;
    if (cVar1 == '\0') goto LAB_017b4fd8;
  }
  plVar15 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar15 != (longlong *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_3e8 != '\0') && (local_3f0 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  if (plVar15 != (longlong *)0x0) {
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = pVar12;
    }
    local_3d8 = '\0';
    local_3e0 = plVar15;
    FUN_01735120();
    if ((local_3d8 != '\0') && (local_3e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b60;
  if (DAT_027d2b60 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_3d0 = lVar8;
  local_3c8 = '\x01';
  pplVar14 = &local_68;
  FUN_000175c0(uVar16,&local_3d0);
  plVar15 = local_68;
  if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
  if (plVar15 == (longlong *)0x0) {
LAB_017b511b:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar15 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_017b511b;
  }
  plVar15 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_3c8 != '\0') && (local_3d0 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = plVar15;
  if (plVar15 == (longlong *)0x0) {
LAB_017b525f:
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_017aacd0();
    plVar10 = local_68;
    if (plVar15 == local_68) {
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_017b51f1:
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pVar12;
      }
      local_3b8 = '\0';
      local_3c0 = plVar15;
      FUN_01735120();
      plVar10 = plVar15;
      if ((local_3b8 != '\0') && (local_3c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_017b525f;
    }
    plVar15 = plVar10;
    if (local_60 != '\0') {
      FUN_00d50b20();
      if (plVar10 == (longlong *)0x0) goto LAB_017b525f;
      goto LAB_017b51f1;
    }
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    if (plVar10 != (longlong *)0x0) goto LAB_017b51f1;
  }
  pvVar7 = _pthread_getspecific(param_1);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = pVar12;
  }
  lVar8 = DAT_027d2b68;
  if (DAT_027d2b68 != 0) {
    FUN_00d50b00();
  }
  local_3b0 = lVar8;
  local_3a8 = '\x01';
  FUN_000175c0();
  local_120 = local_68;
  local_118 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_118 = '\x01';
  FUN_00c70bc0();
  FUN_01736d20();
  if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_3a8 != '\0') && (local_3b0 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    param_1 = pVar12;
  }
  lVar8 = DAT_027cd540;
  if (DAT_027cd540 != 0) {
    FUN_00d50b00();
  }
  local_3a0 = lVar8;
  local_398 = '\x01';
  FUN_000175c0();
  local_110 = local_68;
  local_108 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_108 = '\x01';
  FUN_00c70bc0();
  FUN_01736c00();
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_398 != '\0') && (local_3a0 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar8 = DAT_027e13c8;
  if (DAT_027e13c8 != 0) {
    FUN_00d50b00();
  }
  local_390 = lVar8;
  local_388 = '\x01';
  FUN_000175c0();
  local_100 = local_68;
  local_f8 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_f8 = '\x01';
  FUN_00c716c0();
  uVar16 = FUN_01736c60();
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_388 != '\0') && (local_390 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b70;
  if (DAT_027d2b70 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_380 = lVar8;
  local_378 = '\x01';
  uVar16 = FUN_000175c0(uVar16,&local_380);
  plVar15 = local_68;
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_378 != '\0') && (local_380 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = DAT_027d2b70;
  if (plVar15 == (longlong *)0x0) {
    iVar2 = 0;
  }
  else {
    if (DAT_027d2b70 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_370 = lVar8;
    local_368 = '\x01';
    FUN_000175c0(uVar16,&local_370);
    local_f0 = local_68;
    local_e8 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_e8 = '\x01';
    iVar2 = FUN_00c716c0();
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_368 != '\0') && (local_370 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x1a) = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  pVar11 = 0x26000e0;
  *puVar9 = &DAT_026000e0;
  uVar16 = (*DAT_026000f8)();
  local_360 = DAT_027d2b78;
  local_26c = iVar2;
  local_268 = puVar9;
  if (DAT_027d2b78 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_358 = '\x01';
  pplVar14 = &local_68;
  FUN_000175c0(uVar16,&local_360);
  plVar15 = local_68;
  if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    pVar11 = 0x18210;
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
  if (plVar15 == (longlong *)0x0) {
LAB_017b57bf:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar15 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_017b57bf;
  }
  local_b0 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (local_b0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_358 != '\0') && (local_360 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = DAT_027d2b80;
  if (DAT_027d2b80 != 0) {
    FUN_00d50b00();
  }
  local_350 = lVar8;
  local_348 = '\x01';
  pplVar14 = &local_68;
  FUN_000175c0();
  plVar15 = local_68;
  if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    pVar11 = 0x18210;
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
  if (plVar15 == (longlong *)0x0) {
LAB_017b5892:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar15 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_017b5892;
  }
  local_a8 = (code *)*pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (local_a8 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_348 != '\0') && (local_350 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = DAT_027d2b88;
  if ((local_b0 == (longlong *)0x0) || (local_a8 == (code *)0x0)) {
    if (DAT_027d2b88 != 0) {
      FUN_00d50b00();
    }
    local_320 = lVar8;
    local_318 = '\x01';
    pplVar14 = &local_68;
    FUN_000175c0();
    plVar15 = local_68;
    if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      pVar11 = 0x18210;
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
    if (plVar15 == (longlong *)0x0) {
LAB_017b5d37:
      pplVar14 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar15 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_017b5d37;
    }
    local_1d8 = (code *)*pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (local_1d8 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_318 != '\0') && (local_320 != 0)) {
      FUN_00d50b20();
    }
    if (local_1d8 != (code *)0x0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_58 = local_1d8;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_1e0 = DAT_025ffd78;
      local_578 = DAT_025fe688;
      local_50._4_4_ = 0;
      local_a0 = (code *)&DAT_025ffd60;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar2 = -local_50._4_4_;
          }
          else {
            iVar2 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar2);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar2 = 0;
          }
          local_50 = CONCAT44(iVar2,(int)local_50);
        }
        lVar8 = (longlong)(int)local_50;
        iVar2 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar2);
        if (*(int *)(local_58 + 0xc) <= iVar2) break;
        plVar15 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar8 * 8);
        local_68 = plVar15;
        if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
        pplVar14 = (longlong **)&DAT_02802688;
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar14 = &local_68;
          if (cVar1 == '\0') {
            pplVar14 = (longlong **)&DAT_02802688;
          }
        }
        plVar15 = *pplVar14;
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (plVar15 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_017b63f1;
          }
        }
        else {
          *(undefined1 *)(pplVar14 + 1) = 0;
          if (plVar15 != (longlong *)0x0) {
LAB_017b63f1:
            pVar11 = (pthread_key_t)pplVar14;
            puVar9 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = local_a0;
            puVar9[7] = 0;
            puVar9[8] = 0;
            (*local_1e0)();
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar8 = *(longlong *)plVar15[2];
            local_228 = 0;
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            local_228 = '\x01';
            local_230 = lVar8;
            FUN_00c71d60();
            FUN_01779ed0();
            if ((local_228 != '\0') && (local_230 != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar8 = *(longlong *)(plVar15[2] + 8);
            local_218 = 0;
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            local_218 = '\x01';
            local_220 = lVar8;
            FUN_00c716c0();
            FUN_01779f40();
            if ((local_218 != '\0') && (local_220 != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_308 = '\0';
            local_310 = puVar9;
            FUN_0176fde0();
            if ((local_308 != '\0') && (local_310 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (2 < *(int *)((longlong)plVar15 + 0xc)) {
              puVar9 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar9 = &DAT_025fe670;
              puVar9[7] = 0;
              puVar9[8] = 0;
              puVar9[9] = 0;
              (*local_578)();
              pvVar7 = _pthread_getspecific(pVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar8 = *(longlong *)(plVar15[2] + 0x10);
              local_208 = 0;
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              local_208 = '\x01';
              local_210 = lVar8;
              FUN_01739510();
              if ((local_208 != '\0') && (local_210 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              plVar15 = *(longlong **)(plVar15[2] + 0x18);
              local_90 = plVar15;
              local_88 = '\0';
              if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
              pplVar14 = (longlong **)&DAT_02802688;
              if (plVar15 != (longlong *)0x0) {
                (**(code **)(*plVar15 + 0x360))();
                cVar1 = FUN_00e85ea0();
                pplVar14 = &local_90;
                if (cVar1 == '\0') {
                  pplVar14 = (longlong **)&DAT_02802688;
                }
              }
              local_c8 = 0;
              plVar15 = *pplVar14;
              if (*(char *)(pplVar14 + 1) == '\0') {
                if (plVar15 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar14 + 1) = 0;
              }
              local_c8 = '\x01';
              pVar11 = (pthread_key_t)pplVar14;
              local_d0 = plVar15;
              FUN_017395b0();
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_2f8 = '\0';
              local_300 = puVar9;
              FUN_01735cb0();
              if ((local_2f8 != '\0') && (local_300 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
            FUN_00d50b20();
          }
        }
      }
      pcVar13 = local_58;
      FUN_00083b20();
      pVar11 = (pthread_key_t)pcVar13;
      FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_68 = (longlong *)0x0;
    local_58 = (code *)local_b0;
    local_50._0_4_ = -1;
    local_50._4_4_ = 0;
    local_48 = 0;
    local_a0 = DAT_025ffd78;
LAB_017b5953:
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          local_50._4_4_ = -local_50._4_4_;
        }
        else {
          local_50._0_4_ = (int)local_50 - local_50._4_4_;
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          local_50._4_4_ = 0;
        }
      }
      lVar8 = (longlong)(int)local_50;
      local_50._0_4_ = (int)local_50 + 1;
      if (*(int *)((longlong)local_58 + 0xc) <= (int)local_50) break;
      plVar15 = *(longlong **)(*(longlong *)((longlong)local_58 + 0x10) + 8 + lVar8 * 8);
      local_68 = plVar15;
      if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar14 = &local_68;
        if (cVar1 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar15 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') goto LAB_017b5a10;
      *(undefined1 *)(pplVar14 + 1) = 0;
      if (plVar15 != (longlong *)0x0) goto LAB_017b5a21;
    }
    FUN_00083b20();
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_a8;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_a0 = DAT_025fe688;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar2 = -local_50._4_4_;
        }
        else {
          iVar2 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar2);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar2 = 0;
        }
        local_50 = CONCAT44(iVar2,(int)local_50);
      }
      lVar8 = (longlong)(int)local_50;
      iVar2 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar2);
      if (*(int *)(local_58 + 0xc) <= iVar2) break;
      plVar15 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar8 * 8);
      local_68 = plVar15;
      if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar14 = &local_68;
        if (cVar1 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar15 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_017b5e81;
        }
      }
      else {
        *(undefined1 *)(pplVar14 + 1) = 0;
        if (plVar15 != (longlong *)0x0) {
LAB_017b5e81:
          pVar11 = (pthread_key_t)pplVar14;
          puVar9 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &DAT_025fe670;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          (*local_a0)();
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar8 = *(longlong *)plVar15[2];
          local_238 = 0;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_238 = '\x01';
          local_240 = lVar8;
          FUN_01739510();
          if ((local_238 != '\0') && (local_240 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar15 = *(longlong **)(plVar15[2] + 8);
          local_90 = plVar15;
          local_88 = '\0';
          if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
          pplVar14 = (longlong **)&DAT_02802688;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x360))();
            cVar1 = FUN_00e85ea0();
            pplVar14 = &local_90;
            if (cVar1 == '\0') {
              pplVar14 = (longlong **)&DAT_02802688;
            }
          }
          local_d8 = 0;
          plVar15 = *pplVar14;
          if (*(char *)(pplVar14 + 1) == '\0') {
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar14 + 1) = 0;
          }
          local_d8 = '\x01';
          pVar11 = (pthread_key_t)pplVar14;
          local_e0 = plVar15;
          FUN_017395b0();
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_328 = '\0';
          local_330 = puVar9;
          FUN_01735cb0();
          if ((local_328 != '\0') && (local_330 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
    }
    pcVar13 = local_58;
    FUN_00083b20();
    pVar11 = (pthread_key_t)pcVar13;
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar11 = pVar12;
  }
  lVar8 = DAT_027d2b90;
  if (DAT_027d2b90 != 0) {
    FUN_00d50b00();
  }
  local_2f0 = lVar8;
  local_2e8 = '\x01';
  FUN_000175c0();
  local_c0 = local_68;
  iVar2 = local_26c;
  local_b8 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_b8 = '\x01';
  FUN_00c716c0();
  FUN_01736de0();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_2e0 = local_80;
  local_2d8 = '\0';
  FUN_0173b720();
  if ((local_2d8 != '\0') && (local_2e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_2c8 = '\0';
  local_2d0 = plVar6;
  FUN_0173b680();
  if ((local_2c8 != '\0') && (local_2d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (iVar2 == 0) {
    pvVar7 = _pthread_getspecific(pVar11);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      pVar11 = pVar12;
    }
    FUN_01736da0();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_017b6c72;
      }
    }
    else if (local_68 != (longlong *)0x0) {
LAB_017b6c72:
      lVar8 = DAT_027cd590;
      if (DAT_027cd590 != 0) {
        FUN_00d50b00();
      }
      local_2c0 = lVar8;
      local_2b8 = '\x01';
      uVar3 = FUN_00d90eb0();
      if ((local_2b8 != '\0') && (local_2c0 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_027cd598;
      if (DAT_027cd598 != 0) {
        FUN_00d50b00();
      }
      local_2b0 = lVar8;
      local_2a8 = '\x01';
      cVar1 = FUN_00d90eb0();
      if ((local_2a8 != '\0') && (local_2b0 != 0)) {
        FUN_00d50b20();
      }
      pVar11 = 5;
      if (cVar1 == '\0') {
        pVar11 = (uVar3 & 0xff) << 2;
      }
      FUN_00d50b20();
      goto LAB_017b6d29;
    }
    lVar8 = *(longlong *)(unaff_RDI + 0x38);
  }
  else {
LAB_017b6d29:
    lVar8 = *(longlong *)(unaff_RDI + 0x38);
  }
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017381f0();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = DAT_027cd550;
  if (DAT_027cd550 != 0) {
    FUN_00d50b00();
  }
  local_2a0 = lVar8;
  local_298 = '\x01';
  pplVar14 = &local_68;
  FUN_000175c0();
  plVar10 = local_68;
  plVar15 = local_80;
  if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    plVar15 = local_80;
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 != '\0') goto LAB_017b6e5e;
  }
  pplVar14 = (longlong **)&DAT_02802688;
LAB_017b6e5e:
  pcVar13 = (code *)*pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (pcVar13 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  if (pcVar13 != (code *)0x0) {
    local_1e0 = pcVar13;
    plVar10 = (longlong *)FUN_000bea40();
    (**(code **)(*plVar10 + 0x18))();
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = pcVar13;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_a0 = DAT_025ddb40;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar2 = -local_50._4_4_;
        }
        else {
          iVar2 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar2);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar2 = 0;
        }
        local_50 = CONCAT44(iVar2,(int)local_50);
      }
      lVar8 = (longlong)(int)local_50;
      iVar2 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar2);
      if (*(int *)(local_58 + 0xc) <= iVar2) break;
      plVar15 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar8 * 8);
      local_68 = plVar15;
      if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar14 = &local_68;
        if (cVar1 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar15 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_017b6fe1;
        }
      }
      else {
        *(undefined1 *)(pplVar14 + 1) = 0;
        if (plVar15 != (longlong *)0x0) {
LAB_017b6fe1:
          pVar12 = (pthread_key_t)pplVar14;
          puVar9 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &DAT_025ddb28;
          puVar9[0xb] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          *(undefined8 *)((longlong)puVar9 + 0x43) = 0;
          *(undefined8 *)((longlong)puVar9 + 0x4b) = 0;
          (*local_a0)();
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar8 = *(longlong *)plVar15[2];
          local_1f8 = 0;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_1f8 = '\x01';
          local_200 = lVar8;
          FUN_00c71ff0();
          FUN_013fae90();
          if ((local_1f8 != '\0') && (local_200 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar8 = *(longlong *)(plVar15[2] + 8);
          local_1e8 = 0;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_1e8 = '\x01';
          local_1f0 = lVar8;
          FUN_00c71ff0();
          FUN_013faee0();
          if ((local_1e8 != '\0') && (local_1f0 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_288 = '\0';
          local_290 = puVar9;
          FUN_013f2b30();
          if ((local_288 != '\0') && (local_290 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
    }
    pcVar13 = local_58;
    FUN_00083b20();
    pVar12 = (pthread_key_t)pcVar13;
    lVar8 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar12);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar7 = _pthread_getspecific(pVar12);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_278 = '\0';
    local_280 = plVar10;
    FUN_017703a0();
    plVar15 = local_80;
    if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_a8 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_268 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_017b5a10:
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b00();
LAB_017b5a21:
    pVar11 = (pthread_key_t)pplVar14;
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &DAT_025ffd60;
    puVar9[7] = 0;
    puVar9[8] = 0;
    (*local_a0)();
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar8 = *(longlong *)plVar15[2];
    local_258 = 0;
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_258 = '\x01';
    local_260 = lVar8;
    FUN_00c71d60();
    FUN_01779ed0();
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar8 = *(longlong *)(plVar15[2] + 8);
    local_248 = 0;
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_248 = '\x01';
    local_250 = lVar8;
    FUN_00c716c0();
    FUN_01779f40();
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_338 = '\0';
    local_340 = puVar9;
    FUN_0176fde0();
    if ((local_338 != '\0') && (local_340 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  goto LAB_017b5953;
}


