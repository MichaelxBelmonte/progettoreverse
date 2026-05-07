// Function: FUN_01979450
// Address: 01979450
// Size: 1083 bytes
// Class: Unknown

void FUN_01979450(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar5;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_40;
  char local_38;
  
  FUN_01989f80();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                      *local_40 + 0x40))();
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else {
    (**(code **)(*this_ptr + 0x928))();
    if (local_c8 == 0) {
      cVar3 = '\0';
    }
    else {
      (**(code **)(*local_40 + 0xe10))();
      (**(code **)(*this_ptr + 0x928))();
      if (local_a0 == '\0') {
        if (local_a8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_40 = local_a8;
      local_38 = '\0';
      cVar3 = FUN_00d24090();
      if (local_a8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x30] != 0) goto LAB_0197965b;
  uVar5 = FUN_01e3f820();
  uVar5 = FUN_00d05530(uVar5,param_2,0);
  FUN_01d39800(uVar5,param_2,0);
  plVar1 = (int64_t *)this_ptr[0x30];
  plVar4 = plVar1;
  if (plVar1 != local_40) {
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
        goto LAB_01979600;
      }
      FUN_00d50b00();
      plVar1 = (int64_t *)this_ptr[0x30];
      this_ptr[0x30] = (int64_t)local_40;
    }
    else {
      local_38 = '\0';
LAB_01979600:
      this_ptr[0x30] = (int64_t)plVar4;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0197965b:
  if (cVar3 == '\0') {
    FUN_019694b0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_019698a0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d48b40(g_02390124);
  plVar1 = (int64_t *)*arg1;
  lVar2 = this_ptr[0x30];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x3a0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01969cb0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = this_ptr[0x30];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x3a8))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

