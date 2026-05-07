// Function: FUN_01965aa0
// Address: 01965aa0
// Size: 1413 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01965ae6) */
/* WARNING: Removing unreachable block (ram,0x01965aef) */
/* WARNING: Removing unreachable block (ram,0x01965d21) */
/* WARNING: Removing unreachable block (ram,0x01965d2e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_01965aa0(pthread_key_t param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  uint uVar17;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 local_a8 [16];
  float local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  char local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  
  FUN_01989f80();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (unaff_RSI != (undefined8 *)0x0) {
    (**(code **)(*unaff_RDI + 0x928))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x928))();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        fVar19 = *(float *)(param_2 + 1);
        local_58._0_8_ = param_2[1];
        local_58._8_8_ = 0;
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152e3a0();
        uVar4 = (**(code **)(*local_40 + 0x938))();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152e5d0();
        uVar5 = (**(code **)(*local_40 + 0x938))();
        local_68._0_4_ = (undefined4)uVar4;
        local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_68._8_4_ = (undefined4)extraout_XMM0_Qb;
        local_68._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        fVar18 = (float)*param_2;
        fVar3 = (float)uVar5;
        uVar16 = (uint)((ulonglong)uVar5 >> 0x20);
        uVar17 = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        if (fVar18 <= (float)local_68._0_4_) {
          fVar31 = *(float *)(param_2 + 1) + fVar18 + DAT_02390d00;
          local_a8 = ZEXT816(0);
          if ((float)local_68._0_4_ <= fVar31) goto joined_r0x01965da9;
          fVar31 = (float)local_68._0_4_ - fVar31;
          auVar34._0_4_ = _DAT_023945e0 & (uint)fVar31;
          auVar34._4_4_ = _UNK_023945e4 & local_68._4_4_;
          auVar34._8_4_ = _UNK_023945e8 & local_68._8_4_;
          auVar34._12_4_ = _UNK_023945ec & local_68._12_4_;
          auVar36._4_12_ = SUB1612(auVar34 | _DAT_023945f0,4);
          auVar36._0_4_ = SUB164(auVar34 | _DAT_023945f0,0) + fVar31;
          auVar34 = roundss(auVar36,auVar36,0xb);
          auVar37._4_12_ = auVar34._4_12_;
          auVar37._0_4_ = auVar34._0_4_ + DAT_02390124 + fVar19;
          local_68 = blendps(auVar37,local_58,0xe);
          if (fVar3 < fVar18) goto LAB_01965cc0;
LAB_01965daf:
          fVar18 = fVar18 + *(float *)(param_2 + 1) + DAT_02390d00;
          if (fVar3 <= fVar18) {
            local_88 = ZEXT816(0);
          }
          else {
            local_88 = ZEXT816(0);
            fVar3 = fVar3 - fVar18;
            auVar23._0_4_ = _DAT_023945e0 & (uint)fVar3;
            auVar23._4_4_ = _UNK_023945e4 & uVar16;
            auVar23._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_00;
            auVar23._12_4_ = _UNK_023945ec & uVar17;
            auVar24._4_12_ = SUB1612(auVar23 | _DAT_023945f0,4);
            auVar24._0_4_ = SUB164(auVar23 | _DAT_023945f0,0) + fVar3;
            auVar8._0_12_ = ZEXT812(0);
            auVar8._12_4_ = 0;
            auVar34 = roundss(auVar8,auVar24,0xb);
            local_58 = blendps(local_58,ZEXT416((uint)(fVar19 + auVar34._0_4_ + DAT_02390124)),1);
          }
        }
        else {
          auVar32._0_4_ = _DAT_023945e0 & (uint)((float)local_68._0_4_ - fVar18);
          auVar32._4_4_ = _UNK_023945e4 & local_68._4_4_;
          auVar32._8_4_ = _UNK_023945e8 & local_68._8_4_;
          auVar32._12_4_ = _UNK_023945ec & local_68._12_4_;
          auVar33._4_12_ = SUB1612(auVar32 | _DAT_023945f0,4);
          auVar33._0_4_ = SUB164(auVar32 | _DAT_023945f0,0) + ((float)local_68._0_4_ - fVar18);
          auVar34 = roundss(auVar33,auVar33,0xb);
          auVar35._4_12_ = auVar34._4_12_;
          auVar35._0_4_ = auVar34._0_4_ + DAT_02390d00;
          local_a8 = blendps(ZEXT816(0),auVar35,1);
joined_r0x01965da9:
          local_68._8_8_ = 0;
          local_68._0_8_ = local_58._0_8_;
          if (fVar18 <= fVar3) goto LAB_01965daf;
LAB_01965cc0:
          auVar20._0_4_ = _DAT_023945e0 & (uint)(fVar3 - fVar18);
          auVar20._4_4_ = _UNK_023945e4 & uVar16;
          auVar20._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_00;
          auVar20._12_4_ = _UNK_023945ec & uVar17;
          auVar21._4_12_ = SUB1612(auVar20 | _DAT_023945f0,4);
          auVar21._0_4_ = SUB164(auVar20 | _DAT_023945f0,0) + (fVar3 - fVar18);
          auVar6._0_12_ = ZEXT812(0);
          auVar6._12_4_ = 0;
          auVar34 = roundss(auVar6,auVar21,0xb);
          auVar7._4_12_ = auVar34._4_12_;
          auVar7._0_4_ = auVar34._0_4_ + DAT_02390d00;
          auVar22._0_12_ = ZEXT812(0);
          auVar22._12_4_ = 0;
          local_88 = blendps(auVar22,auVar7,1);
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar9._0_8_ = FUN_0152e000();
        auVar9._8_8_ = extraout_XMM0_Qb_01;
        auVar10._4_12_ = auVar9._4_12_;
        auVar10._0_4_ = (float)auVar9._0_8_ + DAT_0241b664;
        uVar4 = FUN_0198a7d0(auVar10._0_8_);
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar11._0_8_ = FUN_0152e000();
        auVar11._8_8_ = extraout_XMM0_Qb_03;
        auVar12._4_12_ = auVar11._4_12_;
        auVar12._0_4_ = (float)auVar11._0_8_ + DAT_023908e0;
        uVar5 = FUN_0198a7d0(auVar12._0_8_);
        fVar19 = *(float *)((longlong)param_2 + 4);
        local_98 = (float)uVar4;
        uStack_94 = (uint)((ulonglong)uVar4 >> 0x20);
        uStack_90 = (uint)extraout_XMM0_Qb_02;
        uStack_8c = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
        if (fVar19 <= local_98) {
          fVar3 = *(float *)((longlong)param_2 + 0xc) + fVar19 + DAT_02390d00;
          if (fVar3 < local_98) {
            local_98 = local_98 - fVar3;
            auVar41._0_4_ = _DAT_023945e0 & (uint)local_98;
            auVar41._4_4_ = _UNK_023945e4 & uStack_94;
            auVar41._8_4_ = _UNK_023945e8 & uStack_90;
            auVar41._12_4_ = _UNK_023945ec & uStack_8c;
            auVar42._4_12_ = SUB1612(auVar41 | _DAT_023945f0,4);
            auVar42._0_4_ = SUB164(auVar41 | _DAT_023945f0,0) + local_98;
            auVar34 = roundss(auVar42,auVar42,0xb);
            fVar3 = local_68._4_4_;
            auVar43._4_4_ = fVar3;
            auVar43._0_4_ = fVar3;
            auVar43._8_4_ = local_68._12_4_;
            auVar43._12_4_ = local_68._12_4_;
            auVar44._4_12_ = auVar43._4_12_;
            auVar44._0_4_ = fVar3 + auVar34._0_4_ + DAT_02390124;
            auVar34 = insertps(local_68,auVar44,0x10);
            local_68._0_8_ = auVar34._0_8_;
          }
        }
        else {
          auVar38._0_4_ = _DAT_023945e0 & (uint)(local_98 - fVar19);
          auVar38._4_4_ = _UNK_023945e4 & uStack_94;
          auVar38._8_4_ = _UNK_023945e8 & uStack_90;
          auVar38._12_4_ = _UNK_023945ec & uStack_8c;
          auVar39._4_12_ = SUB1612(auVar38 | _DAT_023945f0,4);
          auVar39._0_4_ = SUB164(auVar38 | _DAT_023945f0,0) + (local_98 - fVar19);
          auVar34 = roundss(auVar39,auVar39,0xb);
          auVar40._4_12_ = auVar34._4_12_;
          auVar40._0_4_ = auVar34._0_4_ + DAT_02390d00;
          insertps(local_a8,auVar40,0x10);
        }
        fVar3 = (float)uVar5;
        uVar16 = (uint)((ulonglong)uVar5 >> 0x20);
        uVar17 = (uint)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
        if (fVar19 <= fVar3) {
          fVar19 = fVar19 + *(float *)((longlong)param_2 + 0xc) + DAT_02390d00;
          if (fVar19 < fVar3) {
            fVar3 = fVar3 - fVar19;
            auVar27._0_4_ = _DAT_023945e0 & (uint)fVar3;
            auVar27._4_4_ = _UNK_023945e4 & uVar16;
            auVar27._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_04;
            auVar27._12_4_ = _UNK_023945ec & uVar17;
            auVar28._4_12_ = SUB1612(auVar27 | _DAT_023945f0,4);
            auVar28._0_4_ = SUB164(auVar27 | _DAT_023945f0,0) + fVar3;
            auVar15._0_12_ = ZEXT812(0);
            auVar15._12_4_ = 0;
            auVar34 = roundss(auVar15,auVar28,0xb);
            fVar19 = local_58._4_4_;
            auVar29._4_4_ = fVar19;
            auVar29._0_4_ = fVar19;
            auVar29._8_4_ = local_58._12_4_;
            auVar29._12_4_ = local_58._12_4_;
            auVar30._4_12_ = auVar29._4_12_;
            auVar30._0_4_ = fVar19 + auVar34._0_4_ + DAT_02390124;
            insertps(local_58,auVar30,0x10);
          }
        }
        else {
          auVar25._0_4_ = _DAT_023945e0 & (uint)(fVar3 - fVar19);
          auVar25._4_4_ = _UNK_023945e4 & uVar16;
          auVar25._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_04;
          auVar25._12_4_ = _UNK_023945ec & uVar17;
          auVar26._4_12_ = SUB1612(auVar25 | _DAT_023945f0,4);
          auVar26._0_4_ = SUB164(auVar25 | _DAT_023945f0,0) + (fVar3 - fVar19);
          auVar13._0_12_ = ZEXT812(0);
          auVar13._12_4_ = 0;
          auVar34 = roundss(auVar13,auVar26,0xb);
          auVar14._4_12_ = auVar34._4_12_;
          auVar14._0_4_ = auVar34._0_4_ + DAT_02390d00;
          insertps(local_88,auVar14,0x10);
        }
        FUN_00d052e0();
        uVar4 = FUN_00d05530();
        *unaff_RSI = uVar4;
        unaff_RSI[1] = local_68._0_8_;
        puVar2 = &DAT_02802501;
        FUN_00d50b20();
        goto LAB_01966009;
      }
    }
  }
  puVar2 = (undefined1 *)0x0;
  if (local_40 == (longlong *)0x0) {
    return (undefined1 *)0x0;
  }
LAB_01966009:
  FUN_00d50b20();
  return puVar2;
}


