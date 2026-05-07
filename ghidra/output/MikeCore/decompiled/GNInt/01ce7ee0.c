// Function: FUN_01ce7ee0
// Address: 01ce7ee0
// Size: 888 bytes
// Class: GNInt


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce7ee0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  
  FUN_01e3b710();
  *(undefined1 *)((longlong)unaff_RDI + 0x18a) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x184) = 0x41900000;
  *(undefined1 *)(unaff_RDI + 5) = 1;
  uVar3 = DAT_0241fce8;
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = uVar3;
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00074c30();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x28];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x28] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x4d0))(0,_DAT_0241fcf0);
  FUN_01d9af20();
  (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x558))();
  FUN_01d97870();
  (**(code **)(*unaff_RDI + 0x998))();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01cf3e00();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[0x28];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d94ee0();
  (**(code **)(*unaff_RDI + 0x570))();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x29];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x29] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x4d0))(0,_DAT_0241fcf0);
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x570))();
  lVar2 = unaff_RDI[0x29];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d978b0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x32) = 1;
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
  puVar5[0x39] = 0;
  *puVar5 = &DAT_02675388;
  puVar5[2] = &DAT_02675e68;
  *(undefined1 *)(puVar5 + 0x3a) = 0;
  FUN_00d500e0();
  (**(code **)(*unaff_RDI + 0x918))();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


