// Function: FUN_007bf5f0
// Address: 007bf5f0
// Size: 516 bytes
// Class: GNSoundFileNFFWriter
// String references:
//   "GNSoundFileNFFWriter"

void FUN_007bf5f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_007b7610();
  *this_ptr = &g_0254c848;
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272d85b == '\0') {
    FUN_007bf870();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272d85b == '\0') {
    FUN_007bfa00();
    FUN_00e87980();
  }
  return;
}

