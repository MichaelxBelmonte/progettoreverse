// Function: FUN_01f29460
// Address: 01f29460
// Size: 981 bytes
// Class: GNLocaleDataProvider
// === GNLocaleDataProvider properties ===
//   GNInt           _nWaitCursor
//   GNInt           _undoActionCountOfUndoMenu
//   GNInt           _redoActionCountOfUndoMenu
//   bool            _isKeyboardNavigationEnabled
//   GNInt           _lastModalResult
//   bool            _showFullPathsInResentMenu
//   bool            _terminatesOnLastDocumentClosed
//   bool            _areDocumentsUnstable
//   GNInt           _isRunningDialog
//   GNInt           _isRunningSystemDialog
//   bool            _provokeExceptionWithinNextEvent
//   bool            _didReceiveKeyEvent
//   bool            _enableAlternativeResourceFolder
//   bool            _windowsOnlyShowMenuOnStartUp
//   bool            _windowsOnlyCreatePreferencesMenuItemIfNeeded
//   bool            _windowsOnlyCreateInfoMenuItemIfNeeded
//   bool            _carbonOnlyPreferencesMenuItemEnabled


void FUN_01f29460(void)

{
  int64_t *plVar1;
  void*puVar2;
  void*puVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
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
  int64_t local_38;
  char local_30;
  
  FUN_00d50100();
  *(void*)((int64_t)this_ptr + 0xfa) = 0x1010101;
  *(void*)(this_ptr + 0x1b) = 0;
  iVar5 = FUN_000030b0();
  *(bool *)((int64_t)this_ptr + 0xca) = iVar5 == 0;
  this_ptr[0x1a] = 0;
  if (g_028ba7f0 == (int64_t *)0x0) {
    cVar4 = (**(code **)(*this_ptr + 0x450))();
    puVar3 = PTR__objc_msgSend_024a9998;
    puVar2 = PTR__NSApp_0249c0f8;
    if (cVar4 == '\0') {
      (*PTR__objc_msgSend_024a9998)();
    }
    else {
      (*PTR__objc_msgSend_024a9998)();
      (*puVar3)(*(void*)puVar2,&cf_MainMenu,0);
      (*puVar3)();
    }
    _objc_alloc();
    lVar6 = (*PTR__objc_msgSend_024a9998)();
    this_ptr[0x1a] = lVar6;
    plVar1 = g_028ba7f0;
    if ((g_028ba7f0 != this_ptr) &&
       (FUN_00d50b00(), g_028ba7f0 = this_ptr, plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (g_028ba7f8 == '\0') {
      g_028ba7f8 = '\x01';
      FUN_00e8cb90();
    }
    FUN_00e82980();
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar7 + 0x18))();
    plVar1 = (int64_t *)this_ptr[8];
    if (plVar1 == plVar7) {
      FUN_00d50b20();
    }
    else {
      this_ptr[8] = (int64_t)plVar7;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_c8 = g_027fff38;
    if (g_027fff38 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00d41430(&local_b8,&local_c8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_a8 = g_027fff40;
    if (g_027fff40 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    FUN_00d41430(&local_98,&local_a8);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_88 = g_027fff48;
    if (g_027fff48 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    FUN_00d41430(&local_78,&local_88);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

