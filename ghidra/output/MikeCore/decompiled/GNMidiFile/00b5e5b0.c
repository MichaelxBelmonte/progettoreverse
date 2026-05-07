// Function: FUN_00b5e5b0
// Address: 00b5e5b0
// Size: 985 bytes
// Class: GNMidiFile
// String references:
//   "\n)"
//   "(GNMidiFile (sequence %I, timebase %s, starttime offset %.4f, largest timestamp %.4f):\n  tempi:%@,...
//   "quarters"
//   "seconds"
//   ",\n  keys:%@"
//   ",\n  markers:%@"
//   ",\n  sequencename:%@"
//   ",\n  copyright:%@"
//   "\n  tracks:%@"


void FUN_00b5e5b0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar3;
  char *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_b8 = "seconds";
  if (*(int *)(unaff_RSI + 0xc) == 0) {
    local_b8 = "quarters";
  }
  local_b0 = FUN_00b5ec40();
  local_88 = *(longlong *)(unaff_RSI + 0x20);
  uVar3 = FUN_00b66b80(unaff_RSI + 0x18,&local_b8,&local_b0,&local_88);
  uVar3 = FUN_00d94d80(uVar3,&local_78);
  local_78 = (undefined8 *)&DAT_0253ba60;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  local_78 = (undefined8 *)&DAT_0253ba98;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x30);
  if (lVar1 != 0) {
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = 0;
    uVar3 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar1;
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar1 != 0) {
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = 0;
    uVar3 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar1;
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x48);
  if (lVar1 != 0) {
    local_a0 = 0;
    uVar3 = FUN_00d50b00();
    local_a0 = '\x01';
    local_a8 = lVar1;
    uVar3 = FUN_00d93320(uVar3,4);
    lVar1 = local_88;
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = 0;
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar3 = FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar1 != 0) {
    local_90 = 0;
    uVar3 = FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar1;
    uVar3 = FUN_00d93320(uVar3,4);
    lVar1 = local_88;
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = 0;
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar3 = FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x58);
  local_70 = 1;
  local_78 = &DAT_024c5048;
  if (lVar1 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  FUN_00d94d80(uVar3,&local_78);
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8db40();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


