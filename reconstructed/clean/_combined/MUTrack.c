// ===================================================================
// MUTrack — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (3):
//   bool            _isDetectionPerformance
//   double          _location
//   double          _duration


// ============================================================
// 0116a4c0
// ============================================================
// Function: FUN_0116a4c0
// Address: 0116a4c0
// Size: 600 bytes
// Class: MUTrack
// === MUTrack properties ===
//   bool            _isDetectionPerformance
//   double          _location
//   double          _duration


void FUN_0116a4c0(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  this_ptr[0x1b] = 0;
  this_ptr[0x1c] = 0;
  *(void*)((int64_t)this_ptr + 0xc6) = 0;
  *(void*)((int64_t)this_ptr + 0xce) = 0;
  *(void*)((int64_t)this_ptr + 0xbc) = 0;
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  *(void*)((int64_t)this_ptr + 0x94) = 0;
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
  *this_ptr = &g_025e3768;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
    this_ptr[0x1f] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x1e] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1f] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x1f] = puVar3;
      iVar2 = g_02802630;
    }
  }
  *(void*)(this_ptr + 0x20) = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  if (iVar2 < 2) {
    this_ptr[0x23] = 0;
    this_ptr[0x24] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x22] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x23] = 0;
    if (iVar2 < 2) {
      this_ptr[0x24] = 0;
      this_ptr[0x25] = 0;
      return;
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x23] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x24] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x24] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x25] = 0;
      if (iVar2 < 2) {
        return;
      }
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x25] = puVar3;
      return;
    }
  }
  this_ptr[0x25] = 0;
  return;
}



// ============================================================
// 011687c0
// ============================================================
// Function: FUN_011687c0
// Address: 011687c0
// Size: 2373 bytes
// Class: MUTrack
// String references:
//   "MUTrack"
//   "MULSSGenerator"
//   "_generator"
// === MUTrack properties ===
//   bool            _isDetectionPerformance
//   double          _location
//   double          _duration


void FUN_011687c0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025cd808;
  this_ptr[7] = 0;
  lVar9 = FUN_0015ef90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f6740();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_generator";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  *this_ptr = &g_025d31f0;
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_01169170();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_011692e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_01169450();
    FUN_00e87980();
  }
  FUN_011695c0();
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_011698d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_01169a40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_01169bb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_01169d20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_01169e90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x69) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_0116a000();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e788b == '\0') {
    FUN_0116a170();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 011a0e80
// ============================================================
// Function: FUN_011a0e80
// Address: 011a0e80
// Size: 759 bytes
// Class: MUTrack
// String references:
//   "_location"
//   "MUTrack"
//   "_duration"
//   "double"
//   "MURenderCacheData"
//   "_renderCacheSegments"
// === MUTrack properties ===
//   bool            _isDetectionPerformance
//   double          _location
//   double          _duration


void FUN_011a0e80(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025c3d08;
  this_ptr[7] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1230();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_renderCacheSegments";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this_ptr[10] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1320();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1410();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1500();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  return;
}



// ============================================================
// 0118a6a0
// ============================================================
// Function: FUN_0118a6a0
// Address: 0118a6a0
// Size: 641 bytes
// Class: MUTrack
// String references:
//   "bool"
//   "MUTrack"
//   "MUComposition"
//   "MUAudioSource"
//   "_performance"
//   "MUAudioIOConfiguration"
//   "_performances"
//   "_isDetectionPerformance"
// === MUTrack properties ===
//   bool            _isDetectionPerformance
//   double          _location
//   double          _duration


void FUN_0118a6a0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025d4058;
  FUN_0118aa10();
  this_ptr[8] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118aaf0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_performance";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118abe0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSource");
  }
  FUN_0118acd0();
  *(void*)(this_ptr + 0xb) = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118adb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_performances";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUComposition");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118aea0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOConfiguration");
  }
  return;
}

