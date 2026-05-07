// Function: FUN_005f0340
// Address: 005f0340
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUTextField"
//   "MUTextFieldDragAndEditHandler"
//   "_dragAndEditHandler"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005f0340(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02720470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02720460 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0273e4c8 = FUN_001f8a30();
          _DAT_0273e4b0 = "MUTextField";
          _DAT_0273e4b8 = 0x250;
          _DAT_0273e4c0 = FUN_0047a060;
          _DAT_0273e4d0 = 0;
          uRam000000000273e4d8 = 0;
          _DAT_0273e4e0 = 0;
          _DAT_0273e558 = 0;
          uRam000000000273e560 = 0;
          _DAT_0273e568 = 0;
          DAT_0273e56a = 1;
          _DAT_0273e4e8 = 0;
          uRam000000000273e4f0 = 0;
          _DAT_0273e4f8 = 0;
          uRam000000000273e500 = 0;
          _DAT_0273e508 = 0;
          uRam000000000273e510 = 0;
          _DAT_0273e518 = 0;
          uRam000000000273e520 = 0;
          _DAT_0273e528 = 0;
          uRam000000000273e530 = 0;
          _DAT_0273e538 = 0;
          uRam000000000273e540 = 0;
          _DAT_0273e548 = 0;
          uRam000000000273e550 = 0;
          DAT_0273e573 = 0;
          _DAT_0273e56b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_0273e598 = (iVar1 != 0) << 6 | 0x82;
      _DAT_0273e580 = "_dragAndEditHandler";
      _DAT_0273e588 = &DAT_0273e4b0;
      _DAT_0273e590 = 0;
      _DAT_0273e5a0 = 0;
      uRam000000000273e5a8 = 0;
      _DAT_0273e5b0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0273e5c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027323d0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
          DAT_0271fb80 = 0;
          _DAT_0271fb78 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_0273e580;
}


