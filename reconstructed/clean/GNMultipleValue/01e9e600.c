// Function: FUN_01e9e600
// Address: 01e9e600
// Size: 561 bytes
// Class: GNMultipleValue

void FUN_01e9e600(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  FUN_01d0eb90();
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027fdd80;
  if (g_027fdd80 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d31230(&local_90,&local_a0);
  lVar2 = local_50;
  local_80 = g_027fdd88;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_80 = g_027fdd88;
    }
  }
  else {
    local_48 = '\0';
  }
  g_027fdd88 = local_80;
  if (local_80 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_00d50b00();
  FUN_01d5da60(&local_70,&local_80,&stack0xffffffffffffffc0);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_58 = '\0';
  local_60 = plVar3;
  (**(code **)(*this_ptr + 0x6e8))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

