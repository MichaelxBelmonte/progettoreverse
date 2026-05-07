// Function: FUN_01975d60
// Address: 01975d60
// Size: 1437 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01975df9) */
/* WARNING: Removing unreachable block (ram,0x01975e02) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01975d60(pthread_key_t param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  void *pvVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_f8;
  float fStack_f4;
  float local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_88;
  char local_80;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_04;
  
  if (unaff_RDI[0x2f] != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_0152e3a0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar11 = FUN_0152e5d0();
    uVar12 = (**(code **)(*unaff_RDI + 0x4d8))();
    FUN_01989f80();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01259650();
    uVar13 = (**(code **)(*local_40 + 0x938))();
    local_e8 = (float)uVar13;
    uStack_e4 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uStack_e0 = (undefined4)extraout_XMM0_Qb;
    uStack_dc = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01989f80();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012646c0();
    uVar13 = (**(code **)(*local_40 + 0x938))();
    local_c8 = (float)uVar13;
    uStack_c4 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uStack_c0 = (undefined4)extraout_XMM0_Qb_00;
    uStack_bc = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01989f80();
    local_d8 = (**(code **)(*local_40 + 0x938))(uVar10);
    uStack_d0 = extraout_XMM0_Qb_01;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01989f80();
    local_b8 = (**(code **)(*local_40 + 0x938))(uVar11);
    uStack_b0 = extraout_XMM0_Qb_02;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01964590();
    fVar5 = (float)FUN_0198a7d0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    auVar19._0_8_ = FUN_0152e000();
    auVar19._8_8_ = extraout_XMM0_Qb_03;
    auVar14._4_12_ = auVar19._4_12_;
    auVar14._0_4_ = (float)auVar19._0_8_ + DAT_023908e0;
    fVar6 = (float)FUN_0198a7d0(auVar14._0_8_);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    auVar15._0_8_ = FUN_0152e000();
    auVar15._8_8_ = extraout_XMM0_Qb_04;
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = (float)auVar15._0_8_ + DAT_0241b664;
    fVar7 = (float)FUN_0198a7d0(auVar16._0_8_);
    fVar8 = (float)FUN_01d48a00();
    cVar3 = FUN_01968c50();
    if (cVar3 == '\0') {
      FUN_01d489d0(DAT_0239011c * fVar8);
      FUN_01d48b40();
      uVar9 = DAT_02390d34;
    }
    else {
      FUN_01d48b40();
      uVar9 = _DAT_023b388c;
    }
    FUN_01989f80();
    (**(code **)(&UNK_00001508 + *local_88))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_f8 = (float)uVar12;
    fStack_f4 = (float)((ulonglong)uVar12 >> 0x20);
    auVar17._4_12_ = local_d8._4_12_;
    auVar17._0_4_ = (float)local_d8 - local_f8;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    auVar18._4_12_ = local_b8._4_12_;
    auVar18._0_4_ = (float)local_b8 - local_f8;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    auVar19 = insertps(auVar17,fVar6 - fStack_f4,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar19._0_8_,uVar9);
    auVar19 = insertps(auVar18,fVar7 - fStack_f4,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar19._0_8_,uVar9);
    auVar1._4_4_ = uStack_e4;
    auVar1._0_4_ = local_e8 - local_f8;
    auVar1._8_4_ = uStack_e0;
    auVar1._12_4_ = uStack_dc;
    auVar19 = insertps(auVar1,fVar5 - fStack_f4,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar19._0_8_,uVar9);
    auVar2._4_4_ = uStack_c4;
    auVar2._0_4_ = local_c8 - local_f8;
    auVar2._8_4_ = uStack_c0;
    auVar2._12_4_ = uStack_bc;
    auVar19 = insertps(auVar2,fVar5 - fStack_f4,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar19._0_8_,uVar9);
    FUN_01d489d0();
    FUN_00d50b20();
  }
  return;
}


