// Function: FUN_00029710
// Address: 00029710
// Size: 558 bytes
// Class: GNAttributeType
// String references:
//   "GNAttributeType"

void FUN_00029710(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025672d0;
  FUN_000299e0();
  FUN_00029c60();
  FUN_00029ee0();
  FUN_0002a160();
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ce5c3 == '\0') {
    FUN_0002a3e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ce5c3 == '\0') {
    FUN_0002a550();
    FUN_00e87980();
  }
  return;
}

