// Function: FUN_01e6f570
// Address: 01e6f570
// Size: 1052 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e6f570(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_XMM1_Dc;
  float fVar19;
  float fVar20;
  float in_XMM1_Dd;
  float fVar21;
  float fVar22;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  int64_t local_a8;
  char local_a0;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  
  fVar16 = (float)((uint64_t)param_2 >> 0x20);
  fVar13 = (float)param_2;
  lVar9 = *arg1;
  lVar1 = this_ptr[0x28];
  if (lVar1 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x28] = lVar9;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  if (local_48 == (int64_t *)0x0) {
    bVar3 = true;
    plVar6 = (int64_t *)0x0;
  }
  else {
    plVar6 = local_48;
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
  }
  FUN_01d8c6e0();
  lVar9 = FUN_01e59910();
  this_ptr[0x29] = lVar9;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x4a0))();
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  FUN_01dcb110();
  local_50 = local_48;
  if (local_48 == (int64_t *)0x0) {
    bVar4 = true;
    local_50 = (int64_t *)0x0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = *(uint *)((int64_t)local_50 + 0xc);
  if ((int)uVar7 < 1) {
    bVar5 = false;
    plVar8 = (int64_t *)0x0;
  }
  else {
    lVar9 = (uint64_t)uVar7 + 1;
    plVar8 = (int64_t *)0x0;
    bVar5 = false;
    do {
      uVar7 = uVar7 - 1;
      plVar2 = *(int64_t **)(local_50[2] + (uint64_t)uVar7 * 8);
      if (plVar8 == plVar2) {
        if ((!bVar5) && (plVar8 != (int64_t *)0x0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar5 = true;
          plVar8 = plVar2;
        }
        else {
          bVar5 = true;
          plVar8 = plVar2;
        }
      }
      if ((int64_t *)*arg1 != plVar8) {
        FUN_00d21140();
        (**(code **)(*plVar8 + 0x478))();
      }
      lVar9 = lVar9 + -1;
    } while (1 < lVar9);
  }
  uVar10 = FUN_01e3f820();
  fVar14 = fVar13;
  fVar17 = fVar16;
  fVar19 = in_XMM1_Dc;
  fVar21 = in_XMM1_Dd;
  (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
  fVar15 = fVar14;
  fVar18 = fVar17;
  fVar20 = fVar19;
  fVar22 = fVar21;
  (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
  auVar12._8_8_ = extraout_XMM0_Qb;
  auVar12._0_8_ = uVar10;
  auVar11._0_4_ = fVar14 + (float)uVar10;
  auVar11._4_4_ = fVar17 + (float)((uint64_t)uVar10 >> 0x20);
  auVar11._8_4_ = fVar19 + (float)extraout_XMM0_Qb;
  auVar11._12_4_ = fVar21 + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar12 = blendps(auVar11,auVar12,0xd);
  auVar24._4_4_ = fVar16;
  auVar24._0_4_ = fVar13;
  auVar24._8_4_ = in_XMM1_Dc;
  auVar24._12_4_ = in_XMM1_Dd;
  auVar23._0_4_ = fVar13 - fVar15;
  auVar23._4_4_ = fVar16 - fVar18;
  auVar23._8_4_ = in_XMM1_Dc - fVar20;
  auVar23._12_4_ = in_XMM1_Dd - fVar22;
  auVar24 = blendps(auVar23,auVar24,0xd);
  (**(code **)(*this_ptr + 0x4d0))(auVar12._0_8_,auVar24._0_4_);
  FUN_00d50b00();
  (**(code **)(*plVar6 + 0x450))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar5) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  return;
}

