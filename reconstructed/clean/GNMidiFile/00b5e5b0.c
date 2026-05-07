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
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void FUN_00b5e5b0(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar3;
  char *local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  void*local_78;
  uint32_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025795a8;
  (*g_025795c0)();
  local_b8 = "seconds";
  if (*(int *)(arg1 + 0xc) == 0) {
    local_b8 = "quarters";
  }
  local_b0 = FUN_00b5ec40();
  local_88 = *(int64_t *)(arg1 + 0x20);
  uVar3 = FUN_00b66b80(arg1 + 0x18,&local_b8,&local_b0,&local_88);
  uVar3 = FUN_00d94d80(uVar3,&local_78);
  local_78 = (void*)&g_0253ba60;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  local_78 = (void*)&g_0253ba98;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0x30);
  if (lVar1 != 0) {
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    uVar3 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar1;
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x38);
  if (lVar1 != 0) {
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    uVar3 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar1;
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x48);
  if (lVar1 != 0) {
    local_a0 = 0;
    uVar3 = FUN_00d50b00();
    local_a0 = '\x01';
    local_a8 = lVar1;
    uVar3 = FUN_00d93320(uVar3,4);
    lVar1 = local_88;
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &g_024c5048;
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
  lVar1 = *(int64_t *)(arg1 + 0x50);
  if (lVar1 != 0) {
    local_90 = 0;
    uVar3 = FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar1;
    uVar3 = FUN_00d93320(uVar3,4);
    lVar1 = local_88;
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &g_024c5048;
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
  lVar1 = *(int64_t *)(arg1 + 0x58);
  local_70 = 1;
  local_78 = &g_024c5048;
  if (lVar1 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  FUN_00d94d80(uVar3,&local_78);
  local_78 = &g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8db40();
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

