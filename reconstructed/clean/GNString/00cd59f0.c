// Function: FUN_00cd59f0
// Address: 00cd59f0
// Size: 992 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd59f0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar5 = g_02704030;
  plVar1 = (int64_t *)*arg1;
  if (g_02704030 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar5;
  local_98 = '\x01';
  (**(code **)(*plVar1 + 0x578))(param_1,&local_a0);
  lVar5 = *(int64_t *)(this_ptr + 0x50);
  if (lVar5 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        *(void*)(this_ptr + 0x50) = 0;
      }
      else {
        FUN_00d50b00();
        lVar5 = *(int64_t *)(this_ptr + 0x50);
        *(int64_t *)(this_ptr + 0x50) = local_40;
      }
    }
    else {
      local_38 = '\0';
      *(int64_t *)(this_ptr + 0x50) = local_40;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = g_02774d80;
  plVar1 = (int64_t *)*arg1;
  if (g_02774d80 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar5;
  local_88 = '\x01';
  (**(code **)(*plVar1 + 0x578))(param_1,&local_90);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = g_02774d88;
  plVar1 = (int64_t *)*arg1;
  if (g_02774d88 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar5;
  local_78 = '\x01';
  (**(code **)(*plVar1 + 0x578))(param_1,&local_80);
  lVar3 = local_40;
  lVar5 = local_50;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) {
    uVar4 = 0;
    lVar6 = 0;
LAB_00cd5c3b:
    local_48 = uVar4;
    if (lVar6 != 0) goto LAB_00cd5d16;
  }
  else {
    FUN_00cd29e0();
    lVar6 = local_40;
    if (local_40 != 0) {
      uVar4 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00cd5c3b;
    }
    lVar6 = 0;
    uVar4 = 0;
  }
  local_48 = uVar4;
  if (lVar3 != 0) {
    local_70 = lVar3;
    local_68 = '\0';
    FUN_00cddf30();
    lVar5 = local_60;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    uVar4 = FUN_00cd1020();
    if (local_40 == 0) {
      lVar6 = 0;
    }
    else {
      local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      lVar6 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00cd5d16:
  if (lVar6 != 0) {
    lVar5 = *(int64_t *)(lVar6 + 0x10);
    lVar2 = *(int64_t *)(this_ptr + 0x40);
    if (lVar2 != lVar5) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x40) = lVar5;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 0x48) = 0;
    (**(code **)(**(int64_t **)(*(int64_t *)(lVar6 + 0x10) + 0x30) + 0x368))();
    lVar5 = *(int64_t *)(lVar6 + 0x10);
    if (*(int64_t *)(lVar5 + 0x38) != 0) {
      FUN_00cd4fc0();
      lVar5 = *(int64_t *)(lVar6 + 0x10);
    }
    (**(code **)(**(int64_t **)(lVar5 + 0x30) + 0x378))();
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}

