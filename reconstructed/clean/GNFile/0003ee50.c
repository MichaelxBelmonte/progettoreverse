// Function: FUN_0003ee50
// Address: 0003ee50
// Size: 835 bytes
// Class: GNFile
// String references:
//   "GNFile"
// === GNFile properties ===
//   GNEndian        _endianness


void FUN_0003ee50(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0256d868;
  FUN_0003f200();
  *(void*)(this_ptr + 3) = *(void*)(arg1 + 0x18);
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d137b == '\0') {
    FUN_0003f4c0();
    FUN_00e87980();
  }
  FUN_0003f710();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d137b == '\0') {
    FUN_0003f9d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d137b == '\0') {
    FUN_0003fb60();
    FUN_00e87980();
  }
  return;
}

