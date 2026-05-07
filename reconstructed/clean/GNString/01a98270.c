// Function: FUN_01a98270
// Address: 01a98270
// Size: 2504 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01a98270(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  void*puVar4;
  uint64_t uVar5;
  void*puVar6;
  void *pvVar7;
  int64_t lVar8;
  byte bVar9;
  int64_t *plVar11;
  void*arg1;
  int64_t *this_ptr;
  float fVar12;
  uint8_t auVar15 [16];
  double dVar13;
  double dVar14;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar16 [16];
  float fVar17;
  float fVar18;
  uint32_t in_XMM1_Dd;
  int64_t *local_60;
  char local_58;
  byte local_50;
  undefined7 uStack_4f;
  int64_t *local_40;
  char local_38;
  void*puVar10;
  
  fVar17 = (float)((uint64_t)param_2 >> 0x20);
  fVar12 = (float)param_2;
  FUN_01e3f820();
  (**(code **)(*this_ptr + 0x640))();
  FUN_01e3f820();
  (**(code **)(*local_40 + 0x3f0))(8,0x11,0,1);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)this_ptr[0x3c];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    FUN_01d48370();
    plVar11 = (int64_t *)*arg1;
    FUN_01e3f820();
    auVar15._4_4_ = fVar17;
    auVar15._0_4_ = fVar17;
    auVar15._8_4_ = in_XMM1_Dd;
    auVar15._12_4_ = in_XMM1_Dd;
    auVar15 = insertps(auVar15,ZEXT416((uint)((*(float *)(this_ptr + 0x3b) /
                                              (*(float *)(this_ptr + 0x3b) -
                                              *(float *)((int64_t)this_ptr + 0x1dc))) * fVar17)),
                       0x1d);
    (**(code **)(*plVar11 + 0x368))(auVar15._0_8_);
    (**(code **)(*(int64_t *)*arg1 + 0x380))();
    FUN_01d48b40();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_60 + 0x3a8))();
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
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = true;
    if ((0.0 < *(float *)((int64_t)this_ptr + 0x1dc) ||
         *(float *)((int64_t)this_ptr + 0x1dc) == 0.0) || (*(float *)(this_ptr + 0x3b) <= 0.0)) {
      local_50 = 0;
      uStack_4f = 0;
      puVar4 = (void*)0x0;
    }
    else {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02680400;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(void*)((int64_t)puVar4 + 0x39) = 0;
      *(void*)((int64_t)puVar4 + 0x41) = 0;
      (*g_02680418)();
      FUN_01d39400();
      FUN_01d38ba0();
      uVar5 = (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      bVar3 = false;
      uStack_4f = (undefined7)((uint64_t)uVar5 >> 8);
      local_50 = 1;
    }
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_60 + 0x390))();
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
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar10 = &g_02680400;
    *puVar6 = &g_02680400;
    *(void*)((int64_t)puVar6 + 0xc) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(void*)((int64_t)puVar6 + 0x39) = 0;
    *(void*)((int64_t)puVar6 + 0x41) = 0;
    (*g_02680418)();
    if (puVar6 == puVar4) {
      puVar6 = puVar4;
      if (bVar3) {
        local_50 = 1;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      bVar9 = local_50 & puVar4 != (void*)0x0;
      puVar10 = (void*)CONCAT71(uStack_4f,bVar9);
      local_50 = 1;
      if (bVar9 == 1) {
        FUN_00d50b20();
      }
    }
    if (0.0 < fVar12) {
      fVar17 = 0.0;
      do {
        fVar18 = fVar17;
        pvVar7 = _pthread_getspecific((void*)puVar10);
        plVar11 = plVar1;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar11 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        dVar13 = (double)(**(code **)(*this_ptr + 0xad0))();
        FUN_01e3f820();
        dVar14 = (double)(**(code **)(*this_ptr + 0xad0))();
        (**(code **)(*plVar11 + 0x390))
                  ((float)(((double)fVar17 - dVar13) /
                          (((double)fVar18 - (dVar14 + dVar14)) /
                          (double)(*(float *)(this_ptr + 0x3a) -
                                  *(float *)((int64_t)this_ptr + 0x1d4)))));
        FUN_01e3f820();
        (**(code **)(*this_ptr + 0xad0))();
        (**(code **)(*this_ptr + 0xad0))();
        if ((fVar17 != g_0239424c) || (NAN(fVar17) || NAN(g_0239424c))) {
          FUN_01d38ba0();
        }
        else {
          FUN_01d39400();
        }
        fVar17 = fVar17 + g_02390d34;
      } while (fVar17 < fVar12);
    }
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_60 + 0x390))();
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
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    FUN_01d48390();
    if (g_028b3108 != 0) {
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_60 + 0x3a0))();
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
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_60 + 0x378))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d48a10();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = g_028b3108;
      plVar1 = (int64_t *)*arg1;
      if (g_028b3108 != 0) {
        FUN_00d50b00();
      }
      uVar5 = FUN_01e436c0();
      fVar12 = (float)FUN_01e436c0();
      auVar2._8_8_ = extraout_XMM0_Qb;
      auVar2._0_8_ = uVar5;
      auVar16._4_12_ = auVar2._4_12_;
      auVar16._0_4_ = (float)uVar5 + g_023908ec;
      (**(code **)(*plVar1 + 0x3f0))(auVar16._0_8_,fVar12 + g_02390d28);
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if ((local_50 != 0) && (puVar6 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

