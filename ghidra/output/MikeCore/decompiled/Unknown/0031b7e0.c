// Function: FUN_0031b7e0
// Address: 0031b7e0
// Size: 533 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0031b97d) */
/* WARNING: Removing unreachable block (ram,0x0031b986) */
/* WARNING: Removing unreachable block (ram,0x0031b9de) */
/* WARNING: Removing unreachable block (ram,0x0031b9eb) */

void FUN_0031b7e0(undefined4 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong *local_30;
  char local_28;
  
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  if (cVar3 != '\0') {
    (**(code **)(*unaff_RDI + 0x3d8))();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025e2bf8;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  (*DAT_025e2c10)();
  puVar1 = (undefined8 *)unaff_RDI[8];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[8] = (longlong)puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x438))();
  FUN_012d25b0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0141c4c0(param_1);
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[8];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_0141c900();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x438))();
  (**(code **)(*local_30 + 0x690))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x4a8))();
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


