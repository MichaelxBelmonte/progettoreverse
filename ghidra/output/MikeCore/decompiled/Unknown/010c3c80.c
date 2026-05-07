// Function: FUN_010c3c80
// Address: 010c3c80
// Size: 548 bytes
// Class: Unknown
// String references:
//   "crypto/x509v3/v3_crld.c"
//   "onlyuser"
//   "onlyCA"
//   "onlysomereasons"
//   "indirectCRL"
//   "onlyAA"
//   "section:"
//   ",name:"
//   ",value:"


ASN1_VALUE * FUN_010c3c80(ASN1_ITEM *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  ASN1_VALUE *pAVar3;
  ASN1_ITEM *pAVar4;
  char *value;
  ASN1_ITEM *it;
  int in_stack_ffffffffffffffa8;
  CONF_VALUE *pCVar5;
  
  pAVar3 = _ASN1_item_new(param_1);
  if (pAVar3 == (ASN1_VALUE *)0x0) {
    value = "crypto/x509v3/v3_crld.c";
    it = (ASN1_ITEM *)((longlong)&segment_command_00000020.vmsize + 1);
    _ERR_put_error(0x201e4b3,0x41,0x193,param_4,in_stack_ffffffffffffffa8);
LAB_010c3e38:
    _ASN1_item_free((ASN1_VALUE *)value,it);
    pAVar3 = (ASN1_VALUE *)0x0;
  }
  else {
    iVar1 = _OPENSSL_sk_num();
    if (0 < iVar1) {
      value = (char *)(pAVar3 + 0xc);
      iVar1 = 0;
      pCVar5 = (CONF_VALUE *)value;
      do {
        pAVar4 = (ASN1_ITEM *)_OPENSSL_sk_value();
        it = pAVar4;
        iVar2 = FUN_010c4180();
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_010c3e38;
          iVar2 = _strcmp(value,&it->itype);
          if (iVar2 == 0) {
            iVar2 = _X509V3_get_value_bool((CONF_VALUE *)value,(int *)it);
          }
          else {
            iVar2 = _strcmp(value,&it->itype);
            if (iVar2 == 0) {
              iVar2 = _X509V3_get_value_bool((CONF_VALUE *)value,(int *)it);
            }
            else {
              iVar2 = _strcmp(value,&it->itype);
              if (iVar2 == 0) {
                iVar2 = _X509V3_get_value_bool((CONF_VALUE *)value,(int *)it);
                if (iVar2 != 0) goto LAB_010c3d3a;
                goto LAB_010c3e38;
              }
              iVar2 = _strcmp(value,&it->itype);
              if (iVar2 == 0) {
                iVar2 = _X509V3_get_value_bool((CONF_VALUE *)value,(int *)it);
              }
              else {
                iVar2 = _strcmp(value,&it->itype);
                if (iVar2 != 0) {
                  _ERR_put_error(0x201e4b3,0x6a,0x18b,param_4,(int)pCVar5);
                  it = *(ASN1_ITEM **)pAVar4;
                  value = ",name:";
                  _ERR_add_error_data(0x201e68a,it,pAVar4->templates,",value:");
                  goto LAB_010c3e38;
                }
                iVar2 = FUN_010c4380();
              }
            }
          }
          if (iVar2 == 0) goto LAB_010c3e38;
        }
LAB_010c3d3a:
        iVar1 = iVar1 + 1;
        iVar2 = _OPENSSL_sk_num();
      } while (iVar1 < iVar2);
    }
  }
  return pAVar3;
}


