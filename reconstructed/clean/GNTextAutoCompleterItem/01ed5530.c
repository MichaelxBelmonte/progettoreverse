// Function: FUN_01ed5530
// Address: 01ed5530
// Size: 1285 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed5530(int param_1,uint64_t param_2,int param_3)

{
  uint8_t auVar1 [16];
  uint64_t uVar2;
  uint64_t in_RCX;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar3;
  float fVar4;
  float fVar5;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint64_t in_XMM1_Qb;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  uint8_t local_98 [16];
  int local_88;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  local_98._8_8_ = in_XMM1_Qb;
  local_98._0_8_ = param_2;
  local_a0 = in_RDX;
  local_88 = param_1;
  uVar3 = (**(code **)(*this_ptr + 0x938))(in_RCX,param_3);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto joined_r0x01ed5644;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto joined_r0x01ed5644;
  local_100 = local_40;
  local_f8 = '\0';
  uVar3 = (**(code **)(*this_ptr + 0x9a0))(local_88,&local_100);
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
joined_r0x01ed5644:
  if ((int)in_RCX == 0) {
    FUN_01dcc290(uVar3,0);
    fVar4 = (float)FUN_01db9a40();
    fVar5 = fVar4;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      fVar5 = (float)FUN_00d50b20();
    }
    if (fVar4 < local_98._0_4_) {
      FUN_01dcc290(fVar5,0);
      uVar2 = FUN_01db9a40();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar1._8_4_ = extraout_XMM0_Dc;
      auVar1._0_8_ = uVar2;
      auVar1._12_4_ = extraout_XMM0_Dd;
      local_98 = blendps(local_98,auVar1,1);
    }
    local_f0 = *arg1;
    local_e8 = '\0';
    (**(code **)(*this_ptr + 0xa30))(local_88,param_3);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((this_ptr[0x40] == 0) || ((int)this_ptr[0x41] != param_3)) ||
     (*(int *)((int64_t)this_ptr + 0x20c) != (int)in_RCX)) {
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x390))(local_88);
    (**(code **)(*(int64_t *)*arg1 + 0x368))(local_88);
    (**(code **)(*(int64_t *)*local_a0 + 0x4d0))(local_88);
    local_88 = param_3;
    (**(code **)(*this_ptr + 0x940))(in_RCX & 0xffffffff,param_3);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      local_e0 = local_40;
      local_d8 = '\0';
      FUN_01d488d0();
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01dd96b0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_01dd96b0();
      uVar3 = FUN_00d50b00();
      FUN_01dcc290(uVar3,in_RCX & 0xffffffff);
      local_60 = local_b0;
      local_58 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_58 = '\x01';
      local_d0 = *local_a0;
      local_c8 = '\0';
      (**(code **)(*local_40 + 0x30))(&local_60,local_88,&local_d0);
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
    }
    local_c0 = *arg1;
    local_b8 = '\0';
    (**(code **)(*(int64_t *)*local_a0 + 0x610))(0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

