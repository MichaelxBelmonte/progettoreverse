// Function: FUN_01d661f0
// Address: 01d661f0
// Size: 584 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d661f0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  int64_t *local_68;
  char local_60;
  
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  if (*(int64_t *)(this_ptr + 0x20) == 0) {
    bVar3 = true;
    bVar2 = false;
    local_68 = (int64_t *)0x0;
    puVar4 = (void*)0x0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_026717b8;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(void*)((int64_t)puVar4 + 0x2c) = 0;
    *(void*)((int64_t)puVar4 + 0x34) = 0;
    (*g_026717d0)();
    lVar1 = *(int64_t *)(this_ptr + 0x20);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01caeb20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01caeb80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_01caeb70();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    (**(code **)(*local_68 + 0x4c0))();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = FUN_01d65ec0();
    if (local_68 == (int64_t *)0x0) {
      bVar2 = false;
      local_68 = (int64_t *)0x0;
      lVar1 = *(int64_t *)(this_ptr + 0x58);
    }
    else {
      if (local_60 == '\0') {
        uVar5 = FUN_00d50b00();
      }
      (**(code **)(*local_68 + 0x3b8))(uVar5,1);
      bVar2 = true;
      lVar1 = *(int64_t *)(this_ptr + 0x58);
    }
    if (lVar1 != 0) {
      *(void*)(this_ptr + 0x58) = 0;
      FUN_00d50b20();
    }
    bVar3 = false;
  }
  FUN_00d50b20();
  if ((bVar2) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3 && puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

