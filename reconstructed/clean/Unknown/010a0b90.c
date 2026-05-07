// Function: FUN_010a0b90
// Address: 010a0b90
// Size: 883 bytes
// Class: Unknown
// String references:
//   "crypto/store/loader_file.c"
//   "PKCS12 import password"

uint64_t FUN_010a0b90(PKCS12 *param_1,uint64_t param_2,int64_t *param_3,X509 **param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint64_t uVar4;
  PKCS12 *pPVar5;
  int64_t lVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  X509 **cert;
  int local_res10;
  char local_460 [8];
  X509_CINF *ca;
  EVP_PKEY *local_450;
  ASN1_BIT_STRING *local_448;
  int64_t local_440;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*param_3 == 0) {
    if (this_ptr != 0) {
      uVar4 = 0;
      goto LAB_010a0bdf;
    }
    plVar9 = param_3;
    cert = param_4;
    pPVar5 = _d2i_PKCS12((PKCS12 **)param_1,(uchar **)param_1,(long)param_3);
    iVar2 = (int)plVar9;
    if (pPVar5 == (PKCS12 *)0x0) {
      uVar4 = 0;
      _PKCS12_free(param_1);
      goto LAB_010a0bdf;
    }
    local_460[0] = '\0';
    local_460[1] = '\0';
    local_460[2] = '\0';
    local_460[3] = '\0';
    local_460[4] = '\0';
    local_460[5] = '\0';
    local_460[6] = '\0';
    local_460[7] = '\0';
    ca = (X509_CINF *)0x0;
    local_450 = (EVP_PKEY *)0x0;
    *(void*)param_4 = 1;
    iVar1 = _PKCS12_verify_mac(param_1,(char *)0x0,iVar2);
    if ((iVar1 == 0) && (iVar2 = _PKCS12_verify_mac(param_1,(char *)0x0,iVar2), iVar2 == 0)) {
      pcVar8 = "PKCS12 import password";
      lVar6 = FUN_010a0a10("PKCS12 import password",0x400);
      if (lVar6 == 0) {
        iVar2 = 0x72;
        iVar1 = 0xe8;
      }
      else {
        sVar3 = _strlen(pcVar8);
        iVar2 = _PKCS12_verify_mac((PKCS12 *)pcVar8,(char *)(uint64_t)sVar3,local_res10);
        if (iVar2 != 0) goto LAB_010a0c7c;
        iVar2 = 0x71;
        iVar1 = 0xed;
      }
      pcVar8 = "crypto/store/loader_file.c";
      _ERR_put_error(0x201bb0c,iVar2,iVar1,(char *)cert,(int)ca);
      lVar6 = 0;
      local_448 = (ASN1_BIT_STRING *)0x0;
    }
    else {
LAB_010a0c7c:
      pcVar8 = &stack0xfffffffffffffba8;
      iVar2 = _PKCS12_parse((PKCS12 *)pcVar8,local_460,&local_450,cert,(STACK **)ca);
      if (iVar2 == 0) {
        local_448 = (ASN1_BIT_STRING *)0x0;
        lVar6 = 0;
      }
      else {
        lVar6 = _OPENSSL_sk_new_null();
        local_448 = (ASN1_BIT_STRING *)0x0;
        if ((((lVar6 == 0) || (lVar7 = _OSSL_STORE_INFO_new_PKEY(), lVar7 == 0)) ||
            (iVar2 = _OPENSSL_sk_push(), iVar2 == 0)) ||
           (local_440 = _OSSL_STORE_INFO_new_CERT(), local_440 == 0)) {
          local_440 = 0;
LAB_010a0dae:
          _OSSL_STORE_INFO_free();
          _OSSL_STORE_INFO_free();
          _OSSL_STORE_INFO_free();
          _OPENSSL_sk_pop_free();
          _EVP_PKEY_free((EVP_PKEY *)pcVar8);
          _X509_free((X509 *)pcVar8);
          _OPENSSL_sk_pop_free();
          lVar6 = 0;
        }
        else {
          iVar2 = _OPENSSL_sk_push();
          if (iVar2 == 0) goto LAB_010a0dae;
          iVar2 = _OPENSSL_sk_num();
          if (iVar2 < 1) {
            local_448 = (ASN1_BIT_STRING *)((int64_t)&MACH_HEADER.magic + 1);
          }
          else {
            do {
              _OPENSSL_sk_value();
              lVar7 = _OSSL_STORE_INFO_new_CERT();
              if ((lVar7 == 0) || (iVar2 = _OPENSSL_sk_push(), iVar2 == 0)) {
                local_440 = 0;
                goto LAB_010a0dae;
              }
              _OPENSSL_sk_shift();
              iVar2 = _OPENSSL_sk_num();
            } while (0 < iVar2);
            local_448 = (ASN1_BIT_STRING *)((int64_t)&MACH_HEADER.magic + 1);
          }
        }
        *param_3 = lVar6;
      }
    }
    _PKCS12_free((PKCS12 *)pcVar8);
    uVar4 = 0;
    if (((int)local_448 == 0) || (lVar6 == 0)) goto LAB_010a0bdf;
  }
  *(void*)param_4 = 1;
  uVar4 = _OPENSSL_sk_shift();
LAB_010a0bdf:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar4;
}

