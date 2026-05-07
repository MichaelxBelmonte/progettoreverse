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

