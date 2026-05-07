// Function: FUN_00801f60
// Address: 00801f60
// Size: 811 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00801f60(uint64_t param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint64_t unaff_RBX;
  uint64_t uVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
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
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar3 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  if (param_2 == 0) goto LAB_00802277;
  FUN_00d6f370();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00802001;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
LAB_00801fbf:
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x930))();
    FUN_00d46dc0();
    local_70 = local_40;
    local_68 = 0;
    local_b0 = g_0272fbb0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        local_b0 = g_0272fbb0;
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    g_0272fbb0 = local_b0;
    if (local_b0 != 0) {
      local_68 = '\x01';
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00d6f570(param_1,&local_b0);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x920))();
    FUN_00d46300();
    local_60 = local_40;
    local_58 = 0;
    local_a0 = g_0272fbb8;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        local_a0 = g_0272fbb8;
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    g_0272fbb8 = local_a0;
    if (local_a0 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_00d6f570(param_1,&local_a0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x920))();
    FUN_00d46530();
    local_50 = local_40;
    local_48 = 0;
    local_90 = g_0272fbc0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        local_90 = g_0272fbc0;
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    g_0272fbc0 = local_90;
    if (local_90 != 0) {
      local_48 = '\x01';
      FUN_00d50b00();
    }
    local_88 = '\x01';
    FUN_00d6f570(param_1,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
  }
  else {
    if (local_40 != 0) goto LAB_00801fbf;
LAB_00802001:
    bVar1 = true;
  }
  local_80 = *arg1;
  local_78 = '\0';
  uVar2 = FUN_00364990(param_1,1);
  uVar3 = (uint64_t)uVar2;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_00802277:
  return uVar3 & 0xffffffff;
}

