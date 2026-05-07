// Function: FUN_010d7110
// Address: 010d7110
// Size: 533 bytes
// Class: MUElementRenderCluster
// String references:
//   "MUElementRenderCluster"
// === MUElementRenderCluster properties ===
//                   _effectChain
//                   _pitchModulationFactor
//                   _pitchDriftFactor
//                   _followingJoin
//                   _precedingElement
//                   _precedingJoin
//                   _followingElement
//                   _anchorPoint
//                   _releasePoint
//                   _sourceTimeForElementTimeFunction
//                   _principalAudioComponent
//                   _realtimeInfo


void FUN_010d7110(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_1f0;
  void*local_28;
  
  // [STATIC_INIT: property registration]
  if (g_0279dd63 == '\0') {
    FUN_010d68a0();
    FUN_00e87760();
    FUN_0006e3a0();
    local_28 = (void*)0x0;
    if (1 < g_02802630) {
      local_28 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_01135410();
    FUN_01148a90();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1f0 != 0) {
      FUN_00d50b20();
    }
    FUN_01139260();
    if (local_28 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_01139260();
  }
  return;
}

