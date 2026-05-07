// Function: FUN_01c1fa90
// Address: 01c1fa90
// Size: 505 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c1fa90(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  if (*(int64_t *)(this_ptr + 0x1b0) != 0) {
    FUN_01e1e360();
  }
  plVar1 = *(int64_t **)(this_ptr + 400);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x20))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = *(int64_t **)(this_ptr + 0x168);
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = *(int64_t *)(this_ptr + 0x178);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01c232c0();
    local_28 = 0;
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    local_28 = '\x01';
    local_30 = local_90;
    FUN_01c1a5a0(param_1,&local_30);
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    (**(code **)(*plVar1 + 0x388))();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x180) != 0) {
    FUN_01dcbf90();
  }
  if (*(int64_t *)(this_ptr + 0x188) != 0) {
    FUN_01ce87c0();
  }
  if (*(int64_t *)(this_ptr + 0x1b0) != 0) {
    *(void*)(this_ptr + 0x1b0) = 0;
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 400);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x28))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

