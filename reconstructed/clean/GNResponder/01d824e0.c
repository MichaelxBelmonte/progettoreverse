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

