// Function: FUN_010f4e00
// Address: 010f4e00
// Size: 1193 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_010f4e00(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010f5320();
  *this_ptr = &g_025ccea8;
  FUN_010f5b10();
  this_ptr[0xe] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f5d90();
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f5f00();
    FUN_00e87980();
  }
  this_ptr[0x10] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f6070();
    FUN_00e87980();
  }
  FUN_010f61e0();
  *(void*)(this_ptr + 0x12) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f6460();
    FUN_00e87980();
  }
  this_ptr[0x13] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e32db == '\0') {
    FUN_010f65d0();
    FUN_00e87980();
  }
  return;
}

