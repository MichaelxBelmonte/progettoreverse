// Function: FUN_001bb380
// Address: 001bb380
// Size: 504 bytes
// Class: GNComboBoxAssoc
// String references:
//   "GNComboBoxAssoc"

void FUN_001bb380(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001baad0();
  *this_ptr = &g_026a71a0;
  *(void*)((int64_t)this_ptr + 0x41) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ea1f3 == '\0') {
    FUN_001bb5c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x42) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ea1f3 == '\0') {
    FUN_001bb730();
    FUN_00e87980();
  }
  FUN_001bb8a0();
  FUN_001bbb20();
  return;
}

