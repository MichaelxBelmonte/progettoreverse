// Function: FUN_01054680
// Address: 01054680
// Size: 1431 bytes
// Class: Unknown
// String references:
//   "CERTIFICATE REQUEST"
//   "NEW CERTIFICATE REQUEST"
//   "PKCS7"
//   "CERTIFICATE"
//   "DH PARAMETERS"
//   "X9.42 DH PARAMETERS"
//   "crypto/pem/pem_lib.c"
//   "Expecting: "
//   "ANY PRIVATE KEY"
//   "ENCRYPTED PRIVATE KEY"
//   "PRIVATE KEY"
//   "PARAMETERS"
//   "X509 CERTIFICATE"
//   "TRUSTED CERTIFICATE"
//   "PKCS #7 SIGNED DATA"
//   "CMS"

uint64_t FUN_01054680(ENGINE *param_1,void*param_2,uint64_t param_3,ENGINE *param_4)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  int64_t lVar7;
  ENGINE *e;
  char *pcVar8;
  ENGINE *arg1;
  void*this_ptr;
  uint64_t uVar9;
  bool bVar10;
  uint64_t local_res8;
  uint local_res10;
  char local_68 [8];
  uint64_t local_60;
  uint64_t local_58 [4];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  local_58[0] = 0;
  local_60 = 0;
  e = param_1;
  while( true ) {
    if ((local_res10 & 1) == 0) {
      _CRYPTO_free(e);
      _CRYPTO_free(e);
      _CRYPTO_free(e);
    }
    else {
      _CRYPTO_secure_clear_free(0xdd,"crypto/pem/pem_lib.c");
      _CRYPTO_secure_clear_free(0xdd,"crypto/pem/pem_lib.c");
      _CRYPTO_secure_clear_free(0xdd,"crypto/pem/pem_lib.c");
    }
    pcVar8 = local_68;
    e = (ENGINE *)local_58;
    iVar2 = _PEM_read_bio_ex(e,pcVar8,&local_60,local_res10);
    if (iVar2 == 0) {
      uVar6 = _ERR_peek_error();
      uVar9 = 0;
      if ((uVar6 & 0xfff) != 0x6c) goto LAB_01054bee;
      _ERR_add_error_data((int)e,param_1);
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        return 0;
      }
      goto LAB_01054baa;
    }
    iVar2 = _strcmp((char *)e,pcVar8);
    if (iVar2 == 0) break;
    iVar2 = _strcmp((char *)e,pcVar8);
    if (iVar2 == 0) {
      iVar2 = _strcmp((char *)e,pcVar8);
      if ((iVar2 == 0) || (iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0)) break;
      sVar5 = _strlen((char *)e);
      bVar10 = false;
      if (0xc < (int)sVar5) {
        iVar2 = _strcmp((char *)e,pcVar8);
        if (((iVar2 == 0) && (*(char *)((int64_t)(int)sVar5 + -0xc) == ' ')) &&
           (0 < (int)(sVar5 - 0xc))) {
          bVar10 = false;
          lVar7 = _EVP_PKEY_asn1_find_str();
          if ((lVar7 != 0) && (*(int64_t *)(lVar7 + 0xb8) != 0)) break;
        }
      }
    }
    else {
      iVar2 = _strcmp((char *)e,pcVar8);
      if (iVar2 == 0) {
        sVar5 = _strlen((char *)e);
        bVar10 = false;
        if (0xb < (int)sVar5) {
          iVar2 = _strcmp((char *)e,pcVar8);
          if (((iVar2 == 0) && (*(char *)((int64_t)(int)sVar5 + -0xb) == ' ')) &&
             ((0 < (int)(sVar5 - 0xb) && (lVar7 = _EVP_PKEY_asn1_find_str(), lVar7 != 0)))) {
            bVar10 = *(int64_t *)(lVar7 + 0x70) != 0;
            _ENGINE_finish(e);
          }
        }
      }
      else {
        iVar2 = _strcmp((char *)e,pcVar8);
        if ((((iVar2 == 0) && (iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0)) ||
            (((iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0 &&
              (iVar3 = _strcmp((char *)e,pcVar8), iVar3 == 0)) ||
             ((iVar3 = _strcmp((char *)e,pcVar8), iVar3 == 0 &&
              (iVar3 = _strcmp((char *)e,pcVar8), iVar3 == 0)))))) ||
           ((((iVar3 = _strcmp((char *)e,pcVar8), iVar3 == 0 &&
              (iVar4 = _strcmp((char *)e,pcVar8), iVar4 == 0)) ||
             ((((iVar2 == 0 && (iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0)) ||
               ((iVar3 == 0 && (iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0)))) ||
              ((iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0 &&
               (iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0)))))) ||
            ((iVar3 == 0 && (iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0)))))) break;
        iVar2 = _strcmp((char *)e,pcVar8);
        bVar10 = false;
        if ((iVar2 == 0) && (iVar2 = _strcmp((char *)e,pcVar8), iVar2 == 0)) break;
      }
    }
    if (bVar10) break;
  }
  iVar2 = _PEM_get_EVP_CIPHER_INFO();
  uVar1 = local_58[0];
  bVar10 = true;
  uVar9 = 0;
  if ((iVar2 != 0) &&
     (iVar2 = _PEM_do_header(param_4,&local_60,local_res8), e = param_4, iVar2 != 0)) {
    *this_ptr = uVar1;
    *(void*)arg1 = local_60;
    if (param_2 != (void*)0x0) {
      *param_2 = 0;
      if ((local_res10 & 1) == 0) {
        _CRYPTO_free(arg1);
      }
      else {
        _CRYPTO_secure_clear_free(0xdd,"crypto/pem/pem_lib.c");
      }
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        return 1;
      }
      goto LAB_01054baa;
    }
    uVar9 = 1;
    bVar10 = false;
    e = arg1;
  }
  if ((local_res10 & 1) == 0) {
    _CRYPTO_free(e);
    _CRYPTO_free(e);
    if (bVar10) {
      _CRYPTO_free(e);
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        return uVar9;
      }
      goto LAB_01054baa;
    }
  }
  else {
    _CRYPTO_secure_clear_free(0xdd,"crypto/pem/pem_lib.c");
    _CRYPTO_secure_clear_free(0xdd,"crypto/pem/pem_lib.c");
    if (bVar10) {
      _CRYPTO_secure_clear_free(0xdd,"crypto/pem/pem_lib.c");
    }
  }
LAB_01054bee:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar9;
  }
LAB_01054baa:
                      ___stack_chk_fail();
}

