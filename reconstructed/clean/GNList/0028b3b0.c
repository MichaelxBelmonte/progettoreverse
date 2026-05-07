// Function: FUN_0028b3b0
// Address: 0028b3b0
// Size: 12359 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0028b3b0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t local_6d8;
  char local_6d0;
  int64_t local_6c8;
  char local_6c0;
  int64_t local_6a8;
  char local_6a0;
  int64_t *local_698;
  char local_690;
  int64_t local_688;
  char local_680;
  int64_t local_678;
  char local_670;
  int64_t local_668;
  char local_660;
  int64_t local_658;
  char local_650;
  int64_t local_648;
  char local_640;
  int64_t local_638;
  char local_630;
  int64_t local_628;
  char local_620;
  int64_t local_618;
  char local_610;
  int64_t local_608;
  char local_600;
  int64_t local_5f8;
  char local_5f0;
  int64_t local_5e8;
  char local_5e0;
  int64_t local_5d8;
  char local_5d0;
  int64_t local_5c8;
  char local_5c0;
  int64_t local_5b8;
  char local_5b0;
  int64_t local_5a8;
  char local_5a0;
  int64_t local_598;
  char local_590;
  int64_t local_588;
  char local_580;
  int64_t local_578;
  char local_570;
  int64_t local_568;
  char local_560;
  int64_t local_558;
  char local_550;
  int64_t local_548;
  char local_540;
  int64_t local_538;
  char local_530;
  int64_t local_528;
  char local_520;
  int64_t local_518;
  char local_510;
  int64_t local_508;
  char local_500;
  int64_t local_4f8;
  char local_4f0;
  int64_t local_4e8;
  char local_4e0;
  int64_t local_4d8;
  char local_4d0;
  int64_t local_4c8;
  char local_4c0;
  int64_t local_4b8;
  char local_4b0;
  int64_t local_4a8;
  char local_4a0;
  int64_t local_498;
  char local_490;
  int64_t local_488;
  char local_480;
  int64_t local_478;
  char local_470;
  int64_t local_468;
  char local_460;
  int64_t local_458;
  char local_450;
  int64_t local_448;
  char local_440;
  int64_t local_438;
  char local_430;
  int64_t local_428;
  char local_420;
  int64_t local_418;
  char local_410;
  int64_t local_408;
  char local_400;
  int64_t local_3f8;
  char local_3f0;
  int64_t local_3e8;
  char local_3e0;
  int64_t local_3d8;
  char local_3d0;
  int64_t local_3c8;
  char local_3c0;
  int64_t local_3b8;
  char local_3b0;
  int64_t local_3a8;
  char local_3a0;
  int64_t local_398;
  char local_390;
  int64_t local_388;
  char local_380;
  int64_t local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  int64_t local_358;
  char local_350;
  int64_t local_348;
  char local_340;
  int64_t local_338;
  char local_330;
  int64_t local_328;
  char local_320;
  int64_t local_318;
  char local_310;
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
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
  int64_t *local_198;
  int64_t local_190;
  int64_t local_188;
  int64_t local_180;
  int64_t local_178;
  int64_t local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  uint local_60;
  uint8_t local_5c;
  uint8_t local_5b;
  uint8_t local_5a;
  uint8_t local_59;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_01f2e810();
  FUN_00c8e690();
  plVar4 = local_68;
  if (((((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), (char)local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_190 = (int64_t)plVar4;
  FUN_00c8e690();
  plVar4 = local_68;
  if ((((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), (char)local_60 != '\0' && (local_68 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_178 = (int64_t)plVar4;
  GNFastFourierTransformer_create();
  plVar4 = local_68;
  if ((((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), (char)local_60 != '\0' && (local_68 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_180 = (int64_t)plVar4;
  FUN_00d30620();
  if ((local_6d0 != '\0') && (local_6d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_016ab300();
  if ((local_6c0 != '\0') && (local_6c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_0065f880();
  lVar1 = local_88;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_68 = (int64_t *)0x6874616264726962;
  local_60 = 0x6363612d;
  local_5c = 0x6f;
  local_5b = 0x73;
  local_5a = 0x74;
  local_59 = 0x2d;
  local_58 = CONCAT35(local_58._5_3_,0x72657765);
  FUN_00d91a70(0x72,1);
  local_e8 = local_98;
  local_e0 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_e0 = '\x01';
  FUN_003c19b0();
  local_d8 = (int64_t)local_68;
  local_d0 = 0;
  if ((char)local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  local_d0 = '\x01';
  uVar5 = FUN_00dbd080(&local_d8,&local_e8);
  lVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (uVar5 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb908;
  local_170 = lVar2;
  if (g_026fb908 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_188 = lVar1;
  local_6a8 = lVar2;
  local_6a0 = '\0';
  FUN_00e62c70(uVar5,&local_6a8);
  lVar1 = this_ptr[0x25];
  plVar4 = (int64_t *)lVar1;
  if ((int64_t *)lVar1 != local_68) {
    if ((char)local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
        goto LAB_0028c27f;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x25];
      this_ptr[0x25] = (int64_t)local_68;
      plVar4 = local_68;
    }
    else {
      local_60 = local_60 & 0xffffff00;
      plVar4 = local_68;
LAB_0028c27f:
      this_ptr[0x25] = (int64_t)plVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar4 = local_68;
    }
  }
  if (((char)local_60 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_6a0 != '\0') && (local_6a8 != 0)) {
    FUN_00d50b20();
  }
  local_198 = this_ptr + 0x21;
  (**(code **)(this_ptr[0x21] + 0x10))();
  FUN_00d50b00();
  local_150 = 0;
  local_158 = this_ptr[0x25];
  if (local_158 != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  local_140 = 0;
  (**(code **)(this_ptr[0x20] + 0x10))();
  FUN_00d50b00();
  local_140 = '\x01';
  local_698 = local_198;
  local_690 = '\0';
  local_148 = this_ptr + 0x20;
  FUN_00dfa970(&local_698,&local_148,0x18922,0x18);
  lVar1 = this_ptr[0x26];
  plVar4 = (int64_t *)lVar1;
  if ((int64_t *)lVar1 != local_68) {
    if ((char)local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
        goto LAB_0028c41a;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x26];
      this_ptr[0x26] = (int64_t)local_68;
      plVar4 = local_68;
    }
    else {
      local_60 = local_60 & 0xffffff00;
      plVar4 = local_68;
LAB_0028c41a:
      this_ptr[0x26] = (int64_t)plVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar4 = local_68;
    }
  }
  if (((char)local_60 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_690 != '\0') && (local_698 != (int64_t *)0x0)) {
    (**(code **)(*local_698 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
    (**(code **)(*local_148 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(0,0x20);
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(0,0x16);
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(1,0x17);
  FUN_00dfaf70();
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(0,0x19);
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(1,0x1a);
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(0,0x1b);
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(1,0x1c);
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(0,0x1d);
  (**(code **)(*(int64_t *)this_ptr[0x26] + 0x368))(1,0x1e);
  FUN_00d403d0();
  FUN_00d50b00();
  local_688 = g_026fb910;
  if (g_026fb910 != 0) {
    FUN_00d50b00();
  }
  local_680 = '\x01';
  local_678 = 0;
  local_670 = '\0';
  FUN_00d41430(&local_678,&local_688);
  if ((local_670 != '\0') && (local_678 != 0)) {
    FUN_00d50b20();
  }
  if ((local_680 != '\0') && (local_688 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d30620();
  plVar4 = local_68;
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_01f27fe0();
    lVar1 = *(int64_t *)((int64_t)local_68 + 0x128);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d30620();
    FUN_00d305f0();
    local_b8 = local_88;
    local_b0 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_b0 = '\x01';
    uVar5 = FUN_00d301b0();
    local_c8 = local_78;
    local_c0 = 0;
    local_668 = g_026fb918;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        uVar5 = FUN_00d50b00();
        local_668 = g_026fb918;
      }
    }
    else {
      local_70 = '\0';
    }
    local_c0 = '\x01';
    g_026fb918 = local_668;
    if (local_668 != 0) {
      local_c0 = '\x01';
      uVar5 = FUN_00d50b00();
    }
    local_660 = '\x01';
    FUN_00e62f40(uVar5,&local_668);
    if ((local_660 != '\0') && (local_668 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*this_ptr + 0x450))();
  lVar1 = g_026fb920;
  if (cVar3 == '\0') {
    FUN_01d89280();
  }
  else {
    if (g_026fb920 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_026fb928;
    local_658 = lVar1;
    local_650 = '\x01';
    if (g_026fb928 != 0) {
      FUN_00d50b00();
    }
    local_648 = lVar2;
    local_640 = '\x01';
    FUN_00e7e120();
    if ((local_640 != '\0') && (local_648 != 0)) {
      FUN_00d50b20();
    }
    if ((local_650 != '\0') && (local_658 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0027ee00();
  (**(code **)(*this_ptr + 0x468))();
  lVar1 = g_026f6fa0;
  if (g_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar5 = FUN_0071a120();
  if (((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  local_78 = lVar1;
  local_70 = '\0';
  FUN_000175c0(uVar5,&local_78);
  plVar4 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    local_60 = local_60 & 0xffffff00;
    local_68 = plVar4;
    FUN_00c70bc0();
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_0147f470();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01f28c30();
  local_a8 = (int64_t)local_68;
  local_a0 = 0;
  if ((char)local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  local_a0 = '\x01';
  FUN_00281c60();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0027ad60();
  plVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01f85d30();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x730))();
  FUN_016ae600();
  lVar1 = g_026fb930;
  if (g_026fb930 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar5 = FUN_0071a120();
  if (((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  local_78 = lVar1;
  local_70 = '\0';
  FUN_000175c0(uVar5,&local_78);
  plVar4 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    local_60 = local_60 & 0xffffff00;
    local_68 = plVar4;
    FUN_00c70bc0();
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_016ae610();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_0010d750();
  FUN_01a138c0();
  FUN_01f47d40();
  FUN_01dafa80();
  uVar5 = FUN_01dafa90();
  local_638 = g_026fb938;
  if (g_026fb938 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar1 = g_026fb940;
  local_630 = '\x01';
  if (g_026fb940 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_628 = lVar1;
  local_620 = '\x01';
  local_618 = 0;
  local_610 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_618);
  if ((local_610 != '\0') && (local_618 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_620 != '\0') && (local_628 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_630 != '\0') && (local_638 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb948;
  if (g_026fb948 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_027e3c00;
  local_608 = lVar1;
  local_600 = '\x01';
  if (g_027e3c00 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_5f8 = lVar2;
  local_5f0 = '\x01';
  local_5e8 = 0;
  local_5e0 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_5e8);
  if ((local_5e0 != '\0') && (local_5e8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_5f0 != '\0') && (local_5f8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_600 != '\0') && (local_608 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb950;
  if (g_026fb950 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_0270b8a0;
  local_5d8 = lVar1;
  local_5d0 = '\x01';
  if (g_0270b8a0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_5c8 = lVar2;
  local_5c0 = '\x01';
  local_5b8 = 0;
  local_5b0 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_5b8);
  if ((local_5b0 != '\0') && (local_5b8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_5c0 != '\0') && (local_5c8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_5d0 != '\0') && (local_5d8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb958;
  if (g_026fb958 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb960;
  local_5a8 = lVar1;
  local_5a0 = '\x01';
  if (g_026fb960 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_598 = lVar2;
  local_590 = '\x01';
  local_588 = 0;
  local_580 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_588);
  if ((local_580 != '\0') && (local_588 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_590 != '\0') && (local_598 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_5a0 != '\0') && (local_5a8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb968;
  if (g_026fb968 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb970;
  local_578 = lVar1;
  local_570 = '\x01';
  if (g_026fb970 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_568 = lVar2;
  local_560 = '\x01';
  local_558 = 0;
  local_550 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_558);
  if ((local_550 != '\0') && (local_558 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_560 != '\0') && (local_568 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_570 != '\0') && (local_578 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb978;
  if (g_026fb978 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_02726cd0;
  local_548 = lVar1;
  local_540 = '\x01';
  if (g_02726cd0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_538 = lVar2;
  local_530 = '\x01';
  local_528 = 0;
  local_520 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_528);
  if ((local_520 != '\0') && (local_528 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_530 != '\0') && (local_538 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_540 != '\0') && (local_548 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb980;
  if (g_026fb980 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb988;
  local_518 = lVar1;
  local_510 = '\x01';
  if (g_026fb988 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_508 = lVar2;
  local_500 = '\x01';
  local_4f8 = 0;
  local_4f0 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_4f8);
  if ((local_4f0 != '\0') && (local_4f8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_500 != '\0') && (local_508 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_510 != '\0') && (local_518 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb990;
  if (g_026fb990 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_02765370;
  local_4e8 = lVar1;
  local_4e0 = '\x01';
  if (g_02765370 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_4d8 = lVar2;
  local_4d0 = '\x01';
  local_4c8 = 0;
  local_4c0 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_4c8);
  if ((local_4c0 != '\0') && (local_4c8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_4d0 != '\0') && (local_4d8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_4e0 != '\0') && (local_4e8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb998;
  if (g_026fb998 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb9a0;
  local_4b8 = lVar1;
  local_4b0 = '\x01';
  if (g_026fb9a0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_4a8 = lVar2;
  local_4a0 = '\x01';
  local_498 = 0;
  local_490 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_498);
  if ((local_490 != '\0') && (local_498 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_4a0 != '\0') && (local_4a8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_4b0 != '\0') && (local_4b8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb9a8;
  if (g_026fb9a8 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026e3e40;
  local_488 = lVar1;
  local_480 = '\x01';
  if (g_026e3e40 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_478 = lVar2;
  local_470 = '\x01';
  local_468 = 0;
  local_460 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_468);
  if ((local_460 != '\0') && (local_468 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_470 != '\0') && (local_478 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_480 != '\0') && (local_488 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb9b0;
  if (g_026fb9b0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb9b8;
  local_458 = lVar1;
  local_450 = '\x01';
  if (g_026fb9b8 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_448 = lVar2;
  local_440 = '\x01';
  local_438 = 0;
  local_430 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_438);
  if ((local_430 != '\0') && (local_438 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_440 != '\0') && (local_448 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_450 != '\0') && (local_458 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb9c0;
  if (g_026fb9c0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb9c8;
  local_428 = lVar1;
  local_420 = '\x01';
  if (g_026fb9c8 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_418 = lVar2;
  local_410 = '\x01';
  local_408 = 0;
  local_400 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_408);
  if ((local_400 != '\0') && (local_408 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_410 != '\0') && (local_418 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_420 != '\0') && (local_428 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb9d0;
  if (g_026fb9d0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb9d8;
  local_3f8 = lVar1;
  local_3f0 = '\x01';
  if (g_026fb9d8 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_3e8 = lVar2;
  local_3e0 = '\x01';
  local_3d8 = 0;
  local_3d0 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_3d8);
  if ((local_3d0 != '\0') && (local_3d8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_3e0 != '\0') && (local_3e8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_3f0 != '\0') && (local_3f8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb9e0;
  if (g_026fb9e0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb9e8;
  local_3c8 = lVar1;
  local_3c0 = '\x01';
  if (g_026fb9e8 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_3b8 = lVar2;
  local_3b0 = '\x01';
  local_3a8 = 0;
  local_3a0 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_3a8);
  if ((local_3a0 != '\0') && (local_3a8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_3b0 != '\0') && (local_3b8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_3c0 != '\0') && (local_3c8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fb9f0;
  if (g_026fb9f0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fb9f8;
  local_398 = lVar1;
  local_390 = '\x01';
  if (g_026fb9f8 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_388 = lVar2;
  local_380 = '\x01';
  local_378 = 0;
  local_370 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_378);
  if ((local_370 != '\0') && (local_378 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_380 != '\0') && (local_388 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_390 != '\0') && (local_398 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fba00;
  if (g_026fba00 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fba08;
  local_368 = lVar1;
  local_360 = '\x01';
  if (g_026fba08 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_358 = lVar2;
  local_350 = '\x01';
  local_348 = 0;
  local_340 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_348);
  if ((local_340 != '\0') && (local_348 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_350 != '\0') && (local_358 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_360 != '\0') && (local_368 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fba10;
  if (g_026fba10 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fba18;
  local_338 = lVar1;
  local_330 = '\x01';
  if (g_026fba18 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_328 = lVar2;
  local_320 = '\x01';
  local_318 = 0;
  local_310 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_318);
  if ((local_310 != '\0') && (local_318 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_320 != '\0') && (local_328 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_330 != '\0') && (local_338 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fba20;
  if (g_026fba20 != 0) {
    uVar5 = FUN_00d50b00();
    local_308 = g_026fba20;
    local_168 = lVar1;
    local_160 = '\x01';
    if (g_026fba20 != 0) {
      uVar5 = FUN_00d50b00();
      goto LAB_0028da2d;
    }
  }
  local_160 = '\x01';
  local_168 = lVar1;
  local_308 = 0;
LAB_0028da2d:
  local_300 = '\x01';
  local_2f8 = 0;
  local_2f0 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_2f8);
  if ((local_2f0 != '\0') && (local_2f8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_300 != '\0') && (local_308 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fba28;
  if (g_026fba28 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fba30;
  local_2e8 = lVar1;
  local_2e0 = '\x01';
  if (g_026fba30 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_2d8 = lVar2;
  local_2d0 = '\x01';
  local_2c8 = 0;
  local_2c0 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_2c8);
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_2e0 != '\0') && (local_2e8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fba38;
  if (g_026fba38 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fba40;
  local_2b8 = lVar1;
  local_2b0 = '\x01';
  if (g_026fba40 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_2a8 = lVar2;
  local_2a0 = '\x01';
  local_298 = 0;
  local_290 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_298);
  if ((local_290 != '\0') && (local_298 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fba48;
  if (g_026fba48 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fba50;
  local_288 = lVar1;
  local_280 = '\x01';
  if (g_026fba50 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_278 = lVar2;
  local_270 = '\x01';
  local_268 = 0;
  local_260 = '\0';
  uVar5 = FUN_01f01890(uVar5,&local_268);
  if ((local_260 != '\0') && (local_268 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026fba58;
  if (g_026fba58 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar2 = g_026fba60;
  local_258 = lVar1;
  local_250 = '\x01';
  if (g_026fba60 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_248 = lVar2;
  local_240 = '\x01';
  local_238 = 0;
  local_230 = '\0';
  FUN_01f01890(uVar5,&local_238);
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fba68;
  if (g_026fba68 != 0) {
    FUN_00d50b00();
  }
  local_228 = lVar1;
  local_220 = '\x01';
  FUN_01f03370();
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027259d0;
  if (g_027259d0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fba70;
  local_218 = lVar1;
  local_210 = '\x01';
  if (g_026fba70 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fba78;
  if (g_026fba78 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_88 = lVar1;
  FUN_00083ea0(2,&local_88);
  FUN_000b6620();
  local_68 = (int64_t *)&g_0253d630;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fba80;
  if (g_026fba80 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fba88;
  local_208 = lVar1;
  local_200 = '\x01';
  if (g_026fba88 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fba90;
  if (g_026fba90 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_88 = lVar1;
  FUN_00083ea0(2,&local_88);
  FUN_000b6620();
  local_68 = (int64_t *)&g_0253d630;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fce40;
  if (g_026fce40 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fba98;
  local_1f8 = lVar1;
  local_1f0 = '\x01';
  if (g_026fba98 == 0) {
    local_60 = 1;
    local_68 = &g_024c5048;
  }
  else {
    FUN_00d50b00();
    local_60 = 1;
    local_68 = &g_024c5048;
    local_50 = 0;
    FUN_00d50b00();
  }
  local_58 = lVar2;
  local_50 = '\x01';
  FUN_000b6620();
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_68 + 0x450))();
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fbaa0;
  if (cVar3 != '\0') {
    if (g_026fbaa0 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_026fbaa8;
    local_1e8 = lVar1;
    local_1e0 = '\x01';
    if (g_026fbaa8 == 0) {
      local_60 = 1;
      local_68 = &g_024c5048;
    }
    else {
      FUN_00d50b00();
      local_60 = 1;
      local_68 = &g_024c5048;
      local_50 = 0;
      FUN_00d50b00();
    }
    local_58 = lVar2;
    local_50 = '\x01';
    FUN_000b6620();
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_1e0 != '\0') && (local_1e8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x718))();
  FUN_017bf740();
  FUN_00d216c0();
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017bfd00();
  FUN_00290a80();
  FUN_00d403d0();
  FUN_00d50b00();
  local_1d8 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = '\x01';
  local_1c8 = 0;
  local_1c0 = '\0';
  FUN_00d41430(&local_1c8,&local_1d8);
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176640();
  FUN_00d403d0();
  FUN_00d50b00();
  local_1b8 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = '\x01';
  local_1a8 = 0;
  local_1a0 = '\0';
  FUN_00d41430(&local_1a8,&local_1b8);
  lVar1 = local_190;
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_198 + 0x10))();
  FUN_00d50b20();
  if (local_188 != 0) {
    FUN_00d50b20();
  }
  if (local_170 != 0) {
    FUN_00d50b20();
  }
  if (local_180 != 0) {
    FUN_00d50b20();
  }
  if (local_178 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

