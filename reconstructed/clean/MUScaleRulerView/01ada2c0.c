// Function: FUN_01ada2c0
// Address: 01ada2c0
// Size: 798 bytes
// Class: MUScaleRulerView

void FUN_01ada2c0(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar3;
  int64_t *local_c0;
  char local_b8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  cVar2 = FUN_01ad9100();
  if (cVar2 == '\0') {
    (**(code **)(*this_ptr + 0x640))();
    local_80 = *arg1;
    local_78 = '\0';
    local_70 = 0;
    local_68 = '\0';
    (**(code **)(*local_40 + 0x528))(param_1,param_2);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d39800(param_1,param_2,g_023908d8);
    plVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cfbee0(g_02390120,g_02390120,g_02390120);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    uVar3 = (**(code **)(*this_ptr + 0x640))();
    local_a0 = g_026e41f0;
    if (g_026e41f0 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_98 = '\x01';
    (**(code **)(*local_c0 + 0x3b0))(uVar3,&local_a0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01d488d0();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = plVar1;
    local_88 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

