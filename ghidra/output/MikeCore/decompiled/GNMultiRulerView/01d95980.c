// Function: FUN_01d95980
// Address: 01d95980
// Size: 706 bytes
// Class: GNMultiRulerView


void FUN_01d95980(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  FUN_01e3b710();
  uVar2 = DAT_02420c88;
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = uVar2;
  *(undefined1 *)(unaff_RDI + 5) = 1;
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x19c) = 0;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar3 = &DAT_02678958;
  puVar3[2] = &DAT_02679280;
  puVar3[0x27] = 0;
  *(undefined1 *)(puVar3 + 0x28) = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x164) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x16c) = 0;
  (*DAT_02678970)();
  puVar1 = (undefined8 *)unaff_RDI[0x27];
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x27] = (longlong)puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x4d0))
            ((int)*(undefined8 *)((longlong)unaff_RDI + 0x10c),
             *(undefined8 *)((longlong)unaff_RDI + 0x114));
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x558))();
  local_58 = 0;
  local_60 = unaff_RDI[0x27];
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  (**(code **)(*unaff_RDI + 0x450))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = DAT_027f1660;
  if (DAT_027f1660 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41430(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_80 = DAT_027f0e30;
  if (DAT_027f0e30 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_00d41430(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}


