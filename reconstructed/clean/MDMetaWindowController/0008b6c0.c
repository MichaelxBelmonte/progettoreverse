// Function: FUN_0008b6c0
// Address: 0008b6c0
// Size: 3420 bytes
// Class: MDMetaWindowController

void FUN_0008b6c0(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
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
  int64_t local_30;
  char local_28;
  
  FUN_00d50100();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *puVar3 = &g_026622c8;
  (*g_026622e0)();
  puVar1 = *(void**)(this_ptr + 0x108);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x108) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d48ac0();
  FUN_00d50b00();
  local_290 = g_026df590;
  if (g_026df590 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026d88c8;
  local_288 = '\x01';
  if (g_026d88c8 != 0) {
    FUN_00d50b00();
  }
  local_280 = lVar2;
  local_278 = '\x01';
  local_270 = 0;
  local_268 = '\0';
  uVar5 = FUN_000bf690(&local_280,&local_290,&local_270);
  lVar2 = *(int64_t *)(this_ptr + 0xb0);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_0008b80a;
      }
      uVar5 = FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0xb0);
      *(int64_t *)(this_ptr + 0xb0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0008b80a:
      *(int64_t *)(this_ptr + 0xb0) = lVar4;
    }
    if (lVar2 != 0) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_278 != '\0') && (local_280 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (this_ptr != 0) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_026f6d00;
  if (g_026f6d00 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_260 = lVar2;
  local_258 = '\x01';
  local_250 = 0;
  local_248 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_250);
  if ((local_248 != '\0') && (local_250 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_026d88d0;
  if (g_026d88d0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_240 = lVar2;
  local_238 = '\x01';
  local_230 = 0;
  local_228 = '\0';
  FUN_000bf780(uVar5,&local_230);
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_220 = g_026d88d8;
  if (g_026d88d8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026f6e90;
  local_218 = '\x01';
  if (g_026f6e90 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar2;
  local_208 = '\x01';
  local_200 = 0;
  local_1f8 = '\0';
  uVar5 = FUN_000bf690(&local_210,&local_220,&local_200);
  lVar2 = *(int64_t *)(this_ptr + 0xb8);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_0008ba83;
      }
      uVar5 = FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0xb8);
      *(int64_t *)(this_ptr + 0xb8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0008ba83:
      *(int64_t *)(this_ptr + 0xb8) = lVar4;
    }
    if (lVar2 != 0) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (this_ptr != 0) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_026f6d60;
  if (g_026f6d60 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_1f0 = lVar2;
  local_1e8 = '\x01';
  local_1e0 = 0;
  local_1d8 = '\0';
  uVar5 = FUN_000bf780(uVar5,&local_1e0);
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_02725940;
  if (g_02725940 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_1d0 = lVar2;
  local_1c8 = '\x01';
  local_1c0 = 0;
  local_1b8 = '\0';
  FUN_000bf780(uVar5,&local_1c0);
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_1b0 = g_026d88e0;
  if (g_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026f6cf0;
  local_1a8 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = lVar2;
  local_198 = '\x01';
  local_190 = 0;
  local_188 = '\0';
  FUN_000bf690(&local_1a0,&local_1b0,&local_190);
  lVar2 = *(int64_t *)(this_ptr + 200);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_0008bcf3;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 200);
      *(int64_t *)(this_ptr + 200) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0008bcf3:
      *(int64_t *)(this_ptr + 200) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_180 = g_026d88e8;
  if (g_026d88e8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026d7d88;
  local_178 = '\x01';
  if (g_026d7d88 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar2;
  local_168 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  uVar5 = FUN_000bf690(&local_170,&local_180,&local_160);
  lVar2 = *(int64_t *)(this_ptr + 0xd0);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_0008be56;
      }
      uVar5 = FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0xd0);
      *(int64_t *)(this_ptr + 0xd0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0008be56:
      *(int64_t *)(this_ptr + 0xd0) = lVar4;
    }
    if (lVar2 != 0) {
      uVar5 = FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (this_ptr != 0) {
    uVar5 = FUN_00d50b20();
  }
  lVar2 = g_027f0f20;
  if (g_027f0f20 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_150 = lVar2;
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_000bf780(uVar5,&local_140);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_130 = g_026d88f0;
  if (g_026d88f0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fce70;
  local_128 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar2;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_000bf690(&local_120,&local_130,&local_110);
  lVar2 = *(int64_t *)(this_ptr + 0xd8);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_0008c03e;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0xd8);
      *(int64_t *)(this_ptr + 0xd8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0008c03e:
      *(int64_t *)(this_ptr + 0xd8) = lVar4;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_100 = g_026d88f8;
  if (g_026d88f8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026d8900;
  local_f8 = '\x01';
  if (g_026d8900 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar2;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_000bf690(&local_f0,&local_100,&local_e0);
  lVar2 = *(int64_t *)(this_ptr + 0xe0);
  lVar4 = lVar2;
  if (lVar2 != local_30) {
    lVar4 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar4 = 0;
        goto LAB_0008c1a1;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0xe0);
      *(int64_t *)(this_ptr + 0xe0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0008c1a1:
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
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_d0 = g_026d8908;
  if (g_026d8908 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027ebec0;
  local_c8 = '\x01';
  if (g_027ebec0 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf690(&local_c0,&local_d0,&local_b0);
  lVar2 = *(int64_t *)(this_ptr + 0xe8);
  lVar4 = lVar2;
  if (lVar2 == local_30) goto LAB_0008c34f;
  lVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar4 = 0;
      goto LAB_0008c304;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0xe8);
    *(int64_t *)(this_ptr + 0xe8) = local_30;
  }
  else {
    local_28 = '\0';
LAB_0008c304:
    *(int64_t *)(this_ptr + 0xe8) = lVar4;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar4 = local_30;
  }
LAB_0008c34f:
  if ((local_28 != '\0') && (lVar4 != 0)) {
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
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x128) != 0) {
    *(void*)(this_ptr + 0x128) = 0;
    FUN_00d50b20();
  }
  return;
}

