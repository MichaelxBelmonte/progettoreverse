// Function: FUN_01ed0d70
// Address: 01ed0d70
// Size: 623 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed0d70(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  int64_t lVar4;
  int iVar5;
  int64_t *this_ptr;
  float fVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  float fVar12;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar11 [16];
  uint8_t in_register_00001284 [12];
  float local_98;
  int64_t local_30;
  char local_28;
  uint64_t extraout_XMM0_Qb_00;
  
  fVar12 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if (this_ptr[8] == 0) {
    (**(code **)(*this_ptr + 0x508))();
  }
  FUN_01e5b880();
  uVar7 = FUN_01e3f820();
  FUN_01e3f820();
  auVar8._8_8_ = extraout_XMM0_Qb;
  auVar8._0_8_ = uVar7;
  auVar11._0_4_ = fVar6 + (float)uVar7;
  auVar11._4_4_ = fVar12 + (float)((uint64_t)uVar7 >> 0x20);
  auVar11._8_4_ = in_XMM1_Dc + (float)extraout_XMM0_Qb;
  auVar11._12_4_ = in_XMM1_Dd + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar8 = blendps(auVar8,auVar11,2);
  FUN_01e46ed0(auVar8._0_8_);
  FUN_01e3f820();
  iVar5 = 4;
  if (*(int *)(this_ptr[5] + 0xc) < 4) {
    iVar5 = *(int *)(this_ptr[5] + 0xc);
  }
  auVar3._4_12_ = in_register_00001284;
  auVar3._0_4_ = (float)iVar5 * auVar11._4_4_ + auVar11._4_4_;
  auVar8 = insertps(auVar11,auVar3,0x10);
  FUN_01e5ba50();
  FUN_01e5d9c0();
  lVar1 = this_ptr[5];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d2a8f0();
  FUN_01dd4c60();
  FUN_01ddd080();
  FUN_01dcb680();
  fVar6 = (float)FUN_01dd38e0();
  local_98 = auVar11._0_4_;
  if (local_98 < fVar6) {
    auVar9._0_8_ = FUN_01dd38e0();
    auVar9._8_8_ = extraout_XMM0_Qb_00;
    auVar10._4_12_ = auVar9._4_12_;
    auVar10._0_4_ = ((float)auVar9._0_8_ - local_98) + local_98;
    blendps(auVar8,auVar10,1);
    FUN_01e5ba50();
  }
  FUN_01e42030();
  if (local_30 == 0) {
    lVar2 = this_ptr[10];
    lVar4 = 0;
  }
  else {
    if (local_28 == '\0') {
      FUN_00d50b00();
    }
    lVar2 = this_ptr[10];
    lVar4 = local_30;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d8c820();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  FUN_01e5d9c0();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}

