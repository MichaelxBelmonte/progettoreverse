// Function: FUN_01a38090
// Address: 01a38090
// Size: 886 bytes
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


void FUN_01a38090(uint param_1,float param_2)

{
  int64_t lVar1;
  char cVar2;
  void*arg1;
  int64_t *this_ptr;
  int iVar3;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  float fVar8;
  uint8_t auVar7 [16];
  uint8_t local_c8 [16];
  int64_t *local_b0;
  char local_a8;
  int64_t local_90;
  char local_88;
  uint64_t local_40;
  float fStack_38;
  uint32_t uStack_34;
  
  local_40 = (uint64_t)param_1;
  uStack_34 = (uint32_t)this_ptr[0x23];
  fStack_38 = param_2;
  FUN_01d48370();
  uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x390))(local_40,fStack_38);
  (**(code **)(*this_ptr + 0x9f8))(uVar4,&local_40);
  local_c8._4_4_ = 0;
  local_c8._8_4_ = 0;
  local_c8._12_4_ = 0;
  local_c8._0_4_ = fStack_38 + g_02390d30;
  local_40 = CONCAT44(local_40._4_4_,(float)local_40 + g_023b1d84);
  fStack_38 = (float)local_c8._0_4_;
  if (((int64_t *)this_ptr[0x28] != (int64_t *)0x0) &&
     (cVar2 = (**(code **)(*(int64_t *)this_ptr[0x28] + 0xa8))(), cVar2 != '\0')) {
    local_c8._8_4_ = 0;
    local_c8._12_4_ = 0;
    local_c8._0_4_ = fStack_38;
    local_c8._4_4_ = uStack_34;
    FUN_01a368e0(local_40);
  }
  lVar1 = this_ptr[0x2c];
  if (lVar1 == 0) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_b0 + 0x3a0))();
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_01d488d0();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x9e0))();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  uVar4 = FUN_01e3f820();
  if (local_90 != 0) {
    if (0 < *(int *)(local_90 + 0xc)) {
      auVar7._8_4_ = (int)extraout_XMM0_Qb;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
      blendps(local_c8,g_0241be90,0xe);
      iVar3 = 0;
      do {
        FUN_01a37880(local_40,fStack_38);
        fVar8 = auVar7._4_4_;
        auVar5._4_4_ = fVar8;
        auVar5._0_4_ = fVar8;
        auVar5._8_4_ = auVar7._12_4_;
        auVar5._12_4_ = auVar7._12_4_;
        auVar6._4_12_ = auVar5._4_12_;
        auVar6._0_4_ = fVar8 + g_023b169c;
        auVar7 = insertps(auVar7,auVar6,0x10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_90 + 0xc));
    }
    FUN_0010bf70();
  }
  FUN_01d48390();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  return;
}

