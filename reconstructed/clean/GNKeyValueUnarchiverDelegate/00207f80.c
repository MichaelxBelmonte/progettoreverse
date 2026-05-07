// Function: FUN_00207f80
// Address: 00207f80
// Size: 721 bytes
// Class: GNKeyValueUnarchiverDelegate
// String references:
//   "GNKeyValueUnarchiverDelegate"
//   "GNUIDLoader"
// === GNKeyValueUnarchiverDelegate properties ===
//   GNCoord         _scrollerMargin
//   GNCoord         _scrollerKnobMargin
//   GNCoord         _innerShadowDepth
//   GNCoord         _sliderLineThickness
//   GNCoord         _separatorBorderRadius
//   GNCoord         _roundedButtonBorderRadius
//   GNCoord         _squareButtonBorderRadius
//   GNCoord         _panelButtonBorderRadius
//   GNCoord         _textFieldBorderRadius
//   GNCoord         _scrollerBorderRadius
//   float           _horizontalScrollerHeight
//   float           _verticalScrollerWidth
//   bool            _scrollersHaveButtons
//   bool            _scrollersHaveBorder
//   bool            _dividersDrawHandle
//   float           _circularSliderRangeFactor
//                   _supermodel
//                   _submodels
//                   _submodelNames
//                   _isEditable
//                   _currentDescValues
//                   _classNames


void FUN_00207f80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_02571cf8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026a18e8;
  this_ptr[2] = &g_026a1c80;
  FUN_00208310();
  FUN_00208600();
  FUN_002088f0();
  FUN_00208b70();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f47ab == '\0') {
    FUN_00208df0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f47ab == '\0') {
    FUN_00208f60();
    FUN_00e87980();
  }
  FUN_002090d0();
  FUN_00209350();
  return;
}

