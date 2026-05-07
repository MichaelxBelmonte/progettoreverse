// Function: FUN_01073660
// Address: 01073660
// Size: 624 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_pmeth.c"


uint FUN_01073660(EVP_MD *param_1,uint param_2,uchar *param_3,RSA *param_4,uint param_5,RSA *param_6
                 )

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  EVP_PKEY *pkey;
  EVP_PKEY *unaff_RSI;
  longlong unaff_RDI;
  uchar *local_58;
  uchar *local_50;
  size_t in_stack_ffffffffffffffc8;
  size_t sVar6;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  pkey = *(EVP_PKEY **)(*(longlong *)(unaff_RDI + 0x10) + 0x28);
  iVar4 = (int)pkey;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    puVar5 = *(uchar **)(lVar1 + 0x38);
    if (puVar5 == (uchar *)0x0) {
      puVar5 = param_3;
      in_stack_ffffffffffffffc8 = param_2;
      _EVP_PKEY_size((EVP_PKEY *)param_1);
      puVar5 = _CRYPTO_malloc((int)param_1,section_00000068.sectname + 2,(int)puVar5);
      *(uchar **)(lVar1 + 0x38) = puVar5;
      if (puVar5 == (uchar *)0x0) {
        iVar4 = 0x41;
        iVar3 = 0x6b;
        goto LAB_01073809;
      }
    }
    param_2 = *(uint *)(lVar1 + 0x1c);
    iVar4 = _RSA_public_decrypt(iVar4,puVar5,(uchar *)(ulonglong)param_2,param_4,
                                in_stack_ffffffffffffffc8);
    if (iVar4 == 0) {
      return 0;
    }
    if ((uchar *)(longlong)iVar4 != param_3) {
      return 0;
    }
  }
  else {
    local_50 = param_3;
    if (*(int *)(lVar1 + 0x1c) == 1) {
      _EVP_MD_type(param_1);
      uVar2 = _RSA_verify((int)unaff_RSI,local_50,param_2,(uchar *)pkey,param_5,param_6);
      return uVar2;
    }
    pkey = unaff_RSI;
    iVar3 = _EVP_MD_size(param_1);
    if ((uchar *)(longlong)iVar3 != local_50) {
      iVar4 = 0x8f;
      iVar3 = 0xfe;
      in_stack_ffffffffffffffc8 = param_2;
LAB_01073809:
      _ERR_put_error(0x201b8ef,iVar4,iVar3,(char *)param_4,in_stack_ffffffffffffffc8);
      return 0xffffffff;
    }
    if (*(int *)(lVar1 + 0x1c) == 6) {
      puVar5 = *(uchar **)(lVar1 + 0x38);
      if (puVar5 == (uchar *)0x0) {
        sVar6 = param_2;
        _EVP_PKEY_size(pkey);
        puVar5 = _CRYPTO_malloc((int)pkey,section_00000068.sectname + 2,param_2);
        param_2 = sVar6;
        *(uchar **)(lVar1 + 0x38) = puVar5;
        if (puVar5 == (uchar *)0x0) {
          _ERR_put_error(0x201b8ef,0x41,0x6b,(char *)param_4,param_2);
          return 0xffffffff;
        }
      }
      iVar4 = _RSA_public_decrypt(iVar4,puVar5,(uchar *)((longlong)&MACH_HEADER.magic + 3),param_4,
                                  param_2);
      if (iVar4 < 1) {
        return 0;
      }
      iVar4 = _RSA_verify_PKCS1_PSS_mgf1
                        (*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x20),
                         *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 0x30));
      return (uint)(0 < iVar4);
    }
    if (*(int *)(lVar1 + 0x1c) != 5) {
      return 0xffffffff;
    }
    iVar4 = FUN_010738d0(pkey,&local_58);
    if (iVar4 < 1) {
      return 0;
    }
    param_3 = local_50;
    if (local_58 != local_50) {
      return 0;
    }
  }
  iVar4 = _memcmp(pkey,param_3,param_2);
  return (uint)(iVar4 == 0);
}


