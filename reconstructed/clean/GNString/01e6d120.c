// Function: FUN_01e6d120
// Address: 01e6d120
// Size: 511 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e6d120(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = *(int64_t *)(*param_2 + 0x40);
  if (lVar3 != 0) {
    FUN_00d50b00();
    *this_ptr = lVar3;
    goto LAB_01e6d269;
  }
  FUN_01e42030();
  lVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    *(void*)(this_ptr + 1) = 0;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
LAB_01e6d1ee:
    *this_ptr = arg1;
  }
  else {
    FUN_01e42030();
    local_60 = *(int64_t *)(*param_2 + 0x30);
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_01d8fa20(param_1,&local_60);
    lVar3 = local_40;
    if (local_40 == 0) {
      bVar1 = true;
      lVar3 = 0;
      bVar2 = false;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
        bVar2 = true;
        if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01e6d221;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar2 = true;
      bVar1 = false;
    }
LAB_01e6d221:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      FUN_01e42030();
      FUN_01d8b200();
      lVar3 = local_40;
      if (local_40 == 0) {
        lVar3 = 0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if (lVar3 == 0) {
        if (arg1 != 0) {
          FUN_00d50b00();
        }
        goto LAB_01e6d1ee;
      }
      if (!bVar2) goto LAB_01e6d25d;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      if (bVar1) {
LAB_01e6d25d:
        FUN_00d50b00();
      }
    }
    *this_ptr = lVar3;
  }
LAB_01e6d269:
  *(void*)(this_ptr + 1) = 1;
  return;
}

