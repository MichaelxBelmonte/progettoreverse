// Function: FUN_01024220
// Address: 01024220
// Size: 635 bytes
// Class: Unknown


undefined4 FUN_01024220(int *param_1,uint param_2,size_t param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 unaff_ESI;
  ushort uVar10;
  undefined4 extraout_XMM0_Da;
  
  pvVar4 = (void *)_EVP_CIPHER_CTX_get_cipher_data();
  uVar9 = 0xffffffff;
  switch(unaff_ESI) {
  case 0:
    *(undefined8 *)((longlong)pvVar4 + 0x108) = 0xc00000008;
    *(undefined8 *)((longlong)pvVar4 + 0xf8) = 0;
    *(undefined8 *)((longlong)pvVar4 + 0x100) = 0;
    *(undefined4 *)((longlong)pvVar4 + 0x110) = 0xffffffff;
    break;
  default:
    goto switchD_0102425f_caseD_1;
  case 8:
    lVar7 = _EVP_CIPHER_CTX_get_cipher_data();
    if (*(void **)((longlong)pvVar4 + 0x148) == (void *)0x0) {
      return 1;
    }
    if (*(void **)((longlong)pvVar4 + 0x148) != pvVar4) {
      return 0;
    }
    *(longlong *)(lVar7 + 0x148) = lVar7;
    break;
  case 9:
    param_2 = 0xf - param_2;
  case 0x14:
    if (6 < param_2 - 2) {
      return 0;
    }
    *(uint *)((longlong)pvVar4 + 0x108) = param_2;
    break;
  case 0x10:
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)((longlong)pvVar4 + 0x100) == 0) {
      return 0;
    }
    lVar7 = _CRYPTO_ccm128_tag(extraout_XMM0_Da,(longlong)(int)param_2);
    if (lVar7 == 0) {
      return 0;
    }
    *(undefined8 *)((longlong)pvVar4 + 0xfc) = 0;
    *(undefined4 *)((longlong)pvVar4 + 0x104) = 0;
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
      *(undefined4 *)((longlong)pvVar4 + 0x100) = 1;
      pvVar8 = pvVar4;
      _EVP_CIPHER_CTX_buf_noconst();
      _memcpy(pvVar8,(void *)(ulonglong)param_2,param_3);
    }
    *(uint *)((longlong)pvVar4 + 0x10c) = param_2;
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
    puVar6 = (undefined8 *)_EVP_CIPHER_CTX_buf_noconst();
    uVar2 = *(undefined8 *)((longlong)param_1 + 5);
    *puVar6 = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)puVar6 + 5) = uVar2;
    *(undefined4 *)((longlong)pvVar4 + 0x110) = 0xd;
    lVar7 = _EVP_CIPHER_CTX_buf_noconst();
    uVar1 = *(undefined1 *)(lVar7 + 0xb);
    lVar7 = _EVP_CIPHER_CTX_buf_noconst();
    uVar10 = CONCAT11(uVar1,*(undefined1 *)(lVar7 + 0xc));
    if (uVar10 < 8) {
      return 0;
    }
    uVar10 = uVar10 - 8;
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    if (iVar3 == 0) {
      if ((int)(uint)uVar10 < *(int *)((longlong)pvVar4 + 0x10c)) {
        return 0;
      }
      uVar10 = uVar10 - (short)*(int *)((longlong)pvVar4 + 0x10c);
    }
    lVar7 = _EVP_CIPHER_CTX_buf_noconst();
    *(char *)(lVar7 + 0xb) = (char)(uVar10 >> 8);
    lVar7 = _EVP_CIPHER_CTX_buf_noconst();
    *(char *)(lVar7 + 0xc) = (char)uVar10;
    return *(undefined4 *)((longlong)pvVar4 + 0x10c);
  case 0x25:
    *param_1 = 0xf - *(int *)((longlong)pvVar4 + 0x108);
  }
  uVar9 = 1;
switchD_0102425f_caseD_1:
  return uVar9;
}


