// Function: FUN_009e56ac
// Address: 009e56ac
// Size: 530 bytes
// Class: MUSpectrumShaper


ulonglong FUN_009e56ac(void)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  longlong unaff_RDI;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x58);
  uVar3 = *(undefined8 *)(lVar2 + 8);
  if ((*(char *)(lVar2 + 0x135) == '\0') ||
     (((*(byte *)(unaff_RDI + 0x61) & 4) != 0 && (*(char *)(unaff_RDI + 0x7b) == '\0')))) {
    puVar11 = (ulonglong *)(lVar2 + 0x120);
    bVar5 = false;
  }
  else {
    puVar11 = (ulonglong *)(lVar2 + 0x128);
    bVar5 = true;
  }
  uVar9 = *puVar11;
  pbVar4 = *(byte **)(unaff_RDI + 0x28);
  if (uVar9 == 0xffffffffffffffff) {
    pbVar13 = *(byte **)(unaff_RDI + 0x20);
  }
  else {
    pbVar13 = *(byte **)(unaff_RDI + 0x20);
    if (uVar9 < (ulonglong)((longlong)pbVar13 - (longlong)pbVar4)) {
      pbVar13 = pbVar4 + uVar9;
    }
  }
  pbVar7 = pbVar4;
  pbVar12 = pbVar4;
  if (pbVar4 != pbVar13) {
    uVar10 = **(undefined8 **)(unaff_RDI + 0x48);
    uVar1 = *(undefined1 *)(unaff_RDI + 0x78);
    while( true ) {
      pbVar7 = (byte *)FUN_009e63a2(uVar10,uVar3,uVar1);
      pbVar12 = *(byte **)(unaff_RDI + 0x28);
      if (pbVar12 == pbVar7) break;
      pbVar12 = pbVar12 + 1;
      *(byte **)(unaff_RDI + 0x28) = pbVar12;
      pbVar7 = pbVar13;
      if (pbVar12 == pbVar13) break;
      uVar10 = **(undefined8 **)(unaff_RDI + 0x48);
      uVar1 = *(undefined1 *)(unaff_RDI + 0x78);
    }
  }
  uVar14 = (ulonglong)(uint)((int)pbVar7 - (int)pbVar4);
  uVar9 = *(ulonglong *)(lVar2 + 0x120);
  if (uVar14 < uVar9) {
    uVar9 = 0;
  }
  else if (bVar5) {
    if ((*(char *)(lVar2 + 0x134) != '\0') && (uVar14 < *(ulonglong *)(lVar2 + 0x128))) {
      *(byte **)(unaff_RDI + 0x30) = pbVar12;
    }
    if (uVar14 != uVar9) {
      puVar8 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      if (puVar8 < *(undefined4 **)(unaff_RDI + 0xd0)) {
        FUN_009e5df8();
        puVar8 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      }
      *puVar8 = 7;
      *(ulonglong *)(puVar8 + 2) = uVar14;
      *(longlong *)(puVar8 + 4) = lVar2;
      *(byte **)(puVar8 + 6) = pbVar7;
      *(undefined4 **)(unaff_RDI + 0xd8) = puVar8;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(unaff_RDI + 0x58) = uVar3;
    uVar9 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    if (uVar14 < *(ulonglong *)(lVar2 + 0x128)) {
      puVar8 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      if (puVar8 < *(undefined4 **)(unaff_RDI + 0xd0)) {
        FUN_009e5df8();
        puVar8 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      }
      *puVar8 = 0xc;
      *(ulonglong *)(puVar8 + 2) = uVar14;
      *(longlong *)(puVar8 + 4) = lVar2;
      *(byte **)(puVar8 + 6) = pbVar7;
      *(undefined4 **)(unaff_RDI + 0xd8) = puVar8;
      pbVar7 = *(byte **)(unaff_RDI + 0x28);
    }
    *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(lVar2 + 0x10);
    if (pbVar7 == *(byte **)(unaff_RDI + 0x20)) {
      uVar6 = *(uint *)(lVar2 + 0x118) & 2;
    }
    else {
      uVar6 = *(byte *)(lVar2 + 0x18 + (ulonglong)*pbVar7) >> 1 & 1;
    }
    uVar9 = (ulonglong)(uVar6 != 0);
  }
  return uVar9;
}


