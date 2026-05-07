// Function: FUN_01be8850
// Address: 01be8850
// Size: 4835 bytes
// Class: MUMultiTrackItem


void FUN_01be8850(void)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
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
  longlong *local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong *local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong *local_200;
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
  longlong local_100;
  char local_f8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027e7bf0;
  if (DAT_027e7bf0 != 0) {
    FUN_00d50b00();
  }
  local_2e0 = lVar2;
  local_2d8 = '\x01';
  local_2d0 = 0;
  local_2c8 = '\0';
  FUN_00d41430(&local_2d0,&local_2e0);
  if ((local_2c8 != '\0') && (local_2d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2d8 != '\0') && (local_2e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6d40;
  if (DAT_026f6d40 != 0) {
    FUN_00d50b00();
  }
  local_2c0 = lVar2;
  local_2b8 = '\x01';
  local_2b0 = 0;
  local_2a8 = '\0';
  FUN_00d41430(&local_2b0,&local_2c0);
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027e7c00;
  if (DAT_027e7c00 != 0) {
    FUN_00d50b00();
  }
  local_2a0 = lVar2;
  local_298 = '\x01';
  local_290 = 0;
  local_288 = '\0';
  FUN_00d41430(&local_290,&local_2a0);
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x9a0))();
  plVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = plVar6;
  (**(code **)(*plVar6 + 0x4d8))();
  auVar11 = blendps(in_XMM1,ZEXT416(*(uint *)((longlong)unaff_RDI + 0x204)),1);
  (**(code **)(*plVar6 + 0x4d0))();
  FUN_01beab60();
  plVar6 = local_40;
  local_280 = local_78;
  local_278 = '\0';
  FUN_01d980f0();
  if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_001de9e0();
  *plVar6 = (longlong)&DAT_0265e5e8;
  plVar6[9] = (longlong)&DAT_0265eb98;
  plVar6[10] = (longlong)&DAT_0265ec00;
  plVar6[0xb] = (longlong)&DAT_0265ec58;
  FUN_00d500e0();
  local_270 = DAT_027edfd0;
  if (DAT_027edfd0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027e7c10;
  local_268 = '\x01';
  if (DAT_027e7c10 != 0) {
    FUN_00d50b00();
  }
  local_260 = lVar2;
  local_258 = '\x01';
  local_158 = 0;
  lVar2 = unaff_RDI[0x2a];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  local_160 = lVar2;
  (**(code **)(*plVar6 + 0x468))(&local_160,&local_260);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_250 = lVar2;
  local_248 = '\x01';
  local_240 = 0;
  local_238 = '\0';
  local_148 = 0;
  lVar2 = unaff_RDI[0x2b];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  local_150 = lVar2;
  (**(code **)(*plVar6 + 0x468))(&local_150,&local_240);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  local_230 = local_78;
  local_228 = '\0';
  FUN_01ccad10();
  if ((local_228 != '\0') && (local_230 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x478))();
  plVar9 = (longlong *)unaff_RDI[0x39];
  if (plVar9 != plVar6) {
    FUN_00d50b00();
    unaff_RDI[0x39] = (longlong)plVar6;
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)FUN_001f28d0();
  uVar10 = (**(code **)(*plVar6 + 0x18))();
  local_70 = plVar6;
  FUN_01dcc290(uVar10,0);
  local_98 = local_40;
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
  FUN_01ccad10();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_027e7c28;
  local_220 = lVar2;
  local_218 = '\x01';
  if (DAT_027e7c28 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar5;
  local_208 = '\x01';
  local_138 = 0;
  lVar2 = unaff_RDI[0x2a];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  plVar6 = local_70;
  local_138 = '\x01';
  local_140 = lVar2;
  (**(code **)(*local_70 + 0x468))(&local_140,&local_210);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x478))();
  plVar6 = (longlong *)unaff_RDI[0x3a];
  if (plVar6 != local_70) {
    FUN_00d50b00();
    unaff_RDI[0x3a] = (longlong)local_70;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x948))();
  plVar6 = (longlong *)unaff_RDI[0x36];
  plVar9 = plVar6;
  if (plVar6 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        goto LAB_01be9023;
      }
      FUN_00d50b00();
      plVar6 = (longlong *)unaff_RDI[0x36];
      unaff_RDI[0x36] = (longlong)local_40;
      plVar9 = local_40;
    }
    else {
      local_38 = '\0';
      plVar9 = local_40;
LAB_01be9023:
      unaff_RDI[0x36] = (longlong)plVar9;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(longlong **)(unaff_RDI[0x36] + 0x150) = unaff_RDI;
  FUN_01beab60();
  plVar6 = local_50;
  FUN_01d97870();
  local_128 = 0;
  local_130 = unaff_RDI[0x36];
  if (local_130 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_01cf5bb0();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x36] + 0x918))();
  uVar7 = (**(code **)(*unaff_RDI + 0x970))();
  local_a0 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01be926f;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01be9182:
    (**(code **)(*unaff_RDI + 0x640))();
    local_68 = (**(code **)(*local_40 + 0x580))();
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    (**(code **)(*unaff_RDI + 0x640))();
    uVar7 = (**(code **)(*local_50 + 0x578))();
    auVar4._8_4_ = uStack_60;
    auVar4._0_8_ = local_68;
    auVar4._12_4_ = uStack_5c;
    auVar11._8_4_ = extraout_XMM0_Dc_00;
    auVar11._0_8_ = uVar7;
    auVar11._12_4_ = extraout_XMM0_Dd_00;
    auVar11 = insertps(auVar4,auVar11,0x10);
    (**(code **)(*local_a0 + 0x4d0))(0);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01beab60();
    plVar6 = local_40;
    local_200 = local_a0;
    local_1f8 = '\0';
    FUN_01d9ab80();
    uVar7 = local_68;
    if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar7 = local_68;
    }
    local_68._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
      local_68 = uVar7;
      FUN_00d50b20();
    }
    local_68._0_4_ = 0;
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_01be9182;
LAB_01be926f:
    local_68._0_4_ = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  FUN_01beab60();
  plVar6 = local_40;
  FUN_01d94ee0();
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_0050ed30();
  *puVar8 = &DAT_0262a5e0;
  puVar8[2] = &DAT_0262b168;
  puVar8[0x3c] = &DAT_0262b1a8;
  puVar8[0x3f] = &DAT_0262b1d8;
  puVar8[0x40] = &DAT_0262b228;
  puVar8[0x48] = 0;
  puVar8[0x46] = 0;
  *(undefined1 *)(puVar8 + 0x47) = 0;
  (*DAT_0262a5f8)();
  puVar3 = (undefined8 *)unaff_RDI[0x3c];
  if (puVar3 == puVar8) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3c] = (longlong)puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)unaff_RDI[0x3c];
  FUN_01beab60();
  plVar9 = local_50;
  FUN_01d97e80();
  (**(code **)(*local_40 + 0x4d8))();
  (**(code **)(*plVar6 + 0x4d0))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[0x34];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  local_1f0 = lVar2;
  FUN_01a12210();
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_01beab60();
  plVar6 = local_40;
  local_118 = 0;
  local_120 = unaff_RDI[0x3c];
  if (local_120 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  FUN_01d97920();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1e0 = DAT_027e7c30;
  if (DAT_027e7c30 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = '\x01';
  local_f8 = 0;
  lVar2 = unaff_RDI[0x3c];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_100 = lVar2;
  FUN_00d41430(&local_100,&local_1e0);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1d0 = DAT_027e7c38;
  if (DAT_027e7c38 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = '\x01';
  local_d8 = 0;
  lVar2 = unaff_RDI[0x3c];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_e0 = lVar2;
  FUN_00d41430(&local_e0,&local_1d0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_001c07a0();
  (**(code **)(*plVar6 + 0x18))();
  local_1c0 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_1b8 = '\x01';
  local_1b0 = 0;
  local_1a8 = '\0';
  local_c8 = 0;
  lVar2 = unaff_RDI[0x2b];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_d0 = lVar2;
  (**(code **)(*plVar6 + 0x468))(&local_d0,&local_1b0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = lVar2;
  local_198 = '\x01';
  FUN_01f09940();
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  local_b8 = 0;
  lVar2 = unaff_RDI[0x36];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_c0 = lVar2;
  FUN_01ccad10();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x478))();
  plVar9 = (longlong *)unaff_RDI[0x3b];
  if (plVar9 != plVar6) {
    FUN_00d50b00();
    unaff_RDI[0x3b] = (longlong)plVar6;
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01be7d10();
  plVar9 = local_40;
  plVar6 = (longlong *)unaff_RDI[0x37];
  if (plVar6 == local_40) {
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      plVar6 = (longlong *)unaff_RDI[0x37];
    }
    unaff_RDI[0x37] = (longlong)plVar9;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x37] == 0) goto LAB_01be9aa8;
  (**(code **)(*unaff_RDI + 0x960))();
  plVar6 = (longlong *)unaff_RDI[0x38];
  plVar9 = plVar6;
  if (plVar6 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        goto LAB_01be989b;
      }
      FUN_00d50b00();
      plVar6 = (longlong *)unaff_RDI[0x38];
      unaff_RDI[0x38] = (longlong)local_40;
      plVar9 = local_40;
    }
    else {
      local_38 = '\0';
      plVar9 = local_40;
LAB_01be989b:
      unaff_RDI[0x38] = (longlong)plVar9;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  uVar10 = (**(code **)(*local_40 + 0x4d8))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  uVar1 = *(uint *)((longlong)unaff_RDI + 0x204);
  FUN_01e53c20();
  auVar11 = blendps(auVar11,ZEXT416(uVar1),1);
  (**(code **)(*local_40 + 0x4d0))(uVar10,auVar11._0_8_);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01beab60();
  local_a8 = 0;
  local_b0 = unaff_RDI[0x37];
  if (local_b0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_01e53c20();
  local_88 = local_50;
  local_80 = 0;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_80 = '\x01';
  FUN_01d98360(&local_88,0);
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x38] + 0x4e8))();
  (**(code **)(*unaff_RDI + 0xa10))();
  (**(code **)(*unaff_RDI + 0xa18))();
LAB_01be9aa8:
  FUN_01dcb680();
  FUN_01d243a0();
  if ((int)unaff_RDI[0x3d] == 0) {
    FUN_01bead50();
  }
  FUN_01beaed0();
  FUN_00d50b20();
  plVar6 = local_78;
  if ((char)local_68 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


