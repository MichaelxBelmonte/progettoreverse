// Function: FUN_01a362b0
// Address: 01a362b0
// Size: 554 bytes
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


uint64_t FUN_01a362b0(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  float fVar4;
  uint64_t uVar5;
  double dVar6;
  double dVar7;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  float fVar8;
  uint32_t in_XMM1_Dd;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  int64_t local_68;
  char local_60;
  uint8_t local_58 [16];
  float local_48;
  float fStack_44;
  uint64_t uStack_40;
  
  fVar8 = (float)((uint64_t)param_2 >> 0x20);
  if (this_ptr[0x2a] == 0) {
    if (this_ptr[0x28] == 0) {
      return g_023dccec;
    }
    dVar6 = (double)(**(code **)(*this_ptr + 0xa30))();
    fStack_44 = (float)((uint64_t)dVar6 >> 0x20);
    dVar7 = (double)(**(code **)(*this_ptr + 0xa38))();
    in_XMM1_Dd = 0;
    if ((dVar6 == dVar7) && (!NAN(dVar6) && !NAN(dVar7))) {
      return g_023dccec;
    }
    plVar1 = (int64_t *)this_ptr[0x2d];
    (**(code **)(*this_ptr + 0xa30))();
    fVar8 = fStack_44;
    uVar5 = (**(code **)(*plVar1 + 0x390))();
    local_48 = (float)uVar5;
    fStack_44 = (float)((uint64_t)uVar5 >> 0x20);
    plVar1 = (int64_t *)this_ptr[0x2d];
    (**(code **)(*this_ptr + 0xa38))();
    lVar3 = *plVar1;
    uStack_40 = extraout_XMM0_Qb_01;
  }
  else {
    plVar1 = (int64_t *)this_ptr[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013201a0();
    uVar5 = (**(code **)(*plVar1 + 0x390))();
    local_48 = (float)uVar5;
    fStack_44 = (float)((uint64_t)uVar5 >> 0x20);
    plVar1 = (int64_t *)this_ptr[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320130();
    lVar3 = *plVar1;
    uStack_40 = extraout_XMM0_Qb;
  }
  fVar4 = (float)(**(code **)(lVar3 + 0x390))();
  fVar4 = fVar4 - local_48;
  uVar5 = g_023dccec;
  if (g_02390d30 < fVar4) {
    FUN_01a35fd0();
    local_58._0_8_ = FUN_01d526f0();
    local_58._8_8_ = extraout_XMM0_Qb_00;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (fVar4 < g_02394298 * (float)local_58._0_8_) {
      fVar8 = 0.0;
      in_XMM1_Dd = 0;
      auVar10 = local_58;
      do {
        auVar9 = auVar10;
        local_58._0_4_ = local_58._0_4_ + g_02390d00;
        auVar10 = blendps(auVar9,local_58,1);
      } while (fVar4 < local_58._0_4_ * g_02394298);
      blendps(auVar9,local_58,1);
    }
    FUN_01e3f820();
    auVar9._4_4_ = fStack_44;
    auVar9._0_4_ = local_48;
    auVar9._8_8_ = uStack_40;
    auVar10._4_4_ = fVar8;
    auVar10._0_4_ = fVar8 + g_023b2664;
    auVar10._8_4_ = in_XMM1_Dd;
    auVar10._12_4_ = in_XMM1_Dd;
    auVar10 = insertps(auVar9,auVar10,0x10);
    uVar5 = auVar10._0_8_;
  }
  return uVar5;
}

