// Function: FUN_006f63e0
// Address: 006f63e0
// Size: 851 bytes
// Class: Unknown

void FUN_006f63e0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  FUN_006f3f00();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    lVar1 = this_ptr[2];
  }
  else {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    lVar1 = this_ptr[2];
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_002e8930();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  FUN_002e95b0();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_0078b9c0();
  lVar1 = local_70;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_003231a0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (1 < *(int *)((int64_t)local_40 + 0xc)) {
    FUN_007938f0();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (*(int *)((int64_t)local_40 + 0xc) != 0) {
      local_90 = local_40;
      local_88 = '\0';
      FUN_006dbab0(param_1,&local_90);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)this_ptr[2];
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_78 = '\0';
  local_80 = local_40;
  (**(code **)(*plVar2 + 0x928))();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  (**(code **)(*this_ptr + 0x5d8))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x5d8))();
    (**(code **)(*local_40 + 0x688))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

