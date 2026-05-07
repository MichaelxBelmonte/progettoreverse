// Function: FUN_00609c50
// Address: 00609c50
// Size: 636 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00609c50(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  char cVar4;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint uVar6;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint64_t in_XMM1_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(*(int64_t *)(this_ptr[0x31] + 0x10) + (int64_t)unaff_ESI * 8);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = plVar1;
  FUN_00d23f50();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = '\0';
  local_40 = plVar1;
  cVar4 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    local_38 = '\0';
    local_40 = plVar1;
    FUN_00d23f50();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)this_ptr[0x33] == plVar1) {
    uVar6 = unaff_ESI - (uint)(*(int *)(this_ptr[0x31] + 0xc) == unaff_ESI);
    if ((-1 < (int)uVar6) &&
       (plVar2 = *(int64_t **)(*(int64_t *)(this_ptr[0x31] + 0x10) + (uint64_t)uVar6 * 8),
       plVar1 != plVar2)) {
      plVar5 = plVar1;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
        plVar5 = (int64_t *)this_ptr[0x33];
      }
      this_ptr[0x33] = (int64_t)plVar2;
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_006083c0();
  if (*(int *)(this_ptr[0x31] + 0xc) != 1) goto LAB_00609e0a;
  pplVar7 = &local_40;
  FUN_01e40eb0();
  plVar2 = local_40;
  FUN_000a94a0();
  if (plVar2 == (int64_t *)0x0) {
LAB_00609d71:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00609d71;
  }
  plVar2 = *pplVar7;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_01e40eb0();
    FUN_006c5ee0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e40eb0();
    FUN_006c4ec0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00609e0a:
  uVar8 = (**(code **)(*this_ptr + 0x4d8))();
  uVar9 = (**(code **)(*this_ptr + 0x528))();
  auVar11._8_8_ = in_XMM1_Qb;
  auVar11._0_8_ = param_2;
  auVar10._8_4_ = extraout_XMM0_Dc;
  auVar10._0_8_ = uVar9;
  auVar10._12_4_ = extraout_XMM0_Dd;
  if ((float)uVar9 <= (float)param_2) {
    auVar10 = auVar11;
  }
  auVar3._8_4_ = extraout_XMM0_Dc;
  auVar3._0_8_ = uVar9;
  auVar3._12_4_ = extraout_XMM0_Dd;
  auVar11 = blendps(auVar10,auVar3,2);
  (**(code **)(*this_ptr + 0x4d0))(uVar8,auVar11._0_8_);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

