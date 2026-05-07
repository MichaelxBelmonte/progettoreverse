// Function: FUN_00e9a650
// Address: 00e9a650
// Size: 631 bytes
// Class: GNError
// String references:
//   "%@ - %@"

void FUN_00e9a650(void*param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  char cVar2;
  void*this_ptr;
  int64_t *plVar3;
  int64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  plVar3 = (int64_t *)*param_1;
  local_31 = *(char *)(param_1 + 1);
  if ((local_31 == '\0') || (plVar3 == (int64_t *)0x0)) {
    if (plVar3 == (int64_t *)0x0) {
      FUN_00d8d630();
      plVar1 = local_68;
      if (local_68 != (int64_t *)0x0) {
        if (local_60 != '\0') {
          local_31 = '\x01';
          plVar3 = local_68;
          goto LAB_00e9a696;
        }
        FUN_00d50b00();
        local_31 = '\x01';
        plVar3 = plVar1;
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    local_31 = '\x01';
  }
LAB_00e9a696:
  FUN_00e987e0();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00e9a6d5;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_00e9a6d5:
    local_88 = plVar1;
    local_80 = '\0';
    (**(code **)(*plVar3 + 0x388))();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_00e9a86f;
  }
  local_78 = *param_3;
  local_70 = '\0';
  cVar2 = FUN_00e98920();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00e98f40();
    (**(code **)(*plVar3 + 0x378))();
    FUN_00e99070();
    (**(code **)(*plVar3 + 0x378))();
    local_b0 = local_98;
    FUN_00083ea0(2,&local_b0);
    FUN_00d8cb40();
    local_68 = (int64_t *)&g_0253d630;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00e9a86f:
  if ((local_31 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

