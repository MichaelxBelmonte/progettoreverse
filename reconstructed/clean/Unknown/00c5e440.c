// Function: FUN_00c5e440
// Address: 00c5e440
// Size: 551 bytes
// Class: Unknown

void FUN_00c5e440(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void*arg1;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
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
  
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  local_48 = local_38;
  local_40 = 0;
  local_98 = g_027d38c0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      local_98 = g_027d38c0;
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  g_027d38c0 = local_98;
  if (local_98 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  local_90 = '\x01';
  local_88 = *param_2;
  local_80 = '\0';
  FUN_00b324d0(0,&local_98,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c8e830();
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00c92170();
  }
  lVar1 = g_027718d8;
  local_78 = lVar2;
  local_70 = '\x01';
  if (g_027718d8 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar1;
  local_60 = '\x01';
  local_58 = *param_2;
  local_50 = '\0';
  FUN_00b324d0(0,&local_68,&local_58);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}

