// Function: FUN_01997db0
// Address: 01997db0
// Size: 2255 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01997db0(int64_t *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  uint32_t extraout_XMM0_Db;
  uint8_t auVar13 [16];
  float extraout_XMM0_Da;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar14 [16];
  float fVar15;
  int64_t local_138;
  uint8_t local_130;
  uint8_t local_128 [16];
  uint8_t local_110;
  float local_108;
  uint32_t uStack_104;
  uint64_t uStack_100;
  int64_t *local_f0;
  char local_e8;
  int local_dc;
  float local_d8;
  float local_d4;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  fVar9 = (float)(**(code **)(&UNK_00001448 + *this_ptr))();
  if (((!NAN((double)this_ptr[0x55])) &&
      (uVar10 = (**(code **)(*this_ptr + 0x938))(), !NAN(*(float *)(this_ptr + 0x56)))) &&
     ((fVar9 != 0.0 || (NAN(fVar9))))) {
    (**(code **)(*this_ptr + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) {
      return;
    }
    if (((int)this_ptr[0x4e] == 4) || ((int)this_ptr[0x4e] == 2)) {
      FUN_01cfc6a0(g_0241b634 * fVar9 + g_02394234);
      local_c8 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_40;
      FUN_01d488d0();
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    plVar7 = local_40;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = local_40;
      plVar7 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    iVar3 = (**(code **)(*plVar7 + 0x3a8))();
    fVar11 = (float)(**(code **)(*this_ptr + 3000))();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_b0 + 0x378))();
    local_b8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b8 = '\x01';
    local_c0 = local_40;
    FUN_01d48a10();
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    local_108 = (float)FUN_01d43b70();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_128 = ZEXT416((uint)(g_023908e0 * fVar11));
    fVar12 = g_023b1608 + g_023908e0 * fVar11;
    fVar15 = g_02390d34;
    if (g_02390d34 <= fVar12) {
      fVar15 = fVar12;
    }
    if (fVar15 < local_108) {
      local_108 = fVar15;
      FUN_01d48ad0();
      FUN_01d44d80();
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      local_a0 = local_40;
      FUN_01d48a10();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (this_ptr[0x4c] == 0) {
      local_d4 = 0.0;
    }
    else {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_110 = 1;
      local_d4 = (float)FUN_01998b60();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    auVar13 = roundss(ZEXT416(uVar10),ZEXT416(uVar10),9);
    auVar13._0_4_ = auVar13._0_4_ + g_023b1698;
    local_dc = iVar3 + 6;
    fVar11 = fVar11 * g_02394240;
    local_128 = insertps(g_023b16c0,local_128._0_4_,0x10);
    local_d8 = g_0241b638 * fVar9 + g_02394234;
    iVar3 = iVar3 + -7;
    plVar7 = (int64_t *)0x0;
    bVar1 = false;
    do {
      pvVar4 = _pthread_getspecific((void*)param_1);
      plVar8 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = local_40;
        plVar8 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      pVar6 = (void*)param_1;
      iVar3 = iVar3 + 1;
      (**(code **)(*plVar8 + 0x3a0))();
      (**(code **)(*this_ptr + 0xbf8))();
      uStack_100 = extraout_XMM0_Qb;
      local_108 = extraout_XMM0_Da;
      uStack_104 = extraout_XMM0_Db;
      pvVar4 = _pthread_getspecific(pVar6);
      plVar8 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      cVar2 = (**(code **)(*plVar8 + 0x3b8))();
      if (cVar2 == '\0') {
        FUN_01cfc6a0();
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        local_80 = local_40;
        FUN_01d488d0();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01cfc6a0();
        local_88 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_88 = '\x01';
        local_90 = local_40;
        FUN_01d488d0();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar5 = g_027e1380;
      if (g_027e1380 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar5;
      local_130 = 1;
      param_1 = &local_138;
      FUN_01998ff0(param_1,iVar3,0);
      if (plVar7 == local_40) {
        if ((bVar1) || (plVar7 == (int64_t *)0x0)) goto joined_r0x01998593;
        plVar8 = plVar7;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_019985b0;
        }
LAB_01998544:
        local_38 = '\0';
        bVar1 = true;
        plVar7 = plVar8;
      }
      else {
        if (local_38 != '\0') {
          plVar8 = local_40;
          if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01998544;
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar8 = local_40;
        if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019985b0:
        bVar1 = true;
        plVar7 = plVar8;
joined_r0x01998593:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      auVar14._4_4_ = uStack_104;
      auVar14._0_4_ = (local_108 - local_d4) - fVar11;
      auVar14._8_4_ = (uint32_t)uStack_100;
      auVar14._12_4_ = uStack_100._4_4_;
      auVar14 = insertps(auVar13,auVar14,0x10);
      local_e8 = '\0';
      local_f0 = plVar7;
      (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar14._0_8_,local_128._0_4_);
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    } while (iVar3 < local_dc);
    if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

