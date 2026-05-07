// Function: FUN_00bf5290
// Address: 00bf5290
// Size: 515 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf5290(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_00c42440();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0017fbd0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < DAT_02802630) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_001bcb00();
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
    FUN_00d50c00();
    FUN_00e87770();
    FUN_00e87920();
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}


