// Function: FUN_000c1be0
// Address: 000c1be0
// Size: 601 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_000c1be0(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  FUN_0027c6b0();
  *(void*)(this_ptr + 0x160) = 0xffffffff;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025736a8;
  puVar3[3] = 0;
  *(void*)(puVar3 + 4) = 0;
  (*g_025736c0)();
  puVar1 = *(void**)(this_ptr + 0x158);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x158) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = g_026cb128;
  if (g_026cb128 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_70 = g_026cb130;
  if (g_026cb130 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d41430(&local_60,&local_70);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar2 = *(int64_t *)(this_ptr + 0x150);
  *(int64_t **)(this_ptr + 0x150) = plVar4;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar2 = *(int64_t *)(this_ptr + 0x168);
  *(int64_t **)(this_ptr + 0x168) = plVar4;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

