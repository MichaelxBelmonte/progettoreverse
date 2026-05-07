// Function: FUN_01b05350
// Address: 01b05350
// Size: 731 bytes
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


void FUN_01b05350(float param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void* in_ECX;
  int64_t *this_ptr;
  int64_t *plVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint32_t uVar12;
  uint32_t uVar13;
  float fVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint32_t in_XMM1_Dc;
  uint32_t uVar17;
  uint32_t in_XMM1_Dd;
  uint32_t uVar18;
  float fVar19;
  uint64_t uVar20;
  uint8_t auVar21 [16];
  int64_t *local_40;
  char local_38;
  
  uVar15 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar12 = (uint32_t)param_2;
  FUN_01ad3cb0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  plVar7 = local_40;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x3a0))();
  pvVar5 = _pthread_getspecific(in_ECX);
  plVar7 = local_40;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  fVar8 = (float)(**(code **)(*plVar7 + 0x3a0))();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01749eb0();
  if (cVar3 != '\0') {
    FUN_01ad6350();
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = local_40;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (**(code **)(*plVar7 + 0x3a8))();
    if (*(int *)((int64_t)this_ptr + 0x184) != iVar4) {
      *(int *)((int64_t)this_ptr + 0x184) = iVar4;
      uVar20 = g_023dccf4;
      uVar9 = g_023dccec;
      if ((*(int *)((int64_t)this_ptr + 0x284) != 1) &&
         (*(int *)((int64_t)this_ptr + 0x284) != 0)) {
        uVar9 = FUN_01e3f820();
        if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
          uVar13 = uVar12;
          uVar16 = uVar15;
          uVar17 = in_XMM1_Dc;
          uVar18 = in_XMM1_Dd;
          FUN_01e3f820();
          auVar21._4_4_ = uVar16;
          auVar21._0_4_ = uVar13;
          auVar21._8_4_ = uVar17;
          auVar21._12_4_ = uVar18;
          auVar10 = blendps(auVar21,g_0241c700,0xd);
        }
        else {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = g_023dccf4;
        }
        auVar1._8_8_ = extraout_XMM0_Qb;
        auVar1._0_8_ = uVar9;
        auVar11._0_4_ = auVar10._0_4_ + (float)uVar9;
        auVar11._4_4_ = auVar10._4_4_ + (float)((uint64_t)uVar9 >> 0x20);
        auVar11._8_4_ = auVar10._8_4_ + (float)extraout_XMM0_Qb;
        auVar11._12_4_ = auVar10._12_4_ + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar10 = blendps(auVar11,auVar1,2);
        auVar2._4_4_ = uVar15;
        auVar2._0_4_ = uVar12;
        auVar2._8_4_ = in_XMM1_Dc;
        auVar2._12_4_ = in_XMM1_Dd;
        auVar21 = blendps(auVar2,g_0241c710,0xd);
        uVar20 = auVar21._0_8_;
        uVar9 = auVar10._0_8_;
      }
      fVar19 = (float)uVar20;
      fVar14 = fVar19 * g_0239011c;
      if ((fVar19 == 0.0) && (!NAN(fVar19))) {
        fVar14 = fVar19;
      }
      (**(code **)(*this_ptr + 0x618))(uVar9,fVar14);
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = local_40;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (**(code **)(*plVar7 + 0x3a8))(fVar8 + param_1);
    *(int *)((int64_t)this_ptr + 0x194) = iVar4;
    FUN_01ad3320();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      iVar4 = -1000000;
    }
    if ((int)this_ptr[0x32] != iVar4) {
      *(int *)(this_ptr + 0x32) = iVar4;
      (**(code **)(*this_ptr + 0x620))();
    }
    FUN_01ad71a0();
    FUN_01b03750();
    FUN_01ad37a0();
    FUN_01ad6540();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

