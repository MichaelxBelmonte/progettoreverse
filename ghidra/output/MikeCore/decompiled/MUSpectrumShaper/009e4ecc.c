// Function: FUN_009e4ecc
// Address: 009e4ecc
// Size: 630 bytes
// Class: MUSpectrumShaper


undefined8 FUN_009e4ecc(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  byte bVar11;
  byte bVar12;
  int *piVar13;
  
  pbVar7 = *(byte **)(unaff_RDI + 0x28);
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  if (pbVar7 == *(byte **)(unaff_RDI + 0x20)) {
    bVar12 = (byte)*(uint *)(lVar1 + 0x118);
    bVar11 = (byte)((*(uint *)(lVar1 + 0x118) & 2) >> 1);
  }
  else {
    bVar12 = *(byte *)(lVar1 + 0x18 + (ulonglong)*pbVar7);
    bVar11 = (bVar12 & 2) >> 1;
  }
  bVar12 = bVar12 & 1;
  piVar13 = *(int **)(unaff_RDI + 0xd8);
  if (((*piVar13 != 5) || (piVar13[6] != *(int *)(lVar1 + 0x130))) ||
     (lVar4 = *(longlong *)(unaff_RDI + 0x80), *(int *)(lVar4 + 0x10) != piVar13[6])) {
    piVar13 = piVar13 + -0xc;
    if (piVar13 < *(int **)(unaff_RDI + 0xd0)) {
      FUN_009e5df8();
      pbVar7 = *(byte **)(unaff_RDI + 0x28);
      piVar13 = (int *)(*(longlong *)(unaff_RDI + 0xd8) + -0x30);
    }
    uVar10 = 0x80000003;
    if (*(longlong *)(unaff_RDI + 0xc0) != *(longlong *)(unaff_RDI + 0xb8)) {
      uVar10 = *(undefined4 *)(*(longlong *)(unaff_RDI + 0xc0) + -0x70);
    }
    *piVar13 = 5;
    FUN_009e623c(pbVar7,unaff_RDI + 0x80,uVar10);
    *(int **)(unaff_RDI + 0xd8) = piVar13;
    lVar4 = *(longlong *)(unaff_RDI + 0x80);
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x128);
  if (*(longlong *)(lVar4 + 0x18) == 0) {
    lVar8 = *(longlong *)(unaff_RDI + 0x28);
LAB_009e4fe0:
    *(longlong *)(lVar4 + 0x20) = lVar8;
    lVar4 = *(longlong *)(unaff_RDI + 0x80);
    uVar9 = *(ulonglong *)(lVar4 + 0x18);
  }
  else {
    lVar8 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar8 != *(longlong *)(lVar4 + 0x20)) goto LAB_009e4fe0;
    *(ulonglong *)(lVar4 + 0x18) = uVar2;
    uVar9 = uVar2;
  }
  if (uVar9 < *(ulonglong *)(lVar1 + 0x120)) {
    if (bVar12 == 0) {
      return 0;
    }
LAB_009e5001:
    *(ulonglong *)(lVar4 + 0x18) = uVar9 + 1;
    uVar6 = *(undefined8 *)(lVar1 + 8);
  }
  else {
    if (*(char *)(lVar1 + 0x135) == '\0') {
      bVar12 = bVar12 ^ 1 | uVar2 <= uVar9;
LAB_009e50c8:
      if (bVar11 == 0) {
        if (bVar12 != 0) {
          return 0;
        }
        goto LAB_009e5001;
      }
      if (bVar12 == 0) {
        uVar6 = *(undefined8 *)(lVar1 + 8);
        puVar5 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x18);
        if (puVar5 < *(undefined4 **)(unaff_RDI + 0xd0)) {
          FUN_009e5df8();
          puVar5 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x18);
        }
        uVar3 = *(undefined8 *)(unaff_RDI + 0x28);
        *puVar5 = 0xd;
        *(undefined8 *)(puVar5 + 2) = uVar6;
        *(undefined8 *)(puVar5 + 4) = uVar3;
        *(undefined4 **)(unaff_RDI + 0xd8) = puVar5;
      }
    }
    else {
      if ((*(byte *)(unaff_RDI + 0x61) & 4) == 0) {
        if ((uVar9 < uVar2) && (bVar12 == 1)) {
LAB_009e5037:
          if (bVar11 != 0) {
            uVar6 = *(undefined8 *)(lVar1 + 0x10);
            puVar5 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x18);
            if (puVar5 < *(undefined4 **)(unaff_RDI + 0xd0)) {
              FUN_009e5df8();
              puVar5 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x18);
            }
            uVar3 = *(undefined8 *)(unaff_RDI + 0x28);
            *puVar5 = 4;
            *(undefined8 *)(puVar5 + 2) = uVar6;
            *(undefined8 *)(puVar5 + 4) = uVar3;
            *(undefined4 **)(unaff_RDI + 0xd8) = puVar5;
            lVar4 = *(longlong *)(unaff_RDI + 0x80);
            uVar9 = *(ulonglong *)(lVar4 + 0x18);
          }
          goto LAB_009e5001;
        }
      }
      else {
        bVar12 = bVar12 ^ 1 | uVar2 <= uVar9;
        if (*(char *)(unaff_RDI + 0x7b) == '\0') goto LAB_009e50c8;
        if (bVar12 == 0) goto LAB_009e5037;
      }
      if (bVar11 == 0) {
        return 0;
      }
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
  }
  *(undefined8 *)(unaff_RDI + 0x58) = uVar6;
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}


