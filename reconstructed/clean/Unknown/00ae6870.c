// Function: FUN_00ae6870
// Address: 00ae6870
// Size: 911 bytes
// Class: Unknown

void FUN_00ae6870(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int unaff_ESI;
  void*this_ptr;
  int64_t local_110;
  void*local_108;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
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
  
  lVar1 = g_02754ce8;
  if (unaff_ESI == 2) {
    if (g_02754ce8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02754cf8;
    local_98 = lVar1;
    local_90 = '\x01';
    if (g_02754cf8 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    FUN_00d31230(&local_78,&local_88);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 1) {
    if (g_02754ce8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02754cf0;
    local_c8 = lVar1;
    local_c0 = '\x01';
    if (g_02754cf0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    FUN_00d31230(&local_a8,&local_b8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d46530();
    lVar1 = g_02754d00;
    if (g_02754d00 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar1;
    FUN_00083ea0(2,&local_110);
    FUN_000b4da0();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_30 = '\0';
    }
    local_108 = (void*)&g_0253d630;
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    local_108 = &g_024c5048;
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02754ce8;
    if (g_02754ce8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02754d08;
    local_68 = lVar1;
    local_60 = '\x01';
    if (g_02754d08 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar3;
    local_50 = '\x01';
    local_48 = lVar2;
    local_40 = '\0';
    FUN_00d31230(&local_48,&local_58);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

