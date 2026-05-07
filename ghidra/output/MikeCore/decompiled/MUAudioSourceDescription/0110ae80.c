// Function: FUN_0110ae80
// Address: 0110ae80
// Size: 610 bytes
// Class: MUAudioSourceDescription
// String references:
//   "MUAudioSourceComponent"
//   "MUAudioSourceDescription"
//   "MUAudioSourceElement"
//   "_audioSourceElements"
//   "_audioSourceElement"


void FUN_0110ae80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *unaff_RDI = &DAT_025d9690;
  unaff_RDI[7] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b200();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b2f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b3e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b4d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent",param_3,param_4,puVar11);
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b5c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b6b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceElements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  return;
}


