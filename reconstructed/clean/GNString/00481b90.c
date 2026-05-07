// Function: FUN_00481b90
// Address: 00481b90
// Size: 3553 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00481b90(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t **pplVar8;
  uint32_t uVar9;
  int64_t local_228;
  char local_220;
  int64_t *local_218;
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
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
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
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_000b6bf0();
  lVar3 = g_02708680;
  if (g_02708680 == 0) {
    lVar7 = this_ptr[0x17];
    if (lVar7 != 0) goto LAB_00481be0;
  }
  else {
    FUN_00d50b00();
    lVar7 = this_ptr[0x17];
    if (lVar7 == lVar3) {
      FUN_00d50b20();
    }
    else {
LAB_00481be0:
      this_ptr[0x17] = lVar3;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar3 = g_02708688;
  if (g_02708688 != 0) {
    FUN_00d50b00();
  }
  FUN_00de4060();
  plVar1 = local_38;
  if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  pplVar8 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar4 = FUN_00e8db60();
      pplVar8 = &local_38;
      if (cVar4 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  (**(code **)(*this_ptr + 0x5f0))();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_02726c20;
  if (g_02726c20 != 0) {
    FUN_00d50b00();
  }
  lVar7 = g_027025e8;
  if (g_027025e8 != 0) {
    FUN_00d50b00();
  }
  local_228 = lVar7;
  local_220 = '\x01';
  FUN_00d46300();
  local_48 = local_c8;
  local_40 = 0;
  if (local_c0 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = '\0';
  }
  local_40 = '\x01';
  FUN_00d14780(&local_48,&local_228);
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_218 = plVar1;
  local_210 = '\0';
  (**(code **)(*this_ptr + 0x5e0))();
  if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_208 = g_02708690;
  if (g_02708690 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026f6e70;
  local_200 = '\x01';
  if (g_026f6e70 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = lVar3;
  local_1f0 = '\x01';
  local_1e8 = 0;
  local_1e0 = '\0';
  FUN_000bf690(&local_1f8,&local_208,&local_1e8);
  plVar2 = (int64_t *)this_ptr[0x2c];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_00481f27;
      }
      FUN_00d50b00();
      plVar2 = (int64_t *)this_ptr[0x2c];
      this_ptr[0x2c] = (int64_t)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_00481f27:
      this_ptr[0x2c] = (int64_t)plVar6;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_1d8 = g_026d88e0;
  if (g_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026f6cf0;
  local_1d0 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = lVar3;
  local_1c0 = '\x01';
  local_1b8 = 0;
  local_1b0 = '\0';
  FUN_000bf690(&local_1c8,&local_1d8,&local_1b8);
  plVar2 = (int64_t *)this_ptr[0x2d];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_004820ce;
      }
      FUN_00d50b00();
      plVar2 = (int64_t *)this_ptr[0x2d];
      this_ptr[0x2d] = (int64_t)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_004820ce:
      this_ptr[0x2d] = (int64_t)plVar6;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_1a8 = g_02708698;
  if (g_02708698 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026fce70;
  local_1a0 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_198 = lVar3;
  local_190 = '\x01';
  local_188 = 0;
  local_180 = '\0';
  FUN_000bf690(&local_198,&local_1a8,&local_188);
  plVar2 = (int64_t *)this_ptr[0x31];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_00482243;
      }
      FUN_00d50b00();
      plVar2 = (int64_t *)this_ptr[0x31];
      this_ptr[0x31] = (int64_t)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_00482243:
      this_ptr[0x31] = (int64_t)plVar6;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_178 = g_027086a0;
  if (g_027086a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026f6d80;
  local_170 = '\x01';
  if (g_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_168 = lVar3;
  local_160 = '\x01';
  local_158 = 0;
  local_150 = '\0';
  uVar9 = FUN_000bf690(&local_168,&local_178,&local_158);
  plVar2 = (int64_t *)this_ptr[0x2e];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_004823ac;
      }
      uVar9 = FUN_00d50b00();
      plVar2 = (int64_t *)this_ptr[0x2e];
      this_ptr[0x2e] = (int64_t)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_004823ac:
      this_ptr[0x2e] = (int64_t)plVar6;
    }
    if (plVar2 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  lVar3 = g_027086a8;
  if (g_027086a8 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_148 = lVar3;
  local_140 = '\x01';
  local_138 = 0;
  local_130 = '\0';
  FUN_000bf780(uVar9,&local_138);
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_128 = g_027086b0;
  if (g_027086b0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027086b8;
  local_120 = '\x01';
  if (g_027086b8 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar3;
  local_110 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  FUN_000bf690(&local_118,&local_128,&local_108);
  plVar2 = (int64_t *)this_ptr[0x2f];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_00482594;
      }
      FUN_00d50b00();
      plVar2 = (int64_t *)this_ptr[0x2f];
      this_ptr[0x2f] = (int64_t)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_00482594:
      this_ptr[0x2f] = (int64_t)plVar6;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_f8 = g_027086c0;
  if (g_027086c0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_02702dc0;
  local_f0 = '\x01';
  if (g_02702dc0 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar3;
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_000bf690(&local_e8,&local_f8,&local_d8);
  plVar2 = (int64_t *)this_ptr[0x32];
  plVar6 = plVar2;
  if (plVar2 == local_38) goto LAB_00482742;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
      goto LAB_004826f7;
    }
    FUN_00d50b00();
    plVar2 = (int64_t *)this_ptr[0x32];
    this_ptr[0x32] = (int64_t)local_38;
    plVar6 = local_38;
  }
  else {
    local_30 = '\0';
    plVar6 = local_38;
LAB_004826f7:
    this_ptr[0x32] = (int64_t)plVar6;
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar6 = local_38;
  }
LAB_00482742:
  if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

