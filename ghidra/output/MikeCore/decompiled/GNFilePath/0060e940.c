// Function: FUN_0060e940
// Address: 0060e940
// Size: 853 bytes
// Class: GNFilePath


bool FUN_0060e940(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char in_DL;
  int iVar4;
  longlong unaff_RDI;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  longlong local_40;
  char local_38;
  
  fVar9 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x188) + 0xc);
  if ((1 < iVar1) && (in_DL != '\0')) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar2 + 0x18))();
    FUN_00d50b00();
    FUN_01d62b10();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x188) != 0) {
      local_80 = 0;
      local_88 = 0;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_70._4_4_ = 0;
      local_78 = *(longlong *)(unaff_RDI + 0x188);
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar4 = -local_70._4_4_;
          }
          else {
            iVar4 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar4);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar4 = 0;
          }
          local_70 = CONCAT44(iVar4,(int)local_70);
        }
        lVar3 = (longlong)(int)local_70;
        iVar4 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar4);
        if (*(int *)(local_78 + 0xc) <= iVar4) break;
        local_88 = *(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar3 * 8);
        uVar5 = FUN_003a4d00();
        lVar3 = DAT_02724b80;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar5 = FUN_00d50b00();
            lVar3 = DAT_02724b80;
          }
        }
        else {
          local_38 = '\0';
        }
        DAT_02724b80 = lVar3;
        if (lVar3 != 0) {
          uVar5 = FUN_00d50b00();
        }
        local_b0 = '\x01';
        local_b8 = lVar3;
        FUN_01d5d9b0(uVar5,&local_b8);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        FUN_01d65490();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_88 == *(longlong *)(unaff_RDI + 0x198)) {
          FUN_01d5e230();
          FUN_01d66ab0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_006106b0();
    }
    uVar5 = FUN_01d61100();
    FUN_01e3f820();
    local_90 = 0;
    local_98 = *(longlong *)(unaff_RDI + 0x1c8);
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    auVar7._4_4_ = fVar9;
    auVar7._0_4_ = fVar8;
    auVar7._8_4_ = in_XMM1_Dc;
    auVar7._12_4_ = in_XMM1_Dd;
    local_c8 = (float)uVar5;
    fStack_c4 = (float)((ulonglong)uVar5 >> 0x20);
    fStack_c0 = (float)extraout_XMM0_Qb;
    fStack_bc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar6._0_4_ = fVar8 - local_c8;
    auVar6._4_4_ = fVar9 - fStack_c4;
    auVar6._8_4_ = in_XMM1_Dc - fStack_c0;
    auVar6._12_4_ = in_XMM1_Dd - fStack_bc;
    auVar7 = blendps(auVar6,auVar7,2);
    local_a8 = 0;
    local_a0 = '\0';
    FUN_01d5ef60(auVar7._0_8_,0xffffffff);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x1c8) + 0x918))();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1 < iVar1;
}


