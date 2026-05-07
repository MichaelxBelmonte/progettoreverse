// Function: FUN_00b61330
// Address: 00b61330
// Size: 1008 bytes
// Class: GNMidiFile


void FUN_00b61330(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  longlong unaff_RDI;
  uint uVar11;
  uint uVar12;
  double local_90;
  
  piVar1 = *(int **)(unaff_RDI + 0x18);
  if (((*piVar1 == 0x46464952) && (piVar1[2] == 0x44494d52)) && (piVar1[3] == 0x61746164)) {
    FUN_00b61bc0();
    cVar4 = FUN_00b61b20();
    lVar2 = DAT_027630c8;
  }
  else {
    cVar4 = FUN_00b61b20();
    lVar2 = DAT_027630c8;
  }
  DAT_027630c8 = lVar2;
  if (cVar4 != 'M') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b61b20();
  lVar2 = DAT_027630c8;
  if (cVar4 != 'T') {
    if (DAT_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b61b20();
  lVar2 = DAT_027630c8;
  if (cVar4 != 'h') {
    if (DAT_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b61b20();
  lVar2 = DAT_027630c8;
  if (cVar4 != 'd') {
    if (DAT_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  bVar5 = FUN_00b61b20();
  bVar6 = FUN_00b61b20();
  bVar7 = FUN_00b61b20();
  bVar8 = FUN_00b61b20();
  lVar2 = DAT_027630c0;
  uVar12 = (uint)bVar8 | (uint)bVar7 << 8 | (uint)bVar6 << 0x10 | (uint)bVar5 << 0x18;
  if ((int)uVar12 < 6) {
    if (DAT_027630c0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar9 = FUN_00b61b20();
  uVar10 = FUN_00b61b20();
  *(uint *)(unaff_RDI + 0x30) = (uint)CONCAT11(uVar9,uVar10);
  lVar2 = DAT_027630c8;
  if (1 < CONCAT11(uVar9,uVar10)) {
    if (DAT_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar9 = FUN_00b61b20();
  uVar10 = FUN_00b61b20();
  *(uint *)(unaff_RDI + 0x34) = (uint)CONCAT11(uVar9,uVar10);
  bVar5 = FUN_00b61b20();
  bVar6 = FUN_00b61b20();
  lVar2 = DAT_027630c8;
  uVar11 = (uint)CONCAT11(bVar5,bVar6);
  if (uVar11 < 0x8000) {
    *(double *)(unaff_RDI + 0x38) = DAT_0238fee8 / (double)uVar11;
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(undefined4 *)(lVar2 + 0xc) = 0;
    *(uint *)(lVar2 + 0x10) = uVar11;
  }
  else {
    bVar5 = 0x68 - (bVar5 & 0x7f);
    if ((bVar5 < 7) && ((99U >> (bVar5 & 0x1f) & 1) != 0)) {
      local_90 = *(double *)(&DAT_023d7ec8 + (longlong)(char)bVar5 * 8);
      lVar3 = DAT_027630c0;
    }
    else {
      if (DAT_027630c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      local_90 = 0.0;
      lVar3 = DAT_027630c0;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = DAT_027630c0;
      }
    }
    DAT_027630c0 = lVar3;
    if (bVar6 == 0) {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    *(double *)(unaff_RDI + 0x38) = DAT_0238fee8 / (local_90 * (double)bVar6);
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x10) + 0xc) = 1;
  }
  if (6 < (int)uVar12) {
    FUN_00b61bc0();
    *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
  }
  return;
}


