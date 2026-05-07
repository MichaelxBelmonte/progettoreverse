// Function: FUN_01ef3fd0
// Address: 01ef3fd0
// Size: 7840 bytes
// Class: GNString
// String references:
//   "Circle_%f_%f_%f"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ef3fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  code *pcVar10;
  undefined8 *puVar11;
  char cVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int in_ECX;
  undefined8 in_RDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char in_R8B;
  undefined4 in_R9D;
  undefined8 *puVar15;
  bool bVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  undefined8 in_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar34;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar35;
  undefined1 auVar22 [16];
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 extraout_XMM0_Db_00;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar19;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar43;
  undefined8 in_XMM1_Qb;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 local_3e8;
  undefined1 local_3e0;
  longlong local_3d8;
  undefined1 local_3d0;
  longlong local_3c8;
  undefined1 local_3c0;
  longlong local_3b8;
  undefined1 local_3b0;
  longlong local_3a8;
  undefined1 local_3a0;
  float local_398;
  float fStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined *local_380;
  undefined1 local_378 [16];
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
  undefined8 *local_2f0;
  char local_2e8;
  undefined8 *local_2e0;
  char local_2d8;
  undefined8 *local_2d0;
  char local_2c8;
  undefined8 *local_2c0;
  char local_2b8;
  undefined8 *local_2b0;
  char local_2a8;
  undefined8 *local_2a0;
  char local_298;
  undefined8 *local_290;
  char local_288;
  longlong local_280;
  char local_278;
  float local_26c;
  longlong local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  float local_228;
  float fStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
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
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
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
  undefined4 uStack_cc;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_48;
  uint local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  
  fVar17 = (float)param_3;
  local_98._8_4_ = in_XMM2_Dc;
  local_98._0_8_ = param_3;
  local_98._12_4_ = in_XMM2_Dd;
  local_78 = (float)param_2;
  fStack_74 = (float)((ulonglong)param_2 >> 0x20);
  uStack_70 = (undefined4)in_XMM1_Qb;
  uStack_6c = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  uStack_80 = in_XMM0_Qb;
  local_88 = (undefined1  [8])param_1;
  auVar22 = _local_88;
  local_88._0_4_ = (undefined4)param_1;
  local_88._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_80._0_4_ = (float)in_XMM0_Qb;
  uStack_80._4_4_ = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  switch((int)in_RDX) {
  case 9:
    local_360 = *unaff_RSI;
    local_358 = '\0';
    (**(code **)(*unaff_RDI + 0x3f8))(in_ECX,0x24 - (uint)(fStack_74 < local_78),fVar17,param_4);
    if ((local_358 != '\0') && (local_360 != 0)) {
      FUN_00d50b20();
    }
    break;
  default:
    local_280 = *unaff_RSI;
    local_278 = '\0';
    FUN_01cc0ca0(in_ECX,in_RDX,fVar17,param_4);
    if ((local_278 != '\0') && (local_280 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 0xe:
    bVar5 = fStack_74 < DAT_02392fd8;
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    local_1c0 = 0;
    local_1c8 = unaff_RDI[0xe];
    if (local_1c8 != 0) {
      FUN_00d50b00();
    }
    local_1c0 = '\x01';
    FUN_01d488d0();
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    fVar17 = *(float *)(&DAT_02422ad0 + (ulonglong)bVar5 * 4);
    FUN_01d48b40();
    plVar1 = (longlong *)*unaff_RSI;
    FUN_01ef6ef0();
    local_168 = local_48;
    local_160 = 0;
    if (((char)local_40 == '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    local_160 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    FUN_01d48b40();
    (**(code **)(*unaff_RDI + 0x3a8))();
    local_e8 = local_48;
    local_e0 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_e0 = '\x01';
    FUN_01d488d0();
    if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_01ef6ef0();
    local_158 = local_48;
    local_150 = 0;
    if (((char)local_40 == '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    local_150 = '\x01';
    (**(code **)(*plVar1 + 0x3a0))();
    if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (in_R8B == '\0') {
      local_1a0 = 0;
      lVar14 = unaff_RDI[0x10];
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_1a0 = '\x01';
      local_1a8 = lVar14;
      FUN_01d488d0();
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_1b0 = 0;
      lVar14 = unaff_RDI[0xf];
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = '\x01';
      local_1b8 = lVar14;
      FUN_01d488d0();
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_01ef6ef0();
    local_140 = 0;
    if (((char)local_40 == '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    local_148 = local_48;
    local_140 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (in_R8B == '\0') {
      local_3b8 = *unaff_RSI;
      local_3b0 = 0;
      auVar8._8_4_ = uStack_70;
      auVar8._0_8_ = param_2;
      auVar8._12_4_ = uStack_6c;
      auVar39._4_12_ = auVar8._4_12_;
      auVar39._0_4_ =
           (local_78 - (DAT_02390d34 + fVar17)) - ((float)local_88._0_4_ + DAT_02390124 + fVar17);
      blendps(auVar8,auVar39,1);
      blendps(local_98,_DAT_02422a60,0xe);
      lVar14 = unaff_RDI[0x2a];
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_3a0 = 1;
      local_3a8 = lVar14;
      FUN_01ef3900(&local_3a8,0,1);
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      local_3d8 = *unaff_RSI;
      local_3d0 = 0;
      auVar7._8_4_ = uStack_70;
      auVar7._0_8_ = param_2;
      auVar7._12_4_ = uStack_6c;
      auVar38._4_12_ = auVar7._4_12_;
      auVar38._0_4_ =
           (local_78 - (DAT_02390d34 + fVar17)) - ((float)local_88._0_4_ + DAT_02390124 + fVar17);
      blendps(auVar7,auVar38,1);
      blendps(local_98,_DAT_02422a60,0xe);
      lVar14 = unaff_RDI[0x29];
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_3c0 = 1;
      local_3c8 = lVar14;
      FUN_01ef3900(&local_3c8,1,1);
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
    }
    break;
  case 0xf:
    local_398 = fStack_74;
    fStack_394 = fStack_74;
    uStack_390 = uStack_6c;
    uStack_38c = uStack_6c;
    fStack_74 = DAT_0239011c * fStack_74;
    auVar20._0_4_ = fStack_74 + (float)local_88._0_4_;
    auVar20._4_4_ = fStack_74 + (float)local_88._4_4_;
    auVar20._8_4_ = (float)uStack_80 + 0.0;
    auVar20._12_4_ = uStack_80._4_4_ + 0.0;
    auVar21 = roundps(auVar20,auVar20,9);
    fVar17 = DAT_02390118 + fVar17;
    ___sincosf_stret(*(float *)(unaff_RDI + 0x3d) * DAT_024204d0 * fVar17);
    puVar13 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar13 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    *(undefined8 *)((longlong)puVar13 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x41) = 0;
    pcVar10 = DAT_02680418;
    (*DAT_02680418)();
    FUN_01d39180();
    local_26c = (float)((int)local_398 / 2) + DAT_023b1608;
    local_378 = ZEXT416((uint)local_26c);
    local_228 = auVar21._4_4_;
    uStack_cc = auVar21._12_4_;
    local_26c = DAT_02394244 + local_26c;
    uStack_220 = uStack_cc;
    uStack_21c = uStack_cc;
    fStack_224 = local_228;
    if ((param_4 != DAT_02390124) || (NAN(param_4) || NAN(DAT_02390124))) {
      if (0.0 <= fVar17) {
        FUN_01d39310();
        local_98 = ZEXT416((uint)fVar17);
      }
      else {
        FUN_01d39310();
        local_98 = ZEXT416((uint)fVar17);
      }
    }
    else {
      FUN_01d39310();
    }
    FUN_01d38830();
    FUN_01d48370();
    local_40 = 3;
    local_3c = auVar21._0_4_;
    local_38 = local_228;
    local_48 = (undefined8 *)&DAT_026b2438;
    local_34 = local_378._0_4_;
    uVar19 = FUN_00d8cb40();
    puVar11 = local_2f0;
    local_380 = &DAT_02680400;
    if (local_2f0 == (undefined8 *)0x0) {
      bVar9 = true;
    }
    else {
      if (((local_2e8 == '\0') && (uVar19 = FUN_00d50b00(), local_2e8 != '\0')) &&
         (local_2f0 != (undefined8 *)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      bVar9 = false;
    }
    local_2e0 = puVar11;
    local_2d8 = '\0';
    FUN_000175c0(uVar19,&local_2e0);
    puVar15 = local_48;
    if (local_48 == (undefined8 *)0x0) {
      bVar5 = false;
      puVar15 = (undefined8 *)0x0;
LAB_01ef4ff5:
      bVar16 = puVar15 == (undefined8 *)0x0;
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_40 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
        goto LAB_01ef4ff5;
      }
      local_40 = local_40 & 0xffffff00;
      bVar5 = true;
      bVar16 = false;
    }
    if ((local_2d8 != '\0') && (local_2e0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) {
      puVar15 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar15 = local_380;
      *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar15 + 0x41) = 0;
      (*pcVar10)();
      uVar19 = FUN_01d39310();
      local_2c8 = '\0';
      local_48 = puVar11;
      local_40 = local_40 & 0xffffff00;
      local_2d0 = puVar15;
      FUN_00ca0840(uVar19,&local_48);
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      bVar5 = true;
      if ((local_2c8 != '\0') && (local_2d0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_2b8 = '\0';
    local_2c0 = puVar15;
    (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
    if ((local_2b8 != '\0') && (local_2c0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    local_1f0 = 0;
    local_1f8 = unaff_RDI[0xe];
    if (local_1f8 != 0) {
      FUN_00d50b00();
    }
    local_1f0 = '\x01';
    FUN_01d488d0();
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
    local_2a8 = '\0';
    local_2b0 = puVar13;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    if ((local_2a8 != '\0') && (local_2b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
    FUN_01d48370();
    local_298 = '\0';
    local_2a0 = puVar13;
    (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
    if ((local_298 != '\0') && (local_2a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (in_R8B == '\0') {
      local_1d0 = 0;
      lVar14 = unaff_RDI[0x2a];
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = '\x01';
      local_1d8 = lVar14;
      FUN_01d488d0();
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_1e0 = 0;
      lVar14 = unaff_RDI[0x29];
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_1e0 = '\x01';
      local_1e8 = lVar14;
      FUN_01d488d0();
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
    }
    auVar22 = insertps(auVar22,ZEXT416((uint)(DAT_024229f0 *
                                              ((float)local_378._0_4_ + (float)local_378._0_4_) +
                                             (local_228 - (float)local_378._0_4_))),0x10);
    auVar6._4_4_ = fStack_394;
    auVar6._0_4_ = local_398;
    auVar6._8_4_ = uStack_390;
    auVar6._12_4_ = uStack_38c;
    auVar2._4_4_ = local_378._4_4_;
    auVar2._0_4_ = ((float)local_378._0_4_ + (float)local_378._0_4_) * DAT_02394298;
    auVar2._8_4_ = local_378._8_4_;
    auVar2._12_4_ = local_378._12_4_;
    auVar21 = insertps(auVar6,auVar2,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar22._0_8_,auVar21._0_8_);
    FUN_01d48390();
    FUN_01d48b40();
    (**(code **)(*unaff_RDI + 0x3a0))();
    local_f8 = local_48;
    local_f0 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_f0 = '\x01';
    FUN_01d488d0();
    if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((param_4 != DAT_02390124) || (NAN(param_4) || NAN(DAT_02390124))) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    }
    else if ((float)local_98._0_4_ < _DAT_023b294c) {
      if (DAT_0239011c < (float)local_98._0_4_) {
        auVar31._4_12_ = local_98._4_12_;
        auVar31._0_4_ = ((float)local_98._0_4_ + DAT_02390118) * DAT_02394248 + DAT_02390124;
        FUN_01d48b40(auVar31._0_8_);
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    }
    auVar22 = roundss(ZEXT816(0),ZEXT416((uint)fStack_74),9);
    local_3e8 = 0;
    local_3e0 = 0;
    FUN_01ef3900(&local_3e8,auVar22._0_8_,1);
    FUN_00d50b20();
    if (!bVar9 && puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01ef5e4b;
  case 0x10:
    auVar23._0_8_ = (**(code **)(*unaff_RDI + 0x548))();
    auVar23._8_8_ = extraout_XMM0_Qb_00;
    if (0.0 <= param_4) {
      FUN_01d48370();
      auVar27._0_8_ = FUN_01d48a00();
      auVar27._8_8_ = extraout_XMM0_Qb_03;
      auVar28._4_12_ = auVar27._4_12_;
      auVar28._0_4_ = (float)auVar27._0_8_ * DAT_0239011c;
      FUN_01d489d0(auVar28._0_8_);
      fVar18 = local_78;
      fVar43 = fStack_74;
      auVar29._0_8_ = (**(code **)(*unaff_RDI + 0x548))();
      auVar29._8_8_ = extraout_XMM0_Qb_04;
      if (fVar18 <= fVar43) {
        fVar34 = (float)((ulonglong)auVar29._0_8_ >> 0x20);
        uVar35 = (undefined4)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
        auVar4._4_4_ = fVar34;
        auVar4._0_4_ = fVar34 + (fVar43 - fVar18) * param_4;
        auVar4._8_4_ = uVar35;
        auVar4._12_4_ = uVar35;
        auVar22 = insertps(auVar29,auVar4,0x10);
        uVar19 = auVar22._0_8_;
      }
      else {
        auVar30._4_12_ = auVar29._4_12_;
        auVar30._0_4_ = (float)auVar29._0_8_ + (fVar18 - fVar43) * param_4;
        uVar19 = auVar30._0_8_;
      }
      FUN_00d05530(uVar19);
      FUN_01d48b40();
      if (in_R8B != '\0') {
        local_190 = 0;
        lVar14 = unaff_RDI[0xf];
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        local_190 = '\x01';
        local_198 = lVar14;
        FUN_01d488d0();
        if ((local_190 != '\0') && (local_198 != 0)) {
          FUN_00d50b20();
        }
      }
      local_180 = 0;
      lVar14 = unaff_RDI[0x10];
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_180 = '\x01';
      local_188 = lVar14;
      FUN_01d488d0();
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
      if (fStack_74 <= local_78) {
        lVar14 = *(longlong *)*unaff_RSI;
      }
      else {
        lVar14 = *(longlong *)*unaff_RSI;
      }
      (**(code **)(lVar14 + 0x3e0))();
      FUN_01d48390();
      if (fStack_74 < local_78) goto LAB_01ef45a9;
LAB_01ef4ce7:
      fVar18 = (float)((ulonglong)auVar23._0_8_ >> 0x20);
      auVar40._4_4_ = fVar18;
      auVar40._0_4_ = fVar18;
      uVar35 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar40._8_4_ = uVar35;
      auVar40._12_4_ = uVar35;
      auVar41._4_12_ = auVar40._4_12_;
      auVar41._0_4_ = fVar18 + (fStack_74 - local_78) * fVar17;
      auVar22 = insertps(auVar23,auVar41,0x10);
      uVar19 = auVar22._0_8_;
    }
    else {
      if (local_78 <= fStack_74) goto LAB_01ef4ce7;
LAB_01ef45a9:
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ = (float)auVar23._0_8_ + (local_78 - fStack_74) * fVar17;
      uVar19 = auVar24._0_8_;
    }
    FUN_01d39800(uVar19);
    puVar15 = local_48;
    if (((char)local_40 == '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x490))(in_R8B,0x11,in_R9D);
    local_178 = local_48;
    local_170 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_170 = '\x01';
    FUN_01d488d0();
    if ((local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_290 = puVar15;
    local_288 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if ((local_288 != '\0') && (local_290 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar15 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    break;
  case 0x23:
    auVar37._8_4_ = uStack_70;
    auVar37._0_8_ = param_2;
    auVar37._12_4_ = uStack_6c;
    if (local_78 < fStack_74 * DAT_02390d2c) {
      return;
    }
    auVar25._0_8_ = (**(code **)(*unaff_RDI + 0x548))();
    auVar25._8_8_ = extraout_XMM0_Qb_01;
    param_4 = param_4 * auVar37._0_4_;
    fVar43 = auVar37._4_4_;
    fVar18 = fVar43;
    if (fVar43 <= param_4) {
      fVar18 = param_4;
    }
    auVar3._4_4_ = fVar43;
    auVar3._0_4_ = fVar18;
    auVar3._8_4_ = auVar37._12_4_;
    auVar3._12_4_ = auVar37._12_4_;
    auVar22 = blendps(auVar37,auVar3,1);
    auVar26._4_12_ = auVar25._4_12_;
    auVar26._0_4_ = (float)auVar25._0_8_ + (auVar37._0_4_ - fVar18) * fVar17;
    FUN_00d05530(auVar26._0_8_,auVar22._0_8_,*(uint *)((longlong)unaff_RDI + 0x194) ^ _DAT_023945e0)
    ;
    fVar17 = auVar22._0_4_;
    local_350 = *unaff_RSI;
    local_348 = '\0';
    (**(code **)(*unaff_RDI + 0x6a0))(0,&local_350,fVar17);
    puVar15 = local_48;
    if (local_48 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
      bVar5 = false;
    }
    else if ((char)local_40 == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
      bVar5 = true;
    }
    if ((local_348 != '\0') && (local_350 != 0)) {
      FUN_00d50b20();
    }
    if (in_ECX == 0x10) {
      FUN_01d48b40();
      if ((_DAT_024229f4 < fVar17) && (cVar12 = (**(code **)(*unaff_RDI + 0x6b0))(), cVar12 != '\0')
         ) {
        (**(code **)(*unaff_RDI + 0x3a8))();
        local_138 = local_48;
        local_130 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_130 = '\x01';
        FUN_01d488d0();
        if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        fVar18 = DAT_02390d04 + extraout_XMM0_Da;
        roundss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),9);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        local_98._0_4_ = extraout_XMM0_Da + fVar17 + DAT_02390d00 + DAT_023b36a4;
        local_98._4_4_ = extraout_XMM0_Db_00;
        local_98._8_4_ = (int)extraout_XMM0_Qb_02;
        local_98._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
        auVar22 = ZEXT416((uint)(DAT_02390d00 + (float)local_98._0_4_));
        roundss(auVar22,auVar22,9);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x398))();
        local_128 = local_48;
        local_120 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_120 = '\x01';
        FUN_01d488d0();
        if ((local_120 != '\0') && (local_128 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        roundss(ZEXT416((uint)(fVar18 + DAT_02390124)),ZEXT416((uint)(fVar18 + DAT_02390124)),9);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        roundss(local_98,local_98,9);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      }
    }
    else {
      local_210 = 0;
      lVar14 = unaff_RDI[0x25];
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_210 = '\x01';
      local_218 = lVar14;
      FUN_01d488d0();
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      local_338 = '\0';
      local_340 = puVar15;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      if ((local_338 != '\0') && (local_340 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40();
    cVar12 = (**(code **)(*unaff_RDI + 0x6b0))();
    if (cVar12 != '\0') {
      if (in_R8B == '\0') {
        local_250 = 0;
        lVar14 = unaff_RDI[0x10];
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        local_250 = '\x01';
        local_258 = lVar14;
        FUN_01d488d0();
        if ((local_250 != '\0') && (local_258 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_260 = 0;
        lVar14 = unaff_RDI[0xf];
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        local_260 = '\x01';
        local_268 = lVar14;
        FUN_01d488d0();
        if ((local_260 != '\0') && (local_268 != 0)) {
          FUN_00d50b20();
        }
      }
      local_328 = '\0';
      local_330 = puVar15;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      if ((local_328 != '\0') && (local_330 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_01ef5e4b;
  case 0x24:
    auVar22._8_4_ = uStack_70;
    auVar22._0_8_ = param_2;
    auVar22._12_4_ = uStack_6c;
    if (fStack_74 < DAT_02390d2c * local_78) {
      return;
    }
    auVar21._0_8_ = (**(code **)(*unaff_RDI + 0x548))();
    auVar21._8_8_ = extraout_XMM0_Qb;
    fVar43 = auVar22._4_4_;
    fVar18 = auVar22._0_4_;
    if (auVar22._0_4_ <= param_4 * fVar43) {
      fVar18 = param_4 * fVar43;
    }
    fVar34 = (float)((ulonglong)auVar21._0_8_ >> 0x20);
    auVar44._4_4_ = fVar34;
    auVar44._0_4_ = fVar34;
    uVar35 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar44._8_4_ = uVar35;
    auVar44._12_4_ = uVar35;
    auVar45._4_12_ = auVar44._4_12_;
    auVar45._0_4_ = fVar34 + (fVar43 - fVar18) * fVar17;
    auVar36._4_4_ = fVar43;
    auVar36._0_4_ = fVar18;
    auVar36._8_4_ = auVar22._8_4_;
    auVar36._12_4_ = auVar22._12_4_;
    auVar36 = insertps(auVar22,auVar36,0x10);
    auVar22 = insertps(auVar21,auVar45,0x10);
    FUN_00d05530(auVar22._0_8_,auVar36._0_8_,*(uint *)((longlong)unaff_RDI + 0x194) ^ _DAT_023945e0)
    ;
    local_320 = *unaff_RSI;
    local_318 = '\0';
    (**(code **)(*unaff_RDI + 0x6a0))(1,&local_320,auVar36._0_4_);
    puVar15 = local_48;
    if (local_48 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
      bVar5 = false;
    }
    else if ((char)local_40 == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
      bVar5 = true;
    }
    if ((local_318 != '\0') && (local_320 != 0)) {
      FUN_00d50b20();
    }
    if (in_ECX == 0x10) {
      FUN_01d48b40();
      local_88._4_4_ = auVar36._4_4_;
      if ((_DAT_024229f4 < (float)local_88._4_4_) &&
         (cVar12 = (**(code **)(*unaff_RDI + 0x6b0))(), cVar12 != '\0')) {
        (**(code **)(*unaff_RDI + 0x3a8))();
        local_118 = local_48;
        local_110 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_110 = '\x01';
        FUN_01d488d0();
        if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        auVar32._4_4_ = extraout_XMM0_Db;
        auVar32._0_4_ = extraout_XMM0_Db;
        auVar32._8_4_ = extraout_XMM0_Dd;
        auVar32._12_4_ = extraout_XMM0_Dd;
        auVar33._4_12_ = auVar32._4_12_;
        auVar33._0_4_ = extraout_XMM0_Db + DAT_02390d04;
        roundss(ZEXT816(0),auVar33,9);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        uStack_80._4_4_ = auVar36._12_4_;
        local_88._0_4_ = extraout_XMM0_Db + (float)local_88._4_4_ + DAT_02390d00 + DAT_023b36a4;
        local_88._4_4_ = extraout_XMM0_Db + (float)local_88._4_4_;
        uStack_80._0_4_ = extraout_XMM0_Dd + uStack_80._4_4_;
        uStack_80._4_4_ = extraout_XMM0_Dd + uStack_80._4_4_;
        roundss(ZEXT416(0),ZEXT416((uint)(DAT_02390d00 + (float)local_88._0_4_)),9);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*unaff_RDI + 0x398))();
        local_108 = local_48;
        local_100 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_100 = '\x01';
        FUN_01d488d0();
        if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        auVar42._0_4_ = auVar33._0_4_ + DAT_02390124;
        auVar42._4_12_ = auVar33._4_12_;
        roundss(auVar42,auVar42,9);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        roundss(ZEXT816(0),_local_88,9);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      }
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[0x25] + 0x370))();
      local_200 = 0;
      local_208 = unaff_RDI[0x25];
      if (local_208 != 0) {
        FUN_00d50b00();
      }
      local_200 = '\x01';
      FUN_01d488d0();
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
      local_308 = '\0';
      local_310 = puVar15;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      if ((local_308 != '\0') && (local_310 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)unaff_RDI[0x25] + 0x370))();
    }
    FUN_01d48b40();
    cVar12 = (**(code **)(*unaff_RDI + 0x6b0))();
    if (cVar12 != '\0') {
      if (in_R8B == '\0') {
        local_230 = 0;
        lVar14 = unaff_RDI[0x10];
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        local_230 = '\x01';
        local_238 = lVar14;
        FUN_01d488d0();
        if ((local_230 != '\0') && (local_238 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_240 = 0;
        lVar14 = unaff_RDI[0xf];
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        local_240 = '\x01';
        local_248 = lVar14;
        FUN_01d488d0();
        if ((local_240 != '\0') && (local_248 != 0)) {
          FUN_00d50b20();
        }
      }
      local_2f8 = '\0';
      local_300 = puVar15;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      if ((local_2f8 != '\0') && (local_300 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01ef5e4b:
    if ((bVar5) && (puVar15 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


