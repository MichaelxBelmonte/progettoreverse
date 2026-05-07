// Function: FUN_01ecff20
// Address: 01ecff20
// Size: 512 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ecff20(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02692468;
  puVar3[2] = &g_026927f8;
  puVar3[0xc] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(void*)(puVar3 + 0xb) = 0;
  (*g_02692480)();
  lVar2 = g_027fe700;
  if (g_027fe700 != 0) {
    FUN_00d50b00();
  }
  FUN_01db9840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01db9690(g_023908e0);
  FUN_01db99c0();
  FUN_01dcbe90();
  plVar4 = (int64_t *)FUN_001f28d0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_01ccad10();
  lVar2 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027fe708;
  if (g_027fe708 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40 = '\x01';
  local_30 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  local_38 = lVar1;
  (**(code **)(*plVar4 + 0x468))(&local_38,&local_48);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x478))();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

