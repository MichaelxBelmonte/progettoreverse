// Function: FUN_00b15080
// Address: 00b15080
// Size: 500 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNTimer"
//   "GNTextField"
//   "GNProgressBar"


void FUN_00b15080(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_02545640;
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNProgressBar");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNProgressBar");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15730();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTimer");
  }
  return;
}


