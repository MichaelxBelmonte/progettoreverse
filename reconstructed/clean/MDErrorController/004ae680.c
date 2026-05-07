// Function: FUN_004ae680
// Address: 004ae680
// Size: 536 bytes
// Class: MDErrorController

void FUN_004ae680(uint64_t param_1)

{
  int64_t lVar1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_01e534b0();
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x640))();
    (**(code **)(*local_88 + 0x370))();
    FUN_01d44a40(param_1,1);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_01e12b60();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01e125e0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((*(int64_t *)(this_ptr + 0x88) != 0) &&
     (lVar1 = *(int64_t *)(this_ptr + 0x78), lVar1 != 0)) {
    local_50 = 0;
    FUN_00d50b00();
    local_50 = '\x01';
    local_58 = lVar1;
    FUN_01e57260(param_1,&local_58);
    lVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e125e0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
  }
  return;
}

