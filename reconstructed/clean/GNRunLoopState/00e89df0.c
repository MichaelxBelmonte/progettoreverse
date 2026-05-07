// Function: FUN_00e89df0
// Address: 00e89df0
// Size: 603 bytes
// Class: GNRunLoopState

void FUN_00e89df0(uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  lVar2 = FUN_00e89a30(param_3,param_1,param_4);
  if (lVar2 == -1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00dac760();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00e89e88;
    }
  }
  else if (local_40 != 0) {
LAB_00e89e88:
    FUN_00daa910();
    if (local_40 == 0) {
      local_40 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    FUN_00d50b20();
    goto LAB_00e89f4f;
  }
  FUN_00dac790();
  (**(code **)(*local_80 + 0x370))();
  (**(code **)(*local_90 + 0x4d8))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00daa940();
  if (local_40 == 0) {
    local_40 = 0;
    bVar1 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
  }
  else {
    bVar1 = true;
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00e89f4f:
  FUN_00dac5e0();
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}

