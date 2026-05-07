// Function: FUN_00639540
// Address: 00639540
// Size: 747 bytes
// Class: MDURLOpenedController

void FUN_00639540(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *this_ptr;
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
  int64_t local_28;
  char local_20;
  
  lVar1 = g_026f6f70;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027258e8;
  if (g_027258e8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d31230(&local_a8,&local_b8);
  local_38 = local_58;
  local_30 = 0;
  local_98 = g_027258a0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      local_98 = g_027258a0;
    }
  }
  else {
    local_50 = '\0';
  }
  local_30 = '\x01';
  g_027258a0 = local_98;
  if (local_98 != 0) {
    local_30 = '\x01';
    FUN_00d50b00();
  }
  lVar2 = g_027258f0;
  local_90 = '\x01';
  if (g_027258f0 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  FUN_00d31230(&local_78,&local_88);
  local_28 = local_48;
  local_20 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_20 = '\x01';
  FUN_004ae0b0(&local_28,&local_38);
  lVar2 = local_68;
  *(void*)(this_ptr + 1) = 0;
  if (local_60 == '\0') {
    if (local_68 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = lVar2;
      *(void*)(this_ptr + 1) = 1;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *this_ptr = local_68;
    *(void*)(this_ptr + 1) = 1;
    local_60 = '\0';
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

