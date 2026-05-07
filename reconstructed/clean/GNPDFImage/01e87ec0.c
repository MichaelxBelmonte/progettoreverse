// Function: FUN_01e87ec0
// Address: 01e87ec0
// Size: 515 bytes
// Class: GNPDFImage
// String references:
//   "GNPDFImage"

void FUN_01e87ec0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026b6d08;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ff0d3 == '\0') {
    FUN_01e88110();
    FUN_00e87980();
  }
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027ff0d3 == '\0') {
    FUN_01e88280();
    FUN_00e87980();
  }
  FUN_01e883f0();
  FUN_01e88670();
  this_ptr[5] = *(void*)(arg1 + 0x28);
  return;
}

