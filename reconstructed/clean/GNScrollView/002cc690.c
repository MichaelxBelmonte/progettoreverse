// Function: FUN_002cc690
// Address: 002cc690
// Size: 847 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "GNClipView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_002cc690(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  char cVar5;
  int iVar6;
  int iVar7;
  int64_t **pplVar8;
  int64_t this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  int64_t *local_40;
  char local_38;
  
  fVar14 = (float)((uint64_t)param_2 >> 0x20);
  uVar9 = (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x528))();
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar1 = local_40;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_002cc701:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_002cc701;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar2 = local_40;
  // [STATIC_INIT: property registration]
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_002cc785;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_002cc785:
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4d8))();
  fVar11 = fVar14;
  (**(code **)(*plVar2 + 0x4d8))();
  fVar12 = fVar11;
  (**(code **)(*plVar2 + 0x4d8))();
  fVar13 = fVar12;
  (**(code **)(*plVar1 + 0x4d8))();
  iVar6 = FUN_01dcea80();
  uVar10 = FUN_01dce510();
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  FUN_00d50b20();
  FUN_00d50b20();
  local_58 = (float)uVar10;
  uStack_54 = (uint32_t)((uint64_t)uVar10 >> 0x20);
  uStack_50 = (uint32_t)extraout_XMM0_Qb_00;
  uStack_4c = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  fVar14 = local_58 * (float)iVar7 + (fVar12 - fVar13) + (fVar14 - fVar11);
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = uVar9;
  if ((float)((uint64_t)uVar9 >> 0x20) < fVar14) {
    auVar3._4_4_ = uStack_54;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = uStack_50;
    auVar3._12_4_ = uStack_4c;
    insertps(auVar4,auVar3,0x10);
  }
  return;
}

