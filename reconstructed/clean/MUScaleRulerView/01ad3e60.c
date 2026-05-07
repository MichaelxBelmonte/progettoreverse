// Function: MUScaleRulerView_setPitchSystem
// Address: 01ad3e60
// Size: 1471 bytes
// Class: MUScaleRulerView
// String references:
//   "MUScaleRulerView::setPitchSystem(): PitchSystem must be MUScalePitchSystem!"

void MUScaleRulerView_setPitchSystem(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint32_t uVar13;
  uint32_t uVar14;
  float fVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t in_XMM1_Dc;
  uint32_t uVar18;
  uint32_t in_XMM1_Dd;
  uint32_t uVar19;
  float fVar20;
  uint64_t uVar21;
  uint8_t auVar22 [16];
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  uVar16 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar13 = (uint32_t)param_2;
  lVar1 = *arg1;
  lVar7 = this_ptr[0x2a];
  FUN_01a1dca0();
  FUN_01ad3cb0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01ad3ef6;
    FUN_00d50b00();
    local_34 = 0;
  }
  else if (local_48 == 0) {
LAB_01ad3ef6:
    local_34 = 0x2590801;
    FUN_00e828a0();
  }
  else {
    local_34 = 0;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    lVar6 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_b8 = g_027e3b30;
      if (g_027e3b30 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      plVar9 = &local_a8;
      FUN_00d41040(plVar9,&local_b8);
      pVar8 = (void*)plVar9;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_98 = g_027e3b30;
      if (g_027e3b30 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      local_58 = local_88;
      local_50 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_50 = '\x01';
      plVar9 = &local_58;
      FUN_00d41430(plVar9,&local_98);
      param_1 = (void*)plVar9;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (lVar1 == lVar7) goto LAB_01ad43e2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  lVar1 = this_ptr[0x58];
  lVar7 = lVar1;
  if (lVar1 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar7 = 0;
        goto LAB_01ad4222;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x58];
      this_ptr[0x58] = local_48;
      lVar7 = local_48;
    }
    else {
      local_40 = '\0';
      lVar7 = local_48;
LAB_01ad4222:
      this_ptr[0x58] = lVar7;
    }
    param_1 = (void*)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ad46e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_01743090();
  if (*(int *)((int64_t)this_ptr + 0x184) != iVar4) {
    *(int *)((int64_t)this_ptr + 0x184) = iVar4;
    uVar21 = g_023dccf4;
    uVar10 = g_023dccec;
    if ((*(int *)((int64_t)this_ptr + 0x284) != 1) && (*(int *)((int64_t)this_ptr + 0x284) != 0)
       ) {
      uVar10 = FUN_01e3f820();
      if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
        uVar14 = uVar13;
        uVar17 = uVar16;
        uVar18 = in_XMM1_Dc;
        uVar19 = in_XMM1_Dd;
        FUN_01e3f820();
        auVar22._4_4_ = uVar17;
        auVar22._0_4_ = uVar14;
        auVar22._8_4_ = uVar18;
        auVar22._12_4_ = uVar19;
        auVar11 = blendps(auVar22,g_0241c700,0xd);
      }
      else {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = g_023dccf4;
      }
      auVar2._8_8_ = extraout_XMM0_Qb;
      auVar2._0_8_ = uVar10;
      auVar12._0_4_ = auVar11._0_4_ + (float)uVar10;
      auVar12._4_4_ = auVar11._4_4_ + (float)((uint64_t)uVar10 >> 0x20);
      auVar12._8_4_ = auVar11._8_4_ + (float)extraout_XMM0_Qb;
      auVar12._12_4_ = auVar11._12_4_ + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar11 = blendps(auVar12,auVar2,2);
      auVar3._4_4_ = uVar16;
      auVar3._0_4_ = uVar13;
      auVar3._8_4_ = in_XMM1_Dc;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar22 = blendps(auVar3,g_0241c710,0xd);
      uVar21 = auVar22._0_8_;
      uVar10 = auVar11._0_8_;
    }
    fVar20 = (float)uVar21;
    fVar15 = fVar20 * g_0239011c;
    if ((fVar20 == 0.0) && (!NAN(fVar20))) {
      fVar15 = fVar20;
    }
    (**(code **)(*this_ptr + 0x618))(uVar10,fVar15);
  }
  FUN_01ad3320();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((int)this_ptr[0x32] != -1000000) {
    *(void*)(this_ptr + 0x32) = 0xfff0bdc0;
    (**(code **)(*this_ptr + 0x620))();
  }
  *(void*)((int64_t)this_ptr + 0x194) = 0xfff0bdc0;
LAB_01ad43e2:
  FUN_01ad48c0();
  FUN_01ad5a70();
  (**(code **)(*this_ptr + 0x620))();
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return;
}

