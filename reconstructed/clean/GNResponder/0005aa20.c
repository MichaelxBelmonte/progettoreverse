// Function: FUN_0005aa20
// Address: 0005aa20
// Size: 1154 bytes
// Class: GNResponder
// String references:
//   "GNResponder"
//   "bool"
//   "GNWindow"
//   "GNUni"
//   "GNDocumentController"
//   "GNRootView"
//   "GNObject"
//   "GNLocalizer"
//   "GNView"
//   "_windowControllers"
//   "GNToolbar"
//   "_isControllingWindow"
//   "GNDictionary"
// === GNResponder properties ===
//   bool            _autoresizesSubviews
//   bool            _autoresizesSuperview
//   bool            _acceptsFirstMouse
//   bool            _subviewNeedDisplay
//   float           _alpha
//   float           _mouseOverIntensity
//   bool            _isTransparent
//   bool            _isBypassingEvents
//   bool            _drawingFrameReflectSubviews
//   bool            _isAutolayoutingSubviews
//   bool            _needsLayout
//   float           _visibilityPriority
//   GNSize          _minSize
//   GNSize          _maxSize
//   GNEdgeInset     _padding
//   GNEdgeInset     _margins
//   bool            _isSharedSizeScope
//   GNSize          _minLayoutSizeCache
//   GNSize          _availableLayoutSizeCache
//   GNSize          _sharedLayoutSizeCache
//   GNRect          _frame
//   GNSize          _minFrameSize
//   GNInt           _isSettingFrame
//   bool            _unregisterToolTipLocalisationTargetAnyway
//   bool            _isDisplaying
//   bool            _isDisplayingToBuffer
//   bool            _isWidthSizable
//   bool            _isHeightSizable
//   bool            _closesWindowControllerWhenPerformingClose
//   GNWindowStyleMask _styleMask
//   ... +11 more


void FUN_0005aa20(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00006550();
  *this_ptr = &g_026a2d80;
  this_ptr[2] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b0e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  this_ptr[3] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b1d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  this_ptr[4] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b2c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_windowControllers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDocumentController");
  }
  this_ptr[5] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b3b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNToolbar");
  }
  puVar4 = this_ptr + 6;
  this_ptr[6] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b4a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView",param_3,param_4,puVar4);
  }
  this_ptr[7] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLocalizer");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRootView");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005ba40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  return;
}

