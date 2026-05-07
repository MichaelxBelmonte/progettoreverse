// Function: FUN_01074260
// Address: 01074260
// Size: 1057 bytes
// Class: Unknown
// String references:
//   "none"
//   "digest"
//   "pkcs1"
//   "pss"
//   "crypto/rsa/rsa_pmeth.c"
//   "rsa_padding_mode"
//   "sslv23"
//   "oeap"
//   "oaep"
//   "x931"
//   "rsa_pss_saltlen"
//   "max"
//   "auto"
//   "rsa_keygen_bits"
//   "rsa_keygen_pubexp"
//   "rsa_keygen_primes"
//   "rsa_mgf1_md"
//   "rsa_pss_keygen_mgf1_md"
//   "rsa_pss_keygen_md"
//   "rsa_pss_keygen_saltlen"
//   ... +2 more


ulonglong FUN_01074260(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  BIGNUM *a;
  int unaff_EBP;
  undefined8 *unaff_RDI;
  
  if (param_2 == (char *)0x0) {
    _ERR_put_error(0x201b8ef,0x93,0x251,param_4,unaff_EBP);
    return 0;
  }
  pcVar6 = param_2;
  iVar1 = _strcmp(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = _strcmp(param_1,pcVar6);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = _strcmp(param_1,pcVar6);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else {
        iVar1 = _strcmp(param_1,pcVar6);
        if (iVar1 == 0) {
          iVar1 = 3;
        }
        else {
          iVar3 = _strcmp(param_1,pcVar6);
          iVar1 = 4;
          if ((iVar3 != 0) && (iVar3 = _strcmp(param_1,pcVar6), iVar3 != 0)) {
            iVar1 = _strcmp(param_1,pcVar6);
            if (iVar1 == 0) {
              iVar1 = 5;
            }
            else {
              iVar1 = _strcmp(param_1,pcVar6);
              if (iVar1 != 0) {
                _ERR_put_error(0x201b8ef,0x76,0x266,param_4,unaff_EBP);
                return 0xfffffffe;
              }
              iVar1 = 6;
            }
          }
        }
      }
    }
    pcVar6 = "d\x1f\x05";
LAB_010745f2:
    uVar5 = _RSA_pkey_ctx_ctrl(iVar1,pcVar6,0);
    return uVar5;
  }
  iVar1 = _strcmp(param_1,pcVar6);
  if (iVar1 == 0) {
    iVar1 = _strcmp(param_1,pcVar6);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = _strcmp(param_1,pcVar6);
      if (iVar1 == 0) {
        iVar1 = -3;
      }
      else {
        iVar1 = _strcmp(param_1,pcVar6);
        if (iVar1 == 0) {
          iVar1 = -2;
        }
        else {
          iVar1 = _atoi(param_1);
        }
      }
    }
    pcVar6 = "\x1f\x05";
    goto LAB_010745f2;
  }
  iVar1 = _strcmp(param_1,pcVar6);
  if (iVar1 == 0) {
    iVar1 = _atoi(param_1);
    pcVar6 = "\x05";
    goto LAB_010745f2;
  }
  iVar1 = _strcmp(param_1,pcVar6);
  if (iVar1 == 0) {
    iVar1 = _BN_asc2bn();
    if (iVar1 == 0) {
      return 0;
    }
    a = (BIGNUM *)0x0;
    uVar2 = _RSA_pkey_ctx_ctrl(0,0x1004,0);
    if ((int)uVar2 < 1) {
      _BN_free(a);
      return (ulonglong)uVar2;
    }
    return (ulonglong)uVar2;
  }
  iVar1 = _strcmp(param_1,pcVar6);
  if (iVar1 == 0) {
    iVar1 = _atoi(param_1);
    pcVar6 = "lib/libSystem.B.dylib";
    goto LAB_010745f2;
  }
  iVar1 = _strcmp(param_1,pcVar6);
  if (iVar1 == 0) {
LAB_01074622:
    pcVar6 = "";
  }
  else {
    if (*(int *)*unaff_RDI == 0x390) {
      iVar1 = _strcmp(param_1,pcVar6);
      if (iVar1 == 0) goto LAB_01074622;
      iVar1 = _strcmp(param_1,pcVar6);
      if (iVar1 == 0) {
        pcVar6 = (char *)0x1;
        goto LAB_01074627;
      }
      iVar1 = _strcmp(param_1,pcVar6);
      if (iVar1 == 0) {
        iVar1 = _atoi(param_1);
        uVar5 = _EVP_PKEY_CTX_ctrl(0x1002,4,iVar1,0);
        return uVar5;
      }
    }
    iVar1 = _strcmp(param_1,pcVar6);
    if (iVar1 != 0) {
      iVar1 = _strcmp(param_1,pcVar6);
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      lVar4 = _OPENSSL_hexstr2buf();
      if (lVar4 == 0) {
        return 0;
      }
      pcVar6 = "sr/lib/libSystem.B.dylib";
      uVar2 = _EVP_PKEY_CTX_ctrl("sr/lib/libSystem.B.dylib",0x300,in_EAX,lVar4);
      if ((int)uVar2 < 1) {
        _CRYPTO_free(pcVar6);
        return (ulonglong)uVar2;
      }
      return (ulonglong)uVar2;
    }
    pcVar6 = "usr/lib/libSystem.B.dylib";
  }
LAB_01074627:
  uVar5 = _EVP_PKEY_CTX_md(param_2,pcVar6);
  return uVar5;
}


