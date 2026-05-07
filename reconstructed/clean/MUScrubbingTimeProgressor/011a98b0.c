// Function: FUN_011a98b0
// Address: 011a98b0
// Size: 958 bytes
// Class: MUScrubbingTimeProgressor
// String references:
//   "MUScrubbingTimeProgressor"

void FUN_011a98b0(void)

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
  *this_ptr = &g_025e2bf8;
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b08fb == '\0') {
    FUN_011a9ca0();
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b08fb == '\0') {
    FUN_011a9e10();
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b08fb == '\0') {
    FUN_011a9f80();
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b08fb == '\0') {
    FUN_011aa0f0();
    FUN_00e87980();
  }
  return;
}

