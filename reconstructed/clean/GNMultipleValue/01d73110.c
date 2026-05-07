// Function: FUN_01d73110
// Address: 01d73110
// Size: 592 bytes
// Class: GNMultipleValue

uint64_t FUN_01d73110(void)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  uint32_t extraout_XMM0_Da;
  uint64_t uVar10;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint8_t auVar15 [16];
  uint8_t local_88 [16];
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_88 = ZEXT816(0);
  iVar9 = 0;
  plVar7 = (int64_t *)0x0;
  do {
    iVar5 = FUN_01d6fde0();
    if (iVar5 <= iVar9) {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return local_88._0_8_;
    }
    FUN_01d70140(extraout_XMM0_Da,iVar9);
    plVar8 = local_40;
    if (local_40 == plVar7) {
LAB_01d731c1:
      plVar8 = plVar7;
      if (local_38 != '\0') {
LAB_01d731c7:
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar7 = plVar8;
          goto LAB_01d731c1;
        }
        if (local_38 == '\0') goto LAB_01d731e0;
        goto LAB_01d731c7;
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01d731e0:
    (**(code **)(*this_ptr + 0x640))();
    plVar7 = local_40;
    (**(code **)(*this_ptr + 0x9e8))();
    local_48 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = '\x01';
    local_50 = local_60;
    uVar10 = (**(code **)(*plVar7 + 0x5d0))(0,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x640))();
    plVar7 = local_40;
    FUN_01d74c10();
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar6 = &local_40;
      if (cVar4 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    plVar7 = *pplVar6;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar11 = extraout_XMM0_Dc + _UNK_023b18f8;
    fVar12 = extraout_XMM0_Dd + _UNK_023b18fc;
    uVar3 = CONCAT44((float)((uint64_t)uVar10 >> 0x20) + _UNK_023b18f4,
                     (float)uVar10 + g_023b18f0);
    if (plVar7 != (int64_t *)0x0) {
      fVar11 = extraout_XMM0_Dc;
      fVar12 = extraout_XMM0_Dd;
      uVar3 = uVar10;
    }
    fVar13 = fVar11;
    fVar14 = fVar12;
    uVar10 = uVar3;
    if ((float)uVar3 <= local_88._0_4_) {
      fVar13 = local_88._8_4_;
      fVar14 = local_88._12_4_;
      uVar10 = local_88._0_8_;
    }
    auVar15._4_4_ = -(uint)(local_88._4_4_ < (float)((uint64_t)uVar3 >> 0x20));
    auVar15._0_4_ = -(uint)(local_88._0_4_ < (float)uVar3);
    auVar15._8_4_ = -(uint)(local_88._8_4_ < fVar11);
    auVar15._12_4_ = -(uint)(local_88._12_4_ < fVar12);
    auVar1._8_4_ = fVar11;
    auVar1._0_8_ = uVar3;
    auVar1._12_4_ = fVar12;
    auVar15 = blendvps(local_88,auVar1,auVar15);
    auVar2._8_4_ = fVar13;
    auVar2._0_8_ = uVar10;
    auVar2._12_4_ = fVar14;
    local_88 = blendps(auVar15,auVar2,0xd);
    iVar9 = iVar9 + 1;
    plVar7 = plVar8;
  } while( true );
}

