// Function: FUN_01d374d0
// Address: 01d374d0
// Size: 1249 bytes
// Class: Unknown

uint64_t FUN_01d374d0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  undefined7 uVar6;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *param_1;
  uVar6 = (undefined7)((uint64_t)this_ptr >> 8);
  if (lVar1 == 0) {
    local_58 = (int64_t *)0x0;
    plVar7 = (int64_t *)0x0;
LAB_01d37980:
    uVar5 = CONCAT71(uVar6,lVar1 != 0);
    FUN_00d50b20();
    if (plVar7 == (int64_t *)0x0) goto LAB_01d379a4;
  }
  else {
    lVar2 = *arg1;
    if (lVar2 != 0) {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar2 + 0xc) <= local_40) break;
        local_58 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar4 * 8);
        (**(code **)(*this_ptr + 0x498))();
        (**(code **)(*local_68 + 0x3a0))();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00083b20();
    }
    local_e0 = '\0';
    local_e8 = plVar3;
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01e4fcf0(&stack0xffffffffffffff78,&local_e8);
    if (local_58 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
    }
    else {
      plVar7 = local_58;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_50 = '\0';
      }
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_01e5e3f0();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == (int64_t *)0x0) {
      FUN_01e56750();
      local_d8 = *param_1;
      local_d0 = '\0';
      FUN_01e5e380();
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e56750();
    FUN_01e5e430();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_c0 = '\0';
    local_c8 = plVar3;
    FUN_01e2fa60();
    if (local_58 == (int64_t *)0x0) {
      local_58 = (int64_t *)0x0;
    }
    else if (local_50 == '\0') {
      FUN_00d50b00();
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_b0 = '\0';
    local_b8 = plVar7;
    (**(code **)(*this_ptr + 0x580))();
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      local_a8 = *arg1;
      local_a0 = '\0';
      FUN_01d2a8f0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (*param_2 != 0) {
        local_90 = '\0';
        local_98 = *param_2;
        FUN_01d2c5c0();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d2eb40();
    }
    (**(code **)(*plVar7 + 0x460))();
    if (plVar3 != (int64_t *)0x0) goto LAB_01d37980;
    uVar5 = CONCAT71(uVar6,1);
  }
  FUN_00d50b20();
LAB_01d379a4:
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}

