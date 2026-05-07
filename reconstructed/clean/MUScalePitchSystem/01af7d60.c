// Function: FUN_01af7d60
// Address: 01af7d60
// Size: 1213 bytes
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


void FUN_01af7d60(uint64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  uint64_t uVar7;
  float extraout_XMM0_Db;
  uint64_t in_XMM0_Qb;
  uint extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  float local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  uVar7 = FUN_01ad3cb0();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0) && (*(char *)((int64_t)this_ptr + 0x315) != '\0')) {
    FUN_01b0adb0(uVar7,*(void*)((int64_t)this_ptr + 0x194));
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_38 == (int64_t *)0x0) {
      return;
    }
    iVar2 = FUN_01d5b230();
    if (iVar2 != 0) {
      uVar7 = (**(code **)(*this_ptr + 0x640))();
      plVar1 = local_38;
      FUN_01d5b240(uVar7,0);
      FUN_01d65230();
      lVar4 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_c8 + 0x370))();
      local_60 = 0;
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      local_60 = '\x01';
      local_68 = local_98;
      pVar5 = 0;
      (**(code **)(*plVar1 + 0x5d0))(0,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ad3cb0();
      plVar1 = local_38;
      pvVar3 = _pthread_getspecific(pVar5);
      plVar6 = plVar1;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar6 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x3a0))();
      uVar7 = (**(code **)(*this_ptr + 0x918))();
      if ((local_30 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e42030();
      plVar1 = local_38;
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_01e4ac90();
        FUN_01e42030();
        plVar1 = local_38;
        FUN_01e4ace0();
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        (**(code **)(*plVar1 + 0x920))();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      local_e8 = (float)uVar7;
      uStack_e4 = (uint)((uint64_t)uVar7 >> 0x20);
      uStack_e0 = (uint)extraout_XMM0_Qb;
      uStack_dc = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar14._0_4_ = g_023945e0 & (uint)local_e8;
      auVar14._4_4_ = _UNK_023945e4 & uStack_e4;
      auVar14._8_4_ = _UNK_023945e8 & uStack_e0;
      auVar14._12_4_ = _UNK_023945ec & uStack_dc;
      auVar8._4_12_ = SUB1612(auVar14 | g_023945f0,4);
      auVar8._0_4_ = SUB164(auVar14 | g_023945f0,0) + local_e8;
      auVar9 = roundss(auVar8,auVar8,0xb);
      fVar12 = extraout_XMM0_Db * g_02390118 + auVar9._0_4_;
      auVar10._0_4_ = g_023945e0 & (uint)fVar12;
      auVar10._4_4_ = _UNK_023945e4 & (uint)extraout_XMM0_Db;
      auVar10._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd;
      auVar10._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar11._4_12_ = SUB1612(auVar10 | g_023945f0,4);
      auVar11._0_4_ = SUB164(auVar10 | g_023945f0,0) + fVar12;
      auVar13._0_12_ = ZEXT812(0);
      auVar13._12_4_ = 0;
      auVar14 = roundss(auVar13,auVar11,0xb);
      auVar9._8_8_ = in_XMM0_Qb;
      auVar9._0_8_ = param_1;
      auVar9 = insertps(auVar9,auVar14,0x10);
      FUN_01d5ef60(auVar9._0_8_,0);
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((*(float *)((int64_t)this_ptr + 0x1e4) == 0.0) &&
         (!NAN(*(float *)((int64_t)this_ptr + 0x1e4)))) {
        FUN_01b08e50();
        *(void*)((int64_t)this_ptr + 0x1e1) = 0;
      }
    }
    FUN_00d50b20();
  }
  return;
}

