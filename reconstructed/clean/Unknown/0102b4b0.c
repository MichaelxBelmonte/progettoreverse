// Function: FUN_0102b4b0
// Address: 0102b4b0
// Size: 1113 bytes
// Class: Unknown

uint64_t FUN_0102b4b0(void *param_1,void*param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  void *pvVar7;
  void*arg1;
  size_t sVar8;
  size_t sVar9;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
  pvVar7 = (void *)0xffffffff;
  if (*(int *)(lVar3 + 0x118) != 0) {
    if (*(int *)(lVar3 + 0x130) < 0) {
      if ((param_2 == (void*)0x0) && (pvVar7 = (void *)0x0, arg1 != (void*)0x0))
      goto LAB_0102b895;
      if (*(int *)(lVar3 + 0x11c) == 0) goto LAB_0102b890;
      if (arg1 == (void*)0x0) {
        if (param_2 != (void*)0x0) {
          if ((*(int *)(lVar3 + 0x124) != 0) ||
             (pvVar7 = (void *)0xffffffff, param_1 == (void *)0x0)) {
            _CRYPTO_ccm128_aad();
            pvVar7 = param_1;
          }
          goto LAB_0102b895;
        }
        _EVP_CIPHER_CTX_iv_noconst();
        iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (int64_t)*(int *)(lVar3 + 0x128));
        pvVar7 = (void *)0xffffffff;
        if (iVar2 != 0) goto LAB_0102b895;
        *(void*)(lVar3 + 0x124) = 1;
LAB_0102b7a6:
        pvVar7 = (void *)((uint64_t)param_1 & 0xffffffff);
        goto LAB_0102b895;
      }
      iVar2 = _EVP_CIPHER_CTX_encrypting();
      if ((iVar2 == 0) && (*(int *)(lVar3 + 0x120) == 0)) goto LAB_0102b890;
      if (*(int *)(lVar3 + 0x124) == 0) {
        _EVP_CIPHER_CTX_iv_noconst();
        iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (int64_t)*(int *)(lVar3 + 0x128));
        if (iVar2 != 0) goto LAB_0102b890;
        *(void*)(lVar3 + 0x124) = 1;
      }
      iVar2 = _EVP_CIPHER_CTX_encrypting();
      lVar5 = *(int64_t *)(lVar3 + 0x170);
      if (iVar2 != 0) {
        if (lVar5 == 0) {
          iVar2 = _CRYPTO_ccm128_encrypt(param_1);
        }
        else {
          iVar2 = _CRYPTO_ccm128_encrypt_ccm64(param_1);
        }
        pvVar7 = (void *)0xffffffff;
        if (iVar2 != 0) goto LAB_0102b895;
        *(void*)(lVar3 + 0x120) = 1;
        goto LAB_0102b7a6;
      }
      pvVar7 = param_1;
      if (lVar5 == 0) {
        iVar2 = _CRYPTO_ccm128_decrypt();
        sVar8 = (size_t)lVar5;
        sVar9 = (size_t)arg1;
      }
      else {
        iVar2 = _CRYPTO_ccm128_decrypt_ccm64();
        sVar8 = (size_t)lVar5;
        sVar9 = (size_t)arg1;
      }
      if (iVar2 == 0) {
        sVar9 = *(size_t *)(lVar3 + 300);
        lVar5 = _CRYPTO_ccm128_tag();
        if (lVar5 == 0) goto LAB_0102b84d;
        _EVP_CIPHER_CTX_buf_noconst();
        pvVar6 = (void *)(int64_t)*(int *)(lVar3 + 300);
        iVar2 = _CRYPTO_memcmp(pvVar7,pvVar6,sVar8);
        sVar9 = (size_t)pvVar6;
        if ((iVar2 != 0) || ((int)param_1 == -1)) goto LAB_0102b84d;
      }
      else {
LAB_0102b84d:
        _OPENSSL_cleanse(pvVar7,sVar9);
        param_1 = (void *)0xffffffff;
      }
      *(void*)(lVar3 + 0x11c) = 0;
      *(void*)(lVar3 + 0x124) = 0;
      pvVar7 = param_1;
      goto LAB_0102b895;
    }
    lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
    if ((arg1 != param_2) || (param_1 < (void *)((int64_t)*(int *)(lVar3 + 300) + 8U)))
    goto LAB_0102b895;
    iVar2 = _EVP_CIPHER_CTX_encrypting();
    if (iVar2 != 0) {
      puVar4 = (void*)_EVP_CIPHER_CTX_buf_noconst();
      *param_2 = *puVar4;
    }
    lVar5 = _EVP_CIPHER_CTX_iv_noconst();
    *(void*)(lVar5 + 4) = *param_2;
    param_1 = (void *)((int64_t)param_1 + (-8 - (int64_t)*(int *)(lVar3 + 300)));
    _EVP_CIPHER_CTX_iv_noconst();
    iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (int64_t)*(int *)(lVar3 + 0x128));
    if (iVar2 != 0) goto LAB_0102b895;
    _EVP_CIPHER_CTX_buf_noconst();
    _CRYPTO_ccm128_aad();
    sVar9 = (int)param_2 + 8;
    iVar2 = _EVP_CIPHER_CTX_encrypting();
    lVar5 = *(int64_t *)(lVar3 + 0x170);
    if (iVar2 != 0) {
      if (lVar5 == 0) {
        iVar2 = _CRYPTO_ccm128_encrypt(param_1);
      }
      else {
        iVar2 = _CRYPTO_ccm128_encrypt_ccm64(param_1);
      }
      if (iVar2 == 0) {
        lVar5 = _CRYPTO_ccm128_tag();
        pvVar7 = (void *)0xffffffff;
        if (lVar5 != 0) {
          pvVar7 = (void *)(uint64_t)((int)param_1 + *(int *)(lVar3 + 300) + 8);
        }
      }
      goto LAB_0102b895;
    }
    pvVar6 = param_1;
    if (lVar5 == 0) {
      iVar2 = _CRYPTO_ccm128_decrypt();
      sVar8 = (size_t)lVar5;
    }
    else {
      iVar2 = _CRYPTO_ccm128_decrypt_ccm64();
      sVar8 = (size_t)lVar5;
    }
    if (iVar2 == 0) {
      sVar9 = *(size_t *)(lVar3 + 300);
      lVar5 = _CRYPTO_ccm128_tag();
      if (lVar5 != 0) {
        pvVar7 = (void *)(int64_t)*(int *)(lVar3 + 300);
        iVar2 = _CRYPTO_memcmp(pvVar6,pvVar7,sVar8);
        sVar9 = (size_t)pvVar7;
        pvVar7 = param_1;
        if (iVar2 == 0) goto LAB_0102b895;
      }
    }
    _OPENSSL_cleanse(pvVar6,sVar9);
  }
LAB_0102b890:
  pvVar7 = (void *)0xffffffff;
LAB_0102b895:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return (uint64_t)pvVar7 & 0xffffffff;
}

