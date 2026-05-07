// Function: FUN_00c9c3c0
// Address: 00c9c3c0
// Size: 557 bytes
// Class: Unknown

void FUN_00c9c3c0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar5;
  int64_t local_a0;
  uint8_t local_98;
  uint8_t local_88;
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
  
  local_80 = *arg1;
  local_78 = '\0';
  uVar5 = FUN_00d61ea0();
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_027730f0;
  plVar1 = (int64_t *)*arg1;
  if (g_027730f0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  uVar5 = (**(code **)(*plVar1 + 0x578))(uVar5,&local_70);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (uVar5 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar3 = g_027730f0;
  if (lVar2 != 0) {
    plVar1 = (int64_t *)*arg1;
    if (g_027730f0 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_60 = lVar3;
    local_58 = '\x01';
    uVar5 = (**(code **)(*plVar1 + 0x578))(uVar5,&local_60);
    lVar3 = local_50;
    lVar2 = g_027730e8;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar5 = FUN_00d50b00();
        lVar2 = g_027730e8;
      }
    }
    else {
      local_48 = '\0';
    }
    local_88 = 1;
    g_027730e8 = lVar2;
    if (lVar2 != 0) {
      local_88 = 1;
      uVar5 = FUN_00d50b00();
    }
    local_98 = 1;
    local_a0 = lVar2;
    FUN_00c99930(uVar5,&local_a0,0);
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      *(int64_t *)(this_ptr + 0x10) = (int64_t)(double)*(int64_t *)(lVar4 + 0x10);
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

