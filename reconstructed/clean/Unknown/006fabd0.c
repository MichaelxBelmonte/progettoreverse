// Function: FUN_006fabd0
// Address: 006fabd0
// Size: 603 bytes
// Class: Unknown

uint64_t FUN_006fabd0(uint64_t param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar3;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5d8))();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
  if (local_40 != 0) {
    (**(code **)(*this_ptr + 0x5d8))();
    cVar1 = FUN_0063f180();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      if (param_2 != '\0') {
        (**(code **)(*this_ptr + 0x5d8))();
        FUN_006472c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x5d8))();
      FUN_0063f230();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_0023af30(param_1,0);
        FUN_0023c090();
        uVar2 = FUN_002475d0(param_1,param_2);
        uVar3 = (uint64_t)uVar2;
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x5d8))();
      FUN_0063f230();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        uVar2 = FUN_002475d0(param_1,param_2);
        uVar3 = (uint64_t)uVar2;
        FUN_00d50b20();
      }
    }
  }
  return uVar3 & 0xffffffff;
}

