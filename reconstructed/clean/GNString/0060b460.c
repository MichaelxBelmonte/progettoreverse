// Function: FUN_0060b460
// Address: 0060b460
// Size: 1013 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0060b460(int param_1,uint64_t param_2,uint8_t param_3)

{
  uint8_t auVar1 [16];
  int iVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  char *pcVar7;
  void*in_RDX;
  void*arg1;
  int64_t *this_ptr;
  int64_t **pplVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint64_t in_XMM1_Qb;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  uint64_t local_78;
  int64_t local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_78._0_4_ = param_1;
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x370))();
  local_48 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (int64_t)&g_025057e8;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(void*)((int64_t)plVar6 + 0x2d) = 0;
  *(void*)((int64_t)plVar6 + 0x35) = 0;
  FUN_00d500e0();
  plVar6[2] = (int64_t)this_ptr;
  *(void*)((int64_t)plVar6 + 0x3c) = param_3;
  local_98 = *arg1;
  local_90 = 0;
  local_88 = *in_RDX;
  local_80 = 0;
  uVar9 = FUN_00608140(&local_88,&local_98);
  iVar2 = (int)local_78;
  local_38[0] = '\0';
  local_40 = plVar6;
  FUN_00d23370(uVar9,(int)local_78);
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((this_ptr[0x33] == 0) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
    this_ptr[0x33] = (int64_t)plVar6;
  }
  if (*(int *)(this_ptr[0x32] + 0xc) == 0) {
    local_38[0] = '\0';
    local_40 = plVar6;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d23310();
    plVar3 = local_40;
    pcVar7 = local_38;
    if (local_38[0] == '\0') {
      pcVar7 = &local_58;
    }
    local_58 = local_38[0];
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == '\0') {
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar3;
    iVar5 = FUN_00d237a0();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (iVar5 + -1 == iVar2) {
      FUN_00d216c0();
      local_38[0] = '\0';
      local_40 = plVar6;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_006083c0();
  if (*(int *)(this_ptr[0x31] + 0xc) != 2) goto LAB_0060b7df;
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar6 = local_40;
  FUN_000a94a0();
  if (plVar6 == (int64_t *)0x0) {
LAB_0060b746:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0060b746;
  }
  plVar6 = *pplVar8;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_01e40eb0();
    local_68 = 0;
    local_60 = '\0';
    FUN_006c5ee0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e40eb0();
    FUN_006c4ec0();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0060b7df:
  local_78 = (**(code **)(*this_ptr + 0x4d8))();
  uVar10 = (**(code **)(*this_ptr + 0x528))();
  auVar12._8_8_ = in_XMM1_Qb;
  auVar12._0_8_ = param_2;
  auVar11._8_4_ = extraout_XMM0_Dc;
  auVar11._0_8_ = uVar10;
  auVar11._12_4_ = extraout_XMM0_Dd;
  if ((float)uVar10 <= (float)param_2) {
    auVar11 = auVar12;
  }
  auVar1._8_4_ = extraout_XMM0_Dc;
  auVar1._0_8_ = uVar10;
  auVar1._12_4_ = extraout_XMM0_Dd;
  auVar12 = blendps(auVar11,auVar1,2);
  (**(code **)(*this_ptr + 0x4d0))((int)local_78,auVar12._0_8_);
  FUN_00d50b20();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

