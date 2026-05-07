// Function: FUN_01c2dc30
// Address: 01c2dc30
// Size: 2195 bytes
// Class: GNCoord
// === GNCoord properties ===
//   GNInt           _loopSetOrderIndex
//   float           _tempo
//   GNCoord         _minWidthToDisplayLoopId
//   float           _matchGrade
//   GNCoord         _minIconWidth
//                   _drawsHorizontalGrid
//                   _drawsVerticalGrid
//                   _intercellSpacing
//                   _valueLists
//                   _rowCount
//                   _needsReload
//                   _userObject
//                   _autoresizesAllColumnsToFit
//                   _selectedRows
//                   _explititlySelectedRows
//                   _lastSelectedRow


void FUN_01c2dc30(void)

{
  int64_t lVar1;
  byte bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int64_t local_200;
  char local_1f8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_190;
  char local_188;
  int64_t local_170;
  char local_168;
  int64_t local_150;
  char local_148;
  int64_t local_120;
  char local_118;
  int64_t local_100;
  char local_f8;
  int64_t local_e0;
  char local_d8;
  int64_t local_b0;
  char local_a8;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  
  FUN_01c10f60();
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_01c2f350();
  (**(code **)(*plVar5 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x20);
  *(int64_t **)(this_ptr + 0x20) = plVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb030;
  if (g_027eb030 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  lVar4 = local_50;
  if (local_50 == 0) {
    bVar2 = 1;
    bVar6 = 0;
    bVar7 = 0;
    bVar3 = false;
    bVar8 = false;
    lVar4 = 0;
  }
  else if (local_48 == '\0') {
    FUN_00d50b00();
    bVar6 = 1;
    bVar7 = 1;
    bVar2 = 0;
    bVar3 = true;
    bVar8 = true;
  }
  else {
    bVar2 = 0;
    bVar6 = 1;
    bVar7 = 1;
    bVar3 = true;
    bVar8 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    bVar7 = bVar6;
    bVar8 = bVar3;
  }
  lVar1 = g_027eb038;
  if (g_027eb038 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb040;
  if (g_027eb040 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb048;
  if (g_027eb048 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb050;
  if (g_027eb050 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bool)(bVar2 & local_50 != 0)) {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if ((bool)(bVar7 & lVar4 != 0)) {
      FUN_00d50b20();
      bVar8 = true;
      lVar4 = local_50;
    }
    else {
      bVar8 = true;
      lVar4 = local_50;
    }
  }
  else if ((bool)(bVar7 & lVar4 != 0)) {
    FUN_00d50b20();
    bVar8 = true;
    lVar4 = local_50;
  }
  else {
    bVar8 = true;
    lVar4 = local_50;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb058;
  if (g_027eb058 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb060;
  if (g_027eb060 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb068;
  if (g_027eb068 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb070;
  if (g_027eb070 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bVar8) || (local_50 == 0)) {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if ((!bVar8) || (lVar4 == 0)) goto LAB_01c2e100;
    FUN_00d50b20();
    lVar4 = local_50;
    bVar8 = true;
  }
  else if ((bVar8) && (lVar4 != 0)) {
    FUN_00d50b20();
    lVar4 = local_50;
    bVar8 = true;
  }
  else {
LAB_01c2e100:
    lVar4 = local_50;
    bVar8 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb078;
  if (g_027eb078 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb070;
  if (g_027eb070 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb080;
  if (g_027eb080 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb088;
  if (g_027eb088 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if (local_50 == lVar4) {
    if ((bVar8) || (local_50 == 0)) {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar8 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      if ((bVar8) && (lVar4 != 0)) {
        FUN_00d50b20();
        lVar4 = local_50;
        bVar8 = true;
        goto joined_r0x01c2e4a6;
      }
    }
    else if ((bVar8) && (lVar4 != 0)) {
      FUN_00d50b20();
      lVar4 = local_50;
      bVar8 = true;
      goto joined_r0x01c2e4a6;
    }
    bVar8 = true;
    lVar4 = local_50;
  }
joined_r0x01c2e4a6:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb090;
  if (g_027eb090 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb088;
  if (g_027eb088 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027eb098;
  if (g_027eb098 != 0) {
    FUN_00d50b00();
  }
  FUN_01c2da40();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar8) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}

