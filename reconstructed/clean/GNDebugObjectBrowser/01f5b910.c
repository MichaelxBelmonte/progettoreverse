// Function: FUN_01f5b910
// Address: 01f5b910
// Size: 771 bytes
// Class: GNDebugObjectBrowser

void FUN_01f5b910(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x10);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x10) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4d0))(0,g_02423950);
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x558))();
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x570))();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0083cb00();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x88) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4d0))(0,g_02423950);
  FUN_01ce8690();
  FUN_01ceca30();
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  FUN_01ce86a0();
  if ((int64_t *)(this_ptr + 0x70) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x558))();
  FUN_00d50b00();
  FUN_01cebab0();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_028007b0;
  if (g_028007b0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceba50();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ceb930();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027e4580;
  if (g_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceb8d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01ce8620();
  FUN_01ce8670();
  FUN_01ce84d0();
  plVar1 = *(int64_t **)(this_ptr + 0x10);
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_01ce8720();
  }
  return;
}

