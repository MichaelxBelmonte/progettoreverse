// Function: FUN_008056c0
// Address: 008056c0
// Size: 679 bytes
// Class: GNString
// String references:
//   "%I %%"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_008056c0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t lVar3;
  int iVar4;
  uint32_t uVar5;
  int64_t *this_ptr;
  float fVar6;
  uint64_t uVar7;
  void*local_80;
  uint32_t local_78;
  int local_74;
  int64_t local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (param_2 != 0) {
    (**(code **)(*this_ptr + 0x5e8))();
    iVar4 = (**(code **)(*(int64_t *)this_ptr[0x11] + 0x920))();
    if (iVar4 < 8) {
      FUN_00364bb0();
      lVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      uVar5 = (**(code **)(*(int64_t *)this_ptr[0x11] + 0x920))();
      uVar7 = FUN_00802530();
      puVar2 = local_80;
      if (((char)local_78 == '\0') && (local_80 != (void*)0x0)) {
        uVar7 = FUN_00d50b00();
      }
      FUN_00803100(uVar7,uVar5);
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00364bb0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    fVar6 = (float)(**(code **)(*(int64_t *)this_ptr[0x12] + 0x930))();
    FUN_00802530();
    local_58 = 0;
    if (((char)local_78 == '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b00();
    }
    local_60 = local_80;
    local_58 = '\x01';
    FUN_012762c0((double)fVar6);
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x5f0))();
    plVar1 = (int64_t *)this_ptr[0x13];
    fVar6 = (float)(**(code **)(*(int64_t *)this_ptr[0x12] + 0x930))();
    local_74 = (int)(fVar6 * g_023908e0);
    local_78 = 1;
    local_80 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_80);
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
    (**(code **)(*plVar1 + 0x968))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x19) = 1;
  }
  return 1;
}

