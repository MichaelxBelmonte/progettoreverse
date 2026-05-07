// Function: FUN_01a36510
// Address: 01a36510
// Size: 566 bytes
// Class: MUScalePitchSystem


undefined8 FUN_01a36510(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong local_68;
  char local_60;
  undefined1 local_58 [16];
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (unaff_RDI[0x2a] == 0) {
    if (unaff_RDI[0x28] == 0) {
      return DAT_023dccec;
    }
    dVar5 = (double)(**(code **)(*unaff_RDI + 0xa30))();
    dVar6 = (double)(**(code **)(*unaff_RDI + 0xa38))();
    if ((dVar5 == dVar6) && (!NAN(dVar5) && !NAN(dVar6))) {
      return DAT_023dccec;
    }
    plVar1 = (longlong *)unaff_RDI[0x2d];
    (**(code **)(*unaff_RDI + 0xa30))();
    local_38 = (float)(**(code **)(*plVar1 + 0x390))();
    plVar1 = (longlong *)unaff_RDI[0x2d];
    (**(code **)(*unaff_RDI + 0xa38))();
    lVar3 = *plVar1;
  }
  else {
    plVar1 = (longlong *)unaff_RDI[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013201a0();
    local_38 = (float)(**(code **)(*plVar1 + 0x390))();
    plVar1 = (longlong *)unaff_RDI[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320130();
    lVar3 = *plVar1;
  }
  uVar4 = (**(code **)(lVar3 + 0x390))();
  local_38 = (float)uVar4 - local_38;
  uVar7 = DAT_023dccec;
  if (DAT_02390d30 < local_38) {
    fStack_34 = (float)((ulonglong)uVar4 >> 0x20);
    uStack_30 = (undefined4)extraout_XMM0_Qb;
    uStack_2c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    FUN_01a36140();
    local_58._0_8_ = FUN_01d526f0();
    local_58._8_8_ = extraout_XMM0_Qb_00;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    auVar11 = local_58;
    if (local_38 < DAT_02394298 * (float)local_58._0_8_) {
      do {
        auVar10 = auVar11;
        local_58._0_4_ = local_58._0_4_ + DAT_02390d00;
        auVar11 = blendps(auVar10,local_58,1);
      } while (local_38 < local_58._0_4_ * DAT_02394298);
      blendps(auVar10,local_58,1);
    }
    fVar8 = fStack_34;
    uVar9 = uStack_2c;
    FUN_01e3f820();
    auVar10._4_4_ = fStack_34;
    auVar10._0_4_ = (float)uVar4 - local_58._0_4_;
    auVar10._8_4_ = uStack_30;
    auVar10._12_4_ = uStack_2c;
    auVar11._4_4_ = fVar8;
    auVar11._0_4_ = fVar8 + DAT_023b2664;
    auVar11._8_4_ = uVar9;
    auVar11._12_4_ = uVar9;
    auVar11 = insertps(auVar10,auVar11,0x10);
    uVar7 = auVar11._0_8_;
  }
  return uVar7;
}


