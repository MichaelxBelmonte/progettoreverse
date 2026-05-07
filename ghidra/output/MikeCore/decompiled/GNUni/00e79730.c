// Function: FUN_00e79730
// Address: 00e79730
// Size: 711 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNCelemonyAccountClient"
//   "GNLicenseContext"
//   "GNTimeInterval"
//   "_timeout"
//   "_isDemo"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e79730(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00044470();
  *unaff_RDI = &DAT_025878c0;
  unaff_RDI[2] = &DAT_02587c78;
  unaff_RDI[3] = &DAT_02587cb0;
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00e79b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLicenseContext");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00e79bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCelemonyAccountClient");
  }
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02788cb0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02788c78 = FUN_00098010();
        _DAT_02788c70 = "_isDemo";
        _DAT_02788c80 = 0;
        _DAT_02788c88 = 0x6200;
        _DAT_02788c90 = "bool";
        _DAT_02788c98 = 0;
        uRam0000000002788ca0 = 0;
        _DAT_02788ca8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00e79ce0();
  FUN_00e79dc0();
  FUN_00e79ea0();
  FUN_00e79f80();
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00e7a060();
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02788ee8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02788eb0 = FUN_00098010();
        _DAT_02788ea8 = "_timeout";
        _DAT_02788eb8 = 0;
        _DAT_02788ec0 = 0x6400;
        _DAT_02788ec8 = "GNTimeInterval";
        _DAT_02788ed0 = 0;
        uRam0000000002788ed8 = 0;
        _DAT_02788ee0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


