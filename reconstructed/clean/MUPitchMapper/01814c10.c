// Function: FUN_01814c10
// Address: 01814c10
// Size: 1228 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01814c10(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *this_ptr;
  uint64_t uVar3;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint64_t in_XMM1_Qb;
  uint32_t uVar7;
  uint8_t auVar6 [16];
  uint64_t local_d8;
  uint64_t uStack_d0;
  float local_c8;
  float fStack_c4;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  float local_74;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar7 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  FUN_01e42030();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    plVar1 = (int64_t *)FUN_00e8fc40();
    FUN_000161a0();
    (**(code **)(*plVar1 + 0x18))();
    FUN_01e3f820();
    (**(code **)(*this_ptr + 0x640))();
    local_d8 = (**(code **)(MACH_HEADER._0_8_ + 0x580))();
    uStack_d0 = extraout_XMM0_Qb;
    (**(code **)(*this_ptr + 0x640))();
    uVar3 = (**(code **)(MACH_HEADER._0_8_ + 0x578))();
    local_74 = (float)uVar3;
    local_b8 = 0;
    local_b0 = '\0';
    (**(code **)(*plVar1 + 0x450))(uVar3,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_01e5c680();
    FUN_01e56750();
    FUN_01e5c730();
    FUN_01e56750();
    FUN_01e5ca90();
    (**(code **)(MACH_HEADER._0_8_ + 0x570))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    local_c8 = (float)param_2;
    fStack_c4 = (float)((uint64_t)param_2 >> 0x20);
    auVar4._4_12_ = local_d8._4_12_;
    auVar4._0_4_ = (float)local_d8 + local_c8;
    auVar5._4_4_ = fStack_c4;
    auVar5._0_4_ = fStack_c4;
    auVar5._8_4_ = uVar7;
    auVar5._12_4_ = uVar7;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = fStack_c4 + local_74;
    auVar5 = insertps(auVar4,auVar6,0x10);
    FUN_01e5a130(auVar5._0_8_);
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_00074c30();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01d95060();
    FUN_01d94ee0();
    insertps(auVar4,auVar6._0_4_,0x10);
    (**(code **)(*plVar2 + 0x4d0))();
    (**(code **)(*plVar2 + 0x558))();
    FUN_00d50b00();
    FUN_01d978b0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_01e5ca90();
    local_a0 = '\0';
    local_a8 = plVar2;
    (**(code **)(MACH_HEADER._0_8_ + 0x450))();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    local_98 = g_027d6280;
    if (g_027d6280 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_01e5a050();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x460))();
    FUN_01f27fe0();
    (**(code **)(this_ptr[0x27] + 0x10))();
    uVar3 = FUN_00d50b00();
    local_88 = 0;
    local_80 = '\0';
    FUN_01f47190(uVar3,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr + 0x27 != (int64_t *)0x0) {
      (**(code **)(this_ptr[0x27] + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  else {
    FUN_01e42030();
    FUN_01d8c6e0();
    FUN_01e5d9c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

