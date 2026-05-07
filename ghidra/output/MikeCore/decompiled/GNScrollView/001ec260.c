// Function: FUN_001ec260
// Address: 001ec260
// Size: 544 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "GNBorderStyle"
//   "_borderStyle"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001ec260(void)

{
  int iVar1;
  undefined4 extraout_XMM0_Da;
  
  if (DAT_026daa20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      DAT_026daa18 = FUN_000f9810(extraout_XMM0_Da,0);
      ___cxa_guard_release();
    }
  }
  if (DAT_026daa58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026daa28 = "GNBorderStyle";
      _DAT_026daa30 = 0x16;
      DAT_026daa34 = DAT_026daa18;
      _DAT_026daa38 = &DAT_026da9c0;
      _DAT_026daa40 = &DAT_026da900;
      _DAT_026daa48 = 0;
      uRam00000000026daa50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027e59e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f0e00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f8e78 = FUN_0006d940();
          _DAT_026f8e60 = "GNScrollView";
          _DAT_026f8e68 = 0x1c0;
          _DAT_026f8e70 = FUN_00074e80;
          _DAT_026f8e80 = 0;
          uRam00000000026f8e88 = 0;
          _DAT_026f8e90 = 0;
          uRam00000000026f8e98 = 0;
          _DAT_026f8ea0 = 0;
          uRam00000000026f8ea8 = 0;
          _DAT_026f8eb0 = 0;
          uRam00000000026f8eb8 = 0;
          _DAT_026f8ec0 = 0;
          uRam00000000026f8ec8 = 0;
          _DAT_026f8ed0 = 0;
          uRam00000000026f8ed8 = 0;
          _DAT_026f8ee0 = 0;
          uRam00000000026f8ee8 = 0;
          _DAT_026f8ef0 = 0;
          uRam00000000026f8ef8 = 0;
          _DAT_026f8f00 = 0;
          uRam00000000026f8f08 = 0;
          _DAT_026f8f10 = 0;
          uRam00000000026f8f18 = 0;
          _DAT_026f8f20 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027e59a0 = "_borderStyle";
      _DAT_027e59a8 = &DAT_026f8e60;
      _DAT_027e59b0 = 0;
      _DAT_027e59b8 = 0x6500;
      _DAT_027e59c0 = "GNBorderStyle";
      _DAT_027e59c8 = &DAT_026daa28;
      _DAT_027e59d0 = 0;
      uRam00000000027e59d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027e59a0;
}


