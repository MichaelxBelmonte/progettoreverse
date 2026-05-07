// Function: FUN_00def2f0
// Address: 00def2f0
// Size: 731 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00def2f0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void*this_ptr;
  bool bVar8;
  
  plVar6 = g_028a87c8;
  if ((g_028a87c8 == (int64_t *)0x0) || (g_028a87d1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a87c8 == (int64_t *)0x0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar6 + 0x18))();
      if (g_028a87c8 == plVar6) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar8 = g_028a87c8 != (int64_t *)0x0;
        g_028a87c8 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (g_028a87d0 == '\0') {
        g_028a87d0 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      plVar6 = g_028a87c8;
      lVar4 = g_02784780;
      if (g_02784780 != 0) {
        FUN_00d50b00();
      }
      lVar7 = g_02784788;
      if (g_02784788 != 0) {
        FUN_00d50b00();
      }
      if (plVar6[3] != 0) {
        plVar6[3] = 0;
        FUN_00d50b20();
      }
      lVar1 = plVar6[7];
      if (lVar1 != lVar4) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        plVar6[7] = lVar4;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar1 = plVar6[8];
      if (lVar1 != lVar7) {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        plVar6[8] = lVar7;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      plVar6 = g_028a87c8;
      lVar4 = g_02784790;
      if (g_02784790 == 0) {
        lVar7 = g_028a87c8[4];
        if (lVar7 != 0) goto LAB_00def49d;
      }
      else {
        FUN_00d50b00();
        lVar7 = plVar6[4];
        if (lVar7 != lVar4) {
          FUN_00d50b00();
LAB_00def49d:
          plVar6[4] = lVar4;
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
      cVar5 = FUN_00df1850();
      if (cVar5 != '\0') {
        g_028a87a0 = 0;
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_02784798;
      if (g_02784798 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_027847a0;
      if (g_027847a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_02784788;
      if (g_02784788 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      g_028a87d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a87d1 = '\x01';
      FUN_00e8cb70();
    }
    plVar6 = g_028a87c8;
    *(void*)(this_ptr + 1) = 0;
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
      goto LAB_00def5ab;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00def5ab:
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

