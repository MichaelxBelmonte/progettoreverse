// Function: FUN_01ad9840
// Address: 01ad9840
// Size: 1076 bytes
// Class: MUScaleRulerView

void FUN_01ad9840(uint32_t param_1,uint32_t param_2)

{
  char cVar1;
  char in_CL;
  char in_DL;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_38;
  char local_30;
  
  if (*arg1 != 0) {
    FUN_01d488d0();
    (**(code **)(*(int64_t *)*this_ptr + 0x3a0))();
  }
  if (in_DL != '\0') {
    if (in_CL == '\0') {
      FUN_01cfbee0(param_1,param_1,param_1);
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
      (**(code **)(*(int64_t *)*this_ptr + 0x3a8))();
      cVar1 = FUN_01ad9100();
      if (cVar1 == '\0') {
        (**(code **)(*(int64_t *)*this_ptr + 0x370))(0,g_02390124);
        FUN_01cfbee0(param_2,param_2,param_2);
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
        (**(code **)(*(int64_t *)*this_ptr + 0x3a8))();
        (**(code **)(*(int64_t *)*this_ptr + 0x370))(0,g_02390d00);
      }
    }
    else {
      cVar1 = FUN_01ad9100();
      if (cVar1 == '\0') {
        (**(code **)(*(int64_t *)*this_ptr + 0x370))(0,g_02390124);
        FUN_01cfbee0(param_2,param_2,param_2);
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
        (**(code **)(*(int64_t *)*this_ptr + 0x3a8))();
        (**(code **)(*(int64_t *)*this_ptr + 0x370))(0,g_02390d00);
      }
      FUN_01cfbee0(param_1,param_1,param_1);
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
      (**(code **)(*(int64_t *)*this_ptr + 0x3a8))();
    }
  }
  return;
}

