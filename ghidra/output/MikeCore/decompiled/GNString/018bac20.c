// Function: FUN_018bac20
// Address: 018bac20
// Size: 660 bytes
// Class: GNString
// String references:
//   "kind: %I"


/* WARNING: Removing unreachable block (ram,0x018bae11) */
/* WARNING: Removing unreachable block (ram,0x018bae1a) */
/* WARNING: Removing unreachable block (ram,0x018bad91) */
/* WARNING: Removing unreachable block (ram,0x018bad9a) */
/* WARNING: Removing unreachable block (ram,0x018baca1) */
/* WARNING: Removing unreachable block (ram,0x018bacaa) */
/* WARNING: Removing unreachable block (ram,0x018bad1c) */
/* WARNING: Removing unreachable block (ram,0x018bad25) */
/* WARNING: Removing unreachable block (ram,0x018bae8e) */
/* WARNING: Removing unreachable block (ram,0x018bae97) */

void FUN_018bac20(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  longlong local_48;
  char local_40;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00d21140();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x80) + 400))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00d21140();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RSI + 0x48) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RSI + 0x48);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8cb40();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00d21140();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
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


