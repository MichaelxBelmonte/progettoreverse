// Function: FUN_00826580
// Address: 00826580
// Size: 538 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "MUDetectionActivationSlider"

void FUN_00826580(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001b40a0();
  *this_ptr = &g_0264fd20;
  this_ptr[2] = &g_02650850;
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02732243 == '\0') {
    FUN_00826800();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02732243 == '\0') {
    FUN_00826990();
    FUN_00e87980();
  }
  return;
}

