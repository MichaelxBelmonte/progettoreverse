// Function: FUN_01023ab0
// Address: 01023ab0
// Size: 530 bytes
// Class: Unknown
// String references:
//   "crypto/evp/e_aes.c"

void* FUN_01023ab0(int param_1,void*param_2,AES_KEY *param_3,char *param_4)

{
  uint64_t uVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  code *pcVar5;
  void*puVar6;
  EVP_CIPHER_CTX *pEVar7;
  int bits;
  int64_t arg1;
  int unaff_R14D;
  
  lVar4 = _EVP_CIPHER_CTX_get_cipher_data();
  pEVar7 = (EVP_CIPHER_CTX *)((int64_t)&MACH_HEADER.magic + 1);
  if (param_2 == (void*)0x0 && arg1 == 0) {
    return (void*)((int64_t)&MACH_HEADER.magic + 1);
  }
  if (arg1 == 0) goto LAB_01023c87;
  iVar3 = _EVP_CIPHER_CTX_key_length((EVP_CIPHER_CTX *)((int64_t)&MACH_HEADER.magic + 1));
  bits = (int)lVar4;
  if (param_1 == 0) {
    *(void*)(lVar4 + 0x210) = 0;
    uVar2 = (uint)g_0280304c;
    _EVP_CIPHER_CTX_key_length(pEVar7);
    if ((uVar2 & 0x200) != 0) {
      _vpaes_set_decrypt_key();
      pcVar5 = _vpaes_decrypt;
      goto LAB_01023c2d;
    }
    _AES_set_decrypt_key((uchar *)pEVar7,bits,param_3);
    pcVar5 = _AES_decrypt;
LAB_01023ba1:
    *(code **)(lVar4 + 0x200) = pcVar5;
    iVar3 = _EVP_CIPHER_CTX_key_length(pEVar7);
    pEVar7 = (EVP_CIPHER_CTX *)(uint64_t)(uint)(iVar3 / 2);
    _EVP_CIPHER_CTX_key_length(pEVar7);
    _AES_set_encrypt_key((uchar *)pEVar7,bits + 0xf8,param_3);
    pcVar5 = _AES_encrypt;
  }
  else {
    pEVar7 = (EVP_CIPHER_CTX *)(uint64_t)(uint)(iVar3 / 2);
    iVar3 = _CRYPTO_memcmp(pEVar7,(void *)(int64_t)(iVar3 / 2),(size_t)param_3);
    if (iVar3 == 0) {
      _ERR_put_error(0x20104e0,0xb7,0xd38,param_4,unaff_R14D);
      return (void*)0x0;
    }
    *(void*)(lVar4 + 0x210) = 0;
    uVar2 = (uint)g_0280304c;
    _EVP_CIPHER_CTX_key_length(pEVar7);
    if ((uVar2 & 0x200) == 0) {
      _AES_set_encrypt_key((uchar *)pEVar7,bits,param_3);
      pcVar5 = _AES_encrypt;
      goto LAB_01023ba1;
    }
    _vpaes_set_encrypt_key();
    pcVar5 = _vpaes_encrypt;
LAB_01023c2d:
    *(code **)(lVar4 + 0x200) = pcVar5;
    iVar3 = _EVP_CIPHER_CTX_key_length(pEVar7);
    _EVP_CIPHER_CTX_key_length((EVP_CIPHER_CTX *)(uint64_t)(uint)(iVar3 / 2));
    _vpaes_set_encrypt_key();
    pcVar5 = _vpaes_encrypt;
  }
  *(code **)(lVar4 + 0x208) = pcVar5;
  *(int64_t *)(lVar4 + 0x1f0) = lVar4;
LAB_01023c87:
  if (param_2 != (void*)0x0) {
    *(int64_t *)(lVar4 + 0x1f8) = lVar4 + 0xf8;
    puVar6 = (void*)_EVP_CIPHER_CTX_iv_noconst();
    uVar1 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar1;
  }
  return (void*)((int64_t)&MACH_HEADER.magic + 1);
}

