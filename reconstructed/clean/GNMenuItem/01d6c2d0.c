// Function: FUN_01d6c2d0
// Address: 01d6c2d0
// Size: 558 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d6c2d0(uint32_t param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)

{
  int in_EDX;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t local_38;
  char local_30;
  
  fVar4 = (float)((uint64_t)param_2 >> 0x20);
  fVar3 = (float)param_2;
  FUN_01cc0ca0(param_1,in_EDX);
  if (in_EDX == 0x10) {
    (**(code **)(*this_ptr + 0x560))(param_1,fVar3,param_3,param_4);
    uVar1 = FUN_00d05530();
    (**(code **)(*this_ptr + 0x3a0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar2 = (float)((uint64_t)uVar1 >> 0x20) + g_02390d00;
    fVar4 = fVar4 * g_0239011c;
    fVar3 = fVar3 + (float)uVar1 + g_02390d00;
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    (**(code **)(*this_ptr + 0x398))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    fVar4 = fVar4 + fVar2 + g_02390124;
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))((float)uVar1,fVar4,fVar3,fVar4);
  }
  return;
}

