// Function: FUN_010c70a0
// Address: 010c70a0
// Size: 753 bytes
// Class: Unknown
// String references:
//   "section:"
//   ",name:"
//   ",value:"
//   "crypto/x509v3/v3_pci.c"


/* WARNING: Removing unreachable block (ram,0x010c71d0) */
/* WARNING: Removing unreachable block (ram,0x010c71e6) */
/* WARNING: Removing unreachable block (ram,0x010c7347) */
/* WARNING: Removing unreachable block (ram,0x010c7351) */
/* WARNING: Removing unreachable block (ram,0x010c737f) */
/* WARNING: Removing unreachable block (ram,0x010c71f1) */

undefined8 FUN_010c70a0(char *param_1,STACK *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  STACK *pSVar4;
  int iVar5;
  undefined8 local_40;
  char **ppcVar6;
  
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  ppcVar6 = (char **)0x0;
  _X509V3_parse_list(param_1);
  iVar1 = _OPENSSL_sk_num();
  iVar5 = (int)ppcVar6;
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)_OPENSSL_sk_value();
      if ((char *)puVar3[1] == (char *)0x0) {
LAB_010c724b:
        _ERR_put_error(0x201ea51,0x99,0x102,param_4,(int)ppcVar6);
LAB_010c726c:
        param_1 = ",name:";
        _ERR_add_error_data(0x201e68a,*puVar3,puVar3[1],",value:");
        goto LAB_010c729c;
      }
      if (*(char *)puVar3[1] != '@') {
        if (puVar3[2] == 0) goto LAB_010c724b;
        param_2 = (STACK *)&local_40;
        param_1 = (char *)&stack0xffffffffffffffc8;
        iVar5 = FUN_010c73b0();
        if (iVar5 != 0) goto LAB_010c71b2;
        goto LAB_010c726c;
      }
      pSVar4 = _X509V3_get_section((X509V3_CTX *)param_1,(char *)param_2);
      if (pSVar4 == (STACK *)0x0) {
        _ERR_put_error(0x201ea51,0x87,0x10c,param_4,(int)ppcVar6);
        param_1 = ",name:";
        _ERR_add_error_data(0x201e68a,*puVar3,puVar3[1],",value:");
        goto LAB_010c729c;
      }
      iVar5 = 0;
      while (iVar2 = _OPENSSL_sk_num(), iVar5 < iVar2) {
        _OPENSSL_sk_value();
        param_2 = (STACK *)&local_40;
        param_1 = (char *)&stack0xffffffffffffffc8;
        iVar2 = FUN_010c73b0();
        iVar5 = iVar5 + 1;
        if (iVar2 == 0) {
          _X509V3_section_free((X509V3_CTX *)param_1,param_2);
          goto LAB_010c729c;
        }
      }
      _X509V3_section_free((X509V3_CTX *)param_1,param_2);
LAB_010c71b2:
      iVar1 = iVar1 + 1;
      iVar2 = _OPENSSL_sk_num();
      iVar5 = (int)ppcVar6;
    } while (iVar1 < iVar2);
  }
  param_1 = "crypto/x509v3/v3_pci.c";
  _ERR_put_error(0x201ea51,0x9a,0x123,param_4,iVar5);
LAB_010c729c:
  _ASN1_OBJECT_free((ASN1_OBJECT *)param_1);
  _ASN1_INTEGER_free((ASN1_INTEGER *)param_1);
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  _ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)param_1);
  _PROXY_CERT_INFO_EXTENSION_free((PROXY_CERT_INFO_EXTENSION *)param_1);
  _OPENSSL_sk_pop_free();
  return 0;
}


