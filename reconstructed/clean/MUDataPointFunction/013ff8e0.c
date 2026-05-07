// Function: FUN_013ff8e0
// Address: 013ff8e0
// Size: 580 bytes
// Class: MUDataPointFunction

uint32_t FUN_013ff8e0(int *param_1,void*param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int local_84;
  int64_t *local_40;
  char local_38;
  
  if (*arg1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00ddb860();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d95590();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d95590();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar2 = (**(code **)(*local_40 + 0x410))();
    if ((char)uVar2 != '\0') {
      *param_1 = local_84 + -1;
      uVar3 = FUN_013ff630();
      *param_2 = uVar3;
    }
    FUN_00d50b20();
  }
  return uVar2;
}

