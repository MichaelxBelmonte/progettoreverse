// Function: FUN_00fbedb0
// Address: 00fbedb0
// Size: 527 bytes
// Class: Unknown
// String references:
//   "crypto/dsa/dsa_ameth.c"


undefined8 FUN_00fbedb0(void)

{
  int iVar1;
  ASN1_INTEGER *pAVar2;
  DSA *pDVar3;
  BIGNUM *pBVar4;
  char *r;
  BIGNUM *pBVar5;
  undefined8 uVar6;
  void **unaff_RSI;
  long len;
  int reason;
  BIGNUM *in_R9;
  int *local_48;
  ASN1_OBJECT **local_40;
  int in_stack_ffffffffffffffc8;
  int in_stack_ffffffffffffffcc;
  
  iVar1 = _PKCS8_pkey_get0(&local_40,&stack0xffffffffffffffc8);
  if (iVar1 == 0) {
    return 0;
  }
  _X509_ALGOR_get0(local_40,(int *)&local_48,unaff_RSI,(X509_ALGOR *)in_R9);
  len = (long)unaff_RSI;
  pAVar2 = _d2i_ASN1_INTEGER((ASN1_INTEGER **)local_40,(uchar **)(longlong)in_stack_ffffffffffffffc8
                             ,len);
  if (((pAVar2 == (ASN1_INTEGER *)0x0) || (pAVar2->type == 0x102)) ||
     (in_stack_ffffffffffffffcc != 0x10)) {
LAB_00fbeee5:
    r = "crypto/dsa/dsa_ameth.c";
    _ERR_put_error(0x200c867,0x68,0xc2,(char *)in_R9,in_stack_ffffffffffffffc8);
  }
  else {
    pAVar2 = *(ASN1_INTEGER **)(local_48 + 2);
    pBVar5 = (BIGNUM *)(longlong)*local_48;
    pDVar3 = _d2i_DSAparams((DSA **)pAVar2,(uchar **)pBVar5,len);
    if (pDVar3 == (DSA *)0x0) goto LAB_00fbeee5;
    pBVar4 = (BIGNUM *)_BN_secure_new();
    pDVar3->pub_key = pBVar4;
    if ((pBVar4 == (BIGNUM *)0x0) ||
       (pBVar5 = _ASN1_INTEGER_to_BN(pAVar2,pBVar5), pBVar5 == (BIGNUM *)0x0)) {
      iVar1 = 0x6d;
      reason = 0xa9;
LAB_00fbef53:
      r = "crypto/dsa/dsa_ameth.c";
      _ERR_put_error(0x200c867,iVar1,reason,(char *)in_R9,in_stack_ffffffffffffffc8);
    }
    else {
      pBVar5 = _BN_new();
      pDVar3->g = pBVar5;
      if (pBVar5 == (BIGNUM *)0x0) {
        iVar1 = 0x41;
        reason = 0xae;
        goto LAB_00fbef53;
      }
      pBVar5 = (BIGNUM *)_BN_CTX_new();
      if (pBVar5 == (BIGNUM *)0x0) {
        iVar1 = 0x41;
        reason = 0xb2;
        goto LAB_00fbef53;
      }
      _BN_set_flags();
      r = *(char **)&pDVar3->write_params;
      iVar1 = _BN_mod_exp((BIGNUM *)r,pDVar3->pub_key,pBVar5,in_R9,
                          (BN_CTX *)CONCAT44(in_stack_ffffffffffffffcc,in_stack_ffffffffffffffc8));
      if (iVar1 != 0) {
        _EVP_PKEY_assign((EVP_PKEY *)r,(int)pDVar3,(char *)pBVar5);
        uVar6 = 1;
        goto LAB_00fbef16;
      }
      r = "crypto/dsa/dsa_ameth.c";
      _ERR_put_error(0x200c867,0x6d,0xb8,(char *)in_R9,in_stack_ffffffffffffffc8);
    }
  }
  _DSA_free((DSA *)r);
  uVar6 = 0;
LAB_00fbef16:
  _BN_CTX_free((BN_CTX *)r);
  _ASN1_STRING_clear_free();
  return uVar6;
}


