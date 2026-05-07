// Function: FUN_003ae120
// Address: 003ae120
// Size: 501 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ae120(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  unaff_RDI[0xe] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02502630;
  unaff_RDI[0xe] = &DAT_02502c10;
  FUN_003ae4b0();
  FUN_003ae7e0();
  FUN_003aeb10();
  FUN_003aee40();
  FUN_003af170();
  FUN_003af4a0();
  FUN_003af7d0();
  FUN_003afb00();
  FUN_003afe30();
  FUN_003b0160();
  FUN_003b0490();
  FUN_003b0750();
  FUN_003b0a10();
  FUN_003b0d40();
  return;
}


