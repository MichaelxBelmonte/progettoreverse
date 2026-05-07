// Function: FUN_0193ebc0
// Address: 0193ebc0
// Size: 1812 bytes
// Class: Unknown
// String references:
//   "%2d"

void FUN_0193ebc0(void)

{
  float fVar1;
  uint32_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  bool bVar6;
  uint uVar7;
  bool bVar8;
  void*arg1;
  int64_t *this_ptr;
  byte bVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar16 [16];
  float fVar17;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint32_t local_108;
  int64_t *local_b0;
  uint32_t local_a8;
  uint local_a4;
  float local_9c;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  float local_64;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  uint64_t extraout_XMM0_Qb_00;
  
  FUN_01cb4790();
  (**(code **)(*local_b0 + 0x370))();
  local_50 = local_48;
  if (local_48 == 0) {
    bVar9 = 1;
    local_50 = 0;
    bVar6 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar9 = 0;
    bVar6 = true;
  }
  else {
    local_40 = '\0';
    bVar6 = true;
    bVar9 = 0;
  }
  if (((char)local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d44d80();
  if (local_48 == local_50) {
    if ((bool)(bVar9 & local_48 != 0)) {
      bVar6 = true;
      if (local_40 != '\0') goto LAB_0193ed51;
      bVar6 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != '\0') {
      bVar8 = (bool)(bVar6 & local_50 != 0);
      bVar6 = true;
      if (bVar8) {
        local_50 = local_48;
        FUN_00d50b20();
      }
      else {
        local_50 = local_48;
      }
      goto LAB_0193ed51;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar8 = (bool)(bVar6 & local_50 != 0);
    bVar6 = true;
    local_50 = local_48;
    if (!bVar8) goto LAB_0193ed51;
    local_50 = local_48;
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_0193ed51:
  FUN_01d48a10();
  FUN_01d48b40();
  FUN_01cfcdc0();
  local_90 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_90 = '\x01';
  local_98 = local_48;
  FUN_01d488d0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  auVar16._0_8_ = (**(code **)(*this_ptr + 0xc00))();
  auVar16._8_8_ = extraout_XMM0_Qb;
  auVar20._4_12_ = auVar16._4_12_;
  auVar20._0_4_ = (float)auVar16._0_8_ * g_023941f4;
  local_9c = (float)_exp2f(auVar20._0_8_);
  local_9c = local_9c * g_023941f8;
  uVar11 = 0xfffffff8;
  iVar10 = 8;
  do {
    uVar7 = -uVar11;
    if (0 < (int)uVar11) {
      uVar7 = uVar11;
    }
    if (1 < uVar7) {
      if ((int)uVar11 < 1) {
        fVar12 = local_9c / (float)iVar10;
      }
      else {
        fVar12 = (float)(int)uVar11 * local_9c;
      }
      auVar14._0_8_ = _logf(fVar12 * g_02394204);
      auVar14._8_8_ = extraout_XMM0_Qb_00;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = (float)auVar14._0_8_ * g_02394208;
      local_64 = (float)(**(code **)(*this_ptr + 0xbf8))(auVar15._0_8_);
      FUN_01cfcdc0();
      local_80 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = '\x01';
      local_88 = local_48;
      uVar13 = FUN_01d488d0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      local_a8 = 1;
      local_b0 = &g_024cc6f0;
      local_a4 = uVar11;
      FUN_00d8cb40(uVar13,&local_b0);
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      uVar13 = FUN_01d43d10();
      fVar12 = (float)uVar13;
      fVar1 = (float)((uint64_t)uVar13 >> 0x20);
      uVar2 = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
      fVar17 = (*(float *)((int64_t)this_ptr + 0x5b4) - fVar12) + g_02394210 + g_02394248 +
               g_02390124;
      auVar18._4_4_ = fVar1;
      auVar18._0_4_ = fVar1;
      auVar18._8_4_ = uVar2;
      auVar18._12_4_ = uVar2;
      auVar19._4_12_ = auVar18._4_12_;
      auVar19._0_4_ = fVar1 * g_02390118 + local_64 + g_02390124;
      auVar16 = insertps(ZEXT416((uint)fVar17),auVar19,0x10);
      unique0x100001d3 = fVar12;
      g_028b0c88 = auVar16._0_8_;
      unique0x100001d7 = fVar1;
      (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar16._0_8_,1);
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))
                (*(float *)((int64_t)this_ptr + 0x5b4) + g_02394248 + g_02390124,
                 local_64 + g_02390124,
                 *(float *)((int64_t)this_ptr + 0x5b4) + g_023908ec + g_02390124);
      FUN_01cfcdc0();
      local_70 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_70 = '\x01';
      local_78 = local_48;
      FUN_01d488d0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      auVar3._4_4_ = fVar1;
      auVar3._0_4_ = auVar19._0_4_ + g_02390d00;
      auVar3._8_4_ = uVar2;
      auVar3._12_4_ = uVar2;
      auVar16 = insertps(ZEXT416((uint)(fVar17 + g_02390d00)),auVar3,0x10);
      (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar16._0_8_,uVar13);
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))
                (*(float *)((int64_t)this_ptr + 0x5b4) + g_02394248,local_64,
                 *(float *)((int64_t)this_ptr + 0x5b4) + g_023908ec);
      auVar5._8_8_ = extraout_XMM0_Qb_01;
      auVar5._0_8_ = uVar13;
      auVar4._4_4_ = fVar1;
      auVar4._0_4_ = fVar12 + g_0241fd58;
      auVar4._8_4_ = (int)extraout_XMM0_Qb_01;
      auVar4._12_4_ = uVar2;
      auVar20 = blendps(auVar5,auVar4,1);
      local_108 = auVar16._0_4_;
      g_028b0c88 = FUN_00d052e0(g_028b0c88,g_028b0c90,local_108,auVar20._0_8_);
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    uVar11 = uVar11 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != -9);
  if ((bVar6) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}

