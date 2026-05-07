// Function: FUN_00fc22d0
// Address: 00fc22d0
// Size: 839 bytes
// Class: Unknown
// String references:
//   "crypto/dsa/dsa_ossl.c"

uint64_t FUN_00fc22d0(BIGNUM *param_1,uint64_t param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  uint32_t lock;
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  int iVar4;
  BIGNUM *m_ctx;
  BIGNUM *a;
  BIGNUM *ctx;
  BIGNUM *ret;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BN_MONT_CTX *pBVar7;
  char *a_00;
  int reason;
  uint64_t uVar8;
  uint64_t uVar9;
  BIGNUM *in_stack_ffffffffffffffa8;
  BIGNUM *in_stack_ffffffffffffffb0;
  int in_stack_ffffffffffffffb8;
  
  lVar1._0_4_ = param_1->top;
  lVar1._4_4_ = param_1->dmax;
  if (((lVar1 == 0) || (lVar2._0_4_ = param_1->neg, lVar2._4_4_ = param_1->flags, lVar2 == 0)) ||
     (param_1[1].d == (ulong *)0x0)) {
    iVar4 = 0x65;
    reason = 0x134;
LAB_00fc2370:
    _ERR_put_error(0x200cb18,iVar4,reason,(char *)param_4,in_stack_ffffffffffffffb8);
    return 0xffffffff;
  }
  a_00 = (char *)param_1;
  iVar4 = _BN_num_bits(param_1);
  if (((iVar4 != 0xa0) && (iVar4 != 0xe0)) && (iVar4 != 0x100)) {
    iVar4 = 0x66;
    reason = 0x13b;
    goto LAB_00fc2370;
  }
  iVar4 = _BN_num_bits((BIGNUM *)a_00);
  if (10000 < iVar4) {
    iVar4 = 0x67;
    reason = 0x140;
    goto LAB_00fc2370;
  }
  m_ctx = _BN_new();
  a = _BN_new();
  ctx = _BN_new();
  ret = (BIGNUM *)_BN_CTX_new();
  if (((m_ctx != (BIGNUM *)0x0) && (a != (BIGNUM *)0x0)) &&
     ((ctx != (BIGNUM *)0x0 && (ret != (BIGNUM *)0x0)))) {
    pBVar6 = (BIGNUM *)&stack0xffffffffffffffa8;
    _DSA_SIG_get0();
    iVar4 = _BN_is_zero();
    uVar9 = 0;
    uVar8 = 0;
    if (((((iVar4 != 0) || (iVar4 = _BN_is_negative(), iVar4 != 0)) ||
         (iVar4 = _BN_ucmp((BIGNUM *)a_00,pBVar6), -1 < iVar4)) ||
        ((iVar4 = _BN_is_zero(), uVar9 = uVar8, iVar4 != 0 ||
         (iVar4 = _BN_is_negative(), iVar4 != 0)))) ||
       (iVar4 = _BN_ucmp((BIGNUM *)a_00,pBVar6), -1 < iVar4)) goto LAB_00fc25ef;
    pBVar6 = ret;
    pBVar5 = _BN_mod_inverse(ret,*(BIGNUM **)&param_1->neg,param_3,(BN_CTX *)param_4);
    if (((pBVar5 != (BIGNUM *)0x0) &&
        (pBVar6 = _BN_bin2bn((uchar *)pBVar6,(int)m_ctx,param_3), pBVar6 != (BIGNUM *)0x0)) &&
       (((iVar4 = _BN_mod_mul(*(BIGNUM **)&param_1->neg,a,ret,param_4,(BN_CTX *)ctx), iVar4 != 0 &&
         (pBVar6 = ret, iVar4 = _BN_mod_mul(*(BIGNUM **)&param_1->neg,a,ret,param_4,(BN_CTX *)ctx),
         iVar4 != 0)) &&
        ((pBVar5 = ctx, ((uint64_t)param_1[2].d & 1) == 0 ||
         (lock = param_1->top,
         pBVar7 = _BN_MONT_CTX_set_locked((BN_MONT_CTX **)ret,lock,pBVar6,(BN_CTX *)param_4),
         pBVar5 = ctx, pBVar7 != (BN_MONT_CTX *)0x0)))))) {
      pcVar3 = *(code **)(*(int64_t *)&param_1[3].top + 0x20);
      param_4 = *(BIGNUM **)&param_1->top;
      if (pcVar3 == 0x0) {
        iVar4 = _BN_mod_exp2_mont(*(BIGNUM **)&param_1[1].top,m_ctx,a,param_4,
                                  in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0,
                                  (BN_CTX *)pBVar5,(BN_MONT_CTX *)m_ctx);
      }
      else {
        iVar4 = (*pcVar3)(m_ctx,param_1[1].d);
        param_4 = a;
      }
      ctx = pBVar5;
      if (iVar4 != 0) {
        a_00 = *(char **)&param_1->neg;
        iVar4 = _BN_div((BIGNUM *)a_00,pBVar5,ret,param_4,(BN_CTX *)pBVar5);
        if (iVar4 != 0) {
          iVar4 = _BN_ucmp((BIGNUM *)a_00,pBVar5);
          uVar9 = (uint64_t)(iVar4 == 0);
          goto LAB_00fc25ef;
        }
      }
    }
  }
  a_00 = "crypto/dsa/dsa_ossl.c";
  _ERR_put_error(0x200cb18,3,0x18c,(char *)param_4,(int)ctx);
  uVar9 = 0xffffffff;
LAB_00fc25ef:
  _BN_CTX_free((BN_CTX *)a_00);
  _BN_free((BIGNUM *)a_00);
  _BN_free((BIGNUM *)a_00);
  _BN_free((BIGNUM *)a_00);
  return uVar9;
}

