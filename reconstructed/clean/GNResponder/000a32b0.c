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

