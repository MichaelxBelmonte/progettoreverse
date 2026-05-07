// Function: FUN_01c0ec80
// Address: 01c0ec80
// Size: 545 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c0ec80(uint64_t param_1,int64_t *param_2)

{
  int64_t arg1;
  void*this_ptr;
  uint32_t uVar1;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_50;
  char local_48;
  
  local_a0 = *param_2;
  local_98 = '\0';
  FUN_01c0f250(param_1,&local_a0);
  if ((local_48 == '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (void*)0x0) {
    local_50 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    local_50[2] = 0;
    local_50[3] = 0;
    *(void*)(local_50 + 4) = 0;
    *local_50 = &g_026649c0;
    local_50[5] = 0;
    (*g_026649d8)();
    local_90 = *param_2;
    local_88 = '\0';
    FUN_01c0a930();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    uVar1 = FUN_01c19460();
    if (arg1 != 0) {
      uVar1 = FUN_00d50b20();
    }
    local_b0 = *param_2;
    local_a8 = 0;
    FUN_01c0f300(uVar1,&local_b0);
    uVar1 = FUN_01c194b0();
    local_70 = *param_2;
    local_78 = '\0';
    local_68 = '\0';
    local_80 = local_50;
    FUN_01c0f6d0(uVar1,&local_70);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_50;
  *(void*)(this_ptr + 1) = 1;
  return;
}

