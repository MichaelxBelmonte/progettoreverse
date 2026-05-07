// Function: FUN_00d573e0
// Address: 00d573e0
// Size: 717 bytes
// Class: GNList


void FUN_00d573e0(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_90;
  char local_88;
  undefined8 *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  undefined4 local_38;
  
  local_e0 = *param_2;
  local_d8 = '\0';
  (**(code **)(*unaff_RDI + 0x108))(param_1,&local_e0);
  puVar2 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (undefined8 *)0x0) {
      FUN_00e31530();
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 == (undefined8 *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)FUN_00d8b910();
  }
  FUN_00e31530();
  local_48 = *unaff_RSI;
  local_50 = 2;
  local_58 = &DAT_024c5048;
  local_40 = 0;
  if (local_48 != 0) {
    FUN_00e31530();
  }
  local_40 = '\x01';
  local_58 = (undefined8 *)&DAT_025df2a0;
  local_38 = (undefined4)param_1;
  FUN_00d3af80(&DAT_0277e4c6,pcVar5,&local_58);
  plVar1 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (longlong *)0x0) && (FUN_00e31530(), local_88 != '\0')) &&
       (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  local_58 = &DAT_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar1 + 0x368))();
  if (cVar3 == '\0') {
    local_d0 = *unaff_RSI;
    local_c8 = '\0';
    local_c0 = *param_2;
    local_b8 = '\0';
    local_a8 = '\0';
    local_b0 = local_c0;
    uVar4 = (**(code **)(*unaff_RDI + 0x1d0))();
    (**(code **)(*unaff_RDI + 0x238))(param_1 & 0xffffffff,&local_c0,uVar4);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


