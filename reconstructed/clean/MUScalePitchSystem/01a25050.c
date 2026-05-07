// Function: FUN_01a25050
// Address: 01a25050
// Size: 546 bytes
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


void FUN_01a25050(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  int iVar2;
  int64_t this_ptr;
  bool bVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  int64_t local_68;
  char local_60;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint8_t local_48 [8];
  uint32_t uStack_40;
  float fStack_3c;
  int64_t local_38;
  char local_30;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  
  fVar4 = (float)((uint64_t)param_2 >> 0x20);
  local_48._0_4_ = (uint32_t)param_2;
  bVar3 = true;
  if ((*(int64_t *)(this_ptr + 0x1d8) == 0) || (FUN_01bcc520(), local_38 == 0)) {
    bVar1 = false;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
    }
    iVar2 = FUN_01bead40();
    bVar1 = true;
    if ((iVar2 == 0) && (*(int64_t *)(this_ptr + 0x138) != 0)) {
      FUN_01e40eb0();
      if (local_38 == this_ptr) {
        FUN_01cf3f40();
        bVar3 = local_68 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = false;
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (bVar3) {
        uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x4d8))();
        uStack_50 = (uint32_t)extraout_XMM0_Qb;
        uStack_4c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
        local_48._4_4_ = fVar4;
        uStack_40 = in_XMM1_Dc;
        fStack_3c = (float)in_XMM1_Dd;
        FUN_01e3f820();
        auVar11._4_4_ = fVar4;
        auVar11._0_4_ = fVar4;
        auVar11._8_4_ = in_XMM1_Dd;
        auVar11._12_4_ = in_XMM1_Dd;
        auVar7._4_12_ = auVar11._4_12_;
        auVar7._0_4_ = fVar4 + g_023b1608;
        auVar11 = insertps(_local_48,auVar7,0x10);
        auVar8._8_4_ = uStack_50;
        auVar8._0_8_ = uVar6;
        auVar8._12_4_ = uStack_4c;
        auVar8 = blendps(auVar8,g_023b1620,0xe);
        (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x4d0))(auVar8._0_8_);
        FUN_01cf3f40();
        FUN_01e3f820();
        auVar8 = auVar11;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e3f820();
        local_48._4_4_ = auVar11._4_4_;
        fStack_3c = auVar11._12_4_;
        fVar4 = (float)-(uint)(auVar8._4_4_ < (float)local_48._4_4_);
        fVar5 = (float)-(uint)(auVar8._12_4_ < fStack_3c);
        if (((uint)fVar4 & 1) == 0) {
          auVar10._0_8_ = FUN_01cf5cf0();
          auVar10._8_8_ = extraout_XMM0_Qb_01;
          auVar8 = blendps(auVar10,ZEXT816(0),2);
          FUN_01cf5c80(auVar8._0_8_);
        }
        else {
          FUN_01e3f820();
          auVar9._0_8_ = FUN_01cf5cf0();
          auVar9._8_8_ = extraout_XMM0_Qb_00;
          auVar12._4_4_ = (float)local_48._4_4_ - fVar4;
          auVar12._12_4_ = fStack_3c - fVar5;
          auVar12._0_4_ = auVar12._4_4_;
          auVar12._8_4_ = auVar12._12_4_;
          auVar13._4_12_ = auVar12._4_12_;
          auVar13._0_4_ = auVar12._4_4_ + g_02390d00;
          if (auVar13._0_4_ < (float)((uint64_t)auVar9._0_8_ >> 0x20)) {
            auVar8 = insertps(auVar9,auVar13,0x10);
            FUN_01cf5c80(auVar8._0_8_);
          }
        }
        bVar3 = false;
        goto LAB_01a250cf;
      }
    }
    bVar3 = false;
  }
  FUN_01d9cbc0();
  if (!bVar1) {
    return;
  }
LAB_01a250cf:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}

