// Function: FUN_01d24c50
// Address: 01d24c50
// Size: 568 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d24c50(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_90;
  int64_t local_88;
  void*local_80;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar5 = g_028b80b8;
  if ((g_028b80b8 == 0) || (g_028b80c1 == '\0')) {
    FUN_00e8cb50();
    lVar5 = g_027ef970;
    if (g_028b80b8 == 0) {
      if (g_027ef970 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027ef978;
      if (g_027ef978 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02725a10;
      if (g_02725a10 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar3;
      local_88 = lVar2;
      FUN_002bd7b0(&local_88,&local_90,3);
      FUN_000b6830();
      lVar4 = g_028b80b8;
      if (g_028b80b8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = g_028b80b8 != 0;
        g_028b80b8 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (g_028b80c0 == '\0')) {
        g_028b80c0 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      local_80 = (void*)&g_025df260;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_80 = (void*)&g_0253d630;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &g_024c5048;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      g_028b80c1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b80c1 = '\x01';
      FUN_00e8cb70();
    }
    lVar5 = g_028b80b8;
    *(void*)(this_ptr + 1) = 0;
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_01d24e62;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01d24e62:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

