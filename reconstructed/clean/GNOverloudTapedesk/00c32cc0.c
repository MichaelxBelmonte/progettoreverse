// Function: FUN_00c32cc0
// Address: 00c32cc0
// Size: 2027 bytes
// Class: GNOverloudTapedesk
// String references:
//   "Circle_%f_%f_%f"

void FUN_00c32cc0(uint64_t param_1,float param_2,float param_3)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  void*puVar4;
  uint32_t in_EDX;
  int64_t *arg1;
  void*this_ptr;
  bool bVar5;
  uint64_t uVar6;
  uint8_t in_XMM0 [16];
  uint8_t auVar7 [16];
  float fVar9;
  uint32_t in_XMM1_Dd;
  uint8_t auVar8 [16];
  float fVar10;
  uint32_t local_148;
  float fStack_144;
  uint32_t uStack_13c;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  void*local_110;
  char local_108;
  void*local_100;
  char local_f8;
  void*local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  uint32_t local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint8_t local_b8 [16];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  float local_74;
  void*local_70;
  char local_68;
  void*local_58;
  uint local_50;
  uint32_t local_4c;
  float local_48;
  float local_44;
  uint64_t local_40;
  uint32_t local_38;
  float local_34;
  
  fVar9 = (float)((uint64_t)param_1 >> 0x20);
  auVar7._0_4_ = g_0239011c * fVar9 + in_XMM0._0_4_;
  auVar7._4_4_ = g_0239011c * fVar9 + in_XMM0._4_4_;
  auVar7._8_4_ = in_XMM0._8_4_ + 0.0;
  auVar7._12_4_ = in_XMM0._12_4_ + 0.0;
  auVar7 = roundps(in_XMM0,auVar7,9);
  local_40 = CONCAT44(local_40._4_4_,g_02390118 + param_2);
  local_b8 = ZEXT416((uint)(g_024204d0 * (g_02390118 + param_2) * g_023d9594));
  local_74 = param_3;
  local_34 = param_2;
  ___sincosf_stret();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02680400;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(void*)((int64_t)puVar3 + 0x39) = 0;
  *(void*)((int64_t)puVar3 + 0x41) = 0;
  pcVar2 = g_02680418;
  (*g_02680418)();
  FUN_01d39180();
  fVar10 = (float)((int)fVar9 / 2) + g_023b1608;
  local_148 = auVar7._0_4_;
  fStack_144 = auVar7._4_4_;
  uStack_13c = auVar7._12_4_;
  local_cc = g_02394244 + fVar10;
  local_c8 = fStack_144;
  fStack_c4 = fStack_144;
  uStack_c0 = uStack_13c;
  uStack_bc = uStack_13c;
  local_38 = local_148;
  if ((local_74 != g_02390124) || (NAN(local_74) || NAN(g_02390124))) {
    if (0.0 <= (float)local_40) {
      FUN_01d39310();
      local_34 = (float)local_40;
    }
    else {
      FUN_01d39310();
      local_34 = (float)local_40;
    }
  }
  else {
    FUN_01d39310();
  }
  FUN_01d38830();
  FUN_01d48370();
  local_50 = 3;
  local_4c = local_38;
  local_48 = local_c8;
  local_58 = (void*)&g_026b2438;
  local_44 = fVar10;
  uVar6 = FUN_00d8cb40();
  if ((local_128 == '\0') && (local_130 != 0)) {
    uVar6 = FUN_00d50b00();
  }
  local_b8._0_8_ = local_130;
  local_120 = local_130;
  local_118 = '\0';
  FUN_000175c0(uVar6,&local_120);
  puVar4 = local_58;
  local_d0 = in_EDX;
  if (local_58 == (void*)0x0) {
    local_40 = 0;
    puVar4 = (void*)0x0;
  }
  else {
    if ((char)local_50 != '\0') {
      local_50 = local_50 & 0xffffff00;
      local_40 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
      bVar5 = false;
      goto LAB_00c32fe1;
    }
    uVar6 = FUN_00d50b00();
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
  }
  bVar5 = puVar4 == (void*)0x0;
  if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_00c32fe1:
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02680400;
    *(void*)((int64_t)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(void*)((int64_t)puVar4 + 0x39) = 0;
    *(void*)((int64_t)puVar4 + 0x41) = 0;
    uVar6 = (*pcVar2)();
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    uVar6 = FUN_01d39310();
    local_108 = '\0';
    local_58 = (void*)local_b8._0_8_;
    local_50 = local_50 & 0xffffff00;
    local_110 = puVar4;
    uVar6 = FUN_00ca0840(uVar6,&local_58);
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if ((local_108 != '\0') && (local_110 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  local_f8 = '\0';
  local_100 = puVar4;
  (**(code **)(*(int64_t *)*this_ptr + 0x398))();
  if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x368))();
  local_a0 = 0;
  local_a8 = *(int64_t *)(*arg1 + 0x70);
  if (local_a8 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_01d488d0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = '\0';
  local_f0 = puVar3;
  (**(code **)(*(int64_t *)*this_ptr + 0x3a0))();
  if ((local_e8 != '\0') && (local_f0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_01d48370();
  local_d8 = '\0';
  local_e0 = puVar3;
  (**(code **)(*(int64_t *)*this_ptr + 0x398))();
  if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_d0 == '\0') {
    local_80 = 0;
    lVar1 = *(int64_t *)(*arg1 + 0x150);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar1;
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90 = 0;
    lVar1 = *(int64_t *)(*arg1 + 0x148);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_98 = lVar1;
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar7 = insertps(in_XMM0,ZEXT416((uint)(g_024229f0 * (fVar10 + fVar10) + (local_c8 - fVar10))),
                    0x10);
  auVar8._4_4_ = fVar9;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = in_XMM1_Dd;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar8 = insertps(auVar8,ZEXT416((uint)((fVar10 + fVar10) * g_02394298)),0x10);
  (**(code **)(*(int64_t *)*this_ptr + 0x3b0))(auVar7._0_8_,auVar8._0_8_);
  FUN_01d48390();
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  local_70 = local_58;
  local_68 = 0;
  if ((char)local_50 == '\0') {
    if (local_58 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  local_68 = '\x01';
  FUN_01d488d0();
  if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_74 != g_02390124) || (NAN(local_74) || NAN(g_02390124))) {
    (**(code **)(*(int64_t *)*this_ptr + 0x3e0))();
  }
  else if (local_34 < g_023b294c) {
    if (g_0239011c < local_34) {
      FUN_01d48b40((local_34 + g_02390118) * g_02394248 + g_02390124);
    }
    (**(code **)(*(int64_t *)*this_ptr + 0x3e0))();
  }
  if (local_b8._0_8_ != 0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (puVar4 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

