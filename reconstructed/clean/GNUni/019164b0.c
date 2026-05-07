// Function: FUN_019164b0
// Address: 019164b0
// Size: 965 bytes
// Class: GNUni
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


void FUN_019164b0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  uint32_t in_ECX;
  void*in_RDX;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t *in_R8;
  byte bVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  float fVar12;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint uVar13;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar11 [16];
  uint64_t extraout_XMM0_Qb_01;
  float fVar14;
  float fVar15;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint64_t uVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t local_c8 [16];
  uint8_t local_a8 [16];
  int64_t local_90;
  uint64_t uStack_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int local_40;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  
  local_c8._8_4_ = in_XMM1_Dc;
  local_c8._0_8_ = param_2;
  local_c8._12_4_ = in_XMM1_Dd;
  local_a8._8_8_ = in_XMM0_Qb;
  local_a8._0_8_ = param_1;
  local_3c = param_4;
  local_38 = param_3;
  local_34 = in_ECX;
  auVar9._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x18))();
  auVar9._8_8_ = extraout_XMM0_Qb;
  fVar4 = (float)((uint64_t)auVar9._0_8_ >> 0x20);
  uVar13 = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
  blendps(local_c8,auVar9,2);
  fVar14 = fVar4 * g_0239011c;
  (**(code **)(*(int64_t *)*in_RDX + 0x370))();
  auVar7._0_4_ = (uint)fVar14 ^ g_023945e0;
  auVar7._4_4_ = (uint)fVar4 ^ _UNK_023945e4;
  auVar7._8_4_ = uVar13 ^ _UNK_023945e8;
  auVar7._12_4_ = uVar13 ^ _UNK_023945ec;
  auVar7 = insertps(local_a8,auVar7,0x10);
  auVar8._4_12_ = local_a8._4_12_;
  auVar8._0_4_ = (float)param_1 / g_023908dc;
  iVar2 = FUN_00e7d780(auVar8._0_8_);
  auVar9 = blendps(auVar9,g_0241aed0,0xd);
  auVar10._0_4_ = (float)param_1 + (float)param_2 + g_02390d00;
  auVar10._4_12_ = auVar8._4_12_;
  auVar11 = auVar10;
  local_40 = unaff_ESI;
  do {
    iVar1 = local_40;
    FUN_019169f0(auVar11._0_8_,iVar2);
    if ((char)uStack_88 == '\0') {
      if (local_90 == 0) break;
      FUN_00d50b00();
    }
    else if (local_90 == 0) break;
    uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x18))();
    auVar17._8_4_ = (int)extraout_XMM0_Qb_00;
    auVar17._0_8_ = uVar5;
    auVar17._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    fVar14 = (float)(iVar2 * 500);
    fVar4 = fVar14 + g_023908dc + g_02390d00;
    auVar18._4_12_ = auVar17._4_12_;
    uVar16 = auVar9._0_8_;
    if ((float)uVar5 < fVar4) {
      auVar18._0_4_ = ((float)uVar5 - fVar4) + g_023908dc;
      auVar11 = blendps(auVar18,auVar9,0xe);
      uVar16 = auVar11._0_8_;
    }
    auVar11 = blendps(auVar7,ZEXT416((uint)fVar14),1);
    fVar15 = (float)((uint64_t)uVar16 >> 0x20);
    fVar4 = (float)uVar16;
    lVar6 = FUN_00d05360(auVar11._0_8_);
    fVar12 = (float)((uint64_t)lVar6 >> 0x20);
    uStack_88 = CONCAT44(fVar15,fVar4);
    if ((((((float)g_023dccec != (float)lVar6) || (NAN((float)g_023dccec) || NAN((float)lVar6)))
         || (fVar12 != g_023dccec._4_4_)) ||
        ((NAN(fVar12) || NAN(g_023dccec._4_4_) || ((float)g_023dccf4 != fVar4)))) ||
       (NAN((float)g_023dccf4) || NAN(fVar4))) {
LAB_019166ab:
      FUN_01d48370();
      (**(code **)(*(int64_t *)*in_RDX + 0x390))(lVar6,fVar4);
      if (iVar1 == 2) {
        local_50 = local_90;
        local_48 = '\0';
        (**(code **)(*(int64_t *)*in_RDX + 0x3a8))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (iVar1 == 1) {
        local_60 = local_90;
        local_58 = '\0';
        (**(code **)(*(int64_t *)*in_RDX + 0x3a0))();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (iVar1 == 0) {
        local_70 = *in_R8;
        local_68 = '\0';
        FUN_01d4a550((uint8_t)local_34,local_3c,&local_70);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48390();
      if (auVar10._0_4_ <= (float)uVar16 + fVar14 + g_02390d00) goto LAB_01916850;
      iVar2 = iVar2 + 1;
      bVar3 = 1;
    }
    else {
      if ((fVar15 != g_023dccf4._4_4_) || (NAN(fVar15) || NAN(g_023dccf4._4_4_)))
      goto LAB_019166ab;
LAB_01916850:
      bVar3 = 0;
    }
    auVar11._0_8_ = FUN_00d50b20();
    auVar11._8_8_ = extraout_XMM0_Qb_01;
    local_90 = lVar6;
  } while ((bool)(bVar3 & 0 < iVar2));
  (**(code **)(*(int64_t *)*in_RDX + 0x370))();
  return;
}

