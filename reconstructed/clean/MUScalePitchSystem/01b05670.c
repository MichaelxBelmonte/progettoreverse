// Function: FUN_01b05670
// Address: 01b05670
// Size: 570 bytes
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


void FUN_01b05670(void* param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint32_t uVar10;
  uint32_t uVar11;
  float fVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t in_XMM1_Dc;
  uint32_t uVar15;
  uint32_t in_XMM1_Dd;
  uint32_t uVar16;
  float fVar17;
  uint64_t uVar18;
  uint8_t auVar19 [16];
  int64_t *local_38;
  char local_30;
  
  uVar13 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar10 = (uint32_t)param_2;
  FUN_01ad3cb0();
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == (int64_t *)0x0) {
    return;
  }
  FUN_01ad6350();
  pvVar4 = _pthread_getspecific(param_1);
  plVar6 = local_38;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar6 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x3a0))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174aa60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_017423e0();
  if (*(int *)((int64_t)this_ptr + 0x184) != iVar3) {
    *(int *)((int64_t)this_ptr + 0x184) = iVar3;
    uVar18 = g_023dccf4;
    uVar7 = g_023dccec;
    if ((*(int *)((int64_t)this_ptr + 0x284) != 1) && (*(int *)((int64_t)this_ptr + 0x284) != 0)
       ) {
      uVar7 = FUN_01e3f820();
      if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
        uVar11 = uVar10;
        uVar14 = uVar13;
        uVar15 = in_XMM1_Dc;
        uVar16 = in_XMM1_Dd;
        FUN_01e3f820();
        auVar19._4_4_ = uVar14;
        auVar19._0_4_ = uVar11;
        auVar19._8_4_ = uVar15;
        auVar19._12_4_ = uVar16;
        auVar8 = blendps(auVar19,g_0241c700,0xd);
      }
      else {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = g_023dccf4;
      }
      auVar1._8_8_ = extraout_XMM0_Qb;
      auVar1._0_8_ = uVar7;
      auVar9._0_4_ = auVar8._0_4_ + (float)uVar7;
      auVar9._4_4_ = auVar8._4_4_ + (float)((uint64_t)uVar7 >> 0x20);
      auVar9._8_4_ = auVar8._8_4_ + (float)extraout_XMM0_Qb;
      auVar9._12_4_ = auVar8._12_4_ + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar8 = blendps(auVar9,auVar1,2);
      auVar2._4_4_ = uVar13;
      auVar2._0_4_ = uVar10;
      auVar2._8_4_ = in_XMM1_Dc;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar19 = blendps(auVar2,g_0241c710,0xd);
      uVar18 = auVar19._0_8_;
      uVar7 = auVar8._0_8_;
    }
    fVar17 = (float)uVar18;
    fVar12 = fVar17 * g_0239011c;
    if ((fVar17 == 0.0) && (!NAN(fVar17))) {
      fVar12 = fVar17;
    }
    (**(code **)(*this_ptr + 0x618))(uVar7,fVar12);
  }
  FUN_01ad3320();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int)this_ptr[0x32] != -1000000) {
    *(void*)(this_ptr + 0x32) = 0xfff0bdc0;
    (**(code **)(*this_ptr + 0x620))();
  }
  FUN_01ad71a0();
  FUN_01ad37a0();
  FUN_01ad6540();
  FUN_00d50b20();
  return;
}

