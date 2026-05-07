// Function: FUN_0002f700
// Address: 0002f700
// Size: 1627 bytes
// Class: GNClassDescription
// String references:
//   "GNClassDescription"
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_0002f700(void)

{
  uint64_t uVar1;
  int iVar2;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02567a20;
  FUN_00030000();
  FUN_00030280();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_00030500();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_00030670();
    FUN_00e87980();
  }
  FUN_000307e0();
  FUN_00030af0();
  FUN_00030e00();
  FUN_00031110();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_00031400();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_00031570();
    FUN_00e87980();
  }
  this_ptr[10] = *(void*)(arg1 + 0x50);
  FUN_000316e0();
  FUN_000319e0();
  FUN_00031c60();
  FUN_00031ee0();
  FUN_00032160();
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277614b == '\0') {
    FUN_000323e0();
    FUN_00e87980();
  }
  FUN_00032550();
  FUN_000327d0();
  FUN_00032a50();
  FUN_00032d40();
  FUN_00032fc0();
  FUN_00033240();
  FUN_000334c0();
  FUN_00033740();
  FUN_000339c0();
  FUN_00033c40();
  uVar1 = *(void*)(arg1 + 0xe0);
  this_ptr[0x1b] = *(void*)(arg1 + 0xd8);
  this_ptr[0x1c] = uVar1;
  return;
}

