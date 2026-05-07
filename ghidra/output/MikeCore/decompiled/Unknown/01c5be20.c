// Function: FUN_01c5be20
// Address: 01c5be20
// Size: 515 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01c5be20(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RDI;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  auVar19._0_8_ = FUN_01e3f820();
  auVar19._8_8_ = extraout_XMM0_Qb;
  if (*(int *)(unaff_RDI + 0x1c8) == 1) {
    auVar18._8_4_ = (int)extraout_XMM0_Qb;
    auVar18._0_8_ = auVar19._0_8_;
    auVar18._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    fVar4 = in_XMM1._4_4_;
    auVar7._4_4_ = fVar4;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = in_XMM1._12_4_;
    auVar7._12_4_ = in_XMM1._12_4_;
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = fVar4 + DAT_0241c6e8 + DAT_02390d00;
    local_68 = insertps(auVar18,auVar8,0x10);
    uVar3 = DAT_02392fd8;
  }
  else {
    local_68 = blendps(auVar19,in_XMM1,2);
    uVar3 = 0;
  }
  FUN_01c41970();
  lVar2 = *(longlong *)(unaff_RDI + 0x200);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  iVar1 = *(int *)(lVar2 + 0xc);
  FUN_00d50b20();
  if (param_2 + 1 < iVar1) {
    if (param_2 == 0) {
      FUN_01c41970();
      if (*(longlong *)(unaff_RDI + 0x200) != 0) {
        FUN_00d50b00();
      }
      uVar5 = FUN_01c82bc0();
      FUN_00d50b20();
      local_48 = (float)uVar5;
      uStack_44 = (uint)((ulonglong)uVar5 >> 0x20);
      uStack_40 = (uint)extraout_XMM0_Qb_03;
      uStack_3c = (uint)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
      auVar11._0_4_ = (uint)local_48 & _DAT_023945e0;
      auVar11._4_4_ = uStack_44 & _UNK_023945e4;
      auVar11._8_4_ = uStack_40 & _UNK_023945e8;
      auVar11._12_4_ = uStack_3c & _UNK_023945ec;
      auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
      auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + local_48;
      auVar17 = roundss(ZEXT816(0),auVar12,0xb);
      auVar19 = ZEXT816(0);
      goto LAB_01c5c003;
    }
    uVar5 = FUN_01c82bc0();
    FUN_01c41970();
    if (*(longlong *)(unaff_RDI + 0x200) != 0) {
      FUN_00d50b00();
    }
    uVar6 = FUN_01c82bc0();
    FUN_00d50b20();
    local_48 = (float)uVar5;
    uStack_44 = (uint)((ulonglong)uVar5 >> 0x20);
    uStack_40 = (uint)extraout_XMM0_Qb_00;
    uStack_3c = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    auVar9._0_4_ = _DAT_023945e0 & (uint)local_48;
    auVar9._4_4_ = _UNK_023945e4 & uStack_44;
    auVar9._8_4_ = _UNK_023945e8 & uStack_40;
    auVar9._12_4_ = _UNK_023945ec & uStack_3c;
    auVar10._4_12_ = SUB1612(auVar9 | _DAT_023945f0,4);
    auVar10._0_4_ = SUB164(auVar9 | _DAT_023945f0,0) + local_48;
    local_78 = (float)uVar6;
    uStack_74 = (uint)((ulonglong)uVar6 >> 0x20);
    uStack_70 = (uint)extraout_XMM0_Qb_01;
    uStack_6c = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    auVar13._0_4_ = (uint)local_78 & _DAT_023945e0;
    auVar13._4_4_ = uStack_74 & _UNK_023945e4;
    auVar13._8_4_ = uStack_70 & _UNK_023945e8;
    auVar13._12_4_ = uStack_6c & _UNK_023945ec;
    auVar19 = roundss(ZEXT816(0),auVar10,0xb);
    auVar14._4_12_ = SUB1612(auVar13 | _DAT_023945f0,4);
    auVar14._0_4_ = SUB164(auVar13 | _DAT_023945f0,0) + local_78;
    auVar15 = roundss(auVar14,auVar14,0xb);
  }
  else {
    if (param_2 < 1) {
      auVar19 = ZEXT816(0);
    }
    else {
      uVar5 = FUN_01c82bc0();
      auVar16._0_4_ = _DAT_023945e0 & (uint)(float)uVar5;
      auVar16._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar5 >> 0x20);
      auVar16._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_02;
      auVar16._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
      in_XMM1._4_12_ = SUB1612(auVar16 | _DAT_023945f0,4);
      in_XMM1._0_4_ = SUB164(auVar16 | _DAT_023945f0,0) + (float)uVar5;
      auVar19 = roundss(ZEXT816(0),in_XMM1,0xb);
    }
    fVar4 = (float)FUN_01e3f820();
    auVar15._4_12_ = in_XMM1._4_12_;
    auVar15._0_4_ = in_XMM1._0_4_ + fVar4 + DAT_02390d00;
  }
  auVar17._4_12_ = auVar15._4_12_;
  auVar17._0_4_ = auVar15._0_4_ - auVar19._0_4_;
LAB_01c5c003:
  insertps(auVar17,uVar3,0x10);
  auVar19 = blendps(local_68,auVar19,1);
  return auVar19._0_8_;
}


