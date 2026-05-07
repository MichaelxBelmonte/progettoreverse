// Function: FUN_00e289a0
// Address: 00e289a0
// Size: 512 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_00e289a0(void)

{
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar1;
  int64_t local_78;
  char local_70;
  int64_t local_40;
  char local_38;
  
  if (*(int *)(arg1[0xc] + 0xc) == 0) {
    (**(code **)(*arg1 + 0x428))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d243f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0x3b8))();
    if (local_40 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(local_40 + 0xc)) {
        lVar1 = 0;
        do {
          (**(code **)(**(int64_t **)(*(int64_t *)(local_40 + 0x10) + lVar1 * 8) + 0x428))();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          FUN_00d23480();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          lVar1 = lVar1 + 1;
        } while ((int)lVar1 < *(int *)(local_40 + 0xc));
      }
      FUN_00e2c6a0();
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = arg1[0xc];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

