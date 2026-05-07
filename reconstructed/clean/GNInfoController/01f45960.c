// Function: FUN_01f45960
// Address: 01f45960
// Size: 612 bytes
// Class: GNInfoController

void FUN_01f45960(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t lVar4;
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
  
  lVar4 = g_028001c0;
  if (this_ptr[0xc] != 0) goto LAB_01f45b8a;
  if (g_028001c0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar4;
  local_90 = '\x01';
  FUN_01e328d0();
  local_48 = local_58;
  local_40 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_40 = '\x01';
  (**(code **)(*this_ptr + 0x5f0))(&local_48,&local_98);
  lVar4 = local_38;
  if (local_38 == 0) {
    bVar2 = true;
    lVar4 = 0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar2 = false;
      if ((local_30 == '\0') || (local_38 == 0)) goto LAB_01f45a35;
      FUN_00d50b20();
    }
    else {
      local_30 = '\0';
    }
    bVar2 = false;
  }
LAB_01f45a35:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_028001c0;
  if (!bVar2) {
    if (g_028001c0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    FUN_01e4fcf0(&local_68,&local_78);
    lVar1 = this_ptr[0xc];
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01f45ae0;
        }
        FUN_00d50b00();
        lVar1 = this_ptr[0xc];
        this_ptr[0xc] = local_38;
        lVar3 = local_38;
      }
      else {
        local_30 = '\0';
        lVar3 = local_38;
LAB_01f45ae0:
        this_ptr[0xc] = lVar3;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2 && lVar4 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xc] == 0) {
    return;
  }
LAB_01f45b8a:
  FUN_01e56750();
  FUN_01e5d9c0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}

