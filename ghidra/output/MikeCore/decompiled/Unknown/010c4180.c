// Function: FUN_010c4180
// Address: 010c4180
// Size: 508 bytes
// Class: Unknown
// String references:
//   "crypto/x509v3/v3_crld.c"
//   "fullname"
//   "relativename"


undefined8 FUN_010c4180(X509V3_CTX *param_1,undefined8 param_2,ulong param_3,char *param_4)

{
  longlong lVar1;
  int iVar2;
  X509_NAME *pXVar3;
  STACK *pSVar4;
  longlong lVar5;
  ASN1_VALUE *pAVar6;
  char *section;
  longlong *unaff_RDI;
  int unaff_R14D;
  
  section = (char *)((longlong)&MACH_HEADER.cpusubtype + 1);
  iVar2 = _strncmp((char *)param_1,(char *)((longlong)&MACH_HEADER.cpusubtype + 1),param_3);
  if (iVar2 == 0) {
    lVar5 = FUN_010c4590();
    pSVar4 = (STACK *)0x0;
    if (lVar5 == 0) goto LAB_010c42d4;
    lVar1 = *unaff_RDI;
  }
  else {
    iVar2 = _strcmp((char *)param_1,section);
    if (iVar2 != 0) {
      return 0;
    }
    pXVar3 = _X509_NAME_new();
    if (pXVar3 == (X509_NAME *)0x0) {
      return 0xffffffff;
    }
    pSVar4 = _X509V3_get_section(param_1,section);
    if (pSVar4 == (STACK *)0x0) {
      _ERR_put_error(0x201e4b3,0x96,0x56,param_4,unaff_R14D);
      return 0xffffffff;
    }
    pSVar4 = (STACK *)((longlong)&dylib_command_00000ff0.dylib.current_version + 1);
    iVar2 = _X509V3_NAME_from_section
                      ((X509_NAME *)param_1,
                       (STACK *)((longlong)&dylib_command_00000ff0.dylib.current_version + 1),
                       param_3);
    _X509V3_section_free(param_1,pSVar4);
    pSVar4 = pXVar3->entries;
    pXVar3->entries = (STACK *)0x0;
    _X509_NAME_free((X509_NAME *)param_1);
    if ((iVar2 == 0) || (iVar2 = _OPENSSL_sk_num(), iVar2 < 1)) goto LAB_010c42d4;
    _OPENSSL_sk_num();
    lVar5 = _OPENSSL_sk_value();
    if (*(int *)(lVar5 + 0x10) != 0) {
      _ERR_put_error(0x201e4b3,0xa1,0x66,param_4,unaff_R14D);
      goto LAB_010c42d4;
    }
    lVar5 = 0;
    lVar1 = *unaff_RDI;
  }
  if (lVar1 == 0) {
    pAVar6 = _ASN1_item_new((ASN1_ITEM *)param_1);
    *unaff_RDI = (longlong)pAVar6;
    if (pAVar6 != (ASN1_VALUE *)0x0) {
      if (lVar5 == 0) {
        *(undefined4 *)pAVar6 = 1;
        *(STACK **)(pAVar6 + 8) = pSVar4;
        return 1;
      }
      *(undefined4 *)pAVar6 = 0;
      *(longlong *)(pAVar6 + 8) = lVar5;
      return 1;
    }
  }
  else {
    _ERR_put_error(0x201e4b3,0xa0,0x6e,param_4,unaff_R14D);
  }
LAB_010c42d4:
  _OPENSSL_sk_pop_free();
  _OPENSSL_sk_pop_free();
  return 0xffffffff;
}


