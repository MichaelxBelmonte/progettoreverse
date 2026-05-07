// Function: FUN_00173cd0
// Address: 00173cd0
// Size: 1556 bytes
// Class: Unknown

void FUN_00173cd0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint32_t uVar5;
  float fVar6;
  float fVar7;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  uint64_t local_98;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  FUN_01e3f820();
  local_a8 = FUN_00d05530();
  local_98._0_4_ = fVar6;
  local_98._4_4_ = fVar7;
  uVar4 = FUN_00d05530();
  if (this_ptr[0x3a] != 0) goto LAB_00173dcb;
  FUN_01d39800((uint32_t)local_a8,(float)local_98,local_98._4_4_ / g_02394298);
  lVar1 = this_ptr[0x3a];
  lVar3 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_00173d70;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x3a];
      this_ptr[0x3a] = local_40;
      lVar3 = local_40;
    }
    else {
      local_38 = '\0';
      lVar3 = local_40;
LAB_00173d70:
      this_ptr[0x3a] = lVar3;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
LAB_00173dcb:
  uVar5 = (**(code **)(*this_ptr + 0x640))();
  plVar2 = local_50;
  local_128 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_120 = '\x01';
  (**(code **)(*plVar2 + 0x3b0))(uVar5,&local_128);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_a8 = lVar1;
  local_98 = (**(code **)(*this_ptr + 0x930))();
  FUN_01d48370();
  FUN_01d48b40(g_02394594);
  uVar5 = (**(code **)(*this_ptr + 0x640))();
  plVar2 = local_50;
  local_118 = g_026e41f8;
  if (g_026e41f8 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_110 = '\x01';
  (**(code **)(*plVar2 + 0x3b0))(uVar5,&local_118);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  FUN_01d488d0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)*arg1;
  local_78 = 0;
  lVar1 = this_ptr[0x3a];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar1;
  (**(code **)(*plVar2 + 0x3a0))();
  lVar1 = local_a8;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((float)local_98 <= 0.0) {
    local_c8 = lVar1;
    local_c0 = '\0';
    FUN_01d488d0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d39800(uVar4,fVar6 * (float)local_98,fVar7 / g_02394298);
    lVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = lVar1;
    uVar4 = (**(code **)(*this_ptr + 0x640))();
    plVar2 = local_50;
    local_108 = g_026e4200;
    if (g_026e4200 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_100 = '\x01';
    (**(code **)(*plVar2 + 0x3b0))(uVar4,&local_108);
    local_60 = local_40;
    lVar1 = local_a8;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_f8 = local_98;
    local_f0 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    local_e8 = lVar1;
    local_e0 = '\0';
    FUN_01d488d0();
    lVar1 = local_98;
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    local_d8 = lVar1;
    local_d0 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)*arg1;
  local_b0 = 0;
  lVar1 = this_ptr[0x3a];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_b8 = lVar1;
  (**(code **)(*plVar2 + 0x3a8))();
  lVar1 = local_a8;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

