// Function: FUN_014ffc90
// Address: 014ffc90
// Size: 518 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_014ffc90(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*this_ptr;
  bool bVar3;
  
  plVar2 = g_028acf98;
  if ((g_028acf98 == (int64_t *)0x0) || (g_028acfa1 == '\0')) {
    FUN_00e8cb50();
    if (g_028acf98 == (int64_t *)0x0) {
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar2 + 0x18))();
      bVar3 = g_028acf98 == (int64_t *)0x0;
      g_028acf98 = plVar2;
      if (((bVar3) || (FUN_00d50b20(), lVar1 = g_027c24b8, g_028acf98 != (int64_t *)0x0)) &&
         (lVar1 = g_027c24b8, g_028acfa0 == '\0')) {
        g_028acfa0 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_027c24b8;
      }
      g_027c24b8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027c24c0;
      if (g_027c24c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027c24c8;
      if (g_027c24c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027c24d0;
      if (g_027c24d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028acfa1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028acfa1 = '\x01';
      FUN_00e8cb70();
    }
    plVar2 = g_028acf98;
    *(void*)(this_ptr + 1) = 0;
    if (plVar2 == (int64_t *)0x0) {
      plVar2 = (int64_t *)0x0;
      goto LAB_014ffe7c;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_014ffe7c:
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

