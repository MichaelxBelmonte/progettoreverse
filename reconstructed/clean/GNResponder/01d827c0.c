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

