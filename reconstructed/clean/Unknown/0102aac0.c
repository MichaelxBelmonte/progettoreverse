// Function: FUN_0102aac0
// Address: 0102aac0
// Size: 703 bytes
// Class: Unknown

uint64_t FUN_0102aac0(uint64_t param_1,EVP_CIPHER_CTX *param_2,size_t param_3,void *param_4)

{
  void *a;
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void *ptr;
  size_t len;
  EVP_CIPHER_CTX *arg1;
  
  lVar2 = _EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar2 + 0x118) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar2 + 0x2ec) < 0) {
    if (*(int *)(lVar2 + 0x11c) == 0) {
      return 0xffffffff;
    }
    if (param_2 != (EVP_CIPHER_CTX *)0x0) {
      if (arg1 == (EVP_CIPHER_CTX *)0x0) {
        iVar1 = _CRYPTO_gcm128_aad(0xffffffff,param_1);
      }
      else {
        iVar1 = _EVP_CIPHER_CTX_encrypting();
        if (iVar1 == 0) {
          iVar1 = _CRYPTO_gcm128_decrypt(param_1);
        }
        else {
          iVar1 = _CRYPTO_gcm128_encrypt();
        }
      }
      if (iVar1 == 0) {
        return param_1 & 0xffffffff;
      }
      return 0xffffffff;
    }
    iVar1 = _EVP_CIPHER_CTX_encrypting();
    if (iVar1 == 0) {
      if (*(int *)(lVar2 + 0x2e4) < 0) {
        return 0xffffffff;
      }
      _EVP_CIPHER_CTX_buf_noconst();
      iVar1 = _CRYPTO_gcm128_finish();
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else {
      _EVP_CIPHER_CTX_buf_noconst();
      _CRYPTO_gcm128_tag();
      *(void*)(lVar2 + 0x2e4) = 0x10;
    }
    *(void*)(lVar2 + 0x11c) = 0;
    return 0;
  }
  lVar2 = _EVP_CIPHER_CTX_get_cipher_data();
  if (arg1 != param_2) {
    return 0xffffffff;
  }
  if (param_1 < 0x18) {
    return 0xffffffff;
  }
  _EVP_CIPHER_CTX_encrypting();
  iVar1 = _EVP_CIPHER_CTX_ctrl(param_2,8,param_3,param_4);
  uVar3 = 0xffffffff;
  if (0 < iVar1) {
    _EVP_CIPHER_CTX_buf_noconst();
    iVar1 = _CRYPTO_gcm128_aad();
    if (iVar1 == 0) {
      a = (void *)(param_1 - 0x18);
      iVar1 = _EVP_CIPHER_CTX_encrypting();
      if (iVar1 != 0) {
        iVar1 = _CRYPTO_gcm128_encrypt(a);
        uVar3 = 0xffffffff;
        if (iVar1 == 0) {
          _CRYPTO_gcm128_tag(0xffffffff,0x10);
          uVar3 = param_1 & 0xffffffff;
        }
        goto LAB_0102ab83;
      }
      iVar1 = _CRYPTO_gcm128_decrypt(a,&param_2->engine);
      if (iVar1 == 0) {
        _EVP_CIPHER_CTX_buf_noconst();
        _CRYPTO_gcm128_tag();
        _EVP_CIPHER_CTX_buf_noconst();
        len = 0x10;
        ptr = a;
        iVar1 = _CRYPTO_memcmp(a,&MACH_HEADER.ncmds,param_3);
        if (iVar1 == 0) {
          uVar3 = (uint64_t)a & 0xffffffff;
          goto LAB_0102ab83;
        }
        _OPENSSL_cleanse(ptr,len);
      }
    }
    uVar3 = 0xffffffff;
  }
LAB_0102ab83:
  *(void*)(lVar2 + 0x11c) = 0;
  *(void*)(lVar2 + 0x2ec) = 0xffffffff;
  return uVar3;
}

