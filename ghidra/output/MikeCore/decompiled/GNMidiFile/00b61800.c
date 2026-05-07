// Function: FUN_00b61800
// Address: 00b61800
// Size: 684 bytes
// Class: GNMidiFile


void FUN_00b61800(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong unaff_RDI;
  int iVar12;
  
  cVar3 = FUN_00b61b20();
  cVar4 = FUN_00b61b20();
  cVar5 = FUN_00b61b20();
  cVar6 = FUN_00b61b20();
  bVar7 = FUN_00b61b20();
  uVar9 = FUN_00b61b20();
  bVar8 = FUN_00b61b20();
  FUN_00b61b20();
  if ((((cVar6 != 'k') || (cVar5 != 'r')) || (cVar4 != 'T')) || (cVar3 != 'M')) {
    *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
    FUN_00b61bc0((uint)bVar8 << 8 | (uint)bVar7 << 0x18 | (uVar9 & 0xff) << 0x10);
    return;
  }
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_0253b338;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  FUN_00d500e0();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x48);
  if (puVar1 == puVar11) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x48) = puVar11;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(unaff_RDI + 0x50) = 0;
  *(undefined1 *)(unaff_RDI + 0x58) = 0;
  iVar12 = 0;
  do {
    iVar10 = FUN_00b61c60();
    *(int *)(unaff_RDI + 0x50) = *(int *)(unaff_RDI + 0x50) + iVar10;
    lVar2 = DAT_027630c0;
    if (**(char **)(unaff_RDI + 0x18) < '\0') {
      bVar7 = FUN_00b61b20();
      if (((char)bVar7 < '\0') && (bVar7 < 0xf0)) goto LAB_00b619f3;
      bVar8 = bVar7 & 0xf0;
      if (0xef < bVar7) {
        bVar8 = bVar7;
      }
      if ((bVar8 == 0xf0) || (bVar8 == 0xf7)) {
        cVar3 = FUN_00b621b0();
        goto LAB_00b619fb;
      }
      if (bVar8 == 0xff) {
        cVar3 = FUN_00b62530();
        goto LAB_00b619fb;
      }
      iVar10 = FUN_00b61f70();
      lVar2 = DAT_027630c0;
      if ((iVar10 < 0) || (*(int *)(unaff_RDI + 0x20) < iVar10)) {
        if (DAT_027630c0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
        FUN_00b61bc0();
      }
    }
    else {
      bVar7 = *(byte *)(unaff_RDI + 0x58);
      bVar8 = bVar7 & 0xf0;
      if (0xef < bVar7) {
        bVar8 = bVar7;
      }
      if (bVar8 == 0) {
        if (DAT_027630c0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
LAB_00b619f3:
      cVar3 = FUN_00b61dc0();
LAB_00b619fb:
      if (cVar3 != '\0') {
        iVar12 = *(int *)(unaff_RDI + 0x50);
      }
    }
    if (*(longlong *)(unaff_RDI + 0x48) == 0) {
      if (*(int *)(unaff_RDI + 0x54) < iVar12) {
        *(int *)(unaff_RDI + 0x54) = iVar12;
      }
      return;
    }
  } while( true );
}


