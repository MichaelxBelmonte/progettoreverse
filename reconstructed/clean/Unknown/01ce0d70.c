// Function: FUN_01ce0d70
// Address: 01ce0d70
// Size: 570 bytes
// Class: Unknown

uint64_t FUN_01ce0d70(uint32_t param_1,uint64_t param_2,float param_3)

{
  uint8_t auVar1 [16];
  bool bVar2;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar3;
  float fVar4;
  uint64_t uVar5;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  float fVar6;
  float fVar9;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar10 [16];
  uint8_t local_58 [16];
  uint8_t local_48 [8];
  uint32_t uStack_40;
  uint32_t uStack_3c;
  
  fVar9 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  lVar3 = this_ptr[0x10];
  bVar2 = true;
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0xc) <= unaff_ESI)) ||
     (lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (int64_t)unaff_ESI * 8), lVar3 == 0)) {
    lVar3 = 0;
    if (unaff_ESI == 0x24) goto LAB_01ce0dec;
LAB_01ce0e7f:
    if (unaff_ESI == 0x23) {
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x50) != '\0')) {
        local_48._0_4_ = fVar6;
        fVar4 = (float)(**(code **)(*this_ptr + 0x548))();
        local_48._4_4_ = fVar9;
        uStack_40 = in_XMM1_Dc;
        uStack_3c = in_XMM1_Dd;
        uVar5 = FUN_01d526f0();
        auVar1._8_4_ = extraout_XMM0_Dc_01;
        auVar1._0_8_ = uVar5;
        auVar1._12_4_ = extraout_XMM0_Dd_01;
        blendps(_local_48,auVar1,0xd);
        local_58._4_4_ = 0;
        local_58._0_4_ = fVar4 + (fVar6 - (float)uVar5) * param_3;
        if ((bool)(bVar2 | lVar3 == 0)) {
          return local_58._0_8_;
        }
        goto LAB_01ce0f8d;
      }
      local_58._0_4_ = FUN_01cc2760(param_1);
      local_58._4_4_ = 0;
    }
    else if (unaff_ESI == 9) {
      if (fVar6 <= fVar9) {
        local_58._0_4_ = (**(code **)(*this_ptr + 0x560))();
        local_58._4_4_ = 0;
      }
      else {
        local_58._0_4_ = (**(code **)(*this_ptr + 0x560))();
        local_58._4_4_ = 0;
      }
    }
    else {
      local_58._0_4_ = FUN_01cc2760(param_1);
      local_58._4_4_ = 0;
    }
  }
  else {
    FUN_00d50b00();
    bVar2 = false;
    if (unaff_ESI != 0x24) goto LAB_01ce0e7f;
LAB_01ce0dec:
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x50) != '\0')) {
      local_48._4_4_ = fVar9;
      local_58._0_8_ = (**(code **)(*this_ptr + 0x548))();
      fVar4 = (float)((uint64_t)local_58._0_8_ >> 0x20);
      local_58._8_4_ = extraout_XMM0_Dc;
      local_58._12_4_ = extraout_XMM0_Dd;
      local_48._0_4_ = fVar6;
      uStack_40 = in_XMM1_Dc;
      uStack_3c = in_XMM1_Dd;
      uVar5 = FUN_01d526f0();
      auVar10._8_4_ = extraout_XMM0_Dc_00;
      auVar10._0_8_ = uVar5;
      auVar10._12_4_ = extraout_XMM0_Dd_00;
      blendps(_local_48,auVar10,2);
      auVar7._4_4_ = fVar4;
      auVar7._0_4_ = fVar4;
      auVar7._8_4_ = extraout_XMM0_Dd;
      auVar7._12_4_ = extraout_XMM0_Dd;
      auVar8._4_12_ = auVar7._4_12_;
      auVar8._0_4_ = fVar4 + (fVar9 - (float)((uint64_t)uVar5 >> 0x20)) * param_3;
      auVar10 = insertps(local_58,auVar8,0x10);
      local_58._0_8_ = auVar10._0_8_;
      if ((bool)(bVar2 | lVar3 == 0)) {
        return local_58._0_8_;
      }
      goto LAB_01ce0f8d;
    }
    local_58._0_4_ = FUN_01cc2760(param_1);
    local_58._4_4_ = 0;
  }
  if (bVar2 || lVar3 == 0) {
    return local_58._0_8_;
  }
LAB_01ce0f8d:
  FUN_00d50b20();
  return local_58._0_8_;
}

