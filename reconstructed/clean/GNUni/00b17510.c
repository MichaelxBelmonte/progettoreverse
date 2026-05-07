// Function: FUN_00b17510
// Address: 00b17510
// Size: 2062 bytes
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


void FUN_00b17510(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t local_188;
  int64_t local_180;
  int64_t local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((int64_t *)*this_ptr == g_028a0d90) {
    return;
  }
  if (g_028a0d90 == (int64_t *)0x0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*g_028a0d90 + 0x390))();
    if (cVar5 != '\0') {
      (**(code **)(*g_028a0d90 + 0x370))();
    }
    if (g_028a0d90 != (int64_t *)0x0) {
      if (g_028a0d90[0x15] != 0) {
        g_028a0d90[0x15] = 0;
        FUN_00d50b20();
        if (g_028a0d90 == (int64_t *)0x0) goto LAB_00b177c8;
      }
      cVar6 = (**(code **)(*g_028a0d90 + 0x5f8))();
      if (cVar6 != '\0') {
        (**(code **)(*g_028a0d90 + 0x5f0))();
      }
      if (g_028a0d90 != (int64_t *)0x0) {
        cVar6 = (**(code **)(*g_028a0d90 + 0x5f8))();
        if (cVar6 != '\0') {
          FUN_00b173b0();
          lVar1 = g_0275e018;
          if (g_0275e018 != 0) {
            FUN_00d50b00();
          }
          local_c8 = local_48;
          local_d0 = lVar1;
          FUN_00083ea0(2,&local_d0);
          FUN_000b4da0();
          lVar2 = local_38;
          if (local_30 == '\0') {
            if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_30 = '\0';
          }
          local_b8 = (int64_t *)&g_0253d630;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          local_b8 = &g_024c5048;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          lVar1 = g_0275e028;
          if (g_0275e028 != 0) {
            FUN_00d50b00();
          }
          lVar3 = g_0275e038;
          local_170 = lVar1;
          local_168 = '\x01';
          if (g_0275e038 != 0) {
            FUN_00d50b00();
          }
          local_160 = lVar3;
          local_158 = '\x01';
          FUN_01f6ca30();
          local_150 = lVar2;
          local_148 = '\0';
          (**(code **)(*local_b8 + 0x5d8))();
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        if (g_028a0d90 != (int64_t *)0x0) {
          FUN_00d403d0();
          local_140 = g_02703b00;
          if (g_02703b00 != 0) {
            FUN_00d50b00();
          }
          plVar7 = g_028a0d90;
          local_138 = '\x01';
          local_60 = 0;
          if (g_028a0d90 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_68 = plVar7;
          local_60 = '\x01';
          local_130 = 0;
          local_128 = '\0';
          FUN_00d40470(&local_130,&local_68,3,3);
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
LAB_00b177c8:
  (**(code **)(*(int64_t *)*this_ptr + 0x710))();
  plVar4 = g_028a0d90;
  plVar7 = (int64_t *)*this_ptr;
  if (g_028a0d90 != plVar7) {
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    g_028a0d90 = plVar7;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)*this_ptr;
  }
  if ((plVar7 != (int64_t *)0x0) && (g_028a0d98 == '\0')) {
    g_028a0d98 = '\x01';
    FUN_00e8cb90();
  }
  if (g_028a0d90[0x15] != 0) {
    g_028a0d90[0x15] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*g_028a0d90 + 0x5e8))();
  cVar6 = (**(code **)(*g_028a0d90 + 0x5f8))();
  if (cVar6 == '\0') {
    (**(code **)(*g_028a0d90 + 0x5e0))();
    lVar1 = g_0275e010;
    if (g_0275e010 != 0) {
      FUN_00d50b00();
    }
    FUN_00b173b0();
    lVar2 = g_0275e018;
    if (g_0275e018 != 0) {
      FUN_00d50b00();
    }
    local_d0 = local_48;
    local_188 = lVar1;
    local_180 = local_c8;
    local_178 = lVar2;
    FUN_00b8f440(&local_180,&local_188,&local_178,4);
    FUN_000b4da0();
    lVar3 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_007f76c0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_0275e028;
    if (g_0275e028 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_0275e040;
    local_120 = lVar1;
    local_118 = '\x01';
    if (g_0275e040 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar2;
    local_108 = '\x01';
    FUN_01f6ca30();
    local_100 = lVar3;
    local_f8 = '\0';
    (**(code **)(*local_b8 + 0x5d8))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*g_028a0d90 + 0x5d8))();
  }
  FUN_00d403d0();
  local_f0 = g_026d8900;
  if (g_026d8900 != 0) {
    FUN_00d50b00();
  }
  plVar7 = g_028a0d90;
  local_e8 = '\x01';
  local_50 = 0;
  if (g_028a0d90 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_58 = plVar7;
  local_50 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d40470(&local_e0,&local_58,3,3);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    (**(code **)(*g_028a0d90 + 0x368))();
  }
  return;
}

