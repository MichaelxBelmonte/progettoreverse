// ===================================================================
// GNLocaleDataProvider — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (17):
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


// ============================================================
// 000067e0
// ============================================================
// Function: FUN_000067e0
// Address: 000067e0
// Size: 4919 bytes
// Class: GNLocaleDataProvider
// String references:
//   "bool"
//   "GNLocaleDataProvider"
//   "GNWindow"
//   "GNUni"
//   "_nWaitCursor"
//   "GNUndoStackFrame"
//   "_undoActionCountOfUndoMenu"
//   "_redoActionCountOfUndoMenu"
//   "GNDocumentController"
//   "GNMenu"
//   "GNInfoController"
//   "GNViewController"
//   "GNFilePath"
//   "GNMenuItem"
//   "_isKeyboardNavigationEnabled"
//   "_lastModalResult"
//   "GNDisplayGroup"
//   "GNApplicationObjectProvider"
//   "GNHeartbeatHandlerRegistration"
//   "GNTimer"
//   ... +16 more
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


void FUN_000067e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t arg1;
  void*this_ptr;
  void*puVar4;
  
  FUN_00006550();
  this_ptr[2] = &g_024bfc90;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026b98e8;
  this_ptr[2] = &g_026ba010;
  this_ptr[3] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000081d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  *(void*)(this_ptr + 4) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000082c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNUndoStackFrame");
  }
  *(void*)(this_ptr + 6) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000083b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDocumentController");
  }
  this_ptr[8] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000084a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMenu");
  }
  puVar4 = this_ptr + 9;
  this_ptr[9] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow",param_3,param_4,puVar4);
  }
  this_ptr[10] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNInfoController");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008a40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMenuItem");
  }
  *(void*)(this_ptr + 0xf) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008b30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008d10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNApplicationObjectProvider");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008e00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHeartbeatHandlerRegistration");
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLock");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000090d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTimer");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000091c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000092b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc9) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xca) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1b) = *(void*)(arg1 + 0xd8);
  this_ptr[0x1a] = *(void*)(arg1 + 0xd0);
  *(void*)((int64_t)this_ptr + 0xdc) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1c) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_000093a0();
  this_ptr[0x1e] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00009480();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMessagePort");
  }
  *(void*)(this_ptr + 0x1f) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf9) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfa) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfb) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfc) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfd) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01f29460
// ============================================================
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

