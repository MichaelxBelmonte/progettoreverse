// Function: FUN_003b3e60
// Address: 003b3e60
// Size: 1233 bytes
// Class: MDMetaWindowController


void FUN_003b3e60(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  float fVar8;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar9;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar10;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar11;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar12;
  float fVar13;
  longlong *local_d8;
  char local_d0;
  longlong local_b8;
  char local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  float fStack_7c;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  cVar3 = (**(code **)(*unaff_RDI + 0x988))();
  if (cVar3 != '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_d8 + 0x470))();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_003b3d20();
    local_70 = local_40;
    local_68 = 0;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    (**(code **)(*plVar1 + 0x3a0))();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar4 = (**(code **)(*unaff_RDI + 0x920))();
  if (iVar4 != 0) {
    uVar7 = (**(code **)(*unaff_RDI + 0x640))();
    plVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar7 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar7,&local_b8);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01d488d0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = (**(code **)(*unaff_RDI + 0x920))();
    if ((~uVar5 & 0xf) == 0) {
      plVar1 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x3b8))();
    }
    else {
      uVar6 = (**(code **)(*unaff_RDI + 0x920))();
      if ((uVar6 & 1) != 0) {
        plVar1 = (longlong *)*unaff_RSI;
        local_a8 = FUN_01e3f820();
        local_98 = FUN_01e3f820();
        fStack_90 = extraout_XMM0_Dc;
        fStack_8c = extraout_XMM0_Dd;
        local_88 = FUN_01e3f820();
        fVar13 = fVar10;
        fVar12 = in_XMM1_Dc;
        FUN_01e3f820();
        fVar10 = local_98._4_4_;
        fVar11 = local_98._4_4_;
        in_XMM1_Dc = fStack_8c;
        in_XMM1_Dd = fStack_8c;
        (**(code **)(*plVar1 + 0x3e0))
                  ((float)local_a8,local_98._4_4_,(float)local_88 + fVar13 + DAT_02390d00,
                   extraout_XMM0_Db,fVar13,fVar12);
      }
      uVar6 = (**(code **)(*unaff_RDI + 0x920))();
      fVar13 = fVar10;
      fVar12 = fVar11;
      if ((uVar6 & 2) != 0) {
        plVar1 = (longlong *)*unaff_RSI;
        uVar9 = FUN_01e3f820();
        local_a8 = uVar9;
        uVar9 = FUN_01e3f820();
        fStack_90 = extraout_XMM0_Dc_00;
        fStack_8c = extraout_XMM0_Dd_00;
        local_88._0_4_ = fVar10;
        local_88._4_4_ = fVar11;
        fStack_7c = in_XMM1_Dd;
        local_98 = uVar9;
        fVar8 = (float)FUN_01e3f820();
        uVar7 = extraout_XMM0_Dc_01;
        FUN_01e3f820();
        fVar12 = local_98._4_4_ + local_88._4_4_;
        in_XMM1_Dc = fStack_8c + fStack_7c;
        fVar13 = fVar12 + DAT_02390d00;
        in_XMM1_Dd = in_XMM1_Dc;
        (**(code **)(*plVar1 + 0x3e0))
                  ((float)local_a8,fVar13,fVar8 + fVar10 + DAT_02390d00,
                   extraout_XMM0_Db_00 + fVar11 + DAT_02390d00,fVar8,uVar7);
      }
      uVar6 = (**(code **)(*unaff_RDI + 0x920))();
      if ((uVar6 & 4) != 0) {
        plVar1 = (longlong *)*unaff_RSI;
        uVar9 = FUN_01e3f820();
        local_a8 = uVar9;
        uVar9 = FUN_01e3f820();
        fStack_90 = extraout_XMM0_Dc_02;
        fStack_8c = extraout_XMM0_Dd_01;
        local_98 = uVar9;
        uVar9 = FUN_01e3f820();
        local_88 = uVar9;
        FUN_01e3f820();
        fVar10 = extraout_XMM0_Db_01 + fVar12;
        fVar13 = local_98._4_4_;
        fVar12 = local_98._4_4_;
        in_XMM1_Dc = fStack_8c;
        in_XMM1_Dd = fStack_8c;
        (**(code **)(*plVar1 + 0x3e0))
                  ((float)local_a8,local_98._4_4_,(float)local_88,fVar10 + DAT_02390d00);
      }
      uVar6 = (**(code **)(*unaff_RDI + 0x920))();
      if ((uVar6 & 8) != 0) {
        plVar1 = (longlong *)*unaff_RSI;
        uVar9 = FUN_01e3f820();
        local_98._0_4_ = fVar13;
        local_98._4_4_ = fVar12;
        fStack_90 = in_XMM1_Dc;
        fStack_8c = in_XMM1_Dd;
        local_a8 = uVar9;
        uVar9 = FUN_01e3f820();
        local_88 = uVar9;
        fVar10 = (float)FUN_01e3f820();
        uVar7 = extraout_XMM0_Dc_03;
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x3e0))
                  ((float)local_a8 + (float)local_98 + DAT_02390d00,local_88._4_4_,
                   fVar10 + fVar13 + DAT_02390d00,extraout_XMM0_Db_02 + fVar12 + DAT_02390d00,fVar10
                   ,uVar7);
      }
    }
    FUN_00d50b20();
  }
  return;
}


