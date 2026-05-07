// Function: FUN_01e08aa0
// Address: 01e08aa0
// Size: 3479 bytes
// Class: GNMultipleValue

void FUN_01e08aa0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float fVar15;
  uint8_t auVar14 [16];
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  void*local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  float local_11c;
  int64_t *local_78;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01e42030();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((local_40 == (int64_t *)0x0) || (cVar5 = (**(code **)(*this_ptr + 0x9a0))(), cVar5 == '\0')
      ) || ((*(char *)((int64_t)this_ptr + 0x1e3) == '\0' &&
            (*(char *)((int64_t)this_ptr + 0x221) == '\0')))) {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    bVar3 = true;
    plVar8 = (int64_t *)0x0;
    goto LAB_01e097da;
  }
  FUN_01e42030();
  FUN_01d8ce80();
  plVar1 = this_ptr + 0x40;
  plVar8 = (int64_t *)this_ptr[0x40];
  plVar9 = plVar8;
  if (plVar8 != local_40) {
    plVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        goto LAB_01e08b96;
      }
      FUN_00d50b00();
      plVar8 = (int64_t *)*plVar1;
      *plVar1 = (int64_t)local_40;
    }
    else {
      local_38 = '\0';
LAB_01e08b96:
      *plVar1 = (int64_t)plVar9;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e1cd20();
  FUN_01e1cd10();
  cVar5 = (**(code **)(*(int64_t *)*plVar1 + 0x950))();
  if (cVar5 != '\0') {
    (**(code **)(*(int64_t *)*plVar1 + 0x948))();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1b0 = g_027f32f0;
  if (g_027f32f0 != 0) {
    FUN_00d50b00();
  }
  local_1a8 = '\x01';
  local_1a0 = 0;
  local_198 = '\0';
  FUN_00d41430(&local_1a0,&local_1b0);
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_190 = g_027f32f8;
  if (g_027f32f8 != 0) {
    FUN_00d50b00();
  }
  local_188 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  FUN_00d41430(&local_180,&local_190);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  FUN_01d8ce80();
  plVar8 = (int64_t *)*plVar1;
  plVar9 = plVar8;
  if (plVar8 != local_40) {
    plVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        goto LAB_01e08e6f;
      }
      FUN_00d50b00();
      plVar8 = (int64_t *)*plVar1;
      *plVar1 = (int64_t)local_40;
    }
    else {
      local_38 = '\0';
LAB_01e08e6f:
      *plVar1 = (int64_t)plVar9;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  iVar6 = (**(code **)(*this_ptr + 0x9d0))();
  if (iVar6 == 0xff) {
    iVar6 = (**(code **)(*local_40 + 0x5c0))();
  }
  (**(code **)(*this_ptr + 0x9e0))();
  local_48 = local_40;
  if (local_40 == (int64_t *)0x0) {
    (**(code **)(MACH_HEADER._0_8_ + 0x370))();
    local_48 = (int64_t *)0x0;
    bVar4 = false;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar4 = true;
  }
  local_170 = local_48;
  local_168 = '\0';
  FUN_01e12b60();
  if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar13 = ZEXT416(g_02390124);
  FUN_01cfbee0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e11fd0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_40 + 0x490))(1,0x11,0);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e11400();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = this_ptr[0x42];
  if (lVar2 != 0) {
    FUN_00d50b00();
    FUN_01e11400();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e12e00();
  FUN_01e11330();
  lVar2 = this_ptr[0x2b];
  if (lVar2 == 0) {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_025795a8;
    (*g_025795c0)();
    local_158 = '\x01';
    local_160 = puVar7;
    FUN_01e125e0();
    if ((local_158 != '\0') && (local_160 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d8dab0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01e125e0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e15af0();
  FUN_01e15aa0();
  FUN_01e10580();
  (**(code **)(this_ptr[0x39] + 0x10))();
  FUN_00d50b00();
  FUN_01e13680();
  if (this_ptr + 0x39 != (int64_t *)0x0) {
    (**(code **)(this_ptr[0x39] + 0x10))();
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar8 = (int64_t)&g_02678958;
  plVar8[2] = (int64_t)&g_02679280;
  plVar8[0x27] = 0;
  *(void*)(plVar8 + 0x28) = 0;
  plVar8[0x29] = 0;
  plVar8[0x2a] = 0;
  plVar8[0x2b] = 0;
  plVar8[0x2c] = 0;
  *(void*)((int64_t)plVar8 + 0x164) = 0;
  *(void*)((int64_t)plVar8 + 0x16c) = 0;
  (*g_02678970)();
  uVar11 = FUN_01e3f820();
  local_150 = local_48;
  local_148 = '\0';
  uVar11 = (**(code **)(*this_ptr + 0xb40))(uVar11,iVar6);
  if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e10550();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar10 = FUN_01e089e0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e125a0();
  FUN_01ea9910();
  local_11c = (float)(**(code **)(*local_40 + 0x390))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  fVar15 = auVar13._4_4_;
  auVar14._4_4_ = fVar15;
  auVar14._0_4_ = fVar15;
  auVar14._8_4_ = auVar13._12_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar12._4_12_ = auVar14._4_12_;
  auVar12._0_4_ = fVar15 + local_11c + local_11c;
  auVar14 = insertps(auVar13,auVar12,0x10);
  auVar13._8_8_ = extraout_XMM0_Qb;
  auVar13._0_8_ = uVar11;
  auVar13 = insertps(auVar13,uVar10,0x10);
  (**(code **)(*plVar8 + 0x4d0))(auVar13._0_8_,auVar14._0_8_);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01cf5bb0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar5 = FUN_01e12e20();
  if (cVar5 == '\0') {
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
LAB_01e0960f:
    local_78 = (int64_t *)0x0;
  }
  else {
    FUN_01e12dc0();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_01e0960f;
      FUN_00d50b00();
      local_78 = local_40;
    }
    else {
      local_78 = local_40;
      local_38 = '\0';
    }
  }
  FUN_01cf3e00();
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cf3f20();
  local_138 = '\0';
  local_140 = plVar8;
  (**(code **)(*this_ptr + 0x450))();
  if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*plVar1 + 0x540))();
  (**(code **)(*(int64_t *)*plVar1 + 0x938))();
  plVar9 = (int64_t *)this_ptr[0x40];
  (**(code **)(*this_ptr + 0xad8))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar9 + 0x970))();
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)this_ptr[0x40];
  (**(code **)(*this_ptr + 0x3a8))();
  (**(code **)(*plVar9 + 0x3a0))();
  (**(code **)(*this_ptr + 0x620))();
  local_130 = *arg1;
  local_128 = '\0';
  (**(code **)(*(int64_t *)*plVar1 + 0x940))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  bVar3 = false;
  if ((bVar4) && (bVar3 = false, local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
    bVar3 = false;
  }
LAB_01e097da:
  FUN_00d50b20();
  if (!bVar3 && plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

