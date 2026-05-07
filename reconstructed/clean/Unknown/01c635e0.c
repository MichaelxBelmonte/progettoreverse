// Function: FUN_01c635e0
// Address: 01c635e0
// Size: 654 bytes
// Class: Unknown

uint64_t FUN_01c635e0(float param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  char cVar3;
  int iVar4;
  uint32_t uVar5;
  char *pcVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  char *pcVar8;
  int64_t lVar9;
  uint uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar11;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  uint32_t local_44;
  char local_40 [8];
  char local_38 [8];
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  uVar5 = (uint32_t)param_2;
  if ((((*(int *)(this_ptr + 0x1c8) == 1) && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) &&
      (iVar4 = FUN_01d3b620(), iVar4 == 1)) &&
     ((iVar4 = FUN_01d3b630(), iVar4 == 1 && (*(int *)(this_ptr + 0x1c8) == 1)))) {
    auVar13._0_8_ = FUN_01e3f820();
    auVar13._8_4_ = extraout_XMM0_Dc;
    auVar13._12_4_ = extraout_XMM0_Dd;
    auVar12._4_4_ = fVar11;
    auVar12._0_4_ = uVar5;
    auVar12._8_4_ = in_XMM1_Dc;
    auVar12._12_4_ = in_XMM1_Dd;
    if (*(int *)(this_ptr + 0x1c8) == 1) {
      auVar2._4_4_ = fVar11;
      auVar2._0_4_ = fVar11 + g_0241c6e8 + g_02390d00;
      auVar2._8_4_ = in_XMM1_Dd;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar13 = insertps(auVar13,auVar2,0x10);
      uVar5 = auVar13._0_4_;
      uVar10 = g_02392fd8;
    }
    else {
      auVar13 = blendps(auVar13,auVar12,2);
      uVar5 = auVar13._0_4_;
      uVar10 = 0;
    }
    auVar12 = insertps(auVar12,ZEXT416(uVar10),0x10);
    cVar3 = FUN_00d05410(param_1,uVar5,auVar12._0_8_);
    if (cVar3 != '\0') {
      FUN_01c41970();
      local_50 = *(int64_t *)(this_ptr + 0x200);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      if (0 < *(int *)(local_50 + 0xc)) {
        FUN_00d23310();
        local_38[0] = local_58[0];
        pcVar6 = local_58;
        if (local_58[0] == '\0') {
          pcVar6 = local_38;
        }
        *pcVar6 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_40[0] = local_38[0] != '\0';
        pcVar6 = local_40;
        pcVar8 = local_38;
        if (!(bool)local_40[0]) {
          pcVar8 = pcVar6;
        }
        *pcVar8 = '\0';
        if ((local_38[0] != '\0') && (local_60 != 0)) {
          pcVar6 = (char *)FUN_00d50b20();
        }
        if (*(float *)(local_60 + 0x1c) <= param_1) {
          local_44 = (uint32_t)CONCAT71((int7)((uint64_t)pcVar6 >> 8),local_40[0]);
          if (1 < *(int *)(local_50 + 0xc)) {
            lVar9 = 1;
            do {
              lVar1 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar9 * 8);
              if (lVar1 == 0) break;
              if (param_1 < *(float *)(lVar1 + 0x1c)) {
                uVar5 = FUN_01d3b590();
                FUN_01c466d0(extraout_XMM0_Da_01,uVar5);
                goto LAB_01c6381e;
              }
              if (local_60 != lVar1) {
                if ((char)local_44 != '\0') {
                  FUN_00d50b20();
                }
                local_44 = 0;
                local_60 = lVar1;
              }
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < *(int *)(local_50 + 0xc));
          }
          uVar5 = FUN_01d3b590();
          FUN_01c466d0(extraout_XMM0_Da_00,uVar5);
LAB_01c6381e:
          if (((char)local_44 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          uVar7 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
          FUN_00d50b20();
          goto LAB_01c63778;
        }
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
      }
      uVar5 = FUN_01d3b590();
      FUN_01c466d0(extraout_XMM0_Da,uVar5);
      FUN_00d50b20();
    }
  }
  uVar7 = 0;
LAB_01c63778:
  return uVar7 & 0xffffffff;
}

