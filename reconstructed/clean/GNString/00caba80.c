// Function: FUN_00caba80
// Address: 00caba80
// Size: 503 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00caba80(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  int64_t *this_ptr;
  bool bVar4;
  int64_t local_38;
  char local_30;
  
  FUN_00d93730();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if ((g_028a72a0 == (void*)0x0) || (g_028a72a9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a72a0 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0258a670;
      (*g_0258a688)();
      if (g_028a72a0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028a72a0 != (void*)0x0;
        g_028a72a0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028a72a8 == '\0') {
        g_028a72a8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028a72a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a72a9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00cabdd0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (local_38 == 0) {
    FUN_00cabe80();
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

