// Function: FUN_00b182b0
// Address: 00b182b0
// Size: 1688 bytes
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


void FUN_00b182b0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  undefined7 uVar7;
  uint64_t uVar6;
  int64_t *this_ptr;
  uint64_t unaff_R14;
  int64_t lVar8;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint32_t local_7c;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d6f370();
  lVar8 = local_40;
  if (local_40 == 0) {
    lVar8 = 0;
    local_7c = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    lVar1 = g_0275e048;
  }
  else {
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_7c = 0;
    lVar1 = g_0275e048;
  }
  g_0275e048 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  local_118 = 0;
  local_110 = '\0';
  local_128 = lVar1;
  FUN_00d704d0(&local_118,&local_128);
  lVar1 = local_40;
  if (local_40 == 0) {
    local_60 = 0;
joined_r0x00b18395:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_60 = lVar1;
      goto joined_r0x00b18395;
    }
    local_38 = '\0';
    local_60 = local_40;
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0275e050;
  if (g_0275e050 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar2;
  local_100 = '\x01';
  local_f8 = 0;
  local_f0 = '\0';
  FUN_00d704d0(&local_f8,&local_108);
  local_58 = local_40;
  local_98 = local_40;
  if (local_40 == 0) {
    uVar6 = 0;
    local_58 = 0;
joined_r0x00b1847c:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = (undefined7)((uint64_t)lVar2 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar6 = CONCAT71(uVar7,1);
      goto joined_r0x00b1847c;
    }
    local_38 = '\0';
    uVar6 = CONCAT71(uVar7,1);
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  local_90 = uVar6;
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0275e058;
  if (g_0275e058 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar2;
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_00d704d0(&local_d8,&local_e8);
  lVar3 = local_40;
  if (local_40 == 0) {
    uVar6 = 0;
    local_50 = 0;
joined_r0x00b18563:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = (undefined7)((uint64_t)lVar2 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar6 = CONCAT71(uVar7,1);
      local_50 = lVar3;
      goto joined_r0x00b18563;
    }
    local_38 = '\0';
    uVar6 = CONCAT71(uVar7,1);
    local_50 = local_40;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  local_88 = uVar6;
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0275e060;
  if (g_0275e060 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  FUN_00d704d0(&local_b8,&local_c8);
  lVar4 = local_40;
  if (local_40 == 0) {
    uVar6 = 0;
    local_48 = 0;
joined_r0x00b1863c:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = (undefined7)((uint64_t)lVar2 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar6 = CONCAT71(uVar7,1);
      local_48 = lVar4;
      goto joined_r0x00b1863c;
    }
    local_38 = '\0';
    uVar6 = CONCAT71(uVar7,1);
    local_48 = local_40;
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_68 = uVar6;
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0275e068;
  if (g_0275e068 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  g_028a0dc8 = FUN_00d70f90();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*this_ptr + 0x5d0))();
  if (cVar5 == '\0') {
    if (local_60 != 0) {
      (**(code **)(*this_ptr + 0x600))();
      local_40 = local_60;
      local_38 = '\0';
      cVar5 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        FUN_00d45bc0();
        (**(code **)(*this_ptr + 0x398))();
        goto LAB_00b1879e;
      }
    }
    (**(code **)(*this_ptr + 0x610))();
    (**(code **)(*this_ptr + 0x398))();
  }
LAB_00b1879e:
  if (local_58 != 0) {
    (**(code **)(*this_ptr + 0x618))();
    local_40 = local_58;
    local_38 = '\0';
    cVar5 = FUN_00d23d70();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      FUN_00d45870();
      (**(code **)(*this_ptr + 0x620))();
      goto LAB_00b18833;
    }
  }
  (**(code **)(*this_ptr + 0x630))();
  (**(code **)(*this_ptr + 0x620))();
LAB_00b18833:
  if ((local_50 == 0) || (g_028a0da4 == '\0')) {
    (**(code **)(*this_ptr + 0x660))();
    (**(code **)(*this_ptr + 0x680))();
  }
  else {
    FUN_00d45870();
    (**(code **)(*this_ptr + 0x680))();
  }
  if ((local_48 == 0) || (g_028a0da4 == '\0')) {
    (**(code **)(*this_ptr + 0x668))();
    (**(code **)(*this_ptr + 0x688))();
  }
  else {
    FUN_00d45870();
    (**(code **)(*this_ptr + 0x688))();
  }
  if ((char)local_7c == '\0' && lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((lVar4 != 0) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = local_98;
  if ((lVar3 != 0) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar8 != 0) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

