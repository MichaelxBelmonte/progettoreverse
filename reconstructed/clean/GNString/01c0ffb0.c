// Function: FUN_01c0ffb0
// Address: 01c0ffb0
// Size: 518 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c0ffb0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*this_ptr;
  bool bVar3;
  
  plVar2 = g_028b62e0;
  if ((g_028b62e0 == (int64_t *)0x0) || (g_028b62e9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b62e0 == (int64_t *)0x0) {
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar2 + 0x18))();
      bVar3 = g_028b62e0 == (int64_t *)0x0;
      g_028b62e0 = plVar2;
      if (((bVar3) || (FUN_00d50b20(), lVar1 = g_027e8d80, g_028b62e0 != (int64_t *)0x0)) &&
         (lVar1 = g_027e8d80, g_028b62e8 == '\0')) {
        g_028b62e8 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_027e8d80;
      }
      g_027e8d80 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027e8d88;
      if (g_027e8d88 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027e8d90;
      if (g_027e8d90 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027e8d98;
      if (g_027e8d98 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028b62e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b62e9 = '\x01';
      FUN_00e8cb70();
    }
    plVar2 = g_028b62e0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar2 == (int64_t *)0x0) {
      plVar2 = (int64_t *)0x0;
      goto LAB_01c1019c;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01c1019c:
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

