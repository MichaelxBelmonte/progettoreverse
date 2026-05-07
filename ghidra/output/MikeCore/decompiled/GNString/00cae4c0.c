// Function: FUN_00cae4c0
// Address: 00cae4c0
// Size: 992 bytes
// Class: GNString


void FUN_00cae4c0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  
  FUN_00ddf820();
  if (DAT_0280253c == 0) {
    DAT_0280253c = 2;
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar1 = (undefined8 *)unaff_RDI[0x19];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x19] = (longlong)puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xe1) = 1;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02578b00;
  pcVar5 = DAT_02578b18;
  (*DAT_02578b18)();
  puVar1 = (undefined8 *)unaff_RDI[4];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[4] = (longlong)puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(0,1);
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02578b00;
  (*pcVar5)();
  puVar1 = (undefined8 *)unaff_RDI[5];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[5] = (longlong)puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(0,1);
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00065770();
  (**(code **)(*plVar8 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[8];
  if (plVar2 == plVar8) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[8] = (longlong)plVar8;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02578b00;
  (*pcVar5)();
  puVar1 = (undefined8 *)unaff_RDI[7];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[7] = (longlong)puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(0,1);
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar8 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[0xb];
  if (plVar2 == plVar8) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0xb] = (longlong)plVar8;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025736a8;
  puVar7[3] = 0;
  *(undefined4 *)(puVar7 + 4) = 0;
  pcVar4 = DAT_025736c0;
  (*DAT_025736c0)();
  puVar1 = (undefined8 *)unaff_RDI[0x1b];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x1b] = (longlong)puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025736a8;
  puVar7[3] = 0;
  *(undefined4 *)(puVar7 + 4) = 0;
  (*pcVar4)();
  puVar1 = (undefined8 *)unaff_RDI[0x29];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x29] = (longlong)puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  unaff_RDI[0x14] = 0;
  cVar6 = (**(code **)(*unaff_RDI + 0x4e0))();
  if (cVar6 != '\0') {
    FUN_00cae8f0();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02578b00;
  (*pcVar5)();
  puVar1 = (undefined8 *)unaff_RDI[0x1e];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x1e] = (longlong)puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(0,1);
  unaff_RDI[0x2a] = 0;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar3)();
  puVar1 = (undefined8 *)unaff_RDI[0x2b];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2b] = (longlong)puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d22760();
  return;
}


