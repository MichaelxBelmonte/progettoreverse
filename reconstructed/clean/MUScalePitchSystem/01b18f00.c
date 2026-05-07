// Function: FUN_01b18f00
// Address: 01b18f00
// Size: 830 bytes
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


uint32_t FUN_01b18f00(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint32_t uVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  char in_DL;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint32_t uVar12;
  float fVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t in_XMM1_Dc;
  uint32_t uVar16;
  uint32_t in_XMM1_Dd;
  uint32_t uVar17;
  float fVar18;
  uint64_t uVar19;
  uint8_t auVar20 [16];
  int64_t local_88;
  char local_80;
  int64_t *in_stack_ffffffffffffffa8;
  char local_50;
  
  uVar14 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar4 = (uint32_t)param_2;
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)((int64_t)this_ptr + 0x315) == '\0') ||
     (*(char *)((int64_t)this_ptr + 0x316) == '\0')) {
LAB_01b19021:
    uVar4 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_50 == '\0') {
      if (in_stack_ffffffffffffffa8 == (int64_t *)0x0) goto LAB_01b19021;
      FUN_00d50b00();
      if (in_DL != '\0') goto LAB_01b18f67;
LAB_01b18ff0:
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_017583b0();
    }
    else {
      if (in_stack_ffffffffffffffa8 == (int64_t *)0x0) goto LAB_01b19021;
      if (in_DL == '\0') goto LAB_01b18ff0;
LAB_01b18f67:
      FUN_00d50b00();
      *(int *)((int64_t)this_ptr + 0x2fc) = *(int *)((int64_t)this_ptr + 0x2fc) + 1;
      FUN_01ad6350();
      pvVar6 = _pthread_getspecific(param_1);
      plVar8 = in_stack_ffffffffffffffa8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar8 = (int64_t *)
                 in_stack_ffffffffffffffa8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar8 + 0x3a0))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01758890();
      pvVar6 = _pthread_getspecific(param_1);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        in_stack_ffffffffffffffa8 =
             (int64_t *)in_stack_ffffffffffffffa8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      iVar5 = (**(code **)(*in_stack_ffffffffffffffa8 + 0x3a8))();
      if (*(int *)((int64_t)this_ptr + 0x184) != iVar5) {
        *(int *)((int64_t)this_ptr + 0x184) = iVar5;
        uVar19 = g_023dccf4;
        uVar9 = g_023dccec;
        if ((*(int *)((int64_t)this_ptr + 0x284) != 1) &&
           (*(int *)((int64_t)this_ptr + 0x284) != 0)) {
          uVar9 = FUN_01e3f820();
          if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
            uVar12 = uVar4;
            uVar15 = uVar14;
            uVar16 = in_XMM1_Dc;
            uVar17 = in_XMM1_Dd;
            FUN_01e3f820();
            auVar20._4_4_ = uVar15;
            auVar20._0_4_ = uVar12;
            auVar20._8_4_ = uVar16;
            auVar20._12_4_ = uVar17;
            auVar10 = blendps(auVar20,g_0241c700,0xd);
          }
          else {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = g_023dccf4;
          }
          auVar2._8_8_ = extraout_XMM0_Qb;
          auVar2._0_8_ = uVar9;
          auVar11._0_4_ = auVar10._0_4_ + (float)uVar9;
          auVar11._4_4_ = auVar10._4_4_ + (float)((uint64_t)uVar9 >> 0x20);
          auVar11._8_4_ = auVar10._8_4_ + (float)extraout_XMM0_Qb;
          auVar11._12_4_ = auVar10._12_4_ + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
          auVar10 = blendps(auVar11,auVar2,2);
          auVar3._4_4_ = uVar14;
          auVar3._0_4_ = uVar4;
          auVar3._8_4_ = in_XMM1_Dc;
          auVar3._12_4_ = in_XMM1_Dd;
          auVar20 = blendps(auVar3,g_0241c710,0xd);
          uVar19 = auVar20._0_8_;
          uVar9 = auVar10._0_8_;
        }
        fVar18 = (float)uVar19;
        fVar13 = fVar18 * g_0239011c;
        if ((fVar18 == 0.0) && (!NAN(fVar18))) {
          fVar13 = fVar18;
        }
        (**(code **)(*this_ptr + 0x618))(uVar9,fVar13);
      }
      *(void*)((int64_t)this_ptr + 0x194) = 0xfff0bdc0;
      FUN_01ad3320();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((int)this_ptr[0x32] != -1000000) {
        *(void*)(this_ptr + 0x32) = 0xfff0bdc0;
        (**(code **)(*this_ptr + 0x620))();
      }
      FUN_01ad71a0();
      FUN_01b03750();
      FUN_01ad37a0();
      FUN_01ad6540();
      FUN_01af6500();
      FUN_00d50b20();
      uVar4 = 0x2802501;
    }
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return uVar4;
}

