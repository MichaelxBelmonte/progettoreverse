// Function: FUN_01dfebd0
// Address: 01dfebd0
// Size: 820 bytes
// Class: GNTabView


/* WARNING: Removing unreachable block (ram,0x01dfee90) */
/* WARNING: Removing unreachable block (ram,0x01dfee99) */

void FUN_01dfebd0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int unaff_ESI;
  longlong *unaff_RDI;
  
  if ((int)unaff_RDI[0x2a] == unaff_ESI) {
    return;
  }
  if (((longlong *)unaff_RDI[0x2c] != (longlong *)0x0) &&
     ((**(code **)(*(longlong *)unaff_RDI[0x2c] + 0x478))(), unaff_RDI[0x2c] != 0)) {
    unaff_RDI[0x2c] = 0;
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x2a) = unaff_ESI;
  if (unaff_ESI == 3) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar3 + 0x27) = 0;
    puVar3[0x2e] = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 0;
    puVar3[0x30] = 0;
    *(undefined1 *)(puVar3 + 0x31) = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    *(undefined4 *)(puVar3 + 0x2a) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x199) = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    *puVar3 = &DAT_026ab048;
    puVar3[2] = &DAT_026abb78;
    puVar3[0x3d] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1dc) = 0;
    puVar3[0x39] = 0;
    puVar3[0x3a] = 0;
    (*DAT_026ab060)();
    puVar4 = (undefined8 *)unaff_RDI[0x2c];
    if (puVar4 == puVar3) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x2c] = (longlong)puVar3;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar4 + 0x27) = 0;
    puVar4[0x2e] = 0;
    *(undefined4 *)(puVar4 + 0x2f) = 0;
    puVar4[0x30] = 0;
    *(undefined1 *)(puVar4 + 0x31) = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    *(undefined4 *)(puVar4 + 0x2a) = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x199) = 0;
    puVar4[0x35] = 0;
    puVar4[0x36] = 0;
    puVar4[0x37] = 0;
    puVar4[0x38] = 0;
    *puVar4 = &DAT_02677e10;
    puVar4[2] = &DAT_026788e8;
    puVar4[0x39] = &DAT_02678928;
    *(undefined4 *)((longlong)puVar4 + 500) = 0;
    *(undefined1 *)(puVar4 + 0x3f) = 0;
    puVar4[0x43] = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    puVar4[0x3a] = 0;
    puVar4[0x3b] = 0;
    *(undefined1 *)(puVar4 + 0x3e) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x204) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x20c) = 0;
    (*DAT_02677e28)();
    (**(code **)(*(longlong *)unaff_RDI[0x2c] + 0xab8))();
    FUN_00d50b20();
  }
  else if (unaff_ESI == 2) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_001e3c20();
    (**(code **)(*plVar2 + 0x18))();
    plVar1 = (longlong *)unaff_RDI[0x2c];
    if (plVar1 == plVar2) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x2c] = (longlong)plVar2;
      if (plVar1 == (longlong *)0x0) goto LAB_01dfeead;
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)unaff_RDI[0x2c];
LAB_01dfeead:
  if (plVar2 != (longlong *)0x0) {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x450))();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_01dfef90();
    FUN_01dff100();
  }
  return;
}


