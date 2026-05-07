// Function: FUN_01f64a20
// Address: 01f64a20
// Size: 677 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01f64a20(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  if (param_2 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x80);
    if (plVar1 == (int64_t *)0x0) {
      plVar1 = *(int64_t **)(this_ptr + 0xa0);
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x980))();
      local_40 = local_30;
      local_38 = 0;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
        lVar2 = *(int64_t *)(this_ptr + 0xb0);
      }
      else {
        local_28 = '\0';
        lVar2 = *(int64_t *)(this_ptr + 0xb0);
      }
      local_38 = '\x01';
      if (lVar2 != 0) {
        local_38 = '\x01';
        local_58 = 0;
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar2;
      (**(code **)(*plVar1 + 0x80))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x980))();
      local_50 = local_30;
      local_48 = 0;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
        lVar2 = *(int64_t *)(this_ptr + 0xa0);
      }
      else {
        local_28 = '\0';
        lVar2 = *(int64_t *)(this_ptr + 0xa0);
      }
      local_48 = '\x01';
      if (lVar2 != 0) {
        local_48 = '\x01';
        local_78 = 0;
        FUN_00d50b00();
      }
      local_78 = '\x01';
      local_68 = 0;
      lVar3 = *(int64_t *)(this_ptr + 0xb0);
      local_80 = lVar2;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_70 = lVar3;
      (**(code **)(*plVar1 + 0x28))(&local_70,&local_80);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0xa20))();
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      *(void*)(this_ptr + 0x98) = 0;
      FUN_00d50b20();
    }
    FUN_01ceb850();
    FUN_01ce6530();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}

