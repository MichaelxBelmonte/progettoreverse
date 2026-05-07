// Function: FUN_00fe3810
// Address: 00fe3810
// Size: 1236 bytes
// Class: Unknown
// String references:
//   "crypto/ec/ecdsa_ossl.c"

uint64_t FUN_00fe3810(EC_KEY *param_1,void*param_2,int64_t param_3,BIGNUM *param_4)

{
  int iVar1;
  int iVar2;
  EC_GROUP *pEVar3;
  BIGNUM *pBVar4;
  BIGNUM *r;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  EC_POINT *pEVar7;
  BIGNUM *m;
  EC_KEY *pEVar8;
  char *a;
  void*puVar9;
  uint64_t uVar10;
  BIGNUM *arg1;
  int64_t this_ptr;
  BIGNUM *d;
  BIGNUM *in_stack_ffffffffffffff98;
  BIGNUM *pBVar11;
  BIGNUM *pBVar12;
  
  if (this_ptr == 0) {
LAB_00fe39fe:
    arg1 = in_stack_ffffffffffffff98;
    iVar2 = 0x43;
    iVar1 = 0x2f;
LAB_00fe3a1a:
    _ERR_put_error(0x200efcb,iVar2,iVar1,(char *)param_4,(int)arg1);
    return 0;
  }
  pEVar8 = param_1;
  puVar9 = param_2;
  pEVar3 = _EC_KEY_get0_group(param_1);
  iVar2 = (int)puVar9;
  if (pEVar3 == (EC_GROUP *)0x0) goto LAB_00fe39fe;
  pBVar4 = _EC_KEY_get0_private_key(pEVar8);
  if (pBVar4 == (BIGNUM *)0x0) {
    iVar2 = 0x7d;
    iVar1 = 0x33;
    goto LAB_00fe3a1a;
  }
  iVar1 = _EC_KEY_can_sign();
  if (iVar1 == 0) {
    iVar2 = 0x9f;
    iVar1 = 0x38;
    goto LAB_00fe3a1a;
  }
  a = (char *)arg1;
  pBVar11 = arg1;
  if ((arg1 == (BIGNUM *)0x0) &&
     (arg1 = (BIGNUM *)_BN_CTX_new(), arg1 == (BIGNUM *)0x0)) {
    iVar2 = 0x41;
    iVar1 = 0x3e;
    arg1 = pBVar11;
    goto LAB_00fe3a1a;
  }
  r = _BN_new();
  pBVar5 = _BN_new();
  pBVar6 = _BN_new();
  if (((r == (BIGNUM *)0x0) || (pBVar5 == (BIGNUM *)0x0)) || (pBVar6 == (BIGNUM *)0x0)) {
    iVar2 = 0x41;
    iVar1 = 0x47;
LAB_00fe3ab6:
    a = "crypto/ec/ecdsa_ossl.c";
    _ERR_put_error(0x200efcb,iVar2,iVar1,(char *)param_4,(int)pBVar11);
    pBVar12 = arg1;
    goto LAB_00fe3ac2;
  }
  pEVar7 = _EC_POINT_new((EC_GROUP *)a);
  if (pEVar7 == (EC_POINT *)0x0) {
    iVar2 = 0x10;
    iVar1 = 0x4b;
    goto LAB_00fe3ab6;
  }
  m = (BIGNUM *)_EC_GROUP_get0_order();
  _BN_num_bits((BIGNUM *)a);
  iVar1 = _BN_set_bit((BIGNUM *)a,iVar2);
  pBVar12 = arg1;
  if (((iVar1 == 0) || (iVar1 = _BN_set_bit((BIGNUM *)a,iVar2), pBVar12 = arg1, iVar1 == 0)) ||
     (iVar2 = _BN_set_bit((BIGNUM *)a,iVar2), pBVar12 = arg1, iVar2 == 0)) goto LAB_00fe3ac2;
  if (param_3 == 0) {
    do {
      do {
        iVar2 = _BN_priv_rand_range();
        if (iVar2 == 0) {
          iVar2 = 0x9e;
          iVar1 = 100;
          goto LAB_00fe3cd2;
        }
        iVar2 = _BN_is_zero();
      } while (iVar2 != 0);
      param_4 = arg1;
      iVar2 = _EC_POINT_mul((EC_GROUP *)0x0,(EC_POINT *)r,(BIGNUM *)0x0,(EC_POINT *)arg1,
                            pBVar11,(BN_CTX *)pBVar12);
      if (iVar2 == 0) goto LAB_00fe3c4e;
      pBVar4 = arg1;
      iVar2 = _EC_POINT_get_affine_coordinates(0,pBVar6);
      if (iVar2 == 0) goto LAB_00fe3c71;
      iVar2 = _BN_nnmod(arg1,m,pBVar4,(BN_CTX *)param_4);
      if (iVar2 == 0) goto LAB_00fe3c8f;
      iVar2 = _BN_is_zero();
    } while (iVar2 != 0);
  }
  else {
    do {
      do {
        param_4 = arg1;
        iVar2 = _BN_generate_dsa_nonce(param_3,pBVar4);
        if (iVar2 == 0) {
          iVar2 = 0x9e;
          iVar1 = 0x5e;
          goto LAB_00fe3cd2;
        }
        iVar2 = _BN_is_zero();
      } while (iVar2 != 0);
      param_4 = arg1;
      iVar2 = _EC_POINT_mul((EC_GROUP *)0x0,(EC_POINT *)r,(BIGNUM *)0x0,(EC_POINT *)arg1,
                            pBVar11,(BN_CTX *)pBVar12);
      if (iVar2 == 0) goto LAB_00fe3c4e;
      d = arg1;
      iVar2 = _EC_POINT_get_affine_coordinates(0,pBVar6);
      if (iVar2 == 0) goto LAB_00fe3c71;
      iVar2 = _BN_nnmod(arg1,m,d,(BN_CTX *)param_4);
      if (iVar2 == 0) goto LAB_00fe3c8f;
      iVar2 = _BN_is_zero();
    } while (iVar2 != 0);
  }
  iVar2 = _ec_group_do_inverse_ord(arg1,r);
  if (iVar2 == 0) {
    iVar2 = 3;
    iVar1 = 0x7d;
LAB_00fe3cd2:
    a = "crypto/ec/ecdsa_ossl.c";
    _ERR_put_error(0x200efcb,iVar2,iVar1,(char *)param_4,(int)pBVar11);
    goto LAB_00fe3ac2;
  }
  _BN_clear_free(arg1);
  _BN_clear_free(arg1);
  *(BIGNUM **)param_1 = pBVar5;
  *param_2 = r;
  uVar10 = 1;
  if (pBVar12 == pBVar11) goto LAB_00fe3ae3;
  goto LAB_00fe3ade;
LAB_00fe3c4e:
  a = "crypto/ec/ecdsa_ossl.c";
  _ERR_put_error(0x200efcb,0x10,0x6c,(char *)param_4,(int)pBVar11);
  goto LAB_00fe3ac2;
LAB_00fe3c71:
  iVar2 = 0x10;
  iVar1 = 0x71;
  goto LAB_00fe3cab;
LAB_00fe3c8f:
  iVar2 = 3;
  iVar1 = 0x76;
LAB_00fe3cab:
  a = "crypto/ec/ecdsa_ossl.c";
  _ERR_put_error(0x200efcb,iVar2,iVar1,(char *)param_4,(int)pBVar11);
LAB_00fe3ac2:
  arg1 = (BIGNUM *)a;
  _BN_clear_free(arg1);
  _BN_clear_free(arg1);
  uVar10 = 0;
  if (pBVar12 != pBVar11) {
LAB_00fe3ade:
    _BN_CTX_free((BN_CTX *)arg1);
  }
LAB_00fe3ae3:
  _EC_POINT_free((EC_POINT *)arg1);
  _BN_clear_free(arg1);
  return uVar10;
}

