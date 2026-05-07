// Function: FUN_01c1d680
// Address: 01c1d680
// Size: 1181 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c1d680(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  
  FUN_01e3b710();
  *(void*)(this_ptr + 0x160) = 1;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_0038d4c0();
  *puVar2 = &g_02665840;
  (*g_02665858)();
  puVar3 = *(void**)(this_ptr + 0x168);
  if (puVar3 == puVar2) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x168) = puVar2;
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01c1afc0();
  lVar1 = local_80;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_00d243f0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x170);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar1;
  FUN_01c11120();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar3 + 0x27) = 0;
  puVar3[0x2e] = 0;
  *(void*)(puVar3 + 0x2f) = 0;
  puVar3[0x30] = 0;
  *(void*)(puVar3 + 0x31) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  *(void*)(puVar3 + 0x2a) = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(void*)((int64_t)puVar3 + 0x165) = 0;
  *(void*)((int64_t)puVar3 + 0x18c) = 0;
  *(void*)((int64_t)puVar3 + 0x194) = 0;
  *(void*)((int64_t)puVar3 + 0x199) = 0;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  puVar3[0x38] = 0;
  *(void*)((int64_t)puVar3 + 0x1c1) = 0;
  *(void*)((int64_t)puVar3 + 0x1c9) = 0;
  *puVar3 = &g_026696e8;
  puVar3[2] = &g_0266a2b0;
  puVar3[0x3b] = &g_0266a2f0;
  puVar3[0x3c] = 0;
  *(void*)(puVar3 + 0x3d) = 0;
  puVar3[0x3e] = 0;
  *(void*)(puVar3 + 0x3f) = 0;
  (*g_02669700)();
  lVar1 = *(int64_t *)(this_ptr + 0x198);
  *(void**)(this_ptr + 0x198) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x1cc) = 1;
  FUN_00d403d0();
  FUN_00d50b00();
  local_e0 = g_027e9270;
  if (g_027e9270 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_00d41430(&local_d0,&local_e0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_c0 = g_027e9278;
  if (g_027e9278 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d41430(&local_b0,&local_c0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = g_027e9280;
  if (g_027e9280 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41430(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}

