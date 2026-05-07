// Function: FUN_00be5fd0
// Address: 00be5fd0
// Size: 682 bytes
// Class: Unknown
// String references:
//   "</%@>\n"
//   "<%@>"

uint32_t FUN_00be5fd0(int64_t *param_1,int64_t *param_2,uint32_t param_3)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  uint32_t uVar4;
  uint8_t local_a0 [8];
  uint8_t local_98;
  void*local_90;
  uint8_t local_88;
  uint8_t local_80 [8];
  uint8_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *param_2;
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar1;
  FUN_00d94e10();
  lVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_98 = 1;
  cVar3 = FUN_00be5e40(param_3,local_a0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    local_70 = *param_1;
    local_68 = '\0';
    FUN_00ca2310();
    puVar2 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_88 = 1;
    local_90 = puVar2;
    cVar3 = FUN_00be5e40(0,&local_90);
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &g_024c5048;
      local_38 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94e10();
      lVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_78 = 1;
      uVar4 = FUN_00be5e40(0,local_80);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_50 = &g_024c5048;
      if (local_38 == '\0') {
        return uVar4;
      }
      if (local_40 == 0) {
        return uVar4;
      }
      FUN_00d50b20();
      return uVar4;
    }
  }
  return 0;
}

