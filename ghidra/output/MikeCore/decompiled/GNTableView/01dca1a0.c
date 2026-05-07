// Function: FUN_01dca1a0
// Address: 01dca1a0
// Size: 1243 bytes
// Class: GNTableView


void FUN_01dca1a0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  bool bVar9;
  float fVar10;
  longlong *local_38;
  char local_30;
  
  FUN_01e3b710();
  if ((DAT_028b8a78 == (undefined8 *)0x0) || (DAT_028b8a81 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8a78 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_025795a8;
      (*DAT_025795c0)();
      if (DAT_028b8a78 == puVar7) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar9 = DAT_028b8a78 != (undefined8 *)0x0;
        DAT_028b8a78 = puVar7;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8a80 == '\0') {
        DAT_028b8a80 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028b8a81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8a81 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b8a88 == (undefined8 *)0x0) || (DAT_028b8a91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8a88 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *puVar7 = &DAT_0267ba68;
      puVar7[2] = &DAT_0267c530;
      *(undefined4 *)(puVar7 + 0x27) = 0;
      puVar7[0x2e] = 0;
      *(undefined4 *)(puVar7 + 0x2f) = 0;
      puVar7[0x30] = 0;
      *(undefined1 *)(puVar7 + 0x31) = 0;
      puVar7[0x28] = 0;
      puVar7[0x29] = 0;
      *(undefined4 *)(puVar7 + 0x2a) = 0;
      puVar7[0x2b] = 0;
      puVar7[0x2c] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
      puVar7[0x35] = 0;
      puVar7[0x36] = 0;
      puVar7[0x37] = 0;
      puVar7[0x38] = 0;
      (*DAT_0267ba80)();
      if (DAT_028b8a88 == puVar7) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar9 = DAT_028b8a88 != (undefined8 *)0x0;
        DAT_028b8a88 = puVar7;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8a90 == '\0') {
        DAT_028b8a90 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028b8a91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8a91 = '\x01';
      FUN_00e8cb70();
    }
  }
  fVar10 = DAT_028b8e40;
  if ((DAT_028b8e40 == 0.0) && (!NAN(DAT_028b8e40))) {
    DAT_028b8e40 = 18.0;
    fVar10 = DAT_02392fd8;
  }
  *(float *)(unaff_RDI + 0x2d) = fVar10;
  *(undefined1 *)((longlong)unaff_RDI + 0x16c) = 1;
  unaff_RDI[0x2e] = 0x3f80000000000000;
  *(undefined1 *)((longlong)unaff_RDI + 0x184) = 1;
  *(undefined1 *)(unaff_RDI + 0x33) = 1;
  *(undefined4 *)(unaff_RDI + 0x36) = 0xffffffff;
  *(undefined2 *)((longlong)unaff_RDI + 0x1b4) = 0x101;
  unaff_RDI[0x27] = -1;
  *(undefined2 *)((longlong)unaff_RDI + 0x22c) = 0x101;
  DAT_028b8e44 = 0;
  *(undefined4 *)(unaff_RDI + 0x48) = 1;
  *(undefined4 *)(unaff_RDI + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RDI + 0x254) = 0xffffffff;
  unaff_RDI[0x31] = 0;
  (**(code **)(*unaff_RDI + 0x640))();
  cVar5 = (**(code **)(*local_38 + 0x638))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    DAT_028b8e44 = 1;
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_38 + 0x648))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  puVar7 = (undefined8 *)unaff_RDI[0x2f];
  if (puVar7 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2f] = (longlong)puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar4)();
  lVar1 = unaff_RDI[0x51];
  unaff_RDI[0x51] = (longlong)puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = unaff_RDI[0x52];
  unaff_RDI[0x52] = (longlong)puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar8 = (longlong)&DAT_026990a0;
  plVar8[2] = (longlong)&DAT_026999c8;
  FUN_00d500e0();
  lVar1 = unaff_RDI[0x53];
  unaff_RDI[0x53] = (longlong)plVar8;
  if (lVar1 != 0) {
    FUN_00d50b20();
    plVar8 = (longlong *)unaff_RDI[0x53];
  }
  FUN_01e3f820();
  (**(code **)(*plVar8 + 0x4d0))();
  lVar1 = unaff_RDI[0x53];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x450))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


