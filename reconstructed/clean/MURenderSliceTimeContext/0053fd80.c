// Function: FUN_0053fd80
// Address: 0053fd80
// Size: 810 bytes
// Class: MURenderSliceTimeContext
// String references:
//   "MURenderSliceTimeContext"
// === MURenderSliceTimeContext properties ===
//   MUTimeContextCreationType _type


void FUN_0053fd80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025eb1a0;
  FUN_005400f0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027af17b == '\0') {
    FUN_00540420();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027af17b == '\0') {
    FUN_005405b0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027af17b == '\0') {
    FUN_00540740();
    FUN_00e87980();
  }
  return;
}

