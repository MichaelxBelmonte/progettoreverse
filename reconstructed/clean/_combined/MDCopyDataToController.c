// ===================================================================
// MDCopyDataToController — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 00510180
// ============================================================
// Function: FUN_00510180
// Address: 00510180
// Size: 2891 bytes
// Class: MDCopyDataToController

void FUN_00510180(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  uint8_t uVar4;
  char cVar5;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  bool bVar9;
  uint64_t uVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint32_t uVar13;
  uint32_t uVar14;
  float fVar15;
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
  uint64_t local_f0;
  uint64_t local_e8;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint32_t local_34;
  uint64_t extraout_XMM0_Qb_00;
  
  uVar14 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar13 = (uint32_t)param_2;
  uVar10 = FUN_00d6f370();
  local_1e0 = g_0270af68;
  if (g_0270af68 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1d8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(void*)((int64_t)this_ptr + 0x94) = uVar4;
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_118 = 0;
  lVar1 = this_ptr[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  local_120 = lVar1;
  cVar5 = FUN_002664b0();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(void*)((int64_t)this_ptr + 0x94) = 0;
    (**(code **)(*(int64_t *)this_ptr[0x13] + 0x998))();
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x13] + 0x998))();
  }
  uVar10 = FUN_00d6f370();
  local_1d0 = g_0270af70;
  if (g_0270af70 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1c8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(void*)((int64_t)this_ptr + 0x95) = uVar4;
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_108 = 0;
  lVar1 = this_ptr[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_110 = lVar1;
  cVar5 = FUN_002639e0();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(void*)((int64_t)this_ptr + 0x95) = 0;
    (**(code **)(*(int64_t *)this_ptr[0x14] + 0x998))();
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x14] + 0x998))();
  }
  uVar10 = FUN_00d6f370();
  local_1c0 = g_0270af78;
  if (g_0270af78 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1b8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(void*)((int64_t)this_ptr + 0x96) = uVar4;
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = 0;
  lVar1 = this_ptr[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_100 = lVar1;
  cVar5 = FUN_00262e30();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(void*)((int64_t)this_ptr + 0x96) = 0;
    uVar10 = (**(code **)(*(int64_t *)this_ptr[0x15] + 0x998))();
  }
  else {
    uVar10 = (**(code **)(*(int64_t *)this_ptr[0x15] + 0x998))();
  }
  if ((char)this_ptr[0x10] == '\0') {
    plVar8 = (int64_t *)this_ptr[0x17];
    bVar9 = plVar8 == (int64_t *)0x0;
    if (bVar9) {
      plVar8 = (int64_t *)0x0;
      plVar7 = (int64_t *)this_ptr[0x16];
    }
    else {
      uVar10 = FUN_00d50b00();
      plVar7 = (int64_t *)this_ptr[0x16];
    }
    uVar6 = (uint64_t)!bVar9;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00510573;
    }
  }
  else {
    plVar8 = (int64_t *)this_ptr[0x16];
    bVar9 = plVar8 == (int64_t *)0x0;
    if (bVar9) {
      plVar8 = (int64_t *)0x0;
      plVar7 = (int64_t *)this_ptr[0x17];
    }
    else {
      uVar10 = FUN_00d50b00();
      plVar7 = (int64_t *)this_ptr[0x17];
    }
    uVar6 = (uint64_t)!bVar9;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
LAB_00510573:
      local_34 = 0;
      goto LAB_00510584;
    }
  }
  local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
  plVar7 = (int64_t *)0x0;
LAB_00510584:
  local_f0 = uVar6;
  uVar10 = (**(code **)(*plVar8 + 0x4d8))();
  local_e8 = CONCAT44(uVar14,uVar13);
  (**(code **)(*(int64_t *)this_ptr[0x16] + 0x4d8))();
  (**(code **)(*(int64_t *)this_ptr[0x17] + 0x4d8))();
  fVar15 = extraout_XMM0_Db_00;
  if (extraout_XMM0_Db <= extraout_XMM0_Db_00) {
    fVar15 = extraout_XMM0_Db;
  }
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar10;
  auVar11._4_4_ = extraout_XMM0_Db_00;
  auVar11._0_4_ = fVar15;
  auVar11._8_4_ = extraout_XMM0_Dd;
  auVar11._12_4_ = extraout_XMM0_Dd;
  auVar11 = insertps(auVar2,auVar11,0x10);
  (**(code **)(*plVar8 + 0x4d0))(auVar11._0_8_,(uint32_t)local_e8);
  auVar12._0_8_ = (**(code **)(*plVar7 + 0x4d8))();
  auVar12._8_8_ = extraout_XMM0_Qb_00;
  auVar11 = blendps(auVar12,g_023b4c30,0xe);
  (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_);
  (**(code **)(*(int64_t *)this_ptr[0x13] + 0x918))();
  (**(code **)(*(int64_t *)this_ptr[0x14] + 0x918))();
  (**(code **)(*(int64_t *)this_ptr[0x15] + 0x918))();
  FUN_00511610();
  local_140 = g_0270af80;
  local_138 = 0;
  if (g_0270af80 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  FUN_00d46530();
  local_130 = g_0270af88;
  local_128 = 0;
  if (g_0270af88 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_00511500(&local_1f0,&local_140,&local_130);
  FUN_000b4da0();
  local_e8 = local_150;
  if (local_148 == '\0') {
    if (((local_150 != 0) && (FUN_00d50b00(), local_148 != '\0')) && (local_150 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_148 = '\0';
  }
  FUN_002d10d0();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0270af90;
  plVar8 = (int64_t *)this_ptr[0x17];
  if (g_0270af90 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar1;
  local_1a8 = '\x01';
  local_1a0 = local_e8;
  local_198 = '\0';
  FUN_01e57360(&local_1a0,&local_1b0);
  local_d8 = local_88;
  local_d0 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_d0 = '\x01';
  (**(code **)(*plVar8 + 0x968))();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)this_ptr[0x17];
  (**(code **)(*plVar8 + 0x970))();
  local_c8 = local_88;
  local_c0 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_c0 = '\x01';
  cVar5 = (char)local_f0;
  (**(code **)(*plVar8 + 0x6a8))();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_0270afa0;
  lVar1 = g_0270af98;
  if ((char)this_ptr[0x10] != '\0') {
    plVar8 = (int64_t *)this_ptr[0x16];
    if ((int)this_ptr[0x12] < 2) {
      if (g_0270af98 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar1;
      local_188 = '\x01';
      local_180 = local_e8;
      local_178 = '\0';
      FUN_01e57360(&local_180,&local_190);
      local_b8 = local_88;
      local_b0 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_b0 = '\x01';
      (**(code **)(*plVar8 + 0x968))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_0270afa0 != 0) {
        FUN_00d50b00();
      }
      local_170 = lVar3;
      local_168 = '\x01';
      local_160 = local_e8;
      local_158 = '\0';
      FUN_01e57360(&local_160,&local_170);
      local_a8 = local_88;
      local_a0 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_a0 = '\x01';
      (**(code **)(*plVar8 + 0x968))();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar8 = (int64_t *)this_ptr[0x16];
    (**(code **)(*plVar8 + 0x970))();
    local_98 = local_88;
    local_90 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_90 = '\x01';
    cVar5 = (char)local_f0;
    (**(code **)(*plVar8 + 0x6a8))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x5f0))();
  if (local_e8 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0050f8b0
// ============================================================
// Function: FUN_0050f8b0
// Address: 0050f8b0
// Size: 2207 bytes
// Class: MDCopyDataToController
// String references:
//   "handleCancel"
//   "handleSheetClose"
//   "handleOK"
//   "handleCopyTempoChanged"
//   "handleCopyScalesChanged"
//   "handleCopyChordsChanged"
//   "MDCopyDataToController"

void FUN_0050f8b0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02809e00 = "handleSheetClose";
      g_02809e08 = &g_027125c0;
      g_02809e10 = 0;
      g_02809e18 = &g_0270afb8;
      g_02809e20 = FUN_00512430;
      g_02809e28 = 0x5d1;
      g_02809e30 = 0;
      ram_0000000002809e38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809e48 = "handleCancel";
      g_02809e50 = &g_027125c0;
      g_02809e58 = 0;
      g_02809e60 = &g_0270afb8;
      g_02809e68 = FUN_00512430;
      g_02809e70 = 0x5c1;
      g_02809e78 = 0;
      ram_0000000002809e80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809e90 = "handleOK";
      g_02809e98 = &g_027125c0;
      g_02809ea0 = 0;
      g_02809ea8 = &g_0270afb8;
      g_02809eb0 = FUN_00512430;
      g_02809eb8 = 0x5c9;
      g_02809ec0 = 0;
      ram_0000000002809ec8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809ed8 = "handleCopyTempoChanged";
      g_02809ee0 = &g_027125c0;
      g_02809ee8 = 0;
      g_02809ef0 = &g_0270afb8;
      g_02809ef8 = FUN_00512430;
      g_02809f00 = 0x5d9;
      g_02809f08 = 0;
      ram_0000000002809f10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809f20 = "handleCopyScalesChanged";
      g_02809f28 = &g_027125c0;
      g_02809f30 = 0;
      g_02809f38 = &g_0270afb8;
      g_02809f40 = FUN_00512430;
      g_02809f48 = 0x5e1;
      g_02809f50 = 0;
      ram_0000000002809f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02809f68 = "handleCopyChordsChanged";
      g_02809f70 = &g_027125c0;
      g_02809f78 = 0;
      g_02809f80 = &g_0270afb8;
      g_02809f88 = FUN_00512430;
      g_02809f90 = 0x5e9;
      g_02809f98 = 0;
      ram_0000000002809fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00511de0
// ============================================================
// Function: FUN_00511de0
// Address: 00511de0
// Size: 615 bytes
// Class: MDCopyDataToController

void FUN_00511de0(void)

{
  int64_t lVar1;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0xe20))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_00511e3a;
    }
  }
  else if (local_48 != 0) {
LAB_00511e3a:
    if (*(int *)(local_48 + 0xc) != 0) goto joined_r0x00511eda;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x9b0))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
joined_r0x00511eda:
  if (unaff_ESI == 0) {
    if (*(char *)(this_ptr + 0x80) == '\0') {
      lVar1 = *(int64_t *)(this_ptr + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_012fd540(*(void*)(this_ptr + 0x94),1,*(void*)(this_ptr + 0x95),
                   *(void*)(this_ptr + 0x96));
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01300180(*(void*)(this_ptr + 0x94),1,*(void*)(this_ptr + 0x95),
                   *(void*)(this_ptr + 0x96));
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    *(void*)(this_ptr + 0x70) = 0;
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0058a460
// ============================================================
// Function: FUN_0058a460
// Address: 0058a460
// Size: 1760 bytes
// Class: MDCopyDataToController
// String references:
//   "MDCopyDataToController"

void FUN_0058a460(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_02500938;
  FUN_0058ac70();
  FUN_0058afa0();
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271267b == '\0') {
    FUN_0058b2d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x81) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271267b == '\0') {
    FUN_0058b460();
    FUN_00e87980();
  }
  FUN_0058b5f0();
  *(void*)(this_ptr + 0x12) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271267b == '\0') {
    FUN_0058b8b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271267b == '\0') {
    FUN_0058ba40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x95) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271267b == '\0') {
    FUN_0058bbd0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x96) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271267b == '\0') {
    FUN_0058bd60();
    FUN_00e87980();
  }
  FUN_0058bef0();
  FUN_0058c220();
  FUN_0058c550();
  FUN_0058c880();
  FUN_0058cbb0();
  FUN_0058cee0();
  return;
}

