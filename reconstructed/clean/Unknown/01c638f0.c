// Function: FUN_01c638f0
// Address: 01c638f0
// Size: 816 bytes
// Class: Unknown

uint64_t FUN_01c638f0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  char cVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint64_t uVar9;
  float extraout_XMM0_Db;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t in_XMM1 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  int64_t local_38;
  char local_30;
  float fVar10;
  
  iVar5 = FUN_01d3a5a0();
  auVar11 = in_XMM1;
  if (iVar5 == 5) {
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    auVar11 = in_XMM1;
    if (*(char *)((int64_t)this_ptr + 0x22c) != '\0') {
      uVar9 = FUN_01e436c0();
      fVar10 = (float)((uint64_t)uVar9 >> 0x20);
      auVar13._8_4_ = extraout_XMM0_Dc;
      auVar13._0_8_ = uVar9;
      auVar13._12_4_ = extraout_XMM0_Dd;
      auVar11._4_4_ = fVar10;
      auVar11._0_4_ = fVar10 + in_XMM1._4_4_ + g_023b1608;
      auVar11._8_4_ = extraout_XMM0_Dd;
      auVar11._12_4_ = extraout_XMM0_Dd;
      auVar11 = insertps(auVar13,auVar11,0x10);
      auVar13 = blendps(in_XMM1,g_023b45e0,0xe);
      cVar4 = FUN_00d05410(uVar8,auVar11._0_8_,auVar13._0_8_);
      if (cVar4 != '\0') {
        FUN_01c4bc80();
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
        }
        FUN_01e4ac90();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        uVar7 = CONCAT71((int7)((uint64_t)local_38 >> 8),1);
        goto LAB_01c63be4;
      }
    }
  }
  iVar5 = FUN_01d3a5a0();
  if (iVar5 == 1) {
    cVar4 = FUN_01e420b0();
    if (cVar4 == '\0') {
      FUN_01e42250();
    }
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    if (*(char *)((int64_t)this_ptr + 0x22c) != '\0') {
      uVar9 = FUN_01e436c0();
      fVar10 = (float)((uint64_t)uVar9 >> 0x20);
      auVar12._8_4_ = extraout_XMM0_Dc_00;
      auVar12._0_8_ = uVar9;
      auVar12._12_4_ = extraout_XMM0_Dd_00;
      auVar3._4_4_ = fVar10;
      auVar3._0_4_ = fVar10 + auVar11._4_4_ + g_023b1608;
      auVar3._8_4_ = extraout_XMM0_Dd_00;
      auVar3._12_4_ = extraout_XMM0_Dd_00;
      auVar13 = insertps(auVar12,auVar3,0x10);
      auVar11 = blendps(auVar11,g_023b45e0,0xe);
      cVar4 = FUN_00d05410(uVar8,auVar13._0_8_,auVar11._0_8_);
      if (cVar4 != '\0') {
        FUN_01c4bc80();
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
        }
        FUN_01e4ac90();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        plVar1 = (int64_t *)this_ptr[0x46];
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b00();
          if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
            lVar6 = (**(code **)(*(int64_t *)this_ptr[0x46] + 0x10))();
            this_ptr[0x46] = 0;
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          }
        }
        (**(code **)(*plVar1 + 0x18))();
        do {
          (**(code **)(*this_ptr + 0x658))();
          if (local_30 == '\0') {
            if (local_38 == 0) goto LAB_01c63bb4;
            FUN_00d50b00();
          }
          else if (local_38 == 0) goto LAB_01c63bb4;
          iVar5 = FUN_01d3a5a0();
          if ((iVar5 == 5) || (iVar5 = FUN_01d3a5a0(), iVar5 == 6)) {
            FUN_01d3abf0();
            FUN_01e466c0();
            (**(code **)(*plVar1 + 0x20))(extraout_XMM0_Db - (float)((uint64_t)param_1 >> 0x20));
            iVar5 = FUN_01d3a5a0();
            if (iVar5 == 6) goto code_r0x01c63bac;
          }
          FUN_00d50b20();
        } while( true );
      }
    }
  }
  uVar7 = 0;
  goto LAB_01c63be4;
code_r0x01c63bac:
  FUN_00d50b20();
LAB_01c63bb4:
  (**(code **)(*plVar1 + 0x28))();
  (**(code **)(*plVar1 + 0x40))();
  plVar2 = (int64_t *)this_ptr[0x46];
  if (plVar2 != plVar1) {
    if (plVar2 == (int64_t *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = (**(code **)(*plVar2 + 0x10))();
    }
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    this_ptr[0x46] = (int64_t)plVar1;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar1 + 0x10))();
  uVar7 = CONCAT71((int7)((uint64_t)local_38 >> 8),1);
  FUN_00d50b20();
LAB_01c63be4:
  return uVar7 & 0xffffffff;
}

