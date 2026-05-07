// Function: FUN_01d8e000
// Address: 01d8e000
// Size: 2764 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d8e000(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  bool bVar8;
  int64_t *plVar9;
  bool bVar10;
  char cVar11;
  uint32_t uVar12;
  int iVar13;
  uint64_t uVar14;
  int64_t **pplVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  undefined7 uVar18;
  void*puVar19;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar20;
  uint64_t uVar21;
  float extraout_XMM0_Db;
  uint8_t auVar22 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar25 [16];
  float local_138;
  float fStack_134;
  int64_t *local_118;
  char local_110;
  int64_t local_e8;
  char local_e0;
  uint8_t local_d8 [16];
  int64_t *local_c0;
  uint8_t local_b8 [16];
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  
  lVar1 = *arg1;
  lVar2 = this_ptr[0x2f];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x2f] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e53c20();
  plVar17 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_c0 = plVar17;
  FUN_01e53c20();
  (**(code **)(*local_40 + 0x4d8))();
  local_b8 = in_XMM1;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  this_ptr[0x30] = local_b8._0_8_;
  auVar25 = in_XMM1;
  uVar12 = (**(code **)(*plVar17 + 0x560))();
  *(void*)(this_ptr + 0x31) = uVar12;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uStack_50;
  _local_58 = auVar24 << 0x40;
  uVar14 = (**(code **)(*plVar17 + 0x560))();
  local_d8 = local_b8;
  if ((uVar14 & 0x10) != 0) {
    FUN_01e3f820();
    _local_58 = auVar25;
    (**(code **)(*plVar17 + 0x528))();
    auVar25._4_4_ = local_58._4_4_;
    auVar25._0_4_ = local_58._4_4_;
    auVar25._8_4_ = uStack_50._4_4_;
    auVar25._12_4_ = uStack_50._4_4_;
    if (local_b8._4_4_ <= (float)local_58._4_4_) {
      auVar25._0_4_ = local_b8._4_4_;
    }
    if (extraout_XMM0_Db <= auVar25._0_4_) {
      local_d8 = insertps(local_b8,auVar25,0x10);
    }
    else {
      auVar22._0_8_ = (**(code **)(*plVar17 + 0x528))();
      auVar22._8_8_ = extraout_XMM0_Qb;
      auVar25 = blendps(local_b8,auVar22,2);
      local_d8 = auVar25;
    }
  }
  FUN_01e53c20();
  plVar17 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar17 == (int64_t *)0x0) {
LAB_01d8e3dd:
    plVar16 = (int64_t *)FUN_00e8fc40();
    FUN_00152930();
    uVar21 = (**(code **)(*plVar16 + 0x18))();
    auVar24 = _local_58;
    local_58._1_7_ = (int7)((uint64_t)uVar21 >> 8);
    local_58[0] = 1;
    uStack_50 = auVar24._8_8_;
    FUN_01d4ed60();
    FUN_01d52700();
    FUN_01e53c20();
    (**(code **)(*local_68 + 0x640))();
    plVar17 = local_40;
    FUN_01d52740();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01d530c0();
    FUN_01d530c0();
    (**(code **)(*plVar17 + 0x410))();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52770();
    plVar17 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar17 + 0x27) = 0;
    plVar17[0x2e] = 0;
    *(void*)(plVar17 + 0x2f) = 0;
    plVar17[0x30] = 0;
    *(void*)(plVar17 + 0x31) = 0;
    plVar17[0x28] = 0;
    plVar17[0x29] = 0;
    *(void*)(plVar17 + 0x2a) = 0;
    plVar17[0x2b] = 0;
    plVar17[0x2c] = 0;
    *(void*)((int64_t)plVar17 + 0x165) = 0;
    *(void*)((int64_t)plVar17 + 0x18c) = 0;
    *(void*)((int64_t)plVar17 + 0x194) = 0;
    *(void*)((int64_t)plVar17 + 0x199) = 0;
    plVar17[0x35] = 0;
    plVar17[0x36] = 0;
    plVar17[0x37] = 0;
    plVar17[0x38] = 0;
    *plVar17 = (int64_t)&g_02682cf8;
    puVar19 = &g_026837c0;
    plVar17[2] = (int64_t)&g_026837c0;
    plVar17[0x39] = 0;
    plVar17[0x3a] = 0;
    *(void*)(plVar17 + 0x3b) = 0;
    plVar17[0x3c] = 0;
    plVar17[0x3d] = 0;
    *(void*)(plVar17 + 0x3e) = 0;
    (*g_02682d10)();
    uVar21 = FUN_01d56f30();
    auVar24 = _local_58;
    local_58._1_7_ = (int7)((uint64_t)uVar21 >> 8);
    local_58[0] = 1;
    uStack_50 = auVar24._8_8_;
    FUN_01d57ee0();
    FUN_01e53c20();
    FUN_01e3f820();
    (**(code **)(*plVar17 + 0x4d0))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = (uint8_t  [8])CONCAT71((int7)((uint64_t)puVar19 >> 8),1);
    uVar21 = (**(code **)(*plVar17 + 0x558))();
    local_58._1_7_ = (int7)((uint64_t)uVar21 >> 8);
    local_58[0] = 1;
    FUN_01d57ec0();
    FUN_01e53c20();
    local_e8 = 0;
    local_e0 = '\0';
    (**(code **)(*local_40 + 0x468))(&local_e8,3);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    uVar21 = FUN_01e43460();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    auVar24 = _local_58;
    local_58._1_7_ = (int7)((uint64_t)uVar21 >> 8);
    local_58[0] = 1;
    uStack_50 = auVar24._8_8_;
    bVar10 = true;
  }
  else {
    FUN_01e53c20();
    (**(code **)(*local_118 + 0x4a0))();
    FUN_00d23310();
    plVar17 = local_40;
    local_60 = local_38 != '\0';
    local_68 = local_40;
    if ((bool)local_60) {
      local_38 = '\0';
    }
    FUN_00099600();
    if (plVar17 == (int64_t *)0x0) {
LAB_01d8e25a:
      pplVar15 = &g_02802688;
      plVar16 = g_02802688;
      if (g_02802688 != (int64_t *)0x0) goto LAB_01d8e269;
LAB_01d8e281:
      bVar20 = true;
      bVar10 = true;
      bVar8 = false;
      plVar16 = (int64_t *)0x0;
    }
    else {
      (**(code **)(*plVar17 + 0x360))();
      cVar11 = FUN_00e85ea0();
      if (cVar11 == '\0') goto LAB_01d8e25a;
      pplVar15 = &local_68;
      plVar16 = local_68;
      if (local_68 == (int64_t *)0x0) goto LAB_01d8e281;
LAB_01d8e269:
      if (*(char *)(pplVar15 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar15 + 1) = 0;
      }
      bVar8 = true;
      bVar20 = false;
      bVar10 = false;
    }
    if ((local_60 != '\0') && (bVar10 = bVar20, plVar17 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (int64_t *)0x0) goto LAB_01d8e3dd;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_50;
    _local_58 = auVar3 << 0x40;
    iVar13 = FUN_01d57f10();
    if (iVar13 != 9) {
      if (!bVar10) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uStack_50;
        _local_58 = auVar6 << 0x40;
        FUN_00d50b20();
      }
      goto LAB_01d8e3dd;
    }
    local_58 = (uint8_t  [8])(**(code **)(*plVar16 + 0x4d8))();
    uStack_50 = extraout_XMM0_Qb_00;
    auVar24 = auVar25;
    FUN_01e53c20();
    uVar21 = FUN_01e3f820();
    bVar20 = true;
    if ((((float)local_58._0_4_ == (float)uVar21) &&
        (!NAN((float)local_58._0_4_) && !NAN((float)uVar21))) &&
       ((float)local_58._4_4_ == (float)((uint64_t)uVar21 >> 0x20))) {
      local_138 = auVar25._0_4_;
      fStack_134 = auVar25._4_4_;
      if ((local_138 == auVar24._0_4_) && (!NAN(local_138) && !NAN(auVar24._0_4_))) {
        bVar20 = fStack_134 != auVar24._4_4_;
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar20) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uStack_50;
      _local_58 = auVar4 << 0x40;
      (**(code **)(*plVar16 + 0x478))();
      if (!bVar10) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uStack_50;
        _local_58 = auVar5 << 0x40;
        FUN_00d50b20();
      }
      goto LAB_01d8e3dd;
    }
    bVar20 = false;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uStack_50;
    _local_58 = auVar7 << 0x40;
    plVar16 = (int64_t *)0x0;
    bVar10 = false;
    if (!bVar8) goto LAB_01d8e79f;
  }
  bVar20 = bVar10;
  FUN_00d50b20();
LAB_01d8e79f:
  auVar23._4_12_ = in_XMM1._4_12_;
  auVar23._0_4_ = (in_XMM1._0_4_ - (float)local_b8._0_4_) * g_0239011c;
  auVar24 = roundss(auVar23,auVar23,9);
  local_b8 = blendps(ZEXT816(0),auVar24,1);
  plVar17 = plVar16;
  if (g_027f1328 != '\0') {
    plVar17 = (int64_t *)FUN_00e8fc40();
    FUN_00152930();
    uVar21 = (**(code **)(*plVar17 + 0x18))();
    uVar18 = (undefined7)((uint64_t)uVar21 >> 8);
    if (plVar17 == plVar16) {
      if (bVar20) {
        FUN_00d50b20();
        plVar17 = plVar16;
      }
      else {
        local_58._1_7_ = uVar18;
        local_58[0] = 1;
        plVar17 = plVar16;
      }
    }
    else {
      local_58._1_7_ = uVar18;
      local_58[0] = 1;
      if ((bool)(bVar20 & plVar16 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d4ed60();
    FUN_01d52700();
    FUN_01d52740();
    plVar16 = local_40;
    FUN_01d530c0();
    (**(code **)(*plVar16 + 0x390))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar9 = local_40;
    FUN_01d52740();
    plVar16 = local_68;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d530c0();
    (**(code **)(*plVar9 + 0x610))();
    if (plVar16 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52770();
    (**(code **)(*this_ptr + 0x618))();
  }
  FUN_01e51420();
  plVar16 = (int64_t *)this_ptr[0x2f];
  FUN_00d50b00();
  (**(code **)(*plVar16 + 0x4c8))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  (**(code **)(*local_40 + 0x558))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  *(int *)((int64_t)local_40 + 0xdc) = *(int *)((int64_t)local_40 + 0xdc) + 1;
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  plVar16 = g_028b8680;
  if (g_027f1329 == '\0') {
    if ((g_028b8680 != this_ptr) &&
       (FUN_00d50b00(), g_028b8680 = this_ptr, plVar16 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (g_028b8688 == '\0') {
      g_028b8688 = '\x01';
      FUN_00e8cb90();
    }
  }
  FUN_00d50b20();
  if ((local_58[0] != '\0') && (plVar17 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

