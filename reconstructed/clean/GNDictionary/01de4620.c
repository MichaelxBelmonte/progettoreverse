// Function: FUN_01de4620
// Address: 01de4620
// Size: 527 bytes
// Class: GNDictionary

void FUN_01de4620(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  FUN_00dd6a00();
  local_68 = local_58;
  local_60 = 0;
  lVar1 = g_027f2a38;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      lVar1 = g_027f2a38;
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = '\x01';
  g_027f2a38 = lVar1;
  if (lVar1 != 0) {
    local_60 = '\x01';
    FUN_00d50b00();
  }
  local_30 = '\0';
  local_38 = lVar1;
  FUN_00ca0840(param_1,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01dd4960();
  local_40 = 0;
  lVar1 = g_027f2a60;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      lVar1 = g_027f2a60;
    }
  }
  else {
    local_50 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_58;
  g_027f2a60 = lVar1;
  if (lVar1 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  local_30 = '\0';
  local_38 = lVar1;
  FUN_00ca0840(param_1,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027f29d0;
  if (g_027f29d0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_01ca93d0(param_1,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

