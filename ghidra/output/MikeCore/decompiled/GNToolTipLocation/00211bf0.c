// Function: FUN_00211bf0
// Address: 00211bf0
// Size: 519 bytes
// Class: GNToolTipLocation
// String references:
//   "GNToolTipLocation"
//   "_toolTipLocation"
//   "GNToolTipController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00211bf0(void)

{
  int iVar1;
  
  if (DAT_026d9f48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9f30 = _DAT_0238fcc0;
      uRam00000000026d9f34 = _UNK_0238fcc4;
      uRam00000000026d9f38 = _UNK_0238fcc8;
      uRam00000000026d9f3c = _UNK_0238fccc;
      DAT_026d9f40 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d9f80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d9f50 = "GNToolTipLocation";
      _DAT_026d9f58 = 4;
      DAT_026d9f5c = DAT_026d9f40;
      _DAT_026d9f60 = &DAT_026d9f30;
      _DAT_026d9f68 = &DAT_026d9f00;
      _DAT_026d9f70 = 0;
      uRam00000000026d9f78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027fda60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f5da0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fd818 = FUN_00d4fe50();
          _DAT_027fd800 = "GNToolTipController";
          _DAT_027fd808 = 0x80;
          _DAT_027fd810 = FUN_00210510;
          _DAT_027fd820 = 0;
          uRam00000000027fd828 = 0;
          _DAT_027fd830 = 0;
          uRam00000000027fd838 = 0;
          _DAT_027fd840 = 0;
          uRam00000000027fd848 = 0;
          _DAT_027fd850 = 0;
          uRam00000000027fd858 = 0;
          _DAT_027fd860 = 0;
          uRam00000000027fd868 = 0;
          _DAT_027fd870 = 0;
          uRam00000000027fd878 = 0;
          _DAT_027fd880 = 0;
          uRam00000000027fd888 = 0;
          _DAT_027fd890 = 0;
          uRam00000000027fd898 = 0;
          _DAT_027fd8a0 = 0;
          uRam00000000027fd8a8 = 0;
          _DAT_027fd8b0 = 0;
          uRam00000000027fd8b8 = 0;
          _DAT_027fd8c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027fda20 = "_toolTipLocation";
      _DAT_027fda28 = &DAT_027fd800;
      _DAT_027fda30 = 0;
      _DAT_027fda38 = 0x6500;
      _DAT_027fda40 = "GNToolTipLocation";
      _DAT_027fda48 = &DAT_026d9f50;
      _DAT_027fda50 = 0;
      uRam00000000027fda58 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027fda20;
}


