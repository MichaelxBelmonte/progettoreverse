// Function: FUN_00cd6020
// Address: 00cd6020
// Size: 652 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd6020(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar1 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x368))();
  local_58 = local_38;
  local_50 = 0;
  local_a8 = g_02704030;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      local_a8 = g_02704030;
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  g_02704030 = local_a8;
  if (local_a8 != 0) {
    local_50 = '\x01';
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  (**(code **)(*plVar1 + 0x4f0))(param_1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  plVar2 = *(int64_t **)(*(int64_t *)(this_ptr[8] + 0x48) + 0x28);
  if (plVar2 == (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr[8] + 0x48) + 0x18) + 0x370))();
  }
  else {
    local_60 = 0;
    FUN_00d50b00();
    local_60 = '\x01';
    local_68 = plVar2;
  }
  (**(code **)(*local_68 + 0x368))();
  local_48 = local_38;
  local_40 = 0;
  local_98 = g_02774d88;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      local_98 = g_02774d88;
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  g_02774d88 = local_98;
  if (local_98 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar1 + 0x4f0))(param_1,&local_98);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar3 = *(int64_t *)(*(int64_t *)(this_ptr[8] + 0x48) + 0x30);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_02774d80;
  local_80 = '\x01';
  local_88 = lVar3;
  if (g_02774d80 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar4;
  local_70 = '\x01';
  (**(code **)(*plVar1 + 0x4f0))(param_1,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}

