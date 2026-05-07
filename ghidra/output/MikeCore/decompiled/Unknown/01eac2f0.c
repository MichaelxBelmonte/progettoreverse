// Function: FUN_01eac2f0
// Address: 01eac2f0
// Size: 2233 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01eac3bf) */
/* WARNING: Removing unreachable block (ram,0x01eac3cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01eac2f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 in_RDX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa;
  uint extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar15;
  undefined1 auVar18 [16];
  uint extraout_XMM0_Dd_00;
  undefined8 extraout_XMM0_Qb_01;
  uint extraout_XMM0_Dd_01;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar55 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  longlong local_90;
  char local_88;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  char local_31;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_08;
  
  puVar8 = (undefined8 *)*param_1;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_31 = '\x01';
  }
  else {
    local_31 = *(char *)(param_1 + 1);
    if (local_31 != '\0') {
      FUN_00d50b00();
    }
    FUN_00c8e340();
  }
  FUN_01ebf700();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*(longlong *)unaff_RSI[8] + 0x380))();
  (**(code **)(*unaff_RSI + 0x3b0))();
  iVar6 = (int)((ulonglong)in_RDX >> 0x20);
  if (iVar6 == 1) {
    uVar15 = (**(code **)(*unaff_RSI + 1000))();
    fVar10 = (float)(**(code **)(*(longlong *)unaff_RSI[8] + 0x390))();
    uVar14 = (**(code **)(*(longlong *)unaff_RSI[8] + 0x390))();
    uStack_b0 = (undefined4)extraout_XMM0_Qb;
    uStack_ac = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    uVar13 = FUN_00d8cbc0();
    cVar4 = FUN_01e9c7e0(uVar13,0);
    local_68._0_4_ = (undefined4)uVar15;
    auVar35 = ZEXT416(_DAT_023945e0 & (uint)(DAT_0239011c + (float)local_68._0_4_)) | _DAT_023945f0;
    auVar40._4_12_ = auVar35._4_12_;
    auVar40._0_4_ = auVar35._0_4_ + DAT_0239011c + (float)local_68._0_4_;
    auVar40 = roundss(ZEXT816(0),auVar40,0xb);
    local_58._0_4_ = (undefined4)param_2;
    local_58._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
    uStack_50._4_4_ = (uint)((ulonglong)in_XMM1_Qb >> 0x20);
    auVar30._0_4_ = (uint)((float)local_58._4_4_ + DAT_0239011c) & _DAT_023945e0;
    auVar30._4_4_ = local_58._4_4_ & _UNK_023945e4;
    auVar30._8_4_ = uStack_50._4_4_ & _UNK_023945e8;
    auVar30._12_4_ = uStack_50._4_4_ & _UNK_023945ec;
    auVar39._4_12_ = SUB1612(auVar30 | ZEXT416(DAT_02394dc8),4);
    auVar39._0_4_ = SUB164(auVar30 | ZEXT416(DAT_02394dc8),0) + (float)local_58._4_4_ + DAT_0239011c
    ;
    auVar55._0_12_ = ZEXT812(0);
    auVar55._12_4_ = 0;
    auVar55 = roundss(auVar55,auVar39,0xb);
    uVar13 = auVar55._0_8_;
    auVar30 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)(_DAT_023945e0 &
                                             (uint)(DAT_0239011c + (float)local_58._0_4_) |
                                            DAT_02394dc8) + DAT_0239011c + (float)local_58._0_4_)),
                      0xb);
    auVar35._8_4_ = uStack_b0;
    auVar35._0_8_ = uVar14;
    auVar35._12_4_ = uStack_ac;
    auVar34._4_12_ = auVar35._4_12_;
    auVar34._0_4_ = (float)uVar14 + (float)uVar14 + auVar55._0_4_;
    auVar35 = insertps(auVar30,auVar34,0x10);
    local_58 = auVar35._0_8_;
    if ((cVar4 != '\0') && (cVar4 = FUN_01f15ea0(), uVar13 = extraout_XMM0_Qa, cVar4 != '\0')) {
      auVar16._0_8_ = FUN_01f15df0();
      auVar16._8_8_ = extraout_XMM0_Qb_00;
      local_c8 = auVar40._0_4_;
      auVar17._4_12_ = auVar16._4_12_;
      auVar17._0_4_ = (float)auVar16._0_8_ - local_c8;
      uVar13 = auVar17._0_8_;
      auVar35 = blendps(auVar35,auVar17,1);
      local_58 = auVar35._0_8_;
    }
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340(uVar13,1);
    local_68._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
    fVar10 = ((float)local_68._4_4_ + DAT_0239011c) - fVar10;
    auVar26._0_4_ = _DAT_023945e0 & (uint)fVar10;
    auVar26._4_4_ = _UNK_023945e4 & local_68._4_4_;
    auVar26._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd;
    auVar26._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
    auVar27._4_12_ = SUB1612(auVar26 | _DAT_023945f0,4);
    auVar27._0_4_ = SUB164(auVar26 | _DAT_023945f0,0) + fVar10;
    auVar18._0_12_ = ZEXT812(0);
    auVar18._12_4_ = 0;
    auVar35 = roundss(auVar18,auVar27,0xb);
    auVar35 = insertps(auVar40,auVar35,0x10);
    lVar2 = puVar8[2];
    *(undefined8 *)(lVar2 + iVar6) = auVar35._0_8_;
    ((undefined8 *)(lVar2 + iVar6))[1] = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_31 == '\0') {
      FUN_00d50b00();
    }
  }
  else if (iVar6 == 0) {
    uVar13 = FUN_01eabe50();
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340(uVar13,1);
    lVar2 = puVar8[2];
    *(undefined8 *)(lVar2 + iVar6) = uVar13;
    ((undefined8 *)(lVar2 + iVar6))[1] = param_2;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_31 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    iVar6 = (**(code **)(*unaff_RSI + 0x3e0))();
    iVar7 = (**(code **)(*unaff_RSI + 0x3e0))();
    uVar13 = (**(code **)(*unaff_RSI + 1000))();
    local_58 = (undefined1  [8])param_2;
    uStack_50 = in_XMM1_Qb;
    fVar11 = (float)(**(code **)(*(longlong *)unaff_RSI[8] + 0x390))();
    local_d8 = (**(code **)(*(longlong *)unaff_RSI[8] + 0x390))();
    uStack_d0 = extraout_XMM0_Qb_01;
    uVar15 = (**(code **)(*unaff_RSI + 1000))();
    local_b8 = (float)uVar15;
    fStack_b4 = (float)((ulonglong)uVar15 >> 0x20);
    fVar12 = (float)(**(code **)(*(longlong *)unaff_RSI[8] + 0x390))();
    auVar19._0_8_ = (**(code **)(*(longlong *)unaff_RSI[8] + 0x390))();
    auVar19._8_8_ = extraout_XMM0_Qb_02;
    local_68._0_4_ = (undefined4)uVar13;
    local_68._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
    auVar35 = ZEXT416(_DAT_023945e0 & (uint)(DAT_0239011c + (float)local_68._0_4_)) | _DAT_023945f0;
    auVar36._4_12_ = auVar35._4_12_;
    auVar36._0_4_ = auVar35._0_4_ + DAT_0239011c + (float)local_68._0_4_;
    auVar55 = roundss(unaff_XMM10,auVar36,0xb);
    auVar35 = ZEXT416(_DAT_023945e0 & (uint)(DAT_0239011c + local_b8)) | _DAT_023945f0;
    auVar44._4_12_ = auVar35._4_12_;
    auVar44._0_4_ = auVar35._0_4_ + DAT_0239011c + local_b8;
    auVar37._0_12_ = ZEXT812(0);
    auVar37._12_4_ = 0;
    auVar35 = roundss(auVar37,auVar44,0xb);
    fVar10 = (float)((ulonglong)local_58 >> 0x20);
    uVar3 = (uint)((ulonglong)uStack_50 >> 0x20);
    auVar28._4_12_ = local_58._4_12_;
    auVar28._0_4_ = SUB84(local_58,0) + DAT_0239011c;
    auVar45._0_4_ = (uint)auVar28._0_4_ & _DAT_023945e0;
    auVar45._4_4_ = (uint)fVar10 & _UNK_023945e4;
    auVar45._8_4_ = (uint)uStack_50 & _UNK_023945e8;
    auVar45._12_4_ = uVar3 & _UNK_023945ec;
    auVar46._4_12_ = SUB1612(auVar45 | ZEXT416(DAT_02394dc8),4);
    auVar46._0_4_ = SUB164(auVar45 | ZEXT416(DAT_02394dc8),0) + auVar28._0_4_;
    auVar40 = roundss(in_XMM3,auVar46,0xb);
    if (iVar6 == iVar7) {
      fVar11 = ((float)local_68._4_4_ + DAT_0239011c) - fVar11;
      auVar47._0_4_ = _DAT_023945e0 & (uint)fVar11;
      auVar47._4_4_ = _UNK_023945e4 & local_68._4_4_;
      auVar47._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd_00;
      auVar47._12_4_ = _UNK_023945ec & extraout_XMM0_Dd_00;
      auVar48._4_12_ = SUB1612(auVar47 | _DAT_023945f0,4);
      auVar48._0_4_ = SUB164(auVar47 | _DAT_023945f0,0) + fVar11;
      auVar29._0_12_ = ZEXT812(0);
      auVar29._12_4_ = 0;
      auVar30 = roundss(auVar29,auVar48,0xb);
      insertps(auVar55,auVar30,0x10);
      local_a8 = (float)param_2;
      fStack_a4 = (float)((ulonglong)param_2 >> 0x20);
      uStack_a0 = (uint)in_XMM1_Qb;
      uStack_9c = (uint)((ulonglong)in_XMM1_Qb >> 0x20);
      auVar49._0_4_ = (uint)(fStack_a4 + DAT_0239011c) & _DAT_023945e0;
      auVar49._4_4_ = (uint)fStack_a4 & _UNK_023945e4;
      auVar49._8_4_ = uStack_9c & _UNK_023945e8;
      auVar49._12_4_ = uStack_9c & _UNK_023945ec;
      auVar50._4_12_ = SUB1612(auVar49 | ZEXT416(DAT_02394dc8),4);
      auVar50._0_4_ = SUB164(auVar49 | ZEXT416(DAT_02394dc8),0) + fStack_a4 + DAT_0239011c;
      auVar30 = roundss(auVar50,auVar50,0xb);
      auVar31._0_4_ = (uint)(local_a8 + DAT_0239011c) & _DAT_023945e0;
      auVar31._4_4_ = (uint)fStack_a4 & _UNK_023945e4;
      auVar31._8_4_ = uStack_a0 & _UNK_023945e8;
      auVar31._12_4_ = uStack_9c & _UNK_023945ec;
      auVar32._4_12_ = SUB1612(auVar31 | ZEXT416(DAT_02394dc8),4);
      auVar32._0_4_ = SUB164(auVar31 | ZEXT416(DAT_02394dc8),0) + local_a8 + DAT_0239011c;
      auVar55 = roundss(auVar32,auVar32,0xb);
      auVar41._4_12_ = local_d8._4_12_;
      auVar41._0_4_ = (float)local_d8 + (float)local_d8 + auVar30._0_4_;
      auVar55 = insertps(auVar55,auVar41,0x10);
      fVar12 = (fStack_b4 + DAT_0239011c) - fVar12;
      auVar53._0_4_ = _DAT_023945e0 & (uint)fVar12;
      auVar53._4_4_ = _UNK_023945e4 & (uint)fStack_b4;
      auVar53._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd_01;
      auVar53._12_4_ = _UNK_023945ec & extraout_XMM0_Dd_01;
      auVar54._4_12_ = SUB1612(auVar53 | ZEXT416(DAT_02394dc8),4);
      auVar54._0_4_ = SUB164(auVar53 | ZEXT416(DAT_02394dc8),0) + fVar12;
      auVar42._0_12_ = ZEXT812(0);
      auVar42._12_4_ = 0;
      auVar30 = roundss(auVar42,auVar54,0xb);
      insertps(auVar35,auVar30,0x10);
      auVar51._0_4_ = _DAT_023945e0 & (uint)(fVar10 + DAT_0239011c);
      auVar51._4_4_ = _UNK_023945e4 & (uint)fVar10;
      auVar51._8_4_ = _UNK_023945e8 & uVar3;
      auVar51._12_4_ = _UNK_023945ec & uVar3;
      auVar52._4_12_ = SUB1612(auVar51 | _DAT_023945f0,4);
      auVar52._0_4_ = SUB164(auVar51 | _DAT_023945f0,0) + fVar10 + DAT_0239011c;
      auVar43._0_12_ = ZEXT812(0);
      auVar43._12_4_ = 0;
      auVar35 = roundss(auVar43,auVar52,0xb);
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = (float)auVar19._0_8_ + (float)auVar19._0_8_ + auVar35._0_4_;
      insertps(auVar40,auVar20,0x10);
      local_68 = (undefined1  [8])FUN_00d052e0();
      local_58 = auVar55._0_8_;
      uStack_60 = extraout_XMM0_Qb_03;
      uVar13 = FUN_00d8cbc0();
      cVar4 = FUN_01e9c7e0(uVar13,0);
      if ((cVar4 != '\0') && (cVar4 = FUN_01f15ea0(), cVar4 != '\0')) {
        auVar21._0_8_ = FUN_01f15df0();
        auVar21._8_8_ = extraout_XMM0_Qb_04;
        auVar35 = blendps(auVar55,auVar21,0xd);
        local_58 = auVar35._0_8_;
        auVar35 = blendps(_local_68,ZEXT816(0),0xd);
        local_68 = auVar35._0_8_;
      }
      iVar6 = *(int *)(puVar8 + 3);
      FUN_00c8e340();
      lVar2 = puVar8[2];
      *(undefined8 *)(lVar2 + iVar6) = local_68;
      ((undefined8 *)(lVar2 + iVar6))[1] = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_31 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (undefined1  [8])FUN_01eacc60();
      local_68 = auVar28._0_8_;
      uStack_50 = extraout_XMM0_Qb_05;
      auVar33 = auVar28;
      uVar9 = FUN_01f15f50();
      uVar13 = FUN_00d8cbc0(uVar9 >> 0x20);
      cVar4 = FUN_01e9c7e0(uVar13,0);
      if (cVar4 == '\0') {
        fVar10 = SUB84(local_58,0);
        auVar30 = blendps(_local_58,auVar55,1);
        local_58 = auVar30._0_8_;
        auVar33._4_12_ = auVar55._4_12_;
        auVar33._0_4_ = auVar55._0_4_ - fVar10;
        auVar38._4_12_ = auVar28._4_12_;
        auVar38._0_4_ = auVar28._0_4_ - auVar33._0_4_;
        local_68 = auVar38._0_8_;
      }
      else {
        cVar4 = FUN_01f15ea0();
        if (cVar4 != '\0') {
          auVar22._0_8_ = FUN_01f15df0();
          auVar22._8_8_ = extraout_XMM0_Qb_06;
          auVar55 = blendps(auVar28,auVar22,0xd);
          local_68 = auVar55._0_8_;
          auVar33 = blendps(_local_58,ZEXT816(0),0xd);
          local_58 = auVar33._0_8_;
        }
      }
      iVar1 = *(int *)(puVar8 + 3);
      FUN_00c8e340();
      lVar2 = puVar8[2];
      *(undefined8 *)(lVar2 + iVar1) = local_58;
      ((undefined8 *)(lVar2 + iVar1))[1] = local_68;
      if (iVar6 < iVar7 + -1) {
        iVar6 = iVar6 + 1;
        auVar55 = auVar33;
        do {
          uVar13 = FUN_01eacc60();
          iVar1 = *(int *)(puVar8 + 3);
          auVar33 = auVar55;
          FUN_00c8e340(uVar13,1);
          lVar2 = puVar8[2];
          local_58 = auVar55._0_8_;
          *(undefined8 *)(lVar2 + iVar1) = uVar13;
          ((undefined8 *)(lVar2 + iVar1))[1] = local_58;
          iVar6 = iVar6 + 1;
          auVar55 = auVar33;
        } while (iVar7 != iVar6);
      }
      local_58 = (undefined1  [8])FUN_01eacc60();
      local_68 = auVar33._0_8_;
      uStack_50 = extraout_XMM0_Qb_07;
      uVar13 = FUN_00d8cbc0();
      cVar4 = FUN_01e9c7e0(uVar13,0);
      if (cVar4 == '\0') {
        if ((uVar5 & 0xf) - 1 < 2) {
          auVar24._0_4_ = SUB84(local_58,0) + auVar33._0_4_;
          auVar24._4_4_ = (float)((ulonglong)local_58 >> 0x20) + auVar33._4_4_;
          auVar24._8_4_ = (float)extraout_XMM0_Qb_07 + auVar33._8_4_;
          auVar24._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20) + auVar33._12_4_;
          auVar35 = blendps(auVar33,auVar24,0xd);
          local_68 = auVar35._0_8_;
          auVar35 = blendps(_local_58,ZEXT816(0),0xd);
          local_58 = auVar35._0_8_;
        }
        else {
          local_d8._0_4_ = auVar40._0_4_;
          auVar25._4_12_ = auVar35._4_12_;
          auVar25._0_4_ = auVar35._0_4_ + (float)local_d8;
          auVar35 = blendps(auVar33,auVar25,1);
          local_68 = auVar35._0_8_;
        }
      }
      else {
        cVar4 = FUN_01f15ea0();
        if (cVar4 != '\0') {
          auVar23._0_8_ = FUN_01f15df0();
          auVar23._8_8_ = extraout_XMM0_Qb_08;
          auVar35 = blendps(auVar33,auVar23,0xd);
          local_68 = auVar35._0_8_;
          auVar35 = blendps(_local_58,ZEXT816(0),0xd);
          local_58 = auVar35._0_8_;
        }
      }
      iVar6 = *(int *)(puVar8 + 3);
      FUN_00c8e340();
      lVar2 = puVar8[2];
      *(undefined8 *)(lVar2 + iVar6) = local_58;
      ((undefined8 *)(lVar2 + iVar6))[1] = local_68;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_31 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


