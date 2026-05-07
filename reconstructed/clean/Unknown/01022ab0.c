// Function: FUN_01022ab0
// Address: 01022ab0
// Size: 1503 bytes
// Class: Unknown

uint64_t FUN_01022ab0(uint64_t param_1,EVP_CIPHER_CTX *param_2,int param_3,void *param_4)

{
  segment_command *psVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  segment_command *a;
  size_t len;
  EVP_CIPHER_CTX *arg1;
  int64_t this_ptr;
  size_t len_00;
  code *pcVar5;
  ENGINE **ppEVar6;
  uint64_t uVar7;
  
  lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar3 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x2cc) < 0) {
    if (*(int *)(lVar3 + 0xfc) == 0) {
      return 0xffffffff;
    }
    if (param_2 == (EVP_CIPHER_CTX *)0x0) {
      if (*(int *)(this_ptr + 0x10) == 0) {
        if (*(int *)(lVar3 + 0x2c4) < 0) {
          return 0xffffffff;
        }
        iVar2 = _CRYPTO_gcm128_finish();
        if (iVar2 != 0) {
          return 0xffffffff;
        }
      }
      else {
        _CRYPTO_gcm128_tag();
        *(void*)(lVar3 + 0x2c4) = 0x10;
      }
      *(void*)(lVar3 + 0xfc) = 0;
      return 0;
    }
    if (arg1 == (EVP_CIPHER_CTX *)0x0) {
      iVar2 = _CRYPTO_gcm128_aad();
    }
    else {
      pcVar5 = *(code **)(lVar3 + 0x2d0);
      if (*(int *)(this_ptr + 0x10) == 0) {
        if (pcVar5 == 0x0) {
          iVar2 = _CRYPTO_gcm128_decrypt(param_1);
        }
        else {
          lVar4 = 0;
          if ((0xf < param_1) && (pcVar5 == PTR__aesni_ctr32_encrypt_blocks_024a98b0)) {
            lVar4 = 0;
            if (*(void**)(lVar3 + 0x268) == PTR__gcm_ghash_avx_024a98c8) {
              uVar7 = (uint64_t)(-*(int *)(lVar3 + 0x270) & 0xf);
              iVar2 = _CRYPTO_gcm128_decrypt(uVar7);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar4 = _aesni_gcm_decrypt(*(void*)(lVar3 + 0x280),param_1 - uVar7,
                                         lVar3 + 0x100,lVar3 + 0x140);
              *(int64_t *)(lVar3 + 0x138) = *(int64_t *)(lVar3 + 0x138) + lVar4;
              lVar4 = uVar7 + lVar4;
              pcVar5 = *(code **)(lVar3 + 0x2d0);
            }
            else {
              pcVar5 = _aesni_ctr32_encrypt_blocks;
            }
          }
          iVar2 = _CRYPTO_gcm128_decrypt_ctr32
                            (param_1 - lVar4,arg1->oiv + lVar4 + -0x18,pcVar5);
        }
      }
      else if (pcVar5 == 0x0) {
        iVar2 = _CRYPTO_gcm128_encrypt(param_1);
      }
      else {
        lVar4 = 0;
        if ((0x1f < param_1) && (pcVar5 == PTR__aesni_ctr32_encrypt_blocks_024a98b0)) {
          lVar4 = 0;
          if (*(void**)(lVar3 + 0x268) == PTR__gcm_ghash_avx_024a98c8) {
            uVar7 = (uint64_t)(-*(int *)(lVar3 + 0x270) & 0xf);
            iVar2 = _CRYPTO_gcm128_encrypt(uVar7);
            if (iVar2 != 0) {
              return 0xffffffff;
            }
            lVar4 = _aesni_gcm_encrypt(*(void*)(lVar3 + 0x280),param_1 - uVar7,lVar3 + 0x100,
                                       lVar3 + 0x140);
            *(int64_t *)(lVar3 + 0x138) = *(int64_t *)(lVar3 + 0x138) + lVar4;
            lVar4 = uVar7 + lVar4;
            pcVar5 = *(code **)(lVar3 + 0x2d0);
          }
          else {
            pcVar5 = _aesni_ctr32_encrypt_blocks;
          }
        }
        iVar2 = _CRYPTO_gcm128_encrypt_ctr32(param_1 - lVar4,arg1->oiv + lVar4 + -0x18,pcVar5);
      }
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    return param_1 & 0xffffffff;
  }
  lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
  if (arg1 != param_2) {
    return 0xffffffff;
  }
  if (param_1 < 0x18) {
    return 0xffffffff;
  }
  iVar2 = _EVP_CIPHER_CTX_ctrl(param_2,8,param_3,param_4);
  uVar7 = 0xffffffff;
  if (0 < iVar2) {
    iVar2 = _CRYPTO_gcm128_aad();
    if (iVar2 == 0) {
      ppEVar6 = &param_2->engine;
      psVar1 = (segment_command *)(param_1 - 0x18);
      pcVar5 = *(code **)(lVar3 + 0x2d0);
      if (*(int *)(this_ptr + 0x10) == 0) {
        if (pcVar5 == 0x0) {
          a = psVar1;
          iVar2 = _CRYPTO_gcm128_decrypt(psVar1,ppEVar6);
          len_00 = (size_t)pcVar5;
        }
        else {
          lVar4 = 0;
          if (((segment_command *)((int64_t)&MACH_HEADER.filetype + 3) < psVar1) &&
             (pcVar5 == PTR__aesni_ctr32_encrypt_blocks_024a98b0)) {
            if (*(void**)(lVar3 + 0x268) == PTR__gcm_ghash_avx_024a98c8) {
              iVar2 = _CRYPTO_gcm128_decrypt(0,0);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar4 = _aesni_gcm_decrypt(*(void*)(lVar3 + 0x280),psVar1,lVar3 + 0x100,
                                         lVar3 + 0x140);
              *(int64_t *)(lVar3 + 0x138) = *(int64_t *)(lVar3 + 0x138) + lVar4;
              pcVar5 = *(code **)(lVar3 + 0x2d0);
            }
            else {
              pcVar5 = _aesni_ctr32_encrypt_blocks;
              lVar4 = 0;
            }
          }
          len_00 = (size_t)pcVar5;
          a = (segment_command *)((int64_t)psVar1 - lVar4);
          iVar2 = _CRYPTO_gcm128_decrypt_ctr32(a,(int64_t)ppEVar6 + lVar4);
        }
        if (iVar2 == 0) {
          _CRYPTO_gcm128_tag();
          len = 0x10;
          iVar2 = _CRYPTO_memcmp(a,&MACH_HEADER.ncmds,len_00);
          if (iVar2 == 0) {
            uVar7 = (uint64_t)psVar1 & 0xffffffff;
            goto LAB_0102300b;
          }
          _OPENSSL_cleanse(a,len);
        }
        uVar7 = 0xffffffff;
      }
      else {
        if (pcVar5 == 0x0) {
          iVar2 = _CRYPTO_gcm128_encrypt(psVar1,ppEVar6);
        }
        else {
          lVar4 = 0;
          if ((&segment_command_00000020 <= psVar1) &&
             (pcVar5 == PTR__aesni_ctr32_encrypt_blocks_024a98b0)) {
            if (*(void**)(lVar3 + 0x268) == PTR__gcm_ghash_avx_024a98c8) {
              iVar2 = _CRYPTO_gcm128_encrypt(0,0);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar4 = _aesni_gcm_encrypt(*(void*)(lVar3 + 0x280),psVar1,lVar3 + 0x100,
                                         lVar3 + 0x140);
              *(int64_t *)(lVar3 + 0x138) = *(int64_t *)(lVar3 + 0x138) + lVar4;
              pcVar5 = *(code **)(lVar3 + 0x2d0);
            }
            else {
              pcVar5 = _aesni_ctr32_encrypt_blocks;
              lVar4 = 0;
            }
          }
          iVar2 = _CRYPTO_gcm128_encrypt_ctr32
                            ((int64_t)psVar1 - lVar4,(int64_t)ppEVar6 + lVar4,pcVar5);
        }
        uVar7 = 0xffffffff;
        if (iVar2 == 0) {
          _CRYPTO_gcm128_tag(lVar3,0x10);
          uVar7 = param_1 & 0xffffffff;
        }
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
  }
LAB_0102300b:
  *(void*)(lVar3 + 0xfc) = 0;
  *(void*)(lVar3 + 0x2cc) = 0xffffffff;
  return uVar7;
}

