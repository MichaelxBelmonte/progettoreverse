// Function: FUN_00099fa0
// Address: 00099fa0
// Size: 664 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00099fa0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_28;
  char local_20;
  
  FUN_00d50100();
  FUN_00d46530();
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  lVar4 = lVar1;
  if (lVar1 != local_28) {
    lVar4 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar4 = 0;
        goto LAB_00099fdb;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0xb8);
      *(int64_t *)(this_ptr + 0xb8) = local_28;
    }
    else {
      local_20 = '\0';
LAB_00099fdb:
      *(int64_t *)(this_ptr + 0xb8) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0xc0);
  *(int64_t **)(this_ptr + 0xc0) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(this_ptr + 0xd0);
  *(void**)(this_ptr + 0xd0) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 200);
  *(int64_t **)(this_ptr + 200) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_68 = g_026d8e30;
  if (g_026d8e30 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026d8e38;
  local_60 = '\x01';
  if (g_026d8e38 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar1;
  local_50 = '\x01';
  FUN_00d50b00();
  FUN_000bf690(&local_58,&local_68,&stack0xffffffffffffffc8);
  lVar1 = *(int64_t *)(this_ptr + 0xe0);
  lVar4 = lVar1;
  if (lVar1 == local_28) goto LAB_0009a1c1;
  lVar4 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar4 = 0;
      goto LAB_0009a176;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0xe0);
    *(int64_t *)(this_ptr + 0xe0) = local_28;
  }
  else {
    local_20 = '\0';
LAB_0009a176:
    *(int64_t *)(this_ptr + 0xe0) = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_28;
  }
LAB_0009a1c1:
  if ((local_20 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}

