// Function: FUN_009e5262
// Address: 009e5262
// Size: 547 bytes
// Class: MUSpectrumShaper


ulonglong FUN_009e5262(void)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  bool bVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong unaff_RDI;
  ulonglong uVar13;
  byte *pbVar14;
  ulonglong *local_50;
  ulonglong *local_40;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x58);
  bVar1 = *(byte *)(*(longlong *)(lVar2 + 8) + 0x18);
  if (*(char *)(lVar2 + 0x135) == '\0') {
    puVar9 = (ulonglong *)(lVar2 + 0x120);
    bVar5 = false;
  }
  else if (((*(byte *)(unaff_RDI + 0x61) & 4) == 0) ||
          (puVar9 = (ulonglong *)(lVar2 + 0x120), *(char *)(unaff_RDI + 0x7b) != '\0')) {
    puVar9 = (ulonglong *)(lVar2 + 0x128);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  local_40 = (ulonglong *)(lVar2 + 0x128);
  local_50 = (ulonglong *)(lVar2 + 0x120);
  uVar12 = *puVar9;
  pbVar3 = *(byte **)(unaff_RDI + 0x28);
  pbVar6 = pbVar3;
  pbVar14 = pbVar3;
  if (uVar12 == 0xffffffffffffffff) {
    pbVar10 = *(byte **)(unaff_RDI + 0x20);
  }
  else {
    pbVar10 = *(byte **)(unaff_RDI + 0x20);
    if (uVar12 < (ulonglong)((longlong)pbVar10 - (longlong)pbVar3)) {
      pbVar10 = pbVar3 + uVar12;
    }
  }
  while (pbVar6 != pbVar10) {
    bVar7 = *pbVar6;
    if (*(char *)(unaff_RDI + 0x78) != '\0') {
      bVar7 = (**(code **)(**(longlong **)(**(longlong **)(unaff_RDI + 0x50) + 8) + 0x28))();
    }
    pbVar14 = *(byte **)(unaff_RDI + 0x28);
    if (bVar7 != bVar1) break;
    *(byte **)(unaff_RDI + 0x28) = pbVar14 + 1;
    pbVar6 = pbVar14 + 1;
    pbVar14 = pbVar10;
  }
  uVar13 = (ulonglong)(uint)((int)pbVar14 - (int)pbVar3);
  uVar12 = *local_50;
  if (uVar13 < uVar12) {
    uVar12 = 0;
  }
  else if (bVar5) {
    if ((*(char *)(lVar2 + 0x134) != '\0') && (uVar13 < *local_40)) {
      *(byte **)(unaff_RDI + 0x30) = pbVar14;
    }
    if (uVar13 != uVar12) {
      puVar11 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      if (puVar11 < *(undefined4 **)(unaff_RDI + 0xd0)) {
        FUN_009e5df8();
        puVar11 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      }
      *puVar11 = 7;
      *(ulonglong *)(puVar11 + 2) = uVar13;
      *(longlong *)(puVar11 + 4) = lVar2;
      *(byte **)(puVar11 + 6) = pbVar14;
      *(undefined4 **)(unaff_RDI + 0xd8) = puVar11;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(unaff_RDI + 0x58) = uVar4;
    uVar12 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    if (uVar13 < *local_40) {
      puVar11 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      if (puVar11 < *(undefined4 **)(unaff_RDI + 0xd0)) {
        FUN_009e5df8();
        puVar11 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      }
      *puVar11 = 10;
      *(ulonglong *)(puVar11 + 2) = uVar13;
      *(longlong *)(puVar11 + 4) = lVar2;
      *(byte **)(puVar11 + 6) = pbVar14;
      *(undefined4 **)(unaff_RDI + 0xd8) = puVar11;
      pbVar14 = *(byte **)(unaff_RDI + 0x28);
    }
    *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(lVar2 + 0x10);
    if (pbVar14 == *(byte **)(unaff_RDI + 0x20)) {
      uVar8 = *(uint *)(lVar2 + 0x118) & 2;
    }
    else {
      uVar8 = *(byte *)(lVar2 + 0x18 + (ulonglong)*pbVar14) >> 1 & 1;
    }
    uVar12 = (ulonglong)(uVar8 != 0);
  }
  return uVar12;
}


