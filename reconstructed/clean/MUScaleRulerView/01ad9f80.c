// Function: FUN_01ad9f80
// Address: 01ad9f80
// Size: 514 bytes
// Class: MUScaleRulerView

void FUN_01ad9f80(float param_1,uint32_t param_2,float param_3,uint32_t param_4)

{
  char cVar1;
  void*this_ptr;
  float local_98;
  int64_t local_40;
  char local_38;
  
  cVar1 = FUN_01ad9100();
  local_98 = param_3;
  if (cVar1 == '\0') {
    FUN_01cfc9f0(g_02391090 + param_1,param_2);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_3 = param_3 + g_023b1620;
    (**(code **)(*(int64_t *)*this_ptr + 0x3f8))(param_3,param_4);
    local_98 = param_3 + g_0241c730;
  }
  FUN_01cfc9f0(param_1 + g_0241c6c4,param_2);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x3f8))(local_98,param_4);
  return;
}

