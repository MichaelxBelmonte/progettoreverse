// Function: FUN_01ce4390
// Address: 01ce4390
// Size: 549 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01ce4390(int64_t *param_1)

{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  lVar3 = g_02704060;
  plVar2 = (int64_t *)*param_1;
  if (plVar2 == (int64_t *)0x0) {
    if (*(int64_t **)(arg1 + 0x18) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(arg1 + 0x18) + 1000))();
      *(void*)(this_ptr + 1) = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          *this_ptr = local_38;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        local_38 = 0;
      }
      *this_ptr = local_38;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    FUN_00cddf30();
    (**(code **)(*local_58 + 1000))();
    *(void*)(this_ptr + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = local_38;
        *(void*)(this_ptr + 1) = 1;
      }
    }
    else {
      *this_ptr = local_38;
      *(void*)(this_ptr + 1) = 1;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  cVar1 = (char)param_1[1];
  if (cVar1 != '\0') {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x3a0))();
  if (cVar4 == '\0') {
    if (cVar1 != '\0') {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  (**(code **)(*plVar2 + 1000))();
  *(void*)(this_ptr + 1) = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      *this_ptr = local_38;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_01ce43f6;
    }
    local_38 = 0;
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
LAB_01ce43f6:
  if (cVar1 != '\0') {
    FUN_00d50b20();
  }
  return;
}

