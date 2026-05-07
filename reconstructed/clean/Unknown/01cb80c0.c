// Function: FUN_01cb80c0
// Address: 01cb80c0
// Size: 947 bytes
// Class: Unknown

void FUN_01cb80c0(char param_1,uint param_2,int param_3)

{
  int64_t lVar1;
  int64_t *arg1;
  int64_t local_90;
  char local_88;
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
  
  if (param_2 == 0x27) {
    (**(code **)(*arg1 + 0x3a8))();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*arg1 + 0x3a0))();
    local_90 = local_30;
    local_88 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_88 = '\x01';
    FUN_01cfd290(g_0239011c,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if ((param_3 == 0) || (3 < param_2 - 10)) {
    if ((param_1 != '\0') && (param_2 < 0x1a)) {
      if ((0x2003c32U >> (param_2 & 0x1f) & 1) != 0) {
        (**(code **)(*arg1 + 0x3a8))();
        local_60 = local_40;
        local_58 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_58 = '\x01';
        (**(code **)(*arg1 + 0x398))();
        local_50 = local_30;
        local_48 = 0;
        if (local_28 == '\0') {
          if (local_30 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_28 = '\0';
        }
        local_48 = '\x01';
        FUN_01cfd290(g_0239011c,&local_50);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((0x14200U >> (param_2 & 0x1f) & 1) != 0) {
        (**(code **)(*arg1 + 0x3a8))();
        local_80 = local_40;
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        (**(code **)(*arg1 + 0x3a0))();
        local_70 = local_30;
        local_68 = 0;
        if (local_28 == '\0') {
          if (local_30 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_28 = '\0';
        }
        local_68 = '\x01';
        FUN_01cfd290(g_0239011c,&local_70);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((0x1820000U >> (param_2 & 0x1f) & 1) != 0) {
        (**(code **)(*arg1 + 0x398))();
        return;
      }
    }
    (**(code **)(*arg1 + 0x3a8))();
  }
  else {
    (**(code **)(*arg1 + 0x3a0))();
  }
  return;
}

