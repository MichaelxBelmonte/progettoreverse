// Function: FUN_00832d80
// Address: 00832d80
// Size: 550 bytes
// Class: MUPitchTitleDisplayMode
// String references:
//   "MUPitchTitleDisplayMode"
//   "MUElementPitchInspector"
//   "_pitchTitleDisplayMode"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00832d80(void)

{
  int iVar1;
  
  if (DAT_02715bc8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02715bb8 = 0x100000000;
      DAT_02715bc0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_02715c00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02715bd0 = "MUPitchTitleDisplayMode";
      _DAT_02715bd8 = 2;
      DAT_02715bdc = DAT_02715bc0;
      _DAT_02715be0 = &DAT_02715bb8;
      _DAT_02715be8 = &DAT_02715ba0;
      _DAT_02715bf0 = 0;
      uRam0000000002715bf8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02735208 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02735010 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02734f60 = FUN_00335590();
          _DAT_02734f48 = "MUElementPitchInspector";
          _DAT_02734f50 = 0x110;
          _DAT_02734f58 = FUN_008317f0;
          _DAT_02734f68 = 0;
          uRam0000000002734f70 = 0;
          _DAT_02734f78 = 0;
          _DAT_02734ff0 = 0;
          uRam0000000002734ff8 = 0;
          _DAT_02735000 = 0;
          DAT_02735002 = 1;
          _DAT_02734f80 = 0;
          uRam0000000002734f88 = 0;
          _DAT_02734f90 = 0;
          uRam0000000002734f98 = 0;
          _DAT_02734fa0 = 0;
          uRam0000000002734fa8 = 0;
          _DAT_02734fb0 = 0;
          uRam0000000002734fb8 = 0;
          _DAT_02734fc0 = 0;
          uRam0000000002734fc8 = 0;
          _DAT_02734fd0 = 0;
          uRam0000000002734fd8 = 0;
          _DAT_02734fe0 = 0;
          uRam0000000002734fe8 = 0;
          DAT_0273500b = 0;
          _DAT_02735003 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027351c8 = "_pitchTitleDisplayMode";
      _DAT_027351d0 = &DAT_02734f48;
      _DAT_027351d8 = 0;
      _DAT_027351e0 = 0x6500;
      _DAT_027351e8 = "MUPitchTitleDisplayMode";
      _DAT_027351f0 = &DAT_02715bd0;
      _DAT_027351f8 = 0;
      uRam0000000002735200 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027351c8;
}


