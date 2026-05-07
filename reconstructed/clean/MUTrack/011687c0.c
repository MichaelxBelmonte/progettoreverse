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

