// Function: FUN_0057dbf0
// Address: 0057dbf0
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "_cancelDelegate"
//   "GNOperationCancelDelegate"
//   "MUMPDReader"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0057dbf0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_027107e0 == '\0') {
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
      DAT_027107c0 = (iVar1 != 0) << 6 | 0x82;
      _DAT_027107a8 = "_cancelDelegate";
      _DAT_027107b0 = &DAT_027036e8;
      _DAT_027107b8 = 0;
      _DAT_027107c8 = 0;
      uRam00000000027107d0 = 0;
      _DAT_027107d8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027107e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0278c920 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026cf630 = "GNOperationCancelDelegate";
          DAT_026cf640 = 0;
          _DAT_026cf638 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_027107a8;
}


