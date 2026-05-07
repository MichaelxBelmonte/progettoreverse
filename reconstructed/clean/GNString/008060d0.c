// Function: FUN_008060d0
// Address: 008060d0
// Size: 1249 bytes
// Class: GNString
// String references:
//   "%I %%"
//   "1/%I T"
//   "%I/%I"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_008060d0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  void*puVar2;
  void*puVar3;
  char cVar4;
  uint32_t uVar5;
  int64_t *this_ptr;
  uint64_t unaff_R14;
  uint64_t uVar6;
  float fVar7;
  uint64_t uVar8;
  int local_c4;
  int local_c0;
  float local_bc;
  void*local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  char local_60;
  void*local_58;
  uint local_50;
  int local_4c;
  void*local_48;
  uint local_40;
  int local_38;
  
  uVar6 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
  if (param_2 != 0) {
    uVar8 = (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x970))();
    local_98 = local_48;
    local_90 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (void*)0x0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_90 = '\x01';
    cVar4 = FUN_007424c0(uVar8,&local_c0);
    if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      uVar6 = 0;
    }
    else {
      plVar1 = (int64_t *)this_ptr[0x1b];
      if ((local_c4 == 3) && (local_c0 != 3)) {
        local_50 = 1;
        local_58 = &g_024cc6f0;
        local_4c = local_c0;
        FUN_00d8cb40(&g_024cc6f0,&local_58);
        local_88 = local_48;
        local_80 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_80 = '\x01';
        (**(code **)(*plVar1 + 0x968))();
        if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = 2;
        local_48 = &g_024c3df0;
        local_38 = local_c0;
        FUN_00d8cb40(&g_024c3df0,&local_48);
        local_78 = local_58;
        local_70 = 0;
        if ((char)local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        local_70 = '\x01';
        (**(code **)(*plVar1 + 0x968))();
        if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      *(void*)(this_ptr + 0x1c) = 1;
      (**(code **)(*(int64_t *)this_ptr[0x11] + 0x918))();
      (**(code **)(*this_ptr + 0x5e8))();
      FUN_00364bb0();
      puVar3 = local_48;
      if ((char)local_40 == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = local_40 & 0xffffff00;
      }
      uVar5 = (**(code **)(*(int64_t *)this_ptr[0x11] + 0x920))();
      uVar8 = FUN_00802530();
      puVar2 = local_58;
      if (((char)local_50 == '\0') && (local_58 != (void*)0x0)) {
        uVar8 = FUN_00d50b00();
      }
      FUN_00803100(uVar8,uVar5);
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00364bb0();
      local_68 = local_48;
      local_60 = 0;
      if ((char)local_40 == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = local_40 & 0xffffff00;
      }
      local_60 = '\x01';
      local_bc = (float)(**(code **)(*(int64_t *)this_ptr[0x12] + 0x930))();
      FUN_00802530();
      local_a8 = local_58;
      local_a0 = 0;
      if (((char)local_50 == '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_012762c0((double)local_bc);
      if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x5f0))();
      plVar1 = (int64_t *)this_ptr[0x13];
      fVar7 = (float)(**(code **)(*(int64_t *)this_ptr[0x12] + 0x930))();
      local_4c = (int)(fVar7 * g_023908e0);
      local_50 = 1;
      local_58 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_58);
      local_b8 = local_48;
      local_b0 = 0;
      if ((char)local_40 == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = local_40 & 0xffffff00;
      }
      local_b0 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 0x19) = 1;
    }
  }
  return uVar6 & 0xffffffff;
}

