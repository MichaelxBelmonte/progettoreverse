// Function: FUN_01023dc0
// Address: 01023dc0
// Size: 1113 bytes
// Class: Unknown


ulonglong FUN_01023dc0(void *param_1,undefined8 *param_2)

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
  if (*(int *)(lVar3 + 0xf8) != 0) {
    if (*(int *)(lVar3 + 0x110) < 0) {
      if ((param_2 == (undefined8 *)0x0) && (pvVar7 = (void *)0x0, unaff_RSI != (undefined8 *)0x0))
      goto LAB_010241a5;
      if (*(int *)(lVar3 + 0xfc) == 0) goto LAB_010241a0;
      if (unaff_RSI == (undefined8 *)0x0) {
        if (param_2 != (undefined8 *)0x0) {
          if ((*(int *)(lVar3 + 0x104) != 0) ||
             (pvVar7 = (void *)0xffffffff, param_1 == (void *)0x0)) {
            _CRYPTO_ccm128_aad();
            pvVar7 = param_1;
          }
          goto LAB_010241a5;
        }
        _EVP_CIPHER_CTX_iv_noconst();
        iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (longlong)*(int *)(lVar3 + 0x108));
        pvVar7 = (void *)0xffffffff;
        if (iVar2 != 0) goto LAB_010241a5;
        *(undefined4 *)(lVar3 + 0x104) = 1;
LAB_010240b6:
        pvVar7 = (void *)((ulonglong)param_1 & 0xffffffff);
        goto LAB_010241a5;
      }
      iVar2 = _EVP_CIPHER_CTX_encrypting();
      if ((iVar2 == 0) && (*(int *)(lVar3 + 0x100) == 0)) goto LAB_010241a0;
      if (*(int *)(lVar3 + 0x104) == 0) {
        _EVP_CIPHER_CTX_iv_noconst();
        iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (longlong)*(int *)(lVar3 + 0x108));
        if (iVar2 != 0) goto LAB_010241a0;
        *(undefined4 *)(lVar3 + 0x104) = 1;
      }
      iVar2 = _EVP_CIPHER_CTX_encrypting();
      lVar5 = *(longlong *)(lVar3 + 0x150);
      if (iVar2 != 0) {
        if (lVar5 == 0) {
          iVar2 = _CRYPTO_ccm128_encrypt(param_1);
        }
        else {
          iVar2 = _CRYPTO_ccm128_encrypt_ccm64(param_1);
        }
        pvVar7 = (void *)0xffffffff;
        if (iVar2 != 0) goto LAB_010241a5;
        *(undefined4 *)(lVar3 + 0x100) = 1;
        goto LAB_010240b6;
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
        sVar9 = *(size_t *)(lVar3 + 0x10c);
        lVar5 = _CRYPTO_ccm128_tag();
        if (lVar5 == 0) goto LAB_0102415d;
        _EVP_CIPHER_CTX_buf_noconst();
        pvVar6 = (void *)(longlong)*(int *)(lVar3 + 0x10c);
        iVar2 = _CRYPTO_memcmp(pvVar7,pvVar6,sVar8);
        sVar9 = (size_t)pvVar6;
        if ((iVar2 != 0) || ((int)param_1 == -1)) goto LAB_0102415d;
      }
      else {
LAB_0102415d:
        _OPENSSL_cleanse(pvVar7,sVar9);
        param_1 = (void *)0xffffffff;
      }
      *(undefined8 *)(lVar3 + 0xfc) = 0;
      *(undefined4 *)(lVar3 + 0x104) = 0;
      pvVar7 = param_1;
      goto LAB_010241a5;
    }
    lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
    if ((unaff_RSI != param_2) || (param_1 < (void *)((longlong)*(int *)(lVar3 + 0x10c) + 8U)))
    goto LAB_010241a5;
    iVar2 = _EVP_CIPHER_CTX_encrypting();
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)_EVP_CIPHER_CTX_buf_noconst();
      *param_2 = *puVar4;
    }
    lVar5 = _EVP_CIPHER_CTX_iv_noconst();
    *(undefined8 *)(lVar5 + 4) = *param_2;
    param_1 = (void *)((longlong)param_1 + (-8 - (longlong)*(int *)(lVar3 + 0x10c)));
    _EVP_CIPHER_CTX_iv_noconst();
    iVar2 = _CRYPTO_ccm128_setiv(param_1,0xf - (longlong)*(int *)(lVar3 + 0x108));
    if (iVar2 != 0) goto LAB_010241a5;
    _EVP_CIPHER_CTX_buf_noconst();
    _CRYPTO_ccm128_aad();
    sVar9 = (int)param_2 + 8;
    iVar2 = _EVP_CIPHER_CTX_encrypting();
    lVar5 = *(longlong *)(lVar3 + 0x150);
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
          pvVar7 = (void *)(ulonglong)((int)param_1 + *(int *)(lVar3 + 0x10c) + 8);
        }
      }
      goto LAB_010241a5;
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
      sVar9 = *(size_t *)(lVar3 + 0x10c);
      lVar5 = _CRYPTO_ccm128_tag();
      if (lVar5 != 0) {
        pvVar7 = (void *)(longlong)*(int *)(lVar3 + 0x10c);
        iVar2 = _CRYPTO_memcmp(pvVar6,pvVar7,sVar8);
        sVar9 = (size_t)pvVar7;
        pvVar7 = param_1;
        if (iVar2 == 0) goto LAB_010241a5;
      }
    }
    _OPENSSL_cleanse(pvVar6,sVar9);
  }
LAB_010241a0:
  pvVar7 = (void *)0xffffffff;
LAB_010241a5:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (ulonglong)pvVar7 & 0xffffffff;
}


