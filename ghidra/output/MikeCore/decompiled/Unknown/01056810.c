// Function: FUN_01056810
// Address: 01056810
// Size: 633 bytes
// Class: Unknown
// String references:
//   "ENCRYPTED PRIVATE KEY"
//   "PRIVATE KEY"
//   "crypto/pem/pem_pk8.c"


int FUN_01056810(BIO *param_1,PKCS8_PRIV_KEY_INFO *param_2,longlong param_3,EVP_CIPHER *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint pbe_nid;
  BIO *pBVar4;
  BIO *pBVar5;
  char *a;
  EVP_CIPHER *pEVar6;
  uchar *unaff_RDI;
  uint local_res8;
  code *local_res10;
  undefined8 local_res18;
  int in_stack_fffffffffffffbb8;
  int in_stack_fffffffffffffbc0;
  int in_stack_fffffffffffffbc8;
  PKCS8_PRIV_KEY_INFO *in_stack_fffffffffffffbd0;
  
  iVar3 = (int)param_2;
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  pBVar5 = param_1;
  pEVar6 = param_4;
  pBVar4 = (BIO *)_EVP_PKEY2PKCS8((EVP_PKEY *)param_1);
  if (pBVar4 == (BIO *)0x0) {
    _ERR_put_error(0x2019887,0x73,0x49,(char *)pEVar6,in_stack_fffffffffffffbb8);
  }
  else {
    if ((param_3 == 0) && ((int)param_1 == -1)) {
      if (iVar3 == 0) {
        iVar3 = _PEM_ASN1_write_bio();
      }
      else {
        iVar3 = _i2d_PKCS8_PRIV_KEY_INFO_bio(pBVar5,param_2);
        pBVar4 = pBVar5;
      }
      _PKCS8_PRIV_KEY_INFO_free((PKCS8_PRIV_KEY_INFO *)pBVar4);
      lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
      goto joined_r0x01056a23;
    }
    if (param_4 == (EVP_CIPHER *)0x0) {
      if (local_res10 == (code *)0x0) {
        pbe_nid = _PEM_def_callback(local_res18,1);
      }
      else {
        pbe_nid = (*local_res10)();
      }
      if ((int)pbe_nid < 1) {
        a = "crypto/pem/pem_pk8.c";
        _ERR_put_error(0x2019887,0x6f,0x53,(char *)pEVar6,(int)unaff_RDI);
        _PKCS8_PRIV_KEY_INFO_free((PKCS8_PRIV_KEY_INFO *)a);
        goto LAB_01056a5f;
      }
      pBVar5 = (BIO *)(ulonglong)pbe_nid;
      pEVar6 = (EVP_CIPHER *)&stack0xfffffffffffffbc8;
      pBVar4 = (BIO *)_PKCS8_encrypt(pbe_nid,pEVar6,(char *)0x0,0,unaff_RDI,
                                     in_stack_fffffffffffffbc0,in_stack_fffffffffffffbc8,
                                     in_stack_fffffffffffffbd0);
LAB_0105694b:
      _OPENSSL_cleanse(pBVar5,(size_t)pEVar6);
      _PKCS8_PRIV_KEY_INFO_free((PKCS8_PRIV_KEY_INFO *)pBVar5);
    }
    else {
      pBVar5 = (BIO *)(ulonglong)local_res8;
      pEVar6 = param_4;
      pBVar4 = (BIO *)_PKCS8_encrypt(local_res8,param_4,(char *)0x0,0,unaff_RDI,
                                     in_stack_fffffffffffffbc0,in_stack_fffffffffffffbc8,
                                     in_stack_fffffffffffffbd0);
      if ((EVP_CIPHER *)&stack0xfffffffffffffbc8 == param_4) goto LAB_0105694b;
      _PKCS8_PRIV_KEY_INFO_free((PKCS8_PRIV_KEY_INFO *)pBVar5);
    }
    if (pBVar4 != (BIO *)0x0) {
      if (iVar3 == 0) {
        iVar3 = _PEM_ASN1_write_bio(pBVar4,unaff_RDI,0,0);
      }
      else {
        iVar3 = _i2d_PKCS8_bio(pBVar5,(X509_SIG *)pEVar6);
        pBVar4 = pBVar5;
      }
      _X509_SIG_free((X509_SIG *)pBVar4);
      lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
      goto joined_r0x01056a23;
    }
  }
LAB_01056a5f:
  iVar3 = 0;
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
joined_r0x01056a23:
  if (lVar2 == lVar1) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


