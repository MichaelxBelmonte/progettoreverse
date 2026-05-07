// Function: FUN_010c3570
// Address: 010c3570
// Size: 673 bytes
// Class: Unknown
// String references:
//   "crypto/x509v3/v3_crld.c"
//   "reasons"
//   "CRLissuer"


longlong FUN_010c3570(char *param_1,X509V3_CTX *param_2,CONF_VALUE *param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  X509V3_CTX *ctx;
  GENERAL_NAME *pGVar5;
  GENERAL_NAMES *pGVar6;
  ASN1_VALUE *pAVar7;
  ASN1_VALUE *pAVar8;
  STACK *pSVar9;
  longlong lVar10;
  int iVar11;
  ASN1_VALUE *in_stack_ffffffffffffffb8;
  
  iVar1 = _OPENSSL_sk_num();
  lVar4 = _OPENSSL_sk_new_reserve();
  iVar3 = (int)in_stack_ffffffffffffffb8;
  if (lVar4 == 0) {
LAB_010c3790:
    param_1 = "crypto/x509v3/v3_crld.c";
    _ERR_put_error(0x201e4b3,0x41,0x11d,param_4,iVar3);
LAB_010c37d7:
    _GENERAL_NAME_free((GENERAL_NAME *)param_1);
    _GENERAL_NAMES_free((GENERAL_NAMES *)param_1);
    _OPENSSL_sk_pop_free();
    lVar4 = 0;
  }
  else if (0 < iVar1) {
    iVar11 = 0;
    do {
      ctx = (X509V3_CTX *)_OPENSSL_sk_value();
      if (ctx->subject_cert == (X509 *)0x0) {
        pSVar9 = _X509V3_get_section((X509V3_CTX *)param_1,(char *)param_2);
        if (pSVar9 == (STACK *)0x0) goto LAB_010c37d7;
        pAVar7 = _ASN1_item_new((ASN1_ITEM *)param_1);
        if (pAVar7 == (ASN1_VALUE *)0x0) {
          _ASN1_item_free((ASN1_VALUE *)param_1,(ASN1_ITEM *)param_2);
LAB_010c37c6:
          _X509V3_section_free((X509V3_CTX *)param_1,(STACK *)param_2);
          goto LAB_010c37d7;
        }
        iVar3 = _OPENSSL_sk_num();
        if (0 < iVar3) {
          iVar3 = 0;
          in_stack_ffffffffffffffb8 = pAVar7;
          do {
            param_2 = (X509V3_CTX *)_OPENSSL_sk_value();
            iVar2 = FUN_010c4180();
            if (iVar2 < 1) {
              if (iVar2 < 0) {
LAB_010c37b3:
                _ASN1_item_free((ASN1_VALUE *)param_1,(ASN1_ITEM *)param_2);
                goto LAB_010c37c6;
              }
              iVar2 = _strcmp(param_1,(char *)param_2);
              if (iVar2 == 0) {
                iVar2 = FUN_010c4380();
                if (iVar2 == 0) goto LAB_010c37b3;
              }
              else {
                iVar2 = _strcmp(param_1,(char *)param_2);
                if (iVar2 == 0) {
                  pAVar7 = in_stack_ffffffffffffffb8;
                  lVar10 = FUN_010c4590();
                  *(longlong *)(in_stack_ffffffffffffffb8 + 0x10) = lVar10;
                  in_stack_ffffffffffffffb8 = pAVar7;
                  if (lVar10 == 0) goto LAB_010c37b3;
                }
              }
            }
            iVar3 = iVar3 + 1;
            iVar2 = _OPENSSL_sk_num();
          } while (iVar3 < iVar2);
        }
        _X509V3_section_free((X509V3_CTX *)param_1,(STACK *)param_2);
        _OPENSSL_sk_push();
      }
      else {
        pGVar5 = _v2i_GENERAL_NAME((X509V3_EXT_METHOD *)param_1,ctx,param_3);
        if (pGVar5 == (GENERAL_NAME *)0x0) goto LAB_010c37d7;
        pGVar6 = _GENERAL_NAMES_new();
        iVar3 = (int)in_stack_ffffffffffffffb8;
        if (pGVar6 == (GENERAL_NAMES *)0x0) goto LAB_010c3790;
        iVar2 = _OPENSSL_sk_push();
        iVar3 = (int)in_stack_ffffffffffffffb8;
        if (iVar2 == 0) goto LAB_010c3790;
        pAVar7 = _ASN1_item_new((ASN1_ITEM *)param_1);
        iVar3 = (int)in_stack_ffffffffffffffb8;
        if (pAVar7 == (ASN1_VALUE *)0x0) goto LAB_010c3790;
        _OPENSSL_sk_push();
        pAVar8 = _ASN1_item_new((ASN1_ITEM *)param_1);
        iVar3 = (int)in_stack_ffffffffffffffb8;
        *(ASN1_VALUE **)pAVar7 = pAVar8;
        if (pAVar8 == (ASN1_VALUE *)0x0) goto LAB_010c3790;
        *(GENERAL_NAMES **)(pAVar8 + 8) = pGVar6;
        **(undefined4 **)pAVar7 = 0;
        param_2 = ctx;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar1);
  }
  return lVar4;
}


