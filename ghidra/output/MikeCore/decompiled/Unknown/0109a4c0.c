// Function: FUN_0109a4c0
// Address: 0109a4c0
// Size: 887 bytes
// Class: Unknown
// String references:
//   "crypto/sm2/sm2_sign.c"


ECDSA_SIG * FUN_0109a4c0(BN_CTX *param_1,undefined8 param_2,undefined8 param_3,BIGNUM *param_4)

{
  int iVar1;
  char *r;
  BIGNUM *ctx;
  BIGNUM *b;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar4;
  ECDSA_SIG *pEVar5;
  BIGNUM *r_00;
  BIGNUM *b_00;
  int iVar6;
  BIGNUM *b_01;
  
  _EC_KEY_get0_private_key((EC_KEY *)param_1);
  _EC_KEY_get0_group((EC_KEY *)param_1);
  r = (char *)_EC_GROUP_get0_order();
  ctx = (BIGNUM *)_EC_POINT_new((EC_GROUP *)param_1);
  b = (BIGNUM *)_BN_CTX_new();
  if ((ctx == (BIGNUM *)0x0) || (b == (BIGNUM *)0x0)) {
    iVar1 = 0xcb;
LAB_0109a725:
    r = "crypto/sm2/sm2_sign.c";
    _ERR_put_error(0x201bae1,0x41,iVar1,(char *)param_4,(int)ctx);
  }
  else {
    _BN_CTX_start(param_1);
    pBVar2 = _BN_CTX_get(param_1);
    _BN_CTX_get(param_1);
    pBVar3 = _BN_CTX_get(param_1);
    a = _BN_CTX_get(param_1);
    if (a == (BIGNUM *)0x0) {
      iVar1 = 0xd5;
      goto LAB_0109a725;
    }
    a_00 = _BN_new();
    pBVar4 = _BN_new();
    if ((a_00 == (BIGNUM *)0x0) || (pBVar4 == (BIGNUM *)0x0)) {
      iVar1 = 0x41;
      iVar6 = 0xe1;
LAB_0109a780:
      r = "crypto/sm2/sm2_sign.c";
      _ERR_put_error(0x201bae1,iVar1,iVar6,(char *)param_4,(int)ctx);
    }
    else {
      do {
        do {
          iVar1 = _BN_priv_rand_range();
          if (iVar1 == 0) {
            iVar1 = 0xe7;
LAB_0109a7c1:
            r = "crypto/sm2/sm2_sign.c";
            _ERR_put_error(0x201bae1,0x44,iVar1,(char *)param_4,(int)ctx);
            goto LAB_0109a72f;
          }
          param_4 = b;
          iVar1 = _EC_POINT_mul((EC_GROUP *)0x0,(EC_POINT *)pBVar2,(BIGNUM *)0x0,(EC_POINT *)b,ctx,
                                (BN_CTX *)a);
          if (((iVar1 == 0) || (iVar1 = _EC_POINT_get_affine_coordinates(0,pBVar3,b), iVar1 == 0))
             || (r_00 = (BIGNUM *)r, b_01 = b,
                iVar1 = _BN_mod_add((BIGNUM *)r,pBVar3,b,param_4,(BN_CTX *)ctx), iVar1 == 0)) {
            iVar1 = 0xef;
            goto LAB_0109a7c1;
          }
          iVar1 = _BN_is_zero();
        } while (iVar1 != 0);
        b_00 = pBVar2;
        iVar1 = _BN_add(r_00,pBVar2,b_01);
        if (iVar1 == 0) {
          iVar1 = 0xf8;
          goto LAB_0109a7c1;
        }
        iVar1 = _BN_cmp(r_00,b_00);
      } while (iVar1 == 0);
      pBVar2 = _BN_value_one();
      iVar1 = _BN_add(r_00,pBVar2,b_01);
      if (((iVar1 == 0) || (iVar1 = _ec_group_do_inverse_ord(b,pBVar4), iVar1 == 0)) ||
         ((pBVar2 = (BIGNUM *)r, pBVar3 = b,
          iVar1 = _BN_mod_mul((BIGNUM *)r,a_00,b,param_4,(BN_CTX *)ctx), iVar1 == 0 ||
          (iVar1 = _BN_sub(pBVar2,a,pBVar3), iVar1 == 0)))) {
LAB_0109a7ed:
        iVar1 = 3;
        iVar6 = 0x104;
        goto LAB_0109a780;
      }
      iVar1 = _BN_mod_mul((BIGNUM *)r,a,b,param_4,(BN_CTX *)ctx);
      iVar6 = (int)ctx;
      if (iVar1 == 0) goto LAB_0109a7ed;
      pEVar5 = _ECDSA_SIG_new();
      if (pEVar5 != (ECDSA_SIG *)0x0) {
        _ECDSA_SIG_set0();
        goto LAB_0109a741;
      }
      r = "crypto/sm2/sm2_sign.c";
      _ERR_put_error(0x201bae1,0x41,0x10a,(char *)param_4,iVar6);
    }
  }
LAB_0109a72f:
  _BN_free((BIGNUM *)r);
  _BN_free((BIGNUM *)r);
  pEVar5 = (ECDSA_SIG *)0x0;
LAB_0109a741:
  _BN_CTX_free((BN_CTX *)r);
  _EC_POINT_free((EC_POINT *)r);
  return pEVar5;
}


