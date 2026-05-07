// ===================================================================
// GNLicenseActivationDataDecryptor — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 00009570
// ============================================================
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



// ============================================================
// 0056c060
// ============================================================
// Function: FUN_0056c060
// Address: 0056c060
// Size: 512 bytes
// Class: GNLicenseActivationDataDecryptor
// String references:
//   "GNLicenseActivationDataDecryptor"
//   "GNLicenseContext"
//   "_activationDataDecryptor"

void* FUN_0056c060(void)

{
  int iVar1;
  int iVar2;
  
  // [STATIC_INIT: property registration]
      g_02788a08 = (iVar1 != 0) << 6 | 0x80;
      g_027889f0 = "_activationDataDecryptor";
      g_027889f8 = &g_0270dba0;
      g_02788a00 = 0;
      g_02788a10 = 0;
      ram_0000000002788a18 = 0;
      g_02788a20 = 0;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &g_027889f0;
}

