// Function: FUN_01a20c30
// Address: 01a20c30
// Size: 520 bytes
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


void FUN_01a20c30(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  fVar3 = *(float *)(arg1 + 0x2c);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    FUN_00d50b00();
    uVar5 = (**(code **)(*arg1 + 0x918))();
    fVar3 = (float)(**(code **)(*arg1 + 0x918))();
    local_68 = (float)uVar5;
    uStack_64 = (uint)((uint64_t)uVar5 >> 0x20);
    uStack_60 = (uint)extraout_XMM0_Qb;
    uStack_5c = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar7._0_4_ = g_023945e0 & (uint)(local_68 - fVar3);
    auVar7._4_4_ = _UNK_023945e4 & uStack_64;
    auVar7._8_4_ = _UNK_023945e8 & uStack_60;
    auVar7._12_4_ = _UNK_023945ec & uStack_5c;
    auVar6._4_12_ = SUB1612(auVar7 | g_023945f0,4);
    auVar6._0_4_ = SUB164(auVar7 | g_023945f0,0) + (local_68 - fVar3);
    auVar7 = roundss(auVar6,auVar6,0xb);
    fVar4 = auVar7._0_4_ + g_023b1608;
    fVar3 = g_023908ec;
    if (fVar4 <= g_023908ec) {
      fVar3 = fVar4;
    }
    *(float *)(arg1 + 0x2c) = fVar3;
    FUN_00d50b20();
    fVar3 = *(float *)(arg1 + 0x2c);
  }
  if (fVar3 < g_02390d30) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  lVar2 = arg1[0x2b];
  if (lVar2 != 0) goto LAB_01a20e09;
  (**(code **)(*arg1 + 0x640))();
  (**(code **)(*local_40 + 0x370))();
  auVar7 = ZEXT416(g_023945e0 & (uint)*(float *)(arg1 + 0x2c)) | g_023945f0;
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = auVar7._0_4_ + *(float *)(arg1 + 0x2c);
  auVar7 = roundss(ZEXT816(0),auVar8,0xb);
  FUN_01d44d80(auVar7._0_8_);
  lVar2 = arg1[0x2b];
  lVar1 = lVar2;
  if (lVar2 != local_30) {
    lVar1 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar1 = 0;
        goto LAB_01a20d7f;
      }
      FUN_00d50b00();
      lVar2 = arg1[0x2b];
      arg1[0x2b] = local_30;
    }
    else {
      local_28 = '\0';
LAB_01a20d7f:
      arg1[0x2b] = lVar1;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar1 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = arg1[0x2b];
LAB_01a20e09:
  *(void*)(this_ptr + 1) = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

