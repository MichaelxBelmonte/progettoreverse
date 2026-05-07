// ===================================================================
// GNFont — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 01ea5b80
// ============================================================
// Function: FUN_01ea5b80
// Address: 01ea5b80
// Size: 1749 bytes
// Class: GNFont

void FUN_01ea5b80(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  undefined7 uVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  float fVar13;
  int64_t *local_148;
  uint8_t local_140;
  uint64_t local_138;
  uint8_t local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  uint32_t local_54;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  iVar4 = FUN_01d3b620();
  if (((iVar4 == 2) && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) && (iVar4 = FUN_01d3b630(), iVar4 == 1)
     ) {
    FUN_01d3b620();
                                            (**(code **)(*this_ptr + 0x918))(*(code **)(*this_ptr + 0x918));
    return;
  }
  if (((*(char *)((int64_t)this_ptr + 0x19f) == '\0') || (iVar4 = FUN_01d3a5a0(), iVar4 != 1)) ||
     (iVar4 = FUN_01d3b630(), iVar4 != 1)) goto LAB_01ea60ee;
  (**(code **)(*this_ptr + 0x658))();
  plVar5 = local_40;
  plVar8 = (int64_t *)*arg1;
  if (plVar8 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
      local_48 = arg1 + 1;
      if (local_38 != '\0') goto LAB_01ea5c7c;
      FUN_00d50b00();
      goto LAB_01ea5cb1;
    }
LAB_01ea5cb8:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = arg1 + 1;
    lVar1 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar5;
      if (((char)lVar1 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ea5cb1:
      *(void*)local_48 = 1;
      goto LAB_01ea5cb8;
    }
    *arg1 = (int64_t)local_40;
    if (((char)lVar1 != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ea5c7c:
    *(void*)local_48 = 1;
  }
  local_60 = 0;
  local_98 = 0;
  local_48 = (int64_t *)0x0;
  iVar4 = FUN_01d3a5a0();
  if (iVar4 != 5) goto LAB_01ea60ee;
  FUN_01d3abf0();
  uVar9 = FUN_01e466c0();
  fVar12 = (float)this_ptr[0x32];
  auVar10._0_4_ = (float)uVar9 - fVar12;
  fVar13 = (float)((uint64_t)this_ptr[0x32] >> 0x20);
  auVar10._4_4_ = (float)((uint64_t)uVar9 >> 0x20) - fVar13;
  auVar10._8_4_ = (float)extraout_XMM0_Qb - 0.0;
  auVar10._12_4_ = (float)((uint64_t)extraout_XMM0_Qb >> 0x20) - 0.0;
  auVar11._4_4_ = (float)((uint64_t)this_ptr[0x31] >> 0x20) + fVar13;
  auVar11._0_4_ = (float)this_ptr[0x31] + fVar12;
  auVar11._8_8_ = 0;
  auVar11 = divps(auVar10,auVar11);
  uVar7 = (int)auVar11._4_4_ * (int)this_ptr[0x33] + (int)auVar11._0_4_;
  if (((int)uVar7 < 0) || (*(int *)(this_ptr[0x2b] + 0xc) <= (int)uVar7)) goto LAB_01ea60ee;
  plVar8 = *(int64_t **)(*(int64_t *)(this_ptr[0x2b] + 0x10) + (uint64_t)uVar7 * 8);
  if (plVar8 == (int64_t *)0x0) {
    local_98 = 0;
    local_48 = (int64_t *)0x0;
  }
  else {
    uVar9 = FUN_00d50b00();
    local_98 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
    local_48 = plVar8;
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  local_f0 = '\0';
  local_f8 = 0;
  local_50 = plVar5;
  FUN_01d4eaa0(this_ptr[0x31]);
  local_138 = CONCAT44(local_138._4_4_,uVar7);
  local_100 = plVar8;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  FUN_01d52700();
  FUN_01d52740();
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_118 = 1;
  local_148 = local_48;
  local_140 = 0;
  uVar9 = FUN_01d530c0();
  FUN_01ea4e00(uVar9,&local_148);
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  FUN_01d52770();
  uVar9 = FUN_01ca6a90();
  plVar8 = local_40;
  uVar6 = (undefined7)((uint64_t)uVar9 >> 8);
  if (local_40 == (int64_t *)0x0) {
    plVar8 = (int64_t *)0x0;
    local_54 = (uint32_t)CONCAT71(uVar6,1);
    local_60 = 0;
  }
  else {
    local_60 = CONCAT71(uVar6,1);
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ea5f43;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01ea5f43:
  FUN_01ca5d90();
  plVar5 = (int64_t *)this_ptr[0x2a];
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_e0 = '\0';
    local_e8 = plVar8;
    cVar3 = (**(code **)(*plVar5 + 0x18))(local_138 & 0xffffffff,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_01e42030();
      plVar2 = local_40;
      local_d8 = local_50;
      local_d0 = '\0';
      FUN_01e42030();
      FUN_00d50b00();
      local_138 = FUN_01e437f0();
      plVar5 = local_100;
      local_c8 = *arg1;
      local_c0 = '\0';
      FUN_01ca6a90();
      local_70 = local_a8;
      local_68 = 0;
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*plVar2 + 0x738))(&local_70,&local_c8,5);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_54 == '\0' && plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((plVar5 != (int64_t *)0x0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  }
  if ((char)local_54 == '\0' && plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_100 != (int64_t *)0x0) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01ea60ee:
  local_b8 = *arg1;
  local_b0 = '\0';
  FUN_01e459c0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e0f330
// ============================================================
// Function: FUN_01e0f330
// Address: 01e0f330
// Size: 4566 bytes
// Class: GNFont
// String references:
//   "GNFont"
//   "GNTextView"
//   "GNString"
//   "getFont"
//   "getString"
//   "setEditable"
//   "setObjectValue"
//   "getObjectValue"
//   "setFont"
//   "setTextAlignment"
//   "setForegroundColor"
//   "_editFont"
//   "_editTextAlignment"
//   "_editForegroundColor"
//   "_editObjectValue"

void FUN_01e0f330(void)

{
  int iVar1;
  void*puVar2;
  
  // [STATIC_INIT: property registration]
      g_028b90d8 = "getFont";
      g_028b90e0 = &g_027fadb0;
      g_028b90e8 = 0;
      g_028b90f0 = &g_027f3358;
      g_028b90f8 = FUN_01e1d4d0;
      g_028b9100 = FUN_01e12ce0;
      g_028b9108 = 0;
      // [STATIC_INIT: property registration]
      g_028b9110 = g_026ecb90;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b9120 = "getString";
      g_028b9128 = &g_027fadb0;
      g_028b9130 = 0;
      g_028b9138 = &g_027f3360;
      g_028b9140 = FUN_01e1d570;
      g_028b9148 = FUN_01e10550;
      g_028b9150 = 0;
      // [STATIC_INIT: property registration]
      g_028b9158 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b9168 = "setEditable";
      g_028b9170 = &g_027fadb0;
      g_028b9178 = 0;
      g_028b9180 = &g_027f3368;
      g_028b9188 = FUN_01e1d610;
      g_028b9190 = FUN_01e10580;
      g_028b9198 = 0;
      ram_00000000028b91a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b91b0 = "setObjectValue";
      g_028b91b8 = &g_027fadb0;
      g_028b91c0 = 0;
      g_028b91c8 = &g_027f336b;
      g_028b91d0 = FUN_01e1d630;
      g_028b91d8 = FUN_01e10690;
      g_028b91e0 = 0;
      ram_00000000028b91e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b91f8 = "getObjectValue";
      g_028b9200 = &g_027fadb0;
      g_028b9208 = 0;
      g_028b9210 = &g_027f336e;
      g_028b9218 = FUN_01e1d6b0;
      g_028b9220 = FUN_01e128f0;
      g_028b9228 = 0;
      puVar2 = (void*)FUN_00d4fe50();
      g_028b9230 = *puVar2;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b9240 = "setFont";
      g_028b9248 = &g_027fadb0;
      g_028b9250 = 0;
      g_028b9258 = &g_027f3370;
      g_028b9260 = FUN_01e1d750;
      g_028b9268 = FUN_01e12b60;
      g_028b9270 = 0;
      ram_00000000028b9278 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b9288 = "setTextAlignment";
      g_028b9290 = &g_027fadb0;
      g_028b9298 = 0;
      g_028b92a0 = &g_027f3373;
      g_028b92a8 = FUN_01e1d7d0;
      g_028b92b0 = FUN_01e11330;
      g_028b92b8 = 0;
      ram_00000000028b92c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b92d0 = "setForegroundColor";
      g_028b92d8 = &g_027fadb0;
      g_028b92e0 = 0;
      g_028b92e8 = &g_027f3376;
      g_028b92f0 = FUN_01e1d7f0;
      g_028b92f8 = FUN_01e11400;
      g_028b9300 = 0;
      ram_00000000028b9308 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b9318 = "_editFont";
      g_028b9320 = &g_027fadb0;
      g_028b9328 = 0;
      g_028b9330 = &g_027f3370;
      g_028b9338 = FUN_01e1d750;
      g_028b9340 = FUN_01e1c480;
      g_028b9348 = 0;
      ram_00000000028b9350 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b9360 = "_editTextAlignment";
      g_028b9368 = &g_027fadb0;
      g_028b9370 = 0;
      g_028b9378 = &g_027f3373;
      g_028b9380 = FUN_01e1d7d0;
      g_028b9388 = FUN_01e114b0;
      g_028b9390 = 0;
      ram_00000000028b9398 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b93a8 = "_editForegroundColor";
      g_028b93b0 = &g_027fadb0;
      g_028b93b8 = 0;
      g_028b93c0 = &g_027f3376;
      g_028b93c8 = FUN_01e1d7f0;
      g_028b93d0 = FUN_01e11530;
      g_028b93d8 = 0;
      ram_00000000028b93e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b93f0 = "_editObjectValue";
      g_028b93f8 = &g_027fadb0;
      g_028b9400 = 0;
      g_028b9408 = &g_027f336b;
      g_028b9410 = FUN_01e1d630;
      g_028b9418 = FUN_01e11690;
      g_028b9420 = 0;
      ram_00000000028b9428 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 01ea56e0
// ============================================================
// Function: FUN_01ea56e0
// Address: 01ea56e0
// Size: 844 bytes
// Class: GNFont

void FUN_01ea56e0(void)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  lVar6 = this_ptr[0x27];
  if (lVar6 != 0) {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    FUN_01e3f820();
    (**(code **)(*plVar2 + 0x3b0))();
  }
  if ((int)this_ptr[0x28] != 0) {
    (**(code **)(*this_ptr + 0x640))();
    lVar6 = this_ptr[0x28];
    uVar7 = FUN_01e3f820();
    (**(code **)(*local_40 + 0x3c0))(uVar7,(int)lVar6);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar1 = *(uint *)(this_ptr[0x2b] + 0xc);
  if (0 < (int)uVar1) {
    iVar5 = 0;
    lVar6 = 0;
    while( true ) {
      cVar4 = FUN_00d054a0();
      if (cVar4 != '\0') {
        lVar3 = *(int64_t *)(*(int64_t *)(this_ptr[0x2b] + 0x10) + lVar6 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_01ea4fa0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((uint64_t)uVar1 - 1 == lVar6) break;
      iVar5 = iVar5 + 1;
      if ((int)this_ptr[0x33] <= iVar5) {
        iVar5 = 0;
      }
      lVar6 = lVar6 + 1;
    }
  }
  if (*(char *)((int64_t)this_ptr + 0x19e) != '\0') {
    FUN_01d48370();
    FUN_01d48b40();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_80 + 0x498))(1,0x17);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    FUN_01e436c0();
    (**(code **)(*plVar2 + 0x3b8))();
    FUN_01d48390();
  }
  FUN_01d48390();
  return;
}



// ============================================================
// 01ea7310
// ============================================================
// Function: FUN_01ea7310
// Address: 01ea7310
// Size: 916 bytes
// Class: GNFont
// String references:
//   "GNFont"
//   "GNCharacterFormat"
//   "getFont"
//   "setFont"

void FUN_01ea7310(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028ba210 = "setFont";
      g_028ba218 = &g_026e9500;
      g_028ba220 = 0;
      g_028ba228 = &g_027fe2f0;
      g_028ba230 = FUN_01ea8370;
      g_028ba238 = 0x371;
      g_028ba240 = 0;
      ram_00000000028ba248 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ba258 = "getFont";
      g_028ba260 = &g_026e9500;
      g_028ba268 = 0;
      g_028ba270 = &g_027fe2f3;
      g_028ba278 = FUN_01ea83f0;
      g_028ba280 = g_023dde40;
      ram_00000000028ba284 = _UNK_023dde44;
      ram_00000000028ba288 = _UNK_023dde48;
      ram_00000000028ba28c = _UNK_023dde4c;
      // [STATIC_INIT: property registration]
      g_028ba290 = g_026ecb90;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 001c97b0
// ============================================================
// Function: FUN_001c97b0
// Address: 001c97b0
// Size: 1098 bytes
// Class: GNFont
// String references:
//   "GNFont"

void FUN_001c97b0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02680b28;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  FUN_001c9c60();
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecc4b == '\0') {
    FUN_001c9f20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecc4b == '\0') {
    FUN_001ca0b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecc4b == '\0') {
    FUN_001ca240();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecc4b == '\0') {
    FUN_001ca3d0();
    FUN_00e87980();
  }
  FUN_001ca560();
  FUN_001ca820();
  return;
}

