// Function: FUN_0109a8a0
// Address: 0109a8a0
// Size: 702 bytes
// Class: Unknown
// String references:
//   "crypto/sm2/sm2_sign.c"

bool FUN_0109a8a0(BIGNUM *param_1,uint64_t param_2,uint64_t param_3,BIGNUM *param_4)

{
  int iVar1;
  char *r;
  BIGNUM *b;
  EC_POINT *pEVar2;
  BIGNUM *pBVar3;
  BIGNUM *a;
  BIGNUM *pBVar4;
  int reason;
  bool bVar5;
  BIGNUM *ctx;
  BIGNUM *a_00;
  BIGNUM *pBVar6;
  
  _EC_KEY_get0_group((EC_KEY *)param_1);
  r = (char *)_EC_GROUP_get0_order();
  ctx = (BIGNUM *)0x0;
  a_00 = (BIGNUM *)0x0;
  b = (BIGNUM *)_BN_CTX_new();
  pEVar2 = _EC_POINT_new((EC_GROUP *)param_1);
  if ((b == (BIGNUM *)0x0) || (pEVar2 == (EC_POINT *)0x0)) {
    r = "crypto/sm2/sm2_sign.c";
    _ERR_put_error(0x201bae1,0x41,0x12e,(char *)param_4,(int)ctx);
    bVar5 = false;
    goto LAB_0109aa60;
  }
  _BN_CTX_start((BN_CTX *)param_1);
  pBVar3 = _BN_CTX_get((BN_CTX *)param_1);
  a = _BN_CTX_get((BN_CTX *)param_1);
  if (a == (BIGNUM *)0x0) {
    iVar1 = 0x41;
    reason = 0x136;
  }
  else {
    pBVar4 = (BIGNUM *)&stack0xffffffffffffffc0;
    _ECDSA_SIG_get0();
    _BN_value_one();
    iVar1 = _BN_cmp(param_1,pBVar4);
    if (-1 < iVar1) {
      _BN_value_one();
      iVar1 = _BN_cmp(param_1,pBVar4);
      if (((-1 < iVar1) && (iVar1 = _BN_cmp(param_1,pBVar4), 0 < iVar1)) &&
         (iVar1 = _BN_cmp(param_1,pBVar4), 0 < iVar1)) {
        pBVar4 = (BIGNUM *)r;
        iVar1 = _BN_mod_add((BIGNUM *)r,a_00,b,param_4,(BN_CTX *)ctx);
        if (iVar1 == 0) {
          iVar1 = 3;
          reason = 0x14f;
        }
        else {
          iVar1 = _BN_is_zero();
          if (iVar1 == 0) {
            pBVar6 = a_00;
            pEVar2 = _EC_KEY_get0_public_key((EC_KEY *)pBVar4);
            param_4 = b;
            iVar1 = _EC_POINT_mul((EC_GROUP *)pEVar2,(EC_POINT *)a_00,pBVar3,(EC_POINT *)b,ctx,
                                  (BN_CTX *)pBVar6);
            if ((iVar1 == 0) || (iVar1 = _EC_POINT_get_affine_coordinates(0,a,b), iVar1 == 0)) {
              r = "crypto/sm2/sm2_sign.c";
              _ERR_put_error(0x201bae1,0x10,0x15a,(char *)param_4,(int)ctx);
              bVar5 = false;
              goto LAB_0109aa60;
            }
            iVar1 = _BN_mod_add((BIGNUM *)r,a,b,param_4,(BN_CTX *)ctx);
            if (iVar1 != 0) {
              iVar1 = _BN_cmp((BIGNUM *)r,a);
              bVar5 = iVar1 == 0;
              goto LAB_0109aa60;
            }
            iVar1 = 3;
            reason = 0x15f;
          }
          else {
            iVar1 = 0x65;
            reason = 0x154;
          }
        }
        goto LAB_0109aa55;
      }
    }
    iVar1 = 0x65;
    reason = 0x14a;
  }
LAB_0109aa55:
  r = "crypto/sm2/sm2_sign.c";
  _ERR_put_error(0x201bae1,iVar1,reason,(char *)param_4,(int)ctx);
  bVar5 = false;
LAB_0109aa60:
  _EC_POINT_free((EC_POINT *)r);
  _BN_CTX_free((BN_CTX *)r);
  return bVar5;
}

