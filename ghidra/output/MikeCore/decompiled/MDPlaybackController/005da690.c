// Function: FUN_005da690
// Address: 005da690
// Size: 547 bytes
// Class: MDPlaybackController
// String references:
//   "MDPlaybackController"
//   "MDPlaybackState"
//   "_playbackState"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005da690(void)

{
  int iVar1;
  
  if (DAT_0271cbe8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cbd0 = _DAT_0238fcc0;
      uRam000000000271cbd4 = _UNK_0238fcc4;
      uRam000000000271cbd8 = _UNK_0238fcc8;
      uRam000000000271cbdc = _UNK_0238fccc;
      DAT_0271cbe0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271cc20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cbf0 = "MDPlaybackState";
      _DAT_0271cbf8 = 4;
      DAT_0271cbfc = DAT_0271cbe0;
      _DAT_0271cc00 = &DAT_0271cbd0;
      _DAT_0271cc08 = &DAT_0271cba0;
      _DAT_0271cc10 = 0;
      uRam000000000271cc18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0271cb90 == '\0') {
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
      _DAT_0271cb50 = "_playbackState";
      _DAT_0271cb58 = &DAT_027021d0;
      _DAT_0271cb60 = 0;
      _DAT_0271cb68 = 0x6500;
      _DAT_0271cb70 = "MDPlaybackState";
      _DAT_0271cb78 = &DAT_0271cbf0;
      _DAT_0271cb80 = 0;
      uRam000000000271cb88 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271cb50;
}


