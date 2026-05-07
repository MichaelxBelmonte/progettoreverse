// Function: FUN_0102ec60
// Address: 0102ec60
// Size: 1107 bytes
// Class: Unknown
// String references:
//   "crypto/evp/e_des3.c"

uint64_t FUN_0102ec60(void*param_1,void*param_2,uchar *param_3,char *param_4)

{
  int64_t lVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  uint64_t uVar5;
  void*puVar6;
  uint64_t uVar7;
  DES_key_schedule *pDVar8;
  uchar *puVar9;
  void*arg1;
  void*puVar10;
  DES_key_schedule *pDVar11;
  int in_stack_ffffffffffffff98;
  uint32_t in_stack_ffffffffffffff9c;
  int in_stack_ffffffffffffffa0;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar5 = 0xffffffff;
  puVar9 = (uchar *)0xc000000000000007;
  if (((uint64_t)param_1 & 0xc000000000000007) == 0) {
    iVar3 = _is_partially_overlapping(0xc000000000000007,(uint64_t)param_1 & 0xffffffff);
    if (iVar3 == 0) {
      iVar3 = _EVP_CIPHER_CTX_encrypting();
      if (iVar3 == 0) {
        uVar5 = 0xffffffff;
        if (param_1 < &MACH_HEADER.flags) goto LAB_0102ecd4;
        if (arg1 == (void*)0x0) {
          uVar5 = (uint64_t)((int)param_1 - 0x10);
          goto LAB_0102ecd4;
        }
        puVar6 = (void*)_EVP_CIPHER_CTX_iv_noconst();
        *puVar6 = 0x521e8792ca2dd4a;
        puVar9 = (uchar *)_EVP_CIPHER_CTX_get_cipher_data();
        pcVar2 = *(code **)(puVar9 + 0x180);
        if (pcVar2 == 0x0) {
          pDVar11 = (DES_key_schedule *)(puVar9 + 0x80);
          pDVar8 = (DES_key_schedule *)(puVar9 + 0x100);
          _EVP_CIPHER_CTX_iv_noconst();
          _EVP_CIPHER_CTX_encrypting();
          sVar4 = (size_t)pDVar11;
          _DES_ede3_cbc_encrypt
                    (puVar9,(uchar *)&MACH_HEADER.cpusubtype,sVar4,pDVar8,pDVar8,pDVar11,
                     (DES_cblock *)CONCAT44(in_stack_ffffffffffffff9c,in_stack_ffffffffffffff98),
                     in_stack_ffffffffffffffa0);
        }
        else {
          sVar4 = _EVP_CIPHER_CTX_iv_noconst();
          (*pcVar2)(puVar9,8);
        }
        if (arg1 == param_2) {
          _memmove(puVar9,param_1 + -8,sVar4);
          param_2 = arg1 + -1;
        }
        puVar10 = param_1 + -0x10;
        FUN_0102e3c0(puVar10,param_2 + 1);
        pDVar11 = (DES_key_schedule *)(param_1 + -8 + (int64_t)param_2);
        puVar9 = (uchar *)_EVP_CIPHER_CTX_get_cipher_data();
        pcVar2 = *(code **)(puVar9 + 0x180);
        if (pcVar2 == 0x0) {
          pDVar8 = (DES_key_schedule *)(puVar9 + 0x80);
          _EVP_CIPHER_CTX_iv_noconst();
          _EVP_CIPHER_CTX_encrypting();
          _DES_ede3_cbc_encrypt
                    (puVar9,(uchar *)&MACH_HEADER.cpusubtype,(long)pDVar8,
                     (DES_key_schedule *)(puVar9 + 0x100),pDVar8,pDVar11,
                     (DES_cblock *)CONCAT44(in_stack_ffffffffffffff9c,in_stack_ffffffffffffff98),
                     in_stack_ffffffffffffffa0);
        }
        else {
          uVar7 = _EVP_CIPHER_CTX_iv_noconst();
          (*pcVar2)(puVar9,8,uVar7);
        }
        _BUF_reverse();
        _BUF_reverse();
        _EVP_CIPHER_CTX_iv_noconst();
        _BUF_reverse();
        FUN_0102e3c0(puVar10);
        puVar9 = (uchar *)_EVP_CIPHER_CTX_get_cipher_data();
        pcVar2 = *(code **)(puVar9 + 0x180);
        if (pcVar2 == 0x0) {
          pDVar11 = (DES_key_schedule *)(puVar9 + 0x80);
          pDVar8 = (DES_key_schedule *)_EVP_CIPHER_CTX_iv_noconst();
          _EVP_CIPHER_CTX_encrypting();
          _DES_ede3_cbc_encrypt
                    (puVar9,(uchar *)&MACH_HEADER.cpusubtype,(long)pDVar11,
                     (DES_key_schedule *)(puVar9 + 0x100),pDVar8,pDVar11,
                     (DES_cblock *)CONCAT44(in_stack_ffffffffffffff9c,in_stack_ffffffffffffff98),
                     in_stack_ffffffffffffffa0);
        }
        else {
          pDVar11 = (DES_key_schedule *)_EVP_CIPHER_CTX_iv_noconst();
          (*pcVar2)(puVar9,8);
        }
        _SHA1(puVar9,(size_t)&stack0xffffffffffffff98,(uchar *)pDVar11);
        sVar4 = 8;
        iVar3 = _CRYPTO_memcmp(puVar9,&MACH_HEADER.cpusubtype,(size_t)pDVar11);
        _OPENSSL_cleanse(puVar9,sVar4);
        _OPENSSL_cleanse(puVar9,sVar4);
        _OPENSSL_cleanse(puVar9,sVar4);
        _EVP_CIPHER_CTX_iv_noconst();
        _OPENSSL_cleanse(puVar9,sVar4);
        if ((iVar3 == 0) && (uVar5 = (uint64_t)puVar10 & 0xffffffff, (int)puVar10 != -1))
        goto LAB_0102ecd4;
        _OPENSSL_cleanse(puVar9,sVar4);
      }
      else {
        if (arg1 == (void*)0x0) {
          uVar5 = (uint64_t)((int)param_1 + 0x10);
          goto LAB_0102ecd4;
        }
        _memmove(puVar9,param_1,(size_t)param_3);
        sVar4 = (size_t)&stack0xffffffffffffff98;
        _SHA1(puVar9,sVar4,param_3);
        *(uint64_t *)((int64_t)(arg1 + 1) + (int64_t)param_1) =
             CONCAT44(in_stack_ffffffffffffff9c,in_stack_ffffffffffffff98);
        _OPENSSL_cleanse(puVar9,sVar4);
        _EVP_CIPHER_CTX_iv_noconst();
        iVar3 = _RAND_bytes(puVar9,sVar4);
        if (0 < iVar3) {
          puVar6 = (void*)_EVP_CIPHER_CTX_iv_noconst();
          *arg1 = *puVar6;
          FUN_0102e3c0(param_1 + 8,arg1 + 1);
          _BUF_reverse();
          puVar6 = (void*)_EVP_CIPHER_CTX_iv_noconst();
          *puVar6 = 0x521e8792ca2dd4a;
          FUN_0102e3c0(param_1 + 0x10);
          uVar5 = (uint64_t)(param_1 + 0x10) & 0xffffffff;
          goto LAB_0102ecd4;
        }
      }
      uVar5 = 0xffffffff;
    }
    else {
      _ERR_put_error(0x2010540,0xa2,0x18e,param_4,in_stack_ffffffffffffff98);
      uVar5 = 0;
    }
  }
LAB_0102ecd4:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return uVar5;
}

