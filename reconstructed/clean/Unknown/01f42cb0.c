// Function: FUN_01f42cb0
// Address: 01f42cb0
// Size: 570 bytes
// Class: Unknown
// String references:
//   "%@.%@"

void FUN_01f42cb0(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  void*puVar2;
  void*puVar3;
  char cVar4;
  int64_t *arg1;
  void*this_ptr;
  void*puVar5;
  void*local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  cVar4 = FUN_00d8ca50();
  if (cVar4 == '\0') {
    local_70 = *param_2;
    local_68 = '\0';
    (**(code **)(*arg1 + 0x620))();
    if (local_68 == '\0') {
      return;
    }
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_00d8f1a0();
  puVar1 = local_60;
  if ((((local_58 == '\0') && (local_60 != (void*)0x0)) && (FUN_00d50b00(), local_58 != '\0')
      ) && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8ed10();
  puVar2 = local_60;
  if (((local_58 == '\0') && (local_60 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_58 != '\0' && (local_60 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  local_80 = puVar1;
  local_78 = '\0';
  (**(code **)(*arg1 + 0x620))();
  puVar5 = local_60;
  puVar3 = puVar1;
  if (puVar1 != local_60) {
    if (local_58 != '\0') {
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
      local_58 = '\0';
      goto LAB_01f42e0b;
    }
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
    puVar3 = puVar5;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar5 = puVar3;
  if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_01f42e0b:
  if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 == (void*)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_88 = puVar2;
    FUN_00083ea0(2,&local_88);
    FUN_00d8cb40();
    local_60 = (void*)&g_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

