// Function: FUN_01011230
// Address: 01011230
// Size: 836 bytes
// Class: Unknown
// String references:
//   "crypto/ec/ecp_nistz256.c"

bool FUN_01011230(BIGNUM *param_1,uint64_t param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  BIGNUM *pBVar4;
  int64_t this_ptr;
  int reason;
  bool bVar5;
  int in_stack_fffffffffffffdc8;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  pBVar4 = param_1;
  lVar3 = _bn_wexpand();
  if (lVar3 == 0) {
    iVar2 = 3;
    reason = 0x52b;
  }
  else {
    iVar2 = _BN_num_bits(pBVar4);
    if (iVar2 < 0x101) {
      iVar2 = _BN_is_negative();
      if (iVar2 != 0) goto LAB_0101128f;
LAB_010112c0:
      iVar2 = _bn_copy_words();
      if (iVar2 != 0) {
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_sqr_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_sqr_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_sqr_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_sqr_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_sqr_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_sqr_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_sqr_mont();
        _ecp_nistz256_ord_mul_mont();
        _ecp_nistz256_ord_sqr_mont();
        _ecp_nistz256_ord_mul_mont();
        lVar3 = 0;
        do {
          _ecp_nistz256_ord_sqr_mont();
          _ecp_nistz256_ord_mul_mont();
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x1b);
        _ecp_nistz256_ord_mul_mont();
        iVar2 = _bn_set_words();
        bVar5 = iVar2 != 0;
        goto LAB_0101154d;
      }
      iVar2 = 0x92;
      reason = 0x53b;
    }
    else {
LAB_0101128f:
      pBVar4 = _BN_CTX_get((BN_CTX *)pBVar4);
      if (pBVar4 != (BIGNUM *)0x0) {
        iVar2 = _BN_nnmod(param_1,*(BIGNUM **)(this_ptr + 0x10),param_3,param_4);
        if (iVar2 != 0) goto LAB_010112c0;
      }
      iVar2 = 3;
      reason = 0x534;
    }
  }
  _ERR_put_error(0x200f0f3,iVar2,reason,(char *)param_4,in_stack_fffffffffffffdc8);
  bVar5 = false;
LAB_0101154d:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return bVar5;
  }
                      ___stack_chk_fail();
}

