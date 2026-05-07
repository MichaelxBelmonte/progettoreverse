// Function: FUN_0106c3a0
// Address: 0106c3a0
// Size: 1026 bytes
// Class: Unknown
// String references:
//   "RSA"
//   "RSA-PSS"
//   "%s "
//   "Private-Key: (%d bit, %d primes)\n"
//   "modulus:"
//   "publicExponent:"
//   "Public-Key: (%d bit)\n"
//   "Modulus:"
//   "Exponent:"
//   "privateExponent:"
//   "prime1:"
//   "prime2:"
//   "exponent1:"
//   "exponent2:"
//   "coefficient:"
//   "prime%d:"
//   "exponent%d:"
//   "coefficient%d:"

uint32_t FUN_0106c3a0(BIO *param_1,uint param_2,int param_3)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void*puVar6;
  BIO *pBVar7;
  char *format;
  uint32_t uVar8;
  int64_t arg1;
  uint uVar9;
  uint64_t uVar10;
  
  iVar5 = (int)param_1;
  lVar1 = *(int64_t *)(arg1 + 0x28);
  uVar2 = 0;
  if (*(int64_t *)(lVar1 + 0x18) != 0) {
    uVar2 = _BN_num_bits((BIGNUM *)param_1);
  }
  iVar3 = _OPENSSL_sk_num();
  iVar4 = _BIO_indent(param_1,0x80,param_3);
  uVar8 = 0;
  if (iVar4 != 0) {
    format = "RSA";
    if (**(int **)(arg1 + 0x10) == 0x390) {
      format = "RSA-PSS";
    }
    uVar8 = 0;
    iVar4 = _BIO_printf(param_1,format);
    if (0 < iVar4) {
      if ((iVar5 == 0) || (*(int64_t *)(lVar1 + 0x28) == 0)) {
        iVar3 = _BIO_printf(param_1,(char *)(uint64_t)uVar2);
      }
      else {
        pBVar7 = (BIO *)((int64_t)&MACH_HEADER.magic + 2);
        if (0 < iVar3) {
          pBVar7 = (BIO *)(uint64_t)(iVar3 + 2);
        }
        iVar3 = _BIO_printf(pBVar7,(char *)(uint64_t)uVar2);
      }
      uVar8 = 0;
      if (0 < iVar3) {
        uVar8 = 0;
        iVar3 = _ASN1_bn_print(0,*(void*)(lVar1 + 0x18),param_2);
        if (iVar3 != 0) {
          uVar8 = 0;
          iVar3 = _ASN1_bn_print(0,*(void*)(lVar1 + 0x20),param_2);
          if (iVar3 != 0) {
            if (iVar5 != 0) {
              iVar5 = _ASN1_bn_print(0,*(void*)(lVar1 + 0x28),param_2);
              if (iVar5 == 0) {
                return 0;
              }
              iVar5 = _ASN1_bn_print(0,*(void*)(lVar1 + 0x30),param_2);
              if (iVar5 == 0) {
                return 0;
              }
              iVar5 = _ASN1_bn_print(0,*(void*)(lVar1 + 0x38),param_2);
              if (iVar5 == 0) {
                return 0;
              }
              iVar5 = _ASN1_bn_print(0,*(void*)(lVar1 + 0x40),param_2);
              if (iVar5 == 0) {
                return 0;
              }
              iVar5 = _ASN1_bn_print(0,*(void*)(lVar1 + 0x48),param_2);
              if (iVar5 == 0) {
                return 0;
              }
              pBVar7 = (BIO *)0x0;
              uVar10 = (uint64_t)param_2;
              iVar5 = _ASN1_bn_print(0,*(void*)(lVar1 + 0x50));
              if (iVar5 == 0) {
                return 0;
              }
              iVar5 = _OPENSSL_sk_num();
              if (0 < iVar5) {
                iVar5 = 0;
                do {
                  iVar3 = (int)uVar10;
                  puVar6 = (void*)_OPENSSL_sk_value();
                  iVar3 = _BIO_indent(pBVar7,0x80,iVar3);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  uVar2 = iVar5 + 3;
                  iVar3 = _BIO_printf(pBVar7,(char *)(uint64_t)uVar2);
                  if (iVar3 < 1) {
                    return 0;
                  }
                  pBVar7 = (BIO *)0x0;
                  uVar9 = param_2;
                  iVar3 = _ASN1_bn_print(0,*puVar6);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  iVar3 = _BIO_indent(pBVar7,0x80,uVar9);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  iVar3 = _BIO_printf(pBVar7,(char *)(uint64_t)uVar2);
                  if (iVar3 < 1) {
                    return 0;
                  }
                  pBVar7 = (BIO *)0x0;
                  uVar9 = param_2;
                  iVar3 = _ASN1_bn_print(0,puVar6[1]);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  iVar3 = _BIO_indent(pBVar7,0x80,uVar9);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  iVar3 = _BIO_printf(pBVar7,(char *)(uint64_t)uVar2);
                  if (iVar3 < 1) {
                    return 0;
                  }
                  pBVar7 = (BIO *)0x0;
                  uVar10 = (uint64_t)param_2;
                  iVar3 = _ASN1_bn_print(0,puVar6[2]);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  iVar3 = _OPENSSL_sk_num();
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar3);
              }
            }
            if ((**(int **)(arg1 + 0x10) == 0x390) &&
               (iVar5 = FUN_0106c7b0(param_2,*(void*)(lVar1 + 0x60)), iVar5 == 0)) {
              return 0;
            }
            uVar8 = 1;
          }
        }
      }
    }
  }
  return uVar8;
}

