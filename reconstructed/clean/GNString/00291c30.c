// Function: FUN_00291c30
// Address: 00291c30
// Size: 631 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00291c30(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar4;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00ce70e0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_00291c87;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_00291c87:
    FUN_00ce71c0();
    if ((((local_40 != (int64_t *)0x0) && (plVar4 = local_40, local_38 == '\0')) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar4 == (int64_t *)0x0) {
    FUN_00ce6e90();
    plVar4 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
    }
    else if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
            (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026decd8;
  if (g_026decd8 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  (**(code **)(*plVar4 + 0x400))(param_1,&local_70);
  if (local_40 == plVar4) {
LAB_00291d72:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_00291d72;
    }
    FUN_00d50b20();
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x758))();
  local_50 = local_60;
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*plVar4 + 0x400))(param_1,&local_50);
  plVar2 = local_40;
  if (local_40 != plVar4) {
    if (local_38 != '\0') {
      FUN_00d50b20();
      local_38 = '\0';
      plVar4 = local_40;
      goto LAB_00291e3f;
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    plVar4 = plVar2;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00291e3f:
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar4 + 0x3a0))();
  if (cVar3 == '\0') {
    (**(code **)(*plVar4 + 0x428))();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

