// Function: FUN_01ed4f50
// Address: 01ed4f50
// Size: 1002 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed4f50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  void*arg1;
  int64_t *this_ptr;
  int iVar2;
  int64_t *plVar3;
  bool bVar4;
  uint64_t uVar5;
  uint8_t in_XMM0 [16];
  uint8_t auVar6 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  float fVar10;
  uint8_t in_XMM1 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  int64_t local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  
  fVar1 = *(float *)(this_ptr + 0x5a);
  auVar6._4_12_ = in_XMM0._4_12_;
  auVar6._0_4_ = in_XMM0._0_4_ - fVar1;
  uVar5 = auVar6._0_8_;
  fVar10 = in_XMM1._4_4_;
  auVar12._4_4_ = fVar10;
  auVar12._0_4_ = fVar10;
  auVar12._8_4_ = in_XMM1._12_4_;
  auVar12._12_4_ = in_XMM1._12_4_;
  auVar8 = blendps(in_XMM1,ZEXT416((uint)fVar1),1);
  if (fVar1 < fVar10) {
    auVar11._4_12_ = auVar12._4_12_;
    auVar11._0_4_ = (fVar10 - fVar1) * g_0239011c;
    auVar12 = roundss(auVar11,auVar11,9);
    auVar6 = insertps(auVar6,auVar12,0x10);
    uVar5 = auVar6._0_8_;
    auVar9._0_4_ = auVar8._0_4_;
    auVar9._4_4_ = auVar9._0_4_;
    auVar9._8_4_ = auVar8._8_4_;
    auVar9._12_4_ = auVar9._8_4_;
    auVar8 = auVar9;
  }
  iVar2 = (int)param_2;
  if (*(char *)(*(int64_t *)(this_ptr[0x58] + 0x10) + 4 + (int64_t)iVar2 * 8) != '\0') {
    (**(code **)(*this_ptr + 0x640))();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x3f0))
              (0,0x14,*(void*)
                       (*(int64_t *)(this_ptr[0x58] + 0x10) + 5 + (int64_t)iVar2 * 8),1);
    if (*(int *)((int64_t)this_ptr + 0x2cc) == iVar2) {
      (**(code **)(*local_40 + 0x390))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      plVar3 = (int64_t *)*arg1;
      uVar5 = (**(code **)(*this_ptr + 0xa68))();
      auVar6 = auVar8;
      auVar7._0_8_ = (**(code **)(*this_ptr + 0xa68))();
      auVar7._8_8_ = extraout_XMM0_Qb_00;
      blendps(auVar6,auVar8,2);
      auVar8._8_8_ = extraout_XMM0_Qb;
      auVar8._0_8_ = uVar5;
      blendps(auVar8,auVar7,2);
      (**(code **)(*plVar3 + 0x3c8))();
    }
    FUN_00d50b20();
    return;
  }
  if (this_ptr[0x3e] == 0) {
    return;
  }
  plVar3 = (int64_t *)this_ptr[0x55];
  if (plVar3 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b00(uVar5,param_2,param_3,param_4,auVar8);
  if ((iVar2 < 0) || (*(int *)(this_ptr[0x57] + 0xc) <= iVar2)) {
    local_88 = 0;
  }
  else {
    local_88 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + (param_2 & 0xffffffff) * 8);
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  local_80 = '\x01';
  (**(code **)(*plVar3 + 0x50))(&local_88,&stack0xffffffffffffffb0);
  if (local_40 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else {
    if (local_38 != '\0') {
      bVar4 = false;
      goto LAB_01ed5290;
    }
    FUN_00d50b00();
    plVar3 = local_40;
  }
  bVar4 = plVar3 == (int64_t *)0x0;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ed5290:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_01d526f0();
    FUN_00d05510();
    (**(code **)(*(int64_t *)*arg1 + 0x400))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

