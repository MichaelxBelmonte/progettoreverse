// Function: FUN_010c5370
// Address: 010c5370
// Size: 577 bytes
// Class: Unknown
// String references:
//   "value="
//   "crypto/x509v3/v3_info.c"


longlong FUN_010c5370(ASN1_ITEM *param_1,undefined8 param_2,undefined8 param_3,CONF_VALUE *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ASN1_VALUE *pAVar4;
  char *pcVar5;
  GENERAL_NAME *pGVar6;
  ASN1_OBJECT *pAVar7;
  int iVar8;
  int iVar9;
  X509V3_EXT_METHOD *unaff_RSI;
  GENERAL_NAME local_70;
  undefined8 local_60;
  undefined8 uVar10;
  
  uVar10 = param_2;
  iVar1 = _OPENSSL_sk_num();
  lVar2 = _OPENSSL_sk_new_reserve();
  if (lVar2 == 0) {
    _ERR_put_error(0x201e91d,0x41,0x72,(char *)param_4,(int)uVar10);
LAB_010c559c:
    lVar2 = 0;
  }
  else if (0 < iVar1) {
    iVar9 = 0;
    do {
      iVar8 = (int)param_2;
      lVar3 = _OPENSSL_sk_value();
      pAVar4 = _ASN1_item_new(param_1);
      if (pAVar4 == (ASN1_VALUE *)0x0) {
        _ERR_put_error(0x201e91d,0x41,0x79,(char *)param_4,(int)uVar10);
LAB_010c558c:
        _OPENSSL_sk_pop_free();
        goto LAB_010c559c;
      }
      _OPENSSL_sk_push();
      pcVar5 = _strchr(&param_1->itype,iVar8);
      if (pcVar5 == (char *)0x0) {
        _ERR_put_error(0x201e91d,0x8f,0x80,(char *)param_4,(int)uVar10);
        goto LAB_010c558c;
      }
      local_70.d.ptr = pcVar5 + 1;
      local_60 = *(undefined8 *)(lVar3 + 0x10);
      pGVar6 = _v2i_GENERAL_NAME_ex(&local_70,unaff_RSI,(X509V3_CTX *)0x0,param_4,(int)uVar10);
      if (pGVar6 == (GENERAL_NAME *)0x0) goto LAB_010c558c;
      iVar8 = 0x201e91d;
      param_1 = (ASN1_ITEM *)&section_00000068.addr;
      lVar3 = _CRYPTO_strndup();
      if (lVar3 == 0) {
        _ERR_put_error(0x201e91d,0x41,0x8a,(char *)param_4,(int)uVar10);
        goto LAB_010c558c;
      }
      pAVar7 = _OBJ_txt2obj(&param_1->itype,iVar8);
      *(ASN1_OBJECT **)pAVar4 = pAVar7;
      if (pAVar7 == (ASN1_OBJECT *)0x0) {
        pcVar5 = "crypto/x509v3/v3_info.c";
        _ERR_put_error(0x201e91d,0x77,0x90,(char *)param_4,(int)uVar10);
        _ERR_add_error_data((int)pcVar5,lVar3);
        _CRYPTO_free(pcVar5);
        goto LAB_010c558c;
      }
      param_2 = 0x95;
      _CRYPTO_free(param_1);
      iVar9 = iVar9 + 1;
    } while (iVar1 != iVar9);
  }
  return lVar2;
}


