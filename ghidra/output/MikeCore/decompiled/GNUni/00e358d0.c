// Function: FUN_00e358d0
// Address: 00e358d0
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNOperationProgressObserver"
//   "_observer"
//   "GNOperationProgressScalingAdapter"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00e358d0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02786430 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_027863f0 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_02786340 = FUN_00d4fe50();
          _DAT_02786328 = "GNOperationProgressScalingAdapter";
          _DAT_02786330 = 0x28;
          _DAT_02786338 = FUN_00e35410;
          _DAT_02786348 = 0;
          uRam0000000002786350 = 0;
          _DAT_02786358 = 0;
          _DAT_027863d0 = 0;
          uRam00000000027863d8 = 0;
          _DAT_027863e0 = 0;
          DAT_027863e2 = 2;
          _DAT_02786360 = 0;
          uRam0000000002786368 = 0;
          _DAT_02786370 = 0;
          uRam0000000002786378 = 0;
          _DAT_02786380 = 0;
          uRam0000000002786388 = 0;
          _DAT_02786390 = 0;
          uRam0000000002786398 = 0;
          _DAT_027863a0 = 0;
          uRam00000000027863a8 = 0;
          _DAT_027863b0 = 0;
          uRam00000000027863b8 = 0;
          _DAT_027863c0 = 0;
          uRam00000000027863c8 = 0;
          DAT_027863eb = 0;
          _DAT_027863e3 = 0;
          ___cxa_guard_release();
        }
      }
      DAT_02786410 = (iVar1 != 0) << 6 | 0x80;
      _DAT_027863f8 = "_observer";
      _DAT_02786400 = &DAT_02786328;
      _DAT_02786408 = 0;
      _DAT_02786418 = 0;
      uRam0000000002786420 = 0;
      _DAT_02786428 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02786438 == '\0') {
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
  return &DAT_027863f8;
}


