// Function: FUN_0053e5a0
// Address: 0053e5a0
// Size: 705 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUTimeline"
//   "MUTrack"
//   "MUAudioSource"
//   "MUPart"
//   "MUDocument"
//   "_trackIndex"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053e5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_0053c980();
  *unaff_RDI = &DAT_024d2168;
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053e9b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDocument");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053eaa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053eb90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPart");
  }
  puVar4 = unaff_RDI + 0x13;
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053ec80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSource",param_3,param_4,puVar4);
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053ed70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  FUN_0053ee60();
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0270c188 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0270c150 = FUN_0015e5d0();
        _DAT_0270c148 = "_trackIndex";
        _DAT_0270c158 = 0;
        _DAT_0270c160 = 0x6910;
        _DAT_0270c168 = "GNInt";
        _DAT_0270c170 = 0;
        uRam000000000270c178 = 0;
        _DAT_0270c180 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


