// Function: FUN_003a6980
// Address: 003a6980
// Size: 1506 bytes
// Class: MDToolbarTempoPluginCtrl

void FUN_003a6980(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
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
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  FUN_00d50100();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02576110;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  (*g_02576128)();
  puVar1 = *(void**)(this_ptr + 0xc0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xc0) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d48ac0();
  FUN_00d50b00();
  local_110 = g_026df590;
  if (g_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026d88c8;
  local_108 = '\x01';
  if (g_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  uVar5 = FUN_000bf690(&local_100,&local_110,&local_f0);
  lVar2 = *(int64_t *)(this_ptr + 0x80);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6abb;
      }
      uVar5 = FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x80);
      *(int64_t *)(this_ptr + 0x80) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6abb:
      *(int64_t *)(this_ptr + 0x80) = lVar4;
    }
    if (lVar2 != 0) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (this_ptr != 0) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_026f6d00;
  if (g_026f6d00 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_d0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_026d88d0;
  if (g_026d88d0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf780(uVar5,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a0 = g_026d88e0;
  if (g_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026f6cf0;
  local_98 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf690(&local_90,&local_a0,&local_80);
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6d1c;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x88);
      *(int64_t *)(this_ptr + 0x88) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6d1c:
      *(int64_t *)(this_ptr + 0x88) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0xd0) = 0;
  lVar2 = g_027050d0;
  if (g_027050d0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  FUN_01d51a40();
  lVar2 = *(int64_t *)(this_ptr + 0xe0);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_003a6e1b;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0xe0);
      *(int64_t *)(this_ptr + 0xe0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003a6e1b:
      *(int64_t *)(this_ptr + 0xe0) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027050d8;
  if (g_027050d8 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  FUN_01d51a40();
  lVar2 = *(int64_t *)(this_ptr + 0xe8);
  lVar4 = lVar2;
  if (lVar2 == local_30) goto LAB_003a6f14;
  lVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar4 = 0;
      goto LAB_003a6ecd;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0xe8);
    *(int64_t *)(this_ptr + 0xe8) = local_30;
  }
  else {
    local_28 = '\0';
LAB_003a6ecd:
    *(int64_t *)(this_ptr + 0xe8) = lVar4;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar4 = local_30;
  }
LAB_003a6f14:
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

