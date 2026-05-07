// Function: FUN_005e4eb0
// Address: 005e4eb0
// Size: 968 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "_startTime"
//   "MUTimeJump"
//   "MUScrubbingTimeProgressor"
//   "MURenderer"
//   "_stopTime"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e4eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_005da070();
  *unaff_RDI = &DAT_024e25a0;
  unaff_RDI[2] = &DAT_024e2a70;
  unaff_RDI[5] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5440();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeJump");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ee18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ede0 = FUN_003235a0();
        _DAT_0271edd8 = "_stopTime";
        _DAT_0271ede8 = 0;
        _DAT_0271edf0 = 0x6400;
        _DAT_0271edf8 = "double";
        _DAT_0271ee00 = 0;
        uRam000000000271ee08 = 0;
        _DAT_0271ee10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ee60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ee28 = FUN_003235a0();
        _DAT_0271ee20 = "_startTime";
        _DAT_0271ee30 = 0;
        _DAT_0271ee38 = 0x6400;
        _DAT_0271ee40 = "double";
        _DAT_0271ee48 = 0;
        uRam000000000271ee50 = 0;
        _DAT_0271ee58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5530();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScrubbingTimeProgressor");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5620();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  puVar4 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5710();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver",param_3,param_4,puVar4);
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5800();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e58f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  FUN_005e59e0();
  FUN_005e5ac0();
  return;
}


