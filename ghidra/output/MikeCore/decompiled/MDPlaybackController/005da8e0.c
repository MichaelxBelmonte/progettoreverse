// Function: FUN_005da8e0
// Address: 005da8e0
// Size: 560 bytes
// Class: MDPlaybackController
// String references:
//   "MDPlaybackController"
//   "MDPlaybackSetup"
//   "_playbackSetup"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005da8e0(void)

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
  if (DAT_0271cc68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271cb00 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027021e8 = FUN_00d4fe50();
          _DAT_027021d0 = "MDPlaybackController";
          _DAT_027021d8 = 0x28;
          _DAT_027021e0 = FUN_003153d0;
          _DAT_027021f0 = 0;
          uRam00000000027021f8 = 0;
          _DAT_02702200 = 0;
          _DAT_02702278 = 0;
          uRam0000000002702280 = 0;
          _DAT_02702288 = 0;
          DAT_0270228a = 1;
          _DAT_02702208 = 0;
          uRam0000000002702210 = 0;
          _DAT_02702218 = 0;
          uRam0000000002702220 = 0;
          _DAT_02702228 = 0;
          uRam0000000002702230 = 0;
          _DAT_02702238 = 0;
          uRam0000000002702240 = 0;
          _DAT_02702248 = 0;
          uRam0000000002702250 = 0;
          _DAT_02702258 = 0;
          uRam0000000002702260 = 0;
          _DAT_02702268 = 0;
          uRam0000000002702270 = 0;
          DAT_02702293 = 0;
          _DAT_0270228b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0271cc28 = "_playbackSetup";
      _DAT_0271cc30 = &DAT_027021d0;
      _DAT_0271cc38 = 0;
      _DAT_0271cc40 = 0x6500;
      _DAT_0271cc48 = "MDPlaybackSetup";
      _DAT_0271cc50 = &DAT_0271cca8;
      _DAT_0271cc58 = 0;
      uRam000000000271cc60 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271cc28;
}


