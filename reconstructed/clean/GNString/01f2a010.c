// Function: FUN_01f2a010
// Address: 01f2a010
// Size: 516 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01f2a010(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  uint64_t local_130;
  uint8_t local_128;
  uint64_t local_120;
  uint8_t local_118;
  uint8_t local_100 [8];
  uint8_t local_f8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_130 = 0;
  local_128 = 0;
  FUN_00deef20();
  local_a0 = local_50;
  local_98 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_98 = '\x01';
  FUN_001220c0();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_f8 = 1;
  local_118 = 0;
  local_120 = 0;
  FUN_01f2a980(local_100,&local_130,0,0);
  lVar2 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != 0) && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0xc) != 0) {
      lVar1 = **(int64_t **)(lVar2 + 0x10);
      local_a8 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_b0 = lVar1;
      (**(code **)(*this_ptr + 0x680))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}

