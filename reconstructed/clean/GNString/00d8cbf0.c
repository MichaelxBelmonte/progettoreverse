// Function: FUN_00d8cbf0
// Address: 00d8cbf0
// Size: 593 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d8cbf0(uint64_t param_1,int param_2)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  void*local_38;
  char local_30;
  
  iVar1 = *(int *)(arg1 + 0x20);
  if (iVar1 == -1) {
    if (*(int64_t *)(arg1 + 0x10) != 0) {
      iVar1 = FUN_00e7dde0();
      goto joined_r0x00d8cc2d;
    }
  }
  else {
joined_r0x00d8cc2d:
    if (iVar1 != 0) {
      if (param_2 == 0) {
        if (*(int64_t *)(arg1 + 0x10) != 0) {
          FUN_00e7dde0();
          FUN_00c8e2b0();
          if ((local_30 == '\0') && (local_38 != (void*)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          goto LAB_00d8ce29;
        }
        goto LAB_00d8cd53;
      }
      if (param_2 == 5) {
        if (*(int *)(arg1 + 0x20) == -1) {
          FUN_00d931c0();
        }
        FUN_00c8e2b0();
        if ((local_30 == '\0') && (local_38 != (void*)0x0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        goto LAB_00d8ce29;
      }
      if (param_2 == 6) {
        if (*(int *)(arg1 + 0x20) == -1) {
          if (*(int64_t *)(arg1 + 0x10) != 0) {
            FUN_00e7dde0();
            FUN_00c8e2b0();
            if ((local_30 == '\0') && (local_38 != (void*)0x0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            goto LAB_00d8ce29;
          }
          goto LAB_00d8cd53;
        }
      }
      else {
LAB_00d8cd53:
        if (*(int *)(arg1 + 0x20) == -1) {
          FUN_00d931c0();
        }
      }
      FUN_00c8e690();
      if ((local_30 == '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00da41a0(*(void*)(arg1 + 0x20),param_2);
      FUN_00c8e340();
      goto LAB_00d8ce29;
    }
  }
  local_38 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_38 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
LAB_00d8ce29:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

