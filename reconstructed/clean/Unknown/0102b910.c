// Function: FUN_0102b910
// Address: 0102b910
// Size: 635 bytes
// Class: Unknown

uint32_t FUN_0102b910(int *param_1,uint param_2,size_t param_3)

{
  uint8_t uVar1;
  uint64_t uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  void*puVar6;
  int64_t lVar7;
  void *pvVar8;
  uint32_t uVar9;
  uint32_t unaff_ESI;
  ushort uVar10;
  uint32_t extraout_XMM0_Da;
  
  pvVar4 = (void *)_EVP_CIPHER_CTX_get_cipher_data();
  uVar9 = 0xffffffff;
  switch(unaff_ESI) {
  case 0:
    *(void*)((int64_t)pvVar4 + 0x128) = 0xc00000008;
    *(void*)((int64_t)pvVar4 + 0x118) = 0;
    *(void*)((int64_t)pvVar4 + 0x120) = 0;
    *(void*)((int64_t)pvVar4 + 0x130) = 0xffffffff;
    break;
  default:
    goto switchD_0102b94f_caseD_1;
  case 8:
    lVar7 = _EVP_CIPHER_CTX_get_cipher_data();
    if (*(void **)((int64_t)pvVar4 + 0x168) == (void *)0x0) {
      return 1;
    }
    if (*(void **)((int64_t)pvVar4 + 0x168) != pvVar4) {
      return 0;
    }
    *(int64_t *)(lVar7 + 0x168) = lVar7;
    break;
  case 9:
    param_2 = 0xf - param_2;
  case 0x14:
    if (6 < param_2 - 2) {
      return 0;
    }
    *(uint *)((int64_t)pvVar4 + 0x128) = param_2;
    break;
  case 0x10:
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)((int64_t)pvVar4 + 0x120) == 0) {
      return 0;
    }
    lVar7 = _CRYPTO_ccm128_tag(extraout_XMM0_Da,(int64_t)(int)param_2);
    if (lVar7 == 0) {
      return 0;
    }
    *(void*)((int64_t)pvVar4 + 0x11c) = 0;
    *(void*)((int64_t)pvVar4 + 0x124) = 0;
    break;
  case 0x11:
    if (0xc < param_2 - 4) {
      return 0;
    }
    if ((param_2 & 1) != 0) {
      return 0;
    }
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if ((iVar3 != 0) && (param_1 != (int *)0x0)) {
      return 0;
    }
    if (param_1 != (int *)0x0) {
      *(void*)((int64_t)pvVar4 + 0x120) = 1;
      pvVar8 = pvVar4;
      _EVP_CIPHER_CTX_buf_noconst();
      _memcpy(pvVar8,(void *)(uint64_t)param_2,param_3);
    }
    *(uint *)((int64_t)pvVar4 + 300) = param_2;
    break;
  case 0x12:
    if (param_2 != 4) {
      return 0;
    }
    piVar5 = (int *)_EVP_CIPHER_CTX_iv_noconst();
    *piVar5 = *param_1;
    break;
  case 0x16:
    if (param_2 != 0xd) {
      return 0;
    }
    puVar6 = (void*)_EVP_CIPHER_CTX_buf_noconst();
    uVar2 = *(void*)((int64_t)param_1 + 5);
    *puVar6 = *(void*)param_1;
    *(void*)((int64_t)puVar6 + 5) = uVar2;
    *(void*)((int64_t)pvVar4 + 0x130) = 0xd;
    lVar7 = _EVP_CIPHER_CTX_buf_noconst();
    uVar1 = *(void*)(lVar7 + 0xb);
    lVar7 = _EVP_CIPHER_CTX_buf_noconst();
    uVar10 = CONCAT11(uVar1,*(void*)(lVar7 + 0xc));
    if (uVar10 < 8) {
      return 0;
    }
    uVar10 = uVar10 - 8;
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if (iVar3 == 0) {
      if ((int)(uint)uVar10 < *(int *)((int64_t)pvVar4 + 300)) {
        return 0;
      }
      uVar10 = uVar10 - (short)*(int *)((int64_t)pvVar4 + 300);
    }
    lVar7 = _EVP_CIPHER_CTX_buf_noconst();
    *(char *)(lVar7 + 0xb) = (char)(uVar10 >> 8);
    lVar7 = _EVP_CIPHER_CTX_buf_noconst();
    *(char *)(lVar7 + 0xc) = (char)uVar10;
    return *(void*)((int64_t)pvVar4 + 300);
  case 0x25:
    *param_1 = 0xf - *(int *)((int64_t)pvVar4 + 0x128);
  }
  uVar9 = 1;
switchD_0102b94f_caseD_1:
  return uVar9;
}

