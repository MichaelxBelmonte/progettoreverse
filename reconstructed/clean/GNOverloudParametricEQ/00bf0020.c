// Function: FUN_00bf0020
// Address: 00bf0020
// Size: 1373 bytes
// Class: GNOverloudParametricEQ

void FUN_00bf0020(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  int64_t *plVar5;
  int64_t this_ptr;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar9;
  float fVar10;
  float fVar11;
  uint8_t auVar12 [16];
  int64_t local_68;
  char local_60;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t **)(this_ptr + 0x70) == (int64_t *)0x0) {
    return;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x4e0))();
  plVar1 = *(int64_t **)(this_ptr + 0x78);
  plVar5 = plVar1;
  if (plVar1 == local_38) goto LAB_00bf00ac;
  plVar5 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_00bf0067;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    *(int64_t **)(this_ptr + 0x78) = local_38;
  }
  else {
    local_30 = '\0';
LAB_00bf0067:
    *(int64_t **)(this_ptr + 0x78) = plVar5;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar5 = local_38;
  }
LAB_00bf00ac:
  if ((local_30 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00afe870();
    (**(code **)(*plVar5 + 0x18))();
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    if (plVar1 == plVar5) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0x78) = plVar5;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x5c8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e53c20();
  uVar7 = (**(code **)(*local_38 + 0x528))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = FUN_01e5eff0();
  fVar10 = (float)((uint64_t)uVar8 >> 0x20);
  fVar9 = fVar10 + g_0241b664;
  fVar6 = (float)uVar8 + g_0241b664;
  auVar12._8_4_ = extraout_XMM0_Dc;
  auVar12._0_8_ = uVar7;
  auVar12._12_4_ = extraout_XMM0_Dd;
  if (fVar6 < (float)uVar7) {
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = extraout_XMM0_Dc_00;
    auVar3._12_4_ = extraout_XMM0_Dd_00;
    auVar12 = blendps(auVar12,auVar3,1);
  }
  uVar7 = auVar12._0_8_;
  if (fVar9 < auVar12._4_4_) {
    auVar4._4_4_ = fVar10;
    auVar4._0_4_ = fVar9;
    auVar4._8_4_ = extraout_XMM0_Dd_00;
    auVar4._12_4_ = extraout_XMM0_Dd_00;
    auVar12 = insertps(auVar12,auVar4,0x10);
    uVar7 = auVar12._0_8_;
  }
  fVar6 = (float)uVar7;
  if ((((float)g_023dcce4 != fVar6) || (NAN((float)g_023dcce4) || NAN(fVar6))) ||
     ((float)((uint64_t)g_023dcce4 >> 0x20) != (float)((uint64_t)uVar7 >> 0x20))) {
    FUN_01e5bc90(fVar6);
  }
  FUN_01e53c20();
  (**(code **)(*local_38 + 0x4d8))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e5bc80(fVar9);
  FUN_01e5ca90();
  FUN_01d8c700();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x78);
  FUN_01e5ca90();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  fVar6 = (float)g_023dccf4;
  fVar11 = (float)((uint64_t)g_023dccf4 >> 0x20);
  (**(code **)(*plVar1 + 0x4c8))((int)g_023dccec);
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  (**(code **)(*local_38 + 0x4d8))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((fVar9 != fVar6) || (NAN(fVar9) || NAN(fVar6))) || (fVar10 != fVar11)) {
    FUN_01e5ca90();
    (**(code **)(*local_38 + 0x578))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    (**(code **)(*local_38 + 0x570))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e5bc80(fVar6);
    FUN_01e5ca90();
    (**(code **)(*local_38 + 0x570))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 1000))();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01e5a050();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e5ca90();
  FUN_01d8c700();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e5ca90();
  lVar2 = *(int64_t *)(this_ptr + 0x78);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d8c720();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

