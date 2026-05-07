// Function: FUN_00cab720
// Address: 00cab720
// Size: 516 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cab720(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar4;
  int64_t local_38;
  char local_30;
  
  if ((int)arg1 == arg1) {
    FUN_00d46530();
  }
  else {
    FUN_00d468f0();
  }
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if ((g_028a72c0 == (void*)0x0) || (g_028a72c9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a72c0 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0258a670;
      (*g_0258a688)();
      if (g_028a72c0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028a72c0 != (void*)0x0;
        g_028a72c0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028a72c8 == '\0') {
        g_028a72c8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028a72c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a72c9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00cab5c0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (local_38 == 0) {
    FUN_00cab670();
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

