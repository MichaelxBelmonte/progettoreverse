// ===================================================================
// MDToolbarPluginTransferCtrl — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 002d8a30
// ============================================================
// Function: FUN_002d8a30
// Address: 002d8a30
// Size: 1627 bytes
// Class: MDToolbarPluginTransferCtrl

void FUN_002d8a30(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  FUN_00d50100();
  *(void*)(this_ptr + 0xc0) = 0xffffffff;
  FUN_00d50b00();
  local_160 = g_026df590;
  if (g_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026d88c8;
  local_158 = '\x01';
  if (g_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar1;
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_000bf690(&local_150,&local_160,&local_140);
  lVar1 = *(int64_t *)(this_ptr + 0x80);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_002d8afe;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x80);
      *(int64_t *)(this_ptr + 0x80) = local_30;
    }
    else {
      local_28 = '\0';
LAB_002d8afe:
      *(int64_t *)(this_ptr + 0x80) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_026f6d00;
  if (g_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar1;
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_000bf780();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026d88d0;
  if (g_026d88d0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar1;
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_000bf780();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fc738;
  if (g_026fc738 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_000bf780();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fdeb8;
  if (g_026fdeb8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_000bf780();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_b0 = g_026d88e0;
  if (g_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6cf0;
  local_a8 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_000bf690(&local_a0,&local_b0,&local_90);
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_002d8e78;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0xb8);
      *(int64_t *)(this_ptr + 0xb8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_002d8e78:
      *(int64_t *)(this_ptr + 0xb8) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_80 = g_026f6d88;
  if (g_026f6d88 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6d90;
  local_78 = '\x01';
  if (g_026f6d90 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_000bf690(&local_70,&local_80,&local_60);
  lVar1 = *(int64_t *)(this_ptr + 0x88);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_002d9008;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_002d8fbd;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x88);
    *(int64_t *)(this_ptr + 0x88) = local_30;
  }
  else {
    local_28 = '\0';
LAB_002d8fbd:
    *(int64_t *)(this_ptr + 0x88) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_002d9008:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002d84b0
// ============================================================
// Function: FUN_002d84b0
// Address: 002d84b0
// Size: 1367 bytes
// Class: MDToolbarPluginTransferCtrl
// String references:
//   "onUpdatePlaybackController"
//   "onFeatureSetChanged"
//   "onCompareModeChanged"
//   "handleToggleAraCompare"
//   "MDToolbarPluginTransferCtrl"

void FUN_002d84b0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02806710 = "handleToggleAraCompare";
      g_02806718 = &g_026fdee0;
      g_02806720 = 0;
      g_02806728 = &g_026fdfb0;
      g_02806730 = FUN_002dbda0;
      g_02806738 = FUN_002da720;
      g_02806740 = 0;
      ram_0000000002806748 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02806758 = "onUpdatePlaybackController";
      g_02806760 = &g_026fdee0;
      g_02806768 = 0;
      g_02806770 = &g_026fdfb4;
      g_02806778 = FUN_002dbe30;
      g_02806780 = FUN_002d9540;
      g_02806788 = 0;
      ram_0000000002806790 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028067a0 = "onFeatureSetChanged";
      g_028067a8 = &g_026fdee0;
      g_028067b0 = 0;
      g_028067b8 = &g_026fdfb4;
      g_028067c0 = FUN_002dbe30;
      g_028067c8 = FUN_002dbb00;
      g_028067d0 = 0;
      ram_00000000028067d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028067e8 = "onCompareModeChanged";
      g_028067f0 = &g_026fdee0;
      g_028067f8 = 0;
      g_02806800 = &g_026fdfb4;
      g_02806808 = FUN_002dbe30;
      g_02806810 = FUN_002dbb20;
      g_02806818 = 0;
      ram_0000000002806820 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00469210
// ============================================================
// Function: FUN_00469210
// Address: 00469210
// Size: 1169 bytes
// Class: MDToolbarPluginTransferCtrl
// String references:
//   "MDToolbarPluginTransferCtrl"

void FUN_00469210(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_024df420;
  FUN_004697e0();
  FUN_00469ad0();
  FUN_00469dc0();
  FUN_0046a0b0();
  FUN_0046a3a0();
  FUN_0046a690();
  FUN_0046a980();
  FUN_0046ac70();
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fdf9b == '\0') {
    FUN_0046af60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fdf9b == '\0') {
    FUN_0046b0d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fdf9b == '\0') {
    FUN_0046b240();
    FUN_00e87980();
  }
  FUN_0046b3b0();
  *(void*)(this_ptr + 0x18) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fdf9b == '\0') {
    FUN_0046b6a0();
    FUN_00e87980();
  }
  return;
}

