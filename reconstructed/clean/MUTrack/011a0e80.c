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

