// Function: FUN_00023d10
// Address: 00023d10
// Size: 1281 bytes
// Class: GNQueue
// String references:
//   "GNQueue"
// === GNQueue properties ===
//                   _capacity
//                   _count
//                   _frontIdx
//                   _tailIdx
//                   _retainingDisabled


void FUN_00023d10(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0258a9e8;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cd5eb == '\0') {
    FUN_00024240();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cd5eb == '\0') {
    FUN_000243d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cd5eb == '\0') {
    FUN_00024560();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cd5eb == '\0') {
    FUN_000246f0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026cd5eb == '\0') {
    FUN_00024880();
    FUN_00e87980();
  }
  return;
}

