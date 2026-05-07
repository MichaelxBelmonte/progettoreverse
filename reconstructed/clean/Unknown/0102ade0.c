// Function: FUN_0102ade0
// Address: 0102ade0
// Size: 1332 bytes
// Class: Unknown
// String references:
//   "crypto/evp/e_aria.c"

uint64_t FUN_0102ade0(void*param_1,uint param_2,size_t param_3,char *param_4)

{
  char *pcVar1;
  uint8_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  void *pvVar7;
  void*puVar8;
  uint *buf;
  int64_t lVar9;
  uint32_t unaff_ESI;
  uint64_t uVar10;
  int unaff_R14D;
  uint uVar11;
  uint uVar12;
  
  pvVar7 = (void *)(uint64_t)param_2;
  lVar4 = _EVP_CIPHER_CTX_get_cipher_data();
  uVar10 = 0xffffffff;
  buf = &switchD_0102ae24::switchdataD_0102b314;
  switch(unaff_ESI) {
  case 0:
    *(void*)(lVar4 + 0x118) = 0;
    iVar3 = _EVP_CIPHER_iv_length((EVP_CIPHER *)&switchD_0102ae24::switchdataD_0102b314);
    *(int *)(lVar4 + 0x2e0) = iVar3;
    uVar10 = _EVP_CIPHER_CTX_iv_noconst();
    *(void*)(lVar4 + 0x2d8) = uVar10;
    *(void*)(lVar4 + 0x2e4) = 0xffffffff;
    *(void*)(lVar4 + 0x2ec) = 0xffffffff;
    break;
  default:
    goto switchD_0102ae24_caseD_1;
  case 8:
    lVar5 = _EVP_CIPHER_CTX_get_cipher_data();
    if (*(int64_t *)(lVar4 + 0x2a0) != 0) {
      if (*(int64_t *)(lVar4 + 0x2a0) != lVar4) {
        return 0;
      }
      *(int64_t *)(lVar5 + 0x2a0) = lVar5;
    }
    lVar9 = *(int64_t *)(lVar4 + 0x2d8);
    lVar6 = _EVP_CIPHER_CTX_iv_noconst();
    if (lVar9 != lVar6) {
      pvVar7 = _CRYPTO_malloc((int)buf,(char *)((int64_t)&section_00000158.addr + 2),param_3);
      *(void **)(lVar5 + 0x2d8) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _ERR_put_error(0x20104f3,0x41,0x17b,param_4,unaff_R14D);
        return 0;
      }
      pvVar7 = (void *)(int64_t)*(int *)(lVar4 + 0x2e0);
      goto LAB_0102afa3;
    }
    uVar10 = _EVP_CIPHER_CTX_iv_noconst();
    *(void*)(lVar5 + 0x2d8) = uVar10;
    break;
  case 9:
    if ((int)param_2 < 1) {
      return 0;
    }
    if ((0x10 < (int)param_2) && (*(int *)(lVar4 + 0x2e0) < (int)param_2)) {
      lVar5 = *(int64_t *)(lVar4 + 0x2d8);
      lVar9 = _EVP_CIPHER_CTX_iv_noconst();
      if (lVar5 != lVar9) {
        _CRYPTO_free(buf);
      }
      pvVar7 = _CRYPTO_malloc((int)buf,section_00000108.sectname + 5,param_3);
      *(void **)(lVar4 + 0x2d8) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _ERR_put_error(0x20104f3,0x41,0x10e,param_4,unaff_R14D);
        return 0;
      }
    }
    *(uint *)(lVar4 + 0x2e0) = param_2;
    break;
  case 0x10:
    if (0xf < param_2 - 1) {
      return 0;
    }
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar4 + 0x2e4) < 0) {
      return 0;
    }
    _EVP_CIPHER_CTX_buf_noconst();
LAB_0102afa3:
    _memcpy(buf,pvVar7,param_3);
    break;
  case 0x11:
    if (0xf < param_2 - 1) {
      return 0;
    }
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if (iVar3 != 0) {
      return 0;
    }
    _EVP_CIPHER_CTX_buf_noconst();
    _memcpy(buf,pvVar7,param_3);
    *(uint *)(lVar4 + 0x2e4) = param_2;
    break;
  case 0x12:
    if (param_2 == 0xffffffff) {
      _memcpy(&switchD_0102ae24::switchdataD_0102b314,(void *)(int64_t)*(int *)(lVar4 + 0x2e0),
              param_3);
      *(void*)(lVar4 + 0x2e8) = 1;
    }
    else {
      if ((int)param_2 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar4 + 0x2e0) - param_2) < 8) {
        return 0;
      }
      _memcpy(&switchD_0102ae24::switchdataD_0102b314,pvVar7,param_3);
      iVar3 = _EVP_CIPHER_CTX_encrypting();
      if ((iVar3 != 0) && (iVar3 = _RAND_bytes((uchar *)buf,param_2), iVar3 < 1)) {
        return 0;
      }
      *(void*)(lVar4 + 0x2e8) = 1;
    }
    break;
  case 0x13:
    if (*(int *)(lVar4 + 0x2e8) == 0) {
      return 0;
    }
    if (*(int *)(lVar4 + 0x118) == 0) {
      return 0;
    }
    _CRYPTO_gcm128_setiv(&switchD_0102ae24::switchdataD_0102b314,(int64_t)*(int *)(lVar4 + 0x2e0));
    uVar11 = *(uint *)(lVar4 + 0x2e0);
    uVar12 = param_2;
    if ((int)uVar11 < (int)param_2) {
      uVar12 = uVar11;
    }
    if ((int)param_2 < 1) {
      uVar12 = uVar11;
    }
    _memcpy(buf,(void *)(int64_t)(int)uVar12,param_3);
    lVar5 = *(int64_t *)(lVar4 + 0x2d8);
    lVar9 = (int64_t)*(int *)(lVar4 + 0x2e0);
    pcVar1 = (char *)(lVar9 + -1 + lVar5);
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 == '\0') {
      pcVar1 = (char *)(lVar9 + -2 + lVar5);
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        pcVar1 = (char *)(lVar9 + -3 + lVar5);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = (char *)(lVar9 + -4 + lVar5);
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = (char *)(lVar9 + -5 + lVar5);
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = (char *)(lVar9 + -6 + lVar5);
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                pcVar1 = (char *)(lVar9 + -7 + lVar5);
                *pcVar1 = *pcVar1 + '\x01';
                if (*pcVar1 == '\0') {
                  pcVar1 = (char *)(lVar5 + -8 + lVar9);
                  *pcVar1 = *pcVar1 + '\x01';
                  *(void*)(lVar4 + 0x11c) = 1;
                  break;
                }
              }
            }
          }
        }
      }
    }
    *(void*)(lVar4 + 0x11c) = 1;
    break;
  case 0x16:
    if (param_2 != 0xd) {
      return 0;
    }
    puVar8 = (void*)_EVP_CIPHER_CTX_buf_noconst();
    uVar10 = *(void*)((int64_t)param_1 + 5);
    *puVar8 = *param_1;
    *(void*)((int64_t)puVar8 + 5) = uVar10;
    *(void*)(lVar4 + 0x2ec) = 0xd;
    lVar4 = _EVP_CIPHER_CTX_buf_noconst();
    uVar2 = *(void*)(lVar4 + 0xb);
    lVar4 = _EVP_CIPHER_CTX_buf_noconst();
    uVar11 = (uint)CONCAT11(uVar2,*(void*)(lVar4 + 0xc));
    if (uVar11 < 8) {
      return 0;
    }
    uVar12 = uVar11 - 8;
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if (iVar3 == 0) {
      if (uVar12 < 0x10) {
        return 0;
      }
      uVar12 = uVar11 - 0x18;
    }
    lVar4 = _EVP_CIPHER_CTX_buf_noconst();
    *(char *)(lVar4 + 0xb) = (char)(uVar12 >> 8);
    lVar4 = _EVP_CIPHER_CTX_buf_noconst();
    *(char *)(lVar4 + 0xc) = (char)uVar12;
    return 0x10;
  case 0x18:
    if (*(int *)(lVar4 + 0x2e8) == 0) {
      return 0;
    }
    if (*(int *)(lVar4 + 0x118) == 0) {
      return 0;
    }
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if (iVar3 != 0) {
      return 0;
    }
    _memcpy(buf,(void *)(int64_t)(int)param_2,param_3);
    _CRYPTO_gcm128_setiv();
    *(void*)(lVar4 + 0x11c) = 1;
    break;
  case 0x25:
    *(void*)param_1 = *(void*)(lVar4 + 0x2e0);
  }
  uVar10 = 1;
switchD_0102ae24_caseD_1:
  return uVar10;
}

