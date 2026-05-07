// Function: FUN_0060dd80
// Address: 0060dd80
// Size: 797 bytes
// Class: GNFilePath


void FUN_0060dd80(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40;
  
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0x42];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x42] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(undefined4 *)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(undefined1 *)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(undefined4 *)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  *puVar5 = &DAT_0269c118;
  puVar5[2] = &DAT_0269cc70;
  puVar5[0x39] = &DAT_0269ccb0;
  puVar5[0x45] = 0;
  *(undefined2 *)(puVar5 + 0x46) = 0;
  puVar5[0x47] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  *(undefined4 *)(puVar5 + 0x3c) = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x205) = 0;
  puVar5[0x42] = 0;
  puVar5[0x43] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x21d) = 0;
  (*DAT_0269c130)();
  puVar3 = (undefined8 *)unaff_RDI[0x41];
  if (puVar3 == puVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x41] = (longlong)puVar5;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar4 = (longlong *)unaff_RDI[0x41];
  FUN_003a4de0();
  (**(code **)(*unaff_RDI + 0xae0))();
  (**(code **)(*plVar4 + 0x4d0))();
  (**(code **)(*(longlong *)unaff_RDI[0x41] + 0x9c8))();
  plVar4 = (longlong *)unaff_RDI[0x41];
  FUN_003a4d00();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  (**(code **)(*plVar4 + 0x958))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x41] + 0x3a0))();
  lVar1 = DAT_027ebf00;
  plVar4 = (longlong *)unaff_RDI[0x41];
  if (DAT_027ebf00 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0xa10))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)unaff_RDI[0x41];
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0xa20))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x41];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x450))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


