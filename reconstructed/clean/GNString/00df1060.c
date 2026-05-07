// Function: FUN_00df1060
// Address: 00df1060
// Size: 810 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00df1060(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  void*arg1;
  void*this_ptr;
  int64_t *local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_00df0b40();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00df10b7;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_00df10b7:
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d8ed10();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x498))();
  local_50 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar2 = true;
    local_50 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar2 = false;
  }
  else {
    bVar2 = false;
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_000422b0();
  (**(code **)(*plVar7 + 0x18))();
  if ((local_40 != (int64_t *)0x0) && (iVar6 = FUN_00d8c7a0(), iVar6 != 0)) {
    FUN_00df1570();
  }
  if ((local_50 != (int64_t *)0x0) && (iVar6 = FUN_00d8c7a0(), lVar4 = g_02775660, iVar6 == 4)) {
    if (g_02775660 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_50 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_00df1600();
    }
  }
  if (plVar7[4] != 0) {
    plVar7[4] = 0;
    FUN_00d50b20();
  }
  cVar5 = FUN_00df1850();
  lVar4 = g_02784780;
  if (cVar5 != '\0') {
    g_028a87a0 = 0;
  }
  if (g_02784780 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0270b858;
  if (g_0270b858 != 0) {
    FUN_00d50b00();
  }
  if (plVar7[3] != 0) {
    plVar7[3] = 0;
    FUN_00d50b20();
  }
  lVar1 = plVar7[7];
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    plVar7[7] = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = plVar7[8];
  if (lVar1 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    plVar7[8] = lVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = plVar7;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar2 && local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return this_ptr;
}

