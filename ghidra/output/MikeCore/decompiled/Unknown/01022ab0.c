// Function: FUN_01022ab0
// Address: 01022ab0
// Size: 1503 bytes
// Class: Unknown


ulonglong FUN_01022ab0(ulonglong param_1,EVP_CIPHER_CTX *param_2,int param_3,void *param_4)

{
  segment_command *psVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  segment_command *a;
  size_t len;
  EVP_CIPHER_CTX *unaff_RSI;
  longlong unaff_RDI;
  size_t len_00;
  code *pcVar5;
  ENGINE **ppEVar6;
  ulonglong uVar7;
  
  lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar3 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x2cc) < 0) {
    if (*(int *)(lVar3 + 0xfc) == 0) {
      return 0xffffffff;
    }
    if (param_2 == (EVP_CIPHER_CTX *)0x0) {
      if (*(int *)(unaff_RDI + 0x10) == 0) {
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
        *(undefined4 *)(lVar3 + 0x2c4) = 0x10;
      }
      *(undefined4 *)(lVar3 + 0xfc) = 0;
      return 0;
    }
    if (unaff_RSI == (EVP_CIPHER_CTX *)0x0) {
      iVar2 = _CRYPTO_gcm128_aad();
    }
    else {
      pcVar5 = *(code **)(lVar3 + 0x2d0);
      if (*(int *)(unaff_RDI + 0x10) == 0) {
        if (pcVar5 == (code *)0x0) {
          iVar2 = _CRYPTO_gcm128_decrypt(param_1);
        }
        else {
          lVar4 = 0;
          if ((0xf < param_1) && (pcVar5 == (code *)PTR__aesni_ctr32_encrypt_blocks_024a98b0)) {
            lVar4 = 0;
            if (*(undefined **)(lVar3 + 0x268) == PTR__gcm_ghash_avx_024a98c8) {
              uVar7 = (ulonglong)(-*(int *)(lVar3 + 0x270) & 0xf);
              iVar2 = _CRYPTO_gcm128_decrypt(uVar7);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar4 = _aesni_gcm_decrypt(*(undefined8 *)(lVar3 + 0x280),param_1 - uVar7,
                                         lVar3 + 0x100,lVar3 + 0x140);
              *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar4;
              lVar4 = uVar7 + lVar4;
              pcVar5 = *(code **)(lVar3 + 0x2d0);
            }
            else {
              pcVar5 = _aesni_ctr32_encrypt_blocks;
            }
          }
          iVar2 = _CRYPTO_gcm128_decrypt_ctr32
                            (param_1 - lVar4,unaff_RSI->oiv + lVar4 + -0x18,pcVar5);
        }
      }
      else if (pcVar5 == (code *)0x0) {
        iVar2 = _CRYPTO_gcm128_encrypt(param_1);
      }
      else {
        lVar4 = 0;
        if ((0x1f < param_1) && (pcVar5 == (code *)PTR__aesni_ctr32_encrypt_blocks_024a98b0)) {
          lVar4 = 0;
          if (*(undefined **)(lVar3 + 0x268) == PTR__gcm_ghash_avx_024a98c8) {
            uVar7 = (ulonglong)(-*(int *)(lVar3 + 0x270) & 0xf);
            iVar2 = _CRYPTO_gcm128_encrypt(uVar7);
            if (iVar2 != 0) {
              return 0xffffffff;
            }
            lVar4 = _aesni_gcm_encrypt(*(undefined8 *)(lVar3 + 0x280),param_1 - uVar7,lVar3 + 0x100,
                                       lVar3 + 0x140);
            *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar4;
            lVar4 = uVar7 + lVar4;
            pcVar5 = *(code **)(lVar3 + 0x2d0);
          }
          else {
            pcVar5 = _aesni_ctr32_encrypt_blocks;
          }
        }
        iVar2 = _CRYPTO_gcm128_encrypt_ctr32(param_1 - lVar4,unaff_RSI->oiv + lVar4 + -0x18,pcVar5);
      }
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    return param_1 & 0xffffffff;
  }
  lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
  if (unaff_RSI != param_2) {
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
      if (*(int *)(unaff_RDI + 0x10) == 0) {
        if (pcVar5 == (code *)0x0) {
          a = psVar1;
          iVar2 = _CRYPTO_gcm128_decrypt(psVar1,ppEVar6);
          len_00 = (size_t)pcVar5;
        }
        else {
          lVar4 = 0;
          if (((segment_command *)((longlong)&MACH_HEADER.filetype + 3) < psVar1) &&
             (pcVar5 == (code *)PTR__aesni_ctr32_encrypt_blocks_024a98b0)) {
            if (*(undefined **)(lVar3 + 0x268) == PTR__gcm_ghash_avx_024a98c8) {
              iVar2 = _CRYPTO_gcm128_decrypt(0,0);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar4 = _aesni_gcm_decrypt(*(undefined8 *)(lVar3 + 0x280),psVar1,lVar3 + 0x100,
                                         lVar3 + 0x140);
              *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar4;
              pcVar5 = *(code **)(lVar3 + 0x2d0);
            }
            else {
              pcVar5 = _aesni_ctr32_encrypt_blocks;
              lVar4 = 0;
            }
          }
          len_00 = (size_t)pcVar5;
          a = (segment_command *)((longlong)psVar1 - lVar4);
          iVar2 = _CRYPTO_gcm128_decrypt_ctr32(a,(longlong)ppEVar6 + lVar4);
        }
        if (iVar2 == 0) {
          _CRYPTO_gcm128_tag();
          len = 0x10;
          iVar2 = _CRYPTO_memcmp(a,&MACH_HEADER.ncmds,len_00);
          if (iVar2 == 0) {
            uVar7 = (ulonglong)psVar1 & 0xffffffff;
            goto LAB_0102300b;
          }
          _OPENSSL_cleanse(a,len);
        }
        uVar7 = 0xffffffff;
      }
      else {
        if (pcVar5 == (code *)0x0) {
          iVar2 = _CRYPTO_gcm128_encrypt(psVar1,ppEVar6);
        }
        else {
          lVar4 = 0;
          if ((&segment_command_00000020 <= psVar1) &&
             (pcVar5 == (code *)PTR__aesni_ctr32_encrypt_blocks_024a98b0)) {
            if (*(undefined **)(lVar3 + 0x268) == PTR__gcm_ghash_avx_024a98c8) {
              iVar2 = _CRYPTO_gcm128_encrypt(0,0);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar4 = _aesni_gcm_encrypt(*(undefined8 *)(lVar3 + 0x280),psVar1,lVar3 + 0x100,
                                         lVar3 + 0x140);
              *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar4;
              pcVar5 = *(code **)(lVar3 + 0x2d0);
            }
            else {
              pcVar5 = _aesni_ctr32_encrypt_blocks;
              lVar4 = 0;
            }
          }
          iVar2 = _CRYPTO_gcm128_encrypt_ctr32
                            ((longlong)psVar1 - lVar4,(longlong)ppEVar6 + lVar4,pcVar5);
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
  *(undefined4 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x2cc) = 0xffffffff;
  return uVar7;
}


