// Function: FUN_01cacee0
// Address: 01cacee0
// Size: 756 bytes
// Class: GNPBListWrapper

void FUN_01cacee0(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  uint64_t uVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_50;
  char local_48;
  
  local_c0 = *param_2;
  local_b8 = '\0';
  FUN_01cad410(param_1,&local_c0);
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    if (local_50 == (int64_t *)*arg1) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
      return;
    }
    FUN_00d50b00();
    local_b0 = *param_2;
    local_a8 = '\0';
    (**(code **)(*local_50 + 0x20))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  local_a0 = (int64_t *)*arg1;
  local_98 = '\0';
  local_90 = *param_2;
  local_88 = '\0';
  FUN_01cad550();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  local_80 = *param_2;
  local_78 = '\0';
  FUN_01ca74b0();
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00e1cfc0();
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x18) == 0) {
    FUN_00d50b00();
    FUN_01f27160();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar2 = (*PTR__objc_msgSend_024a9998)();
  (*puVar1)(*(void*)(*(int64_t *)(this_ptr + 0x10) + 0x18),uVar2);
  (*PTR__objc_release_024a99a0)();
  return;
}

