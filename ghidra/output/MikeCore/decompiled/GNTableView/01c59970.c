// Function: FUN_01c59970
// Address: 01c59970
// Size: 3055 bytes
// Class: GNTableView


/* WARNING: Removing unreachable block (ram,0x01c59c6f) */
/* WARNING: Removing unreachable block (ram,0x01c59c7b) */

void FUN_01c59970(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char *pcVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar11;
  float fVar12;
  undefined4 in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  fStack_f4 = (float)((ulonglong)param_2 >> 0x20);
  local_f8 = (float)param_2;
  fStack_e4 = (float)((ulonglong)param_1 >> 0x20);
  local_e8 = (float)param_1;
  uStack_f0 = in_XMM1_Dc;
  fStack_ec = in_XMM1_Dd;
  fStack_dc = in_XMM0_Dd;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  pcVar7 = local_48;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = plVar1;
  if (((char)unaff_RDI[0x5c] == '\0') && (unaff_RDI[0x2e] != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (longlong *)unaff_RDI[0x2e];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    uVar8 = (**(code **)(*plVar1 + 0x390))((int)unaff_RDI[0x4b]);
    *(undefined4 *)((longlong)unaff_RDI + 0x254) = uVar8;
    FUN_00d50b20();
  }
  if (local_f8 < DAT_023908d8) {
    local_e8 = local_e8 + DAT_023b1614;
    local_f8 = local_f8 + DAT_023b36b0;
  }
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  uVar8 = uStack_f0;
  fVar13 = fStack_ec;
  FUN_01e3f820();
  if ((int)unaff_RDI[0x39] == 1) {
    local_d8 = FUN_01e3f820();
    lVar4 = unaff_RDI[0x39];
    local_c8._0_4_ = fVar11;
    local_c8._4_4_ = fVar12;
    uStack_c0 = uVar8;
    fStack_bc = fVar13;
    FUN_01d48370();
    auVar3._4_4_ = local_c8._4_4_;
    auVar3._0_4_ = (float)local_c8;
    auVar3._8_4_ = uStack_c0;
    auVar3._12_4_ = fStack_bc;
    if ((int)lVar4 == 1) {
      auVar2._4_4_ = local_c8._4_4_;
      auVar2._0_4_ = local_c8._4_4_ + DAT_0241c6e4;
      auVar2._8_4_ = fStack_bc;
      auVar2._12_4_ = fStack_bc;
      insertps(auVar3,auVar2,0x10);
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_00d05360(local_e8,local_f8,(undefined4)local_d8);
    (**(code **)(*plVar1 + 0x390))();
  }
  FUN_01c532f0(local_e8,local_f8);
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  uVar8 = uStack_f0;
  fVar13 = fStack_ec;
  FUN_01c54470(local_e8);
  if (((((*(float *)((longlong)unaff_RDI + 0x21c) != (float)DAT_023dccec) ||
        (NAN(*(float *)((longlong)unaff_RDI + 0x21c)) || NAN((float)DAT_023dccec))) ||
       (*(float *)(unaff_RDI + 0x44) != DAT_023dccec._4_4_)) ||
      ((NAN(*(float *)(unaff_RDI + 0x44)) || NAN(DAT_023dccec._4_4_) ||
       (*(float *)((longlong)unaff_RDI + 0x224) != (float)DAT_023dccf4)))) ||
     (NAN(*(float *)((longlong)unaff_RDI + 0x224)) || NAN((float)DAT_023dccf4))) {
LAB_01c59bbf:
    FUN_01d39800((int)*(undefined8 *)((longlong)unaff_RDI + 0x21c),
                 (int)*(undefined8 *)((longlong)unaff_RDI + 0x224),DAT_02390124);
    plVar1 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_58 + 0x390))();
    plVar5 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d488d0();
    FUN_01d48b40(DAT_02390124);
    fVar11 = (float)*(undefined8 *)((longlong)unaff_RDI + 0x21c);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              (fVar11,(float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x21c) >> 0x20) +
                      DAT_02394248,*(float *)((longlong)unaff_RDI + 0x224) + fVar11 + DAT_02390d00);
    uVar8 = (undefined4)*(undefined8 *)((longlong)unaff_RDI + 0x21c);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              (uVar8,(float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x21c) >> 0x20) +
                     DAT_02394248,uVar8);
    fVar12 = (float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x21c) >> 0x20);
    fVar9 = *(float *)((longlong)unaff_RDI + 0x224) +
            (float)*(undefined8 *)((longlong)unaff_RDI + 0x21c) + DAT_02390d00;
    uVar8 = 0;
    fVar13 = 0.0;
    fVar11 = fVar12 + DAT_02394248;
    fVar9 = (float)(**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar9,fVar11,fVar9);
    if (plVar5 != (longlong *)0x0) {
      fVar9 = (float)FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      fVar9 = (float)FUN_00d50b20();
    }
  }
  else {
    fVar9 = *(float *)(unaff_RDI + 0x45);
    if ((fVar9 != DAT_023dccf4._4_4_) || (NAN(fVar9) || NAN(DAT_023dccf4._4_4_))) goto LAB_01c59bbf;
  }
  if ((int)unaff_RDI[0x39] == 1) {
    FUN_01d48390();
    fVar11 = local_f8;
    fVar9 = (float)FUN_01c5ab50(local_e8);
    fVar12 = fStack_f4;
    uVar8 = uStack_f0;
    fVar13 = fStack_ec;
  }
  lVar4 = DAT_026e41f0;
  if ((*(char *)((longlong)unaff_RDI + 0x22d) != '\0') ||
     (*(char *)((longlong)unaff_RDI + 0x22e) != '\0')) {
    if (DAT_026e41f0 != 0) {
      fVar9 = (float)FUN_00d50b00();
    }
    local_128 = lVar4;
    local_120 = '\x01';
    (**(code **)(*local_58 + 0x3b0))(fVar9,&local_128);
    local_98 = local_40;
    local_90 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_90 = '\x01';
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (*(char *)((longlong)unaff_RDI + 0x22e) != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      fVar9 = (float)FUN_01e3f820();
      fVar9 = fVar9 + fVar11;
      fVar11 = 0.0;
      fVar12 = 0.0;
      uVar8 = 0;
      fVar13 = 0.0;
      (**(code **)(*plVar1 + 0x3e0))(0,0,fVar9 + DAT_02390d00);
    }
    if (*(char *)((longlong)unaff_RDI + 0x22d) != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      uVar10 = FUN_01e3f820();
      local_c8._0_4_ = fVar11;
      local_c8._4_4_ = fVar12;
      uStack_c0 = uVar8;
      fStack_bc = fVar13;
      local_d8 = uVar10;
      fVar9 = (float)FUN_01e3f820();
      FUN_01e3f820();
      fVar12 = extraout_XMM0_Db + fVar12;
      auVar14._4_4_ = fVar12;
      auVar14._0_4_ = fVar12;
      auVar14._8_4_ = extraout_XMM0_Dd + fVar13;
      auVar14._12_4_ = extraout_XMM0_Dd + fVar13;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = fVar12 + DAT_02390d00;
      (**(code **)(*plVar1 + 0x3e0))
                (0,local_d8._4_4_ + local_c8._4_4_ + DAT_02390d00,fVar9 + fVar11 + DAT_02390d00,
                 auVar15._0_8_);
    }
  }
  fVar11 = 0.0;
  fVar12 = 0.0;
  if ((*(float *)((longlong)unaff_RDI + 0x23c) != 0.0) ||
     (NAN(*(float *)((longlong)unaff_RDI + 0x23c)))) {
    uVar8 = FUN_01d48a00();
    local_d8._0_4_ = uVar8;
    FUN_01d489d0(*(undefined4 *)((longlong)unaff_RDI + 0x23c));
    FUN_01d48b40(DAT_02390124);
    FUN_01c4b410();
    local_b8 = local_40;
    local_b0 = 0;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    FUN_01d488d0();
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_c8._0_4_ = (float)unaff_RDI[0x49];
    local_c8._4_4_ = (float)((ulonglong)unaff_RDI[0x49] >> 0x20);
    uStack_c0 = 0;
    fStack_bc = 0.0;
    FUN_01e3f820();
    fVar11 = extraout_XMM0_Db_00 + fVar11;
    auVar16._4_4_ = fVar11;
    auVar16._0_4_ = fVar11;
    auVar16._8_4_ = extraout_XMM0_Dd_00 + fVar12;
    auVar16._12_4_ = extraout_XMM0_Dd_00 + fVar12;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = fVar11 + DAT_02390d00;
    (**(code **)(*plVar1 + 0x3e0))((float)local_c8,0,(float)local_c8,auVar17._0_8_);
    FUN_01d489d0((undefined4)local_d8);
  }
  lVar4 = unaff_RDI[0x5b];
  if (lVar4 != 0) {
    FUN_00d50b00();
    FUN_01d48b40(DAT_02390124);
    FUN_01c4b410();
    local_a8 = local_40;
    local_a0 = 0;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    uVar10 = FUN_00dd6bf0();
    local_d8 = uVar10;
    local_c8 = FUN_00dd6bf0();
    uStack_c0 = extraout_XMM0_Dc;
    fStack_bc = extraout_XMM0_Dd_01;
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3e0))((undefined4)local_d8,0,(float)local_c8);
  }
  if ((((char)unaff_RDI[0x4a] != '\0') && (local_e8 <= *(float *)((longlong)unaff_RDI + 0x254))) &&
     (*(float *)((longlong)unaff_RDI + 0x254) <= local_e8 + local_f8 + DAT_02390d00)) {
    FUN_01d48b40(DAT_02390124);
    (**(code **)(*local_58 + 0x390))();
    local_88 = local_40;
    local_80 = 0;
    fVar11 = fStack_e4;
    fVar12 = fStack_dc;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        fVar11 = fStack_e4;
        fVar12 = fStack_dc;
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    uVar10 = local_d8;
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar10 = local_d8;
    }
    local_d8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      local_d8 = uVar10;
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_d8._0_4_ = *(undefined4 *)((longlong)unaff_RDI + 0x254);
    uVar10 = FUN_01e3f820();
    uVar8 = *(undefined4 *)((longlong)unaff_RDI + 0x254);
    uStack_c0 = extraout_XMM0_Dc_00;
    fStack_bc = extraout_XMM0_Dd_02;
    local_c8 = uVar10;
    FUN_01e3f820();
    fVar11 = extraout_XMM0_Db_01 + fVar11;
    auVar18._4_4_ = fVar11;
    auVar18._0_4_ = fVar11;
    auVar18._8_4_ = extraout_XMM0_Dd_03 + fVar12;
    auVar18._12_4_ = extraout_XMM0_Dd_03 + fVar12;
    auVar19._4_12_ = auVar18._4_12_;
    auVar19._0_4_ = fVar11 + DAT_02390d00;
    (**(code **)(*plVar1 + 0x3e0))((undefined4)local_d8,local_c8._4_4_,uVar8,auVar19._0_8_);
  }
  if ((*(float *)(unaff_RDI + 0x52) == (float)DAT_023dccec) &&
     (!NAN(*(float *)(unaff_RDI + 0x52)) && !NAN((float)DAT_023dccec))) {
    if ((*(float *)((longlong)unaff_RDI + 0x294) == DAT_023dccec._4_4_) &&
       (!NAN(*(float *)((longlong)unaff_RDI + 0x294)) && !NAN(DAT_023dccec._4_4_))) {
      if ((*(float *)(unaff_RDI + 0x53) == (float)DAT_023dccf4) &&
         (!NAN(*(float *)(unaff_RDI + 0x53)) && !NAN((float)DAT_023dccf4))) {
        if ((*(float *)((longlong)unaff_RDI + 0x29c) == DAT_023dccf4._4_4_) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x29c)) && !NAN(DAT_023dccf4._4_4_)))
        goto LAB_01c5a52a;
      }
    }
  }
  cVar6 = FUN_00d054a0((int)unaff_RDI[0x52],(int)unaff_RDI[0x53],local_e8);
  if (cVar6 != '\0') {
    FUN_01d39800((int)unaff_RDI[0x52],(int)unaff_RDI[0x53],DAT_02390d34);
    plVar1 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_58 + 0x390))();
    plVar5 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfcdc0((int)plVar5[2],*(undefined4 *)((longlong)plVar5 + 0x14),(int)plVar5[3],
                 *(float *)((longlong)plVar5 + 0x1c) * DAT_023b1610);
    local_78 = local_40;
    local_70 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_118 = plVar1;
    local_110 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_58 + 0x390))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_60 = '\x01';
    FUN_01d488d0();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02390124);
    local_108 = plVar1;
    local_100 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01c5a52a:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


