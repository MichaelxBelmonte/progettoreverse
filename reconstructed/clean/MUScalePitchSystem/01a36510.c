// Function: FUN_01a36510
// Address: 01a36510
// Size: 566 bytes
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


uint64_t FUN_01a36510(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  uint64_t uVar4;
  double dVar5;
  double dVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float fVar8;
  uint32_t uVar9;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  int64_t local_68;
  char local_60;
  uint8_t local_58 [16];
  float local_38;
  float fStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  
  if (this_ptr[0x2a] == 0) {
    if (this_ptr[0x28] == 0) {
      return g_023dccec;
    }
    dVar5 = (double)(**(code **)(*this_ptr + 0xa30))();
    dVar6 = (double)(**(code **)(*this_ptr + 0xa38))();
    if ((dVar5 == dVar6) && (!NAN(dVar5) && !NAN(dVar6))) {
      return g_023dccec;
    }
    plVar1 = (int64_t *)this_ptr[0x2d];
    (**(code **)(*this_ptr + 0xa30))();
    local_38 = (float)(**(code **)(*plVar1 + 0x390))();
    plVar1 = (int64_t *)this_ptr[0x2d];
    (**(code **)(*this_ptr + 0xa38))();
    lVar3 = *plVar1;
  }
  else {
    plVar1 = (int64_t *)this_ptr[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013201a0();
    local_38 = (float)(**(code **)(*plVar1 + 0x390))();
    plVar1 = (int64_t *)this_ptr[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320130();
    lVar3 = *plVar1;
  }
  uVar4 = (**(code **)(lVar3 + 0x390))();
  local_38 = (float)uVar4 - local_38;
  uVar7 = g_023dccec;
  if (g_02390d30 < local_38) {
    fStack_34 = (float)((uint64_t)uVar4 >> 0x20);
    uStack_30 = (uint32_t)extraout_XMM0_Qb;
    uStack_2c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    FUN_01a36140();
    local_58._0_8_ = FUN_01d526f0();
    local_58._8_8_ = extraout_XMM0_Qb_00;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    auVar11 = local_58;
    if (local_38 < g_02394298 * (float)local_58._0_8_) {
      do {
        auVar10 = auVar11;
        local_58._0_4_ = local_58._0_4_ + g_02390d00;
        auVar11 = blendps(auVar10,local_58,1);
      } while (local_38 < local_58._0_4_ * g_02394298);
      blendps(auVar10,local_58,1);
    }
    fVar8 = fStack_34;
    uVar9 = uStack_2c;
    FUN_01e3f820();
    auVar10._4_4_ = fStack_34;
    auVar10._0_4_ = (float)uVar4 - local_58._0_4_;
    auVar10._8_4_ = uStack_30;
    auVar10._12_4_ = uStack_2c;
    auVar11._4_4_ = fVar8;
    auVar11._0_4_ = fVar8 + g_023b2664;
    auVar11._8_4_ = uVar9;
    auVar11._12_4_ = uVar9;
    auVar11 = insertps(auVar10,auVar11,0x10);
    uVar7 = auVar11._0_8_;
  }
  return uVar7;
}

