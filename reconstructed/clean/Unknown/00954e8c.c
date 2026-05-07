// Function: FUN_00954e8c
// Address: 00954e8c
// Size: 693 bytes
// Class: Unknown

uint64_t FUN_00954e8c(void)

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
      FUN_00900250();
      this_ptr[1] = arg1 + 0x760;
    }
    else {
      FUN_0095444e(arg1 + 0x760,uVar2);
      FUN_00900856();
    }
  }
  else {
    if (0x22b63cbeea4e1a < ((int64_t)(uVar2 - *this_ptr) >> 5) * -0x34115b1e5f75270d + 1U) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_008cde30(this_ptr + 2,((int64_t)(arg1 - *this_ptr) >> 5) * -0x34115b1e5f75270d);
    if (local_48 == local_40) {
      if (local_58 < local_50) {
        for (; local_50 != local_48; local_50 = local_50 + 0x760) {
          FUN_00900856();
        }
      }
      else {
        uVar2 = 0;
        if (local_40 - local_58 != 0) {
          uVar2 = ((int64_t)(local_40 - local_58) >> 5) * -0x6822b63cbeea4e1a;
        }
        FUN_008cde30(local_38,uVar2 >> 2);
        if (local_48 - local_50 != 0) {
          lVar1 = ((int64_t)(local_48 - local_50) >> 5) * 0x20;
          do {
            FUN_00900250();
            lVar1 = lVar1 + -0x760;
          } while (lVar1 != 0);
        }
        FUN_008cdea0();
      }
    }
    FUN_00900250();
    arg1 = FUN_00954514();
    FUN_008cdea0();
  }
  return arg1;
}

