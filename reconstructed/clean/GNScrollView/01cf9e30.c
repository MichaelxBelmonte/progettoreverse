// Function: FUN_01cf9e30
// Address: 01cf9e30
// Size: 518 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cf9e30(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  float local_48;
  float fStack_44;
  uint8_t local_28 [8];
  uint64_t uStack_20;
  
  fVar10 = (float)((uint64_t)param_2 >> 0x20);
  fVar8 = (float)param_2;
  if ((*(int64_t *)(this_ptr + 0x138) == 0) || (cVar4 = FUN_01e3f2b0(), cVar4 == '\0')) {
    return;
  }
  uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x4d8))();
  fVar9 = fVar8;
  fVar11 = fVar10;
  local_28 = (uint8_t  [8])(**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x5c8))();
  uStack_20 = extraout_XMM0_Qb;
  plVar1 = *(int64_t **)(this_ptr + 0x30);
  if ((g_026f0e00 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  lVar3 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = g_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(int64_t *)(this_ptr + 0x30);
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
    cVar4 = FUN_01d951e0();
    if (cVar4 == '\0') {
      FUN_01e3f820();
      auVar7._4_4_ = fVar11;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._12_4_ = in_XMM1_Dd;
      _local_28 = blendps(_local_28,auVar7,2);
    }
    cVar4 = FUN_01d95200();
    if (cVar4 == '\0') {
      FUN_01e3f820();
      auVar2._4_4_ = fVar11;
      auVar2._0_4_ = fVar9;
      auVar2._8_4_ = in_XMM1_Dc;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar7 = blendps(_local_28,auVar2,0xd);
      local_28 = auVar7._0_8_;
    }
    FUN_00d50b20();
  }
  local_48 = (float)uVar6;
  fStack_44 = (float)((uint64_t)uVar6 >> 0x20);
  if ((!NAN(local_48)) && (!NAN(fStack_44))) {
    if (((float)local_28._0_4_ == fVar8) &&
       ((!NAN((float)local_28._0_4_) && !NAN(fVar8) && (fVar10 == (float)local_28._4_4_)))) {
      return;
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x5d8))();
  FUN_01cf5a00();
  return;
}

