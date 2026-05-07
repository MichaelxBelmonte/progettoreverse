// ===================================================================
// MDNotificationObserver — Complete reconstructed pseudocode
// 18 functions
// ===================================================================

// Registered properties (14):
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


// ============================================================
// 000aa260
// ============================================================
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



// ============================================================
// 00302550
// ============================================================
// Function: FUN_00302550
// Address: 00302550
// Size: 2538 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "float"
//   "MDDocumentViewController"
//   "MDDocumentController"
//   "MDPropertyObserver"
//   "GNHeartbeatHandler"
//   "GNColor"
//   "MDTimeGridSetter"
//   "GNDoubleRange"
//   "_trackHeaderWidth"
//   "_startTimeRange"
//   "_destTimeRange"
//   "_animateZoomToTimeProgress"
//   "MDKeyModifierActionHelper"
//   "_updateViewPositionDisabled"
//   "MDMultiTrackViewDelegate"
//   "MDSelectionController"
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


void FUN_00302550(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_002fb9c0();
  this_ptr[0x45] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024e0b10;
  this_ptr[2] = &g_024e1580;
  this_ptr[0x27] = &g_024e15c0;
  this_ptr[0x45] = &g_024e16b8;
  this_ptr[0x46] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003032c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x47] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003033b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  puVar4 = this_ptr + 0x48;
  this_ptr[0x48] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003034a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver",param_3,param_4,puVar4);
  }
  this_ptr[0x49] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTimeGridSetter");
  }
  *(void*)(this_ptr + 0x4a) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4b] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentController");
  }
  this_ptr[0x4c] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentViewController");
  }
  this_ptr[0x4d] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  this_ptr[0x4e] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  this_ptr[0x4f] = 0;
  this_ptr[0x50] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x51] = 0;
  this_ptr[0x52] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x53) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00303a40();
  this_ptr[0x55] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303b20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x56] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303c10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x57] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303d00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x58] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303df0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  this_ptr[0x59] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303ee0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDKeyModifierActionHelper");
  }
  FUN_00303fd0();
  *(void*)(this_ptr + 0x5b) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x5c] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003040b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMultiTrackViewDelegate");
  }
  this_ptr[0x5d] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003041f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDSelectionController");
  }
  return;
}



// ============================================================
// 00d51ef0
// ============================================================
// Function: FUN_00d51ef0
// Address: 00d51ef0
// Size: 1374 bytes
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


void FUN_00d51ef0(void)

{
  char cVar1;
  uint64_t uVar2;
  char *pcVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_110;
  char local_108 [16];
  uint64_t local_f8;
  uint32_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x360))();
  FUN_00e86210();
  FUN_00c820a0();
  pcVar3 = local_38;
  if (local_108[0] != '\0') {
    pcVar3 = local_108;
  }
  local_38[0] = local_108[0];
  *pcVar3 = '\0';
  if ((local_108[0] != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (local_110 != 0) {
    local_108[0] = '\0';
    local_f0 = 0;
    local_f8 = 0;
    if (0 < *(int *)(local_110 + 0xc)) {
      lVar4 = 0;
      do {
        local_e8 = *(int64_t *)(*(int64_t *)(local_110 + 0x10) + lVar4 * 8);
        local_e0 = '\0';
        cVar1 = (**(code **)(*this_ptr + 0x2b8))();
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          uVar2 = FUN_00d77bd0();
          if ((int)((uint64_t)uVar2 >> 0x20) < 2) {
            if ((int)uVar2 == 0) {
              FUN_00d74120();
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00e31530();
                }
              }
              else {
                local_58 = '\0';
              }
              (**(code **)(*this_ptr + 0x88))();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00e31530();
                }
              }
              else {
                local_40 = '\0';
              }
              if (local_60 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 != 0) {
                if (local_48 == *arg1) {
                  local_b0 = '\0';
                  local_b8 = 0;
                  FUN_00d74120();
                  if (local_40 == '\0') {
                    if (local_48 != 0) {
                      FUN_00e31530();
                    }
                  }
                  else {
                    local_40 = '\0';
                  }
                  (**(code **)(*this_ptr + 0x80))();
                  if (local_48 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
          }
          else {
            FUN_00d74120();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_58 = '\0';
            }
            (**(code **)(*this_ptr + 0x88))();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              local_d8 = *arg1;
              local_d0 = '\0';
              cVar1 = FUN_00d23d70();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 != '\0') {
                local_c8 = *arg1;
                local_c0 = '\0';
                FUN_00d74120();
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00e31530();
                  }
                }
                else {
                  local_40 = '\0';
                }
                (**(code **)(*this_ptr + 200))();
                if (local_48 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
          }
        }
        lVar4 = lVar4 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,(int)lVar4);
      } while ((int)lVar4 < *(int *)(local_110 + 0xc));
    }
    FUN_00559a70();
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 000a9c40
// ============================================================
// Function: FUN_000a9c40
// Address: 000a9c40
// Size: 1176 bytes
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


void FUN_000a9c40(void)

{
  void*puVar1;
  int64_t lVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  FUN_004b3c80();
  FUN_004b4d40();
  lVar2 = g_026daff8;
  if (g_026daff8 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x88) = 1;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &g_024cd8a0;
  *(void*)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  (*g_024cd8b8)();
  puVar1 = *(void**)(this_ptr + 0xa0);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xa0) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &g_024cde70;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*g_024cde88)();
  puVar1 = *(void**)(this_ptr + 0xa8);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xa8) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xb0) == 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_000161a0();
    *puVar4 = &g_024f08f0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    (*g_024f0908)();
    puVar1 = *(void**)(this_ptr + 0xb0);
    if (puVar1 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xb0) = puVar4;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &g_02515cb0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*g_02515cc8)();
  puVar1 = *(void**)(this_ptr + 0x90);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x90) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &g_024f6e28;
  *(void*)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  (*g_024f6e40)();
  puVar1 = *(void**)(this_ptr + 0x98);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x98) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &g_0250a0d8;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*g_0250a0f0)();
  puVar1 = *(void**)(this_ptr + 0xb8);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xb8) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  iVar3 = FUN_000030b0();
  if (iVar3 != 2) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_000161a0();
    *puVar4 = &g_024c53f8;
    (*g_024c5410)();
    puVar1 = *(void**)(this_ptr + 200);
    if (puVar1 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 200) = puVar4;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b00();
  local_70 = g_02709de0;
  if (g_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026f6cf0;
  local_68 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf690(&local_60,&local_70,&local_50);
  lVar2 = *(int64_t *)(this_ptr + 0xc0);
  lVar5 = lVar2;
  if (lVar2 == local_30) goto LAB_000aa051;
  lVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar5 = 0;
      goto LAB_000aa006;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0xc0);
    *(int64_t *)(this_ptr + 0xc0) = local_30;
  }
  else {
    local_28 = '\0';
LAB_000aa006:
    *(int64_t *)(this_ptr + 0xc0) = lVar5;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = local_30;
  }
LAB_000aa051:
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_000aa260();
  return;
}



// ============================================================
// 00d529a0
// ============================================================
// Function: FUN_00d529a0
// Address: 00d529a0
// Size: 1099 bytes
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


void FUN_00d529a0(void)

{
  int64_t lVar1;
  char cVar2;
  int extraout_var;
  int64_t lVar3;
  char *pcVar4;
  code *arg1;
  int64_t *this_ptr;
  uint uVar5;
  int64_t local_f8;
  char local_f0 [16];
  uint64_t local_e0;
  uint32_t local_d8;
  int64_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x360))();
  FUN_00e86210();
  FUN_00c820a0();
  pcVar4 = local_38;
  if (local_f0[0] != '\0') {
    pcVar4 = local_f0;
  }
  local_38[0] = local_f0[0];
  *pcVar4 = '\0';
  if ((local_f0[0] != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (local_f8 != 0) {
    local_f0[0] = '\0';
    local_d8 = 0;
    local_e0 = 0;
    if (0 < *(int *)(local_f8 + 0xc)) {
      uVar5 = 0;
      local_d0 = local_f8;
      do {
        lVar1 = local_70;
        local_c8 = *(int64_t *)(*(int64_t *)(local_d0 + 0x10) + (uint64_t)uVar5 * 8);
        local_c0 = '\0';
        cVar2 = (**(code **)(*this_ptr + 0x2b8))();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_00d77bd0();
          if (extraout_var < 2) {
            FUN_00d74120();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            (**(code **)(*this_ptr + 0x88))();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_68 = '\0';
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != 0) {
              local_a8 = local_70;
              local_a0 = '\0';
              (*arg1)();
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d74120();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            (**(code **)(*this_ptr + 0x88))();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_68 = '\0';
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != 0) {
              local_68 = '\0';
              local_70 = 0;
              local_58 = -1;
              while( true ) {
                lVar3 = (int64_t)local_58;
                local_58 = local_58 + 1;
                if (*(int *)(lVar1 + 0xc) <= local_58) break;
                local_70 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
                local_b0 = '\0';
                local_b8 = local_70;
                (*arg1)();
                if ((local_b0 != '\0') && (local_b8 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00083b20();
              FUN_00d50b20();
            }
          }
        }
        uVar5 = uVar5 + 1;
        local_e0 = CONCAT44(local_e0._4_4_,uVar5);
      } while ((int)uVar5 < *(int *)(local_d0 + 0xc));
    }
    FUN_00559a70();
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 005e3630
// ============================================================
// Function: FUN_005e3630
// Address: 005e3630
// Size: 1325 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "GNLabel"
//   "GNSlider"
//   "GNPopUpButton"
//   "GNControlMatrix"
//   "GNSwitchButton"
//   "MUPerformance"
//   "_didChooseQuantization"
//   "GNComboBox"
//   "_customValue"
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


void FUN_005e3630(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_002730b0();
  *this_ptr = &g_02512e00;
  this_ptr[0x11] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNControlMatrix");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3eb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3fa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4090();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  puVar4 = this_ptr + 0x15;
  this_ptr[0x15] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4180();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPopUpButton");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformance");
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4630();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNComboBox");
  }
  *(void*)(this_ptr + 0x1c) = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00307e60
// ============================================================
// Function: FUN_00307e60
// Address: 00307e60
// Size: 1083 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "GNTextField"
//   "GNButton"
//   "MDPropertyObserver"
//   "MDVolumeSlider"
//   "MUMeterView"
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


void FUN_00307e60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00304cf0();
  *this_ptr = &g_024e90b8;
  this_ptr[0x16] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308500();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUMeterView");
  }
  puVar4 = this_ptr + 0x17;
  this_ptr[0x17] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003085f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField",param_3,param_4,puVar4);
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003086e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDVolumeSlider");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003087d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003088c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003089b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x1c] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308aa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x1d] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308b90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  FUN_00308c80();
  this_ptr[0x1f] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308d60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x20] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308e50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x21] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308f40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  return;
}



// ============================================================
// 005e5dc0
// ============================================================
// Function: FUN_005e5dc0
// Address: 005e5dc0
// Size: 965 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDToolbarGridCtrl"
//   "MDToolbarLeftConfigCtrl"
//   "MDToolbarTempoCtrl"
//   "MDToolbarTransportCtrl"
//   "MDToolbarRightConfigCtrl"
//   "MDToolbarActivityCtrl"
//   "MDToolbarScaleModeCtrl"
//   "MDToolbarVolumeCtrl"
//   "MDToolbarEdtionCtrl"
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


void FUN_005e5dc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_0026adc0();
  *this_ptr = &g_02515680;
  this_ptr[0x11] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e63f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTransportCtrl");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e64e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTempoCtrl");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e65d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarRightConfigCtrl");
  }
  puVar4 = this_ptr + 0x14;
  this_ptr[0x14] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e66c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarLeftConfigCtrl",param_3,param_4,puVar4);
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e67b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVolumeCtrl");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e68a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEdtionCtrl");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarActivityCtrl");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarGridCtrl");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarScaleModeCtrl");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  return;
}



// ============================================================
// 0026b600
// ============================================================
// Function: FUN_0026b600
// Address: 0026b600
// Size: 1063 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "MDToolbarVersionCtrl"
//   "MDToolbarQuantizeMacrosCtrl"
//   "MDToolbarUndoCtrl"
//   "MDToolbarToolCtrl"
//   "MDToolbarEditMixCtrl"
//   "MDToolbarEditModeCtrl"
//   "MDToolbarEditorViewCtrl"
//   "MDToolbarTrackMemoryUsageCtrl"
//   "_showsEditorBar"
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


void FUN_0026b600(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_0026adc0();
  *this_ptr = &g_024c8000;
  *(void*)(this_ptr + 0x11) = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bc70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditMixCtrl");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bd60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditModeCtrl");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026be50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarQuantizeMacrosCtrl");
  }
  puVar4 = this_ptr + 0x15;
  this_ptr[0x15] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bf40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarUndoCtrl",param_3,param_4,puVar4);
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c030();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarToolCtrl");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditorViewCtrl");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c210();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c300();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVersionCtrl");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c3f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTrackMemoryUsageCtrl");
  }
  return;
}



// ============================================================
// 00d53a00
// ============================================================
// Function: FUN_00d53a00
// Address: 00d53a00
// Size: 1007 bytes
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


void FUN_00d53a00(int64_t *param_1,char param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char *pcVar3;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_58;
  uint local_50;
  uint32_t local_4c;
  int64_t *local_48;
  uint local_40;
  uint64_t local_38;
  
  local_d8 = *param_1;
  local_d0 = '\0';
  uVar4 = (**(code **)(*this_ptr + 0xe8))(param_1,&local_d8);
  plVar2 = local_48;
  if ((char)local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      uVar4 = FUN_00e31530(uVar4,0);
      if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar4 = FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_40 & 0xffffff00;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)FUN_00d8b910();
    uVar4 = extraout_XMM0_Qa;
  }
  if (param_2 == 'I') {
    FUN_00e31530(uVar4,0);
    local_50 = 1;
    local_58 = &g_024cc6f0;
    local_4c = *(void*)arg1;
    uVar4 = FUN_00d3af80(&g_0277e4be,pcVar3,&local_58);
    plVar1 = local_48;
    if ((char)local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  else if (param_2 == 'd') {
    FUN_00e31530(uVar4,0);
    local_40 = 1;
    local_48 = (int64_t *)&g_024de5e0;
    local_38 = *arg1;
    uVar4 = FUN_00d3af80(&g_0277e4b8,pcVar3,&local_48);
    plVar1 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  else if (param_2 == 'f') {
    FUN_00e31530(uVar4,0);
    local_50 = 1;
    local_58 = &g_024d0b28;
    local_4c = *(void*)arg1;
    uVar4 = FUN_00d3af80(&g_0277e4bb,pcVar3,&local_58);
    plVar1 = local_48;
    if ((char)local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  local_c8 = *param_1;
  local_c0 = '\0';
  (**(code **)(*this_ptr + 0x260))(&local_c8,(int)param_2);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00d55d70
// ============================================================
// Function: FUN_00d55d70
// Address: 00d55d70
// Size: 723 bytes
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


void FUN_00d55d70(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar5 = FUN_00d8ca50();
  lVar2 = g_02774da0;
  if (cVar5 == '\0') {
    (**(code **)(*this_ptr + 0x80))();
  }
  else {
    if (g_02774da0 != 0) {
      FUN_00e31530();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    FUN_00d91000(1,&local_88);
    plVar3 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00e31530(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    plVar4 = local_48;
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00e31530();
    }
    FUN_00d23740();
    if (*(int *)((int64_t)plVar3 + 0xc) == 0) {
      if (this_ptr == (int64_t *)0x0) {
        this_ptr = (int64_t *)0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        FUN_00e31530();
      }
    }
    else {
      local_78 = plVar3;
      local_70 = '\0';
      (**(code **)(*this_ptr + 0xa0))();
      this_ptr = local_48;
      if (local_48 == (int64_t *)0x0) {
        bVar1 = false;
        this_ptr = (int64_t *)0x0;
      }
      else if (local_40[0] == '\0') {
        FUN_00e31530();
        bVar1 = true;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_68 = *arg1;
    local_60 = '\0';
    local_58 = plVar4;
    local_50 = '\0';
    (**(code **)(*this_ptr + 0x80))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005e4eb0
// ============================================================
// Function: FUN_005e4eb0
// Address: 005e4eb0
// Size: 968 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "_startTime"
//   "MUTimeJump"
//   "MUScrubbingTimeProgressor"
//   "MURenderer"
//   "_stopTime"
//   "double"
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


void FUN_005e4eb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_005da070();
  *this_ptr = &g_024e25a0;
  this_ptr[2] = &g_024e2a70;
  this_ptr[5] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5440();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeJump");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5530();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScrubbingTimeProgressor");
  }
  this_ptr[9] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5620();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  puVar4 = this_ptr + 10;
  this_ptr[10] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5710();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver",param_3,param_4,puVar4);
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5800();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e58f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  FUN_005e59e0();
  FUN_005e5ac0();
  return;
}



// ============================================================
// 00d54360
// ============================================================
// Function: FUN_00d54360
// Address: 00d54360
// Size: 612 bytes
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


void FUN_00d54360(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  void*puVar2;
  char cVar3;
  char *pcVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_88;
  char local_80;
  void*local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  local_c8 = *param_2;
  local_c0 = '\0';
  (**(code **)(*this_ptr + 0xe8))(param_1,&local_c8);
  puVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00e31530();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 == (void*)0x0) {
    pcVar4 = "";
  }
  else {
    pcVar4 = (char *)FUN_00d8b910();
  }
  FUN_00e31530();
  local_40 = *arg1;
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_40 != 0) {
    FUN_00e31530();
  }
  local_38 = '\x01';
  FUN_00d3af80(&g_026dc63a,pcVar4,&local_50);
  plVar1 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (int64_t *)0x0) && (FUN_00e31530(), local_80 != '\0')) &&
       (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar1 + 0x368))();
  if (cVar3 == '\0') {
    local_b8 = *arg1;
    local_b0 = '\0';
    local_a8 = *param_2;
    local_a0 = '\0';
    (**(code **)(*this_ptr + 0x1f0))(1,&local_a8,1);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00d51840
// ============================================================
// Function: FUN_00d51840
// Address: 00d51840
// Size: 807 bytes
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


void* FUN_00d51840(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t *arg1;
  void*this_ptr;
  int iVar5;
  int64_t local_a8;
  char local_a0;
  int64_t local_58;
  char local_50;
  int local_40;
  
  puVar3 = (void*)FUN_00e8fc40();
  *(void*)(puVar3 + 1) = 0;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x360))();
  FUN_00e86210();
  FUN_00c85c00();
  if (local_a0 == '\0') {
    if (local_a8 == 0) goto LAB_00d51b70;
    FUN_00e31530();
  }
  else if (local_a8 == 0) goto LAB_00d51b70;
  if (0 < *(int *)(local_a8 + 0xc)) {
    iVar5 = 0;
    do {
      lVar1 = local_58;
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        (**(code **)(*arg1 + 0x210))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00e31530();
            goto LAB_00d51b20;
          }
        }
        else if (local_58 != 0) {
LAB_00d51b20:
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*arg1 + 0x210))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00e31530();
            goto LAB_00d51a30;
          }
        }
        else if (local_58 != 0) {
LAB_00d51a30:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar4 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar1 + 0xc) <= local_40) break;
            local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
            FUN_00d21140();
          }
          FUN_00083b20();
          FUN_00d50b20();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_a8 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
LAB_00d51b70:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 00d50630
// ============================================================
// Function: FUN_00d50630
// Address: 00d50630
// Size: 722 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDPropertyObserver"
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


void FUN_00d50630(void)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  plVar4 = (int64_t *)*this_ptr;
  FUN_00e8b690();
  if (plVar4 == (int64_t *)0x0) {
LAB_00d50675:
    plVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar4 = this_ptr;
    if (cVar1 == '\0') goto LAB_00d50675;
  }
  if (*plVar4 != 0) {
    return;
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x360))();
  lVar3 = FUN_00e86210();
  if (lVar3 != 0) {
    FUN_00e31530();
  }
  FUN_00c81c60();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00d508e5;
    FUN_00e31530();
  }
  else if (local_80 == 0) goto LAB_00d508e5;
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar5 = 0;
    do {
      cVar1 = FUN_00d77e10();
      if (cVar1 != '\0') {
        FUN_00d77be0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          FUN_00d76b90();
          FUN_00d8b910();
          iVar2 = FUN_00e7ddf0();
          if ((iVar2 == 0) || (iVar2 = FUN_00e7ddf0(), iVar2 == 0)) {
            (**(code **)(*(int64_t *)*this_ptr + 0x210))();
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_80 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
LAB_00d508e5:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0050da50
// ============================================================
// Function: FUN_0050da50
// Address: 0050da50
// Size: 719 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "_showsReplaceRanges"
//   "_isEditingDetection"
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


void FUN_0050da50(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0050aad0();
  *this_ptr = &g_024e31c0;
  this_ptr[2] = &g_024e3c40;
  this_ptr[0x27] = &g_024e3c80;
  *(void*)((int64_t)this_ptr + 0x1ae) = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0050de10();
  this_ptr[0x37] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050def0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x38] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050dfe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x39] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050e0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  *(void*)(this_ptr + 0x3a) = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 000a8dd0
// ============================================================
// Function: FUN_000a8dd0
// Address: 000a8dd0
// Size: 577 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDInspectorViewController"
//   "_selectedIndex"
//   "_fixedCount"
//   "GNInt"
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


void FUN_000a8dd0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_000a5ee0();
  *this_ptr = &g_024e46f0;
  this_ptr[2] = &g_024e50e0;
  this_ptr[0x31] = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a9080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDInspectorViewController");
  }
  this_ptr[0x32] = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a9170();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00d549a0
// ============================================================
// Function: FUN_00d549a0
// Address: 00d549a0
// Size: 1804 bytes
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


void* FUN_00d549a0(void)

{
  int64_t *arg1;
  void*this_ptr;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  
  (**(code **)(*arg1 + 0x360))();
  FUN_00e86210();
  FUN_00c85dd0();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00e31530();
  }
  if (local_58 == (int64_t *)0x0) {
    (**(code **)(*arg1 + 0xf8))();
    (**(code **)(*arg1 + 0x1f8))();
    FUN_00c841b0();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00e31530();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00dd4dc0();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c85c30();
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_00e31530();
    (**(code **)(*local_58 + 0x368))();
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return this_ptr;
}

