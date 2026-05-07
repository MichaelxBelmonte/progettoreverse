// Function: FUN_019f1280
// Address: 019f1280
// Size: 1318 bytes
// Class: MUPitchSystemRulerView

void FUN_019f1280(void)

{
  uint8_t auVar1 [16];
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t in_XMM1 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if ((int64_t *)this_ptr[0x97] == (int64_t *)0x0) {
    if (*arg1 == 0) {
      return;
    }
    lVar6 = 0;
LAB_019f13c6:
    lVar5 = 0;
    lVar4 = *arg1;
    if (lVar4 == 0) goto joined_r0x019f1511;
  }
  else {
    cVar3 = (**(code **)(*(int64_t *)this_ptr[0x97] + 0x50))();
    bVar7 = true;
    if (cVar3 != '\0') {
      if (this_ptr[0x97] == 0) {
        bVar7 = *arg1 != 0;
      }
      else {
        bVar7 = false;
      }
    }
    if (!bVar7) {
      return;
    }
    lVar6 = this_ptr[0x97];
    if (lVar6 == 0) goto LAB_019f13c6;
    uVar8 = FUN_01e436c0();
    FUN_00d45bc0();
    uVar9 = (**(code **)(*this_ptr + 0x938))();
    auVar12._0_4_ = g_023945e0 & (uint)(float)uVar9;
    auVar12._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar9 >> 0x20);
    auVar12._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_00;
    auVar12._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    auVar11._4_12_ = SUB1612(auVar12 | g_023945f0,4);
    auVar11._0_4_ = SUB164(auVar12 | g_023945f0,0) + (float)uVar9;
    auVar12 = roundss(auVar11,auVar11,0xb);
    auVar10._8_8_ = extraout_XMM0_Qb;
    auVar10._0_8_ = uVar8;
    auVar10 = blendps(auVar10,auVar12,1);
    in_XMM1 = blendps(in_XMM1,g_023b1630,0xd);
    FUN_00d05530(auVar10._0_8_,in_XMM1._0_8_,g_02390d34);
    (**(code **)(*this_ptr + 0x618))();
    lVar5 = this_ptr[0x97];
    lVar4 = *arg1;
    if (lVar5 == lVar4) goto joined_r0x019f1511;
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  this_ptr[0x97] = lVar4;
  bVar7 = lVar5 != 0;
  lVar5 = lVar4;
  if (bVar7) {
    FUN_00d50b20();
    lVar5 = this_ptr[0x97];
  }
joined_r0x019f1511:
  if (lVar5 == 0) {
    if ((*(float *)(this_ptr + 0x98) != 0.0) || (NAN(*(float *)(this_ptr + 0x98)))) {
      *(void*)(this_ptr + 0x98) = 0;
    }
  }
  else {
    uVar8 = FUN_01e436c0();
    FUN_00d45bc0();
    uVar9 = (**(code **)(*this_ptr + 0x938))();
    auVar13._0_4_ = g_023945e0 & (uint)(float)uVar9;
    auVar13._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar9 >> 0x20);
    auVar13._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_02;
    auVar13._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    auVar14._4_12_ = SUB1612(auVar13 | g_023945f0,4);
    auVar14._0_4_ = SUB164(auVar13 | g_023945f0,0) + (float)uVar9;
    auVar10 = roundss(auVar14,auVar14,0xb);
    auVar1._8_8_ = extraout_XMM0_Qb_01;
    auVar1._0_8_ = uVar8;
    auVar10 = blendps(auVar1,auVar10,1);
    auVar12 = blendps(in_XMM1,g_023b1630,0xd);
    FUN_00d05530(auVar10._0_8_,auVar12._0_8_,g_02390d34);
    (**(code **)(*this_ptr + 0x618))();
    if (lVar6 == 0) {
      FUN_00d50b00();
      local_b0 = g_027e14b8;
      if (g_027e14b8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      FUN_00d46dc0();
      lVar6 = local_90;
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      FUN_00d46dc0();
      local_50 = local_80;
      local_48 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_48 = '\x01';
      FUN_01f981c0(g_02420b10,&local_b0,&local_50,2);
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_01f97770();
      local_a0 = plVar2;
      local_98 = '\0';
      FUN_01f979c0();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x368))();
      FUN_00d50b20();
    }
  }
  return;
}

