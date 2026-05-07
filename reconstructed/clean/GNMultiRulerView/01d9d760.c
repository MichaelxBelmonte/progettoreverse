// Function: FUN_01d9d760
// Address: 01d9d760
// Size: 1030 bytes
// Class: GNMultiRulerView

void FUN_01d9d760(uint64_t param_1)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  byte bVar3;
  bool bVar4;
  char cVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  bool bVar10;
  float fVar12;
  uint64_t uVar11;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  int64_t local_40;
  char local_38;
  
  fVar12 = (float)((uint64_t)param_1 >> 0x20);
  if (g_028b8978 != '\0') {
    return;
  }
  g_028b8978 = 1;
  (**(code **)(*this_ptr + 0x918))();
  if (local_40 == 0) {
    bVar3 = 1;
    lVar8 = 0;
    bVar4 = false;
  }
  else {
    lVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = 0;
      bVar4 = true;
    }
    else {
      bVar3 = 0;
      bVar4 = true;
    }
  }
  local_40 = *arg1;
  cVar5 = FUN_00d24090();
  if (cVar5 != '\0') {
    local_40 = *arg1;
    FUN_00d23d90();
    if (0 < *(int *)(lVar8 + 0xc)) {
      lVar7 = 0;
      lVar6 = 0;
      bVar9 = false;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar7 * 8);
        if (lVar6 == lVar1) {
          lVar1 = lVar6;
          bVar10 = bVar9;
          if ((!bVar9) && (lVar6 != 0)) {
            FUN_00d50b00();
            bVar10 = true;
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          bVar10 = true;
          if ((bVar9) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar9 = bVar10;
        lVar6 = lVar1;
        uVar11 = FUN_01cf5cf0();
        auVar13._0_4_ = (float)uVar11 + (float)param_1;
        auVar13._4_4_ = (float)((uint64_t)uVar11 >> 0x20) + fVar12;
        auVar13._8_4_ = extraout_XMM0_Dc + in_XMM0_Dc;
        auVar13._12_4_ = extraout_XMM0_Dd + in_XMM0_Dd;
        auVar14._8_4_ = extraout_XMM0_Dc;
        auVar14._0_8_ = uVar11;
        auVar14._12_4_ = extraout_XMM0_Dd;
        auVar14 = blendps(auVar13,auVar14,2);
        FUN_01cf5ff0(auVar14._0_4_);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 0xc));
      goto LAB_01d9d938;
    }
  }
  bVar9 = false;
  lVar6 = 0;
LAB_01d9d938:
  (**(code **)(*this_ptr + 0x920))();
  if (local_40 == lVar8) {
    bVar10 = local_40 != 0;
    local_40 = lVar8;
    if ((bool)(bVar3 & bVar10)) {
      bVar4 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar10 = (bool)(bVar4 & lVar8 != 0);
    bVar4 = true;
    if (bVar10) {
      FUN_00d50b20();
    }
  }
  cVar5 = FUN_00d24090();
  if ((cVar5 != '\0') && (FUN_00d23d90(), 0 < *(int *)(local_40 + 0xc))) {
    lVar8 = 0;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar8 * 8);
      if (lVar6 == lVar7) {
        lVar7 = lVar6;
        bVar10 = bVar9;
        if ((!bVar9) && (lVar6 != 0)) {
          FUN_00d50b00();
          bVar10 = true;
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        bVar10 = true;
        if ((bVar9) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar9 = bVar10;
      lVar6 = lVar7;
      uVar11 = FUN_01cf5cf0();
      auVar15._0_4_ = (float)uVar11 + (float)param_1;
      auVar15._4_4_ = (float)((uint64_t)uVar11 >> 0x20) + fVar12;
      auVar15._8_4_ = extraout_XMM0_Dc_00 + in_XMM0_Dc;
      auVar15._12_4_ = extraout_XMM0_Dd_00 + in_XMM0_Dd;
      auVar2._8_4_ = extraout_XMM0_Dc_00;
      auVar2._0_8_ = uVar11;
      auVar2._12_4_ = extraout_XMM0_Dd_00;
      auVar14 = blendps(auVar15,auVar2,0xd);
      FUN_01cf5ff0(auVar14._0_4_);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(local_40 + 0xc));
  }
  g_028b8978 = 0;
  if ((bVar9) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

