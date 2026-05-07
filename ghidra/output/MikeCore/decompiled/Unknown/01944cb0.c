// Function: FUN_01944cb0
// Address: 01944cb0
// Size: 510 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01944cb0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_04;
  
  lVar4 = unaff_RDI[0xb2];
  local_48._8_8_ = in_XMM0_Qb;
  local_48._0_8_ = param_1;
  if (lVar4 != 0) {
    local_38._0_8_ = unaff_RDI[0xb3];
    if ((((float)DAT_023dccdc != (float)local_38._0_8_) ||
        (NAN((float)DAT_023dccdc) || NAN((float)local_38._0_8_))) ||
       ((float)((ulonglong)DAT_023dccdc >> 0x20) != (float)((ulonglong)local_38._0_8_ >> 0x20))) {
      local_38._8_8_ = 0;
      uVar5 = FUN_01d526f0();
      insertps(local_38,*(undefined4 *)((longlong)unaff_RDI + 0x59c),0x10);
      auVar7._0_8_ = FUN_01d526f0();
      auVar7._8_8_ = extraout_XMM0_Qb_00;
      auVar2._8_8_ = extraout_XMM0_Qb;
      auVar2._0_8_ = uVar5;
      blendps(auVar7,auVar2,0xd);
      uVar5 = FUN_01d526f0();
      uVar6 = FUN_01d526f0();
      auVar9._8_4_ = (int)extraout_XMM0_Qb_02;
      auVar9._0_8_ = uVar6;
      auVar9._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
      auVar3._8_8_ = extraout_XMM0_Qb_01;
      auVar3._0_8_ = uVar5;
      blendps(auVar9,auVar3,0xd);
      FUN_00d051c0();
      (**(code **)(*unaff_RDI + 0x618))();
      lVar4 = unaff_RDI[0xb2];
    }
  }
  lVar1 = *unaff_RSI;
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xb2] = lVar1;
    if (lVar4 == 0) {
      unaff_RDI[0xb3] = param_1;
      lVar4 = lVar1;
      goto joined_r0x01944e9b;
    }
    FUN_00d50b20();
    lVar4 = unaff_RDI[0xb2];
  }
  unaff_RDI[0xb3] = param_1;
joined_r0x01944e9b:
  if ((lVar4 != 0) &&
     ((((float)DAT_023dccdc != (float)param_1 || (NAN((float)DAT_023dccdc) || NAN((float)param_1)))
      || ((float)((ulonglong)DAT_023dccdc >> 0x20) != (float)((ulonglong)param_1 >> 0x20))))) {
    local_38._0_8_ = FUN_01d526f0();
    local_38._8_8_ = extraout_XMM0_Qb_03;
    insertps(local_48,*(undefined4 *)((longlong)unaff_RDI + 0x59c),0x10);
    auVar8._0_8_ = FUN_01d526f0();
    auVar8._8_8_ = extraout_XMM0_Qb_04;
    blendps(auVar8,local_38,0xd);
    local_38._0_8_ = FUN_01d526f0();
    local_38._8_8_ = extraout_XMM0_Qb_05;
    uVar5 = FUN_01d526f0();
    auVar10._8_4_ = (int)extraout_XMM0_Qb_06;
    auVar10._0_8_ = uVar5;
    auVar10._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
    blendps(auVar10,local_38,0xd);
    FUN_00d051c0();
                    /* WARNING: Could not recover jumptable at 0x01944e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x618))();
    return;
  }
  return;
}


