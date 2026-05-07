// Function: FUN_000aa260
// Address: 000aa260
// Size: 1762 bytes
// Class: MDNotificationObserver
// === MDNotificationObserver properties ===
//   bool            _didChooseQuantization
//   bool            _customValue
//   bool            _showsReplaceRanges
//   bool            _isEditingDetection
//   float           _trackHeaderWidth
//   GNDoubleRange   _startTimeRange
//   GNDoubleRange   _destTimeRange
//   float           _animateZoomToTimeProgress
//   bool            _updateViewPositionDisabled
//   GNInt           _selectedIndex
//   GNInt           _fixedCount
//   bool            _showsEditorBar
//   double          _stopTime
//   double          _startTime


void FUN_000aa260(void)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t lVar3;
  byte bVar4;
  void*puVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  double dVar8;
  uint64_t uVar9;
  void*local_c8;
  uint8_t local_c0;
  void*local_b8;
  uint8_t local_b0;
  void*local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  char local_60;
  void*local_58;
  void*local_50;
  void*local_48;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar2)();
  local_58 = puVar6;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar2)();
  lVar1 = this_ptr[0x1a];
  local_50 = puVar6;
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x13];
  if ((char)this_ptr[0x11] == '\0') {
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
    lVar1 = this_ptr[0x19];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x17];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    local_48 = puVar5;
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
    lVar1 = this_ptr[0x19];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = g_026db000;
    if (g_026db000 != 0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar7 = (uint64_t)(dVar8 * g_023907c0);
    dVar8 = dVar8 * g_023907c0 - g_023907c8;
    uVar9 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar9 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    bVar4 = (byte)(((int64_t)dVar8 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
    local_68 = lVar1;
    local_60 = '\0';
    FUN_000175c0(uVar9,&local_68);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_38 = '\0';
      local_40 = lVar3;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar5 = local_48;
    if ((lVar3 != 0 & bVar4) != 0) {
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
    }
    lVar1 = this_ptr[0x17];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  uVar9 = FUN_004b43d0(uVar9,0);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = 1;
  local_98 = lVar1;
  local_c0 = 0;
  local_c8 = puVar5;
  uVar9 = FUN_000aaf60(uVar9,&local_c8);
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar9 = FUN_004b43d0(uVar9,2);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = 1;
  local_88 = lVar1;
  local_b8 = local_58;
  local_b0 = 0;
  uVar9 = FUN_000aaf60(uVar9,&local_b8);
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar9 = FUN_004b43d0(uVar9,1);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = 1;
  local_78 = lVar1;
  local_a8 = local_50;
  local_a0 = 0;
  FUN_000aaf60(uVar9,&local_a8);
  if (lVar1 != 0) {
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

