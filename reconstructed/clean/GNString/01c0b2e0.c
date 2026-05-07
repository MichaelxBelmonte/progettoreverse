// Function: FUN_01c0b2e0
// Address: 01c0b2e0
// Size: 761 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c0b2e0(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02572358;
  (*g_02572370)();
  if (*param_2 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = *param_2;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar3 = -local_58._4_4_;
        }
        else {
          iVar3 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar3);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar3 = 0;
        }
        local_58 = CONCAT44(iVar3,(int)local_58);
      }
      lVar2 = (int64_t)(int)local_58;
      iVar3 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar3);
      if (*(int *)(local_60 + 0xc) <= iVar3) break;
      local_e8 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar2 * 8);
      local_e0 = 0;
      local_70 = local_e8;
      FUN_01c0ec80(*(int64_t *)(local_60 + 0x10),&local_e8);
      lVar2 = local_d8;
      if (local_d0 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d0 = '\0';
      }
      FUN_00d21140();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00115910();
  }
  FUN_01c0d420();
  (**(code **)(*this_ptr + 0x378))();
  lVar2 = this_ptr[5];
  iVar3 = (int)lVar2 + -1;
  *(int *)(this_ptr + 5) = iVar3;
  if ((int)lVar2 < 1) {
    *(void*)(this_ptr + 5) = 0;
  }
  else if (iVar3 != 0) goto LAB_01c0b5d1;
  FUN_00d403d0();
  lVar2 = g_027e9280;
  if (g_027e9280 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffffb8,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_01c0b5d1:
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

