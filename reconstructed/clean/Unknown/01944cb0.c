// Function: FUN_01944cb0
// Address: 01944cb0
// Size: 510 bytes
// Class: Unknown

void FUN_01944cb0(int64_t param_1)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar8 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t local_48 [16];
  uint8_t local_38 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_04;
  
  lVar4 = this_ptr[0xb2];
  local_48._8_8_ = in_XMM0_Qb;
  local_48._0_8_ = param_1;
  if (lVar4 != 0) {
    local_38._0_8_ = this_ptr[0xb3];
    if ((((float)g_023dccdc != (float)local_38._0_8_) ||
        (NAN((float)g_023dccdc) || NAN((float)local_38._0_8_))) ||
       ((float)((uint64_t)g_023dccdc >> 0x20) != (float)((uint64_t)local_38._0_8_ >> 0x20))) {
      local_38._8_8_ = 0;
      uVar5 = FUN_01d526f0();
      insertps(local_38,*(void*)((int64_t)this_ptr + 0x59c),0x10);
      auVar7._0_8_ = FUN_01d526f0();
      auVar7._8_8_ = extraout_XMM0_Qb_00;
      auVar2._8_8_ = extraout_XMM0_Qb;
      auVar2._0_8_ = uVar5;
      blendps(auVar7,auVar2,0xd);
      uVar5 = FUN_01d526f0();
      uVar6 = FUN_01d526f0();
      auVar9._8_4_ = (int)extraout_XMM0_Qb_02;
      auVar9._0_8_ = uVar6;
      auVar9._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
      auVar3._8_8_ = extraout_XMM0_Qb_01;
      auVar3._0_8_ = uVar5;
      blendps(auVar9,auVar3,0xd);
      FUN_00d051c0();
      (**(code **)(*this_ptr + 0x618))();
      lVar4 = this_ptr[0xb2];
    }
  }
  lVar1 = *arg1;
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0xb2] = lVar1;
    if (lVar4 == 0) {
      this_ptr[0xb3] = param_1;
      lVar4 = lVar1;
      goto joined_r0x01944e9b;
    }
    FUN_00d50b20();
    lVar4 = this_ptr[0xb2];
  }
  this_ptr[0xb3] = param_1;
joined_r0x01944e9b:
  if ((lVar4 != 0) &&
     ((((float)g_023dccdc != (float)param_1 || (NAN((float)g_023dccdc) || NAN((float)param_1)))
      || ((float)((uint64_t)g_023dccdc >> 0x20) != (float)((uint64_t)param_1 >> 0x20))))) {
    local_38._0_8_ = FUN_01d526f0();
    local_38._8_8_ = extraout_XMM0_Qb_03;
    insertps(local_48,*(void*)((int64_t)this_ptr + 0x59c),0x10);
    auVar8._0_8_ = FUN_01d526f0();
    auVar8._8_8_ = extraout_XMM0_Qb_04;
    blendps(auVar8,local_38,0xd);
    local_38._0_8_ = FUN_01d526f0();
    local_38._8_8_ = extraout_XMM0_Qb_05;
    uVar5 = FUN_01d526f0();
    auVar10._8_4_ = (int)extraout_XMM0_Qb_06;
    auVar10._0_8_ = uVar5;
    auVar10._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_06 >> 0x20);
    blendps(auVar10,local_38,0xd);
    FUN_00d051c0();
                                            (**(code **)(*this_ptr + 0x618))();
    return;
  }
  return;
}

