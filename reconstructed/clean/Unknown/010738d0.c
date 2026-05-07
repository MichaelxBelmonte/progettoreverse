// Function: FUN_010738d0
// Address: 010738d0
// Size: 502 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_pmeth.c"

uint FUN_010738d0(EVP_MD *param_1,void*param_2,RSA *param_3)

{
  byte bVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uchar *from;
  EVP_MD *md;
  uchar *arg1;
  int64_t this_ptr;
  size_t sVar5;
  RSA *pRVar6;
  int unaff_R12D;
  void *pvVar7;
  uint local_48;
  
  lVar2 = *(int64_t *)(this_ptr + 0x28);
  if (*(int64_t *)(lVar2 + 0x20) == 0) {
    local_48 = _RSA_public_decrypt((int)*(void*)(*(int64_t *)(this_ptr + 0x10) + 0x28),
                                   arg1,(uchar *)(uint64_t)*(uint *)(lVar2 + 0x1c),param_3,
                                   unaff_R12D);
  }
  else {
    if (*(int *)(lVar2 + 0x1c) != 1) {
      if (*(int *)(lVar2 + 0x1c) != 5) {
        return 0xffffffff;
      }
      from = *(uchar **)(lVar2 + 0x38);
      if (from == (uchar *)0x0) {
        pRVar6 = param_3;
        _EVP_PKEY_size((EVP_PKEY *)param_1);
        from = _CRYPTO_malloc((int)param_1,section_00000068.sectname + 2,(int)pRVar6);
        *(uchar **)(lVar2 + 0x38) = from;
        if (from == (uchar *)0x0) {
          _ERR_put_error(0x201b8ef,0x41,0x6b,(char *)param_3,unaff_R12D);
          return 0xffffffff;
        }
      }
      md = *(EVP_MD **)(*(int64_t *)(this_ptr + 0x10) + 0x28);
      sVar5 = 5;
      iVar3 = _RSA_public_decrypt((int)md,from,(uchar *)((int64_t)&MACH_HEADER.cputype + 1),param_3
                                  ,unaff_R12D);
      if (iVar3 < 1) {
        return 0;
      }
      pvVar7 = (void *)(uint64_t)(iVar3 - 1U);
      bVar1 = *(byte *)(*(int64_t *)(lVar2 + 0x38) + (int64_t)pvVar7);
      _EVP_MD_type(md);
      uVar4 = _RSA_X931_hash_id((int)md);
      if (uVar4 != bVar1) {
        _ERR_put_error(0x201b8ef,100,0xd2,(char *)param_3,unaff_R12D);
        return 0;
      }
      uVar4 = _EVP_MD_size(md);
      if (iVar3 - 1U != uVar4) {
        _ERR_put_error(0x201b8ef,0x8f,0xd7,(char *)param_3,unaff_R12D);
        return 0;
      }
      if (arg1 != (uchar *)0x0) {
        _memcpy(md,pvVar7,sVar5);
      }
      goto LAB_01073a3e;
    }
    _EVP_MD_type(param_1);
    iVar3 = _int_rsa_verify();
    if (iVar3 < 1) {
      return 0;
    }
  }
  if ((int)local_48 < 0) {
    return local_48;
  }
  pvVar7 = (void *)(uint64_t)local_48;
LAB_01073a3e:
  *param_2 = pvVar7;
  return 1;
}

