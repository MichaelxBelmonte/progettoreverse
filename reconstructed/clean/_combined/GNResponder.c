// ===================================================================
// GNResponder — Complete reconstructed pseudocode
// 7 functions
// ===================================================================

// Registered properties (41):
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
//   GNSize          _minContentSize
//   GNSize          _maxContentSize
//   bool            _cascadeWindows
//   bool            _propagatesChangesOnClose
//   bool            _localizesTitle
//   bool            _documentEdited
//   GNInt           _isSettingContentSize
//   GNSize          _contentSize
//   GNPoint         _mouseDownLocation
//   GNInt           _mouseDownFlags
//   bool            _isControllingWindow


// ============================================================
// 000a32b0
// ============================================================
// Function: FUN_000a32b0
// Address: 000a32b0
// Size: 5474 bytes
// Class: GNResponder
// String references:
//   "GNResponder"
//   "bool"
//   "GNWindow"
//   "GNMenu"
//   "_rootView"
//   "float"
//   "GNView"
//   "GNLocalizationTarget"
//   "_autoresizesSubviews"
//   "_autoresizesSuperview"
//   "_superview"
//   "_subviews"
//   "GNCursor"
//   "_acceptsFirstMouse"
//   "_subviewNeedDisplay"
//   "GNAppearance"
//   "_alpha"
//   "_mouseOverIntensity"
//   "_isTransparent"
//   "_isBypassingEvents"
//   ... +20 more
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


void FUN_000a32b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00006550();
  this_ptr[2] = &g_0258bc60;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026a2418;
  this_ptr[2] = &g_026a2d40;
  this_ptr[3] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a4c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_rootView";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  *(void*)(this_ptr + 4) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a4d10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a4e90();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5000();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_subviews";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a50f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_superview";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  this_ptr[8] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a51e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCursor");
  }
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_000a52d0();
  *(void*)(this_ptr + 0xb) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a53b0();
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5520();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5610();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMenu");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5700();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a57f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  FUN_000a58e0();
  this_ptr[0x12] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a59c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  puVar4 = this_ptr + 0x13;
  this_ptr[0x13] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5ab0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAppearance",param_3,param_4,puVar4);
  }
  *(void*)(this_ptr + 0x14) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x15) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa9) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xaa) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xab) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a5ba0();
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x19] = 0;
  this_ptr[0x1a] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1b] = 0;
  this_ptr[0x1c] = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_000a5d20();
  *(void*)(this_ptr + 0x1e) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf4) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfc) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x104) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x10c) = 0;
  *(void*)((int64_t)this_ptr + 0x114) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x11c) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x124) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x25) = 0;
  lVar2 = FUN_0006d940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_000a5e00();
  return;
}



// ============================================================
// 0020e5b0
// ============================================================
// Function: FUN_0020e5b0
// Address: 0020e5b0
// Size: 3515 bytes
// Class: GNResponder
// String references:
//   "GNResponder"
//   "bool"
//   "GNViewController"
//   "GNRootView"
//   "_window"
//   "GNLocalizationTarget"
//   "GNSize"
//   "_localizesTitle"
//   "GNImage"
//   "GNPoint"
//   "_isDisplaying"
//   "_isDisplayingToBuffer"
//   "_isWidthSizable"
//   "_isHeightSizable"
//   "_closesWindowControllerWhenPerformingClose"
//   "_styleMask"
//   "GNWindowStyleMask"
//   "_minContentSize"
//   "_maxContentSize"
//   "_cascadeWindows"
//   ... +7 more
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


void FUN_0020e5b0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00006550();
  this_ptr[2] = &g_0258bc60;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026a3350;
  this_ptr[2] = &g_026a37c8;
  this_ptr[3] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f5c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRootView");
  }
  this_ptr[4] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f6b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_window";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  *(void*)(this_ptr + 5) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f7a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  *(void*)(this_ptr + 7) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3a) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f890();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020f980();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020fa70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  FUN_0020fb60();
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0020fc40();
  *(void*)(this_ptr + 0x10) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x81) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x82) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x13) = 0;
  lVar2 = FUN_0020e360();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x14] = *(void*)(arg1 + 0xa0);
  return;
}



// ============================================================
// 0005aa20
// ============================================================
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



// ============================================================
// 01d827c0
// ============================================================
// Function: FUN_01d827c0
// Address: 01d827c0
// Size: 934 bytes
// Class: GNResponder
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


uint64_t FUN_01d827c0(uint64_t param_1,uint8_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  uint8_t local_50;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  FUN_00d4efa0();
  FUN_01cae990();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  cVar3 = FUN_00c86130();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01cae990();
    uVar5 = FUN_00d8b910();
    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = *arg1;
    local_68 = 2;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    local_70 = (int64_t *)&g_0268b698;
    local_60 = lVar1;
    local_50 = param_2;
    FUN_00d3af80(&g_027f1320,uVar5,&local_70);
    plVar6 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*plVar6 + 0x368))();
    local_31 = '\0';
    FUN_00d3aaa0();
    if (cVar3 == '\0') {
      FUN_00d4efa0();
      plVar6 = local_70;
      FUN_01cae990();
      plVar2 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00c85fb0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar6 = (int64_t *)CONCAT71((int7)((uint64_t)uVar5 >> 8),local_31 != '\0');
    }
    FUN_00d50b20();
    if (cVar3 != '\0') goto LAB_01d82b4d;
  }
  (**(code **)(*this_ptr + 0x370))();
  plVar6 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d82ae1;
    }
  }
  else if (local_70 != (int64_t *)0x0) {
LAB_01d82ae1:
    cVar3 = FUN_00d50c10();
    if (cVar3 == '\0') {
      plVar6 = (int64_t *)0x0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x3b8))();
      plVar6 = (int64_t *)(uint64_t)uVar4;
    }
    FUN_00d50b20();
    goto LAB_01d82b4d;
  }
  plVar6 = (int64_t *)0x0;
LAB_01d82b4d:
  return (uint64_t)plVar6 & 0xffffff01;
}



// ============================================================
// 0020de90
// ============================================================
// Function: FUN_0020de90
// Address: 0020de90
// Size: 847 bytes
// Class: GNResponder
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


void FUN_0020de90(void)

{
  void*this_ptr;
  
  *this_ptr = &g_026b1720;
  this_ptr[7] = &g_026b1df0;
  if (this_ptr[0x3c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x38] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x37] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x31] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x30] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x29] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x27] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x26] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x25] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x24] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x23] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x21] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x20] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x18] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x17] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x16] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x15] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x14] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x13] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x12] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x11] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x10] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xf] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xe] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xd] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xc] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xb] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[10] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[9] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[8] != 0) {
    FUN_00d50b20();
  }
  *this_ptr = &g_02672598;
  if (this_ptr[5] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[4] != 0) {
    FUN_00d50b20();
  }
  FUN_00d4ffa0();
  return;
}



// ============================================================
// 01d82060
// ============================================================
// Function: FUN_01d82060
// Address: 01d82060
// Size: 759 bytes
// Class: GNResponder
// String references:
//   "GNResponder"
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


void FUN_01d82060(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  code *arg1;
  int64_t *this_ptr;
  uint uVar7;
  int64_t *local_98;
  int64_t local_58;
  char local_50;
  int local_40;
  
  FUN_00d503f0();
  (**(code **)(*this_ptr + 0x368))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01d82152;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_01d82152;
  uVar7 = *(uint *)(local_58 + 0xc);
  if (0 < (int)uVar7) {
    lVar5 = (uint64_t)uVar7 + 1;
    do {
      uVar7 = uVar7 - 1;
      lVar1 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + (uint64_t)uVar7 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (*arg1)();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + -1;
    } while (1 < lVar5);
  }
  FUN_00d50b20();
LAB_01d82152:
  (**(code **)(*this_ptr + 0x290))();
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
    return;
  }
  local_40 = -1;
  while( true ) {
    lVar5 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) break;
    plVar2 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
    local_98 = plVar2;
    if ((g_026cb300 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026d9028 = FUN_00d4fe50();
      g_026d9010 = "GNResponder";
      g_026d9018 = 0x10;
      g_026d9020 = FUN_00005d90;
      g_026d9030 = 0;
      ram_00000000026d9038 = 0;
      g_026d9040 = 0;
      ram_00000000026d9048 = 0;
      g_026d9050 = 0;
      ram_00000000026d9058 = 0;
      g_026d9060 = 0;
      ram_00000000026d9068 = 0;
      g_026d9070 = 0;
      ram_00000000026d9078 = 0;
      g_026d9080 = 0;
      ram_00000000026d9088 = 0;
      g_026d9090 = 0;
      ram_00000000026d9098 = 0;
      g_026d90a0 = 0;
      ram_00000000026d90a8 = 0;
      g_026d90b0 = 0;
      ram_00000000026d90b8 = 0;
      g_026d90c0 = 0;
      ram_00000000026d90c8 = 0;
      g_026d90d0 = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar6 = &local_98;
      if (cVar3 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar6 != (int64_t *)0x0) {
      (*arg1)();
    }
  }
  FUN_01d84b10();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d824e0
// ============================================================
// Function: FUN_01d824e0
// Address: 01d824e0
// Size: 509 bytes
// Class: GNResponder
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


void* FUN_01d824e0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char *pcVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  bVar3 = true;
  do {
    if (arg1 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
    FUN_00d4efa0();
    local_38[0] = local_40[0];
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 == (int64_t *)0x0) ||
       ((local_48 != (int64_t *)*param_2 && (cVar5 = FUN_00c80ea0(), cVar5 == '\0')))) {
      (**(code **)(*arg1 + 0x370))();
      if (local_48 == arg1) {
        bVar4 = bVar3;
        if ((!bVar3) && (local_48 != (int64_t *)0x0)) {
          bVar4 = true;
          if (local_40[0] != '\0') goto LAB_01d82684;
          FUN_00d50b00();
          bVar4 = true;
        }
joined_r0x01d8265d:
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        arg1 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if (bVar3) {
            FUN_00d50b20();
          }
          goto joined_r0x01d8265d;
        }
        bVar4 = true;
        if (bVar3) {
          FUN_00d50b20();
        }
      }
LAB_01d82684:
      bVar2 = false;
      bVar1 = false;
      bVar3 = bVar4;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      if (!bVar3) {
        FUN_00d50b00();
      }
      *this_ptr = arg1;
      *(void*)(this_ptr + 1) = 1;
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
    }
    if ((local_38[0] != '\0') && (bVar1 = bVar2, local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      if ((bVar3) && (arg1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      return this_ptr;
    }
  } while( true );
}

