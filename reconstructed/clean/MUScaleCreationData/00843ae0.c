// Function: FUN_00843ae0
// Address: 00843ae0
// Size: 1614 bytes
// Class: MUScaleCreationData
// String references:
//   "MUScaleCreationData"
// === MUScaleCreationData properties ===
//                   _cycleSize
//                   _degrees
//                   _degreesDistance
//                   _degreesAbove
//                   _degreesBelow
//                   _scaleName
//                   _isCyclic
//                   _isNonCyclic


void FUN_00843ae0(void)

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
  *this_ptr = &g_02513bd8;
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844190();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844300();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844470();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_008445e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844750();
    FUN_00e87980();
  }
  FUN_008448c0();
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844b40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x59) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844cb0();
    FUN_00e87980();
  }
  return;
}

