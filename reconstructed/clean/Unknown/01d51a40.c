// Function: FUN_01d51a40
// Address: 01d51a40
// Size: 508 bytes
// Class: Unknown

void FUN_01d51a40(void)

{
  int64_t *plVar1;
  bool bVar2;
  void*this_ptr;
  int64_t *plVar3;
  int64_t *local_40;
  char local_38;
  
  FUN_01cb4790();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01d51a92;
    }
LAB_01d51ade:
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
    bVar2 = true;
    plVar3 = (int64_t *)0x0;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01d51ade;
LAB_01d51a92:
    (**(code **)(*local_40 + 0x3b8))();
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    bVar2 = false;
  }
  FUN_01d51d50();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == local_40) {
    FUN_01d4f450();
    if (plVar3 == local_40) {
      plVar1 = plVar3;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      *this_ptr = plVar1;
      *(void*)(this_ptr + 1) = 1;
      goto joined_r0x01d51be6;
    }
    FUN_01d51d50();
    if (local_40 == (int64_t *)0x0) {
      *this_ptr = 0;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      *this_ptr = local_40;
    }
  }
  else {
    *this_ptr = plVar3;
  }
  *(void*)(this_ptr + 1) = 1;
joined_r0x01d51be6:
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

