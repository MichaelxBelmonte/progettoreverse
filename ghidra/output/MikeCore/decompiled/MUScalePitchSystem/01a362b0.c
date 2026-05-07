// Function: FUN_01a362b0
// Address: 01a362b0
// Size: 554 bytes
// Class: MUScalePitchSystem


undefined8 FUN_01a362b0(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar8;
  undefined4 in_XMM1_Dd;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong local_68;
  char local_60;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  if (unaff_RDI[0x2a] == 0) {
    if (unaff_RDI[0x28] == 0) {
      return DAT_023dccec;
    }
    dVar6 = (double)(**(code **)(*unaff_RDI + 0xa30))();
    fStack_44 = (float)((ulonglong)dVar6 >> 0x20);
    dVar7 = (double)(**(code **)(*unaff_RDI + 0xa38))();
    in_XMM1_Dd = 0;
    if ((dVar6 == dVar7) && (!NAN(dVar6) && !NAN(dVar7))) {
      return DAT_023dccec;
    }
    plVar1 = (longlong *)unaff_RDI[0x2d];
    (**(code **)(*unaff_RDI + 0xa30))();
    fVar8 = fStack_44;
    uVar5 = (**(code **)(*plVar1 + 0x390))();
    local_48 = (float)uVar5;
    fStack_44 = (float)((ulonglong)uVar5 >> 0x20);
    plVar1 = (longlong *)unaff_RDI[0x2d];
    (**(code **)(*unaff_RDI + 0xa38))();
    lVar3 = *plVar1;
    uStack_40 = extraout_XMM0_Qb_01;
  }
  else {
    plVar1 = (longlong *)unaff_RDI[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013201a0();
    uVar5 = (**(code **)(*plVar1 + 0x390))();
    local_48 = (float)uVar5;
    fStack_44 = (float)((ulonglong)uVar5 >> 0x20);
    plVar1 = (longlong *)unaff_RDI[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320130();
    lVar3 = *plVar1;
    uStack_40 = extraout_XMM0_Qb;
  }
  fVar4 = (float)(**(code **)(lVar3 + 0x390))();
  fVar4 = fVar4 - local_48;
  uVar5 = DAT_023dccec;
  if (DAT_02390d30 < fVar4) {
    FUN_01a35fd0();
    local_58._0_8_ = FUN_01d526f0();
    local_58._8_8_ = extraout_XMM0_Qb_00;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (fVar4 < DAT_02394298 * (float)local_58._0_8_) {
      fVar8 = 0.0;
      in_XMM1_Dd = 0;
      auVar10 = local_58;
      do {
        auVar9 = auVar10;
        local_58._0_4_ = local_58._0_4_ + DAT_02390d00;
        auVar10 = blendps(auVar9,local_58,1);
      } while (fVar4 < local_58._0_4_ * DAT_02394298);
      blendps(auVar9,local_58,1);
    }
    FUN_01e3f820();
    auVar9._4_4_ = fStack_44;
    auVar9._0_4_ = local_48;
    auVar9._8_8_ = uStack_40;
    auVar10._4_4_ = fVar8;
    auVar10._0_4_ = fVar8 + DAT_023b2664;
    auVar10._8_4_ = in_XMM1_Dd;
    auVar10._12_4_ = in_XMM1_Dd;
    auVar10 = insertps(auVar9,auVar10,0x10);
    uVar5 = auVar10._0_8_;
  }
  return uVar5;
}


