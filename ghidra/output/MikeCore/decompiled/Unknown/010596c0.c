// Function: FUN_010596c0
// Address: 010596c0
// Size: 573 bytes
// Class: Unknown
// String references:
//   "crypto/pkcs12/p12_kiss.c"


undefined8 FUN_010596c0(undefined8 param_1,ASN1_STRING *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  PKCS8_PRIV_KEY_INFO *pPVar8;
  EVP_PKEY *pEVar9;
  uint *x;
  ASN1_STRING *in;
  uint *puVar10;
  
  in = param_2;
  iVar2 = _OPENSSL_sk_num();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      _OPENSSL_sk_value();
      lVar6 = _PKCS12_SAFEBAG_get0_attr();
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 8);
      }
      lVar7 = _PKCS12_SAFEBAG_get0_attr();
      if (lVar7 == 0) {
        puVar10 = (uint *)0x0;
      }
      else {
        puVar10 = *(uint **)(lVar7 + 8);
      }
      uVar4 = _PKCS12_SAFEBAG_get_nid();
      x = &switchD_010597b3::switchdataD_01059924;
      switch(uVar4) {
      case 0x96:
        if ((param_2 != (ASN1_STRING *)0x0) &&
           (lVar1._0_4_ = param_2->length, lVar1._4_4_ = param_2->type, lVar1 == 0)) {
          _PKCS12_SAFEBAG_get0_p8inf();
          pEVar9 = _EVP_PKCS82PKEY((PKCS8_PRIV_KEY_INFO *)x);
          *(EVP_PKEY **)param_2 = pEVar9;
          if (pEVar9 == (EVP_PKEY *)0x0) {
            return 0;
          }
        }
        break;
      case 0x97:
        if ((param_2 != (ASN1_STRING *)0x0) &&
           (lVar6._0_4_ = param_2->length, lVar6._4_4_ = param_2->type, lVar6 == 0)) {
          in = (ASN1_STRING *)0xffffffff;
          pPVar8 = _PKCS12_decrypt_skey
                             ((PKCS12_SAFEBAG *)&switchD_010597b3::switchdataD_01059924,
                              (char *)0xffffffff,param_3);
          if (pPVar8 == (PKCS8_PRIV_KEY_INFO *)0x0) {
            return 0;
          }
          pEVar9 = _EVP_PKCS82PKEY((PKCS8_PRIV_KEY_INFO *)x);
          *(EVP_PKEY **)param_2 = pEVar9;
          _PKCS8_PRIV_KEY_INFO_free((PKCS8_PRIV_KEY_INFO *)x);
          lVar7._0_4_ = param_2->length;
          lVar7._4_4_ = param_2->type;
          if (lVar7 == 0) {
            return 0;
          }
        }
        break;
      case 0x98:
        iVar3 = _PKCS12_SAFEBAG_get_bag_nid();
        if (iVar3 == 0x9e) {
          lVar7 = _PKCS12_SAFEBAG_get1_cert();
          if (lVar7 == 0) {
            return 0;
          }
          if (puVar10 != (uint *)0x0) {
            in = (ASN1_STRING *)(ulonglong)*puVar10;
            iVar3 = _X509_keyid_set1((X509 *)x,(uchar *)in,param_3);
            if (iVar3 == 0) goto LAB_01059918;
          }
          if ((lVar6 != 0) && (uVar5 = _ASN1_STRING_to_UTF8((uchar **)x,in), -1 < (int)uVar5)) {
            iVar3 = _X509_alias_set1((X509 *)x,(uchar *)(ulonglong)uVar5,param_3);
            in = (ASN1_STRING *)((longlong)&section_000000b8.size + 3);
            _CRYPTO_free(x);
            if (iVar3 == 0) {
LAB_01059918:
              _X509_free((X509 *)x);
              return 0;
            }
          }
          iVar3 = _OPENSSL_sk_push();
          if (iVar3 == 0) {
            _X509_free((X509 *)x);
            return 0;
          }
        }
        break;
      case 0x9b:
        _PKCS12_SAFEBAG_get0_safes();
        in = param_2;
        iVar3 = FUN_010596c0(param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = _OPENSSL_sk_num();
    } while (iVar2 < iVar3);
  }
  return 1;
}


