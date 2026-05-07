// ===================================================================
// MUDetectionActivationSlider — Complete reconstructed pseudocode
// 6 functions
// ===================================================================


// ============================================================
// 01b8e0e0
// ============================================================
// Function: FUN_01b8e0e0
// Address: 01b8e0e0
// Size: 1176 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "MUDetectionActivationSlider"

void FUN_01b8e0e0(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  
  iVar3 = FUN_01d3a5a0();
  if ((iVar3 != 1) || (iVar3 = FUN_01d3b630(), iVar3 != 1)) {
    FUN_01daee00();
    return;
  }
  FUN_01d3abf0();
  uVar5 = FUN_01e466c0();
  uVar6 = FUN_01b8e6e0();
  cVar2 = FUN_00d05410(uVar5,uVar6,param_2);
  if ((cVar2 == '\0') || (!NAN(*(float *)(this_ptr + 0x3c)))) goto LAB_01b8e164;
  plVar4 = (int64_t *)this_ptr[6];
  if ((g_02732250 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027321a0 = FUN_001b37d0();
    g_02732188 = "MUDetectionActivationSlider";
    g_02732190 = 0x1e8;
    g_02732198 = FUN_008264b0;
    g_027321a8 = 0;
    ram_00000000027321b0 = 0;
    g_027321b8 = 0;
    g_02732230 = 0;
    ram_0000000002732238 = 0;
    g_02732240 = 0;
    g_02732242 = 1;
    g_027321c0 = 0;
    ram_00000000027321c8 = 0;
    g_027321d0 = 0;
    ram_00000000027321d8 = 0;
    g_027321e0 = 0;
    ram_00000000027321e8 = 0;
    g_027321f0 = 0;
    ram_00000000027321f8 = 0;
    g_02732200 = 0;
    ram_0000000002732208 = 0;
    g_02732210 = 0;
    ram_0000000002732218 = 0;
    g_02732220 = 0;
    ram_0000000002732228 = 0;
    g_0273224b = 0;
    g_02732243 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (int64_t *)0x0) {
LAB_01b8e227:
    plVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b8e227;
    plVar4 = this_ptr + 6;
  }
  if (*plVar4 == 0) {
    uVar5 = (**(code **)(*this_ptr + 0x930))();
    *(void*)(this_ptr + 0x3c) = uVar5;
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar4 + 0x27) = 0;
    plVar4[0x2e] = 0;
    *(void*)(plVar4 + 0x2f) = 0;
    plVar4[0x30] = 0;
    *(void*)(plVar4 + 0x31) = 0;
    plVar4[0x28] = 0;
    plVar4[0x29] = 0;
    *(void*)(plVar4 + 0x2a) = 0;
    plVar4[0x2b] = 0;
    plVar4[0x2c] = 0;
    *(void*)((int64_t)plVar4 + 0x165) = 0;
    *(void*)((int64_t)plVar4 + 0x18c) = 0;
    *(void*)((int64_t)plVar4 + 0x194) = 0;
    *(void*)((int64_t)plVar4 + 0x199) = 0;
    plVar4[0x35] = 0;
    plVar4[0x36] = 0;
    plVar4[0x37] = 0;
    plVar4[0x38] = 0;
    plVar4[0x39] = 0;
    plVar4[0x3a] = 0;
    *(void*)(plVar4 + 0x3b) = 0;
    *plVar4 = (int64_t)&g_0264fd20;
    plVar4[2] = (int64_t)&g_02650850;
    *(void*)((int64_t)plVar4 + 0x1dc) = 0;
    FUN_00d500e0();
    FUN_01e3f820();
    (**(code **)(*plVar4 + 0x4d0))();
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0xa20))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = g_027e5020;
    if (g_027e5020 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0xa10))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xac0))();
    (**(code **)(*plVar4 + 0xab8))();
    (**(code **)(*this_ptr + 0xad0))();
    (**(code **)(*plVar4 + 0xac8))();
    (**(code **)(*plVar4 + 0x928))(*(void*)((int64_t)this_ptr + 0x1dc));
    uVar5 = (**(code **)(*this_ptr + 0xad0))();
    *(void*)((int64_t)plVar4 + 0x1dc) = uVar5;
    (**(code **)(*plVar4 + 0x620))();
    (**(code **)(*this_ptr + 0x450))();
    (**(code **)(*plVar4 + 0x3c0))();
    (**(code **)(*plVar4 + 0x478))();
    uVar5 = (**(code **)(*plVar4 + 0x930))();
    *(void*)((int64_t)this_ptr + 0x1dc) = uVar5;
    (**(code **)(*this_ptr + 0x620))();
    *(void*)(this_ptr + 0x3c) = 0x7fc00000;
    FUN_00d50b20();
    return;
  }
LAB_01b8e164:
  uVar7 = (**(code **)(*this_ptr + 0xaf8))();
  cVar2 = FUN_00d05410(uVar5,uVar7,uVar6);
  if (cVar2 != '\0') {
    FUN_01daee00();
  }
  return;
}



// ============================================================
// 01b8f350
// ============================================================
// Function: FUN_01b8f350
// Address: 01b8f350
// Size: 986 bytes
// Class: MUDetectionActivationSlider

void FUN_01b8f350(void)

{
  void*puVar1;
  uint8_t uVar2;
  void*puVar3;
  int64_t this_ptr;
  uint32_t uVar4;
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
  
  FUN_01b68670();
  *(void*)(this_ptr + 0x1a0) = 1;
  *(void*)(this_ptr + 0x1b4) = 0;
  *(void*)(this_ptr + 0x1b6) = 1;
  *(void*)(this_ptr + 0x200) = 1;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025ce610;
  puVar3[2] = 0;
  puVar3[3] = 0;
  (*g_025ce628)();
  puVar1 = *(void**)(this_ptr + 0x208);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x208) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_90 = g_027e51b0;
  if (g_027e51b0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_88 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,1);
  *(void*)(this_ptr + 0x210) = uVar2;
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_80 = g_027c19f0;
  if (g_027c19f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_78 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,0);
  *(void*)(this_ptr + 0x211) = uVar2;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_70 = g_027e51b8;
  if (g_027e51b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_68 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,1);
  *(void*)(this_ptr + 0x212) = uVar2;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_60 = g_027e51c0;
  if (g_027e51c0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_58 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,0);
  *(void*)(this_ptr + 0x213) = uVar2;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b8db70
// ============================================================
// Function: FUN_01b8db70
// Address: 01b8db70
// Size: 812 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "MUDetectionActivationSlider"

void FUN_01b8db70(uint64_t param_1,uint32_t param_2)

{
  float fVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint32_t uVar10;
  uint32_t in_XMM1_Dc;
  int64_t *local_48;
  char local_40;
  float local_34;
  
  pplVar6 = &local_48;
  FUN_01e40eb0();
  plVar2 = local_48;
  if ((g_02732250 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027321a0 = FUN_001b37d0();
    g_02732188 = "MUDetectionActivationSlider";
    g_02732190 = 0x1e8;
    g_02732198 = FUN_008264b0;
    g_027321a8 = 0;
    ram_00000000027321b0 = 0;
    g_027321b8 = 0;
    g_02732230 = 0;
    ram_0000000002732238 = 0;
    g_02732240 = 0;
    g_02732242 = 1;
    g_027321c0 = 0;
    ram_00000000027321c8 = 0;
    g_027321d0 = 0;
    ram_00000000027321d8 = 0;
    g_027321e0 = 0;
    ram_00000000027321e8 = 0;
    g_027321f0 = 0;
    ram_00000000027321f8 = 0;
    g_02732200 = 0;
    ram_0000000002732208 = 0;
    g_02732210 = 0;
    ram_0000000002732218 = 0;
    g_02732220 = 0;
    ram_0000000002732228 = 0;
    g_0273224b = 0;
    g_02732243 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01b8dbd3;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_01b8dbd3:
  plVar2 = *pplVar6;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    local_34 = (float)(**(code **)(*this_ptr + 0xb10))();
    fVar1 = *(float *)((int64_t)this_ptr + 0x1dc);
    fVar7 = (float)(**(code **)(*this_ptr + 0xac0))();
    fVar8 = (float)(**(code **)(*this_ptr + 0xad0))();
    fVar9 = (float)(**(code **)(*this_ptr + 0xac0))();
    cVar3 = (**(code **)(*this_ptr + 0xaf0))();
    if (cVar3 != '\0') {
      local_34 = g_02390124 - local_34;
    }
    (**(code **)(*this_ptr + 0x640))();
    plVar2 = local_48;
    if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_01e3f820();
    uVar4 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*plVar2 + 0x3f0))(uVar10,0xe,0,uVar4);
    uVar10 = FUN_01e3f820();
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    FUN_01cc0c20(uVar10,param_2,local_34,(fVar1 - fVar7) / (fVar8 - fVar9),param_2,in_XMM1_Dc);
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0080a190
// ============================================================
// Function: FUN_0080a190
// Address: 0080a190
// Size: 601 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "MUDetectionActivationSlider"

void FUN_0080a190(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_220;
  
  if ((g_02732250 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027321a0 = FUN_001b37d0();
    g_02732188 = "MUDetectionActivationSlider";
    g_02732190 = 0x1e8;
    g_02732198 = FUN_008264b0;
    g_027321a8 = 0;
    ram_00000000027321b0 = 0;
    g_027321b8 = 0;
    g_02732230 = 0;
    ram_0000000002732238 = 0;
    g_02732240 = 0;
    g_02732242 = 1;
    g_027321c0 = 0;
    ram_00000000027321c8 = 0;
    g_027321d0 = 0;
    ram_00000000027321d8 = 0;
    g_027321e0 = 0;
    ram_00000000027321e8 = 0;
    g_027321f0 = 0;
    ram_00000000027321f8 = 0;
    g_02732200 = 0;
    ram_0000000002732208 = 0;
    g_02732210 = 0;
    ram_0000000002732218 = 0;
    g_02732220 = 0;
    ram_0000000002732228 = 0;
    g_0273224b = 0;
    g_02732243 = 0;
    ___cxa_guard_release();
  }
  if (g_02732243 == '\0') {
    FUN_001e95f0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00826580();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b8d9a0();
    FUN_00e87920(uVar2,0);
    if (local_220 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}



// ============================================================
// 01b8eb50
// ============================================================
// Function: FUN_01b8eb50
// Address: 01b8eb50
// Size: 1993 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "handleAnalyzeKeys"
//   "handleSelectNewScale"
//   "handleMoveUp"
//   "handleMoveDown"
//   "handleSelectUp"
//   "handleSelectDown"
//   "handleToggleAutoanalyzesSplitsAndJoins"
//   "handleSetAlternateMode"
//   "handleToggleDetectsChurchModes"
//   "handleToggleDetectsDetailedModeChanges"
//   "handleTogglePreviewsKeys"
//   "handleFindMoreModeChanges"
//   "handleFindLessModeChanges"

void FUN_01b8eb50(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}



// ============================================================
// 00826580
// ============================================================
// Function: FUN_00826580
// Address: 00826580
// Size: 538 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "MUDetectionActivationSlider"

void FUN_00826580(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001b40a0();
  *this_ptr = &g_0264fd20;
  this_ptr[2] = &g_02650850;
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02732243 == '\0') {
    FUN_00826800();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02732243 == '\0') {
    FUN_00826990();
    FUN_00e87980();
  }
  return;
}

