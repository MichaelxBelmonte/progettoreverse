// Function: FUN_00153100
// Address: 00153100
// Size: 602 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"

void FUN_00153100(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  void*local_58;
  uint local_50;
  void*local_38;
  char local_30;
  
  FUN_00d61ea0();
  lVar2 = g_027e3c40;
  plVar1 = (int64_t *)*arg1;
  if (g_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027e3c40;
  if (cVar4 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027e3c40 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x578))(param_1,&local_78);
    puVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (void*)0x0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      local_50 = 1;
      local_58 = &g_024c5048;
      if (this_ptr != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40(param_1,&local_58);
      if (local_30 == '\0') {
        if (local_38 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_58 = &g_024c5048;
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
      local_68 = puVar3;
      local_60 = '\0';
      local_58 = local_38;
      local_50 = local_50 & 0xffffff00;
      FUN_00ca0840(param_1,&local_58);
      if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}

