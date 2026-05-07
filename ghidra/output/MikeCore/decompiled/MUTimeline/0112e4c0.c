// Function: FUN_0112e4c0
// Address: 0112e4c0
// Size: 700 bytes
// Class: MUTimeline
// String references:
//   "MUTimeline"
//   "MUPart"
//   "MUQuarterSequence"
//   "MUPerformance"
//   "_composition"
//   "MUPulseTimeline"
//   "MUCompositionDescription"
//   "MUCompositionLayout"


void FUN_0112e4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 *puVar11;
  
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
  *unaff_RDI = &DAT_025e90a0;
  unaff_RDI[7] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112e8f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112e9e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPerformance");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ead0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterSequence");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ebc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUCompositionDescription",param_3,param_4,puVar11);
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ecb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUCompositionLayout");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112eda0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ee90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseTimeline");
  }
  return;
}


