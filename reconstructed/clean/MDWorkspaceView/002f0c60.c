// Function: FUN_002f0c60
// Address: 002f0c60
// Size: 849 bytes
// Class: MDWorkspaceView
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_002f0c60(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01bf1540();
  uVar4 = (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_60;
  local_a0 = g_026fe4b8;
  if (g_026fe4b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_98 = '\x01';
  (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_a0);
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
  FUN_01d488d0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02394298);
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  FUN_00d05530();
  (**(code **)(*plVar1 + 0x3b8))();
  uVar4 = (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_60;
  local_90 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_88 = '\x01';
  (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_90);
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
  FUN_01d488d0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  lVar3 = this_ptr[0x5a];
  if (lVar3 != 0) goto LAB_002f0f5c;
  FUN_01e3f820();
  FUN_01d39800();
  lVar3 = this_ptr[0x5a];
  lVar2 = lVar3;
  if (lVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar2 = 0;
        goto LAB_002f0efa;
      }
      FUN_00d50b00();
      lVar3 = this_ptr[0x5a];
      this_ptr[0x5a] = local_40;
      lVar2 = local_40;
    }
    else {
      local_38 = '\0';
      lVar2 = local_40;
LAB_002f0efa:
      this_ptr[0x5a] = lVar2;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar2 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = this_ptr[0x5a];
LAB_002f0f5c:
  plVar1 = (int64_t *)*arg1;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar3;
  (**(code **)(*plVar1 + 0x3a8))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}

