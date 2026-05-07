// Function: FUN_01ed75d0
// Address: 01ed75d0
// Size: 743 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed75d0(uint32_t param_1)

{
  int iVar1;
  uint8_t auVar2 [16];
  int iVar3;
  uint uVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  float fVar6;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar7 [16];
  uint8_t local_68 [8];
  uint32_t uStack_60;
  uint32_t uStack_5c;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((int)this_ptr[0x48] != 3) {
    FUN_01dd32f0(param_1);
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    goto LAB_01ed78a0;
  }
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
  FUN_01d48b40(g_02394298);
  iVar3 = (**(code **)(*this_ptr + 0x9d8))((int)*(void*)((int64_t)this_ptr + 0x224));
  local_68 = (uint8_t  [8])FUN_01dcf710();
  fVar6 = (float)((uint64_t)local_68 >> 0x20);
  uStack_60 = extraout_XMM0_Dc;
  uStack_5c = extraout_XMM0_Dd;
  if (iVar3 == 0) {
    auVar7._4_4_ = fVar6;
    auVar7._0_4_ = fVar6 + g_02390124;
    auVar7._8_4_ = extraout_XMM0_Dd;
    auVar7._12_4_ = extraout_XMM0_Dd;
    _local_68 = insertps(_local_68,auVar7,0x10);
    if ((int)this_ptr[0x30] == 0) goto LAB_01ed7776;
  }
  else if (iVar3 == (int)this_ptr[0x30]) {
LAB_01ed7776:
    auVar2._4_4_ = local_68._4_4_;
    auVar2._0_4_ = local_68._4_4_ + g_023b1608;
    auVar2._8_4_ = local_68._12_4_;
    auVar2._12_4_ = local_68._12_4_;
    auVar7 = insertps(_local_68,auVar2,0x10);
    local_68 = auVar7._0_8_;
  }
  fVar6 = g_02390124;
  if (1 < iVar3 + 1U) {
    iVar1 = *(int *)(*(int64_t *)(this_ptr[0x58] + 0x10) + (int64_t)(int)(iVar3 - 1U) * 8);
    if ((iVar3 < 1) || (*(int *)(this_ptr[0x57] + 0xc) < iVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(int64_t *)(*(int64_t *)(this_ptr[0x57] + 0x10) + (uint64_t)(iVar3 - 1U) * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
    }
    uVar4 = FUN_01ed4710();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    fVar6 = (float)(int)((uVar4 & 0xff) + iVar1 + 1);
  }
  local_68._4_4_ = (uint32_t)((uint64_t)local_68 >> 0x20);
  fVar6 = fVar6 * *(float *)(this_ptr + 0x5a) + (float)local_68._0_4_;
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))
            (fVar6,g_023b1d84 + (float)local_68._4_4_,fVar6,(float)local_68._4_4_ + g_02394298);
LAB_01ed78a0:
  FUN_00d50b20();
  return;
}

