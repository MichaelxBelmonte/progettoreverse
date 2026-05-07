// Function: FUN_01eaec50
// Address: 01eaec50
// Size: 783 bytes
// Class: Unknown

void FUN_01eaec50(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  float fVar7;
  uint64_t in_XMM0_Qb;
  uint8_t auVar8 [16];
  uint32_t uVar9;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  int64_t local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  uVar9 = (uint32_t)((uint64_t)param_2 >> 0x20);
  if (this_ptr[8] != 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_001e10d0();
    (**(code **)(*plVar5 + 0x18))();
    if (this_ptr[3] == 0x0) {
      lVar6 = this_ptr[8];
      local_60 = 0;
      lVar1 = *(int64_t *)(lVar6 + 0x18);
      if (lVar1 != 0) {
        FUN_00d50b00();
        lVar6 = this_ptr[8];
      }
      local_60 = '\x01';
      local_50 = 0;
      lVar6 = *(int64_t *)(lVar6 + 0x20);
      local_68 = lVar1;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\x01';
      local_58 = lVar6;
      FUN_01ea92e0(&local_58,&local_68);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (*this_ptr[3])();
      local_70 = 0;
      local_78 = *(int64_t *)(this_ptr[8] + 0x18);
      if (local_78 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      FUN_01cff4e0();
      local_30 = 0;
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      local_30 = '\x01';
      local_38 = local_98;
      FUN_01ea92e0(&local_38,&local_78);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b00();
    (**(code **)(*plVar5 + 0x3f0))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    fVar7 = (float)FUN_01d43ca0();
    auVar3._8_8_ = in_XMM0_Qb;
    auVar3._0_8_ = param_1;
    auVar8._4_4_ = uVar9;
    auVar8._0_4_ = (float)param_2 - fVar7;
    auVar8._8_4_ = in_XMM1_Dc;
    auVar8._12_4_ = in_XMM1_Dd;
    auVar8 = insertps(auVar3,auVar8,0x10);
    (**(code **)(*this_ptr + 0x368))(auVar8._0_8_);
    FUN_00d50b00();
    (**(code **)(*plVar5 + 0x3c8))();
    FUN_01eab910();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    fVar7 = (float)FUN_01d43ca0();
    auVar4._8_8_ = in_XMM0_Qb;
    auVar4._0_8_ = param_1;
    auVar2._4_4_ = uVar9;
    auVar2._0_4_ = (float)param_2 - fVar7;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dd;
    insertps(auVar4,auVar2,0x10);
    (**(code **)(*this_ptr + 0x368))();
    FUN_00d50b20();
  }
  return;
}

