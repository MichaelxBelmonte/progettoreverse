// Function: FUN_00871b80
// Address: 00871b80
// Size: 1608 bytes
// Class: MUNoiseRange
// String references:
//   "MUNoiseRange"
// === MUNoiseRange properties ===
//                   _startFadeDuration
//                   _endFadeDuration
//                   _preAttenuation
//                   _postAttenuation
//                   _noiseType


void FUN_00871b80(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
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
  *this_ptr = &g_02514d30;
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_027bcd3b == '\0') {
    FUN_00872200();
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_027bcd3b == '\0') {
    FUN_00872370();
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  // [STATIC_INIT: property registration]
  if (g_027bcd3b == '\0') {
    FUN_008724e0();
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  // [STATIC_INIT: property registration]
  if (g_027bcd3b == '\0') {
    FUN_00872650();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bcd3b == '\0') {
    FUN_008727c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bcd3b == '\0') {
    FUN_00872930();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bcd3b == '\0') {
    FUN_00872aa0();
    FUN_00e87980();
  }
  return;
}

