// Function: FUN_00060b50
// Address: 00060b50
// Size: 1889 bytes
// Class: GNThread
// String references:
//   "GNThread"
// === GNThread properties ===
//   GNThreadPriorityGroup _priorityGroup


void FUN_00060b50(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02579948;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d67ab == '\0') {
    FUN_00061380();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d67ab == '\0') {
    FUN_00061510();
    FUN_00e87980();
  }
  this_ptr[4] = *(void*)(arg1 + 0x20);
  FUN_000616a0();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d67ab == '\0') {
    FUN_000619d0();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d67ab == '\0') {
    FUN_00061c20();
    FUN_00e87980();
  }
  FUN_00061db0();
  FUN_00062070();
  uVar1 = *(void*)(arg1 + 0x54);
  uVar2 = *(void*)(arg1 + 0x58);
  uVar3 = *(void*)(arg1 + 0x5c);
  *(void*)(this_ptr + 10) = *(void*)(arg1 + 0x50);
  *(void*)((int64_t)this_ptr + 0x54) = uVar1;
  *(void*)(this_ptr + 0xb) = uVar2;
  *(void*)((int64_t)this_ptr + 0x5c) = uVar3;
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d67ab == '\0') {
    FUN_00062330();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d67ab == '\0') {
    FUN_000624c0();
    FUN_00e87980();
  }
  FUN_00062650();
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d67ab == '\0') {
    FUN_00062980();
    FUN_00e87980();
  }
  return;
}

