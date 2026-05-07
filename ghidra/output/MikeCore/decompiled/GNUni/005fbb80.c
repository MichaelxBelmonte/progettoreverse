// Function: FUN_005fbb80
// Address: 005fbb80
// Size: 505 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNViewController"
//   "MUAudioRecorderCenterDelegate"
//   "MUDeviceContext"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fbb80(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00009570();
  unaff_RDI[0x29] = &DAT_025de6f0;
  if (DAT_026cbb60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02722bf0 = "MUAudioRecorderCenterDelegate";
      DAT_02722c00 = 0;
      _DAT_02722bf8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024ea8e8;
  unaff_RDI[2] = &DAT_024eb0c8;
  unaff_RDI[0x20] = &DAT_024eb110;
  unaff_RDI[0x21] = &DAT_024eb140;
  unaff_RDI[0x29] = &DAT_024eb170;
  unaff_RDI[0x2a] = 0;
  lVar2 = FUN_003708c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fbe10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDeviceContext");
  }
  unaff_RDI[0x2b] = 0;
  lVar2 = FUN_003708c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fbf00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  unaff_RDI[0x2c] = 0;
  lVar2 = FUN_003708c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fbff0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  return;
}


