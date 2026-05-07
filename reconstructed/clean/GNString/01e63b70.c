// Function: FUN_01e63b70
// Address: 01e63b70
// Size: 562 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e63b70(int param_1,int param_2,int param_3,int param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (param_3 == 0) {
    *(void*)(this_ptr + 1) = 0;
    lVar2 = *(int64_t *)(arg1 + 0xc0);
  }
  else {
    bVar3 = 2 < param_2 - 1U;
    if (param_1 == 1) {
      if (param_4 == 0 || bVar3) {
        lVar2 = *(int64_t *)(arg1 + 200);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_80 = '\x01';
        lVar1 = *(int64_t *)(arg1 + 0xd0);
        local_88 = lVar2;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_70 = '\x01';
        local_78 = lVar1;
        FUN_01e64ee0(&local_78,&local_88);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_80 == '\0') {
          return;
        }
        if (local_88 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(void*)(this_ptr + 1) = 0;
      lVar2 = *(int64_t *)(arg1 + 0x148);
    }
    else {
      if (param_4 == 0 || bVar3) {
        if (param_2 - 0x23U < 2) {
          lVar2 = *(int64_t *)(arg1 + 0x88);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          lVar1 = *(int64_t *)(arg1 + 0xa0);
          local_68 = lVar2;
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = lVar1;
          FUN_01e64ee0(&local_58,&local_68);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 == '\0') {
            return;
          }
          if (local_68 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        lVar2 = *(int64_t *)(arg1 + 0xb0);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\x01';
        lVar1 = *(int64_t *)(arg1 + 0xb8);
        local_48 = lVar2;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_30 = '\x01';
        local_38 = lVar1;
        FUN_01e64ee0(&local_38,&local_48);
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == '\0') {
          return;
        }
        if (local_48 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(void*)(this_ptr + 1) = 0;
      lVar2 = *(int64_t *)(arg1 + 0x140);
    }
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

