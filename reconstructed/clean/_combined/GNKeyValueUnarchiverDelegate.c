// ===================================================================
// GNKeyValueUnarchiverDelegate — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (22):
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


// ============================================================
// 00209e70
// ============================================================
// Function: FUN_00209e70
// Address: 00209e70
// Size: 4174 bytes
// Class: GNKeyValueUnarchiverDelegate
// String references:
//   "bool"
//   "GNKeyValueUnarchiverDelegate"
//   "float"
//   "GNCoord"
//   "_scrollerMargin"
//   "_scrollerKnobMargin"
//   "_innerShadowDepth"
//   "_sliderLineThickness"
//   "_separatorBorderRadius"
//   "_roundedButtonBorderRadius"
//   "_squareButtonBorderRadius"
//   "_panelButtonBorderRadius"
//   "_textFieldBorderRadius"
//   "_scrollerBorderRadius"
//   "_horizontalScrollerHeight"
//   "_verticalScrollerWidth"
//   "_scrollersHaveButtons"
//   "_scrollersHaveBorder"
//   "_dividersDrawHandle"
//   "_circularSliderRangeFactor"
//   ... +1 more
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


void FUN_00209e70(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_001ab9a0();
  this_ptr[7] = &g_02571cf8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026b1720;
  this_ptr[7] = &g_026b1df0;
  FUN_0020b640();
  FUN_0020b720();
  FUN_0020b800();
  FUN_0020b8e0();
  FUN_0020b9c0();
  FUN_0020baa0();
  FUN_0020bb80();
  FUN_0020bc60();
  FUN_0020bd40();
  FUN_0020be20();
  FUN_0020bf00();
  FUN_0020bfe0();
  FUN_0020c0c0();
  FUN_0020c1a0();
  FUN_0020c280();
  FUN_0020c360();
  FUN_0020c440();
  FUN_0020c520();
  FUN_0020c600();
  FUN_0020c6e0();
  FUN_0020c7c0();
  FUN_0020c8a0();
  FUN_0020c980();
  FUN_0020ca60();
  FUN_0020cb40();
  FUN_0020cc20();
  FUN_0020cd00();
  FUN_0020cde0();
  FUN_0020cec0();
  FUN_0020cfa0();
  FUN_0020d080();
  FUN_0020d160();
  FUN_0020d240();
  FUN_0020d320();
  FUN_0020d400();
  FUN_0020d4e0();
  FUN_0020d5c0();
  FUN_0020d6a0();
  FUN_0020d780();
  FUN_0020d860();
  FUN_0020d940();
  FUN_0020da20();
  *(void*)(this_ptr + 0x32) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x194) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x34) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1a4) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x35) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ac) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x36) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1b4) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0020db00();
  this_ptr[0x38] = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0020dbe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  *(void*)(this_ptr + 0x39) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1cc) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3a) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d1) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d2) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0020dcd0();
  FUN_0020ddb0();
  *(void*)(this_ptr + 0x3d) = 0;
  lVar2 = FUN_00209700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00820940
// ============================================================
// Function: FUN_00820940
// Address: 00820940
// Size: 2181 bytes
// Class: GNKeyValueUnarchiverDelegate
// String references:
//   "GNKeyValueUnarchiverDelegate"
//   "GNKeyValueArchiverDelegate"
//   "MUPasteboardHandler"
//   "GNPasteboardDataSource"
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


void FUN_00820940(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_02671408;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[3] = &g_02570ec8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[4] = &g_02571cf8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026708c8;
  this_ptr[2] = &g_02670c68;
  this_ptr[3] = &g_02670ca0;
  this_ptr[4] = &g_02670cd8;
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_02731013 == '\0') {
    FUN_00821220();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_02731013 == '\0') {
    FUN_00821390();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_02731013 == '\0') {
    FUN_00821500();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_02731013 == '\0') {
    FUN_00821670();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02731013 == '\0') {
    FUN_008217e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2d) = 0;
  // [STATIC_INIT: property registration]
  if (g_02731013 == '\0') {
    FUN_00821950();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2e) = 0;
  // [STATIC_INIT: property registration]
  if (g_02731013 == '\0') {
    FUN_00821ac0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2f) = 0;
  // [STATIC_INIT: property registration]
  if (g_02731013 == '\0') {
    FUN_00821c30();
    FUN_00e87980();
  }
  FUN_00821da0();
  FUN_00822090();
  return;
}



// ============================================================
// 00207f80
// ============================================================
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

