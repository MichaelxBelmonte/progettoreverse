// Function: FUN_01024a10
// Address: 01024a10
// Size: 896 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit"
//   "crypto/evp/e_aes.c"


int FUN_01024a10(undefined1 *param_1,longlong param_2,size_t param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong unaff_RSI;
  int unaff_R12D;
  uint uVar5;
  uint *local_48;
  
  lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar3 + 500) == 0) {
    return -1;
  }
  if (*(int *)(lVar3 + 0x1f0) == 0) {
    return -1;
  }
  if (param_2 == 0) {
    if (*(int *)(lVar3 + 0x2e0) < 1) {
      iVar2 = 0;
      iVar1 = *(int *)(lVar3 + 0x2e4);
    }
    else {
      iVar1 = _EVP_CIPHER_CTX_encrypting();
      if (iVar1 == 0) {
        iVar1 = _CRYPTO_ocb128_decrypt((longlong)*(int *)(lVar3 + 0x2e0));
      }
      else {
        iVar1 = _CRYPTO_ocb128_encrypt();
      }
      if (iVar1 == 0) {
        return -1;
      }
      iVar2 = *(int *)(lVar3 + 0x2e0);
      *(undefined4 *)(lVar3 + 0x2e0) = 0;
      iVar1 = *(int *)(lVar3 + 0x2e4);
    }
    if (0 < iVar1) {
      iVar1 = _CRYPTO_ocb128_aad();
      if (iVar1 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar3 + 0x2e4) = 0;
    }
    iVar1 = _EVP_CIPHER_CTX_encrypting();
    if (iVar1 == 0) {
      if (*(int *)(lVar3 + 0x2ec) < 0) {
        return -1;
      }
      iVar1 = _CRYPTO_ocb128_finish();
      if (iVar1 != 0) {
        return -1;
      }
    }
    else {
      iVar1 = _CRYPTO_ocb128_tag();
      if (iVar1 != 1) {
        return -1;
      }
    }
    *(undefined4 *)(lVar3 + 500) = 0;
    return iVar2;
  }
  if (unaff_RSI == 0) {
    local_48 = (uint *)(lVar3 + 0x2e4);
    uVar5 = *local_48;
    if ((int)uVar5 < 1) goto LAB_01024b46;
LAB_01024b06:
    puVar4 = (undefined1 *)(ulonglong)(0x10 - uVar5);
    if (param_1 < puVar4) {
      _memcpy(local_48,param_1,param_3);
      *local_48 = *local_48 + (int)param_1;
      return 0;
    }
    _memcpy(local_48,puVar4,param_3);
    if (unaff_RSI == 0) {
      iVar1 = _CRYPTO_ocb128_aad();
    }
    else {
      iVar1 = _EVP_CIPHER_CTX_encrypting();
      if (iVar1 == 0) {
        iVar1 = _CRYPTO_ocb128_decrypt(0x10);
      }
      else {
        iVar1 = _CRYPTO_ocb128_encrypt();
      }
    }
    if (iVar1 == 0) {
      return -1;
    }
    param_1 = param_1 + -(longlong)puVar4;
    *local_48 = 0;
    if (unaff_RSI != 0) {
      unaff_RSI = unaff_RSI + 0x10;
    }
    iVar1 = 0x10;
    if (param_1 <= (undefined1 *)((longlong)&MACH_HEADER.filetype + 3)) goto LAB_01024d5e;
  }
  else {
    iVar1 = _is_partially_overlapping();
    if (iVar1 != 0) {
      _ERR_put_error(0x20104e0,0xa2,0x1040,param_4,unaff_R12D);
      return 0;
    }
    local_48 = (uint *)(lVar3 + 0x2e0);
    uVar5 = *local_48;
    if (0 < (int)uVar5) goto LAB_01024b06;
LAB_01024b46:
    iVar1 = 0;
    if (param_1 <= (undefined1 *)((longlong)&MACH_HEADER.filetype + 3)) goto LAB_01024d5e;
  }
  if (unaff_RSI == 0) {
    iVar2 = _CRYPTO_ocb128_aad(local_48,(ulonglong)param_1 & 0xfffffffffffffff0);
  }
  else {
    iVar2 = _EVP_CIPHER_CTX_encrypting();
    if (iVar2 == 0) {
      iVar2 = _CRYPTO_ocb128_decrypt((ulonglong)param_1 & 0xfffffffffffffff0,unaff_RSI);
    }
    else {
      iVar2 = _CRYPTO_ocb128_encrypt();
    }
  }
  if (iVar2 == 0) {
    return -1;
  }
  iVar1 = iVar1 + ((uint)param_1 & 0xfffffff0);
LAB_01024d5e:
  uVar5 = (uint)param_1 & 0xf;
  if ((void *)(ulonglong)uVar5 != (void *)0x0) {
    _memcpy(local_48,(void *)(ulonglong)uVar5,param_3);
    *local_48 = uVar5;
  }
  return iVar1;
}


