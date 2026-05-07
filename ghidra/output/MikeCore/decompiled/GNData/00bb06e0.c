// Function: FUN_00bb06e0
// Address: 00bb06e0
// Size: 6834 bytes
// Class: GNData
// String references:
//   "GNData"
//   "smpl"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00bb06e0(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *unaff_RSI;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint7 uVar12;
  undefined7 uVar15;
  longlong *plVar13;
  longlong **pplVar14;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
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
  longlong local_338;
  char local_330;
  longlong local_328;
  char local_320;
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
  char local_270;
  longlong local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
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
  longlong local_1d8;
  char local_1d0;
  undefined8 *local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  undefined8 *local_1b0;
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
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
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
  undefined8 *local_b0;
  undefined4 local_a4;
  longlong *local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  longlong *local_70;
  char local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *plVar19;
  longlong *local_48;
  
  if (*unaff_RSI == 0) {
    return 0;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar4 = (longlong)&DAT_0256d868;
  plVar4[2] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
  (*DAT_0256d880)();
  local_1a8 = '\0';
  local_1b0 = puVar3;
  local_b0 = puVar3;
  FUN_00cccf90();
  if ((local_1a8 != '\0') && (local_1b0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  local_58 = (longlong *)0x0;
  FUN_00ccce90();
  local_60 = 0;
  local_58 = (longlong *)0x0;
  uVar18 = FUN_00ccce80();
  local_1a0 = DAT_02765298;
  if (DAT_02765298 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_198 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_1a0);
  plVar7 = local_98;
  if (local_98 == (longlong *)0x0) {
    uVar10 = 0;
    uVar11 = 0;
    bVar16 = false;
    plVar13 = (longlong *)0x0;
joined_r0x00bb0885:
    if ((local_90 != '\0') && (uVar11 = uVar10, local_98 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_90 == '\0') {
      uVar18 = FUN_00d50b00();
      uVar10 = 1;
      uVar11 = 1;
      bVar16 = plVar7 != (longlong *)0x0;
      plVar13 = plVar7;
      goto joined_r0x00bb0885;
    }
    local_90 = '\0';
    bVar16 = true;
    plVar13 = local_98;
    uVar11 = 1;
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  local_a0 = plVar7;
  if (plVar13 == (longlong *)0x0) {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar18,0);
    if ((local_3a0 != '\0') && (local_3a8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00d45870();
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(0,uVar18);
    if ((local_3b0 != '\0') && (local_3b8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027652a0;
  if (DAT_027652a0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_190 = lVar1;
  local_188 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_190);
  plVar7 = local_98;
  uVar15 = (undefined7)((ulonglong)lVar1 >> 8);
  if (local_98 == plVar13) {
    plVar7 = plVar13;
    if ((local_a0 == (longlong *)0x0) && (local_98 != (longlong *)0x0)) {
      if (local_90 != '\0') goto LAB_00bb0a06;
      uVar11 = (undefined4)CONCAT71(uVar15,1);
      uVar18 = FUN_00d50b00();
    }
LAB_00bb0a63:
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_90 == '\0') {
      if (local_98 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      uVar11 = (undefined4)CONCAT71(uVar15,1);
      if ((bool)(bVar16 & plVar13 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      goto LAB_00bb0a63;
    }
    bVar17 = plVar13 != (longlong *)0x0;
    plVar13 = plVar7;
    if ((bool)(bVar16 & bVar17)) {
      uVar18 = FUN_00d50b20();
    }
LAB_00bb0a06:
    local_90 = '\0';
    uVar11 = 1;
    plVar7 = plVar13;
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar18,0);
    if ((local_380 != '\0') && (local_388 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00d45870();
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(0,uVar18);
    if ((local_390 != '\0') && (local_398 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar6 = DAT_027652a8;
  lVar1 = *unaff_RSI;
  if (DAT_027652a8 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_180 = lVar6;
  local_178 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_180);
  plVar13 = local_98;
  cVar9 = (char)uVar11;
  uVar15 = (undefined7)((ulonglong)lVar1 >> 8);
  if (local_98 == plVar7) {
    plVar13 = plVar7;
    if ((cVar9 == '\0') && (local_98 != (longlong *)0x0)) {
      if (local_90 != '\0') goto LAB_00bb0bc4;
      uVar11 = (undefined4)CONCAT71(uVar15,1);
      uVar18 = FUN_00d50b00();
    }
LAB_00bb0c3c:
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_90 == '\0') {
      if (local_98 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      uVar11 = (undefined4)CONCAT71(uVar15,1);
      if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      goto LAB_00bb0c3c;
    }
    if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
LAB_00bb0bc4:
    local_90 = '\0';
    uVar11 = (undefined4)CONCAT71(uVar15,1);
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar13 == (longlong *)0x0) {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar18,0);
    if ((local_360 != '\0') && (local_368 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00d45870();
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar11,uVar18);
    if ((local_370 != '\0') && (local_378 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027652b0;
  if (DAT_027652b0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_170 = lVar1;
  local_168 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_170);
  plVar7 = local_98;
  uVar12 = (uint7)(uint3)((uint)uVar11 >> 8);
  cVar9 = (char)uVar11;
  if (local_98 == plVar13) {
    plVar7 = plVar13;
    if ((cVar9 == '\0') && (local_98 != (longlong *)0x0)) {
      if (local_90 != '\0') goto LAB_00bb0db2;
      uVar11 = (undefined4)CONCAT71(uVar12,1);
      uVar18 = FUN_00d50b00();
    }
LAB_00bb0e04:
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_90 == '\0') {
      if (local_98 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      uVar11 = (undefined4)CONCAT71(uVar12,1);
      if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
        uVar11 = (undefined4)CONCAT71(uVar12,1);
      }
      goto LAB_00bb0e04;
    }
    if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
LAB_00bb0db2:
    local_90 = '\0';
    uVar11 = (undefined4)CONCAT71(uVar12,1);
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    plVar13 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar18,0);
    if ((local_340 != '\0') && (local_348 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00d45870();
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(0,uVar18);
    plVar13 = plVar7;
    if ((local_350 != '\0') && (local_358 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027652b8;
  if (DAT_027652b8 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_160 = lVar1;
  local_158 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_160);
  plVar19 = local_98;
  cVar9 = (char)uVar11;
  uVar15 = (undefined7)((ulonglong)plVar13 >> 8);
  if (local_98 == plVar7) {
    plVar19 = plVar7;
    if ((cVar9 == '\0') && (local_98 != (longlong *)0x0)) {
      if (local_90 != '\0') goto LAB_00bb0f68;
      uVar11 = (undefined4)CONCAT71(uVar15,1);
      uVar18 = FUN_00d50b00();
    }
LAB_00bb0fba:
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_90 == '\0') {
      if (local_98 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      uVar11 = (undefined4)CONCAT71(uVar15,1);
      if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
        uVar11 = (undefined4)CONCAT71(uVar15,1);
      }
      goto LAB_00bb0fba;
    }
    if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
LAB_00bb0f68:
    local_90 = '\0';
    uVar11 = (undefined4)CONCAT71(uVar15,1);
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar19 == (longlong *)0x0) {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar18,0);
    if ((local_320 != '\0') && (local_328 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00d45870();
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar11,uVar18);
    if ((local_330 != '\0') && (local_338 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027652c0;
  if (DAT_027652c0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_150 = lVar1;
  local_148 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_150);
  plVar7 = local_98;
  cVar9 = (char)uVar11;
  if (local_98 == plVar19) {
    plVar7 = plVar19;
    if ((cVar9 == '\0') && (local_98 != (longlong *)0x0)) {
      if (local_90 != '\0') goto LAB_00bb1130;
      uVar11 = 1;
      uVar18 = FUN_00d50b00();
    }
LAB_00bb1182:
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_90 == '\0') {
      if (local_98 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      uVar11 = 1;
      if ((cVar9 != '\0') && (plVar19 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
        uVar11 = 1;
      }
      goto LAB_00bb1182;
    }
    if ((cVar9 != '\0') && (plVar19 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
LAB_00bb1130:
    local_90 = '\0';
    uVar11 = 1;
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar18,0);
    if ((local_300 != '\0') && (local_308 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00d45870();
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(0,uVar18);
    if ((local_310 != '\0') && (local_318 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027652c8;
  if (DAT_027652c8 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_140 = lVar1;
  local_138 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_140);
  plVar13 = local_98;
  cVar9 = (char)uVar11;
  if (local_98 == plVar7) {
    plVar13 = plVar7;
    if ((cVar9 == '\0') && (local_98 != (longlong *)0x0)) {
      if (local_90 != '\0') goto LAB_00bb12e6;
      uVar11 = 1;
      uVar18 = FUN_00d50b00();
    }
LAB_00bb1341:
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_90 == '\0') {
      if (local_98 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      uVar11 = 1;
      if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
        uVar11 = 1;
      }
      goto LAB_00bb1341;
    }
    if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
LAB_00bb12e6:
    local_90 = '\0';
    uVar11 = 1;
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  cVar9 = (char)uVar11;
  if (plVar13 == (longlong *)0x0) {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(uVar18,0);
    if ((local_2e0 != '\0') && (local_2e8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00d45870();
    local_60 = 0;
    local_58 = (longlong *)0x0;
    uVar18 = FUN_00ccdf50(0,uVar18);
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027652f8;
  if (DAT_027652f8 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_130 = lVar1;
  local_128 = '\x01';
  uVar5 = FUN_000175c0(uVar18,&local_130);
  plVar7 = local_98;
  uVar18 = extraout_XMM0_Da;
  if (local_98 == (longlong *)0x0) {
    local_60 = 0;
    local_48 = (longlong *)0x0;
joined_r0x00bb149e:
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_90 == '\0') {
      uVar5 = FUN_00d50b00();
      local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      uVar18 = extraout_XMM0_Da_00;
      local_48 = plVar7;
      goto joined_r0x00bb149e;
    }
    local_90 = '\0';
    local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    local_48 = local_98;
  }
  local_1b8 = plVar7;
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    FUN_00ccdf50(uVar18,0);
    if ((local_2c0 != '\0') && (local_2c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = local_48;
    FUN_00ccdf50(uVar18,*(undefined4 *)((longlong)local_48 + 0xc));
    if ((local_2d0 != '\0') && (local_2d8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02765300;
  if (DAT_02765300 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar1;
  local_118 = '\x01';
  pplVar14 = &local_98;
  FUN_000175c0();
  plVar7 = local_98;
  if ((DAT_026d0220 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00bb15f3;
  }
  pplVar14 = (longlong **)&DAT_02802688;
LAB_00bb15f3:
  plVar19 = *pplVar14;
  if (plVar19 == (longlong *)0x0) {
    local_a4 = 1;
    uVar5 = 0;
    plVar19 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    uVar5 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
    local_a4 = 0;
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = (longlong *)uVar5;
  if (plVar19 == (longlong *)0x0) {
    local_58 = local_48;
    uVar18 = FUN_00ccdf50();
    if ((local_2a0 != '\0') && (local_2a8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_58 = local_48;
    uVar18 = FUN_00ccdf50();
    if ((local_2b0 != '\0') && (local_2b8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  if (local_48 != (longlong *)0x0) {
    local_90 = '\0';
    local_98 = (longlong *)0x0;
    local_88 = local_48;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_80._4_4_ = 0;
    while( true ) {
      cVar9 = (char)uVar11;
      if (local_80._4_4_ != 0) {
        if (local_80._4_4_ < 1) {
          iVar8 = -local_80._4_4_;
        }
        else {
          iVar8 = (int)local_80 - local_80._4_4_;
          local_80 = CONCAT44(local_80._4_4_,iVar8);
          uVar18 = FUN_00d23690();
          local_78 = local_78 + local_80._4_4_;
          iVar8 = 0;
        }
        local_80 = CONCAT44(iVar8,(int)local_80);
      }
      lVar1 = DAT_02765258;
      lVar6 = (longlong)(int)local_80;
      iVar8 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar8);
      if (*(int *)((longlong)local_88 + 0xc) <= iVar8) break;
      local_98 = *(longlong **)(local_88[2] + 8 + lVar6 * 8);
      if (DAT_02765258 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_110 = lVar1;
      local_108 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_110);
      plVar7 = local_70;
      if (local_70 == plVar13) {
        plVar7 = plVar13;
        if ((cVar9 == '\0') && (local_70 != (longlong *)0x0)) {
          if (local_68 != '\0') goto LAB_00bb1813;
          uVar11 = 1;
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        uVar11 = 1;
        if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
LAB_00bb1813:
        local_68 = '\0';
        uVar11 = 1;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        uVar18 = FUN_00ccdf50(uVar18,0);
        if ((local_280 != '\0') && (local_288 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        uVar18 = FUN_00d45870();
        uVar18 = FUN_00ccdf50(extraout_XMM0_Da_01,uVar18);
        if ((local_290 != '\0') && (local_298 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      lVar1 = DAT_027652d0;
      if (DAT_027652d0 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_100 = lVar1;
      local_f8 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_100);
      plVar13 = local_70;
      cVar9 = (char)uVar11;
      if (local_70 == plVar7) {
        plVar13 = plVar7;
        if ((cVar9 == '\0') && (local_70 != (longlong *)0x0)) {
          if (local_68 != '\0') goto LAB_00bb1983;
          uVar11 = 1;
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        uVar11 = 1;
        if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
LAB_00bb1983:
        local_68 = '\0';
        uVar11 = 1;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar13 == (longlong *)0x0) {
        uVar18 = FUN_00ccdf50(uVar18,0);
        if ((local_260 != '\0') && (local_268 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        uVar18 = FUN_00d45870();
        uVar18 = FUN_00ccdf50(extraout_XMM0_Da_02,uVar18);
        if ((local_270 != '\0') && (local_278 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      lVar1 = DAT_027e2690;
      if (DAT_027e2690 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_f0 = lVar1;
      local_e8 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_f0);
      plVar7 = local_70;
      cVar9 = (char)uVar11;
      if (local_70 == plVar13) {
        plVar7 = plVar13;
        if ((cVar9 == '\0') && (local_70 != (longlong *)0x0)) {
          if (local_68 != '\0') goto LAB_00bb1ae3;
          uVar11 = 1;
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        uVar11 = 1;
        if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
LAB_00bb1ae3:
        local_68 = '\0';
        uVar11 = 1;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        uVar18 = FUN_00ccdf50(uVar18,0);
        if ((local_240 != '\0') && (local_248 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        uVar18 = FUN_00d45870();
        uVar18 = FUN_00ccdf50(extraout_XMM0_Da_03,uVar18);
        if ((local_250 != '\0') && (local_258 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      lVar1 = DAT_027652e0;
      if (DAT_027652e0 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_e0 = lVar1;
      local_d8 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_e0);
      plVar13 = local_70;
      cVar9 = (char)uVar11;
      if (local_70 == plVar7) {
        plVar13 = plVar7;
        if ((cVar9 == '\0') && (local_70 != (longlong *)0x0)) {
          if (local_68 != '\0') goto LAB_00bb1c53;
          uVar11 = 1;
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        uVar11 = 1;
        if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
LAB_00bb1c53:
        local_68 = '\0';
        uVar11 = 1;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar13 == (longlong *)0x0) {
        uVar18 = FUN_00ccdf50(uVar18,0);
        if ((local_220 != '\0') && (local_228 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        uVar18 = FUN_00d45870();
        uVar18 = FUN_00ccdf50(extraout_XMM0_Da_04,uVar18);
        if ((local_230 != '\0') && (local_238 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      lVar1 = DAT_027652e8;
      if (DAT_027652e8 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_d0 = lVar1;
      local_c8 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_d0);
      plVar7 = local_70;
      cVar9 = (char)uVar11;
      if (local_70 == plVar13) {
        plVar7 = plVar13;
        if ((cVar9 == '\0') && (local_70 != (longlong *)0x0)) {
          if (local_68 != '\0') goto LAB_00bb1db3;
          uVar11 = 1;
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        uVar11 = 1;
        if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
LAB_00bb1db3:
        local_68 = '\0';
        uVar11 = 1;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        uVar18 = FUN_00ccdf50(uVar18,0);
        if ((local_200 != '\0') && (local_208 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        uVar18 = FUN_00d45870();
        uVar18 = FUN_00ccdf50(extraout_XMM0_Da_05,uVar18);
        if ((local_210 != '\0') && (local_218 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      lVar1 = DAT_027652f0;
      if (DAT_027652f0 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_c0 = lVar1;
      local_b8 = '\x01';
      uVar18 = FUN_000175c0(uVar18,&local_c0);
      plVar13 = local_70;
      cVar9 = (char)uVar11;
      if (local_70 == plVar7) {
        plVar13 = plVar7;
        if ((cVar9 == '\0') && (local_70 != (longlong *)0x0)) {
          if (local_68 != '\0') goto LAB_00bb1f23;
          uVar11 = 1;
          uVar18 = FUN_00d50b00();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        uVar11 = 1;
        if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
LAB_00bb1f23:
        local_68 = '\0';
        uVar11 = 1;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar13 == (longlong *)0x0) {
        uVar18 = FUN_00ccdf50(uVar18,0);
        if ((local_1e0 != '\0') && (local_1e8 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
      else {
        uVar18 = FUN_00d45870();
        uVar18 = FUN_00ccdf50(extraout_XMM0_Da_06,uVar18);
        if ((local_1f0 != '\0') && (local_1f8 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
    }
    FUN_015ac3a0();
  }
  local_58 = local_48;
  uVar18 = (**(code **)(*plVar4 + 0x368))();
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  local_1c8 = local_b0;
  local_1c0 = 0;
  uVar18 = FUN_00bb0460(uVar18,&local_1c8);
  if ((local_1b8 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = local_b0;
  if ((char)local_a4 == '\0' && plVar19 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return uVar18;
}


