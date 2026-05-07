// Function: FUN_011b2370
// Address: 011b2370
// Size: 547 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperDisplayInfo"
//   "MUSpectrumShaperSpectrumType"
//   "_spectrumType"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_011b2370(void)

{
  int iVar1;
  
  if (DAT_027b2628 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b2610 = _DAT_0238fcc0;
      uRam00000000027b2614 = _UNK_0238fcc4;
      uRam00000000027b2618 = _UNK_0238fcc8;
      uRam00000000027b261c = _UNK_0238fccc;
      DAT_027b2620 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b2660 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b2630 = "MUSpectrumShaperSpectrumType";
      _DAT_027b2638 = 4;
      DAT_027b263c = DAT_027b2620;
      _DAT_027b2640 = &DAT_027b2610;
      _DAT_027b2648 = &DAT_027b25e0;
      _DAT_027b2650 = 0;
      uRam00000000027b2658 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027b25d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027b2588 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027b24d8 = FUN_00d4fe50();
          _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
          _DAT_027b24c8 = 0x20;
          _DAT_027b24d0 = FUN_011b1f40;
          _DAT_027b24e0 = 0;
          uRam00000000027b24e8 = 0;
          _DAT_027b24f0 = 0;
          _DAT_027b2568 = 0;
          uRam00000000027b2570 = 0;
          _DAT_027b2578 = 0;
          DAT_027b257a = 1;
          _DAT_027b24f8 = 0;
          uRam00000000027b2500 = 0;
          _DAT_027b2508 = 0;
          uRam00000000027b2510 = 0;
          _DAT_027b2518 = 0;
          uRam00000000027b2520 = 0;
          _DAT_027b2528 = 0;
          uRam00000000027b2530 = 0;
          _DAT_027b2538 = 0;
          uRam00000000027b2540 = 0;
          _DAT_027b2548 = 0;
          uRam00000000027b2550 = 0;
          _DAT_027b2558 = 0;
          uRam00000000027b2560 = 0;
          DAT_027b2583 = 0;
          _DAT_027b257b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027b2590 = "_spectrumType";
      _DAT_027b2598 = &DAT_027b24c0;
      _DAT_027b25a0 = 0;
      _DAT_027b25a8 = 0x6500;
      _DAT_027b25b0 = "MUSpectrumShaperSpectrumType";
      _DAT_027b25b8 = &DAT_027b2630;
      _DAT_027b25c0 = 0;
      uRam00000000027b25c8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027b2590;
}


