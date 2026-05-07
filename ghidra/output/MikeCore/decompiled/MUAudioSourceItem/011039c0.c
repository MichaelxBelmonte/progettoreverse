// Function: FUN_011039c0
// Address: 011039c0
// Size: 504 bytes
// Class: MUAudioSourceItem
// String references:
//   "bool"
//   "MUAudioComponent"
//   "MUAudioSourceItem"
//   "MUAudioSourceElement"
//   "_audioSourceComponent"
//   "_audioSourceComponents"
//   "_suggestsSeparateComponentRenderers"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011039c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025d9310;
  unaff_RDI[7] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponent";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioComponent");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103d00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponents";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103df0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponents";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791348 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791310 = FUN_001156b0();
        _DAT_02791308 = "_suggestsSeparateComponentRenderers";
        _DAT_02791318 = 0;
        _DAT_02791320 = 0x6200;
        _DAT_02791328 = "bool";
        _DAT_02791330 = 0;
        uRam0000000002791338 = 0;
        _DAT_02791340 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


