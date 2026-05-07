// Function: FUN_0116a8f0
// Address: 0116a8f0
// Size: 913 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUElement"
//   "MULSSGenerator"
//   "GNInt"
//   "MUComponentSpectrumRenderer"
//   "MULSSComponentRenderer"
//   "MULSSElementRenderer"
//   "_assembledElementRendererCount"
//   "MUSpectrumShaperDisplayInfoBuffer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0116a8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_010f3160();
  *unaff_RDI = &DAT_025e3768;
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116ae80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  puVar4 = unaff_RDI + 0x1e;
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116af70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSElementRenderer",param_3,param_4,puVar4);
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSElementRenderer");
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a5288 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a5250 = FUN_0116a2e0();
        _DAT_027a5248 = "_assembledElementRendererCount";
        _DAT_027a5258 = 0;
        _DAT_027a5260 = 0x6900;
        _DAT_027a5268 = "GNInt";
        _DAT_027a5270 = 0;
        uRam00000000027a5278 = 0;
        _DAT_027a5280 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0116b150();
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b230();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSComponentRenderer");
  }
  unaff_RDI[0x23] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b320();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUComponentSpectrumRenderer");
  }
  unaff_RDI[0x24] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b410();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0x25] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b500();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectrumShaperDisplayInfoBuffer");
  }
  return;
}


