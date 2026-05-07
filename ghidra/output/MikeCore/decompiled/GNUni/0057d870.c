// Function: FUN_0057d870
// Address: 0057d870
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "_progressObserver"
//   "GNOperationProgressObserver"
//   "MUMPDReader"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0057d870(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02710798 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02710700 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_02703700 = FUN_00d4fe50();
          _DAT_027036e8 = "MUMPDReader";
          _DAT_027036f0 = 0x48;
          _DAT_027036f8 = FUN_00363fc0;
          _DAT_02703708 = 0;
          uRam0000000002703710 = 0;
          _DAT_02703718 = 0;
          _DAT_02703790 = 0;
          uRam0000000002703798 = 0;
          _DAT_027037a0 = 0;
          DAT_027037a2 = 3;
          _DAT_02703720 = 0;
          uRam0000000002703728 = 0;
          _DAT_02703730 = 0;
          uRam0000000002703738 = 0;
          _DAT_02703740 = 0;
          uRam0000000002703748 = 0;
          _DAT_02703750 = 0;
          uRam0000000002703758 = 0;
          _DAT_02703760 = 0;
          uRam0000000002703768 = 0;
          _DAT_02703770 = 0;
          uRam0000000002703778 = 0;
          _DAT_02703780 = 0;
          uRam0000000002703788 = 0;
          DAT_027037ab = 0;
          _DAT_027037a3 = 0;
          ___cxa_guard_release();
        }
      }
      DAT_02710778 = (iVar1 != 0) << 6 | 0x82;
      _DAT_02710760 = "_progressObserver";
      _DAT_02710768 = &DAT_027036e8;
      _DAT_02710770 = 0;
      _DAT_02710780 = 0;
      uRam0000000002710788 = 0;
      _DAT_02710790 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027107a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0278c930 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ceef0 = "GNOperationProgressObserver";
          DAT_026cef00 = 0;
          _DAT_026ceef8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_02710760;
}


