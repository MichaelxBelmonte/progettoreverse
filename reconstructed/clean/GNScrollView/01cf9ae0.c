// Function: FUN_01cf9ae0
// Address: 01cf9ae0
// Size: 664 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cf9ae0(uint64_t param_1)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *this_ptr;
  float fVar7;
  uint64_t in_XMM0_Qb;
  uint8_t auVar9 [16];
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t local_48 [8];
  uint64_t uStack_40;
  int64_t *local_38;
  char local_30;
  
  uStack_40 = in_XMM0_Qb;
  local_48 = (uint8_t  [8])param_1;
  plVar1 = (int64_t *)this_ptr[6];
  if ((g_026f0e00 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  lVar4 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    lVar4 = g_02802688;
    if (cVar5 != '\0') {
      lVar4 = this_ptr[6];
    }
  }
  if (lVar4 == 0) {
    cVar5 = '\0';
    bVar3 = false;
  }
  else {
    FUN_00d50b00();
    cVar5 = FUN_01d951e0();
    if (cVar5 == '\0') {
      bVar3 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x640))();
      fVar7 = (float)(**(code **)(*local_38 + 0x580))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar9._4_12_ = local_48._4_12_;
      auVar9._0_4_ = (float)param_1 - fVar7;
      _local_48 = blendps(auVar9,g_0241fd60,0xe);
      bVar3 = true;
    }
    cVar5 = FUN_01d95200();
    if (cVar5 != '\0') {
      blendps(_local_48,ZEXT416(g_02391078),1);
    }
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x27] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x5c0))();
    local_48 = (uint8_t  [8])(**(code **)(*(int64_t *)this_ptr[0x27] + 0x5c8))();
    uStack_40 = extraout_XMM0_Qb;
    if (bVar3) {
      if (cVar5 == '\0') {
        (**(code **)(*this_ptr + 0x640))();
        uVar8 = (**(code **)(*local_38 + 0x580))();
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        auVar2._8_8_ = extraout_XMM0_Qb_00;
        auVar2._0_8_ = uVar8;
        auVar12._4_12_ = auVar2._4_12_;
        auVar12._0_4_ = (float)uVar8 + 0.0;
        insertps(_local_48,auVar12,0x10);
      }
    }
    else if (cVar5 != '\0') {
      (**(code **)(*this_ptr + 0x640))();
      fVar7 = (float)(**(code **)(*local_38 + 0x578))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_48._4_4_ = (uint32_t)((uint64_t)local_48 >> 0x20);
      uStack_40._4_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar10._4_4_ = local_48._4_4_;
      auVar10._0_4_ = local_48._4_4_;
      auVar10._8_4_ = uStack_40._4_4_;
      auVar10._12_4_ = uStack_40._4_4_;
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = (float)local_48._4_4_ + fVar7;
      insertps(auVar11,auVar11,0x1d);
    }
  }
  return;
}

