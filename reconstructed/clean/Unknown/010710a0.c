// Function: FUN_010710a0
// Address: 010710a0
// Size: 1294 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_ossl.c"

uint32_t FUN_010710a0(RSA *param_1,uint64_t param_2,RSA *param_3,BN_MONT_CTX *param_4)

{
  int iVar1;
  int iVar2;
  RSA *n;
  BIGNUM *pBVar3;
  BIGNUM *a;
  void *pvVar4;
  BIGNUM *pBVar5;
  BN_MONT_CTX *pBVar6;
  char *rsa;
  int unaff_ESI;
  uint unaff_EDI;
  char cVar7;
  BIGNUM *in_stack_ffffffffffffffa8;
  uint32_t uVar9;
  BIGNUM *local_38;
  uint uVar8;
  
  iVar2 = (int)param_3;
  rsa = (char *)param_1;
  n = (RSA *)_BN_CTX_new();
  uVar9 = 0xffffffff;
  if (n == (RSA *)0x0) goto LAB_01071245;
  _BN_CTX_start((BN_CTX *)rsa);
  pBVar3 = _BN_CTX_get((BN_CTX *)rsa);
  a = _BN_CTX_get((BN_CTX *)rsa);
  _BN_num_bits((BIGNUM *)rsa);
  pvVar4 = _CRYPTO_malloc((int)rsa,(char *)((int64_t)&section_000000b8.reserved1 + 3),(int)param_3)
  ;
  if ((a == (BIGNUM *)0x0) || (pvVar4 == (void *)0x0)) {
    rsa = "crypto/rsa/rsa_ossl.c";
    _ERR_put_error(0x201b8c4,0x41,0x101,(char *)param_4,(int)in_stack_ffffffffffffffa8);
    goto LAB_01071245;
  }
  iVar1 = (int)param_4;
  if (iVar2 != 5) {
    if (iVar2 == 3) {
      rsa = (char *)(uint64_t)unaff_EDI;
      iVar1 = _RSA_padding_add_none((uchar *)rsa,unaff_ESI,(uchar *)param_3,iVar1);
      goto joined_r0x010711de;
    }
    rsa = (char *)(uint64_t)unaff_EDI;
    if (iVar2 == 1) {
      iVar1 = _RSA_padding_add_PKCS1_type_1((uchar *)rsa,unaff_ESI,(uchar *)param_3,iVar1);
      goto joined_r0x010711de;
    }
    iVar2 = 0x76;
    iVar1 = 0x111;
    goto LAB_01071240;
  }
  rsa = (char *)(uint64_t)unaff_EDI;
  iVar1 = _RSA_padding_add_X931((uchar *)rsa,unaff_ESI,(uchar *)param_3,iVar1);
joined_r0x010711de:
  if ((iVar1 < 1) ||
     (pBVar5 = _BN_bin2bn((uchar *)rsa,(int)pBVar3,(BIGNUM *)param_3), pBVar5 == (BIGNUM *)0x0))
  goto LAB_01071245;
  iVar1 = _BN_ucmp((BIGNUM *)rsa,pBVar3);
  if (-1 < iVar1) {
    iVar2 = 0x84;
    iVar1 = 0x11d;
    goto LAB_01071240;
  }
  uVar8 = *(uint *)((int64_t)&param_1->_method_mod_n + 4);
  if ((uVar8 & 2) != 0) {
    pBVar3 = param_1->n;
    rsa = (char *)n;
    pBVar6 = _BN_MONT_CTX_set_locked
                       ((BN_MONT_CTX **)n,(int)pBVar3,(BIGNUM *)param_3,(BN_CTX *)param_4);
    if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_01071245;
    uVar8 = *(uint *)((int64_t)&param_1->_method_mod_n + 4);
  }
  cVar7 = (char)uVar8;
  if (cVar7 < '\0') {
    local_38 = (BIGNUM *)0x0;
    in_stack_ffffffffffffffa8 = (BIGNUM *)0x0;
LAB_010713ec:
    if ((((uVar8 & 0x20) == 0) && (param_1->version != 1)) &&
       (((param_1->p == (BIGNUM *)0x0 ||
         (((param_1->q == (BIGNUM *)0x0 || (param_1->dmp1 == (BIGNUM *)0x0)) ||
          (param_1->dmq1 == (BIGNUM *)0x0)))) || (param_1->iqmp == (BIGNUM *)0x0)))) {
      pBVar3 = _BN_new();
      if (pBVar3 == (BIGNUM *)0x0) {
        iVar2 = 0x41;
        iVar1 = 0x141;
        goto LAB_01071240;
      }
      if (param_1->d == (BIGNUM *)0x0) {
        rsa = "crypto/rsa/rsa_ossl.c";
        _ERR_put_error(0x201b8c4,0xb3,0x145,(char *)param_4,(int)in_stack_ffffffffffffffa8);
        _BN_free((BIGNUM *)rsa);
        goto LAB_01071245;
      }
      _BN_with_flags();
      rsa = (char *)param_1->n;
      param_4 = param_1->_method_mod_p;
      param_3 = n;
      iVar1 = (*param_1->meth->bn_mod_exp)
                        ((BIGNUM *)rsa,pBVar3,(BIGNUM *)n,(BIGNUM *)param_4,
                         (BN_CTX *)in_stack_ffffffffffffffa8,(BN_MONT_CTX *)CONCAT44(iVar2,uVar9));
      _BN_free((BIGNUM *)rsa);
    }
    else {
      rsa = (char *)n;
      iVar1 = (*param_1->meth->rsa_mod_exp)((BIGNUM *)n,(BIGNUM *)param_1,param_3,(BN_CTX *)param_4)
      ;
    }
    if ((iVar1 != 0) &&
       ((cVar7 < '\0' ||
        (iVar1 = _BN_BLINDING_invert_ex
                           ((BIGNUM *)n,local_38,(BN_BLINDING *)param_3,(BN_CTX *)param_4),
        rsa = (char *)n, iVar1 != 0)))) {
      if (iVar2 == 5) {
        iVar2 = _BN_sub((BIGNUM *)rsa,a,(BIGNUM *)param_3);
        if (iVar2 == 0) goto LAB_01071245;
        _BN_cmp((BIGNUM *)rsa,a);
      }
      uVar9 = _BN_bn2binpad();
    }
  }
  else {
    _CRYPTO_THREAD_write_lock();
    local_38 = (BIGNUM *)param_1->mt_blinding;
    if (local_38 != (BIGNUM *)0x0) {
LAB_010712e3:
      iVar1 = _BN_BLINDING_is_current_thread();
      if (iVar1 == 0) {
        local_38 = *(BIGNUM **)(param_1 + 1);
        if (local_38 == (BIGNUM *)0x0) {
          local_38 = (BIGNUM *)_RSA_setup_blinding((RSA *)rsa,(BN_CTX *)pBVar3);
          *(BIGNUM **)(param_1 + 1) = local_38;
          _CRYPTO_THREAD_unlock();
          if (local_38 == (BIGNUM *)0x0) goto LAB_0107151a;
        }
        else {
          _CRYPTO_THREAD_unlock();
        }
        pBVar3 = _BN_CTX_get((BN_CTX *)rsa);
        if (pBVar3 == (BIGNUM *)0x0) {
          iVar2 = 0x41;
          iVar1 = 0x130;
          goto LAB_01071240;
        }
        _BN_BLINDING_lock();
        rsa = (char *)n;
        iVar1 = _BN_BLINDING_convert_ex
                          ((BIGNUM *)n,local_38,(BN_BLINDING *)param_3,(BN_CTX *)param_4);
        _BN_BLINDING_unlock();
      }
      else {
        _CRYPTO_THREAD_unlock();
        pBVar3 = (BIGNUM *)0x0;
        rsa = (char *)n;
        iVar1 = _BN_BLINDING_convert_ex
                          ((BIGNUM *)n,local_38,(BN_BLINDING *)param_3,(BN_CTX *)param_4);
      }
      if (iVar1 == 0) goto LAB_01071245;
      uVar8 = *(uint *)((int64_t)&param_1->_method_mod_n + 4);
      in_stack_ffffffffffffffa8 = pBVar3;
      goto LAB_010713ec;
    }
    local_38 = (BIGNUM *)_RSA_setup_blinding((RSA *)rsa,(BN_CTX *)pBVar3);
    param_1->mt_blinding = (BN_BLINDING *)local_38;
    if (local_38 != (BIGNUM *)0x0) goto LAB_010712e3;
    _CRYPTO_THREAD_unlock();
LAB_0107151a:
    iVar2 = 0x44;
    iVar1 = 0x129;
LAB_01071240:
    rsa = "crypto/rsa/rsa_ossl.c";
    _ERR_put_error(0x201b8c4,iVar2,iVar1,(char *)param_4,(int)in_stack_ffffffffffffffa8);
  }
LAB_01071245:
  _BN_CTX_end((BN_CTX *)rsa);
  _BN_CTX_free((BN_CTX *)rsa);
  _CRYPTO_clear_free(0x16b,"crypto/rsa/rsa_ossl.c");
  return uVar9;
}

