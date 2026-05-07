// Function: FUN_0005aa20
// Address: 0005aa20
// Size: 1154 bytes
// Class: GNResponder
// String references:
//   "GNResponder"
//   "bool"
//   "GNWindow"
//   "GNUni"
//   "GNDocumentController"
//   "GNRootView"
//   "GNObject"
//   "GNLocalizer"
//   "GNView"
//   "_windowControllers"
//   "GNToolbar"
//   "_isControllingWindow"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005aa20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00006550();
  *unaff_RDI = &DAT_026a2d80;
  unaff_RDI[2] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b0e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  unaff_RDI[3] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b1d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  unaff_RDI[4] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b2c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_windowControllers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDocumentController");
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b3b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNToolbar");
  }
  puVar4 = unaff_RDI + 6;
  unaff_RDI[6] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b4a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView",param_3,param_4,puVar4);
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d5910 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d58d8 = FUN_00015ff0();
        _DAT_026d58d0 = "_isControllingWindow";
        _DAT_026d58e0 = 0;
        _DAT_026d58e8 = 0x6200;
        _DAT_026d58f0 = "bool";
        _DAT_026d58f8 = 0;
        uRam00000000026d5900 = 0;
        _DAT_026d5908 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLocalizer");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005b950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRootView");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_00015ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0005ba40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNResponder");
  }
  return;
}


