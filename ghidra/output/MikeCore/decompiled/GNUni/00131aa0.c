// Function: FUN_00131aa0
// Address: 00131aa0
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MDExportAudioController"
//   "_exportDelegate"
//   "MDExportAudioDelegate"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00131aa0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_026e2698 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_026e2658 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026e25a8 = FUN_00015ff0();
          _DAT_026e2590 = "MDExportAudioController";
          _DAT_026e2598 = 0xf0;
          _DAT_026e25a0 = FUN_00130570;
          _DAT_026e25b0 = 0;
          uRam00000000026e25b8 = 0;
          _DAT_026e25c0 = 0;
          _DAT_026e2638 = 0;
          uRam00000000026e2640 = 0;
          _DAT_026e2648 = 0;
          DAT_026e264a = 1;
          _DAT_026e25c8 = 0;
          uRam00000000026e25d0 = 0;
          _DAT_026e25d8 = 0;
          uRam00000000026e25e0 = 0;
          _DAT_026e25e8 = 0;
          uRam00000000026e25f0 = 0;
          _DAT_026e25f8 = 0;
          uRam00000000026e2600 = 0;
          _DAT_026e2608 = 0;
          uRam00000000026e2610 = 0;
          _DAT_026e2618 = 0;
          uRam00000000026e2620 = 0;
          _DAT_026e2628 = 0;
          uRam00000000026e2630 = 0;
          DAT_026e2653 = 0;
          _DAT_026e264b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_026e2678 = (iVar1 != 0) << 6 | 0x80;
      _DAT_026e2660 = "_exportDelegate";
      _DAT_026e2668 = &DAT_026e2590;
      _DAT_026e2670 = 0;
      _DAT_026e2680 = 0;
      uRam00000000026e2688 = 0;
      _DAT_026e2690 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e26a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e26c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e26a8 = "MDExportAudioDelegate";
          DAT_026e26b8 = 0;
          _DAT_026e26b0 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_026e2660;
}


