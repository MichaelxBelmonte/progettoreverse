// Function: FUN_00d54360
// Address: 00d54360
// Size: 612 bytes
// Class: MDNotificationObserver


void FUN_00d54360(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_88;
  char local_80;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  local_c8 = *param_2;
  local_c0 = '\0';
  (**(code **)(*unaff_RDI + 0xe8))(param_1,&local_c8);
  puVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00e31530();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 == (undefined8 *)0x0) {
    pcVar4 = "";
  }
  else {
    pcVar4 = (char *)FUN_00d8b910();
  }
  FUN_00e31530();
  local_40 = *unaff_RSI;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_40 != 0) {
    FUN_00e31530();
  }
  local_38 = '\x01';
  FUN_00d3af80(&DAT_026dc63a,pcVar4,&local_50);
  plVar1 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (longlong *)0x0) && (FUN_00e31530(), local_80 != '\0')) &&
       (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar1 + 0x368))();
  if (cVar3 == '\0') {
    local_b8 = *unaff_RSI;
    local_b0 = '\0';
    local_a8 = *param_2;
    local_a0 = '\0';
    (**(code **)(*unaff_RDI + 0x1f0))(1,&local_a8,1);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


