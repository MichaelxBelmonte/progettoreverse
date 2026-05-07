// Function: FUN_01991270
// Address: 01991270
// Size: 1764 bytes
// Class: Unknown

void FUN_01991270(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  char cVar3;
  int iVar4;
  void*arg1;
  int64_t *this_ptr;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar8 [16];
  uint64_t uVar9;
  uint64_t in_XMM1_Qb;
  uint64_t uVar11;
  uint8_t auVar10 [16];
  uint32_t local_a8;
  uint32_t local_98;
  int64_t *local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  
  (**(code **)(*this_ptr + 0xb78))();
  if ((*(int *)(this_ptr[0x41] + 0xc) == 0) || (*(char *)((int64_t)this_ptr + 0x21c) == '\0')) {
    cVar3 = (**(code **)(&g_00001478 + *this_ptr))();
    if (cVar3 != '\0') {
      fVar5 = (float)(**(code **)(&UNK_00001448 + *this_ptr))();
      if ((fVar5 != 0.0) || (NAN(fVar5))) {
        (**(code **)(*this_ptr + 0xb88))();
      }
    }
  }
  else {
    (**(code **)(*this_ptr + 0xb80))();
  }
  uVar9 = param_2;
  uVar11 = in_XMM1_Qb;
  (**(code **)(&UNK_000015d0 + *this_ptr))(param_1);
  if (((char)this_ptr[0x54] != '\0') && (!NAN((double)this_ptr[0x53]))) {
    uVar9 = param_2;
    uVar11 = in_XMM1_Qb;
    (**(code **)(*this_ptr + 0xba0))(param_1);
  }
  if ((*(float *)(this_ptr + 100) == (float)g_023dccec) &&
     (!NAN(*(float *)(this_ptr + 100)) && !NAN((float)g_023dccec))) {
    if ((*(float *)((int64_t)this_ptr + 0x324) == g_023dccec._4_4_) &&
       (!NAN(*(float *)((int64_t)this_ptr + 0x324)) && !NAN(g_023dccec._4_4_))) {
      if ((*(float *)(this_ptr + 0x65) == (float)g_023dccf4) &&
         (!NAN(*(float *)(this_ptr + 0x65)) && !NAN((float)g_023dccf4))) {
        if ((*(float *)((int64_t)this_ptr + 0x32c) == g_023dccf4._4_4_) &&
           (!NAN(*(float *)((int64_t)this_ptr + 0x32c)) && !NAN(g_023dccf4._4_4_)))
        goto LAB_01991506;
      }
    }
  }
  uVar9 = param_2;
  uVar11 = in_XMM1_Qb;
  (**(code **)(*this_ptr + 0xba8))();
LAB_01991506:
  if (this_ptr[0x97] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    uVar6 = FUN_01e436c0();
    lVar1 = this_ptr[0x97];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d45bc0();
    uVar7 = (**(code **)(*this_ptr + 0x938))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    auVar8._8_8_ = extraout_XMM0_Qb;
    auVar8._0_8_ = uVar6;
    auVar2._8_8_ = extraout_XMM0_Qb_00;
    auVar2._0_8_ = uVar7;
    auVar8 = blendps(auVar8,auVar2,1);
    auVar10._8_8_ = uVar11;
    auVar10._0_8_ = uVar9;
    auVar10 = blendps(g_023b1630,auVar10,2);
    local_98 = (uint32_t)param_1;
    local_a8 = (uint32_t)param_2;
    cVar3 = FUN_00d054a0(auVar8._0_8_,auVar10._0_8_,local_98,local_a8);
    if (cVar3 != '\0') {
      FUN_01c4b410();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      if (((*(float *)(this_ptr + 0x98) < g_02390124) && (FUN_01cfcdc0(), local_50 != '\0')) &&
         (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d488d0();
      FUN_01d48b40();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int *)(this_ptr[0xa6] + 0xc) != 0) {
    FUN_01d48370();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_78 + 0x390))();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d488d0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_78 + 0x378))();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d48a10();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e436c0();
    lVar1 = this_ptr[0xa6];
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_00018280();
    }
    FUN_01d48390();
  }
  return;
}

