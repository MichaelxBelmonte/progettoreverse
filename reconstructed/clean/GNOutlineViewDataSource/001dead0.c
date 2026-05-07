// Function: FUN_001dead0
// Address: 001dead0
// Size: 845 bytes
// Class: GNOutlineViewDataSource
// String references:
//   "GNOutlineViewDataSource"
//   "GNTableViewDelegate"
//   "GNOutlineViewDelegate"
//   "GNOutlineViewAssoc"

void FUN_001dead0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001baad0();
  this_ptr[9] = &g_026af2d8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[10] = &g_026af280;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xb] = &g_02698580;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0269ac60;
  this_ptr[9] = &g_0269b1f8;
  this_ptr[10] = &g_0269b260;
  this_ptr[0xb] = &g_0269b2b8;
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ef57b == '\0') {
    FUN_001dee50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x61) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ef57b == '\0') {
    FUN_001defc0();
    FUN_00e87980();
  }
  return;
}

