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

