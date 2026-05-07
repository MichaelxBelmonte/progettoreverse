// Function: FUN_01110970
// Address: 01110970
// Size: 680 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUComposition"
//   "_copiesAudioSources"
//   "MUBarSignatureMap"
//   "MUBarSignatureMapResultItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01110970(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00044470();
  *unaff_RDI = &DAT_025ca6a0;
  unaff_RDI[2] = &DAT_025caa90;
  unaff_RDI[3] = &DAT_025caac8;
  *(undefined1 *)((longlong)unaff_RDI + 0x59) = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02793ed0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02793e98 = FUN_011104e0();
        _DAT_02793e90 = "_copiesAudioSources";
        _DAT_02793ea0 = 0;
        _DAT_02793ea8 = 0x6200;
        _DAT_02793eb0 = "bool";
        _DAT_02793eb8 = 0;
        uRam0000000002793ec0 = 0;
        _DAT_02793ec8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01110d80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBarSignatureMap");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01110e70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBarSignatureMap");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01110f60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUComposition");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01111050();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBarSignatureMapResultItem");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_011104e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01111140();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBarSignatureMapResultItem");
  }
  return;
}


