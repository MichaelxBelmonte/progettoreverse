// Function: FUN_00db3a00
// Address: 00db3a00
// Size: 500 bytes
// Class: GNOA

void FUN_00db3a00(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  if (*param_2 != 0) {
    FUN_00db9870();
    lVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02800118;
    if (lVar1 != 0) {
      if (g_02800118 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_02782f98;
      if (g_02782f98 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_00db6680();
      local_30 = local_40;
      local_28 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_28 = '\x01';
      FUN_00d31230(&local_30,&local_80);
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  lVar1 = g_02800118;
  if (g_02800118 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_02800120;
  local_70 = lVar1;
  local_68 = '\x01';
  if (g_02800120 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d31230(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}

