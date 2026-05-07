// Function: FUN_00e2e660
// Address: 00e2e660
// Size: 693 bytes
// Class: GNString
// String references:
//   "%@%@"
//   "%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e2e660(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028a8b88 == 0) || (g_028a8b91 == '\0')) {
    FUN_00e8cb50();
    if (g_028a8b88 == 0) {
      FUN_00d93140();
      FUN_00d93180();
      local_a8 = local_90;
      FUN_00083ea0(2,&local_a8);
      FUN_00d8cb40();
      lVar2 = g_028a8b88;
      if (g_028a8b88 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar2 = local_40;
        }
        bVar1 = g_028a8b88 != 0;
        g_028a8b88 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_40;
        }
      }
      if ((lVar2 != 0) && (g_028a8b90 == '\0')) {
        g_028a8b90 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_40;
      }
      if ((local_38 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      local_70 = (void*)&g_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      g_028a8b91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a8b91 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar2 = g_028a8b88;
  local_80 = *arg1;
  local_78 = '\0';
  if (g_028a8b88 != 0) {
    FUN_00d50b00();
  }
  FUN_00e2df70();
  local_68 = 1;
  local_70 = &g_024c5048;
  local_58 = 0;
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  local_60 = local_40;
  local_58 = '\x01';
  FUN_00d8cb40();
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}

