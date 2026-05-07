// Function: FUN_0084ee20
// Address: 0084ee20
// Size: 10003 bytes
// Class: GNView
// String references:
//   "bool"
//   "float"
//   "GNView"
//   "GNTextField"
//   "GNPullDownButton"
//   "GNRect"
//   "GNButton"
//   "GNSlider"
//   "GNHeartbeatHandler"
//   "MUScaleMode"
//   "GNCoord"
//   "GNTimeInterval"
//   "_pitchDisplayMode"
//   "MUScaleSlideRuleView"
//   "_isScaleTuningEditable"
//   "_isScaleModeEditable"
//   "MUScalePreviewController"
//   "_selectedPitchIndex"
//   "MUScaleRulerHeaderPullDownButton"
//   "MUScaleRulerHeaderPullDownButtonDelegate"
//   ... +42 more
// === GNView properties ===
//   float           _scaleArrayFilterFactor
//   GNInt           _centDisplayReferencePitchIndex
//   bool            _centDisplayModePlusMinus
//   GNInt           _pitchDisplayMode
//   GNInt           _selectedPitchIndex
//   GNInt           _clickedPitchIndex
//   float           _clickedPitch
//   bool            _pitchIndexIsHit
//   GNInt           _closestPitchIndex
//   float           _closestPitch
//   bool            _detectionIsCyclic
//   GNInt           _detectionCycleSizeCent
//   GNInt           _detectionMinPitchCent
//   GNInt           _detectionMaxPitchCent
//   bool            _applyDetectionToScale
//   bool            _detectionInsertsChromaticIntervals
//   bool            _scaleWasJustDetected
//   float           _preferredFundamentalPitchForDetection
//   bool            _movingTuningPitchAnchor
//   bool            _setTuningPitchAnchor
//   float           _tuningPitchAnchorAnimationOffset
//   float           _hertzScaleInAnimationLevel
//   float           _hertzScaleOutAnimationLevel
//   GNTimeInterval  _movingScaleIndicatorDisplayDelay
//   bool            _movingScaleTuning
//   bool            _movingScaleMode
//   bool            _movingDetectedScale
//   float           _movingTuningOffset
//   GNRect          _movingTuningRect
//   float           _slideRuleAnchorOffset
//   ... +16 more


void FUN_0084ee20(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00839940();
  this_ptr[0x2d] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x2e] = &g_02645f70;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x2f] = &g_0263daa8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026449b8;
  this_ptr[2] = &g_02645458;
  this_ptr[0x27] = &g_02645498;
  this_ptr[0x2d] = &g_026454e8;
  this_ptr[0x2e] = &g_02645518;
  this_ptr[0x2f] = &g_02645550;
  *(void*)(this_ptr + 0x30) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x184) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x31) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x32) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x194) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x34] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00851e60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleModeDegree");
  }
  *(void*)(this_ptr + 0x35) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ac) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00851f50();
  *(void*)(this_ptr + 0x37) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1bc) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x38) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c4) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00852030();
  FUN_00852110();
  *(void*)(this_ptr + 0x3b) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d9) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1da) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e1) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e4) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_008521f0();
  FUN_008522d0();
  *(void*)(this_ptr + 0x3f) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1fc) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x40] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x41) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x209) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x20a) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x20c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x42] = 0;
  this_ptr[0x43] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x44] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008523b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleSlideRuleView");
  }
  this_ptr[0x45] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008524a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  this_ptr[0x46] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  this_ptr[0x47] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  this_ptr[0x48] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleRulerHeaderPullDownButton");
  }
  this_ptr[0x49] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPullDownButton");
  }
  this_ptr[0x4a] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  this_ptr[0x4b] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852a40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPullDownButton");
  }
  this_ptr[0x4c] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852b30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPullDownButton");
  }
  this_ptr[0x4d] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x4e] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852d10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleRulerHeaderPullDownButton");
  }
  this_ptr[0x4f] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852e00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  *(void*)(this_ptr + 0x50) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x284) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852ef0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x51) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x52] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00853060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  *(void*)(this_ptr + 0x53) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00853150();
  FUN_00853230();
  *(void*)(this_ptr + 0x56) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00853310();
  this_ptr[0x58] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008533f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleMode");
  }
  FUN_008534e0();
  *(void*)(this_ptr + 0x5a) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x5b] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008535c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePreviewController");
  }
  FUN_008536b0();
  this_ptr[0x5d] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00853790();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  FUN_00853880();
  *(void*)(this_ptr + 0x5f) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2fc) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00853960();
  *(void*)(this_ptr + 0x61) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x30c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x62) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x314) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x315) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x316) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00853a40();
  return;
}

