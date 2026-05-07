// Function: FUN_010bdd90
// Address: 010bdd90
// Size: 845 bytes
// Class: Unknown
// String references:
//   "issuer"
//   "crypto/x509v3/v3_akey.c"
//   "always"
//   "keyid"
//   "name="


AUTHORITY_KEYID * FUN_010bdd90(X509 *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  X509_EXTENSION *pXVar5;
  ASN1_OCTET_STRING *pAVar6;
  AUTHORITY_KEYID *pAVar7;
  X509_NAME *pXVar8;
  ASN1_INTEGER *pAVar9;
  GENERAL_NAMES *pGVar10;
  GENERAL_NAME *pGVar11;
  char *a;
  int iVar12;
  int *unaff_RSI;
  int lastpos;
  char cVar13;
  undefined8 unaff_R12;
  
  iVar2 = _OPENSSL_sk_num();
  iVar3 = (int)unaff_R12;
  lastpos = (int)param_3;
  iVar12 = 0;
  if (iVar2 < 1) {
    cVar13 = '\0';
    cVar1 = '\0';
  }
  else {
    cVar1 = '\0';
    cVar13 = '\0';
    do {
      lVar4 = _OPENSSL_sk_value();
      iVar3 = _strcmp((char *)param_1,param_2);
      if (iVar3 == 0) {
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          cVar1 = '\x01';
        }
        else {
          iVar3 = _strcmp((char *)param_1,param_2);
          cVar1 = (iVar3 == 0) + '\x01';
        }
      }
      else {
        iVar3 = _strcmp((char *)param_1,param_2);
        if (iVar3 != 0) {
          iVar3 = 0x201de5d;
          _ERR_put_error(0x201de5d,0x78,0x5e,param_4,(int)unaff_R12);
          _ERR_add_error_data(iVar3,*(undefined8 *)(lVar4 + 8));
          return (AUTHORITY_KEYID *)0x0;
        }
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          cVar13 = '\x01';
        }
        else {
          iVar3 = _strcmp((char *)param_1,param_2);
          cVar13 = (iVar3 == 0) + '\x01';
        }
      }
      iVar12 = iVar12 + 1;
      iVar2 = _OPENSSL_sk_num();
      iVar3 = (int)unaff_R12;
      lastpos = (int)param_3;
    } while (iVar12 < iVar2);
  }
  if (unaff_RSI != (int *)0x0) {
    if (*(longlong *)(unaff_RSI + 2) != 0) {
      if (cVar1 == '\0') {
        pAVar6 = (ASN1_OCTET_STRING *)0x0;
      }
      else {
        iVar12 = -1;
        iVar2 = _X509_get_ext_by_NID(param_1,-1,lastpos);
        if ((iVar2 < 0) || (pXVar5 = _X509_get_ext(param_1,iVar12), pXVar5 == (X509_EXTENSION *)0x0)
           ) {
          pAVar6 = (ASN1_OCTET_STRING *)0x0;
        }
        else {
          pAVar6 = _X509V3_EXT_d2i((X509_EXTENSION *)param_1);
        }
        if ((cVar1 == '\x02') && (pAVar6 == (ASN1_OCTET_STRING *)0x0)) {
          _ERR_put_error(0x201de5d,0x7b,0x74,param_4,iVar3);
          return (AUTHORITY_KEYID *)0x0;
        }
      }
      a = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),pAVar6 == (ASN1_OCTET_STRING *)0x0);
      if ((cVar13 == '\x02') || (cVar13 != '\0' && pAVar6 == (ASN1_OCTET_STRING *)0x0)) {
        _X509_get_issuer_name((X509 *)a);
        pXVar8 = _X509_NAME_dup((X509_NAME *)a);
        _X509_get_serialNumber((X509 *)a);
        pAVar9 = _ASN1_INTEGER_dup((ASN1_INTEGER *)a);
        if ((pXVar8 == (X509_NAME *)0x0) || (pAVar9 == (ASN1_INTEGER *)0x0)) {
          a = "crypto/x509v3/v3_akey.c";
          _ERR_put_error(0x201de5d,0x7a,0x7e,param_4,iVar3);
        }
        else {
          pAVar7 = _AUTHORITY_KEYID_new();
          if (pAVar7 != (AUTHORITY_KEYID *)0x0) {
            pGVar10 = (GENERAL_NAMES *)_OPENSSL_sk_new_null();
            if (((pGVar10 != (GENERAL_NAMES *)0x0) &&
                (pGVar11 = _GENERAL_NAME_new(), pGVar11 != (GENERAL_NAME *)0x0)) &&
               (iVar2 = _OPENSSL_sk_push(), iVar2 != 0)) {
              pGVar11->type = 4;
              (pGVar11->d).directoryName = pXVar8;
              goto LAB_010bdfbe;
            }
            a = "crypto/x509v3/v3_akey.c";
            _ERR_put_error(0x201de5d,0x41,0x8a,param_4,iVar3);
          }
        }
      }
      else {
        pAVar7 = _AUTHORITY_KEYID_new();
        pAVar9 = (ASN1_INTEGER *)0x0;
        if (pAVar7 != (AUTHORITY_KEYID *)0x0) {
          pGVar10 = (GENERAL_NAMES *)0x0;
LAB_010bdfbe:
          pAVar7->issuer = pGVar10;
          pAVar7->serial = pAVar9;
          pAVar7->keyid = pAVar6;
          return pAVar7;
        }
      }
      _OPENSSL_sk_free();
      _GENERAL_NAME_free((GENERAL_NAME *)a);
      _X509_NAME_free((X509_NAME *)a);
      _ASN1_INTEGER_free((ASN1_INTEGER *)a);
      _ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)a);
      return (AUTHORITY_KEYID *)0x0;
    }
    if (*unaff_RSI == 1) {
      pAVar7 = _AUTHORITY_KEYID_new();
      return pAVar7;
    }
  }
  _ERR_put_error(0x201de5d,0x79,0x68,param_4,iVar3);
  return (AUTHORITY_KEYID *)0x0;
}


