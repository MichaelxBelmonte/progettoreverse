// Function: FUN_00d8cf90
// Address: 00d8cf90
// Size: 663 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d8cf90(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  iVar2 = *(int *)(arg1 + 0x20);
  if (iVar2 == -1) {
    if (*(int64_t *)(arg1 + 0x10) != 0) {
      iVar2 = FUN_00e7dde0();
      goto joined_r0x00d8cfcf;
    }
  }
  else {
joined_r0x00d8cfcf:
    if (iVar2 != 0) {
      if (param_2 == 0) {
        if (*(int64_t *)(arg1 + 0x10) != 0) {
          FUN_00e7dde0();
          FUN_00c8e2b0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          goto LAB_00d8d20d;
        }
        goto LAB_00d8d114;
      }
      if (param_2 == 5) {
        iVar2 = *(int *)(arg1 + 0x20);
        if (iVar2 == -1) {
          FUN_00d931c0();
          iVar2 = *(int *)(arg1 + 0x20);
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        lVar1 = *(int64_t *)(local_40 + 0x10);
        FUN_00e7dbc0();
        *(void*)(lVar1 + (int64_t)iVar2 * 2) = 0;
        goto LAB_00d8d20d;
      }
      if (param_2 == 6) {
        if (*(int *)(arg1 + 0x20) == -1) {
          if (*(int64_t *)(arg1 + 0x10) != 0) {
            FUN_00e7dde0();
            FUN_00c8e2b0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            goto LAB_00d8d20d;
          }
          goto LAB_00d8d114;
        }
      }
      else {
LAB_00d8d114:
        if (*(int *)(arg1 + 0x20) == -1) {
          FUN_00d931c0();
        }
      }
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00da41a0(*(void*)(arg1 + 0x20),param_2);
      FUN_00c8e340();
      goto LAB_00d8d20d;
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
LAB_00d8d20d:
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}

