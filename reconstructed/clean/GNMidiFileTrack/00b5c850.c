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

void FUN_00b5c850(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t arg1;
  void*this_ptr;
  int64_t local_60;
  char local_58;
  void*local_50;
  char local_48;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d8db40();
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
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
  lVar1 = *(int64_t *)(arg1 + 0x20);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
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
  lVar1 = *(int64_t *)(arg1 + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
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
  lVar1 = *(int64_t *)(arg1 + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
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
  lVar1 = *(int64_t *)(arg1 + 0x40);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x48);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(arg1 + 0x10) == (int64_t *)0x0) {
    FUN_00d8db40();
  }
  else {
    (**(code **)(**(int64_t **)(arg1 + 0x10) + 400))();
    if ((local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8db40();
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

