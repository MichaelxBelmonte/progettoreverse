// Function: FUN_01f4aa70
// Address: 01f4aa70
// Size: 512 bytes
// Class: GNHeartbeatHandlerRegistration
// String references:
//   "GNHeartbeatHandlerRegistration"
//   "GNHeartbeatHandler"
//   "_handler"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01f4aa70(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02800318 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02800290 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_028001e0 = FUN_00d4fe50();
          _DAT_028001c8 = "GNHeartbeatHandlerRegistration";
          _DAT_028001d0 = 0x28;
          _DAT_028001d8 = FUN_01f4a4b0;
          _DAT_028001e8 = 0;
          uRam00000000028001f0 = 0;
          _DAT_028001f8 = 0;
          _DAT_02800270 = 0;
          uRam0000000002800278 = 0;
          _DAT_02800280 = 0;
          DAT_02800282 = 1;
          _DAT_02800200 = 0;
          uRam0000000002800208 = 0;
          _DAT_02800210 = 0;
          uRam0000000002800218 = 0;
          _DAT_02800220 = 0;
          uRam0000000002800228 = 0;
          _DAT_02800230 = 0;
          uRam0000000002800238 = 0;
          _DAT_02800240 = 0;
          uRam0000000002800248 = 0;
          _DAT_02800250 = 0;
          uRam0000000002800258 = 0;
          _DAT_02800260 = 0;
          uRam0000000002800268 = 0;
          DAT_0280028b = 0;
          _DAT_02800283 = 0;
          ___cxa_guard_release();
        }
      }
      DAT_028002f8 = (iVar1 != 0) << 6 | 0x82;
      _DAT_028002e0 = "_handler";
      _DAT_028002e8 = &DAT_028001c8;
      _DAT_028002f0 = 0;
      _DAT_02800300 = 0;
      uRam0000000002800308 = 0;
      _DAT_02800310 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02800320 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ff970 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e0230 = "GNHeartbeatHandler";
          DAT_026e0240 = 0;
          _DAT_026e0238 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_028002e0;
}


