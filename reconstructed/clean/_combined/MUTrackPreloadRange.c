// ===================================================================
// MUTrackPreloadRange — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (9):
//                   _cacheWarmUpLastCursorTime
//                   _cacheLastCursorTimeRanges
//                   _cacheWarmUpLastLeftCycleQuarter
//                   _cachedLastLeftCycleRanges
//                   _cachedARARegionStartRanges
//                   _hostPlaybackRenderer
//                   _hostPlaybackTimeProgressor
//                   _expectedNextAraHostSampleIndex
//                   _ringBuffer


// ============================================================
// 011ce1f0
// ============================================================
// Function: FUN_011ce1f0
// Address: 011ce1f0
// Size: 502 bytes
// Class: MUTrackPreloadRange
// === MUTrackPreloadRange properties ===
//                   _cacheWarmUpLastCursorTime
//                   _cacheLastCursorTimeRanges
//                   _cacheWarmUpLastLeftCycleQuarter
//                   _cachedLastLeftCycleRanges
//                   _cachedARARegionStartRanges
//                   _hostPlaybackRenderer
//                   _hostPlaybackTimeProgressor
//                   _expectedNextAraHostSampleIndex
//                   _ringBuffer


void FUN_011ce1f0(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  *(void*)((int64_t)this_ptr + 100) = 0;
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x19] = 0;
  *(void*)((int64_t)this_ptr + 0xce) = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1c] = 0;
  *this_ptr = &g_025d6a08;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1f] = 0;
  if (1 < g_02802630) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x1f] = puVar3;
  }
  iVar2 = g_02802630;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x21] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x25] = puVar3;
    iVar2 = g_02802630;
  }
  this_ptr[0x26] = 0;
  *(void*)(this_ptr + 0x27) = 0;
  this_ptr[0x28] = 0;
  if (iVar2 < 2) {
    this_ptr[0x29] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x28] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x29] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x29] = puVar3;
    }
  }
  *(void*)(this_ptr + 0x2e) = 0;
  this_ptr[0x2f] = 0;
  this_ptr[0x2a] = 0;
  this_ptr[0x2b] = 0;
  *(void*)((int64_t)this_ptr + 0x15d) = 0;
  *(void*)((int64_t)this_ptr + 0x165) = 0;
  return;
}



// ============================================================
// 011cd5a0
// ============================================================
// Function: FUN_011cd5a0
// Address: 011cd5a0
// Size: 574 bytes
// Class: MUTrackPreloadRange
// String references:
//   "MUTrackPreloadRange"
// === MUTrackPreloadRange properties ===
//                   _cacheWarmUpLastCursorTime
//                   _cacheLastCursorTimeRanges
//                   _cacheWarmUpLastLeftCycleQuarter
//                   _cachedLastLeftCycleRanges
//                   _cachedARARegionStartRanges
//                   _hostPlaybackRenderer
//                   _hostPlaybackTimeProgressor
//                   _expectedNextAraHostSampleIndex
//                   _ringBuffer


void FUN_011cd5a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026161f0;
  FUN_011cd840();
  FUN_011cdb70();
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b85ab == '\0') {
    FUN_011cdea0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b85ab == '\0') {
    FUN_011ce030();
    FUN_00e87980();
  }
  return;
}

