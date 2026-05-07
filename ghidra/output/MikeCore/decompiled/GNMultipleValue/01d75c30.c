// Function: FUN_01d75c30
// Address: 01d75c30
// Size: 1275 bytes
// Class: GNMultipleValue


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d75c30(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  undefined1 auVar6 [16];
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_98 = '\0';
  local_a0 = 0;
  FUN_01e56280(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  auVar6 = insertps(_DAT_024209f0,
                    *(undefined4 *)
                     (&DAT_02420a40 + (ulonglong)(*(char *)(unaff_RDI + 0x94) == '\0') * 4),0x10);
  FUN_01e5bc80(auVar6._0_8_);
  FUN_01e5c680();
  FUN_01e5c730();
  local_88 = '\0';
  local_90 = 0;
  FUN_01e5bfa0();
  if ((local_88 != '\0') && (local_90 != 0)) {
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
  *puVar4 = &DAT_02683800;
  puVar4[2] = &DAT_026842c8;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  pcVar2 = DAT_02683818;
  (*DAT_02683818)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x70);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x70) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x4d0))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x9c8))();
  local_38 = 0;
  local_40 = *(longlong *)(unaff_RDI + 0x70);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  FUN_01e5c8b0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027f0cf8;
  plVar5 = *(longlong **)(unaff_RDI + 0x70);
  if (DAT_027f0cf8 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar3;
  local_78 = '\x01';
  (**(code **)(*plVar5 + 0x958))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar5 + 0x27) = 0;
  plVar5[0x2e] = 0;
  *(undefined4 *)(plVar5 + 0x2f) = 0;
  plVar5[0x30] = 0;
  *(undefined1 *)(plVar5 + 0x31) = 0;
  plVar5[0x28] = 0;
  plVar5[0x29] = 0;
  *(undefined4 *)(plVar5 + 0x2a) = 0;
  plVar5[0x2b] = 0;
  plVar5[0x2c] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x199) = 0;
  plVar5[0x35] = 0;
  plVar5[0x36] = 0;
  plVar5[0x37] = 0;
  plVar5[0x38] = 0;
  *plVar5 = (longlong)&DAT_02683800;
  plVar5[2] = (longlong)&DAT_026842c8;
  plVar5[0x39] = 0;
  plVar5[0x3a] = 0;
  (*pcVar2)();
  (**(code **)(*plVar5 + 0x4d0))();
  local_68 = '\0';
  local_70 = plVar5;
  FUN_01e5c8b0();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027f0d00;
  if (DAT_027f0d00 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar3;
  local_58 = '\x01';
  (**(code **)(*plVar5 + 0x958))();
  if ((local_58 != '\0') && (local_60 != 0)) {
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
  puVar1 = *(undefined8 **)(unaff_RDI + 0x78);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x78) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d0))();
  local_48 = 0;
  local_50 = *(longlong *)(unaff_RDI + 0x78);
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_01e5c8b0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x938))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x948))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x918))();
  FUN_00d50b20();
  return;
}


