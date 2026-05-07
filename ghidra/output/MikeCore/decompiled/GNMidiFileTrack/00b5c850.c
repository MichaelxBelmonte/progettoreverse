// Function: FUN_00b5c850
// Address: 00b5c850
// Size: 1313 bytes
// Class: GNMidiFileTrack
// String references:
//   "(GNMidiFileTrack:\n"
//   "  name:%@,\n"
//   "  texts:%@,\n"
//   "  instrument:%@,\n"
//   "  program:%@,\n"
//   "  device:%@,\n"
//   "  lyrics:%@,\n"
//   "  cuePoints:%@,\n"
//   "  no events"
//   "\n)"


/* WARNING: Removing unreachable block (ram,0x00b5cd37) */
/* WARNING: Removing unreachable block (ram,0x00b5cd40) */

void FUN_00b5c850(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d8db40();
  lVar1 = *(longlong *)(unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x48);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong **)(unaff_RSI + 0x10) == (longlong *)0x0) {
    FUN_00d8db40();
  }
  else {
    (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 400))();
    if ((local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8db40();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


