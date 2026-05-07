// Function: FUN_010715b0
// Address: 010715b0
// Size: 1388 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_ossl.c"


uint FUN_010715b0(RSA *param_1,BN_MONT_CTX *param_2,RSA *param_3,BN_MONT_CTX *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  RSA *n;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  void *pvVar6;
  BN_MONT_CTX *pBVar7;
  uint uVar8;
  char *rsa;
  uchar *to;
  int unaff_EDI;
  size_t sVar9;
  RSA *rsa_00;
  uint uVar10;
  char cVar11;
  BIGNUM *in_stack_ffffffffffffff98;
  int in_stack_ffffffffffffffa8;
  uint local_54;
  BIGNUM *local_48;
  
  rsa = (char *)param_1;
  rsa_00 = param_3;
  n = (RSA *)_BN_CTX_new();
  local_54 = 0xffffffff;
  if (n == (RSA *)0x0) goto LAB_010716fa;
  _BN_CTX_start((BN_CTX *)rsa);
  pBVar4 = _BN_CTX_get((BN_CTX *)rsa);
  pBVar5 = _BN_CTX_get((BN_CTX *)rsa);
  iVar1 = _BN_num_bits((BIGNUM *)rsa);
  iVar2 = iVar1 + 7;
  if (-1 < iVar1 + 7) {
    iVar2 = iVar1;
  }
  uVar10 = iVar2 + 7 >> 3;
  pvVar6 = _CRYPTO_malloc((int)rsa,(char *)((longlong)&section_00000158.size + 5),(int)rsa_00);
  if ((pBVar5 == (BIGNUM *)0x0) || (pvVar6 == (void *)0x0)) {
    rsa = "crypto/rsa/rsa_ossl.c";
    _ERR_put_error(0x201b8c4,0x41,0x187,(char *)param_4,(int)in_stack_ffffffffffffff98);
    goto LAB_010716fa;
  }
  if ((int)uVar10 < unaff_EDI) {
    iVar2 = 0x6c;
    iVar1 = 0x191;
  }
  else {
    pBVar5 = _BN_bin2bn((uchar *)rsa,(int)pBVar4,(BIGNUM *)rsa_00);
    if (pBVar5 == (BIGNUM *)0x0) goto LAB_010716fa;
    iVar2 = _BN_ucmp((BIGNUM *)rsa,pBVar4);
    if (-1 < iVar2) {
      iVar2 = 0x84;
      iVar1 = 0x19b;
      goto LAB_010716ed;
    }
    uVar3 = *(uint *)((longlong)&param_1->_method_mod_n + 4);
    cVar11 = (char)uVar3;
    if (cVar11 < '\0') {
      local_48 = (BIGNUM *)0x0;
      in_stack_ffffffffffffff98 = (BIGNUM *)0x0;
    }
    else {
      _CRYPTO_THREAD_write_lock();
      local_48 = (BIGNUM *)param_1->mt_blinding;
      if (local_48 == (BIGNUM *)0x0) {
        local_48 = (BIGNUM *)_RSA_setup_blinding((RSA *)rsa,(BN_CTX *)pBVar4);
        param_1->mt_blinding = (BN_BLINDING *)local_48;
        if (local_48 != (BIGNUM *)0x0) goto LAB_01071772;
        _CRYPTO_THREAD_unlock();
LAB_010719ce:
        iVar2 = 0x44;
        iVar1 = 0x1a2;
        goto LAB_010716ed;
      }
LAB_01071772:
      iVar2 = _BN_BLINDING_is_current_thread();
      iVar1 = (int)in_stack_ffffffffffffff98;
      if (iVar2 == 0) {
        local_48 = *(BIGNUM **)(param_1 + 1);
        if (local_48 == (BIGNUM *)0x0) {
          local_48 = (BIGNUM *)_RSA_setup_blinding((RSA *)rsa,(BN_CTX *)pBVar4);
          *(BIGNUM **)(param_1 + 1) = local_48;
          _CRYPTO_THREAD_unlock();
          iVar1 = (int)in_stack_ffffffffffffff98;
          if (local_48 == (BIGNUM *)0x0) goto LAB_010719ce;
        }
        else {
          _CRYPTO_THREAD_unlock();
        }
        in_stack_ffffffffffffff98 = _BN_CTX_get((BN_CTX *)rsa);
        if (in_stack_ffffffffffffff98 == (BIGNUM *)0x0) {
          rsa = "crypto/rsa/rsa_ossl.c";
          _ERR_put_error(0x201b8c4,0x41,0x1a9,(char *)param_4,iVar1);
          goto LAB_010716fa;
        }
        _BN_BLINDING_lock();
        rsa = (char *)n;
        iVar2 = _BN_BLINDING_convert_ex
                          ((BIGNUM *)n,local_48,(BN_BLINDING *)rsa_00,(BN_CTX *)param_4);
        _BN_BLINDING_unlock();
      }
      else {
        _CRYPTO_THREAD_unlock();
        in_stack_ffffffffffffff98 = (BIGNUM *)0x0;
        rsa = (char *)n;
        iVar2 = _BN_BLINDING_convert_ex
                          ((BIGNUM *)n,local_48,(BN_BLINDING *)rsa_00,(BN_CTX *)param_4);
      }
      if (iVar2 == 0) goto LAB_010716fa;
      uVar3 = *(uint *)((longlong)&param_1->_method_mod_n + 4);
    }
    if ((((uVar3 & 0x20) == 0) && (param_1->version != 1)) &&
       ((param_1->p == (BIGNUM *)0x0 ||
        ((((param_1->q == (BIGNUM *)0x0 || (param_1->dmp1 == (BIGNUM *)0x0)) ||
          (param_1->dmq1 == (BIGNUM *)0x0)) || (param_1->iqmp == (BIGNUM *)0x0)))))) {
      pBVar4 = _BN_new();
      if (pBVar4 == (BIGNUM *)0x0) {
        iVar2 = 0x41;
        iVar1 = 0x1bb;
        goto LAB_010716ed;
      }
      if (param_1->d == (BIGNUM *)0x0) {
        rsa = "crypto/rsa/rsa_ossl.c";
        _ERR_put_error(0x201b8c4,0xb3,0x1bf,(char *)param_4,(int)in_stack_ffffffffffffff98);
        _BN_free((BIGNUM *)rsa);
        goto LAB_010716fa;
      }
      _BN_with_flags();
      if ((((ulonglong)param_1->_method_mod_n & 0x200000000) != 0) &&
         (rsa = (char *)n,
         pBVar7 = _BN_MONT_CTX_set_locked
                            ((BN_MONT_CTX **)n,(int)param_1->n,(BIGNUM *)rsa_00,(BN_CTX *)param_4),
         pBVar7 == (BN_MONT_CTX *)0x0)) {
        _BN_free((BIGNUM *)rsa);
        goto LAB_010716fa;
      }
      rsa = (char *)param_1->n;
      param_4 = param_1->_method_mod_p;
      rsa_00 = n;
      iVar2 = (*param_1->meth->bn_mod_exp)
                        ((BIGNUM *)rsa,pBVar4,(BIGNUM *)n,(BIGNUM *)param_4,
                         (BN_CTX *)in_stack_ffffffffffffff98,param_2);
      _BN_free((BIGNUM *)rsa);
    }
    else {
      rsa = (char *)n;
      iVar2 = (*param_1->meth->rsa_mod_exp)((BIGNUM *)n,(BIGNUM *)param_1,rsa_00,(BN_CTX *)param_4);
    }
    if ((iVar2 == 0) ||
       ((-1 < cVar11 &&
        (iVar2 = _BN_BLINDING_invert_ex
                           ((BIGNUM *)n,local_48,(BN_BLINDING *)rsa_00,(BN_CTX *)param_4),
        rsa = (char *)n, iVar2 == 0)))) goto LAB_010716fa;
    sVar9 = (size_t)rsa_00;
    uVar3 = _BN_bn2binpad();
    iVar2 = (int)in_stack_ffffffffffffff98;
    uVar8 = (int)param_3 - 1;
    if (uVar8 < 4) {
      to = (uchar *)(ulonglong)uVar3;
      iVar1 = (int)pvVar6;
      switch((int)param_3) {
      case 1:
        uVar3 = _RSA_padding_check_PKCS1_type_2
                          (to,iVar1,(uchar *)(ulonglong)uVar10,(int)param_4,iVar2);
        break;
      case 2:
        uVar3 = _RSA_padding_check_SSLv23(to,iVar1,(uchar *)(ulonglong)uVar10,(int)param_4,iVar2);
        break;
      case 3:
        _memcpy((void *)((longlong)&switchD_010718fe::switchdataD_01071b1c +
                        (longlong)(int)(&switchD_010718fe::switchdataD_01071b1c)[uVar8]),
                (void *)(longlong)(int)uVar3,sVar9);
        break;
      case 4:
        param_4 = (BN_MONT_CTX *)0x0;
        uVar3 = _RSA_padding_check_PKCS1_OAEP
                          (to,iVar1,(uchar *)(ulonglong)uVar10,0,iVar2,(uchar *)param_2,
                           in_stack_ffffffffffffffa8);
      }
      rsa = "crypto/rsa/rsa_ossl.c";
      _ERR_put_error(0x201b8c4,0x72,0x1eb,(char *)param_4,iVar2);
      _err_clear_last_constant_time();
      local_54 = uVar3;
      goto LAB_010716fa;
    }
    iVar2 = 0x76;
    iVar1 = 0x1e8;
  }
LAB_010716ed:
  rsa = "crypto/rsa/rsa_ossl.c";
  _ERR_put_error(0x201b8c4,iVar2,iVar1,(char *)param_4,(int)in_stack_ffffffffffffff98);
LAB_010716fa:
  _BN_CTX_end((BN_CTX *)rsa);
  _BN_CTX_free((BN_CTX *)rsa);
  _CRYPTO_clear_free(0x1f1,"crypto/rsa/rsa_ossl.c");
  return local_54;
}


