// Function: FUN_00631870
// Address: 00631870
// Size: 502 bytes
// Class: MDPluginWindowResizeView


/* WARNING: Removing unreachable block (ram,0x006318da) */
/* WARNING: Removing unreachable block (ram,0x006318e3) */

void FUN_00631870(void)

{
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_01e56750();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 != (longlong *)0x0) {
    FUN_006f3f00();
    if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01e56750();
    (**(code **)(*local_38 + 0x478))();
    FUN_01e5f970();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_007585f0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01e5a050();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    (**(code **)(*local_38 + 0x468))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01e5f4b0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


