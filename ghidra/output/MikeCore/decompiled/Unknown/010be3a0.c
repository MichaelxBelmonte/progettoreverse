// Function: FUN_010be3a0
// Address: 010be3a0
// Size: 731 bytes
// Class: Unknown
// String references:
//   "issuer"
//   "crypto/x509v3/v3_alt.c"
//   "copy"


longlong FUN_010be3a0(X509 *param_1,X509 *param_2,undefined8 param_3,CONF_VALUE *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  X509 *pXVar5;
  GENERAL_NAME *pGVar6;
  X509_EXTENSION *pXVar7;
  void *pvVar8;
  X509 *unaff_RSI;
  int iVar9;
  X509 *pXVar10;
  
  iVar1 = _OPENSSL_sk_num();
  lVar4 = _OPENSSL_sk_new_reserve();
  if (lVar4 == 0) {
    _ERR_put_error(0x201dfa8,0x41,0xe2,(char *)param_4,(int)unaff_RSI);
    lVar4 = 0;
    _OPENSSL_sk_free();
  }
  else if (0 < iVar1) {
    if (unaff_RSI == (X509 *)0x0) {
      iVar9 = 0;
      do {
        pXVar5 = (X509 *)_OPENSSL_sk_value();
        iVar2 = _name_cmp((char *)param_1,(char *)param_2);
        if (((iVar2 == 0) && (pXVar5->signature != (ASN1_BIT_STRING *)0x0)) &&
           (iVar2 = _strcmp((char *)param_1,(char *)param_2), iVar2 == 0)) goto LAB_010be5ee;
        param_2 = (X509 *)0x0;
        pGVar6 = _v2i_GENERAL_NAME_ex
                           ((GENERAL_NAME *)pXVar5,(X509V3_EXT_METHOD *)0x0,(X509V3_CTX *)0x0,
                            param_4,(int)unaff_RSI);
        if (pGVar6 == (GENERAL_NAME *)0x0) goto LAB_010be65e;
        _OPENSSL_sk_push();
        iVar9 = iVar9 + 1;
        param_1 = pXVar5;
      } while (iVar1 != iVar9);
    }
    else {
      iVar9 = 0;
      do {
        pXVar5 = (X509 *)_OPENSSL_sk_value();
        iVar2 = _name_cmp((char *)param_1,(char *)param_2);
        if (((iVar2 == 0) && (pXVar5->signature != (ASN1_BIT_STRING *)0x0)) &&
           (iVar2 = _strcmp((char *)param_1,(char *)param_2), iVar2 == 0)) {
          pXVar10 = unaff_RSI;
          if (*(int *)&unaff_RSI->cert_info != 1) {
            if ((ASN1_ITEM_EXP *)unaff_RSI->sig_alg == (ASN1_ITEM_EXP *)0x0) goto LAB_010be5ee;
            param_2 = (X509 *)0xffffffff;
            iVar2 = _X509_get_ext_by_NID(param_1,-1,(int)param_3);
            pXVar10 = unaff_RSI;
            if (-1 < iVar2) {
              pXVar7 = _X509_get_ext(unaff_RSI,(int)param_2);
              if ((pXVar7 == (X509_EXTENSION *)0x0) ||
                 (pvVar8 = _X509V3_EXT_d2i((X509_EXTENSION *)unaff_RSI), pvVar8 == (void *)0x0)) {
                _ERR_put_error(0x201dfa8,0x7e,0x10f,(char *)param_4,(int)pXVar10);
                goto LAB_010be65e;
              }
              iVar2 = _OPENSSL_sk_num();
              iVar3 = _OPENSSL_sk_reserve();
              if (iVar3 == 0) {
                _ERR_put_error(0x201dfa8,0x41,0x115,(char *)param_4,(int)pXVar10);
                _OPENSSL_sk_free();
                goto LAB_010be65e;
              }
              if (0 < iVar2) {
                iVar3 = 0;
                do {
                  _OPENSSL_sk_value();
                  _OPENSSL_sk_push();
                  iVar3 = iVar3 + 1;
                } while (iVar2 != iVar3);
              }
              _OPENSSL_sk_free();
              param_1 = unaff_RSI;
            }
          }
        }
        else {
          param_2 = unaff_RSI;
          param_3 = 0;
          pXVar10 = param_2;
          pGVar6 = _v2i_GENERAL_NAME_ex
                             ((GENERAL_NAME *)pXVar5,(X509V3_EXT_METHOD *)param_2,(X509V3_CTX *)0x0,
                              param_4,(int)param_2);
          if (pGVar6 == (GENERAL_NAME *)0x0) goto LAB_010be65e;
          _OPENSSL_sk_push();
          param_1 = pXVar5;
        }
        iVar9 = iVar9 + 1;
        unaff_RSI = pXVar10;
      } while (iVar9 != iVar1);
    }
  }
  return lVar4;
LAB_010be5ee:
  _ERR_put_error(0x201dfa8,0x7f,0x107,(char *)param_4,(int)unaff_RSI);
LAB_010be65e:
  _OPENSSL_sk_pop_free();
  return 0;
}


