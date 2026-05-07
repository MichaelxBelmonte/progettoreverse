// Function: FUN_00dc0c90
// Address: 00dc0c90
// Size: 1175 bytes
// Class: GNValue
// String references:
//   "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
//   "xmlns:x=\"%@\" xmlns=\"%@\""

void* FUN_00dc0c90(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  int64_t *plVar6;
  void*arg1;
  void*this_ptr;
  uint32_t uVar7;
  int64_t local_160;
  char local_158;
  uint64_t local_130;
  uint8_t local_128;
  int64_t local_120;
  uint8_t local_118;
  int64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  int64_t local_f0;
  uint8_t local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  int64_t local_c8;
  void*local_c0;
  uint8_t local_b8;
  int64_t local_90;
  char local_88;
  void*local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  void*local_48;
  char local_40;
  int64_t local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (int64_t)&g_0256d868;
  plVar6[2] = 0;
  *(void*)((int64_t)plVar6 + 0x1c) = 0;
  *(void*)((int64_t)plVar6 + 0x24) = 0;
  *(void*)((int64_t)plVar6 + 0x2c) = 0;
  (*g_0256d880)();
  uVar7 = FUN_00cccf90();
  uVar7 = FUN_00d8cb40(uVar7,g_025908a0);
  puVar3 = local_78;
  if ((((local_70 == '\0') && (local_78 != (void*)0x0)) &&
      (uVar7 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (void*)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  uVar7 = FUN_00d8cbf0(uVar7,6);
  local_48 = local_78;
  local_40 = 0;
  if (local_70 == '\0') {
    if (local_78 != (void*)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_40 = '\x01';
  FUN_00ccdbb0(uVar7,&local_48);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02783b38;
  if (g_02783b38 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_02783b40;
  if (g_02783b40 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = lVar2;
  uVar7 = FUN_00083ea0(2,&local_c8);
  uVar7 = FUN_00d8cb40(uVar7,&local_78);
  local_38 = local_90;
  if ((local_88 == '\0') && (local_90 != 0)) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = (void*)&g_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  local_78 = &g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = g_02783b48;
  if (g_02783b48 != 0) {
    uVar7 = FUN_00d50b00();
  }
  lVar2 = g_02783b60;
  local_130 = *arg1;
  local_128 = 0;
  local_120 = lVar1;
  local_118 = 0;
  if (g_02783b60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_110 = lVar2;
  local_108 = 1;
  FUN_00dbdbc0(uVar7,&local_110);
  puVar4 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_b8 = 1;
  local_c0 = puVar4;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = local_38;
  local_e8 = 0;
  FUN_00dc1400(&local_130,0,&local_c0,&local_100);
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x368))();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

