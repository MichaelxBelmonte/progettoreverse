// Function: FUN_01b17610
// Address: 01b17610
// Size: 521 bytes
// Class: MUScalePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b17610(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  void *pvVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  longlong *plVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  longlong *local_38;
  char local_30;
  
  FUN_01ad3cb0();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == (longlong *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar5 = local_38;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x3a0))();
  uVar7 = (**(code **)(*unaff_RDI + 0x918))();
  uVar8 = FUN_01a1da00();
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    local_38 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*local_38 + 0x3a0))();
  uVar9 = (**(code **)(*unaff_RDI + 0x918))();
  uVar10 = FUN_01a1da00();
  local_58 = (float)uVar8;
  uStack_54 = (uint)((ulonglong)uVar8 >> 0x20);
  uStack_50 = (uint)extraout_XMM0_Qb_00;
  uStack_4c = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar16._0_4_ = (uint)(local_58 * DAT_02390438) & _DAT_023945e0;
  auVar16._4_4_ = uStack_54 & _UNK_023945e4;
  auVar16._8_4_ = uStack_50 & _UNK_023945e8;
  auVar16._12_4_ = uStack_4c & _UNK_023945ec;
  auVar19._4_12_ = SUB1612(auVar16 | ZEXT416(DAT_02394dc8),4);
  auVar19._0_4_ = SUB164(auVar16 | ZEXT416(DAT_02394dc8),0) + local_58 * DAT_02390438;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16 = roundss(auVar15,auVar19,0xb);
  fVar6 = DAT_02392fd8;
  if (auVar16._0_4_ <= DAT_02392fd8) {
    fVar6 = auVar16._0_4_;
  }
  auVar16 = ZEXT416((uint)((float)((uint)(fVar6 * DAT_0239011c) & _DAT_023945e0 | DAT_02394dc8) +
                          fVar6 * DAT_0239011c));
  auVar16 = roundss(auVar16,auVar16,0xb);
  local_68 = (float)uVar7;
  uStack_64 = (uint)((ulonglong)uVar7 >> 0x20);
  uStack_60 = (uint)extraout_XMM0_Qb;
  uStack_5c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_68 = local_68 - auVar16._0_4_;
  auVar17._0_4_ = (uint)local_68 & _DAT_023945e0;
  auVar17._4_4_ = uStack_64 & _UNK_023945e4;
  auVar17._8_4_ = uStack_60 & _UNK_023945e8;
  auVar17._12_4_ = uStack_5c & _UNK_023945ec;
  auVar18._4_12_ = SUB1612(auVar17 | ZEXT416(DAT_02394dc8),4);
  auVar18._0_4_ = SUB164(auVar17 | ZEXT416(DAT_02394dc8),0) + local_68;
  auVar19 = roundss(auVar18,auVar18,0xb);
  fVar6 = (float)uVar10 * DAT_02390438;
  auVar20._0_4_ = (uint)fVar6 & _DAT_023945e0;
  auVar20._4_4_ = (uint)((ulonglong)uVar10 >> 0x20) & _UNK_023945e4;
  auVar20._8_4_ = (uint)extraout_XMM0_Qb_02 & _UNK_023945e8;
  auVar20._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) & _UNK_023945ec;
  auVar21._4_12_ = SUB1612(auVar20 | ZEXT416(DAT_02394dc8),4);
  auVar21._0_4_ = SUB164(auVar20 | ZEXT416(DAT_02394dc8),0) + fVar6;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar16 = roundss(auVar11,auVar21,0xb);
  fVar6 = DAT_02392fd8;
  if (auVar16._0_4_ <= DAT_02392fd8) {
    fVar6 = auVar16._0_4_;
  }
  auVar16 = ZEXT416((uint)((float)((uint)(fVar6 * DAT_0239011c) & _DAT_023945e0 | DAT_02394dc8) +
                          fVar6 * DAT_0239011c));
  auVar16 = roundss(auVar16,auVar16,0xb);
  fVar6 = (float)uVar9 + auVar16._0_4_;
  auVar13._0_4_ = _DAT_023945e0 & (uint)fVar6;
  auVar13._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar9 >> 0x20);
  auVar13._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_01;
  auVar13._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  auVar14._4_12_ = SUB1612(auVar13 | ZEXT416(DAT_02394dc8),4);
  auVar14._0_4_ = SUB164(auVar13 | ZEXT416(DAT_02394dc8),0) + fVar6;
  auVar16 = roundss(ZEXT816(0),auVar14,0xb);
  auVar12._4_12_ = auVar16._4_12_;
  auVar12._0_4_ = auVar16._0_4_ - auVar19._0_4_;
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = param_2;
  auVar15 = insertps(auVar1,auVar12,0x10);
  auVar2._8_8_ = in_XMM0_Qb;
  auVar2._0_8_ = param_1;
  auVar16 = insertps(auVar2,auVar19,0x10);
  (**(code **)(*unaff_RDI + 0x618))(auVar16._0_8_,auVar15._0_8_);
  FUN_00d50b20();
  return;
}


