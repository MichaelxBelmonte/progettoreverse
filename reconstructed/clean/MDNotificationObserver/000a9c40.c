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

