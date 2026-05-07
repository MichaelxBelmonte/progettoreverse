// Function: FUN_00009570
// Address: 00009570
// Size: 825 bytes
// Class: GNLicenseActivationDataDecryptor
// String references:
//   "Melodyne"
//   "GNLicenseActivationDataDecryptor"
//   "GNLicenseILokProcessor"

void FUN_00009570(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000067e0();
  this_ptr[0x20] = &g_024bfcd8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x21] = &g_024bfd08;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024d9fc0;
  this_ptr[2] = &g_024da780;
  this_ptr[0x20] = &g_024da7c8;
  this_ptr[0x21] = &g_024da7f8;
  FUN_000099c0();
  FUN_00009cb0();
  *(void*)(this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272667b == '\0') {
    FUN_00009f30();
    FUN_00e87980();
  }
  FUN_0000a0a0();
  FUN_0000a390();
  FUN_0000a680();
  this_ptr[0x28] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272667b == '\0') {
    FUN_0000a970();
    FUN_00e87980();
  }
  return;
}

