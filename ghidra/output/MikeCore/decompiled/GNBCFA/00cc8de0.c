// Function: FUN_00cc8de0
// Address: 00cc8de0
// Size: 906 bytes
// Class: GNBCFA
// String references:
//   "class:%@"
//   "entity:%@"


/* WARNING: Removing unreachable block (ram,0x00cc90a8) */
/* WARNING: Removing unreachable block (ram,0x00cc90b1) */
/* WARNING: Removing unreachable block (ram,0x00cc8fd7) */
/* WARNING: Removing unreachable block (ram,0x00cc8fe0) */
/* WARNING: Removing unreachable block (ram,0x00cc8f11) */
/* WARNING: Removing unreachable block (ram,0x00cc8f1a) */
/* WARNING: Removing unreachable block (ram,0x00cc8e63) */
/* WARNING: Removing unreachable block (ram,0x00cc8e6c) */
/* WARNING: Removing unreachable block (ram,0x00cc913f) */
/* WARNING: Removing unreachable block (ram,0x00cc914b) */

void FUN_00cc8de0(void)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong *local_70;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = local_40;
  bVar2 = false;
  FUN_00d21140();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RSI[4];
  if (lVar1 != 0) {
    bVar2 = true;
    FUN_00d50b00();
    FUN_00d8cb40();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d21140();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = unaff_RSI[5];
  if (lVar1 != 0) {
    bVar2 = true;
    FUN_00d50b00();
    FUN_00d8cb40();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d21140();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RSI + 0x380))();
  if ((bVar2) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*unaff_RSI + 0x380))();
    (**(code **)(*local_50 + 400))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d21140();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027259e0;
  if (DAT_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


