// Function: FUN_01ede410
// Address: 01ede410
// Size: 701 bytes
// Class: GNMultipleValue
// String references:
//   "%@"
//   "%I %I %I %I"

void FUN_01ede410(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t arg1;
  uint64_t uVar3;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  char local_78;
  void*local_70;
  uint local_68;
  uint32_t local_64;
  void*local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_00d4ffd0();
  puVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar2;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  uVar3 = FUN_00d962d0(*(void*)(arg1 + 0xc),*(void*)(arg1 + 0x14));
  local_58 = 1;
  local_60 = &g_024c5048;
  local_48 = 0;
  if (local_a0 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_50 = local_a0;
  local_48 = '\x01';
  FUN_00d8cb40(uVar3,&local_60);
  puVar2 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = local_68 & 0xffffff00;
  }
  local_40 = puVar2;
  local_38 = '\0';
  uVar3 = FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    uVar3 = FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  local_64 = *(void*)(arg1 + 0x1c);
  local_68 = 4;
  local_70 = (void*)&g_026b0d80;
  FUN_00d8cb40(uVar3,&local_70);
  puVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = puVar2;
  local_58 = local_58 & 0xffffff00;
  uVar3 = FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  lVar1 = g_027259e0;
  if (g_027259e0 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_00d95130(uVar3,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

