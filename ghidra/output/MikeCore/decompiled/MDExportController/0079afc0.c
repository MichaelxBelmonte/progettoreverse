// Function: FUN_0079afc0
// Address: 0079afc0
// Size: 532 bytes
// Class: MDExportController
// String references:
//   "MDExportController"
//   "MDPlaybackSetup"
//   "_lastSetup"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0079afc0(void)

{
  int iVar1;
  
  if (DAT_0271cca0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cc90 = 0x100000000;
      _DAT_0271cc98 = 2;
      DAT_0271cc9c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271ccd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cca8 = "MDPlaybackSetup";
      _DAT_0271ccb0 = 3;
      DAT_0271ccb4 = DAT_0271cc9c;
      _DAT_0271ccb8 = &DAT_0271cc90;
      _DAT_0271ccc0 = &DAT_0271cc70;
      _DAT_0271ccc8 = 0;
      uRam000000000271ccd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0272a068 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0272a028 = "_lastSetup";
      _DAT_0272a030 = &DAT_026e18c0;
      _DAT_0272a038 = 0;
      _DAT_0272a040 = 0x6500;
      _DAT_0272a048 = "MDPlaybackSetup";
      _DAT_0272a050 = &DAT_0271cca8;
      _DAT_0272a058 = 0;
      uRam000000000272a060 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0272a028;
}


