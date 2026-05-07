// Function: FUN_00bbb2b0
// Address: 00bbb2b0
// Size: 1164 bytes
// Class: GNSoundFileChunk


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbb2b0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  local_a0 = '\0';
  local_a8 = 0;
  FUN_01e56280(param_1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e5c730();
  FUN_01e5c680();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar3 + 0x27) = 0;
  plVar3[0x2e] = 0;
  *(undefined4 *)(plVar3 + 0x2f) = 0;
  plVar3[0x30] = 0;
  *(undefined1 *)(plVar3 + 0x31) = 0;
  plVar3[0x28] = 0;
  plVar3[0x29] = 0;
  *(undefined4 *)(plVar3 + 0x2a) = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2c] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x199) = 0;
  plVar3[0x35] = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x38] = 0;
  *plVar3 = (longlong)&DAT_02683800;
  plVar3[2] = (longlong)&DAT_026842c8;
  plVar3[0x39] = 0;
  plVar3[0x3a] = 0;
  (*DAT_02683818)();
  (**(code **)(*plVar3 + 0x4d0))(_DAT_023d90e0,_DAT_023d90f0);
  local_98 = DAT_02765440;
  if (DAT_02765440 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar3 + 0x958))();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = plVar3;
  FUN_01e5c8b0();
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
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
  *puVar4 = &DAT_02686ea8;
  puVar4[2] = &DAT_02687970;
  *(undefined1 *)(puVar4 + 0x39) = 0;
  (*DAT_02686ec0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x80);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x80) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x4d0))(_DAT_023d9100,_DAT_023d9110);
  local_40 = 0;
  local_48 = *(longlong *)(unaff_RDI + 0x80);
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  FUN_01e5c8b0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x938))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x948))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x918))();
  FUN_01e5bc80(_DAT_023d9120);
  local_78 = DAT_02765448;
  if (DAT_02765448 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_01e5a050();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765450;
  if (DAT_02765450 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  FUN_00d50b00();
  FUN_01e1ea80((int)DAT_0238fee8,&stack0xffffffffffffffc8);
  lVar2 = *(longlong *)(unaff_RDI + 0x90);
  lVar5 = lVar2;
  if (lVar2 == local_58) goto LAB_00bbb6dd;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      lVar5 = 0;
      goto LAB_00bbb692;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0x90);
    *(longlong *)(unaff_RDI + 0x90) = local_58;
    lVar5 = local_58;
  }
  else {
    local_50 = '\0';
    lVar5 = local_58;
LAB_00bbb692:
    *(longlong *)(unaff_RDI + 0x90) = lVar5;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = local_58;
  }
LAB_00bbb6dd:
  if ((local_50 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00bbb940();
  FUN_00d50b20();
  return;
}


