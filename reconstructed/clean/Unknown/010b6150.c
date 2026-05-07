// Function: FUN_010b6150
// Address: 010b6150
// Size: 537 bytes
// Class: Unknown

char FUN_010b6150(X509_NAME *param_1,X509_NAME *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int *piVar6;
  X509_NAME *a;
  int64_t *arg1;
  int64_t this_ptr;
  
  if (*(int64_t *)(this_ptr + 0x30) != 0) {
    a = param_1;
    iVar1 = _OPENSSL_sk_is_sorted();
    if (iVar1 == 0) {
      _CRYPTO_THREAD_write_lock();
      _OPENSSL_sk_sort();
      _CRYPTO_THREAD_unlock();
    }
    iVar1 = _OPENSSL_sk_find();
    if ((-1 < iVar1) && (iVar2 = _OPENSSL_sk_num(), iVar1 < iVar2)) {
      if (param_1 == (X509_NAME *)0x0) {
        do {
          lVar5 = _OPENSSL_sk_value();
          iVar3 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a,(ASN1_INTEGER *)param_2);
          if (iVar3 != 0) {
            return '\0';
          }
          if (*(int64_t *)(lVar5 + 0x28) == 0) goto LAB_010b6346;
          _X509_CRL_get_issuer();
          iVar3 = _OPENSSL_sk_num();
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              piVar6 = (int *)_OPENSSL_sk_value();
              if ((*piVar6 == 4) && (iVar4 = _X509_NAME_cmp(a,param_2), iVar4 == 0))
              goto LAB_010b6346;
              iVar3 = iVar3 + 1;
              iVar4 = _OPENSSL_sk_num();
            } while (iVar3 < iVar4);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 != iVar2);
      }
      else {
        do {
          lVar5 = _OPENSSL_sk_value();
          iVar3 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a,(ASN1_INTEGER *)param_2);
          if (iVar3 != 0) {
            return '\0';
          }
          if (*(int64_t *)(lVar5 + 0x28) == 0) {
            _X509_CRL_get_issuer();
            iVar3 = _X509_NAME_cmp(a,param_2);
            if (iVar3 == 0) {
LAB_010b6346:
              if (arg1 != (int64_t *)0x0) {
                *arg1 = lVar5;
              }
              return (*(int *)(lVar5 + 0x30) == 8) + '\x01';
            }
          }
          else {
            iVar3 = _OPENSSL_sk_num();
            if (0 < iVar3) {
              iVar3 = 0;
              do {
                piVar6 = (int *)_OPENSSL_sk_value();
                if ((*piVar6 == 4) && (iVar4 = _X509_NAME_cmp(a,param_2), iVar4 == 0))
                goto LAB_010b6346;
                iVar3 = iVar3 + 1;
                iVar4 = _OPENSSL_sk_num();
              } while (iVar3 < iVar4);
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 != iVar2);
      }
    }
  }
  return '\0';
}

