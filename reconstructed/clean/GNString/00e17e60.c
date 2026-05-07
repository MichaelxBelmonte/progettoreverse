// Function: FUN_00e17e60
// Address: 00e17e60
// Size: 1733 bytes
// Class: GNString
// String references:
//   "%sobserver: %p is a (%@ *)%p"
//   "invalid "
//   "property: %@"
//   "object: %@"
//   "thread: %p"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00e17e60(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t arg1;
  uint64_t this_ptr;
  bool bVar4;
  int64_t local_d8;
  char local_d0;
  int64_t local_a0;
  char local_98;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
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
  if (*(int64_t **)(arg1 + 0x10) == (int64_t *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x10))();
  }
  lVar1 = g_027724b0;
  bVar4 = *(char *)(arg1 + 0x38) == '\0';
  if (lVar3 != 0 && bVar4) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
  }
  else {
    if (g_027724b0 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar1;
    local_98 = '\x01';
  }
  if (local_a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (((lVar3 != 0 && bVar4) && (local_d0 != '\0')) && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02785428;
  lVar3 = *(int64_t *)(arg1 + 0x20);
  if (lVar3 == 0) {
    if (g_02785428 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_02785430;
  if (*(int64_t *)(arg1 + 0x18) == 0) {
    if (g_02785430 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d4fff0();
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_02785438;
  lVar3 = *(int64_t *)(arg1 + 0x30);
  if (lVar3 == 0) {
    if (g_02785438 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_027d64a0;
  if (g_027d64a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

