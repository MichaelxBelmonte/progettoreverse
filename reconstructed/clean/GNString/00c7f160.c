// Function: FUN_00c7f160
// Address: 00c7f160
// Size: 919 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00c7f160(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  local_70 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_78 = lVar1;
  FUN_00d8dab0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d64850();
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x18) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    *(void*)(this_ptr + 0x98) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x58) != 0) {
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    FUN_00d50b00();
    lVar1 = g_02785c58;
    if (g_02785c58 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_0277e650;
    if (local_48 != 0) {
      if (g_0277e650 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\0';
      FUN_00ca0840();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = g_027f38c0;
    if (*arg1 != 0) {
      if (g_027f38c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\0';
      FUN_00ca0840();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = g_02772650;
    if (g_02772650 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x58);
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_80 = '\0';
    local_88 = plVar3;
    local_58 = lVar2;
    FUN_00d40470(&local_88,&local_58,3,3);
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

