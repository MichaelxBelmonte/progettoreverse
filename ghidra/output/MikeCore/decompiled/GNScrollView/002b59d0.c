// Function: FUN_002b59d0
// Address: 002b59d0
// Size: 5585 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x002b5dab) */
/* WARNING: Removing unreachable block (ram,0x002b5db7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b59d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  float fVar12;
  undefined4 uVar13;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar14 [16];
  float local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong local_330;
  char local_328;
  longlong local_320;
  char local_318;
  longlong *local_310;
  char local_308;
  longlong *local_300;
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
  longlong *local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong *local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong *local_240;
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
  longlong *local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
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
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  (**(code **)(*unaff_RSI + 0x20))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002b6f81;
    }
  }
  else if (local_40 != (longlong *)0x0) goto LAB_002b6f81;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar6 = (longlong)&DAT_024dbaf0;
  plVar6[2] = (longlong)&DAT_024dc430;
  plVar6[0x27] = 0;
  plVar6[0x28] = 0;
  *(undefined1 *)(plVar6 + 0x29) = 0;
  FUN_00d500e0();
  plVar6[0x27] = (longlong)unaff_RSI;
  plVar7 = (longlong *)(**(code **)(*unaff_RSI + 0x10))();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_60 = plVar7;
  (**(code **)(*plVar6 + 0x640))();
  uVar9 = (**(code **)(*local_40 + 0x580))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*unaff_RSI + 0x48))();
  local_378 = (float)uVar9;
  if (cVar5 == '\0') {
    (**(code **)(*plVar7 + 0x4d8))();
    auVar11._4_4_ = uVar13;
    auVar11._0_4_ = fVar12 + DAT_023b1698;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._12_4_ = in_XMM1_Dd;
    auVar11 = blendps(ZEXT816(0),auVar11,1);
    (**(code **)(*plVar6 + 0x4d0))(auVar11._0_8_,_DAT_023b16b0);
  }
  else {
    (**(code **)(*plVar7 + 0x4d8))();
    auVar14 = insertps(_DAT_023b16c0,ZEXT416((uint)(DAT_02390d00 + local_378 + DAT_023b169c)),0x10);
    auVar1._4_4_ = uVar13;
    auVar1._0_4_ = fVar12 + DAT_023b1698;
    auVar1._8_4_ = in_XMM1_Dc;
    auVar1._12_4_ = in_XMM1_Dd;
    auVar11 = blendps(ZEXT816(0),auVar1,1);
    (**(code **)(*plVar6 + 0x4d0))(auVar11._0_8_,auVar14._0_4_);
  }
  (**(code **)(*plVar6 + 0x570))();
  (**(code **)(*plVar6 + 0x558))();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar7 + 0x27) = 0;
  plVar7[0x2e] = 0;
  *(undefined4 *)(plVar7 + 0x2f) = 0;
  plVar7[0x30] = 0;
  *(undefined1 *)(plVar7 + 0x31) = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
  plVar7[0x35] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  *(undefined4 *)((longlong)plVar7 + 500) = 0;
  *(undefined1 *)(plVar7 + 0x3f) = 0;
  plVar7[0x43] = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  *(undefined1 *)(plVar7 + 0x3e) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x1fc) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x204) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x20c) = 0;
  *plVar7 = (longlong)&DAT_02687f80;
  plVar7[2] = (longlong)&DAT_02688a68;
  plVar7[0x39] = (longlong)&DAT_02688aa8;
  plVar7[0x44] = 0;
  *(undefined1 *)(plVar7 + 0x45) = 0;
  plVar7[0x46] = 0;
  *(undefined1 *)(plVar7 + 0x47) = 0;
  plVar7[0x48] = 0;
  *(undefined1 *)(plVar7 + 0x49) = 0;
  *(undefined4 *)((longlong)plVar7 + 0x24c) = 0;
  *(undefined1 *)(plVar7 + 0x4a) = 0;
  (*DAT_02687f98)();
  FUN_01cef4c0();
  FUN_01cef490();
  (**(code **)(*plVar7 + 0x558))();
  (**(code **)(*plVar7 + 0x4d0))();
  lVar3 = DAT_026deab0;
  if (DAT_026deab0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar7 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar7 + 0xa20))();
  FUN_01d7ac40();
  FUN_01cef4e0();
  lVar3 = DAT_026f6f70;
  if (DAT_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_026fc528;
  if (DAT_026fc528 != 0) {
    FUN_00d50b00();
  }
  local_330 = lVar4;
  local_328 = '\x01';
  local_320 = 0;
  local_318 = '\0';
  FUN_00d31230(&local_320,&local_330);
  local_c0 = local_40;
  local_b8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_b8 = '\x01';
  (**(code **)(*plVar7 + 0x6a8))();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if ((local_328 != '\0') && (local_330 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_0027c9f0();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_002b8a90();
  (**(code **)(*plVar8 + 0x18))();
  local_308 = '\x01';
  local_310 = plVar8;
  FUN_01d779a0();
  if ((local_308 != '\0') && (local_310 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_2f0 = DAT_026fc520;
  local_2f8 = '\0';
  local_300 = plVar6;
  if (DAT_026fc520 != 0) {
    FUN_00d50b00();
  }
  local_2e8 = '\x01';
  local_2d8 = '\0';
  local_2e0 = plVar7;
  FUN_00d41430(&local_2e0,&local_2f0);
  if ((local_2d8 != '\0') && (local_2e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f8 != '\0') && (local_300 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_2c0 = DAT_027f0f20;
  local_2c8 = '\0';
  local_2d0 = plVar6;
  if (DAT_027f0f20 != 0) {
    FUN_00d50b00();
  }
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
  if ((local_2c8 != '\0') && (local_2d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_290 = DAT_027ebc60;
  local_298 = '\0';
  local_2a0 = plVar6;
  if (DAT_027ebc60 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  local_280 = 0;
  local_278 = '\0';
  FUN_00d41430(&local_280,&local_290);
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_260 = DAT_026f6e90;
  local_268 = '\0';
  local_270 = plVar6;
  if (DAT_026f6e90 != 0) {
    FUN_00d50b00();
  }
  local_258 = '\x01';
  local_250 = 0;
  local_248 = '\0';
  FUN_00d41430(&local_250,&local_260);
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_230 = DAT_026fce70;
  local_238 = '\0';
  local_240 = plVar6;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  FUN_00d41430(&local_220,&local_230);
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_200 = DAT_026d7d88;
  local_208 = '\0';
  local_210 = plVar6;
  if (DAT_026d7d88 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  local_1f0 = 0;
  local_1e8 = '\0';
  FUN_00d41430(&local_1f0,&local_200);
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_1d0 = DAT_026f6d10;
  local_1d8 = '\0';
  local_1e0 = plVar6;
  if (DAT_026f6d10 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = '\x01';
  local_1c0 = 0;
  local_1b8 = '\0';
  FUN_00d41430(&local_1c0,&local_1d0);
  plVar8 = local_60;
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_1a8 = '\0';
  local_1b0 = plVar7;
  (**(code **)(*plVar6 + 0x450))();
  if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*unaff_RSI + 0x48))();
  if (cVar5 == '\0') {
    local_50 = 0;
    local_48 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(undefined4 *)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(undefined1 *)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(undefined4 *)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *plVar7 = (longlong)&DAT_02677e10;
    plVar7[2] = (longlong)&DAT_026788e8;
    plVar7[0x39] = (longlong)&DAT_02678928;
    *(undefined4 *)((longlong)plVar7 + 500) = 0;
    *(undefined1 *)(plVar7 + 0x3f) = 0;
    plVar7[0x43] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(undefined1 *)(plVar7 + 0x3e) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x204) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x20c) = 0;
    (*DAT_02677e28)();
    FUN_01cef4c0();
    (**(code **)(*plVar7 + 0x558))();
    auVar11 = blendps(ZEXT416((uint)(DAT_023b16a0 - local_378)),_DAT_023b16e0,0xe);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
    local_1a0 = plVar8;
    local_198 = '\0';
    (**(code **)(*plVar7 + 0xa20))();
    if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026fb888;
    if (DAT_026fb888 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar3;
    local_188 = '\x01';
    (**(code **)(*plVar7 + 0xa10))();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d0fe80();
    uVar10 = (**(code **)(*plVar7 + 0xa18))();
    local_b0 = local_d0;
    local_a8 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != 0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_a8 = '\x01';
    FUN_01d5e6e0(uVar10,&local_b0);
    local_48 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      local_50 = 0;
    }
    else if (local_38 == '\0') {
      uVar10 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_50 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_01d65230();
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      (**(code **)(*plVar7 + 0x6a8))();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = DAT_026fc530;
    if (DAT_026fc530 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar3;
    local_178 = '\x01';
    FUN_01d51a40();
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
    FUN_01cef3b0();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    local_168 = '\0';
    local_170 = plVar7;
    (**(code **)(*plVar6 + 0x450))();
    if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar7 + 0x27) = 0;
  plVar7[0x2e] = 0;
  *(undefined4 *)(plVar7 + 0x2f) = 0;
  plVar7[0x30] = 0;
  *(undefined1 *)(plVar7 + 0x31) = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(undefined4 *)(plVar7 + 0x2a) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
  plVar7[0x35] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  *plVar7 = (longlong)&DAT_02677e10;
  plVar7[2] = (longlong)&DAT_026788e8;
  plVar7[0x39] = (longlong)&DAT_02678928;
  *(undefined4 *)((longlong)plVar7 + 500) = 0;
  *(undefined1 *)(plVar7 + 0x3f) = 0;
  plVar7[0x43] = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  *(undefined1 *)(plVar7 + 0x3e) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x1fc) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x204) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x20c) = 0;
  (*DAT_02677e28)();
  FUN_01cef4c0();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = local_60;
  uStack_374 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_370 = (undefined4)extraout_XMM0_Qb;
  uStack_36c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if (cVar5 == '\0') {
    auVar14._4_4_ = uStack_374;
    auVar14._0_4_ = local_378 + DAT_023b169c + DAT_023b1608;
    auVar14._8_4_ = uStack_370;
    auVar14._12_4_ = uStack_36c;
    auVar11 = insertps(ZEXT416((uint)(DAT_023b16a0 - local_378)),auVar14,0x10);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
  }
  else {
    auVar2._4_4_ = uStack_374;
    auVar2._0_4_ = local_378 + DAT_023b169c + DAT_023b1608;
    auVar2._8_4_ = uStack_370;
    auVar2._12_4_ = uStack_36c;
    auVar11 = insertps(_DAT_023b16c0,auVar2,0x10);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
  }
  local_160 = plVar8;
  local_158 = '\0';
  (**(code **)(*plVar7 + 0xa20))();
  if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_026fc538;
  if (DAT_026fc538 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar3;
  local_148 = '\x01';
  (**(code **)(*plVar7 + 0xa10))();
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_026f6f90;
  if (DAT_026f6f90 != 0) {
    FUN_00d50b00();
  }
  local_140 = lVar3;
  local_138 = '\x01';
  FUN_01d51a40();
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
  FUN_01cef3b0();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d0fe80();
  local_130 = DAT_026f6f70;
  if (DAT_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026fe490;
  local_128 = '\x01';
  if (DAT_026fe490 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar3;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_00d31230(&local_110,&local_120);
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
  plVar8 = local_60;
  local_68 = '\x01';
  (**(code **)(*plVar7 + 0x6a8))();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d9a650();
  local_f8 = '\0';
  local_100 = plVar7;
  FUN_01d9ad20();
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d9a660();
  plVar6[0x28] = (longlong)plVar7;
  local_e8 = '\0';
  local_f0 = plVar6;
  (**(code **)(*plVar8 + 0x450))();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_d8 = '\0';
  local_e0 = plVar6;
  (**(code **)(*unaff_RSI + 0x28))();
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0x38))();
  FUN_00d50b00();
  FUN_00d50b20();
  if (((char)local_50 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_002b6f81:
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


