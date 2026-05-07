// Function: FUN_010bf340
// Address: 010bf340
// Size: 502 bytes
// Class: Unknown
// String references:
//   "crypto/x509v3/v3_alt.c"


undefined8 FUN_010bf340(X509 *param_1,int param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  ASN1_STRING *pAVar3;
  GENERAL_NAME *pGVar4;
  char *a;
  int *unaff_RDI;
  int iVar5;
  undefined8 unaff_R14;
  int line;
  
  if (unaff_RDI == (int *)0x0) {
LAB_010bf4da:
    a = "crypto/x509v3/v3_alt.c";
    _ERR_put_error(0x201dfa8,0x7d,0x15e,param_4,(int)unaff_R14);
    goto LAB_010bf523;
  }
  if (*unaff_RDI == 1) {
    return 1;
  }
  if (*(longlong *)(unaff_RDI + 4) == 0) {
    if (*(longlong *)(unaff_RDI + 6) == 0) goto LAB_010bf4da;
    _X509_REQ_get_subject_name();
    iVar5 = -1;
    if (param_2 == 0) goto LAB_010bf4bf;
LAB_010bf3b0:
    do {
      iVar2 = _X509_NAME_get_index_by_NID((X509_NAME *)param_1,iVar5,(int)param_3);
      if (iVar2 < 0) {
        return 1;
      }
      _X509_NAME_get_entry((X509_NAME *)param_1,iVar5);
      _X509_NAME_ENTRY_get_data((X509_NAME_ENTRY *)param_1);
      pAVar3 = _ASN1_STRING_dup((ASN1_STRING *)param_1);
      _X509_NAME_delete_entry((X509_NAME *)param_1,iVar5);
      _X509_NAME_ENTRY_free((X509_NAME_ENTRY *)param_1);
      iVar5 = (int)unaff_R14;
      if (pAVar3 == (ASN1_STRING *)0x0) goto LAB_010bf500;
      pGVar4 = _GENERAL_NAME_new();
      iVar5 = (int)unaff_R14;
      if (pGVar4 == (GENERAL_NAME *)0x0) goto LAB_010bf500;
      iVar5 = iVar2 + -1;
      (pGVar4->d).otherName = (OTHERNAME *)pAVar3;
      pGVar4->type = 1;
      iVar2 = _OPENSSL_sk_push();
      line = (int)unaff_R14;
    } while (iVar2 != 0);
  }
  else {
    _X509_get_subject_name(param_1);
    iVar5 = -1;
    if (param_2 != 0) goto LAB_010bf3b0;
LAB_010bf4bf:
    do {
      iVar2 = _X509_NAME_get_index_by_NID((X509_NAME *)param_1,iVar5,(int)param_3);
      if (iVar2 < 0) {
        return 1;
      }
      _X509_NAME_get_entry((X509_NAME *)param_1,iVar5);
      _X509_NAME_ENTRY_get_data((X509_NAME_ENTRY *)param_1);
      pAVar3 = _ASN1_STRING_dup((ASN1_STRING *)param_1);
      iVar5 = (int)unaff_R14;
      if (pAVar3 == (ASN1_STRING *)0x0) goto LAB_010bf500;
      pGVar4 = _GENERAL_NAME_new();
      iVar5 = (int)unaff_R14;
      if (pGVar4 == (GENERAL_NAME *)0x0) goto LAB_010bf500;
      (pGVar4->d).otherName = (OTHERNAME *)pAVar3;
      pGVar4->type = 1;
      iVar1 = _OPENSSL_sk_push();
      line = (int)unaff_R14;
      iVar5 = iVar2;
    } while (iVar1 != 0);
  }
  a = "crypto/x509v3/v3_alt.c";
  _ERR_put_error(0x201dfa8,0x41,0x179,param_4,line);
LAB_010bf523:
  _GENERAL_NAME_free((GENERAL_NAME *)a);
  _ASN1_IA5STRING_free((ASN1_IA5STRING *)a);
  return 0;
LAB_010bf500:
  a = "crypto/x509v3/v3_alt.c";
  _ERR_put_error(0x201dfa8,0x41,0x172,param_4,iVar5);
  goto LAB_010bf523;
}


