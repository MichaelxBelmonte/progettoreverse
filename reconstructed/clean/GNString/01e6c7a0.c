// Function: FUN_01e6c7a0
// Address: 01e6c7a0
// Size: 709 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e6c7a0(float param_1)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  bool bVar8;
  bool bVar9;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  int64_t lVar11;
  uint64_t uVar12;
  float fVar15;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar13 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar14 [16];
  uint32_t uVar16;
  float fVar17;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t local_40;
  uint8_t local_38;
  uint64_t extraout_XMM0_Qb_01;
  
  FUN_01d8c6e0();
  uVar12 = FUN_01e59080();
  uStack_50 = (uint32_t)extraout_XMM0_Qb;
  uStack_4c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  auVar5._8_4_ = uStack_50;
  auVar5._0_8_ = uVar12;
  auVar5._12_4_ = uStack_4c;
  fVar15 = (float)((uint64_t)uVar12 >> 0x20);
  auVar13._4_4_ = fVar15;
  auVar13._0_4_ = fVar15 + param_1;
  auVar13._8_4_ = uStack_4c;
  auVar13._12_4_ = uStack_4c;
  auVar13 = insertps(auVar5,auVar13,0x10);
  FUN_01e5bc90(auVar13._0_8_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  uVar12 = FUN_01e59090();
  uStack_50 = (uint32_t)extraout_XMM0_Qb_00;
  uStack_4c = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  auVar6._8_4_ = uStack_50;
  auVar6._0_8_ = uVar12;
  auVar6._12_4_ = uStack_4c;
  fVar15 = (float)((uint64_t)uVar12 >> 0x20);
  fVar17 = fVar15 + param_1;
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar17;
  auVar2._8_4_ = uStack_4c;
  auVar2._12_4_ = uStack_4c;
  auVar13 = insertps(auVar6,auVar2,0x10);
  uVar16 = uStack_4c;
  FUN_01e5bcf0(auVar13._0_8_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x570))();
  (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
  FUN_01d8c6e0();
  auVar7._4_4_ = fVar15;
  auVar7._0_4_ = fVar17;
  auVar7._8_4_ = uStack_4c;
  auVar7._12_4_ = uVar16;
  auVar3._4_4_ = fVar15;
  auVar3._0_4_ = fVar15 + param_1;
  auVar3._8_4_ = uVar16;
  auVar3._12_4_ = uVar16;
  auVar13 = insertps(auVar7,auVar3,0x10);
  FUN_01e5bc80(auVar13._0_8_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x4a0))();
  if (local_40 == 0) {
    bVar9 = true;
    local_40 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar9 = false;
  }
  else {
    bVar9 = false;
  }
  if (*(int *)(local_40 + 0xc) < 1) {
    bVar8 = false;
    plVar10 = (int64_t *)0x0;
  }
  else {
    lVar11 = 0;
    plVar10 = (int64_t *)0x0;
    bVar8 = false;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + lVar11 * 8);
      if (plVar10 == plVar1) {
        if ((!bVar8) && (plVar10 != (int64_t *)0x0)) {
          bVar8 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar8) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar8 = true;
          plVar10 = plVar1;
        }
        else {
          bVar8 = true;
          plVar10 = plVar1;
        }
      }
      if (this_ptr != plVar10) {
        auVar14._0_8_ = (**(code **)(*plVar10 + 0x4d8))();
        auVar14._8_8_ = extraout_XMM0_Qb_01;
        fVar15 = (float)((uint64_t)auVar14._0_8_ >> 0x20);
        uVar16 = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
        auVar4._4_4_ = fVar15;
        auVar4._0_4_ = fVar15 + param_1;
        auVar4._8_4_ = uVar16;
        auVar4._12_4_ = uVar16;
        auVar13 = insertps(auVar14,auVar4,0x10);
        (**(code **)(*plVar10 + 0x4d0))(auVar13._0_8_);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(local_40 + 0xc));
  }
  (**(code **)(*(int64_t *)*arg1 + 0x570))();
  if ((bVar8) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    FUN_00d50b20();
  }
  return;
}

