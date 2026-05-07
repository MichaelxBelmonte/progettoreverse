// Function: FUN_003904a0
// Address: 003904a0
// Size: 1415 bytes
// Class: MDAsyncDocumentAdder
// String references:
//   "MDAsyncDocumentAdder"

void FUN_003904a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_002b11a0();
  *this_ptr = &g_024e9720;
  this_ptr[4] = &g_024e9b00;
  this_ptr[5] = &g_024e9b38;
  FUN_00390ad0();
  FUN_00390e00();
  this_ptr[0x10] = 0;
  // [STATIC_INIT: property registration]
  if (g_02703603 == '\0') {
    FUN_00391130();
    FUN_00e87980();
  }
  this_ptr[0x11] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_02703603 == '\0') {
    FUN_003912c0();
    FUN_00e87980();
  }
  FUN_00391450();
  FUN_00391780();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_02703603 == '\0') {
    FUN_00391ab0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa1) = 0;
  // [STATIC_INIT: property registration]
  if (g_02703603 == '\0') {
    FUN_00391c40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa2) = 0;
  // [STATIC_INIT: property registration]
  if (g_02703603 == '\0') {
    FUN_00391dd0();
    FUN_00e87980();
  }
  return;
}

