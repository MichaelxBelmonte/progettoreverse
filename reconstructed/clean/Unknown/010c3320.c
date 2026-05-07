// Function: FUN_010c3320
// Address: 010c3320
// Size: 571 bytes
// Class: Unknown
// String references:
//   "\n"
//   ", "
//   "crypto/x509v3/v3_cpols.c"
//   "%*sCPS: %s\n"
//   "%*sUser Notice:\n"
//   "%*sUnknown Qualifier: "
//   "%*sOrganization: %s\n"
//   "%*sNumber%s: "
//   "(null)"
//   "%*sExplicit Text: %s\n"

void FUN_010c3320(char *param_1,char *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  ASN1_OBJECT *a;
  ASN1_INTEGER *aint;
  char *pcVar8;
  uint64_t uVar9;
  
  iVar3 = _OPENSSL_sk_num();
  if (0 < iVar3) {
    uVar4 = (int)param_2 + 2;
    iVar3 = 0;
    do {
      lVar7 = _OPENSSL_sk_value();
      iVar5 = _OBJ_obj2nid((ASN1_OBJECT *)param_1);
      if (iVar5 == 0xa5) {
        param_1 = "";
        _BIO_printf((BIO *)"",param_2);
        plVar1 = *(int64_t **)(lVar7 + 8);
        plVar2 = (int64_t *)*plVar1;
        if (plVar2 != (int64_t *)0x0) {
          _BIO_printf((BIO *)"",(char *)(uint64_t)uVar4,*(void*)(*plVar2 + 8));
          iVar5 = _OPENSSL_sk_num();
          pcVar8 = "";
          if (1 < iVar5) {
            pcVar8 = "s";
          }
          aint = (ASN1_INTEGER *)(uint64_t)uVar4;
          param_1 = "";
          _BIO_printf((BIO *)"",(char *)aint,pcVar8);
          iVar5 = _OPENSSL_sk_num();
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              lVar7 = _OPENSSL_sk_value();
              if (iVar5 != 0) {
                _BIO_puts((BIO *)param_1,(char *)aint);
              }
              if (lVar7 == 0) {
                _BIO_puts((BIO *)param_1,(char *)aint);
              }
              else {
                pcVar8 = _i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)param_1,aint);
                if (pcVar8 == (char *)0x0) goto LAB_010c3395;
                _BIO_puts((BIO *)param_1,(char *)aint);
                aint = (ASN1_INTEGER *)((int64_t)&section_000001a8.size + 3);
                _CRYPTO_free(param_1);
              }
              iVar5 = iVar5 + 1;
              iVar6 = _OPENSSL_sk_num();
            } while (iVar5 < iVar6);
          }
          _BIO_puts((BIO *)param_1,(char *)aint);
        }
        lVar7 = plVar1[1];
        if (lVar7 != 0) {
          uVar9 = *(void*)(lVar7 + 8);
          pcVar8 = (char *)(uint64_t)uVar4;
          goto LAB_010c3541;
        }
      }
      else if (iVar5 == 0xa4) {
        uVar9 = *(void*)(*(int64_t *)(lVar7 + 8) + 8);
        pcVar8 = param_2;
LAB_010c3541:
        param_1 = "";
        _BIO_printf((BIO *)"",pcVar8,uVar9);
      }
      else {
        a = (ASN1_OBJECT *)(uint64_t)uVar4;
        param_1 = "";
        _BIO_printf((BIO *)"",(char *)a);
        _i2a_ASN1_OBJECT((BIO *)param_1,a);
        _BIO_puts((BIO *)param_1,(char *)a);
      }
LAB_010c3395:
      iVar3 = iVar3 + 1;
      iVar5 = _OPENSSL_sk_num();
    } while (iVar3 < iVar5);
  }
  return;
}

