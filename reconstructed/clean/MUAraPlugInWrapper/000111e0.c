// Function: FUN_000111e0
// Address: 000111e0
// Size: 1686 bytes
// Class: MUAraPlugInWrapper
// String references:
//   "MUAraPlugInWrapper"

void FUN_000111e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0000dfe0();
  *this_ptr = &g_025f8e18;
  this_ptr[2] = &g_025f94c8;
  this_ptr[3] = &g_025f94f8;
  this_ptr[4] = &g_025f95a0;
  this_ptr[0xe] = &g_025f9860;
  this_ptr[0x12] = 0;
  // [STATIC_INIT: property registration]
  if (g_026ccad3 == '\0') {
    FUN_00011970();
    FUN_00e87980();
  }
  FUN_00011b00();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ccad3 == '\0') {
    FUN_00011e30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ccad3 == '\0') {
    FUN_00011fc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ccad3 == '\0') {
    FUN_00012150();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ccad3 == '\0') {
    FUN_000122e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ccad3 == '\0') {
    FUN_00012470();
    FUN_00e87980();
  }
  FUN_00012600();
  FUN_00012930();
  FUN_00012c60();
  return;
}

