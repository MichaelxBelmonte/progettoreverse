// Function: FUN_003868c0
// Address: 003868c0
// Size: 1252 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_003868c0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  if (*(int64_t *)(arg1 + 0x130) != 0) {
    FUN_01c0b7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00385ce0();
    local_68 = g_02704040;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
        local_68 = g_02704040;
      }
    }
    else {
      local_78 = '\0';
    }
    g_02704040 = local_68;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\0';
    FUN_00ca0840();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(arg1 + 0x118) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(arg1 + 0x118) + 0x388))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00385ce0();
    local_68 = g_02704048;
    if ((local_78 == '\0') && (local_80 != 0)) {
      FUN_00d50b00();
      local_68 = g_02704048;
    }
    g_02704048 = local_68;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\0';
    FUN_00ca0840();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0037ca50();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_00386b9b;
    }
  }
  else if (local_68 != 0) {
LAB_00386b9b:
    if (*(int *)(local_68 + 0xc) != 0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
        FUN_00385ce0();
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
      }
      FUN_00115910();
      lVar1 = g_02704050;
      if (g_02704050 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    *this_ptr = plVar2;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return this_ptr;
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

