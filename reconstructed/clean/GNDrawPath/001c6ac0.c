// Function: FUN_001c6ac0
// Address: 001c6ac0
// Size: 818 bytes
// Class: GNDrawPath
// String references:
//   "GNDrawPath"
// === GNDrawPath properties ===
//                   _cachePath1
//                   _cachePath2
//                   _cachePath3
//                   _localeChanged
//                   _selectedIndex
//                   _fixedCount


void FUN_001c6ac0(void)

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
  *this_ptr = &g_02680400;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ec2e3 == '\0') {
    FUN_001c6e50();
    FUN_00e87980();
  }
  uVar1 = *(void*)(arg1 + 0x10);
  uVar2 = *(void*)(arg1 + 0x14);
  uVar3 = *(void*)(arg1 + 0x18);
  uVar4 = *(void*)(arg1 + 0x1c);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 4) = *(void*)(arg1 + 0x20);
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  *(void*)(this_ptr + 2) = uVar1;
  *(void*)((int64_t)this_ptr + 0x14) = uVar2;
  *(void*)(this_ptr + 3) = uVar3;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar4;
  FUN_001c6fe0();
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_026ec2e3 == '\0') {
    FUN_001c72a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ec2e3 == '\0') {
    FUN_001c7430();
    FUN_00e87980();
  }
  return;
}

