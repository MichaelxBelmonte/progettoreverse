// Function: FUN_00835de0
// Address: 00835de0
// Size: 818 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNRunLoopObserverDelegate"
//   "GNRunLoopObserver"
//   "MUTrack"
//   "GNCursor"
//   "GNPropertyObserver"
//   "GNImage"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00835de0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_001b3bf0();
  unaff_RDI[0x3f] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0x40] = &DAT_02582380;
  if (DAT_026d0a20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02732cb0 = "GNRunLoopObserverDelegate";
      DAT_02732cc0 = 0;
      _DAT_02732cb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0262cd28;
  unaff_RDI[2] = &DAT_0262d8b0;
  unaff_RDI[0x3c] = &DAT_0262d8f0;
  unaff_RDI[0x3f] = &DAT_0262d920;
  unaff_RDI[0x40] = &DAT_0262d970;
  unaff_RDI[0x41] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCursor");
  }
  unaff_RDI[0x42] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836340();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCursor");
  }
  unaff_RDI[0x43] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836430();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  unaff_RDI[0x44] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836520();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  unaff_RDI[0x45] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836610();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRunLoopObserver");
  }
  return;
}


