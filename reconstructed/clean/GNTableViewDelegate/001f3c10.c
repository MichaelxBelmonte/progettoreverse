// Function: FUN_001f3c10
// Address: 001f3c10
// Size: 717 bytes
// Class: GNTableViewDelegate
// String references:
//   "GNTableViewDelegate"
//   "GNTableViewDataSource"
//   "GNTableViewAssoc"

void FUN_001f3c10(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001baad0();
  this_ptr[9] = &g_02698580;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[10] = &g_02698528;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02699a40;
  this_ptr[9] = &g_0269a008;
  this_ptr[10] = &g_0269a0a8;
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f240b == '\0') {
    FUN_001f3f10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x59) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f240b == '\0') {
    FUN_001f4080();
    FUN_00e87980();
  }
  return;
}

