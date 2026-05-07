// Function: FUN_01cc5aa0
// Address: 01cc5aa0
// Size: 545 bytes
// Class: GNAssociationBinding


undefined8 FUN_01cc5aa0(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint in_ECX;
  longlong *in_RDX;
  longlong *unaff_RDI;
  uint uVar7;
  float fVar8;
  float fVar9;
  float extraout_XMM0_Db;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dd;
  undefined1 auVar11 [16];
  longlong local_58;
  char local_50;
  undefined8 local_48;
  
  fVar9 = (float)((ulonglong)param_2 >> 0x20);
  if (in_ECX == 0xff) {
    in_ECX = (**(code **)(*unaff_RDI + 0x5c0))();
  }
  (**(code **)(*unaff_RDI + 0x548))(param_1);
  lVar1 = *in_RDX;
  if (lVar1 != 0) {
    uVar10 = FUN_01d43b70();
    uVar4 = extraout_XMM0_Dc;
    uVar5 = extraout_XMM0_Dd;
    goto joined_r0x01cc5c82;
  }
  (**(code **)(*unaff_RDI + 0x370))();
  lVar1 = *in_RDX;
  if (lVar1 == local_58) {
    if (((char)in_RDX[1] != '\0') || (local_58 == 0)) goto LAB_01cc5c5e;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_01cc5c57;
    }
LAB_01cc5c21:
    local_48 = in_RDX + 1;
    *(undefined1 *)local_48 = 1;
  }
  else {
    lVar6 = in_RDX[1];
    if (local_50 != '\0') {
      *in_RDX = local_58;
      if (((char)lVar6 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01cc5c21;
    }
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    *in_RDX = local_58;
    if (((char)lVar6 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01cc5c57:
    local_48 = in_RDX + 1;
    *(undefined1 *)local_48 = 1;
LAB_01cc5c5e:
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *in_RDX;
  uVar10 = FUN_01d43b70();
  uVar4 = extraout_XMM0_Dc_00;
  uVar5 = extraout_XMM0_Dd_00;
joined_r0x01cc5c82:
  if ((in_ECX & 0x10) == 0) {
    uVar7 = -(uint)(*(float *)(lVar1 + 0x28) != 0.0);
    auVar11._0_4_ = ~uVar7 & (uint)(float)uVar10;
    auVar11._4_4_ = (int)((ulonglong)uVar10 >> 0x20);
    auVar11._8_4_ = uVar4;
    auVar11._12_4_ = uVar5;
    auVar11 = auVar11 | ZEXT416((uint)((float)uVar10 + *(float *)(lVar1 + 0x28)) & uVar7);
    fVar8 = (float)FUN_01d43b70();
    local_48._0_4_ = auVar11._0_4_;
    local_48._4_4_ = auVar11._4_4_;
    if ((in_ECX & 0x20) == 0) {
      auVar3._4_4_ = fVar9;
      auVar3._0_4_ = (fVar9 - (float)local_48) * DAT_0239011c;
      auVar3._8_4_ = in_XMM1_Dd;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar11 = roundss(ZEXT816(0),auVar3,10);
      local_48._0_4_ =
           (float)local_48 * DAT_0239011c + extraout_XMM0_Db + auVar11._0_4_ + fVar8 * DAT_0239011c;
    }
    else {
      auVar2._4_4_ = fVar9;
      auVar2._0_4_ = fVar9 - (float)local_48;
      auVar2._8_4_ = in_XMM1_Dd;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar11 = roundss(ZEXT816(0),auVar2,9);
      local_48._0_4_ = ((float)local_48 + extraout_XMM0_Db + auVar11._0_4_ + DAT_02390d00) - fVar8;
    }
  }
  else {
    local_48._0_4_ = (float)FUN_01d43b70();
    local_48._0_4_ = extraout_XMM0_Db + (float)local_48;
    local_48._4_4_ = extraout_XMM0_Db;
  }
  fVar9 = (float)FUN_01d43be0();
  return CONCAT44(local_48._4_4_,(float)local_48 - fVar9);
}


