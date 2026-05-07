// ===================================================================
// MULSSElementRenderRequest — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (23):
//                   _componentRenderers
//                   _performanceTimeOffset
//                   _resetsPerformanceTimeOffsetOnNextJump
//                   _renderStartSampleIndex
//                   _elementTime
//                   _isPlaying
//                   _activeComponents
//                   _pitchOffset
//                   _spectrumShaperParameterSet
//                   _skipsResidualElements
//                   _sourcePlaybackAmplitudeFactor
//                   _spectrumPlaybackAmplitudeFactor
//                   _testValue1
//                   _testFlag1
//                   _testFlag2
//                   _refersToSpectrumShaperParameterSet
//                   _activeElementRenderers
//                   _elementRendererPool
//                   _assembledElementRendererCount
//                   _preallocationPoolKeys
//                   _componentRendererPool
//                   _componentSpectrumRendererPool
//                   _displayInfoBuffers


// ============================================================
// 01167aa0
// ============================================================
// Function: FUN_01167aa0
// Address: 01167aa0
// Size: 716 bytes
// Class: MULSSElementRenderRequest
// String references:
//   "MULSSElementRenderRequest"
// === MULSSElementRenderRequest properties ===
//                   _componentRenderers
//                   _performanceTimeOffset
//                   _resetsPerformanceTimeOffsetOnNextJump
//                   _renderStartSampleIndex
//                   _elementTime
//                   _isPlaying
//                   _activeComponents
//                   _pitchOffset
//                   _spectrumShaperParameterSet
//                   _skipsResidualElements
//                   _sourcePlaybackAmplitudeFactor
//                   _spectrumPlaybackAmplitudeFactor
//                   _testValue1
//                   _testFlag1
//                   _testFlag2
//                   _refersToSpectrumShaperParameterSet
//                   _activeElementRenderers
//                   _elementRendererPool
//                   _assembledElementRendererCount
//                   _preallocationPoolKeys
//                   _componentRendererPool
//                   _componentSpectrumRendererPool
//                   _displayInfoBuffers


void FUN_01167aa0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025e3e48;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a4c0b == '\0') {
    FUN_01167da0();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a4c0b == '\0') {
    FUN_01167f10();
    FUN_00e87980();
  }
  FUN_01168080();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a4c0b == '\0') {
    FUN_01168360();
    FUN_00e87980();
  }
  FUN_011684d0();
  return;
}

