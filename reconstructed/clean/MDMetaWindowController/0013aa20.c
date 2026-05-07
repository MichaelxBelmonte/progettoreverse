// Function: FUN_0013aa20
// Address: 0013aa20
// Size: 1108 bytes
// Class: MDMetaWindowController

void FUN_0013aa20(void)

{
  int64_t lVar1;
  void*puVar2;
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
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d50100();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026e37c0;
  if (g_026e37c0 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_02725940;
  local_110 = lVar1;
  local_108 = '\x01';
  if (g_02725940 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar4;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  uVar5 = FUN_000bf690(&local_100,&local_110,&local_f0);
  lVar1 = *(int64_t *)(this_ptr + 0x90);
  lVar4 = lVar1;
  if (lVar1 == local_40) goto LAB_0013ab2e;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar4 = 0;
      goto LAB_0013aae3;
    }
    uVar5 = FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    *(int64_t *)(this_ptr + 0x90) = local_40;
    lVar4 = local_40;
  }
  else {
    local_38 = '\0';
    lVar4 = local_40;
LAB_0013aae3:
    *(int64_t *)(this_ptr + 0x90) = lVar4;
  }
  if (lVar1 != 0) {
    uVar5 = FUN_00d50b20();
    lVar4 = local_40;
  }
LAB_0013ab2e:
  if ((local_38 != '\0') && (lVar4 != 0)) {
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
  lVar1 = g_026f6e70;
  if (g_026f6e70 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar1;
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
  lVar1 = g_026fe410;
  if (g_026fe410 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026f6d60;
  if (g_026f6d60 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_90);
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_026d7d88;
  if (g_026d7d88 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_027257b0;
  if (g_027257b0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf780(uVar5,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025ce610;
  puVar3[2] = 0;
  puVar3[3] = 0;
  (*g_025ce628)();
  puVar2 = *(void**)(this_ptr + 0x98);
  if (puVar2 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x98) = puVar3;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0xf8) = 0x3ff0000000000000;
  return;
}

