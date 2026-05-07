// Function: FUN_001e7990
// Address: 001e7990
// Size: 1256 bytes
// Class: GNPullDownButton
// String references:
//   "GNPullDownButton"

void FUN_001e7990(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000fabd0();
  *this_ptr = &g_02687f80;
  this_ptr[2] = &g_02688a68;
  this_ptr[0x39] = &g_02688aa8;
  FUN_001e7f20();
  *(void*)(this_ptr + 0x45) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8210();
    FUN_00e87980();
  }
  FUN_001e8380();
  *(void*)(this_ptr + 0x47) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8670();
    FUN_00e87980();
  }
  FUN_001e87e0();
  *(void*)(this_ptr + 0x49) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8ad0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8c40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x4a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f089b == '\0') {
    FUN_001e8db0();
    FUN_00e87980();
  }
  return;
}

