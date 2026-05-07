// Function: FUN_00fbb700
// Address: 00fbb700
// Size: 2431 bytes
// Class: Unknown
// String references:
//   "/usr/lib/libSystem.B.dylib"
//   "crypto/dh/dh_ameth.c"

uint64_t FUN_00fbb700(char *param_1,int64_t param_2,uint64_t param_3,EVP_MD *param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  X509_ALGOR *pXVar6;
  EVP_CIPHER *pEVar7;
  EVP_MD *pEVar8;
  ASN1_OBJECT *pAVar9;
  int *piVar10;
  ASN1_INTEGER *pAVar11;
  EVP_PKEY *pEVar12;
  ASN1_INTEGER *pAVar13;
  DH *pDVar14;
  void *pval;
  char *ctx;
  uint64_t uVar15;
  EVP_CIPHER_CTX *str;
  ASN1_TYPE *pAVar16;
  BIGNUM *pBVar17;
  qword *out;
  uint64_t uVar18;
  int unaff_ESI;
  long len;
  void **ppvVar19;
  DH *local_68;
  EVP_MD *local_60;
  ASN1_OBJECT *local_58;
  EVP_CIPHER_CTX *local_50;
  int in_stack_ffffffffffffffb8;
  uint32_t in_stack_ffffffffffffffbc;
  int64_t local_40;
  DH *local_38;
  
  if (unaff_ESI == 8) {
    *(void*)&((EVP_CIPHER_CTX *)param_1)->cipher = 1;
    return 1;
  }
  if (unaff_ESI != 7) {
    return 0xfffffffe;
  }
  if (param_2 == 0) {
    local_40 = 0;
    lVar5 = _CMS_RecipientInfo_get0_pkey_ctx();
    if (lVar5 == 0) {
      return 0;
    }
    _EVP_PKEY_CTX_get0_pkey();
    ctx = (char *)0x0;
    ppvVar19 = (void **)0x0;
    pXVar6 = (X509_ALGOR *)0x0;
    iVar1 = _CMS_RecipientInfo_kari_get0_orig_id();
    if (iVar1 != 0) {
      ctx = (char *)CONCAT44(in_stack_ffffffffffffffbc,in_stack_ffffffffffffffb8);
      pAVar11 = (ASN1_INTEGER *)0x0;
      _X509_ALGOR_get0((ASN1_OBJECT **)ctx,(int *)0x0,ppvVar19,pXVar6);
      iVar1 = (int)ppvVar19;
      pAVar9 = _OBJ_nid2obj((int)ctx);
      if (local_58 == pAVar9) {
        pAVar13 = _BN_to_ASN1_INTEGER((BIGNUM *)ctx,pAVar11);
        if (pAVar13 != (ASN1_INTEGER *)0x0) {
          uVar4 = _i2d_ASN1_INTEGER((ASN1_INTEGER *)ctx,(uchar **)pAVar11);
          _ASN1_INTEGER_free((ASN1_INTEGER *)ctx);
          if (0 < (int)uVar4) {
            _ASN1_STRING_set0((ASN1_STRING *)ctx,(void *)(uint64_t)uVar4,iVar1);
            uVar15 = *(uint64_t *)&local_50->encrypt & 0xfffffffffffffff0 | 8;
            *(uint64_t *)&local_50->encrypt = uVar15;
            local_40 = 0;
            _OBJ_nid2obj((int)uVar15);
            _X509_ALGOR_set0((X509_ALGOR *)0x0,(ASN1_OBJECT *)0xffffffff,iVar1,pXVar6);
            goto LAB_00fbb9c8;
          }
        }
      }
      else {
LAB_00fbb9c8:
        ctx = (char *)((int64_t)&dylib_command_00000ff0.dylib.compatibility_version + 2);
        iVar1 = _EVP_PKEY_CTX_ctrl(0x1006,0x400,0xfffffffe,0);
        if (0 < iVar1) {
          ctx = "/usr/lib/libSystem.B.dylib";
          iVar3 = _EVP_PKEY_CTX_ctrl("/usr/lib/libSystem.B.dylib",0x400,0,&local_60);
          if (iVar3 != 0) {
            if (iVar1 != 2) {
              uVar18 = 0;
              if (iVar1 != 1) goto LAB_00fbbebf;
              ctx = (char *)((int64_t)&dylib_command_00000ff0.dylib.compatibility_version + 2);
              iVar1 = _EVP_PKEY_CTX_ctrl(0x1006,0x400,2,0);
              if (iVar1 < 1) goto LAB_00fbbebc;
            }
            if (local_60 == (EVP_MD *)0x0) {
              local_60 = _EVP_sha1();
              ctx = (char *)((int64_t)&dylib_command_00000ff0.dylib.compatibility_version + 3);
              iVar1 = _EVP_PKEY_CTX_ctrl(0x1007,0x400,0,local_60);
              if (iVar1 < 1) goto LAB_00fbbebc;
            }
            else {
              iVar1 = _EVP_MD_type((EVP_MD *)ctx);
              uVar18 = 0;
              if (iVar1 != 0x40) goto LAB_00fbbebf;
            }
            iVar1 = _CMS_RecipientInfo_kari_get0_alg();
            if (iVar1 != 0) {
              _CMS_RecipientInfo_kari_get0_ctx();
              _EVP_CIPHER_CTX_cipher((EVP_CIPHER_CTX *)ctx);
              _EVP_CIPHER_type((EVP_CIPHER *)ctx);
              pAVar9 = _OBJ_nid2obj((int)ctx);
              pAVar16 = (ASN1_TYPE *)&segment_command_000003d8.fileoff;
              ctx = "lib/libSystem.B.dylib";
              iVar1 = _EVP_PKEY_CTX_ctrl("lib/libSystem.B.dylib",0x400,0,pAVar9);
              if (0 < iVar1) {
                iVar1 = _EVP_CIPHER_CTX_key_length((EVP_CIPHER_CTX *)ctx);
                pDVar14 = (DH *)_X509_ALGOR_new();
                if (pDVar14 != (DH *)0x0) {
                  pAVar9 = _OBJ_nid2obj((int)ctx);
                  *(ASN1_OBJECT **)pDVar14 = pAVar9;
                  pBVar17 = (BIGNUM *)_ASN1_TYPE_new();
                  pDVar14->p = pBVar17;
                  str = (EVP_CIPHER_CTX *)ctx;
                  if ((pBVar17 == (BIGNUM *)0x0) ||
                     (iVar3 = _EVP_CIPHER_param_to_asn1((EVP_CIPHER_CTX *)ctx,pAVar16),
                     str = (EVP_CIPHER_CTX *)ctx, iVar3 < 1)) {
LAB_00fbc006:
                    ctx = (char *)str;
                    uVar18 = 0;
                  }
                  else {
                    iVar3 = _ASN1_TYPE_get((ASN1_TYPE *)ctx);
                    if (iVar3 == 0) {
                      _ASN1_TYPE_free((ASN1_TYPE *)ctx);
                      pDVar14->p = (BIGNUM *)0x0;
                    }
                    ctx = "usr/lib/libSystem.B.dylib";
                    iVar1 = _EVP_PKEY_CTX_ctrl("usr/lib/libSystem.B.dylib",0x400,iVar1,0);
                    if (0 < iVar1) {
                      uVar18 = 0;
                      if (local_68 == (DH *)0x0) {
                        pval = (void *)0x0;
                        iVar1 = 0;
                      }
                      else {
                        local_38 = pDVar14;
                        iVar1 = _ASN1_STRING_length((ASN1_STRING *)ctx);
                        _ASN1_STRING_get0_data();
                        ctx = (char *)((int64_t)&section_00000338.offset + 2);
                        pval = (void *)_CRYPTO_memdup(0x36a,"crypto/dh/dh_ameth.c");
                        if (pval == (void *)0x0) {
                          uVar18 = 0;
                          goto LAB_00fbbebf;
                        }
                      }
                      out = &segment_command_000003d8.fileoff;
                      str = (EVP_CIPHER_CTX *)0x100b;
                      iVar3 = _EVP_PKEY_CTX_ctrl();
                      ctx = (char *)str;
                      if (iVar3 < 1) goto LAB_00fbbebf;
                      local_40 = 0;
                      uVar4 = _i2d_X509_ALGOR((X509_ALGOR *)str,(uchar **)out);
                      ctx = (char *)str;
                      if ((local_40 != 0) && (uVar4 != 0)) {
                        ctx = (char *)_ASN1_STRING_new();
                        if ((EVP_CIPHER_CTX *)ctx != (EVP_CIPHER_CTX *)0x0) {
                          _ASN1_STRING_set0((ASN1_STRING *)str,(void *)(uint64_t)uVar4,iVar1);
                          local_40 = 0;
                          _OBJ_nid2obj((int)str);
                          _X509_ALGOR_set0((X509_ALGOR *)ctx,(ASN1_OBJECT *)&MACH_HEADER.ncmds,iVar1
                                           ,pval);
                          uVar18 = 1;
                          goto LAB_00fbbebf;
                        }
                        goto LAB_00fbc006;
                      }
                    }
                    uVar18 = 0;
                  }
                  goto LAB_00fbbebf;
                }
              }
            }
          }
        }
      }
    }
LAB_00fbbebc:
    uVar18 = 0;
LAB_00fbbebf:
    _CRYPTO_free(ctx);
    _X509_ALGOR_free((X509_ALGOR *)ctx);
    _CRYPTO_free(ctx);
    return uVar18;
  }
  if (param_2 != 1) {
    return 0xfffffffe;
  }
  lVar5 = _CMS_RecipientInfo_get0_pkey_ctx();
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = _EVP_PKEY_CTX_get0_peerkey();
  if (lVar5 != 0) {
LAB_00fbb765:
    iVar1 = _CMS_RecipientInfo_kari_get0_alg();
    if (iVar1 == 0) goto LAB_00fbba93;
    iVar1 = _OBJ_obj2nid((ASN1_OBJECT *)param_1);
    if (iVar1 == 0xf5) {
      param_1 = (char *)((int64_t)&dylib_command_00000ff0.dylib.compatibility_version + 2);
      param_4 = (EVP_MD *)0x0;
      iVar1 = _EVP_PKEY_CTX_ctrl(0x1006,0x400);
      if (iVar1 < 1) {
LAB_00fbba93:
        _X509_ALGOR_free((X509_ALGOR *)param_1);
        goto LAB_00fbbcd5;
      }
      param_4 = _EVP_sha1();
      param_1 = (char *)((int64_t)&dylib_command_00000ff0.dylib.compatibility_version + 3);
      len = 0;
      iVar1 = _EVP_PKEY_CTX_ctrl(0x1007,0x400);
      if ((iVar1 < 1) ||
         (piVar10 = *(int **)(CONCAT44(in_stack_ffffffffffffffbc,in_stack_ffffffffffffffb8) + 8),
         *piVar10 != 0x10)) goto LAB_00fbba93;
      piVar10 = *(int **)(piVar10 + 2);
      param_1 = *(char **)(piVar10 + 2);
      local_50 = (EVP_CIPHER_CTX *)param_1;
      pXVar6 = _d2i_X509_ALGOR((X509_ALGOR **)param_1,(uchar **)(int64_t)*piVar10,len);
      if ((pXVar6 == (X509_ALGOR *)0x0) || (lVar5 = _CMS_RecipientInfo_kari_get0_ctx(), lVar5 == 0))
      goto LAB_00fbba93;
      _OBJ_obj2nid((ASN1_OBJECT *)param_1);
      _OBJ_nid2sn((int)param_1);
      pEVar7 = _EVP_get_cipherbyname(param_1);
      if ((pEVar7 == (EVP_CIPHER *)0x0) ||
         (uVar2 = _EVP_CIPHER_flags((EVP_CIPHER *)param_1), (uVar2 & 0xf0007) != 0x10002))
      goto LAB_00fbba93;
      pAVar16 = (ASN1_TYPE *)0x0;
      param_1 = (char *)0x0;
      iVar1 = _EVP_EncryptInit_ex((EVP_CIPHER_CTX *)0x0,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                  (uchar *)param_4,
                                  (uchar *)CONCAT44(in_stack_ffffffffffffffbc,
                                                    in_stack_ffffffffffffffb8));
      if ((iVar1 == 0) ||
         (iVar1 = _EVP_CIPHER_asn1_to_param((EVP_CIPHER_CTX *)param_1,pAVar16), iVar1 < 1))
      goto LAB_00fbba93;
      iVar1 = _EVP_CIPHER_CTX_key_length((EVP_CIPHER_CTX *)param_1);
      param_1 = "usr/lib/libSystem.B.dylib";
      param_4 = (EVP_MD *)0x0;
      iVar1 = _EVP_PKEY_CTX_ctrl("usr/lib/libSystem.B.dylib",0x400,iVar1);
      if (iVar1 < 1) goto LAB_00fbba93;
      _EVP_CIPHER_type((EVP_CIPHER *)param_1);
      param_4 = (EVP_MD *)_OBJ_nid2obj((int)param_1);
      iVar3 = 0;
      param_1 = "lib/libSystem.B.dylib";
      iVar1 = _EVP_PKEY_CTX_ctrl("lib/libSystem.B.dylib",0x400,0);
      if (iVar1 < 1) goto LAB_00fbba93;
      if (local_58 == (ASN1_OBJECT *)0x0) {
        pEVar8 = (EVP_MD *)0x0;
      }
      else {
        iVar3 = _ASN1_STRING_length((ASN1_STRING *)param_1);
        _ASN1_STRING_get0_data();
        param_1 = (char *)((int64_t)&section_00000298.flags + 2);
        pEVar8 = (EVP_MD *)_CRYPTO_memdup(0x2da,"crypto/dh/dh_ameth.c");
        if (pEVar8 == (EVP_MD *)0x0) goto LAB_00fbba93;
      }
      param_4 = pEVar8;
      pXVar6 = (X509_ALGOR *)0x100b;
      iVar1 = _EVP_PKEY_CTX_ctrl("r/lib/libSystem.B.dylib",0x400,iVar3);
      _X509_ALGOR_free(pXVar6);
      _CRYPTO_free(pXVar6);
      if (0 < iVar1) {
        return 1;
      }
    }
    else {
      param_1 = "crypto/dh/dh_ameth.c";
      _ERR_put_error(0x200c2bd,0x70,0x2b2,(char *)param_4,in_stack_ffffffffffffffb8);
      _X509_ALGOR_free((X509_ALGOR *)param_1);
LAB_00fbbcd5:
      _CRYPTO_free(param_1);
    }
    iVar1 = 0x71;
    iVar3 = 0x300;
    goto LAB_00fbbcfb;
  }
  ppvVar19 = (void **)0x0;
  param_4 = (EVP_MD *)0x0;
  iVar1 = _CMS_RecipientInfo_kari_get0_orig_id(0,&local_40);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_68 == (DH *)0x0) {
    return 0;
  }
  if (local_40 == 0) {
    return 0;
  }
  _X509_ALGOR_get0((ASN1_OBJECT **)local_68,(int *)&local_58,ppvVar19,(X509_ALGOR *)param_4);
  iVar1 = _OBJ_obj2nid((ASN1_OBJECT *)local_68);
  if ((((iVar1 == 0x398) && ((int)local_60 != 5)) &&
      (piVar10 = (int *)_EVP_PKEY_CTX_get0_pkey(), piVar10 != (int *)0x0)) && (*piVar10 == 0x398)) {
    local_38 = _DH_new();
    if (local_38 == (DH *)0x0) {
LAB_00fbbb60:
      local_38 = (DH *)0x0;
    }
    else {
      iVar1 = FUN_00fba860();
      if (iVar1 == 0) {
        _DH_free(local_68);
        goto LAB_00fbbb60;
      }
    }
    iVar1 = _ASN1_STRING_length((ASN1_STRING *)local_68);
    local_50 = (EVP_CIPHER_CTX *)_ASN1_STRING_get0_data();
    if ((local_50 == (EVP_CIPHER_CTX *)0x0) || (iVar1 == 0)) {
LAB_00fbbf51:
      _ASN1_INTEGER_free((ASN1_INTEGER *)local_68);
      _EVP_PKEY_free((EVP_PKEY *)local_68);
      goto LAB_00fbbd17;
    }
    pBVar17 = (BIGNUM *)(int64_t)iVar1;
    pAVar11 = _d2i_ASN1_INTEGER((ASN1_INTEGER **)local_68,(uchar **)pBVar17,(long)ppvVar19);
    if (pAVar11 == (ASN1_INTEGER *)0x0) {
      local_68 = (DH *)0x200c2bd;
      _ERR_put_error(0x200c2bd,0x68,0x285,(char *)param_4,in_stack_ffffffffffffffb8);
      goto LAB_00fbbf51;
    }
    pBVar17 = _ASN1_INTEGER_to_BN((ASN1_INTEGER *)local_68,pBVar17);
    local_38->pub_key = pBVar17;
    if (pBVar17 == (BIGNUM *)0x0) {
      local_68 = (DH *)0x200c2bd;
      _ERR_put_error(0x200c2bd,0x6d,0x28b,(char *)param_4,in_stack_ffffffffffffffb8);
      goto LAB_00fbbf51;
    }
    local_68 = local_38;
    pEVar12 = _EVP_PKEY_new();
    if (pEVar12 == (EVP_PKEY *)0x0) goto LAB_00fbbf51;
    param_1 = *(char **)(piVar10 + 4);
    _EVP_PKEY_assign((EVP_PKEY *)param_1,(int)local_38,(char *)ppvVar19);
    iVar1 = _EVP_PKEY_derive_set_peer();
    _ASN1_INTEGER_free((ASN1_INTEGER *)param_1);
    _EVP_PKEY_free((EVP_PKEY *)param_1);
    _DH_free((DH *)param_1);
    if (0 < iVar1) goto LAB_00fbb765;
  }
  else {
    _ASN1_INTEGER_free((ASN1_INTEGER *)local_68);
    _EVP_PKEY_free((EVP_PKEY *)local_68);
LAB_00fbbd17:
    _DH_free(local_68);
  }
  iVar1 = 0x6f;
  iVar3 = 0x2fa;
LAB_00fbbcfb:
  _ERR_put_error(0x200c2bd,iVar1,iVar3,(char *)param_4,in_stack_ffffffffffffffb8);
  return 0;
}

