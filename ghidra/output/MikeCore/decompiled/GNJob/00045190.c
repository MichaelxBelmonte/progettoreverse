// Function: FUN_00045190
// Address: 00045190
// Size: 512 bytes
// Class: GNJob
// String references:
//   "GNJob"
//   "_backgroundJobObserver"
//   "GNBackgroundJobObserver"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00045190(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_026d2000 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_0278c910 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026d1ef8 = FUN_00d4fe50();
          _DAT_026d1ee0 = "GNJob";
          _DAT_026d1ee8 = 0x60;
          _DAT_026d1ef0 = FUN_000443f0;
          _DAT_026d1f00 = 0;
          uRam00000000026d1f08 = 0;
          _DAT_026d1f10 = 0;
          _DAT_026d1f88 = 0;
          uRam00000000026d1f90 = 0;
          _DAT_026d1f98 = 0;
          DAT_026d1f9a = 1;
          _DAT_026d1f18 = 0;
          uRam00000000026d1f20 = 0;
          _DAT_026d1f28 = 0;
          uRam00000000026d1f30 = 0;
          _DAT_026d1f38 = 0;
          uRam00000000026d1f40 = 0;
          _DAT_026d1f48 = 0;
          uRam00000000026d1f50 = 0;
          _DAT_026d1f58 = 0;
          uRam00000000026d1f60 = 0;
          _DAT_026d1f68 = 0;
          uRam00000000026d1f70 = 0;
          _DAT_026d1f78 = 0;
          uRam00000000026d1f80 = 0;
          DAT_026d1fa3 = 0;
          _DAT_026d1f9b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_0278c968 = (iVar1 != 0) << 6 | 0x82;
      _DAT_0278c950 = "_backgroundJobObserver";
      _DAT_0278c958 = &DAT_026d1ee0;
      _DAT_0278c960 = 0;
      _DAT_0278c970 = 0;
      uRam000000000278c978 = 0;
      _DAT_0278c980 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0278c990 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0278c9a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d2010 = "GNBackgroundJobObserver";
          DAT_026d2020 = 0;
          _DAT_026d2018 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_0278c950;
}


