// Function: FUN_019e2fd0
// Address: 019e2fd0
// Size: 1379 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_019e2fd0(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char *pcVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  longlong local_e8;
  char local_e0 [8];
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  double local_58;
  undefined8 uStack_50;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*param_2 + 0xe10))();
  FUN_00d23340();
  pVar6 = CONCAT31((int3)((uint)param_1 >> 8),local_e0[0]);
  local_38[0] = local_e0[0];
  pcVar4 = local_e0;
  if (local_e0[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_e0[0] != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = local_38[0] != '\0';
  pcVar4 = local_38;
  if (!(bool)local_40[0]) {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_e8 == 0) {
    uVar7 = 0;
  }
  else {
    lVar1 = *unaff_RDI;
    lVar2 = *unaff_RSI;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (double)FUN_01259650();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d8 = (double)FUN_012646c0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = (double)FUN_01259650();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_012646c0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = (double)FUN_01259650();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012646c0();
    dVar23 = (double)((ulonglong)(local_c8 - local_58) & _DAT_023908f0);
    dVar13 = (double)((ulonglong)(local_c8 - local_d8) & _DAT_023908f0);
    uVar14 = (**(code **)(*param_2 + 0x938))
                       (~-(ulonglong)(dVar13 < dVar23) & (ulonglong)local_58 |
                        -(ulonglong)(dVar13 < dVar23) & (ulonglong)local_d8);
    local_98 = local_e8;
    local_90 = '\0';
    (**(code **)(*param_2 + 0xc38))();
    uVar8 = (**(code **)(*param_2 + 0xbf8))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    dVar24 = (double)((ulonglong)(local_b8 - local_58) & _DAT_023908f0);
    dVar15 = (double)((ulonglong)(local_b8 - local_d8) & _DAT_023908f0);
    local_d8 = (double)(**(code **)(*param_2 + 0x938))
                                 (~-(ulonglong)(dVar15 < dVar24) & (ulonglong)local_58 |
                                  -(ulonglong)(dVar15 < dVar24) & (ulonglong)local_d8);
    local_88 = local_e8;
    local_80 = '\0';
    uStack_d0 = extraout_XMM0_Qb_00;
    (**(code **)(*param_2 + 0xc38))();
    uVar9 = (**(code **)(*param_2 + 0xbf8))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (dVar23 <= dVar13) {
      dVar13 = dVar23;
    }
    uVar7 = -(ulonglong)((double)((ulonglong)(dVar11 - local_58) & _DAT_023908f0) < dVar13);
    local_c8 = (double)(**(code **)(*param_2 + 0x938))
                                 (~uVar7 & (ulonglong)local_c8 | uVar7 & (ulonglong)dVar11);
    local_70 = '\0';
    uStack_c0 = extraout_XMM0_Qb_01;
    local_78 = lVar1;
    (**(code **)(*param_2 + 0xc38))();
    uVar10 = (**(code **)(*param_2 + 0xbf8))();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (dVar24 <= dVar15) {
      dVar15 = dVar24;
    }
    uVar7 = -(ulonglong)((double)((ulonglong)(dVar12 - local_58) & _DAT_023908f0) < dVar15);
    local_58 = (double)(**(code **)(*param_2 + 0x938))
                                 (~uVar7 & (ulonglong)local_b8 | uVar7 & (ulonglong)dVar12);
    local_60 = '\0';
    local_68 = lVar2;
    uStack_50 = extraout_XMM0_Qb_02;
    (**(code **)(*param_2 + 0xc38))();
    local_b8 = (double)(**(code **)(*param_2 + 0xbf8))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    auVar21._8_8_ = uStack_c0;
    auVar21._0_8_ = local_c8;
    auVar18 = insertps(auVar21,uVar10,0x10);
    auVar16._8_8_ = extraout_XMM0_Qb;
    auVar16._0_8_ = uVar14;
    auVar16 = insertps(auVar16,uVar8,0x10);
    fVar17 = auVar18._0_4_ - auVar16._0_4_;
    fVar19 = auVar18._4_4_ - auVar16._4_4_;
    auVar3._8_8_ = uStack_50;
    auVar3._0_8_ = local_58;
    auVar21 = insertps(auVar3,local_b8._0_4_,0x10);
    auVar18._8_8_ = uStack_d0;
    auVar18._0_8_ = local_d8;
    auVar16 = insertps(auVar18,uVar9,0x10);
    fVar20 = auVar21._0_4_ - auVar16._0_4_;
    fVar22 = auVar21._4_4_ - auVar16._4_4_;
    fVar17 = SQRT(fVar19 * fVar19 + fVar17 * fVar17);
    fVar19 = SQRT(fVar22 * fVar22 + fVar20 * fVar20);
    uVar7 = 0xffffffff;
    if (fVar19 <= fVar17) {
      uVar7 = (ulonglong)(fVar19 < fVar17);
    }
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return uVar7;
}


