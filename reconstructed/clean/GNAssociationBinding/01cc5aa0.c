// Function: FUN_01cc5aa0
// Address: 01cc5aa0
// Size: 545 bytes
// Class: GNAssociationBinding
// === GNAssociationBinding properties ===
//                   _aspect
//                   _valueTransformerName
//                   _keyIsPropertyCache
//                   _graphicsContext


uint64_t FUN_01cc5aa0(uint32_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint32_t uVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint in_ECX;
  int64_t *in_RDX;
  int64_t *this_ptr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float extraout_XMM0_Db;
  uint64_t uVar10;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t in_XMM1_Dd;
  uint8_t auVar11 [16];
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  
  fVar9 = (float)((uint64_t)param_2 >> 0x20);
  if (in_ECX == 0xff) {
    in_ECX = (**(code **)(*this_ptr + 0x5c0))();
  }
  (**(code **)(*this_ptr + 0x548))(param_1);
  lVar1 = *in_RDX;
  if (lVar1 != 0) {
    uVar10 = FUN_01d43b70();
    uVar4 = extraout_XMM0_Dc;
    uVar5 = extraout_XMM0_Dd;
    goto joined_r0x01cc5c82;
  }
  (**(code **)(*this_ptr + 0x370))();
  lVar1 = *in_RDX;
  if (lVar1 == local_58) {
    if (((char)in_RDX[1] != '\0') || (local_58 == 0)) goto LAB_01cc5c5e;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_01cc5c57;
    }
LAB_01cc5c21:
    local_48 = in_RDX + 1;
    *(void*)local_48 = 1;
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
    *(void*)local_48 = 1;
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
    auVar11._4_4_ = (int)((uint64_t)uVar10 >> 0x20);
    auVar11._8_4_ = uVar4;
    auVar11._12_4_ = uVar5;
    auVar11 = auVar11 | ZEXT416((uint)((float)uVar10 + *(float *)(lVar1 + 0x28)) & uVar7);
    fVar8 = (float)FUN_01d43b70();
    local_48._0_4_ = auVar11._0_4_;
    local_48._4_4_ = auVar11._4_4_;
    if ((in_ECX & 0x20) == 0) {
      auVar3._4_4_ = fVar9;
      auVar3._0_4_ = (fVar9 - (float)local_48) * g_0239011c;
      auVar3._8_4_ = in_XMM1_Dd;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar11 = roundss(ZEXT816(0),auVar3,10);
      local_48._0_4_ =
           (float)local_48 * g_0239011c + extraout_XMM0_Db + auVar11._0_4_ + fVar8 * g_0239011c;
    }
    else {
      auVar2._4_4_ = fVar9;
      auVar2._0_4_ = fVar9 - (float)local_48;
      auVar2._8_4_ = in_XMM1_Dd;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar11 = roundss(ZEXT816(0),auVar2,9);
      local_48._0_4_ = ((float)local_48 + extraout_XMM0_Db + auVar11._0_4_ + g_02390d00) - fVar8;
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

