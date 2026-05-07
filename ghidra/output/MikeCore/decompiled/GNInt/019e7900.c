// Function: FUN_019e7900
// Address: 019e7900
// Size: 645 bytes
// Class: GNInt


void FUN_019e7900(void)

{
  uint uVar1;
  float fVar2;
  longlong *unaff_RDI;
  double dVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  double local_60;
  double local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  float local_14;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_02;
  
  dVar3 = (double)FUN_00e7d6f0();
  if ((double)unaff_RDI[0x2d] <= dVar3 - (double)unaff_RDI[0x2e]) {
    *(undefined1 *)((longlong)unaff_RDI + 0x1bc) = 0;
    dVar3 = DAT_0238fee8;
  }
  else {
    dVar3 = (dVar3 - (double)unaff_RDI[0x2e]) / (double)unaff_RDI[0x2d];
  }
  dVar3 = (double)_pow(dVar3,DAT_023908d0);
  local_48._8_8_ = 0;
  local_48._0_8_ = unaff_RDI[0x2f];
  local_38._0_8_ = unaff_RDI[0x30];
  uVar1 = *(uint *)(unaff_RDI + 0x37);
  local_38._8_8_ = 0;
  if ((uVar1 & 0xc) == 0) {
    local_58 = 0.0;
    local_60 = 0.0;
  }
  else {
    local_60 = (double)unaff_RDI[0x32];
    if ((uVar1 & 8) != 0) {
      local_60 = local_60 + ((double)unaff_RDI[0x34] - local_60) * dVar3;
    }
    local_58 = (double)unaff_RDI[0x31];
    if ((uVar1 & 4) != 0) {
      local_58 = local_58 + ((double)unaff_RDI[0x33] - local_58) * dVar3;
    }
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3f0))();
    uVar1 = *(uint *)(unaff_RDI + 0x37);
  }
  if ((uVar1 & 3) == 0) {
    local_14 = 0.0;
    fVar10 = 0.0;
  }
  else {
    local_14 = *(float *)(unaff_RDI + 0x35);
    fVar2 = (float)((ulonglong)local_38._0_8_ >> 0x20);
    if ((uVar1 & 1) == 0) {
      fVar10 = *(float *)((longlong)unaff_RDI + 0x1ac);
    }
    else {
      local_14 = local_14 + (float)dVar3 * (*(float *)(unaff_RDI + 0x36) - local_14);
      fVar10 = *(float *)((longlong)unaff_RDI + 0x1ac);
    }
    if ((uVar1 & 2) != 0) {
      fVar10 = fVar10 + (float)dVar3 * (*(float *)((longlong)unaff_RDI + 0x1b4) - fVar10);
    }
    (**(code **)(*unaff_RDI + 0xc08))(CONCAT44(fVar2,fVar2 / fVar10));
  }
  (**(code **)(*unaff_RDI + 0x540))();
  (**(code **)(*unaff_RDI + 0xa48))();
  uVar1 = *(uint *)(unaff_RDI + 0x37);
  if ((uVar1 & 0xc) != 0) {
    auVar5._0_8_ = (**(code **)(*unaff_RDI + 0x938))(local_60 + local_58);
    auVar5._8_8_ = extraout_XMM0_Qb;
    local_38 = blendps(local_38,auVar5,1);
    auVar6._0_8_ = (**(code **)(*unaff_RDI + 0x938))(local_58);
    auVar6._8_8_ = extraout_XMM0_Qb_00;
    local_48 = blendps(local_48,auVar6,1);
    uVar1 = *(uint *)(unaff_RDI + 0x37);
  }
  if ((uVar1 & 3) != 0) {
    uVar4 = (**(code **)(*unaff_RDI + 0xbf8))(fVar10 + local_14);
    auVar9._8_4_ = (int)extraout_XMM0_Qb_01;
    auVar9._0_8_ = uVar4;
    auVar9._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    insertps(local_48,auVar9,0x10);
    auVar7._0_8_ = (**(code **)(*unaff_RDI + 0xbf8))();
    auVar7._8_8_ = extraout_XMM0_Qb_02;
    local_58._0_4_ = (float)uVar4;
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = (float)auVar7._0_8_ - local_58._0_4_;
    insertps(local_38,auVar8,0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x019e7b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x518))();
  return;
}


