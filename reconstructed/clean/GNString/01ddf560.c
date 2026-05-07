// Function: FUN_01ddf560
// Address: 01ddf560
// Size: 2054 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01ddf560(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  bool bVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar13;
  uint64_t uVar14;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar15;
  float fVar19;
  float fVar20;
  uint8_t in_XMM1 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar21;
  uint8_t auVar18 [16];
  uint8_t auVar22 [16];
  int64_t local_f8;
  char local_f0;
  int64_t local_c8;
  char local_c0;
  uint64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  uint64_t local_50;
  char local_48;
  uint64_t local_40;
  char local_38;
  
  FUN_01d384c0();
  local_78 = FUN_01e437f0();
  lVar3 = g_028b8e58;
  if (((char)this_ptr[0x44] == '\0') && ((char)this_ptr[0x46] == '\0')) {
    local_88 = *arg1;
    local_80 = '\0';
    uVar6 = FUN_01d83160();
    uVar10 = (uint64_t)uVar6;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01ddfd4a;
  }
  lVar1 = *arg1;
  if (g_028b8e58 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    g_028b8e58 = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((*arg1 != 0) && (g_028b8e60 == '\0')) {
      g_028b8e60 = '\x01';
      FUN_00e8cb90();
    }
  }
  uVar14 = FUN_01e436c0();
  *(void*)(this_ptr + 0x4a) = 0;
  blendps(in_XMM1,g_02421240,0xe);
  auVar22._8_4_ = extraout_XMM0_Dc;
  auVar22._0_8_ = uVar14;
  auVar22._12_4_ = extraout_XMM0_Dd;
  cVar4 = FUN_00d05410((float)local_78);
  if ((cVar4 != '\0') && (auVar22 = ZEXT816(0), 0.0 < (float)((uint64_t)uVar14 >> 0x20))) {
    *(uint *)(this_ptr + 0x4a) = *(uint *)(this_ptr + 0x2d) ^ g_023945e0;
  }
  uVar14 = FUN_01e436c0();
  fVar13 = (float)((uint64_t)uVar14 >> 0x20);
  auVar16._8_4_ = extraout_XMM0_Dc_00;
  auVar16._0_8_ = uVar14;
  auVar16._12_4_ = extraout_XMM0_Dd_00;
  auVar17._4_4_ = fVar13;
  auVar17._0_4_ = fVar13 + auVar22._4_4_ + g_02421224;
  auVar17._8_4_ = extraout_XMM0_Dd_00;
  auVar17._12_4_ = extraout_XMM0_Dd_00;
  auVar17 = insertps(auVar16,auVar17,0x10);
  auVar22 = blendps(auVar22,g_02421240,0xe);
  cVar4 = FUN_00d05410((float)local_78,auVar17._0_8_,auVar22._0_8_);
  if (cVar4 == '\0') {
LAB_01ddf729:
    fVar13 = *(float *)(this_ptr + 0x4a);
    if ((fVar13 == 0.0) && (!NAN(fVar13))) goto LAB_01ddf748;
LAB_01ddf73d:
    if (this_ptr[0x49] != 0) goto LAB_01ddf748;
    FUN_01e1eb80((int)g_02390108);
    uVar10 = this_ptr[0x49];
    uVar9 = uVar10;
    if (uVar10 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          uVar9 = 0;
          goto LAB_01ddf7d3;
        }
        FUN_00d50b00();
        uVar10 = this_ptr[0x49];
        this_ptr[0x49] = local_40;
        uVar9 = local_40;
      }
      else {
        local_38 = '\0';
        uVar9 = local_40;
LAB_01ddf7d3:
        this_ptr[0x49] = uVar9;
      }
      if (uVar10 != 0) {
        FUN_00d50b20();
        uVar9 = local_40;
      }
    }
    if ((local_38 != '\0') && (uVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar14 = FUN_01e436c0();
    fVar15 = auVar17._0_4_ + (float)uVar14;
    fVar19 = auVar17._4_4_ + (float)((uint64_t)uVar14 >> 0x20);
    fVar20 = auVar17._8_4_ + extraout_XMM0_Dc_01;
    fVar21 = auVar17._12_4_ + extraout_XMM0_Dd_01;
    fVar13 = fVar19;
    uVar14 = FUN_01e3f820();
    auVar18._0_4_ = fVar15 + (float)uVar14;
    auVar18._4_4_ = fVar13 + (float)((uint64_t)uVar14 >> 0x20);
    auVar18._8_4_ = fVar20 + extraout_XMM0_Dc_02;
    auVar18._12_4_ = fVar21 + extraout_XMM0_Dd_02;
    auVar22 = insertps(auVar18,fVar19,0xc);
    if (auVar22._4_4_ + _UNK_023b5de4 <= auVar22._0_4_ + g_023b5de0) goto LAB_01ddf729;
    fVar13 = *(float *)(this_ptr + 0x2d);
    *(float *)(this_ptr + 0x4a) = fVar13;
    if ((fVar13 != 0.0) || (NAN(fVar13))) goto LAB_01ddf73d;
LAB_01ddf748:
    if (((fVar13 == 0.0) && (!NAN(fVar13))) && (this_ptr[0x49] != 0)) {
      FUN_01e1e360();
      if (this_ptr[0x49] != 0) {
        this_ptr[0x49] = 0;
        FUN_00d50b20();
      }
    }
  }
  uVar5 = (**(code **)(*this_ptr + 0x9d8))((float)local_78);
  if ((char)this_ptr[0x46] != '\0') {
    uVar12 = FUN_01d384d0();
    local_c8 = g_027f29d0;
    if (g_027f29d0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_01cacbe0(uVar12,&local_c8);
    uVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    uVar10 = g_027f2a38;
    if (uVar9 != 0) {
      if (g_027f2a38 != 0) {
        FUN_00d50b00();
      }
      local_40 = uVar10;
      local_38 = '\0';
      cVar4 = FUN_00c9ff50();
      uVar12 = extraout_XMM0_Da;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      uVar2 = g_027f2a38;
      if (cVar4 == '\0') {
        bVar11 = false;
      }
      else {
        if (g_027f2a38 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_b8 = uVar2;
        local_b0 = '\x01';
        FUN_000175c0(uVar12,&local_b8);
        plVar8 = (int64_t *)FUN_00dd6dc0();
        bVar11 = plVar8 == this_ptr;
        uVar12 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          uVar12 = FUN_00d50b20();
        }
      }
      if (uVar10 != 0) {
        uVar12 = FUN_00d50b20();
      }
      if (bVar11) {
        local_a8 = *arg1;
        local_a0 = '\0';
        local_98 = uVar9;
        local_90 = '\0';
        uVar6 = (**(code **)(*this_ptr + 0x9c8))(uVar12,&local_98);
        uVar10 = (uint64_t)uVar6;
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        bVar11 = true;
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar11 = false;
      }
      FUN_00d50b20();
      if (bVar11) goto LAB_01ddfd4a;
    }
  }
  plVar8 = (int64_t *)this_ptr[0x3e];
  uVar10 = 0;
  if ((plVar8 != (int64_t *)0x0) && ((char)this_ptr[0x44] != '\0')) {
    FUN_00d50b00();
    FUN_01d384d0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    uVar6 = (**(code **)(*plVar8 + 0x20))(uVar5,&local_50);
    uVar10 = (uint64_t)uVar6;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar14 = local_78;
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
      uVar14 = local_78;
    }
    local_78._4_4_ = (float)((uint64_t)uVar14 >> 0x20);
    local_78._0_4_ = (float)uVar14;
    local_78 = uVar14;
    if (uVar6 == 0) {
      uVar10 = 0;
      if (*(char *)((int64_t)this_ptr + 0x221) == '\0') goto LAB_01ddfd4a;
      uVar10 = 0;
    }
    else {
      if (*(char *)((int64_t)this_ptr + 0x221) != '\0') {
        if ((int)this_ptr[0x48] != 0) {
          fVar13 = (float)*(void*)((int64_t)this_ptr + 0x224);
          if (((fVar13 != (float)local_78) || (NAN(fVar13) || NAN((float)local_78))) ||
             (local_78._4_4_ !=
              (float)((uint64_t)*(void*)((int64_t)this_ptr + 0x224) >> 0x20))) {
            iVar7 = (**(code **)(*this_ptr + 0x9d8))();
            if ((iVar7 != -1) && (*(char *)((int64_t)this_ptr + 0x221) != '\0')) {
              (**(code **)(*this_ptr + 0x9b8))((int)*(void*)((int64_t)this_ptr + 0x224));
              (**(code **)(*this_ptr + 0x618))();
            }
            *(void*)((int64_t)this_ptr + 0x224) = local_78;
            iVar7 = (**(code **)(*this_ptr + 0x9d8))();
            if ((iVar7 != -1) && (*(char *)((int64_t)this_ptr + 0x221) != '\0')) {
              (**(code **)(*this_ptr + 0x9b8))((int)*(void*)((int64_t)this_ptr + 0x224));
              (**(code **)(*this_ptr + 0x618))();
            }
          }
        }
        goto LAB_01ddfd4a;
      }
      fVar13 = (float)*(void*)((int64_t)this_ptr + 0x224);
      if (((fVar13 != (float)local_78) || (NAN(fVar13) || NAN((float)local_78))) ||
         (bVar11 = local_78._4_4_ !=
                   (float)((uint64_t)*(void*)((int64_t)this_ptr + 0x224) >> 0x20), bVar11)
         ) {
        iVar7 = (**(code **)(*this_ptr + 0x9d8))();
        if ((iVar7 != -1) && (*(char *)((int64_t)this_ptr + 0x221) != '\0')) {
          (**(code **)(*this_ptr + 0x9b8))((int)*(void*)((int64_t)this_ptr + 0x224));
          (**(code **)(*this_ptr + 0x618))();
        }
        *(void*)((int64_t)this_ptr + 0x224) = local_78;
        iVar7 = (**(code **)(*this_ptr + 0x9d8))();
        if ((iVar7 != -1) && (*(char *)((int64_t)this_ptr + 0x221) != '\0')) {
          (**(code **)(*this_ptr + 0x9b8))((int)*(void*)((int64_t)this_ptr + 0x224));
          (**(code **)(*this_ptr + 0x618))();
        }
      }
    }
    FUN_01dd3ae0();
  }
LAB_01ddfd4a:
  return uVar10 & 0xffffffff;
}

