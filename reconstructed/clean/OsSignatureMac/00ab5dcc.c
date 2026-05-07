// Function: FUN_00ab5dcc
// Address: 00ab5dcc
// Size: 693 bytes
// Class: OsSignatureMac

uint64_t FUN_00ab5dcc(void)

{
  int64_t lVar1;
  uint64_t arg1;
  uint64_t uVar2;
  int64_t *this_ptr;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  uVar2 = this_ptr[1];
  if (uVar2 < (uint64_t)this_ptr[2]) {
    if (uVar2 == arg1) {
      FUN_008de980();
      this_ptr[1] = arg1 + 0x260;
    }
    else {
      FUN_00ab6966(arg1 + 0x260,uVar2);
      FUN_008dea76();
    }
  }
  else {
    if (0x6bca1af286bca1 < ((int64_t)(uVar2 - *this_ptr) >> 5) * -0x79435e50d79435e5 + 1U) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_008e4528(this_ptr + 2,((int64_t)(arg1 - *this_ptr) >> 5) * -0x79435e50d79435e5);
    if (local_48 == local_40) {
      if (local_58 < local_50) {
        for (; local_50 != local_48; local_50 = local_50 + 0x260) {
          FUN_008dea76();
        }
      }
      else {
        uVar2 = 0;
        if (local_40 - local_58 != 0) {
          uVar2 = ((int64_t)(local_40 - local_58) >> 5) * 0xd79435e50d79436;
        }
        FUN_008e4528(local_38,uVar2 >> 2);
        if (local_48 - local_50 != 0) {
          lVar1 = ((int64_t)(local_48 - local_50) >> 5) * 0x20;
          do {
            FUN_008de980();
            lVar1 = lVar1 + -0x260;
          } while (lVar1 != 0);
        }
        FUN_008e4598();
      }
    }
    FUN_008de980();
    arg1 = FUN_00ab6a2c();
    FUN_008e4598();
  }
  return arg1;
}

