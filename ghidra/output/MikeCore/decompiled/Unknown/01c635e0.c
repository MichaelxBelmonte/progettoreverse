// Function: FUN_01c635e0
// Address: 01c635e0
// Size: 654 bytes
// Class: Unknown


ulonglong FUN_01c635e0(float param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar11;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  undefined4 local_44;
  char local_40 [8];
  char local_38 [8];
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  uVar5 = (undefined4)param_2;
  if ((((*(int *)(unaff_RDI + 0x1c8) == 1) && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) &&
      (iVar4 = FUN_01d3b620(), iVar4 == 1)) &&
     ((iVar4 = FUN_01d3b630(), iVar4 == 1 && (*(int *)(unaff_RDI + 0x1c8) == 1)))) {
    auVar13._0_8_ = FUN_01e3f820();
    auVar13._8_4_ = extraout_XMM0_Dc;
    auVar13._12_4_ = extraout_XMM0_Dd;
    auVar12._4_4_ = fVar11;
    auVar12._0_4_ = uVar5;
    auVar12._8_4_ = in_XMM1_Dc;
    auVar12._12_4_ = in_XMM1_Dd;
    if (*(int *)(unaff_RDI + 0x1c8) == 1) {
      auVar2._4_4_ = fVar11;
      auVar2._0_4_ = fVar11 + DAT_0241c6e8 + DAT_02390d00;
      auVar2._8_4_ = in_XMM1_Dd;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar13 = insertps(auVar13,auVar2,0x10);
      uVar5 = auVar13._0_4_;
      uVar10 = DAT_02392fd8;
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
      local_50 = *(longlong *)(unaff_RDI + 0x200);
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
          local_44 = (undefined4)CONCAT71((int7)((ulonglong)pcVar6 >> 8),local_40[0]);
          if (1 < *(int *)(local_50 + 0xc)) {
            lVar9 = 1;
            do {
              lVar1 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar9 * 8);
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
          uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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


