// Function: FUN_0181e2d0
// Address: 0181e2d0
// Size: 714 bytes
// Class: GNString
// String references:
//   "source: %I"
//   "dest: %I"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0181e2d0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t arg1;
  void*local_60;
  uint local_58;
  uint64_t local_50;
  void*local_48;
  char local_40;
  void*local_38;
  char local_30;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*(int *)(arg1 + 0x3c) != 0) {
    FUN_0181e770();
    puVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_60 = puVar2;
    local_58 = local_58 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(arg1 + 0x40) != 0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_017cac30();
    local_58 = 1;
    pVar5 = 0x24da828;
    local_60 = &g_024da828;
    FUN_00d8cb40(&g_024da828,&local_60);
    puVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_38 = puVar2;
    local_30 = '\0';
    FUN_00d21140();
    if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(arg1 + 0x48) != 0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_017cac30();
    local_58 = 1;
    local_60 = &g_024da828;
    FUN_00d8cb40(&g_024da828,&local_60);
    puVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_38 = puVar2;
    local_30 = '\0';
    FUN_00d21140();
    if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027259e0;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

