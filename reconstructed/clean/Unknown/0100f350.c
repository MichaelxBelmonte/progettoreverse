// Function: FUN_0100f350
// Address: 0100f350
// Size: 2146 bytes
// Class: Unknown
// String references:
//   "crypto/ec/ecp_nistz256.c"

uint64_t FUN_0100f350(EC_GROUP *param_1,EC_POINT *param_2,uint64_t param_3,char *param_4)

{
  int iVar1;
  uint64_t uVar2;
  int reason;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar3;
  uint32_t extraout_XMM0_Da_01;
  uint8_t local_178 [16];
  int in_stack_fffffffffffffe98;
  uint8_t local_158 [32];
  uint8_t local_138 [32];
  uint32_t local_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  uint32_t local_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  uint32_t local_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  uint32_t local_e8;
  uint32_t uStack_e4;
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  uint8_t local_d8 [32];
  uint8_t local_b8 [32];
  uint8_t local_98 [32];
  uint8_t local_78 [32];
  uint8_t local_58 [32];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar1 = _EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = _bn_copy_words();
    if (iVar1 == 0) {
LAB_0100fb68:
      iVar1 = 0x92;
      reason = 0x4a5;
      goto LAB_0100fb84;
    }
    iVar1 = _bn_copy_words(extraout_XMM0_Da,4);
    if (iVar1 == 0) goto LAB_0100fb68;
    iVar1 = _bn_copy_words(extraout_XMM0_Da_00,4);
    if (iVar1 == 0) goto LAB_0100fb68;
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_178);
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_58);
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_78);
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_98);
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_b8);
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_178);
    iVar1 = 0x80;
    do {
      uVar3 = _ecp_nistz256_sqr_mont();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    _ecp_nistz256_mul_mont(uVar3,local_d8);
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_d8);
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_b8);
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_98);
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_78);
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_58);
    _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_sqr_mont();
    _ecp_nistz256_mul_mont(uVar3,local_178);
    local_108 = local_e8;
    uStack_104 = uStack_e4;
    uStack_100 = uStack_e0;
    uStack_fc = uStack_dc;
    local_118 = local_f8;
    uStack_114 = uStack_f4;
    uStack_110 = uStack_f0;
    uStack_10c = uStack_ec;
    uVar3 = _ecp_nistz256_sqr_mont();
    uVar3 = _ecp_nistz256_mul_mont(uVar3,local_138);
    if (param_2 == (EC_POINT *)0x0) {
LAB_0100fb00:
      if (param_1 != (EC_GROUP *)0x0) {
        uVar3 = _ecp_nistz256_mul_mont(uVar3,local_58);
        _ecp_nistz256_mul_mont(uVar3,local_158);
        uVar3 = _ecp_nistz256_from_mont();
        iVar1 = _bn_set_words(uVar3,4);
        if (iVar1 == 0) goto LAB_0100fb89;
      }
      uVar2 = 1;
      goto LAB_0100fb8b;
    }
    uVar3 = _ecp_nistz256_from_mont();
    iVar1 = _bn_set_words(uVar3,4);
    uVar3 = extraout_XMM0_Da_01;
    if (iVar1 != 0) goto LAB_0100fb00;
  }
  else {
    iVar1 = 0x6a;
    reason = 0x49e;
LAB_0100fb84:
    _ERR_put_error(0x200f0f3,iVar1,reason,param_4,in_stack_fffffffffffffe98);
  }
LAB_0100fb89:
  uVar2 = 0;
LAB_0100fb8b:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar2;
  }
                      ___stack_chk_fail();
}

