// Function: FUN_00cc3490
// Address: 00cc3490
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNPropertyObserverRegistration"
//   "_observer"
//   "GNPropertyObserver"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00cc3490(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02774168 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02774128 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_02774078 = FUN_00d4fe50();
          _DAT_02774060 = "GNPropertyObserverRegistration";
          _DAT_02774068 = 0x40;
          _DAT_02774070 = FUN_00cc13c0;
          _DAT_02774080 = 0;
          uRam0000000002774088 = 0;
          _DAT_02774090 = 0;
          _DAT_02774108 = 0;
          uRam0000000002774110 = 0;
          _DAT_02774118 = 0;
          DAT_0277411a = 1;
          _DAT_02774098 = 0;
          uRam00000000027740a0 = 0;
          _DAT_027740a8 = 0;
          uRam00000000027740b0 = 0;
          _DAT_027740b8 = 0;
          uRam00000000027740c0 = 0;
          _DAT_027740c8 = 0;
          uRam00000000027740d0 = 0;
          _DAT_027740d8 = 0;
          uRam00000000027740e0 = 0;
          _DAT_027740e8 = 0;
          uRam00000000027740f0 = 0;
          _DAT_027740f8 = 0;
          uRam0000000002774100 = 0;
          DAT_02774123 = 0;
          _DAT_0277411b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_02774148 = (iVar1 != 0) << 6 | 0x82;
      _DAT_02774130 = "_observer";
      _DAT_02774138 = &DAT_02774060;
      _DAT_02774140 = 0;
      _DAT_02774150 = 0;
      uRam0000000002774158 = 0;
      _DAT_02774160 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02774170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ea710 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f7680 = "GNPropertyObserver";
          DAT_026f7690 = 0;
          _DAT_026f7688 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_02774130;
}


