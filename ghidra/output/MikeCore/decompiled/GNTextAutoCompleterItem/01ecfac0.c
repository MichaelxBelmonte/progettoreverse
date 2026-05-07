// Function: FUN_01ecfac0
// Address: 01ecfac0
// Size: 599 bytes
// Class: GNTextAutoCompleterItem


undefined8 FUN_01ecfac0(void)

{
  longlong lVar1;
  int iVar2;
  longlong *unaff_RDI;
  longlong *plVar3;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_48 = 0;
  lVar1 = unaff_RDI[3];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar1;
  (**(code **)(*unaff_RDI + 0x490))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x4c0))();
  FUN_01e10550();
  FUN_00d8e3d0();
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027fe6f8;
  local_58 = plVar3;
  if (DAT_027fe6f8 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  local_70 = '\0';
  local_78 = plVar3;
  (**(code **)(*unaff_RDI + 0x4a0))(&local_78,&local_88,0);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x4f8))();
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x4e0))();
  }
  else {
    local_60 = '\0';
    local_68 = plVar3;
    iVar2 = FUN_01ed2ec0();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar2 != -1) {
      FUN_01dd3d10();
    }
    (**(code **)(*plVar3 + 0x370))();
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    FUN_01e148d0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}


