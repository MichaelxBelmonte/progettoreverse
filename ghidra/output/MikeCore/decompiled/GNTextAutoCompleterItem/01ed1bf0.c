// Function: FUN_01ed1bf0
// Address: 01ed1bf0
// Size: 680 bytes
// Class: GNTextAutoCompleterItem
// String references:
//   "-> %@"


/* WARNING: Removing unreachable block (ram,0x01ed1dea) */
/* WARNING: Removing unreachable block (ram,0x01ed1df3) */
/* WARNING: Removing unreachable block (ram,0x01ed1c8c) */
/* WARNING: Removing unreachable block (ram,0x01ed1c95) */
/* WARNING: Removing unreachable block (ram,0x01ed1d60) */
/* WARNING: Removing unreachable block (ram,0x01ed1d69) */
/* WARNING: Removing unreachable block (ram,0x01ed1e6d) */
/* WARNING: Removing unreachable block (ram,0x01ed1e79) */

void FUN_01ed1bf0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x3a0))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    (**(code **)(*unaff_RSI + 0x380))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d21140();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = unaff_RSI[3];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0x380))();
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d21140();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
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


