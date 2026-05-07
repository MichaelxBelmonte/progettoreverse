// Function: FUN_01ed20d0
// Address: 01ed20d0
// Size: 654 bytes
// Class: GNTextAutoCompleterItem
// String references:
//   "-> %@"


/* WARNING: Removing unreachable block (ram,0x01ed2289) */
/* WARNING: Removing unreachable block (ram,0x01ed2292) */
/* WARNING: Removing unreachable block (ram,0x01ed2338) */
/* WARNING: Removing unreachable block (ram,0x01ed2341) */
/* WARNING: Removing unreachable block (ram,0x01ed21ac) */
/* WARNING: Removing unreachable block (ram,0x01ed21b5) */
/* WARNING: Removing unreachable block (ram,0x01ed2151) */
/* WARNING: Removing unreachable block (ram,0x01ed215a) */
/* WARNING: Removing unreachable block (ram,0x01ed21e2) */
/* WARNING: Removing unreachable block (ram,0x01ed21e7) */

void FUN_01ed20d0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  longlong local_38;
  char local_30;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_00d21140();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RSI[3];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0x3a0))();
  if (lVar1 != 0) {
    (**(code **)(*unaff_RSI + 0x380))();
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
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


