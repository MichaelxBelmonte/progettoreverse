// Function: FUN_01e7d160
// Address: 01e7d160
// Size: 811 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNFilePath"
//   "GNFont"
//   "GNImage"


void FUN_01e7d160(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_001ab9a0();
  *unaff_RDI = &DAT_026742f8;
  FUN_01e7d770();
  FUN_01e7d850();
  FUN_01e7d930();
  unaff_RDI[10] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7da10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  FUN_01e7db00();
  FUN_01e7dbe0();
  FUN_01e7dcc0();
  FUN_01e7dda0();
  FUN_01e7de80();
  FUN_01e7df60();
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e040();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e130();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFont");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e220();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFont");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e310();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFont");
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e400();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFont");
  }
  FUN_01e7e4f0();
  FUN_01e7e5d0();
  return;
}


