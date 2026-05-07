// Function: FUN_01f90590
// Address: 01f90590
// Size: 511 bytes
// Class: GNActionGroup
// === GNActionGroup properties ===
//                   _subgroups
//                   _supergroup
//                   _actionRegistrations


uint64_t FUN_01f90590(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t *local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01eda7e0();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)this_ptr[0x10] + 0x920))();
  FUN_01f8cb70();
  if (local_38 == (int64_t *)0x0) {
    FUN_01f8bbb0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 == 0) {
      (**(code **)(*(int64_t *)this_ptr[0x10] + 0xa60))();
      goto LAB_01f90655;
    }
  }
  else if (local_30 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x10] + 0xa58))();
LAB_01f90655:
  if (local_38 != (int64_t *)0x0) {
    FUN_01eda650();
    FUN_01eda7e0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar2 = (**(code **)(*local_38 + 0x50))();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_01dd4c60();
    }
  }
  lVar1 = this_ptr[0x10];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x5e8))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

