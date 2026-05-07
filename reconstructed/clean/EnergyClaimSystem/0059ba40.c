// Function: FUN_0059ba40
// Address: 0059ba40
// Size: 2643 bytes
// Class: EnergyClaimSystem
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUElement"
//   "GNRect"
//   "GNDrawPath"
//   "GNPropertyObserver"
//   "MUEnvelopeDrawPathDataSource"
//   "_drawingBounds"
//   "_needsUpdateFrame"
//   "_pixelPerCent"
//   "_playingAnimation"
//   "_notOnTrack"
//   "_showsPitchCurve"
//   "_time"
//   "_displayPitchCenterTransition"
//   "_envelopeParamsLastUpdateTime"
//   "_feedsbackEnergyClaimFactor"
//   "_energyClaimFactor"
//   "double"
//   ... +0 more
// === EnergyClaimSystem properties ===
//   GNRect          _drawingBounds
//   bool            _needsUpdateFrame
//   float           _pixelPerCent
//   float           _playingAnimation
//   bool            _notOnTrack
//   bool            _showsPitchCurve
//   double          _time
//   float           _displayPitchCenterTransition
//   double          _envelopeParamsLastUpdateTime
//   bool            _feedsbackEnergyClaimFactor
//   float           _energyClaimFactor


void FUN_0059ba40(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0059c6c0();
  this_ptr[0x2d] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x2e] = &g_02505720;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02620818;
  this_ptr[2] = &g_02621210;
  this_ptr[0x27] = &g_02621250;
  this_ptr[0x2d] = &g_02621280;
  this_ptr[0x2e] = &g_026212d0;
  this_ptr[0x2f] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0059dd90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  FUN_0059de80();
  FUN_0059df60();
  FUN_0059e040();
  FUN_0059e120();
  this_ptr[0x34] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0059e200();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDrawPath");
  }
  this_ptr[0x35] = 0;
  this_ptr[0x36] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x37) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1bc) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x38) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c4) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c5) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x39] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3a) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0059e2f0();
  FUN_0059e3d0();
  this_ptr[0x3d] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3e) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 500) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

