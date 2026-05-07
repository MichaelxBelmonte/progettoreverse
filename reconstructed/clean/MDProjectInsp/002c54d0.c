// Function: FUN_002c54d0
// Address: 002c54d0
// Size: 808 bytes
// Class: MDProjectInsp

void FUN_002c54d0(void)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int unaff_ESI;
  int64_t this_ptr;
  float fVar11;
  uint8_t auVar6 [16];
  uint32_t uVar12;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar13 [16];
  int64_t *local_30;
  char local_28;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  if (unaff_ESI == 0) {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x118) + 0x478))();
      if (*(int64_t **)(this_ptr + 0x100) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
        if ((local_28 == '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        auVar9._0_8_ = (**(code **)(*local_30 + 0x4d8))();
        auVar9._8_8_ = extraout_XMM0_Qb_01;
        fVar11 = (float)((uint64_t)auVar9._0_8_ >> 0x20);
        uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
        auVar7._4_4_ = fVar11;
        auVar7._0_4_ = fVar11 + g_023941fc;
        auVar7._8_4_ = uVar12;
        auVar7._12_4_ = uVar12;
        auVar7 = insertps(auVar9,auVar7,0x10);
        auVar13._4_4_ = in_XMM1._4_4_;
        auVar13._0_4_ = in_XMM1._4_4_ + g_023942a8;
        auVar13._8_4_ = in_XMM1._12_4_;
        auVar13._12_4_ = in_XMM1._12_4_;
        auVar13 = insertps(in_XMM1,auVar13,0x10);
        (**(code **)(*local_30 + 0x4d0))(auVar7._0_8_,auVar13._0_8_);
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x150) != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
        if ((local_28 == '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        auVar10._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x4d8))();
        auVar10._8_8_ = extraout_XMM0_Qb_02;
        fVar11 = (float)((uint64_t)auVar10._0_8_ >> 0x20);
        uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
        auVar4._4_4_ = fVar11;
        auVar4._0_4_ = fVar11 + g_023941fc;
        auVar4._8_4_ = uVar12;
        auVar4._12_4_ = uVar12;
        auVar7 = insertps(auVar10,auVar4,0x10);
        (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x4d0))(auVar7._0_8_);
        if (local_30 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 == (int64_t *)0x0) {
      FUN_01e53c20();
      lVar1 = *(int64_t *)(this_ptr + 0x118);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(MACH_HEADER._0_8_ + 0x450))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (*(int64_t **)(this_ptr + 0x100) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
        auVar6._0_8_ = (**(code **)(MACH_HEADER._0_8_ + 0x4d8))();
        auVar6._8_8_ = extraout_XMM0_Qb;
        fVar11 = (float)((uint64_t)auVar6._0_8_ >> 0x20);
        uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar2._4_4_ = fVar11;
        auVar2._0_4_ = fVar11 + g_023942a8;
        auVar2._8_4_ = uVar12;
        auVar2._12_4_ = uVar12;
        auVar7 = insertps(auVar6,auVar2,0x10);
        auVar5._4_4_ = in_XMM1._4_4_;
        auVar5._0_4_ = in_XMM1._4_4_ + g_023941fc;
        auVar5._8_4_ = in_XMM1._12_4_;
        auVar5._12_4_ = in_XMM1._12_4_;
        auVar13 = insertps(in_XMM1,auVar5,0x10);
        (**(code **)(MACH_HEADER._0_8_ + 0x4d0))(auVar7._0_8_,auVar13._0_8_);
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x150) != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
        auVar8._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x4d8))();
        auVar8._8_8_ = extraout_XMM0_Qb_00;
        fVar11 = (float)((uint64_t)auVar8._0_8_ >> 0x20);
        uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        auVar3._4_4_ = fVar11;
        auVar3._0_4_ = fVar11 + g_023942a8;
        auVar3._8_4_ = uVar12;
        auVar3._12_4_ = uVar12;
        auVar7 = insertps(auVar8,auVar3,0x10);
        (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x4d0))(auVar7._0_8_);
      }
    }
  }
  return;
}

