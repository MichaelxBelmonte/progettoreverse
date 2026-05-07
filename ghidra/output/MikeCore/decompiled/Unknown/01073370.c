// Function: FUN_01073370
// Address: 01073370
// Size: 737 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_pmeth.c"


uint FUN_01073370(undefined8 param_1,ulonglong *param_2,void *param_3,RSA *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  EVP_MD *pEVar5;
  RSA *pRVar6;
  RSA *unaff_RBX;
  uint *unaff_RSI;
  longlong unaff_RDI;
  size_t line;
  uchar *to;
  uint local_48;
  uint local_44;
  EVP_MD *local_40;
  uint *in_stack_ffffffffffffffc8;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  pEVar5 = *(EVP_MD **)(*(longlong *)(unaff_RDI + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    to = (uchar *)(ulonglong)*(uint *)(lVar1 + 0x1c);
LAB_01073413:
    local_48 = _RSA_private_encrypt
                         ((int)pEVar5,(uchar *)unaff_RSI,to,param_4,(int)in_stack_ffffffffffffffc8);
  }
  else {
    pvVar4 = param_3;
    local_40 = pEVar5;
    iVar2 = _EVP_MD_size(pEVar5);
    line = (size_t)pvVar4;
    if ((void *)(longlong)iVar2 != param_3) {
      _ERR_put_error(0x201b8ef,0x8f,0x86,(char *)param_4,(int)unaff_RSI);
      return 0xffffffff;
    }
    iVar2 = _EVP_MD_type(pEVar5);
    if (iVar2 == 0x5f) {
      if (*(int *)(lVar1 + 0x1c) != 1) {
        return 0xffffffff;
      }
      uVar3 = _RSA_sign_ASN1_OCTET_STRING
                        ((int)unaff_RSI,(uchar *)((ulonglong)param_3 & 0xffffffff),(uint)&local_48,
                         (uchar *)local_40,unaff_RSI,unaff_RBX);
    }
    else {
      iVar2 = *(int *)(lVar1 + 0x1c);
      if (iVar2 != 1) {
        if (iVar2 == 6) {
          if (*(longlong *)(lVar1 + 0x38) == 0) {
            _EVP_PKEY_size((EVP_PKEY *)pEVar5);
            pvVar4 = _CRYPTO_malloc((int)pEVar5,section_00000068.sectname + 2,line);
            *(void **)(lVar1 + 0x38) = pvVar4;
            if (pvVar4 == (void *)0x0) {
              _ERR_put_error(0x201b8ef,0x41,0x6b,(char *)param_4,(int)unaff_RSI);
              return 0xffffffff;
            }
          }
          pEVar5 = local_40;
          pRVar6 = *(RSA **)(lVar1 + 0x20);
          param_4 = (RSA *)(ulonglong)*(uint *)(lVar1 + 0x30);
          iVar2 = _RSA_padding_add_PKCS1_PSS_mgf1(pRVar6,param_1,*(undefined8 *)(lVar1 + 0x28));
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          _RSA_size(pRVar6);
          to = (uchar *)((longlong)&MACH_HEADER.magic + 3);
          in_stack_ffffffffffffffc8 = unaff_RSI;
        }
        else {
          if (iVar2 != 5) {
            return 0xffffffff;
          }
          iVar2 = _EVP_PKEY_size((EVP_PKEY *)pEVar5);
          pEVar5 = (EVP_MD *)((longlong)param_3 + 1);
          if ((EVP_MD *)(longlong)iVar2 < pEVar5) {
            _ERR_put_error(0x201b8ef,0x78,0x96,(char *)param_4,(int)unaff_RSI);
            return 0xffffffff;
          }
          if (*(longlong *)(lVar1 + 0x38) == 0) {
            _EVP_PKEY_size((EVP_PKEY *)pEVar5);
            pvVar4 = _CRYPTO_malloc((int)pEVar5,section_00000068.sectname + 2,line);
            *(void **)(lVar1 + 0x38) = pvVar4;
            if (pvVar4 == (void *)0x0) {
              _ERR_put_error(0x201b8ef,0x41,0x6b,(char *)param_4,(int)unaff_RSI);
              _ERR_put_error(0x201b8ef,0x41,0x9a,(char *)param_4,(int)unaff_RSI);
              return 0xffffffff;
            }
          }
          _memcpy(pEVar5,param_3,line);
          _EVP_MD_type(pEVar5);
          iVar2 = _RSA_X931_hash_id((int)pEVar5);
          *(char *)(*(longlong *)(lVar1 + 0x38) + (longlong)param_3) = (char)iVar2;
          to = (uchar *)((longlong)&MACH_HEADER.cputype + 1);
          pEVar5 = local_40;
          in_stack_ffffffffffffffc8 = unaff_RSI;
        }
        goto LAB_01073413;
      }
      _EVP_MD_type(pEVar5);
      uVar3 = _RSA_sign((int)unaff_RSI,(uchar *)((ulonglong)param_3 & 0xffffffff),(uint)&local_44,
                        (uchar *)local_40,unaff_RSI,unaff_RBX);
      local_48 = local_44;
    }
    if ((int)uVar3 < 1) {
      return uVar3;
    }
  }
  if (-1 < (int)local_48) {
    *param_2 = (ulonglong)local_48;
    local_48 = 1;
  }
  return local_48;
}


