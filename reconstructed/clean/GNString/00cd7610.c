// Function: FUN_00cd7610
// Address: 00cd7610
// Size: 861 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd7610(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar5;
  bool bVar6;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*arg1 + 0x368))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00cd7670;
    }
LAB_00cd76d7:
    bVar5 = true;
    bVar4 = false;
LAB_00cd76e6:
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    if (local_40 == 0) goto LAB_00cd7700;
  }
  else {
    if (local_40 == 0) goto LAB_00cd76d7;
LAB_00cd7670:
    FUN_00d8a060();
    if (local_40 == 0) goto LAB_00cd76d7;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    (**(code **)(*(int64_t *)*param_2 + 0x368))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar4 = true;
    if (local_40 == 0) {
      bVar5 = false;
      local_40 = 0;
      goto LAB_00cd76e6;
    }
    FUN_00d8ee20();
    if (local_40 == 0) {
LAB_00cd78b5:
      bVar5 = false;
      goto LAB_00cd76e6;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_00d8ef00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_00cd78b5;
    lVar1 = arg1[8];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00cd0c90();
    if (local_40 == 0) {
      bVar3 = 1;
      bVar2 = 1;
      local_48 = 0;
      bVar5 = false;
      bVar4 = false;
    }
    else {
      bVar5 = true;
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      bVar3 = 0;
      bVar2 = 0;
      local_48 = local_40;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      bVar2 = bVar3;
      bVar4 = bVar5;
    }
    bVar5 = *(int64_t *)(local_48 + 0x50) == 0;
    bVar6 = local_48 == 0;
    if (!bVar6 && !bVar5) {
      bVar4 = false;
      local_48 = 0;
    }
    if (!(bool)(bVar2 | (bVar6 || bVar5))) {
      FUN_00d50b20();
      bVar4 = false;
      local_48 = 0;
    }
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if (bVar4) {
      *this_ptr = local_48;
    }
    else {
      if (local_48 == 0) {
        local_48 = 0;
      }
      else {
        FUN_00d50b00();
      }
      *this_ptr = local_48;
    }
    *(void*)(this_ptr + 1) = 1;
    bVar4 = true;
    bVar5 = false;
  }
  FUN_00d50b20();
LAB_00cd7700:
  if ((bVar4) && (!bVar5)) {
    FUN_00d50b20();
  }
  return;
}

