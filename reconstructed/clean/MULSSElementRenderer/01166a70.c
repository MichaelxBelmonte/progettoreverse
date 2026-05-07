// Function: FUN_01166a70
// Address: 01166a70
// Size: 561 bytes
// Class: MULSSElementRenderer
// String references:
//   "MULSSElementRenderer"

void FUN_01166a70(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010f3160();
  *this_ptr = &g_025d2b78;
  FUN_01166d70();
  FUN_01167060();
  FUN_01167350();
  this_ptr[0x20] = 0;
  // [STATIC_INIT: property registration]
  if (g_027a49d3 == '\0') {
    FUN_01167640();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_027a49d3 == '\0') {
    FUN_011677b0();
    FUN_00e87980();
  }
  return;
}

