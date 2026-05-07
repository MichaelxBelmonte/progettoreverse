// Function: FUN_01ef3fd0
// Address: 01ef3fd0
// Size: 7840 bytes
// Class: GNString
// String references:
//   "Circle_%f_%f_%f"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01ef3fd0(uint64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  bool bVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  bool bVar9;
  code *pcVar10;
  void*puVar11;
  char cVar12;
  void*puVar13;
  int64_t lVar14;
  int in_ECX;
  uint64_t in_RDX;
  int64_t *arg1;
  int64_t *this_ptr;
  char in_R8B;
  uint32_t in_R9D;
  void*puVar15;
  bool bVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  uint64_t in_XMM0_Qb;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  float fVar34;
  uint64_t extraout_XMM0_Qb;
  uint32_t uVar35;
  uint8_t auVar22 [16];
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint32_t extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint64_t uVar19;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  float fVar43;
  uint64_t in_XMM1_Qb;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint32_t in_XMM2_Dc;
  uint32_t in_XMM2_Dd;
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint64_t local_3e8;
  uint8_t local_3e0;
  int64_t local_3d8;
  uint8_t local_3d0;
  int64_t local_3c8;
  uint8_t local_3c0;
  int64_t local_3b8;
  uint8_t local_3b0;
  int64_t local_3a8;
  uint8_t local_3a0;
  float local_398;
  float fStack_394;
  uint32_t uStack_390;
  uint32_t uStack_38c;
  void*local_380;
  uint8_t local_378 [16];
  int64_t local_360;
  char local_358;
  int64_t local_350;
  char local_348;
  void*local_340;
  char local_338;
  void*local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  void*local_310;
  char local_308;
  void*local_300;
  char local_2f8;
  void*local_2f0;
  char local_2e8;
  void*local_2e0;
  char local_2d8;
  void*local_2d0;
  char local_2c8;
  void*local_2c0;
  char local_2b8;
  void*local_2b0;
  char local_2a8;
  void*local_2a0;
  char local_298;
  void*local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  float local_26c;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  float local_228;
  float fStack_224;
  uint32_t uStack_220;
  uint32_t uStack_21c;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  void*local_178;
  char local_170;
  void*local_168;
  char local_160;
  void*local_158;
  char local_150;
  void*local_148;
  char local_140;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  void*local_118;
  char local_110;
  void*local_108;
  char local_100;
  void*local_f8;
  char local_f0;
  void*local_e8;
  char local_e0;
  uint32_t uStack_cc;
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  float local_78;
  float fStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  void*local_48;
  uint local_40;
  uint32_t local_3c;
  float local_38;
  uint32_t local_34;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  
  fVar17 = (float)param_3;
  local_98._8_4_ = in_XMM2_Dc;
  local_98._0_8_ = param_3;
  local_98._12_4_ = in_XMM2_Dd;
  local_78 = (float)param_2;
  fStack_74 = (float)((uint64_t)param_2 >> 0x20);
  uStack_70 = (uint32_t)in_XMM1_Qb;
  uStack_6c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  uStack_80 = in_XMM0_Qb;
  local_88 = (uint8_t  [8])param_1;
  auVar22 = _local_88;
  local_88._0_4_ = (uint32_t)param_1;
  local_88._4_4_ = (uint32_t)((uint64_t)param_1 >> 0x20);
  uStack_80._0_4_ = (float)in_XMM0_Qb;
  uStack_80._4_4_ = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  switch((int)in_RDX) {
  case 9:
    local_360 = *arg1;
    local_358 = '\0';
    (**(code **)(*this_ptr + 0x3f8))(in_ECX,0x24 - (uint)(fStack_74 < local_78),fVar17,param_4);
    if ((local_358 != '\0') && (local_360 != 0)) {
      FUN_00d50b20();
    }
    break;
  default:
    local_280 = *arg1;
    local_278 = '\0';
    FUN_01cc0ca0(in_ECX,in_RDX,fVar17,param_4);
    if ((local_278 != '\0') && (local_280 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 0xe:
    bVar5 = fStack_74 < g_02392fd8;
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    local_1c0 = 0;
    local_1c8 = this_ptr[0xe];
    if (local_1c8 != 0) {
      FUN_00d50b00();
    }
    local_1c0 = '\x01';
    FUN_01d488d0();
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    fVar17 = *(float *)(&g_02422ad0 + (uint64_t)bVar5 * 4);
    FUN_01d48b40();
    plVar1 = (int64_t *)*arg1;
    FUN_01ef6ef0();
    local_168 = local_48;
    local_160 = 0;
    if (((char)local_40 == '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b00();
    }
    local_160 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_160 != '\0') && (local_168 != (void*)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    FUN_01d48b40();
    (**(code **)(*this_ptr + 0x3a8))();
    local_e8 = local_48;
    local_e0 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_e0 = '\x01';
    FUN_01d488d0();
    if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    FUN_01ef6ef0();
    local_158 = local_48;
    local_150 = 0;
    if (((char)local_40 == '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b00();
    }
    local_150 = '\x01';
    (**(code **)(*plVar1 + 0x3a0))();
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (in_R8B == '\0') {
      local_1a0 = 0;
      lVar14 = this_ptr[0x10];
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
      lVar14 = this_ptr[0xf];
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
    plVar1 = (int64_t *)*arg1;
    FUN_01ef6ef0();
    local_140 = 0;
    if (((char)local_40 == '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b00();
    }
    local_148 = local_48;
    local_140 = '\x01';
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (in_R8B == '\0') {
      local_3b8 = *arg1;
      local_3b0 = 0;
      auVar8._8_4_ = uStack_70;
      auVar8._0_8_ = param_2;
      auVar8._12_4_ = uStack_6c;
      auVar39._4_12_ = auVar8._4_12_;
      auVar39._0_4_ =
           (local_78 - (g_02390d34 + fVar17)) - ((float)local_88._0_4_ + g_02390124 + fVar17);
      blendps(auVar8,auVar39,1);
      blendps(local_98,g_02422a60,0xe);
      lVar14 = this_ptr[0x2a];
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
      local_3d8 = *arg1;
      local_3d0 = 0;
      auVar7._8_4_ = uStack_70;
      auVar7._0_8_ = param_2;
      auVar7._12_4_ = uStack_6c;
      auVar38._4_12_ = auVar7._4_12_;
      auVar38._0_4_ =
           (local_78 - (g_02390d34 + fVar17)) - ((float)local_88._0_4_ + g_02390124 + fVar17);
      blendps(auVar7,auVar38,1);
      blendps(local_98,g_02422a60,0xe);
      lVar14 = this_ptr[0x29];
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
    fStack_74 = g_0239011c * fStack_74;
    auVar20._0_4_ = fStack_74 + (float)local_88._0_4_;
    auVar20._4_4_ = fStack_74 + (float)local_88._4_4_;
    auVar20._8_4_ = (float)uStack_80 + 0.0;
    auVar20._12_4_ = uStack_80._4_4_ + 0.0;
    auVar21 = roundps(auVar20,auVar20,9);
    fVar17 = g_02390118 + fVar17;
    ___sincosf_stret(*(float *)(this_ptr + 0x3d) * g_024204d0 * fVar17);
    puVar13 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar13 = &g_02680400;
    *(void*)((int64_t)puVar13 + 0xc) = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    *(void*)((int64_t)puVar13 + 0x39) = 0;
    *(void*)((int64_t)puVar13 + 0x41) = 0;
    pcVar10 = g_02680418;
    (*g_02680418)();
    FUN_01d39180();
    local_26c = (float)((int)local_398 / 2) + g_023b1608;
    local_378 = ZEXT416((uint)local_26c);
    local_228 = auVar21._4_4_;
    uStack_cc = auVar21._12_4_;
    local_26c = g_02394244 + local_26c;
    uStack_220 = uStack_cc;
    uStack_21c = uStack_cc;
    fStack_224 = local_228;
    if ((param_4 != g_02390124) || (NAN(param_4) || NAN(g_02390124))) {
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
    local_48 = (void*)&g_026b2438;
    local_34 = local_378._0_4_;
    uVar19 = FUN_00d8cb40();
    puVar11 = local_2f0;
    local_380 = &g_02680400;
    if (local_2f0 == (void*)0x0) {
      bVar9 = true;
    }
    else {
      if (((local_2e8 == '\0') && (uVar19 = FUN_00d50b00(), local_2e8 != '\0')) &&
         (local_2f0 != (void*)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      bVar9 = false;
    }
    local_2e0 = puVar11;
    local_2d8 = '\0';
    FUN_000175c0(uVar19,&local_2e0);
    puVar15 = local_48;
    if (local_48 == (void*)0x0) {
      bVar5 = false;
      puVar15 = (void*)0x0;
LAB_01ef4ff5:
      bVar16 = puVar15 == (void*)0x0;
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
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
    if ((local_2d8 != '\0') && (local_2e0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) {
      puVar15 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar15 = local_380;
      *(void*)((int64_t)puVar15 + 0xc) = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      *(void*)((int64_t)puVar15 + 0x39) = 0;
      *(void*)((int64_t)puVar15 + 0x41) = 0;
      (*pcVar10)();
      uVar19 = FUN_01d39310();
      local_2c8 = '\0';
      local_48 = puVar11;
      local_40 = local_40 & 0xffffff00;
      local_2d0 = puVar15;
      FUN_00ca0840(uVar19,&local_48);
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      bVar5 = true;
      if ((local_2c8 != '\0') && (local_2d0 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_2b8 = '\0';
    local_2c0 = puVar15;
    (**(code **)(*(int64_t *)*arg1 + 0x398))();
    if ((local_2b8 != '\0') && (local_2c0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    local_1f0 = 0;
    local_1f8 = this_ptr[0xe];
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
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    if ((local_2a8 != '\0') && (local_2b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
    FUN_01d48370();
    local_298 = '\0';
    local_2a0 = puVar13;
    (**(code **)(*(int64_t *)*arg1 + 0x398))();
    if ((local_298 != '\0') && (local_2a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (in_R8B == '\0') {
      local_1d0 = 0;
      lVar14 = this_ptr[0x2a];
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
      lVar14 = this_ptr[0x29];
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
    auVar22 = insertps(auVar22,ZEXT416((uint)(g_024229f0 *
                                              ((float)local_378._0_4_ + (float)local_378._0_4_) +
                                             (local_228 - (float)local_378._0_4_))),0x10);
    auVar6._4_4_ = fStack_394;
    auVar6._0_4_ = local_398;
    auVar6._8_4_ = uStack_390;
    auVar6._12_4_ = uStack_38c;
    auVar2._4_4_ = local_378._4_4_;
    auVar2._0_4_ = ((float)local_378._0_4_ + (float)local_378._0_4_) * g_02394298;
    auVar2._8_4_ = local_378._8_4_;
    auVar2._12_4_ = local_378._12_4_;
    auVar21 = insertps(auVar6,auVar2,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(auVar22._0_8_,auVar21._0_8_);
    FUN_01d48390();
    FUN_01d48b40();
    (**(code **)(*this_ptr + 0x3a0))();
    local_f8 = local_48;
    local_f0 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_f0 = '\x01';
    FUN_01d488d0();
    if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((param_4 != g_02390124) || (NAN(param_4) || NAN(g_02390124))) {
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    }
    else if ((float)local_98._0_4_ < g_023b294c) {
      if (g_0239011c < (float)local_98._0_4_) {
        auVar31._4_12_ = local_98._4_12_;
        auVar31._0_4_ = ((float)local_98._0_4_ + g_02390118) * g_02394248 + g_02390124;
        FUN_01d48b40(auVar31._0_8_);
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    }
    auVar22 = roundss(ZEXT816(0),ZEXT416((uint)fStack_74),9);
    local_3e8 = 0;
    local_3e0 = 0;
    FUN_01ef3900(&local_3e8,auVar22._0_8_,1);
    FUN_00d50b20();
    if (!bVar9 && puVar11 != (void*)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01ef5e4b;
  case 0x10:
    auVar23._0_8_ = (**(code **)(*this_ptr + 0x548))();
    auVar23._8_8_ = extraout_XMM0_Qb_00;
    if (0.0 <= param_4) {
      FUN_01d48370();
      auVar27._0_8_ = FUN_01d48a00();
      auVar27._8_8_ = extraout_XMM0_Qb_03;
      auVar28._4_12_ = auVar27._4_12_;
      auVar28._0_4_ = (float)auVar27._0_8_ * g_0239011c;
      FUN_01d489d0(auVar28._0_8_);
      fVar18 = local_78;
      fVar43 = fStack_74;
      auVar29._0_8_ = (**(code **)(*this_ptr + 0x548))();
      auVar29._8_8_ = extraout_XMM0_Qb_04;
      if (fVar18 <= fVar43) {
        fVar34 = (float)((uint64_t)auVar29._0_8_ >> 0x20);
        uVar35 = (uint32_t)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
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
        lVar14 = this_ptr[0xf];
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
      lVar14 = this_ptr[0x10];
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
        lVar14 = *(int64_t *)*arg1;
      }
      else {
        lVar14 = *(int64_t *)*arg1;
      }
      (**(code **)(lVar14 + 0x3e0))();
      FUN_01d48390();
      if (fStack_74 < local_78) goto LAB_01ef45a9;
LAB_01ef4ce7:
      fVar18 = (float)((uint64_t)auVar23._0_8_ >> 0x20);
      auVar40._4_4_ = fVar18;
      auVar40._0_4_ = fVar18;
      uVar35 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
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
    if (((char)local_40 == '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x490))(in_R8B,0x11,in_R9D);
    local_178 = local_48;
    local_170 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_170 = '\x01';
    FUN_01d488d0();
    if ((local_170 != '\0') && (local_178 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_290 = puVar15;
    local_288 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_288 != '\0') && (local_290 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar15 != (void*)0x0) {
      FUN_00d50b20();
    }
    break;
  case 0x23:
    auVar37._8_4_ = uStack_70;
    auVar37._0_8_ = param_2;
    auVar37._12_4_ = uStack_6c;
    if (local_78 < fStack_74 * g_02390d2c) {
      return;
    }
    auVar25._0_8_ = (**(code **)(*this_ptr + 0x548))();
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
    FUN_00d05530(auVar26._0_8_,auVar22._0_8_,*(uint *)((int64_t)this_ptr + 0x194) ^ g_023945e0)
    ;
    fVar17 = auVar22._0_4_;
    local_350 = *arg1;
    local_348 = '\0';
    (**(code **)(*this_ptr + 0x6a0))(0,&local_350,fVar17);
    puVar15 = local_48;
    if (local_48 == (void*)0x0) {
      puVar15 = (void*)0x0;
      bVar5 = false;
    }
    else if ((char)local_40 == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
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
      if ((g_024229f4 < fVar17) && (cVar12 = (**(code **)(*this_ptr + 0x6b0))(), cVar12 != '\0')
         ) {
        (**(code **)(*this_ptr + 0x3a8))();
        local_138 = local_48;
        local_130 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_130 = '\x01';
        FUN_01d488d0();
        if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        fVar18 = g_02390d04 + extraout_XMM0_Da;
        roundss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),9);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        local_98._0_4_ = extraout_XMM0_Da + fVar17 + g_02390d00 + g_023b36a4;
        local_98._4_4_ = extraout_XMM0_Db_00;
        local_98._8_4_ = (int)extraout_XMM0_Qb_02;
        local_98._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
        auVar22 = ZEXT416((uint)(g_02390d00 + (float)local_98._0_4_));
        roundss(auVar22,auVar22,9);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        (**(code **)(*this_ptr + 0x398))();
        local_128 = local_48;
        local_120 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_120 = '\x01';
        FUN_01d488d0();
        if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        roundss(ZEXT416((uint)(fVar18 + g_02390124)),ZEXT416((uint)(fVar18 + g_02390124)),9);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        roundss(local_98,local_98,9);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
    }
    else {
      local_210 = 0;
      lVar14 = this_ptr[0x25];
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
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if ((local_338 != '\0') && (local_340 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40();
    cVar12 = (**(code **)(*this_ptr + 0x6b0))();
    if (cVar12 != '\0') {
      if (in_R8B == '\0') {
        local_250 = 0;
        lVar14 = this_ptr[0x10];
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
        lVar14 = this_ptr[0xf];
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
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      if ((local_328 != '\0') && (local_330 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_01ef5e4b;
  case 0x24:
    auVar22._8_4_ = uStack_70;
    auVar22._0_8_ = param_2;
    auVar22._12_4_ = uStack_6c;
    if (fStack_74 < g_02390d2c * local_78) {
      return;
    }
    auVar21._0_8_ = (**(code **)(*this_ptr + 0x548))();
    auVar21._8_8_ = extraout_XMM0_Qb;
    fVar43 = auVar22._4_4_;
    fVar18 = auVar22._0_4_;
    if (auVar22._0_4_ <= param_4 * fVar43) {
      fVar18 = param_4 * fVar43;
    }
    fVar34 = (float)((uint64_t)auVar21._0_8_ >> 0x20);
    auVar44._4_4_ = fVar34;
    auVar44._0_4_ = fVar34;
    uVar35 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
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
    FUN_00d05530(auVar22._0_8_,auVar36._0_8_,*(uint *)((int64_t)this_ptr + 0x194) ^ g_023945e0)
    ;
    local_320 = *arg1;
    local_318 = '\0';
    (**(code **)(*this_ptr + 0x6a0))(1,&local_320,auVar36._0_4_);
    puVar15 = local_48;
    if (local_48 == (void*)0x0) {
      puVar15 = (void*)0x0;
      bVar5 = false;
    }
    else if ((char)local_40 == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
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
      if ((g_024229f4 < (float)local_88._4_4_) &&
         (cVar12 = (**(code **)(*this_ptr + 0x6b0))(), cVar12 != '\0')) {
        (**(code **)(*this_ptr + 0x3a8))();
        local_118 = local_48;
        local_110 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_110 = '\x01';
        FUN_01d488d0();
        if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        auVar32._4_4_ = extraout_XMM0_Db;
        auVar32._0_4_ = extraout_XMM0_Db;
        auVar32._8_4_ = extraout_XMM0_Dd;
        auVar32._12_4_ = extraout_XMM0_Dd;
        auVar33._4_12_ = auVar32._4_12_;
        auVar33._0_4_ = extraout_XMM0_Db + g_02390d04;
        roundss(ZEXT816(0),auVar33,9);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        uStack_80._4_4_ = auVar36._12_4_;
        local_88._0_4_ = extraout_XMM0_Db + (float)local_88._4_4_ + g_02390d00 + g_023b36a4;
        local_88._4_4_ = extraout_XMM0_Db + (float)local_88._4_4_;
        uStack_80._0_4_ = extraout_XMM0_Dd + uStack_80._4_4_;
        uStack_80._4_4_ = extraout_XMM0_Dd + uStack_80._4_4_;
        roundss(ZEXT416(0),ZEXT416((uint)(g_02390d00 + (float)local_88._0_4_)),9);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        (**(code **)(*this_ptr + 0x398))();
        local_108 = local_48;
        local_100 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_100 = '\x01';
        FUN_01d488d0();
        if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        auVar42._0_4_ = auVar33._0_4_ + g_02390124;
        auVar42._4_12_ = auVar33._4_12_;
        roundss(auVar42,auVar42,9);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        roundss(ZEXT816(0),_local_88,9);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[0x25] + 0x370))();
      local_200 = 0;
      local_208 = this_ptr[0x25];
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
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if ((local_308 != '\0') && (local_310 != (void*)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x25] + 0x370))();
    }
    FUN_01d48b40();
    cVar12 = (**(code **)(*this_ptr + 0x6b0))();
    if (cVar12 != '\0') {
      if (in_R8B == '\0') {
        local_230 = 0;
        lVar14 = this_ptr[0x10];
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
        lVar14 = this_ptr[0xf];
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
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      if ((local_2f8 != '\0') && (local_300 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01ef5e4b:
    if ((bVar5) && (puVar15 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

