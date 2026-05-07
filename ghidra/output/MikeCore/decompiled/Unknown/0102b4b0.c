// Function: FUN_0102b4b0
// Address: 0102b4b0
// Size: 1113 bytes
// Class: Unknown


ulonglong FUN_0102b4b0(void *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *unaff_RSI;
  size_t sVar8;
  size_t sVar9;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
  pvVar7 = (void *)0xffffffff;
  if (*(int *)(lVar3 + 0x118) != 0) {
    if (*(int *)(lVar3 + 0x130) < 0) {
      if ((param_2 == (undefined8 *)0x0) && (pvVar7 = (void *)0x0, unaff_RSI != (undefined8 *)0x0))
      goto LAB_0102b895;
      if (*(int *)(lVar3 + 0x11c) == 0) goto LAB_0102b890;
      if (unaff_RSI == (undefined8 *)0x0) {
        if (param_2 != (undefined8 *)0x0) {
          if ((*(int *)(lVar3 + 0x124) != 0) ||
             (pvVar7 = (void *)0xffffffff, param_1 == (void *)0x0)) {
            _CRYPTO_ccm128_aad();
            pvVar7 = param_1;
          }
          goto LAB_0102b895;
        }
        _EVP_CIPHER_CTX_iv_noconst();
        iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (longlong)*(int *)(lVar3 + 0x128));
        pvVar7 = (void *)0xffffffff;
        if (iVar2 != 0) goto LAB_0102b895;
        *(undefined4 *)(lVar3 + 0x124) = 1;
LAB_0102b7a6:
        pvVar7 = (void *)((ulonglong)param_1 & 0xffffffff);
        goto LAB_0102b895;
      }
      iVar2 = _EVP_CIPHER_CTX_encrypting();
      if ((iVar2 == 0) && (*(int *)(lVar3 + 0x120) == 0)) goto LAB_0102b890;
      if (*(int *)(lVar3 + 0x124) == 0) {
        _EVP_CIPHER_CTX_iv_noconst();
        iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (longlong)*(int *)(lVar3 + 0x128));
        if (iVar2 != 0) goto LAB_0102b890;
        *(undefined4 *)(lVar3 + 0x124) = 1;
      }
      iVar2 = _EVP_CIPHER_CTX_encrypting();
      lVar5 = *(longlong *)(lVar3 + 0x170);
      if (iVar2 != 0) {
        if (lVar5 == 0) {
          iVar2 = _CRYPTO_ccm128_encrypt(param_1);
        }
        else {
          iVar2 = _CRYPTO_ccm128_encrypt_ccm64(param_1);
        }
        pvVar7 = (void *)0xffffffff;
        if (iVar2 != 0) goto LAB_0102b895;
        *(undefined4 *)(lVar3 + 0x120) = 1;
        goto LAB_0102b7a6;
      }
      pvVar7 = param_1;
      if (lVar5 == 0) {
        iVar2 = _CRYPTO_ccm128_decrypt();
        sVar8 = (size_t)lVar5;
        sVar9 = (size_t)unaff_RSI;
      }
      else {
        iVar2 = _CRYPTO_ccm128_decrypt_ccm64();
        sVar8 = (size_t)lVar5;
        sVar9 = (size_t)unaff_RSI;
      }
      if (iVar2 == 0) {
        sVar9 = *(size_t *)(lVar3 + 300);
        lVar5 = _CRYPTO_ccm128_tag();
        if (lVar5 == 0) goto LAB_0102b84d;
        _EVP_CIPHER_CTX_buf_noconst();
        pvVar6 = (void *)(longlong)*(int *)(lVar3 + 300);
        iVar2 = _CRYPTO_memcmp(pvVar7,pvVar6,sVar8);
        sVar9 = (size_t)pvVar6;
        if ((iVar2 != 0) || ((int)param_1 == -1)) goto LAB_0102b84d;
      }
      else {
LAB_0102b84d:
        _OPENSSL_cleanse(pvVar7,sVar9);
        param_1 = (void *)0xffffffff;
      }
      *(undefined8 *)(lVar3 + 0x11c) = 0;
      *(undefined4 *)(lVar3 + 0x124) = 0;
      pvVar7 = param_1;
      goto LAB_0102b895;
    }
    lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
    if ((unaff_RSI != param_2) || (param_1 < (void *)((longlong)*(int *)(lVar3 + 300) + 8U)))
    goto LAB_0102b895;
    iVar2 = _EVP_CIPHER_CTX_encrypting();
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)_EVP_CIPHER_CTX_buf_noconst();
      *param_2 = *puVar4;
    }
    lVar5 = _EVP_CIPHER_CTX_iv_noconst();
    *(undefined8 *)(lVar5 + 4) = *param_2;
    param_1 = (void *)((longlong)param_1 + (-8 - (longlong)*(int *)(lVar3 + 300)));
    _EVP_CIPHER_CTX_iv_noconst();
    iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (longlong)*(int *)(lVar3 + 0x128));
    if (iVar2 != 0) goto LAB_0102b895;
    _EVP_CIPHER_CTX_buf_noconst();
    _CRYPTO_ccm128_aad();
    sVar9 = (int)param_2 + 8;
    iVar2 = _EVP_CIPHER_CTX_encrypting();
    lVar5 = *(longlong *)(lVar3 + 0x170);
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
          pvVar7 = (void *)(ulonglong)((int)param_1 + *(int *)(lVar3 + 300) + 8);
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
        pvVar7 = (void *)(longlong)*(int *)(lVar3 + 300);
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
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (ulonglong)pvVar7 & 0xffffffff;
}


