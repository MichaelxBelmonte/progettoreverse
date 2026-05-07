// Function: FUN_00e6f320
// Address: 00e6f320
// Size: 762 bytes
// Class: GNString
// String references:
//   "%I"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e6f320(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*local_a8;
  uint32_t local_a0;
  uint32_t local_9c;
  int64_t local_98;
  char local_90;
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
  
  lVar2 = g_02787870;
  if (g_02787870 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  FUN_000175c0();
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027855b8;
  if (lVar2 == 0) {
    if (g_027855b8 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    FUN_000175c0();
    lVar2 = local_38;
    if (local_38 == 0) {
      lVar2 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  local_70 = '\0';
  local_78 = lVar2;
  FUN_00d97750();
  lVar1 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_68 = lVar1;
    local_60 = '\0';
    local_9c = FUN_00d2c970();
    local_a0 = 1;
    local_a8 = &g_0258f478;
    FUN_00d8cb40(&g_0258f478,&local_a8);
    local_48 = local_58;
    local_40 = 0;
    lVar1 = g_02784ab0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        lVar1 = g_02784ab0;
      }
    }
    else {
      local_50 = '\0';
    }
    local_40 = '\x01';
    g_02784ab0 = lVar1;
    if (lVar1 != 0) {
      local_40 = '\x01';
      FUN_00d50b00();
    }
    local_30 = '\0';
    local_38 = lVar1;
    FUN_00ca0840();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

