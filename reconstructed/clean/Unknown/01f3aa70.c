// Function: FUN_01f3aa70
// Address: 01f3aa70
// Size: 1192 bytes
// Class: Unknown

uint64_t FUN_01f3aa70(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  undefined7 uVar8;
  undefined7 extraout_var;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_e8;
  char local_e0;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *param_1;
  uVar8 = 0;
  if (lVar1 == 0) goto LAB_01f3aefb;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  local_b8 = '\0';
  local_b0 = 0;
  local_a8 = '\0';
  local_c0 = plVar6;
  local_70 = plVar6;
  FUN_01e4fcf0(&local_b0,&local_c0);
  local_48 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar3 = true;
    local_48 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    local_38 = '\0';
    bVar3 = false;
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  FUN_01e5e3f0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    FUN_01e56750();
    local_a0 = *param_1;
    local_98 = '\0';
    FUN_01e5e380();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e56750();
  FUN_01e5e430();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_90 = local_70;
  local_88 = '\0';
  FUN_01e2fa60();
  if (local_40 == (int64_t *)0x0) {
    bVar4 = true;
    plVar6 = (int64_t *)0x0;
  }
  else {
    plVar6 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = false;
    }
    else {
      local_38 = '\0';
      bVar4 = false;
    }
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((*arg1 == 0) && (plVar6 != (int64_t *)0x0)) {
    FUN_01d25f70();
    plVar2 = (int64_t *)*arg1;
    if (plVar2 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01f3ae32;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01f3ae2d;
      }
    }
    else {
      lVar5 = arg1[1];
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_40;
        if (((char)lVar5 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f3ae2d:
        *(void*)(arg1 + 1) = 1;
LAB_01f3ae32:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f3ae46;
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar5 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(arg1 + 1) = 1;
  }
LAB_01f3ae46:
  if ((*param_2 == 0) || (plVar6 == (int64_t *)0x0)) {
    if (plVar6 != (int64_t *)0x0) {
      FUN_01d2ead0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_01d2bdc0();
      }
    }
  }
  else {
    local_78 = '\0';
    local_80 = *param_2;
    FUN_01d2e9e0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d2bdc0();
  }
  (**(code **)(*local_48 + 0x460))();
  uVar7 = FUN_00d50b20();
  if (!bVar3) {
    uVar7 = FUN_00d50b20();
  }
  uVar8 = (undefined7)((uint64_t)uVar7 >> 8);
  if (!bVar4 && plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
    uVar8 = extraout_var;
  }
LAB_01f3aefb:
  return CONCAT71(uVar8,lVar1 != 0);
}

