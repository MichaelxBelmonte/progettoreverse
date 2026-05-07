// Function: FUN_00e29210
// Address: 00e29210
// Size: 969 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e29210(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  (**(code **)(*(int64_t *)*arg1 + 0x388))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_00e2927a;
    }
LAB_00e294f9:
    bVar1 = true;
  }
  else {
    if (local_58 == 0) goto LAB_00e294f9;
LAB_00e2927a:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar3 * 8);
      FUN_00c7e7b0();
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      (**(code **)(*this_ptr + 0x420))();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        (**(code **)(*this_ptr + 0x3a8))();
        FUN_00d50b20();
      }
      FUN_00c801f0();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      (**(code **)(*this_ptr + 0x3a0))();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00e2c740();
    bVar1 = false;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00e295e4;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_00e295e4;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar4 = 0;
    do {
      (**(code **)(*this_ptr + 0x3c0))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_58 + 0xc));
  }
  FUN_00e2c6a0();
  FUN_00d50b20();
LAB_00e295e4:
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}

