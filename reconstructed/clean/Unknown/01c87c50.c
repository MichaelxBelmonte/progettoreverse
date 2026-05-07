// Function: FUN_01c87c50
// Address: 01c87c50
// Size: 1311 bytes
// Class: Unknown

void FUN_01c87c50(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar4 = *arg1;
  if (this_ptr[0x28] == lVar4) {
    return;
  }
  if (this_ptr[0x28] == 0) {
    lVar5 = 0;
    if (lVar4 != 0) goto LAB_01c87d80;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_e8 = g_027ebc60;
    if (g_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_80 = 0;
    lVar4 = this_ptr[0x28];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar4;
    FUN_00d41040(&local_88,&local_e8);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = *arg1;
    lVar5 = this_ptr[0x28];
    if (lVar5 != lVar4) {
LAB_01c87d80:
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0x28] = lVar4;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((int64_t *)this_ptr[0x29] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x29] + 0x3a0))();
    plVar2 = local_38;
    plVar1 = (int64_t *)this_ptr[0x28];
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == plVar1) {
LAB_01c87e71:
      lVar4 = this_ptr[0x29];
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[0x29] + 0x3a0))();
      plVar1 = local_38;
      local_70 = 0;
      local_78 = this_ptr[0x29];
      if (local_78 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x3e0))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = 0;
      if (this_ptr[0x29] != 0) {
        this_ptr[0x29] = 0;
        FUN_00d50b20();
        goto LAB_01c87e71;
      }
    }
    if (lVar4 != 0) goto LAB_01c8804f;
  }
  if (this_ptr[0x28] == 0) {
    return;
  }
  FUN_00e7bdb0();
  uVar3 = FUN_00e7bdb0();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_f8 + 0x378))();
  local_48 = local_a8;
  local_40 = 0;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
    lVar4 = this_ptr[0x2b];
  }
  else {
    local_a0 = '\0';
    lVar4 = this_ptr[0x2b];
  }
  local_40 = '\x01';
  if (lVar4 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  local_d8 = lVar4;
  FUN_01a8bca0(1,uVar3 >> 0x20,&local_48,&local_d8);
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = plVar1;
  local_c0 = '\0';
  (**(code **)(*(int64_t *)this_ptr[0x28] + 0x3d8))();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)this_ptr[0x29];
  if (plVar2 != plVar1) {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    this_ptr[0x29] = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01c8804f:
  if (this_ptr[0x28] != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b8 = g_027ebc60;
    if (g_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_50 = 0;
    lVar4 = this_ptr[0x28];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar4;
    FUN_00d41430(&local_58,&local_b8);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

