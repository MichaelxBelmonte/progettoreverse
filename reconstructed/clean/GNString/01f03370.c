// Function: FUN_01f03370
// Address: 01f03370
// Size: 1003 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01f03370(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t *local_c8;
  char local_c0;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  FUN_01f27fe0();
  FUN_01e328d0();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_001220c0();
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  (**(code **)(*local_c8 + 0x600))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (0 < *(int *)(local_40 + 0xc)) {
    lVar6 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + lVar6 * 8);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x390))();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      cVar3 = FUN_00d8f400();
      if (cVar3 == '\0') {
        bVar4 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x368))();
        lVar2 = g_027fef58;
        if (g_027fef58 != 0) {
          FUN_00d50b00();
        }
        bVar4 = FUN_00d90eb0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        bVar4 = bVar4 ^ 1;
      }
      if (bVar4 != 0) {
        local_38 = '\0';
        FUN_00d21140();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(local_40 + 0xc));
  }
  if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(puVar5[2] + lVar6 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01f030e0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((int64_t)puVar5 + 0xc));
  }
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

