// Function: FUN_00e77b50
// Address: 00e77b50
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "_progressObserver"
//   "GNOperationProgressObserver"
//   "GNHTTPRequest"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00e77b50(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02788570 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02787f90 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_02787ee0 = FUN_00d4fe50();
          _DAT_02787ec8 = "GNHTTPRequest";
          _DAT_02787ed0 = 0xb8;
          _DAT_02787ed8 = FUN_00e741b0;
          _DAT_02787ee8 = 0;
          uRam0000000002787ef0 = 0;
          _DAT_02787ef8 = 0;
          _DAT_02787f70 = 0;
          uRam0000000002787f78 = 0;
          _DAT_02787f80 = 0;
          DAT_02787f82 = 2;
          _DAT_02787f00 = 0;
          uRam0000000002787f08 = 0;
          _DAT_02787f10 = 0;
          uRam0000000002787f18 = 0;
          _DAT_02787f20 = 0;
          uRam0000000002787f28 = 0;
          _DAT_02787f30 = 0;
          uRam0000000002787f38 = 0;
          _DAT_02787f40 = 0;
          uRam0000000002787f48 = 0;
          _DAT_02787f50 = 0;
          uRam0000000002787f58 = 0;
          _DAT_02787f60 = 0;
          uRam0000000002787f68 = 0;
          DAT_02787f8b = 0;
          _DAT_02787f83 = 0;
          ___cxa_guard_release();
        }
      }
      DAT_02788550 = (iVar1 != 0) << 6 | 0x82;
      _DAT_02788538 = "_progressObserver";
      _DAT_02788540 = &DAT_02787ec8;
      _DAT_02788548 = 0;
      _DAT_02788558 = 0;
      uRam0000000002788560 = 0;
      _DAT_02788568 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02788578 == '\0') {
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
  return &DAT_02788538;
}


