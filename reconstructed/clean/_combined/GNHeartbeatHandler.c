// ===================================================================
// GNHeartbeatHandler — Complete reconstructed pseudocode
// 22 functions
// ===================================================================

// Registered properties (31):
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//                   _elapsedTime


// ============================================================
// 0038e2e0
// ============================================================
// Function: FUN_0038e2e0
// Address: 0038e2e0
// Size: 2741 bytes
// Class: GNHeartbeatHandler
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0038e2e0(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint8_t uVar6;
  char cVar7;
  float *pfVar8;
  float *pfVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar12;
  uint64_t uVar13;
  double dVar14;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  float fVar23;
  uint8_t auVar24 [8];
  uint64_t in_XMM1_Qb;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  int64_t *local_158;
  char local_150;
  float local_148;
  float fStack_144;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  uint8_t local_e8 [8];
  uint64_t uStack_e0;
  uint8_t local_d8 [12];
  float fStack_cc;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_78;
  char local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  int64_t *local_58;
  float local_4c;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_48 = (int64_t *)0x0;
    }
    else {
      local_48 = local_40;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_40;
  }
  local_68 = (uint8_t  [8])FUN_01e3f820();
  uStack_60 = extraout_XMM0_Qb;
  uStack_80 = in_XMM1_Qb;
  local_88 = (uint8_t  [8])param_2;
  uVar6 = (**(code **)(*this_ptr + 0x9a0))();
  auVar24 = local_88;
  (**(code **)(*local_48 + 0x3f0))(8,0x11,0,uVar6);
  uVar13 = (**(code **)(*this_ptr + 0xaf8))();
  auVar25 = ZEXT416((uint)g_02391094);
  local_4c = g_02391094;
  FUN_01cfc9f0();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3e] == 0) {
    FUN_00209700();
    (**(code **)(*local_48 + 0x360))();
    cVar7 = FUN_00e85ea0();
    plVar10 = local_48;
    if (cVar7 == '\0') {
      plVar10 = g_02802688;
    }
    if (plVar10 != (int64_t *)0x0) {
      local_128 = *arg1;
      local_120 = '\0';
      FUN_01e3f820();
      (**(code **)(*local_48 + 0x6a0))(0,&local_128,auVar25._0_4_);
      plVar10 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48370();
      local_118 = plVar10;
      local_110 = '\0';
      (**(code **)(*(int64_t *)*arg1 + 0x398))();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar16._0_4_ = (float)local_68._0_4_ + (float)local_88._0_4_;
      auVar16._4_4_ = (float)local_68._4_4_ + (float)local_88._4_4_;
      auVar16._8_4_ = (float)uStack_60 + (float)uStack_80;
      auVar16._12_4_ = uStack_60._4_4_ + uStack_80._4_4_;
      auVar25._8_8_ = extraout_XMM0_Qb_00;
      auVar25._0_8_ = uVar13;
      blendps(auVar16,auVar25,0xd);
      (**(code **)(*(int64_t *)*arg1 + 0x390))();
      local_108 = local_58;
      local_100 = '\0';
      FUN_01d488d0();
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar25 = _local_88;
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
      FUN_01d48390();
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar1 = *(uint *)(this_ptr[0x3c] + 0x18);
  if ((int)uVar1 < 0x10) {
    *(void*)(this_ptr + 0x3d) = 0;
    if (this_ptr[0x3e] != 0) goto LAB_0038e5cb;
  }
  else {
    pfVar9 = *(float **)(this_ptr[0x3c] + 0x10);
    if (*(double *)(pfVar9 + 2) < dVar14) {
      lVar11 = 0;
      do {
        pfVar8 = pfVar9;
        pfVar9 = pfVar8;
        if ((uint64_t)(uVar1 >> 4) - 1 == lVar11) goto LAB_0038e480;
        lVar11 = lVar11 + 1;
        pfVar9 = pfVar8 + 4;
      } while (*(double *)(pfVar8 + 6) < dVar14);
      if ((int)lVar11 != 0) {
        pfVar9 = pfVar8;
      }
    }
LAB_0038e480:
    fVar12 = *pfVar9;
    auVar25 = ZEXT416((uint)fVar12);
    *(float *)(this_ptr + 0x3d) = fVar12;
    if (this_ptr[0x3e] == 0) {
      if (0.0 < fVar12) {
        _local_68 = auVar25;
        local_88 = (uint8_t  [8])(**(code **)(*this_ptr + 0xb20))();
        uStack_80 = extraout_XMM0_Qb_01;
        _local_e8 = auVar25;
        fVar12 = (float)(**(code **)(*this_ptr + 0xb20))();
        local_f8 = local_58;
        local_f0 = '\0';
        _local_d8 = auVar25;
        FUN_01d488d0();
        if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        fVar23 = (float)local_e8._0_4_ * g_0239011c + (float)local_88._0_4_;
        auVar15._4_12_ = local_d8._4_12_;
        fVar12 = local_d8._0_4_ * g_0239011c + fVar12;
        if (fVar23 <= fVar12) {
          fVar12 = fVar23;
        }
        auVar15._0_4_ = fVar12;
        auVar16 = insertps(auVar15,ZEXT416((uint)(g_02390124 + (float)local_88._4_4_ +
                                                 g_02390d34)),0x10);
        auVar2._4_4_ = (float)local_88._4_4_ + (float)local_e8._4_4_;
        auVar2._0_4_ = (((float)local_88._4_4_ + (float)local_e8._4_4_ + g_02390d00) -
                       (float)local_88._4_4_) + g_02390d00 + g_023b1614;
        auVar2._8_4_ = uStack_80._4_4_ + uStack_e0._4_4_;
        auVar2._12_4_ = uStack_80._4_4_ + uStack_e0._4_4_;
        auVar25 = insertps(_local_68,auVar2,0x10);
        (**(code **)(*(int64_t *)*arg1 + 0x3b0))(auVar16._0_8_);
      }
    }
    else {
LAB_0038e5cb:
      FUN_00d50b00();
      FUN_00d50b20();
    }
  }
  local_68 = (uint8_t  [8])FUN_01e3f820();
  uStack_60 = extraout_XMM0_Qb_02;
  _local_88 = auVar25;
  local_e8 = (uint8_t  [8])FUN_01e3f820();
  uStack_e0 = extraout_XMM0_Qb_03;
  _local_d8 = auVar25;
  cVar7 = (**(code **)(*this_ptr + 0x9a0))();
  fStack_144 = (float)((uint64_t)auVar24 >> 0x20);
  fVar12 = (((float)local_68._4_4_ + (float)local_88._4_4_ + g_02390d00) - fStack_144) *
           g_0239011c;
  auVar17._0_4_ = g_023945e0 & (uint)fVar12;
  auVar17._4_4_ = _UNK_023945e4 & (uint)((float)local_68._4_4_ + (float)local_88._4_4_);
  auVar17._8_4_ = _UNK_023945e8 & (uint)(uStack_60._4_4_ + uStack_80._4_4_);
  auVar17._12_4_ = _UNK_023945ec & (uint)(uStack_60._4_4_ + uStack_80._4_4_);
  auVar18._4_12_ = SUB1612(auVar17 | g_023945f0,4);
  auVar18._0_4_ = SUB164(auVar17 | g_023945f0,0) + fVar12;
  fVar12 = (((float)local_e8._4_4_ + (float)local_d8._4_4_ + g_02390d00) - fStack_144) *
           g_0239011c;
  auVar26._0_4_ = g_023945e0 & (uint)fVar12;
  auVar26._4_4_ = _UNK_023945e4 & (uint)((float)local_e8._4_4_ + (float)local_d8._4_4_);
  auVar26._8_4_ = _UNK_023945e8 & (uint)(uStack_e0._4_4_ + fStack_cc);
  auVar26._12_4_ = _UNK_023945ec & (uint)(uStack_e0._4_4_ + fStack_cc);
  auVar27._4_12_ = SUB1612(auVar26 | g_023945f0,4);
  auVar27._0_4_ = SUB164(auVar26 | g_023945f0,0) + fVar12;
  if (cVar7 != '\0') {
    local_4c = g_0239011c;
  }
  auVar25 = roundss(auVar18,auVar18,0xb);
  local_88._0_4_ = auVar25._0_4_;
  _local_68 = roundss(ZEXT816(0),auVar27,0xb);
  if (this_ptr[0x3e] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    local_c8 = this_ptr[0x3e];
    if (local_c8 == 0) {
LAB_0038e8e5:
      local_c0 = '\x01';
      bVar3 = true;
    }
    else {
      FUN_00d50b00();
      local_c0 = '\x01';
      if (this_ptr[0x3e] == 0) goto LAB_0038e8e5;
      FUN_00d50b00();
      bVar3 = false;
    }
    FUN_01d526f0();
    auVar25 = insertps(ZEXT416((uint)(g_02390124 + (float)local_88._0_4_)),local_68._0_4_,0x10);
    FUN_00d05510(auVar25._0_8_);
    uVar13 = FUN_00d051c0();
    auVar27 = ZEXT416((uint)local_4c);
    FUN_01d49110(uVar13,3);
    if (!bVar3) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_148 = SUB84(auVar24,0);
  if (this_ptr[0x40] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    local_e8 = (uint8_t  [8])FUN_01e3f820();
    uStack_e0 = extraout_XMM0_Qb_04;
    local_b8 = this_ptr[0x40];
    _local_d8 = auVar27;
    if (local_b8 == 0) {
LAB_0038e9db:
      local_b0 = '\x01';
      bVar3 = true;
    }
    else {
      FUN_00d50b00();
      local_b0 = '\x01';
      if (this_ptr[0x40] == 0) goto LAB_0038e9db;
      FUN_00d50b00();
      bVar3 = false;
    }
    FUN_01d526f0();
    fVar12 = (((float)local_e8._0_4_ + (float)local_d8._0_4_ + g_02390d00) - local_148) *
             g_0239011c;
    auVar19._0_4_ = g_023945e0 & (uint)fVar12;
    auVar19._4_4_ = _UNK_023945e4 & local_e8._4_4_;
    auVar19._8_4_ = _UNK_023945e8 & (uint)uStack_e0;
    auVar19._12_4_ = _UNK_023945ec & (uint)uStack_e0._4_4_;
    auVar20._4_12_ = SUB1612(auVar19 | g_023945f0,4);
    auVar20._0_4_ = SUB164(auVar19 | g_023945f0,0) + fVar12;
    auVar25 = roundss(auVar20,auVar20,0xb);
    auVar25 = insertps(auVar25,local_68._0_4_,0x10);
    FUN_00d05510(auVar25._0_8_);
    uVar13 = FUN_00d051c0();
    auVar27 = ZEXT416((uint)local_4c);
    FUN_01d49110(uVar13,3);
    if (!bVar3) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x42] == 0) goto LAB_0038eba4;
  FUN_00d50b00();
  FUN_00d50b20();
  local_e8 = (uint8_t  [8])FUN_01e3f820();
  uStack_e0 = extraout_XMM0_Qb_05;
  local_a8 = this_ptr[0x42];
  _local_d8 = auVar27;
  if (local_a8 == 0) {
LAB_0038eb02:
    local_a0 = '\x01';
    bVar3 = true;
  }
  else {
    FUN_00d50b00();
    local_a0 = '\x01';
    if (this_ptr[0x42] == 0) goto LAB_0038eb02;
    FUN_00d50b00();
    bVar3 = false;
  }
  FUN_01d526f0();
  fVar12 = (((float)local_e8._0_4_ + (float)local_d8._0_4_ + g_02390d00) - local_148) -
           (float)local_88._0_4_;
  auVar21._0_4_ = g_023945e0 & (uint)fVar12;
  auVar21._4_4_ = _UNK_023945e4 & local_e8._4_4_;
  auVar21._8_4_ = _UNK_023945e8 & (uint)uStack_e0;
  auVar21._12_4_ = _UNK_023945ec & (uint)uStack_e0._4_4_;
  auVar22._4_12_ = SUB1612(auVar21 | g_023945f0,4);
  auVar22._0_4_ = SUB164(auVar21 | g_023945f0,0) + fVar12;
  auVar25 = roundss(auVar22,auVar22,0xb);
  auVar25 = insertps(auVar25,local_68._0_4_,0x10);
  FUN_00d05510(auVar25._0_8_);
  uVar13 = FUN_00d051c0();
  FUN_01d49110(uVar13,3);
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_0038eba4:
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_158 + 0x390))();
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar7 == '\0') {
    FUN_01d489d0();
  }
  FUN_01d48b40();
  plVar10 = (int64_t *)*arg1;
  FUN_01d39800();
  local_98 = local_40;
  plVar5 = local_48;
  plVar4 = local_58;
  local_90 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = '\x01';
  (**(code **)(*plVar10 + 0x3a8))();
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0038f280
// ============================================================
// Function: FUN_0038f280
// Address: 0038f280
// Size: 951 bytes
// Class: GNHeartbeatHandler
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0038f280(float param_1,double param_2)

{
  float *pfVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  double *pdVar9;
  int64_t lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int64_t *this_ptr;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  uint32_t extraout_XMM0_Dc;
  float fVar22;
  uint32_t uVar23;
  int64_t local_58;
  char local_50;
  uint32_t uVar24;
  
  fVar22 = SUB84(param_2,0);
  fVar18 = (float)(**(code **)(*this_ptr + 0xb20))(0);
  fVar20 = fVar22;
  uVar24 = extraout_XMM0_Dc;
  fVar19 = (float)(**(code **)(*this_ptr + 0xb20))(g_02390124);
  fVar18 = (float)((uint)((fVar22 * g_0239011c + fVar18) - (fVar20 * g_0239011c + fVar19)) &
                  g_02390140);
  param_1 = param_1 * fVar18;
  fVar20 = 0.0;
  if ((0.0 <= param_1) && (fVar20 = param_1, fVar18 < param_1)) {
    fVar20 = fVar18;
  }
  dVar21 = (double)FUN_00e7d6f0();
  uVar23 = 0;
  lVar14 = this_ptr[0x3c];
  uVar8 = *(uint *)(lVar14 + 0x18);
  if (param_2 <= 0.0) {
    if ((uVar8 & 0xfffffff0) == 0x10) {
      pfVar1 = *(float **)(lVar14 + 0x10);
      if ((*pfVar1 == fVar20) && (!NAN(*pfVar1) && !NAN(fVar20))) {
        *(double *)(pfVar1 + 2) = dVar21;
        return;
      }
      *pfVar1 = fVar20;
      *(double *)(pfVar1 + 2) = dVar21;
    }
    else {
      FUN_00c8e340(SUB84(dVar21,0),0);
      *(double *)(*(int64_t *)(this_ptr[0x3c] + 0x10) + 8) = dVar21;
    }
    goto LAB_0038f617;
  }
  uVar12 = uVar8 + 0xf;
  if (-1 < (int)uVar8) {
    uVar12 = uVar8;
  }
  if (0xf < (int)uVar8) {
    uVar12 = (int)uVar12 >> 4;
    lVar14 = *(int64_t *)(lVar14 + 0x10);
    if ((uint64_t)uVar12 - 1 < 3) {
      uVar17 = 0xffffffff;
      uVar7 = 0;
    }
    else {
      pdVar9 = (double *)(lVar14 + 0x38);
      uVar17 = 0xffffffff;
      uVar7 = 0;
      do {
        uVar8 = (uint)uVar7;
        uVar16 = (uint)uVar17;
        if (dVar21 < pdVar9[-6]) {
          uVar16 = uVar8;
        }
        uVar5 = uVar8 + 1;
        if (pdVar9[-4] <= dVar21) {
          uVar5 = uVar16;
        }
        uVar16 = uVar8 + 2;
        if (pdVar9[-2] <= dVar21) {
          uVar16 = uVar5;
        }
        uVar23 = SUB84(*pdVar9,0);
        uVar8 = uVar8 + 3;
        if (*pdVar9 <= dVar21) {
          uVar8 = uVar16;
        }
        uVar17 = (uint64_t)uVar8;
        uVar7 = uVar7 + 4;
        pdVar9 = pdVar9 + 8;
      } while ((uVar12 & 0xfffffffc) != uVar7);
    }
    uVar8 = (uint)uVar17;
    lVar15 = 0;
    if ((uint64_t)(uVar12 & 3) != 0) {
      lVar6 = uVar7 * 0x10;
      lVar15 = (uint64_t)(uVar12 & 3) << 4;
      lVar10 = 0;
      do {
        dVar2 = *(double *)(lVar6 + lVar14 + 8 + lVar10);
        uVar23 = SUB84(dVar2,0);
        if (dVar21 < dVar2) {
          uVar17 = uVar7 & 0xffffffff;
        }
        uVar8 = (uint)uVar17;
        uVar7 = (uint64_t)((int)uVar7 + 1);
        lVar10 = lVar10 + 0x10;
      } while (lVar15 != lVar10);
    }
    if (0 < (int)uVar8) {
      FUN_00c8e710(uVar7,uVar23,lVar14,lVar15,dVar21,uVar24);
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      fVar18 = (float)FUN_00c8e340();
      lVar14 = this_ptr[0x3c];
      iVar11 = *(int *)(lVar14 + 0x18);
      iVar13 = iVar11 + 0xf;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      uVar12 = iVar13 >> 4;
      if ((int)uVar8 < (int)uVar12) {
        uVar7 = (uint64_t)uVar8;
        lVar15 = uVar7 * 0x10;
        lVar6 = 0;
        do {
          pfVar1 = (float *)(lVar6 + *(int64_t *)(lVar14 + 0x10) + lVar15);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar3 = pfVar1[3];
          pfVar1 = (float *)(*(int64_t *)(local_58 + 0x10) + lVar6);
          *pfVar1 = fVar18;
          pfVar1[1] = fVar19;
          pfVar1[2] = fVar22;
          pfVar1[3] = fVar3;
          uVar7 = uVar7 + 1;
          lVar14 = this_ptr[0x3c];
          iVar11 = *(int *)(lVar14 + 0x18);
          iVar13 = iVar11 + 0xf;
          if (-1 < iVar11) {
            iVar13 = iVar11;
          }
          uVar12 = iVar13 >> 4;
          lVar6 = lVar6 + 0x10;
        } while ((int64_t)uVar7 < (int64_t)(int)uVar12);
      }
      if ((int)uVar12 < 1) {
LAB_0038f585:
        bVar4 = false;
      }
      else {
        fVar18 = **(float **)(lVar14 + 0x10);
        bVar4 = true;
        if ((fVar18 == fVar20) && (!NAN(fVar18) && !NAN(fVar20))) {
          uVar8 = uVar12 & 7;
          if (6 < uVar12 - 1) {
            iVar11 = -(uVar12 & 0xfffffff8);
            do {
              iVar11 = iVar11 + 8;
            } while (iVar11 != 0);
          }
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          }
          goto LAB_0038f585;
        }
      }
      FUN_00c8e340(fVar18,0);
      lVar14 = *(int64_t *)(this_ptr[0x3c] + 0x10);
      lVar15 = (int64_t)*(int *)(this_ptr[0x3c] + 0x18);
      *(double *)(lVar15 + -8 + lVar14) = dVar21 + param_2;
      *(float *)(lVar15 + -0x10 + lVar14) = fVar20;
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if (!bVar4) {
        return;
      }
      goto LAB_0038f617;
    }
  }
  FUN_00c8e340(SUB84(dVar21,0),0);
  lVar14 = *(int64_t *)(this_ptr[0x3c] + 0x10);
  lVar15 = (int64_t)*(int *)(this_ptr[0x3c] + 0x18);
  *(double *)(lVar15 + -8 + lVar14) = dVar21 + param_2;
  *(float *)(lVar15 + -0x10 + lVar14) = fVar20;
  if ((*(float *)(this_ptr + 0x3d) == fVar20) &&
     (!NAN(*(float *)(this_ptr + 0x3d)) && !NAN(fVar20))) {
    return;
  }
LAB_0038f617:
  (**(code **)(*this_ptr + 0x620))();
  return;
}



// ============================================================
// 0038cc50
// ============================================================
// Function: FUN_0038cc50
// Address: 0038cc50
// Size: 817 bytes
// Class: GNHeartbeatHandler
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0038cc50(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  *(void*)((int64_t)this_ptr + 100) = 0;
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x19] = 0;
  *(void*)((int64_t)this_ptr + 0xce) = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1c] = 0;
  *this_ptr = &g_025d43d8;
  this_ptr[0x1d] = &g_025d4ab0;
  this_ptr[0x1e] = &g_025d4ae0;
  this_ptr[0x1f] = 0;
  this_ptr[0x20] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
    this_ptr[0x21] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x20] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x21] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x21] = puVar3;
      iVar2 = g_02802630;
    }
  }
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x26] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x26] = puVar3;
    iVar2 = g_02802630;
  }
  this_ptr[0x2b] = 0;
  this_ptr[0x2c] = 0;
  this_ptr[0x29] = 0;
  this_ptr[0x2a] = 0;
  this_ptr[0x27] = 0;
  this_ptr[0x28] = 0;
  this_ptr[0x2d] = 0;
  if (iVar2 < 2) {
    this_ptr[0x2e] = 0;
    this_ptr[0x2f] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x2d] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x2e] = 0;
    this_ptr[0x2f] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x2f] = puVar3;
      iVar2 = g_02802630;
    }
  }
  *(void*)(this_ptr + 0x30) = 0;
  *(void*)((int64_t)this_ptr + 0x184) = 0;
  this_ptr[0x32] = 0;
  this_ptr[0x33] = 0;
  *(void*)(this_ptr + 0x34) = 0;
  this_ptr[0x35] = 0;
  this_ptr[0x36] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x36] = puVar3;
  }
  this_ptr[0x3f] = 0;
  *(void*)(this_ptr + 0x40) = 0;
  this_ptr[0x37] = 0;
  this_ptr[0x38] = 0;
  *(void*)((int64_t)this_ptr + 0x1c4) = 0;
  *(void*)((int64_t)this_ptr + 0x1cc) = 0;
  this_ptr[0x3b] = 0;
  this_ptr[0x3c] = 0;
  *(void*)((int64_t)this_ptr + 0x1e1) = 0;
  *(void*)((int64_t)this_ptr + 0x1e9) = 0;
  *(void*)((int64_t)this_ptr + 0x204) = 0;
  *(void*)((int64_t)this_ptr + 0x20c) = 0;
  *(void*)((int64_t)this_ptr + 0x214) = 0;
  return;
}



// ============================================================
// 00847230
// ============================================================
// Function: FUN_00847230
// Address: 00847230
// Size: 4054 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUScaleOpenPanel"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_00847230(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_008469f0();
  this_ptr[0x12] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02646ab0;
  this_ptr[0x12] = &g_026470e8;
  FUN_00848400();
  FUN_008486f0();
  FUN_008489e0();
  FUN_00848cd0();
  FUN_00848fc0();
  FUN_008492b0();
  FUN_008495a0();
  FUN_00849890();
  FUN_00849b80();
  FUN_00849e00();
  FUN_0084a080();
  *(void*)(this_ptr + 0x1e) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084a300();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084a470();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084a5e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084a750();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084a8c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1f) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084aa30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084aba0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfd) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084ad10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfe) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084ae80();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xff) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084aff0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x20) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084b160();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x104) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084b2d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084b440();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x10c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084b5b0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x22) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084b720();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x114) = 0;
  // [STATIC_INIT: property registration]
  if (g_027388bb == '\0') {
    FUN_0084b890();
    FUN_00e87980();
  }
  FUN_0084ba00();
  FUN_0084bc80();
  return;
}



// ============================================================
// 00857530
// ============================================================
// Function: FUN_00857530
// Address: 00857530
// Size: 2083 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "float"
//   "_minFloatValue"
//   "_maxFloatValue"
//   "_slideRuleAnchorOffset"
//   "_showRatios"
//   "_showAllRatios"
//   "_showRatioModeButton"
//   "_lastAnchorOffsetChangeRatio"
//   "_slideRuleAnchorOffsetMinRatio"
//   "_slideRuleAnchorOffsetMaxRatio"
//   "_movingResolutionRatio"
//   "_movingFineResolutionRatio"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_00857530(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_000f62d0();
  *this_ptr = &g_02645fa8;
  this_ptr[2] = &g_02646a70;
  FUN_00857e70();
  FUN_00857f50();
  *(void*)(this_ptr + 0x3b) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d9) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1da) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00858030();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3c) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e4) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3d) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ec) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3e) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 500) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3f) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1fc) = 0;
  lVar2 = FUN_008572a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_008581a0();
  return;
}



// ============================================================
// 00838f20
// ============================================================
// Function: FUN_00838f20
// Address: 00838f20
// Size: 1678 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "GNHeartbeatHandler"
//   "GNCoord"
//   "_delay"
//   "_length"
//   "_showsStereo"
//   "_timerRegistered"
//   "_left"
//   "_right"
//   "_leftTime"
//   "_rightTime"
//   "double"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_00838f20(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_000f62d0();
  this_ptr[0x39] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02636b48;
  this_ptr[2] = &g_02637618;
  this_ptr[0x39] = &g_02637658;
  *(void*)(this_ptr + 0x3a) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00839650();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d4) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d5) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3b) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3c) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3d] = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3e] = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3f] = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x40) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008397d0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 000fabd0
// ============================================================
// Function: FUN_000fabd0
// Address: 000fabd0
// Size: 1175 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "GNHeartbeatHandler"
//   "_isBordered"
//   "_isDefaultButton"
//   "_imageOffset"
//   "GNPoint"
//   "_flashingTime"
//   "double"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_000fabd0(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_000f62d0();
  this_ptr[0x39] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02677e10;
  this_ptr[2] = &g_026788e8;
  this_ptr[0x39] = &g_02678928;
  FUN_000fb150();
  FUN_000fb230();
  FUN_000fb310();
  FUN_000fb3f0();
  *(void*)(this_ptr + 0x3e) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 500) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb4d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3f) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1fc) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb650();
    FUN_00e87980();
  }
  FUN_000fb7e0();
  this_ptr[0x41] = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x42) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb8c0();
    FUN_00e87980();
  }
  this_ptr[0x43] = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00210580
// ============================================================
// Function: FUN_00210580
// Address: 00210580
// Size: 1968 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "GNToolTipController"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_00210580(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026c0bf0;
  this_ptr[2] = &g_026c0fb8;
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_027fd8bb == '\0') {
    FUN_00210d90();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027fd8bb == '\0') {
    FUN_00210f00();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027fd8bb == '\0') {
    FUN_00211070();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_027fd8bb == '\0') {
    FUN_002111e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fd8bb == '\0') {
    FUN_00211350();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fd8bb == '\0') {
    FUN_002114c0();
    FUN_00e87980();
  }
  FUN_00211630();
  FUN_00211910();
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fd8bb == '\0') {
    FUN_00211bf0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  *(void*)((int64_t)this_ptr + 100) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fd8bb == '\0') {
    FUN_00211e20();
    FUN_00e87980();
  }
  FUN_00211f90();
  FUN_00212280();
  return;
}



// ============================================================
// 0018cef0
// ============================================================
// Function: FUN_0018cef0
// Address: 0018cef0
// Size: 1608 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "GNAnimationView"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0018cef0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026c3478;
  this_ptr[2] = &g_026c3da8;
  this_ptr[0x27] = &g_026c3de8;
  FUN_0018d5d0();
  FUN_0018d930();
  *(void*)(this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e49eb == '\0') {
    FUN_0018dc20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x154) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e49eb == '\0') {
    FUN_0018dd90();
    FUN_00e87980();
  }
  FUN_0018df00();
  this_ptr[0x2c] = 0;
  this_ptr[0x2d] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e49eb == '\0') {
    FUN_0018e180();
    FUN_00e87980();
  }
  this_ptr[0x2e] = 0;
  this_ptr[0x2f] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e49eb == '\0') {
    FUN_0018e2f0();
    FUN_00e87980();
  }
  this_ptr[0x30] = 0;
  this_ptr[0x31] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e49eb == '\0') {
    FUN_0018e460();
    FUN_00e87980();
  }
  this_ptr[0x32] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e49eb == '\0') {
    FUN_0018e5d0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0059c6c0
// ============================================================
// Function: FUN_0059c6c0
// Address: 0059c6c0
// Size: 1739 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUEditorSubview"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0059c6c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02626598;
  this_ptr[2] = &g_02626f18;
  this_ptr[0x27] = &g_02626f58;
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271437b == '\0') {
    FUN_0059cde0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x144) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271437b == '\0') {
    FUN_0059cf70();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271437b == '\0') {
    FUN_0059d100();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x149) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271437b == '\0') {
    FUN_0059d290();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271437b == '\0') {
    FUN_0059d420();
    FUN_00e87980();
  }
  this_ptr[0x2a] = 0;
  // [STATIC_INIT: property registration]
  if (g_0271437b == '\0') {
    FUN_0059d5b0();
    FUN_00e87980();
  }
  FUN_0059d740();
  FUN_0059da70();
  return;
}



// ============================================================
// 0030cb40
// ============================================================
// Function: FUN_0030cb40
// Address: 0030cb40
// Size: 1461 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUMultiTrackTrackElementView"
//   "MUEnvelopePathDataSource"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0030cb40(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_024e21a8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x28] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026586b8;
  this_ptr[2] = &g_02658ff8;
  this_ptr[0x27] = &g_02659038;
  this_ptr[0x28] = &g_02659070;
  FUN_0030d1d0();
  FUN_0030d500();
  *(void*)(this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270111b == '\0') {
    FUN_0030d830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x15c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270111b == '\0') {
    FUN_0030d9c0();
    FUN_00e87980();
  }
  FUN_0030db50();
  this_ptr[0x2d] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270111b == '\0') {
    FUN_0030de80();
    FUN_00e87980();
  }
  FUN_0030e010();
  FUN_0030e2d0();
  this_ptr[0x30] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270111b == '\0') {
    FUN_0030e590();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00858d80
// ============================================================
// Function: FUN_00858d80
// Address: 00858d80
// Size: 1164 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUScaleStretchTuningView"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_00858d80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02648ae8;
  this_ptr[2] = &g_02649418;
  this_ptr[0x27] = &g_02649458;
  FUN_008592a0();
  FUN_00859590();
  *(void*)(this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273c193 == '\0') {
    FUN_00859880();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x154) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273c193 == '\0') {
    FUN_008599f0();
    FUN_00e87980();
  }
  FUN_00859b60();
  *(void*)(this_ptr + 0x2d) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273c193 == '\0') {
    FUN_00859de0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273c193 == '\0') {
    FUN_00859f50();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 001b3bf0
// ============================================================
// Function: FUN_001b3bf0
// Address: 001b3bf0
// Size: 1098 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "GNScroller"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_001b3bf0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001b40a0();
  this_ptr[0x3c] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0268ca58;
  this_ptr[2] = &g_0268d598;
  this_ptr[0x3c] = &g_0268d5d8;
  FUN_001b44b0();
  *(void*)(this_ptr + 0x3e) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e90ab == '\0') {
    FUN_001b4790();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 500) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e90ab == '\0') {
    FUN_001b4900();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1f5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e90ab == '\0') {
    FUN_001b4a70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1f6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e90ab == '\0') {
    FUN_001b4be0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0038c320
// ============================================================
// Function: FUN_0038c320
// Address: 0038c320
// Size: 747 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "GNHeartbeatHandler"
//   "_isPlaybackButtonPressed"
//   "_lastShouldObserverOurselfTime"
//   "_didRequestPlayBack"
//   "double"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0038c320(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_001b2fa0();
  this_ptr[0x3b] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026696e8;
  this_ptr[2] = &g_0266a2b0;
  this_ptr[0x3b] = &g_0266a2f0;
  FUN_0038c6b0();
  *(void*)(this_ptr + 0x3d) = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3e] = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3f) = 0;
  lVar2 = FUN_0038a820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01e731f0
// ============================================================
// Function: FUN_01e731f0
// Address: 01e731f0
// Size: 590 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "GNAnimationCenter"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_01e731f0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_48;
  void*local_28;
  
  // [STATIC_INIT: property registration]
  if (g_028015eb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_28 = (void*)0x0;
    if (1 < g_02802630) {
      local_28 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00d4ff80();
    // [STATIC_INIT: property registration]
    FUN_00e87c40();
    FUN_01e7a560();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_28 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}



// ============================================================
// 0055f640
// ============================================================
// Function: FUN_0055f640
// Address: 0055f640
// Size: 590 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MDAnimationCenter"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0055f640(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_48;
  void*local_28;
  
  // [STATIC_INIT: property registration]
  if (g_0270f0eb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_28 = (void*)0x0;
    if (1 < g_02802630) {
      local_28 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00d4ff80();
    // [STATIC_INIT: property registration]
    FUN_00e87c40();
    FUN_005745f0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_28 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}



// ============================================================
// 00571120
// ============================================================
// Function: FUN_00571120
// Address: 00571120
// Size: 997 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MDWelcomePanelController"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_00571120(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0250b9a8;
  this_ptr[0xe] = &g_0250bfa8;
  FUN_00571580();
  FUN_005718b0();
  FUN_00571be0();
  this_ptr[0x12] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270e8f3 == '\0') {
    FUN_00571f10();
    FUN_00e87980();
  }
  this_ptr[0x13] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270e8f3 == '\0') {
    FUN_005720a0();
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270e8f3 == '\0') {
    FUN_00572230();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0057e5d0
// ============================================================
// Function: FUN_0057e5d0
// Address: 0057e5d0
// Size: 777 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MDProgressViewController"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0057e5d0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024d2f10;
  this_ptr[0xe] = &g_024d3518;
  *(void*)(this_ptr + 0xf) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e410b == '\0') {
    FUN_0057e970();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x79) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e410b == '\0') {
    FUN_0057eb00();
    FUN_00e87980();
  }
  FUN_0057ec90();
  FUN_0057efc0();
  FUN_0057f2f0();
  FUN_0057f620();
  FUN_0057f950();
  return;
}



// ============================================================
// 00bf5290
// ============================================================
// Function: FUN_00bf5290
// Address: 00bf5290
// Size: 515 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_00bf5290(void)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  
  lVar2 = FUN_00c42440();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0017fbd0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < g_02802630) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_001bcb00();
    // [STATIC_INIT: property registration]
    FUN_00e87c40();
    FUN_00d50c00();
    FUN_00e87770();
    FUN_00e87920();
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}



// ============================================================
// 018b8a80
// ============================================================
// Function: FUN_018b8a80
// Address: 018b8a80
// Size: 551 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUDebugBitmap"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_018b8a80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02608b78;
  this_ptr[2] = &g_026094a8;
  this_ptr[0x27] = &g_026094e8;
  FUN_018b8d40();
  FUN_018b9000();
  FUN_018b92c0();
  FUN_018b9580();
  this_ptr[0x2c] = 0;
  // [STATIC_INIT: property registration]
  if (g_027dc583 == '\0') {
    FUN_018b9840();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 003ae120
// ============================================================
// Function: FUN_003ae120
// Address: 003ae120
// Size: 501 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_003ae120(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02502630;
  this_ptr[0xe] = &g_02502c10;
  FUN_003ae4b0();
  FUN_003ae7e0();
  FUN_003aeb10();
  FUN_003aee40();
  FUN_003af170();
  FUN_003af4a0();
  FUN_003af7d0();
  FUN_003afb00();
  FUN_003afe30();
  FUN_003b0160();
  FUN_003b0490();
  FUN_003b0750();
  FUN_003b0a10();
  FUN_003b0d40();
  return;
}



// ============================================================
// 0038c010
// ============================================================
// Function: FUN_0038c010
// Address: 0038c010
// Size: 510 bytes
// Class: GNHeartbeatHandler
// === GNHeartbeatHandler properties ===
//   bool            _isPlaybackButtonPressed
//   double          _lastShouldObserverOurselfTime
//   bool            _didRequestPlayBack
//   bool            _isBordered
//   bool            _isDefaultButton
//   GNPoint         _imageOffset
//   double          _flashingTime
//   bool            _showsStereo
//   bool            _timerRegistered
//   GNCoord         _left
//   GNCoord         _right
//   GNCoord         _length
//   double          _leftTime
//   double          _rightTime
//   double          _delay
//   bool            _showRatios
//   bool            _showAllRatios
//   bool            _showRatioModeButton
//   float           _minFloatValue
//   float           _maxFloatValue
//   float           _slideRuleAnchorOffset
//   float           _lastAnchorOffsetChangeRatio
//   float           _slideRuleAnchorOffsetMinRatio
//   float           _slideRuleAnchorOffsetMaxRatio
//   float           _movingResolutionRatio
//   float           _movingFineResolutionRatio
//                   _currentLabel1
//                   _currentLabel2
//                   _maxLabel1
//                   _maxLabel2
//   ... +1 more


void FUN_0038c010(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint64_t local_268;
  uint64_t local_250;
  
  lVar1 = FUN_0038a820();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_0017e420();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0038c320();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_01c32440();
    if (local_250 != 0) {
      FUN_00d50b20();
    }
    if (local_268 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}

