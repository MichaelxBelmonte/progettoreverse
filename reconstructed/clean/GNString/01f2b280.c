// Function: FUN_01f2b280
// Address: 01f2b280
// Size: 1180 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01f2b280(void)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  char cVar8;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
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
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x40);
    if (plVar1 == (int64_t *)0x0) {
      local_38 = (int64_t *)0x0;
      local_40 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      local_38 = plVar1;
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_026846d0;
    puVar6[2] = &g_02684a60;
    *(void*)(puVar6 + 3) = 0;
    *(void*)((int64_t)puVar6 + 0x1c) = 0;
    *(void*)((int64_t)puVar6 + 0x24) = 0;
    *(void*)((int64_t)puVar6 + 0x2c) = 0;
    *(void*)((int64_t)puVar6 + 0x34) = 0;
    *(void*)((int64_t)puVar6 + 0x3a) = 0;
    *(void*)((int64_t)puVar6 + 0x42) = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(void*)(puVar6 + 0xe) = 0;
    (*g_026846e8)();
    puVar2 = *(void**)(this_ptr + 0x70);
    if (puVar2 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x70) = puVar6;
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    lVar3 = g_027fff58;
    if (g_027fff58 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_027fff70;
    if (g_027fff70 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar4;
    local_f8 = '\x01';
    local_f0 = 0;
    local_e8 = '\0';
    FUN_00d31230(&local_f0,&local_100);
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    FUN_01d64eb0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_78 = 0;
    lVar3 = *(int64_t *)(this_ptr + 0x70);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_80 = lVar3;
    FUN_01d5d8d0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar7 + 0x18))();
    if (plVar7 == local_38) {
      if (plVar1 == (int64_t *)0x0) {
        cVar8 = '\x01';
        plVar7 = local_38;
      }
      else {
        FUN_00d50b20();
        cVar8 = (char)local_40;
        plVar7 = local_38;
      }
    }
    else if (plVar1 == (int64_t *)0x0 || local_38 == (int64_t *)0x0) {
      cVar8 = '\x01';
    }
    else {
      FUN_00d50b20();
      cVar8 = '\x01';
    }
    local_d8 = '\0';
    local_e0 = plVar7;
    FUN_01d654e0();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027fff58;
    if (g_027fff58 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_027fff78;
    local_d0 = lVar3;
    local_c8 = '\x01';
    if (g_027fff78 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar4;
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d31230(&local_b0,&local_c0);
    local_60 = local_50;
    local_58 = 0;
    local_a0 = g_027fff80;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_a0 = g_027fff80;
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    g_027fff80 = local_a0;
    if (local_a0 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_01d5da10(&local_90,&local_a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar8 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

