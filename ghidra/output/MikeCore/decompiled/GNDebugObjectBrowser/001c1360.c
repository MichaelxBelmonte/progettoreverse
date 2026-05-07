// Function: FUN_001c1360
// Address: 001c1360
// Size: 512 bytes
// Class: GNDebugObjectBrowser
// String references:
//   "GNDebugObjectBrowser"
//   "_debugObjectBrowserDelegate"
//   "GNDebugObjectBrowserDelegate"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001c1360(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_026eb1b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_026eb158 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026eb0a8 = FUN_00015ff0();
          _DAT_026eb090 = "GNDebugObjectBrowser";
          _DAT_026eb098 = 0xc0;
          _DAT_026eb0a0 = FUN_001c0b00;
          _DAT_026eb0b0 = 0;
          uRam00000000026eb0b8 = 0;
          _DAT_026eb0c0 = 0;
          _DAT_026eb138 = 0;
          uRam00000000026eb140 = 0;
          _DAT_026eb148 = 0;
          DAT_026eb14a = 1;
          _DAT_026eb0c8 = 0;
          uRam00000000026eb0d0 = 0;
          _DAT_026eb0d8 = 0;
          uRam00000000026eb0e0 = 0;
          _DAT_026eb0e8 = 0;
          uRam00000000026eb0f0 = 0;
          _DAT_026eb0f8 = 0;
          uRam00000000026eb100 = 0;
          _DAT_026eb108 = 0;
          uRam00000000026eb110 = 0;
          _DAT_026eb118 = 0;
          uRam00000000026eb120 = 0;
          _DAT_026eb128 = 0;
          uRam00000000026eb130 = 0;
          DAT_026eb153 = 0;
          _DAT_026eb14b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_026eb198 = (iVar1 != 0) << 6 | 0x82;
      _DAT_026eb180 = "_debugObjectBrowserDelegate";
      _DAT_026eb188 = &DAT_026eb090;
      _DAT_026eb190 = 0;
      _DAT_026eb1a0 = 0;
      uRam00000000026eb1a8 = 0;
      _DAT_026eb1b0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026eb1c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026eb1e0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026eb1c8 = "GNDebugObjectBrowserDelegate";
          DAT_026eb1d8 = 0;
          _DAT_026eb1d0 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_026eb180;
}


