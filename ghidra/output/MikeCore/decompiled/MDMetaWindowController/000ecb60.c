// Function: FUN_000ecb60
// Address: 000ecb60
// Size: 523 bytes
// Class: MDMetaWindowController


void FUN_000ecb60(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  FUN_01e534b0();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1a) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *puVar4 = &DAT_024dfd78;
  (*DAT_024dfd90)();
  puVar1 = *(undefined8 **)(unaff_RDI + 200);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 200) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1a) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *puVar4 = &DAT_02618bb8;
  (*DAT_02618bd0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xd0);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xd0) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0xb8);
  (**(code **)(*plVar2 + 0x640))();
  (**(code **)(*local_60 + 0x370))();
  FUN_01d44d80(DAT_02392fd8);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar2 + 0x9d8))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = *(longlong *)(unaff_RDI + 200);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_01e058f0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


