// Function: FUN_01ee0360
// Address: 01ee0360
// Size: 521 bytes
// Class: GNMultipleValue

void FUN_01ee0360(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *this_ptr;
  bool bVar3;
  float fVar4;
  uint64_t extraout_XMM0_Qa;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint32_t extraout_XMM0_Dd;
  uint64_t in_XMM1_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t local_48 [8];
  uint64_t uStack_40;
  int64_t local_38;
  char local_30;
  uint64_t extraout_XMM0_Qb;
  
  if (this_ptr[6] == 0) {
    bVar3 = false;
    lVar1 = this_ptr[0x27];
  }
  else {
    (**(code **)(*this_ptr + 0x7b0))();
    bVar3 = this_ptr[6] == local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x27];
  }
  if ((((lVar1 == 0) || (lVar1 = this_ptr[0x28], (int)lVar1 < 0)) ||
      (iVar2 = FUN_01eddbf0(), iVar2 <= (int)lVar1)) ||
     (FUN_01eddbb0(extraout_XMM0_Qa,(int)this_ptr[0x28]), local_38 == 0)) {
    if (bVar3) {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      (**(code **)(*this_ptr + 0x4e8))();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
    }
    if (bVar3) {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      uStack_40 = in_XMM1_Qb;
      local_48 = (uint8_t  [8])param_2;
      auVar7 = _local_48;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      fVar4 = (float)FUN_01ede0b0();
      local_48._0_4_ = (uint32_t)param_2;
      bVar3 = (float)local_48._0_4_ < fVar4 * *(float *)((int64_t)this_ptr + 0x144);
      _local_48 = auVar7;
      if (bVar3) {
        auVar5._0_8_ = FUN_01ede0b0();
        auVar5._8_8_ = extraout_XMM0_Qb;
        auVar6._4_12_ = auVar5._4_12_;
        auVar6._0_4_ = (float)auVar5._0_8_ * *(float *)((int64_t)this_ptr + 0x144);
        _local_48 = blendps(auVar7,auVar6,1);
      }
      FUN_01ede0b0();
      if ((float)local_48._4_4_ < extraout_XMM0_Db * *(float *)((int64_t)this_ptr + 0x144)) {
        FUN_01ede0b0();
        auVar7._4_4_ = extraout_XMM0_Db_00;
        auVar7._0_4_ = extraout_XMM0_Db_00;
        auVar7._8_4_ = extraout_XMM0_Dd;
        auVar7._12_4_ = extraout_XMM0_Dd;
        auVar8._4_12_ = auVar7._4_12_;
        auVar8._0_4_ = extraout_XMM0_Db_00 * *(float *)((int64_t)this_ptr + 0x144);
        insertps(_local_48,auVar8,0x10);
      }
      (**(code **)(*this_ptr + 0x4e8))();
    }
    else {
      FUN_01ede0b0();
      (**(code **)(*this_ptr + 0x4e8))();
    }
    FUN_00d50b20();
  }
  return;
}

