// Function: FUN_01d8b250
// Address: 01d8b250
// Size: 534 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d8b250(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t local_30;
  uint8_t local_28;
  
  if (*arg1 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x148);
    if (plVar1 == (int64_t *)0x0) {
      if (*(int64_t **)(this_ptr + 0x18) == (int64_t *)0x0) {
        FUN_01f27fe0();
        if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_30 != (int64_t *)0x0) {
          FUN_01f27fe0();
          cVar2 = (**(code **)(*local_30 + 0x3b8))(param_1,0);
          if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_01f27fe0();
            (**(code **)(*local_30 + 0x3b8))(param_1,1);
            if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3b8))(param_1,0);
        if (cVar2 != '\0') {
          (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3b8))(param_1,1);
        }
      }
    }
    else {
      FUN_00d50b00();
      cVar2 = (**(code **)(*plVar1 + 0x3b8))(param_1,0);
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x3b8))(param_1,1);
      }
      FUN_00d50b20();
    }
  }
  return;
}

