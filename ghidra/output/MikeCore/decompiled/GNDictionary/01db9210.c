// Function: FUN_01db9210
// Address: 01db9210
// Size: 543 bytes
// Class: GNDictionary


void FUN_01db9210(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  
  FUN_00d50100();
  *(undefined8 *)(unaff_RDI + 0x28) = 0x44fa000042c80000;
  *(undefined4 *)(unaff_RDI + 0x30) = 0x41a00000;
  *(undefined4 *)(unaff_RDI + 0x54) = 0;
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
  *puVar3 = &DAT_02696d30;
  puVar3[2] = &DAT_026977f8;
  (*DAT_02696d48)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x18);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x18) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
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
  *puVar3 = &DAT_02692838;
  puVar3[2] = &DAT_02693308;
  puVar3[0x39] = 0;
  (*DAT_02692850)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x20);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x20) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 0x59) = 1;
  lVar2 = DAT_027f29e0;
  if (DAT_027f29e0 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar4 == lVar2) {
      FUN_00d50b20();
      return;
    }
  }
  *(longlong *)(unaff_RDI + 0x48) = lVar2;
  if (lVar4 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}


