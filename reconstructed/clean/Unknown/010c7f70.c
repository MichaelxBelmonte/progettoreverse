// Function: FUN_010c7f70
// Address: 010c7f70
// Size: 518 bytes
// Class: Unknown
// String references:
//   "section:"
//   ",name:"
//   ",value:"
//   "crypto/x509v3/v3_pmaps.c"

int64_t FUN_010c7f70(ASN1_ITEM *param_1,uint64_t param_2,uint64_t param_3,char *param_4)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  ASN1_OBJECT *pAVar4;
  ASN1_OBJECT *pAVar5;
  ASN1_VALUE *pAVar6;
  char *a;
  uint64_t unaff_R12;
  int iVar7;
  
  iVar1 = _OPENSSL_sk_num();
  lVar2 = _OPENSSL_sk_new_reserve();
  if (lVar2 == 0) {
    _ERR_put_error(0x201ebd3,0x41,0x4c,param_4,(int)unaff_R12);
LAB_010c8161:
    lVar2 = 0;
  }
  else if (0 < iVar1) {
    iVar7 = 0;
    do {
      puVar3 = (void*)_OPENSSL_sk_value();
      if ((puVar3[2] == 0) || (puVar3[1] == 0)) {
        _ERR_put_error(0x201ebd3,0x6e,0x54,param_4,(int)unaff_R12);
        a = ",name:";
        _ERR_add_error_data(0x201e68a,*puVar3,puVar3[1],",value:");
LAB_010c8141:
        _ASN1_OBJECT_free((ASN1_OBJECT *)a);
        _ASN1_OBJECT_free((ASN1_OBJECT *)a);
        _OPENSSL_sk_pop_free();
        goto LAB_010c8161;
      }
      pAVar4 = _OBJ_txt2obj(&param_1->itype,(int)param_2);
      pAVar5 = _OBJ_txt2obj(&param_1->itype,(int)param_2);
      if ((pAVar4 == (ASN1_OBJECT *)0x0) || (pAVar5 == (ASN1_OBJECT *)0x0)) {
        _ERR_put_error(0x201ebd3,0x6e,0x5c,param_4,(int)unaff_R12);
        a = ",name:";
        _ERR_add_error_data(0x201e68a,*puVar3,puVar3[1],",value:");
        goto LAB_010c8141;
      }
      pAVar6 = _ASN1_item_new(param_1);
      if (pAVar6 == (ASN1_VALUE *)0x0) {
        a = "crypto/x509v3/v3_pmaps.c";
        _ERR_put_error(0x201ebd3,0x41,0x62,param_4,(int)unaff_R12);
        goto LAB_010c8141;
      }
      *(ASN1_OBJECT **)pAVar6 = pAVar4;
      *(ASN1_OBJECT **)(pAVar6 + 8) = pAVar5;
      _OPENSSL_sk_push();
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  return lVar2;
}

