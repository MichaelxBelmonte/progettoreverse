// Function: FUN_005e89a0
// Address: 005e89a0
// Size: 1017 bytes
// Class: MDToolbarPositionCtrl
// String references:
//   "bool"
//   "float"
//   "_volume"
//   "_amplitudeScaleFactor"
//   "_isMuted"
//   "_isSolo"
//   "_isTrackTitleEditable"
// === MDToolbarPositionCtrl properties ===
//   bool            _isMuted
//   bool            _isSolo
//   float           _volume
//   float           _amplitudeScaleFactor
//   bool            _isTrackTitleEditable


void FUN_005e89a0(void)

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
  *this_ptr = &g_024ff098;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005e8e20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_005e8fa0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x41) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_005e9120();
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_004fb760();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

