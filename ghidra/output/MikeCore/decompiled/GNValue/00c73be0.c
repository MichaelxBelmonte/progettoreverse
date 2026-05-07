// Function: FUN_00c73be0
// Address: 00c73be0
// Size: 771 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x00c73d2f) */
/* WARNING: Removing unreachable block (ram,0x00c73d3b) */
/* WARNING: Removing unreachable block (ram,0x00c73d71) */
/* WARNING: Removing unreachable block (ram,0x00c73d7a) */
/* WARNING: Removing unreachable block (ram,0x00c73dcc) */
/* WARNING: Removing unreachable block (ram,0x00c73dd5) */

undefined8 * FUN_00c73be0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  longlong lVar4;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  (**(code **)(*(longlong *)*param_2 + 0x368))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d8dbf0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7a0();
  cVar2 = FUN_00d8ca70();
  lVar1 = DAT_0270b790;
  lVar4 = DAT_026fce10;
  if (cVar2 == '-') {
    if (DAT_0270b790 != 0) {
      FUN_00d50b00();
      lVar4 = lVar1;
      goto LAB_00c73cef;
    }
  }
  else if (DAT_026fce10 != 0) {
    FUN_00d50b00();
    goto LAB_00c73cef;
  }
  lVar4 = 0;
LAB_00c73cef:
  FUN_00d8c7a0();
  FUN_00e7b4e0();
  FUN_00d8e100();
  FUN_00d8c7d0();
  FUN_00cddf30();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*(longlong *)*param_2 + 0x498))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x4a0))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*param_2 + 0x488))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x490))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


