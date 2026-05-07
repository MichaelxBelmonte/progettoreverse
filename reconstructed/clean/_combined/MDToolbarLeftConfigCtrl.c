// ===================================================================
// MDToolbarLeftConfigCtrl — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 00875310
// ============================================================
// Function: FUN_00875310
// Address: 00875310
// Size: 1568 bytes
// Class: MDToolbarLeftConfigCtrl

void FUN_00875310(void)

{
  void*puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  char cVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_30;
  char local_28;
  
  FUN_004b3c80();
  FUN_004b4d40();
  lVar4 = g_027403f0;
  if (g_027403f0 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_80 + 0x450))();
  uVar8 = g_02394298;
  if (cVar5 == '\0') {
    uVar8 = g_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_70 + 0x450))();
  uVar9 = g_02394298;
  if (cVar5 == '\0') {
    uVar9 = g_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_60 + 0x450))();
  uVar10 = g_02394298;
  if (cVar5 == '\0') {
    uVar10 = g_02390124;
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_50 + 0x450))();
  uVar11 = g_02394298;
  if (cVar5 == '\0') {
    uVar11 = g_02390124;
  }
  auVar13 = insertps(ZEXT416(uVar10),ZEXT416(uVar11),0x10);
  auVar12 = insertps(ZEXT416(uVar8),uVar9,0x10);
  (**(code **)(*local_30 + 0x940))(auVar12._0_8_,auVar13._0_8_);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024c5a38;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*g_024c5a50)();
  puVar1 = (void*)this_ptr[0x14];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x14] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024f5620;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  (*g_024f5638)();
  puVar1 = (void*)this_ptr[0x15];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x15] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024cc728;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  (*g_024cc740)();
  puVar1 = (void*)this_ptr[0x11];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x11] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024c6008;
  puVar6[0xe] = &g_024c65f8;
  puVar6[0xf] = &g_024c6640;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x20] = 0;
  puVar6[0x21] = 0;
  *(void*)((int64_t)puVar6 + 0x10c) = 0;
  *(void*)((int64_t)puVar6 + 0x114) = 0;
  puVar6[0x24] = 0;
  puVar6[0x25] = 0;
  *(void*)(puVar6 + 0x26) = 0;
  (*g_024c6020)();
  puVar1 = (void*)this_ptr[0x12];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x12] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024d1190;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  uVar3 = _UNK_02393728;
  puVar6[0x1d] = g_02393720;
  puVar6[0x1e] = uVar3;
  puVar6[0x1f] = 0;
  (*g_024d11a8)();
  puVar1 = (void*)this_ptr[0x19];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x19] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024cccf8;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*g_024ccd10)();
  puVar1 = (void*)this_ptr[0x13];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x13] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_02516a00;
  puVar6[0xe] = 0;
  (*g_02516a18)();
  puVar1 = (void*)this_ptr[0x16];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x16] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_000f58f0();
  (**(code **)(*plVar7 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0x17];
  if (plVar2 == plVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x17] = (int64_t)plVar7;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar6 = &g_024c3820;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  (*g_024c3838)();
  puVar1 = (void*)this_ptr[0x18];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x18] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x608))();
  return;
}



// ============================================================
// 00875ab0
// ============================================================
// Function: FUN_00875ab0
// Address: 00875ab0
// Size: 1729 bytes
// Class: MDToolbarLeftConfigCtrl

void FUN_00875ab0(void)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t lVar3;
  void*puVar4;
  void*puVar5;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  void*local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  byte local_41;
  int64_t local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  local_88 = puVar5;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  lVar1 = g_026e1810;
  local_50 = puVar5;
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar6 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  local_c8 = lVar1;
  local_c0 = '\0';
  FUN_000175c0(uVar6,&local_c8);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    local_41 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x14];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x15];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x11];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar5 = local_88;
  if ((lVar3 != 0 & local_41) != 0) {
    lVar1 = this_ptr[0x18];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = this_ptr[0x19];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x12];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x16];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x17];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x13];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  uVar6 = FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar6 = FUN_00d50b20();
  }
  uVar6 = FUN_004b43d0(uVar6,0);
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  local_b0 = '\0';
  local_b8 = puVar4;
  uVar6 = (**(code **)(*this_ptr + 0x618))(uVar6,&local_b8);
  if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  uVar6 = FUN_004b43d0(uVar6,1);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  local_a8 = local_50;
  local_a0 = '\0';
  uVar6 = (**(code **)(*this_ptr + 0x618))(uVar6,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  uVar6 = FUN_004b43d0(uVar6,2);
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  local_98 = puVar5;
  local_90 = '\0';
  (**(code **)(*this_ptr + 0x618))(uVar6,&local_98);
  if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5c0))();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}



// ============================================================
// 00874960
// ============================================================
// Function: FUN_00874960
// Address: 00874960
// Size: 1502 bytes
// Class: MDToolbarLeftConfigCtrl

void FUN_00874960(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t arg1;
  void*this_ptr;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
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
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  int64_t local_28;
  char local_20;
  
  lVar2 = g_026d8928;
  lVar1 = *param_2;
  if (lVar1 == *(int64_t *)(arg1 + 0x88)) {
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027403c8;
    if (g_027403c8 != 0) {
      FUN_00d50b00();
    }
    local_158 = lVar1;
    local_150 = '\x01';
    local_148 = 0;
    local_140 = '\0';
    FUN_00d31230(&local_148,&local_158);
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(int64_t *)(arg1 + 0x90)) {
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027062d8;
    local_138 = lVar2;
    local_130 = '\x01';
    if (g_027062d8 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar1;
    local_120 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    FUN_00d31230(&local_118,&local_128);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(int64_t *)(arg1 + 0x98)) {
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027403d0;
    local_108 = lVar2;
    local_100 = '\x01';
    if (g_027403d0 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar1;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_00d31230(&local_e8,&local_f8);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(int64_t *)(arg1 + 0xa0)) {
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027403d8;
    local_d8 = lVar2;
    local_d0 = '\x01';
    if (g_027403d8 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar1;
    local_c0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00d31230(&local_b8,&local_c8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(int64_t *)(arg1 + 0xa8)) {
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027403e0;
    local_a8 = lVar2;
    local_a0 = '\x01';
    if (g_027403e0 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar1;
    local_90 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    FUN_00d31230(&local_88,&local_98);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  else if ((lVar1 == *(int64_t *)(arg1 + 0xb0)) || (lVar1 == *(int64_t *)(arg1 + 0xb8)))
  {
    FUN_00d8ede0();
  }
  else if (lVar1 == *(int64_t *)(arg1 + 0xc0)) {
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027403e8;
    local_78 = lVar2;
    local_70 = '\x01';
    if (g_027403e8 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_58 = 0;
    local_50 = '\0';
    FUN_00d31230(&local_58,&local_68);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(int64_t *)(arg1 + 200)) {
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027062c0;
    local_48 = lVar2;
    local_40 = '\x01';
    if (g_027062c0 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar1;
    local_30 = '\x01';
    local_28 = 0;
    local_20 = '\0';
    FUN_00d31230(&local_28,&local_38);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  return;
}



// ============================================================
// 008737a0
// ============================================================
// Function: FUN_008737a0
// Address: 008737a0
// Size: 520 bytes
// Class: MDToolbarLeftConfigCtrl
// String references:
//   "MDToolbarLeftConfigCtrl"

void FUN_008737a0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_b8;
  
  if ((g_026d8698 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026d85e8 = FUN_00015ff0();
    g_026d85d0 = "MDToolbarLeftConfigCtrl";
    g_026d85d8 = 0x98;
    g_026d85e0 = FUN_00086de0;
    g_026d85f0 = 0;
    ram_00000000026d85f8 = 0;
    g_026d8600 = 0;
    ram_00000000026d8608 = 0;
    g_026d8610 = 0;
    ram_00000000026d8618 = 0;
    g_026d8620 = 0;
    ram_00000000026d8628 = 0;
    g_026d8630 = 0;
    ram_00000000026d8638 = 0;
    g_026d8640 = 0;
    ram_00000000026d8648 = 0;
    g_026d8650 = 0;
    ram_00000000026d8658 = 0;
    g_026d8660 = 0;
    ram_00000000026d8668 = 0;
    g_026d8670 = 0;
    ram_00000000026d8678 = 0;
    g_026d8680 = 0;
    _ram_00000000026d8688 = 0;
    g_026d8690 = 0;
    ___cxa_guard_release();
  }
  if (g_026d868b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0005aa20();
    FUN_00877180();
    FUN_00877460();
    FUN_00877740();
    FUN_00877a20();
    FUN_00877d00();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00085a50();
    FUN_00e87920(uVar2,0);
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}

