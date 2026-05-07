// Function: FUN_01e8ac80
// Address: 01e8ac80
// Size: 714 bytes
// Class: GNPrintSettings
// String references:
//   "GNPrintSettings"
// === GNPrintSettings properties ===
//   GNPrintOrientation _orientation


void FUN_01e8ac80(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026a4238;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f9a7b == '\0') {
    FUN_01e8af80();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f9a7b == '\0') {
    FUN_01e8b1b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f9a7b == '\0') {
    FUN_01e8b320();
    FUN_00e87980();
  }
  FUN_01e8b490();
  return;
}

