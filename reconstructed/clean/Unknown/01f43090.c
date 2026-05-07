// Function: FUN_01f43090
// Address: 01f43090
// Size: 522 bytes
// Class: Unknown

void FUN_01f43090(uint64_t param_1,void*param_2)

{
  void*this_ptr;
  int64_t *plVar1;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*param_2 + 0x368))();
  plVar1 = local_40;
  if (local_40 == (int64_t *)0x0) goto LAB_01f431e7;
  if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8a060();
  if (local_40 == plVar1) {
LAB_01f43129:
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
      FUN_00d50b20();
      goto LAB_01f43129;
    }
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01f431e7;
  FUN_01f42cb0();
  if (local_40 == plVar1) {
LAB_01f43192:
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
      FUN_00d50b20();
      goto LAB_01f43192;
    }
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x3f0))();
    plVar1 = local_40;
    FUN_00d8a060();
    local_50 = local_60;
    local_48 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = '\x01';
    local_68 = '\0';
    local_70 = 0;
    (**(code **)(*plVar1 + 0x4f0))(&local_70,&local_50);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
LAB_01f431e7:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

