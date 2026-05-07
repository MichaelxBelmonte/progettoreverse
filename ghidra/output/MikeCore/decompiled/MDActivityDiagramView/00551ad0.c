// Function: FUN_00551ad0
// Address: 00551ad0
// Size: 1187 bytes
// Class: MDActivityDiagramView


void FUN_00551ad0(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  float fVar7;
  
  FUN_01e534b0();
  plVar1 = *(longlong **)(unaff_RDI + 0x80);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &DAT_02576dc8;
  pcVar4 = DAT_02576de0;
  (*DAT_02576de0)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  pcVar3 = DAT_02576128;
  (*DAT_02576128)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (undefined8 *)plVar1[0x2a];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x2a] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if ((*(float *)((longlong)plVar1 + 0x13c) != DAT_023b36b0) ||
     (NAN(*(float *)((longlong)plVar1 + 0x13c)) || NAN(DAT_023b36b0))) {
    *(undefined4 *)((longlong)plVar1 + 0x13c) = 0x41000000;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &DAT_02576dc8;
  (*pcVar4)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  if ((*(float *)((longlong)plVar1 + 0x13c) != DAT_02390d34) ||
     (NAN(*(float *)((longlong)plVar1 + 0x13c)) || NAN(DAT_02390d34))) {
    *(undefined4 *)((longlong)plVar1 + 0x13c) = 0x40000000;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &DAT_02576dc8;
  (*pcVar4)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  if ((*(float *)((longlong)plVar1 + 0x13c) != DAT_02394dc0) ||
     (NAN(*(float *)((longlong)plVar1 + 0x13c)) || NAN(DAT_02394dc0))) {
    *(undefined4 *)((longlong)plVar1 + 0x13c) = 0x3f99999a;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xa0);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0xa8);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (undefined8 *)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0xa8);
  iVar5 = FUN_00e36330();
  fVar7 = (float)iVar5;
  if ((*(float *)((longlong)plVar1 + 0x13c) == fVar7) &&
     (!NAN(*(float *)((longlong)plVar1 + 0x13c)) && !NAN(fVar7))) {
    return;
  }
  *(float *)((longlong)plVar1 + 0x13c) = fVar7;
                    /* WARNING: Could not recover jumptable at 0x00551f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x620))();
  return;
}


