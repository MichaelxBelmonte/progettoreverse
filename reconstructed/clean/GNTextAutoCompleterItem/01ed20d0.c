// Function: FUN_01ed20d0
// Address: 01ed20d0
// Size: 654 bytes
// Class: GNTextAutoCompleterItem
// String references:
//   "-> %@"

void FUN_01ed20d0(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  int64_t local_38;
  char local_30;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_00d4ffd0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_00d21140();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = arg1[3];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x3a0))();
  if (lVar1 != 0) {
    (**(code **)(*arg1 + 0x380))();
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
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

