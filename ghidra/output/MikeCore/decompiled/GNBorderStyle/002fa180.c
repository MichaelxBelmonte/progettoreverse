// Function: FUN_002fa180
// Address: 002fa180
// Size: 572 bytes
// Class: GNBorderStyle
// String references:
//   "GNBorderStyle"
//   "MDVolumeSlider"
//   "_knobBorderStyle"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_002fa180(void)

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
  if (DAT_026fecf0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fec18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026feb68 = FUN_001b37d0();
          _DAT_026feb50 = "MDVolumeSlider";
          _DAT_026feb58 = 0x220;
          _DAT_026feb60 = FUN_002f9670;
          _DAT_026feb70 = 0;
          uRam00000000026feb78 = 0;
          _DAT_026feb80 = 0;
          _DAT_026febf8 = 0;
          uRam00000000026fec00 = 0;
          _DAT_026fec08 = 0;
          DAT_026fec0a = 1;
          _DAT_026feb88 = 0;
          uRam00000000026feb90 = 0;
          _DAT_026feb98 = 0;
          uRam00000000026feba0 = 0;
          _DAT_026feba8 = 0;
          uRam00000000026febb0 = 0;
          _DAT_026febb8 = 0;
          uRam00000000026febc0 = 0;
          _DAT_026febc8 = 0;
          uRam00000000026febd0 = 0;
          _DAT_026febd8 = 0;
          uRam00000000026febe0 = 0;
          _DAT_026febe8 = 0;
          uRam00000000026febf0 = 0;
          DAT_026fec13 = 0;
          _DAT_026fec0b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026fecb0 = "_knobBorderStyle";
      _DAT_026fecb8 = &DAT_026feb50;
      _DAT_026fecc0 = 0;
      _DAT_026fecc8 = 0x6500;
      _DAT_026fecd0 = "GNBorderStyle";
      _DAT_026fecd8 = &DAT_026daa28;
      _DAT_026fece0 = 0;
      uRam00000000026fece8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026fecb0;
}


