// Function: FUN_0188fab0
// Address: 0188fab0
// Size: 709 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0188fab0(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  void* pVar4;
  int64_t arg1;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar4 = 0x2572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_01821ff0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00d21140();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_018220f0();
  if (local_48 != 0) {
    FUN_018220f0();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018909c0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00d21140();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027d8d68;
  if (*(int64_t *)(arg1 + 0x50) == 0) {
    if (g_027d8d68 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(arg1 + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027d64a0;
  if (g_027d64a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

