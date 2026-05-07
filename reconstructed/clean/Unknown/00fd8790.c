// Function: FUN_00fd8790
// Address: 00fd8790
// Size: 2576 bytes
// Class: Unknown
// String references:
//   "crypto/ec/ec_ameth.c"

uint64_t FUN_00fd8790(void*param_1,int64_t param_2,int param_3,EVP_MD *param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int64_t lVar7;
  X509_ALGOR *pXVar8;
  EVP_CIPHER *pEVar9;
  ASN1_TYPE *pAVar10;
  ASN1_STRING *alg;
  EC_KEY *pEVar11;
  EVP_PKEY *pEVar12;
  ASN1_OBJECT *pAVar13;
  dword *name;
  EVP_CIPHER_CTX *pEVar14;
  EVP_CIPHER_CTX *a;
  ASN1_STRING *str;
  uchar **ppuVar15;
  EC_GROUP *pptype;
  ASN1_TYPE *pAVar16;
  qword *out;
  ec_key_st *key;
  int unaff_ESI;
  long lVar17;
  uint64_t uVar18;
  void **ppvVar19;
  EVP_MD *pEVar20;
  uint64_t uVar21;
  EVP_MD *local_68;
  int local_5c;
  int in_stack_ffffffffffffffa8;
  uint32_t in_stack_ffffffffffffffac;
  char **local_50;
  ASN1_STRING *local_48;
  ASN1_OBJECT *local_40;
  EVP_CIPHER_CTX *local_38;
  
  uVar21 = 0xfffffffe;
  if (9 < unaff_ESI - 1U) goto switchD_00fd87ca_caseD_2;
  pAVar13 = (ASN1_OBJECT *)
            ((int64_t)&switchD_00fd87ca::switchdataD_00fd91a0 +
            (int64_t)(int)(&switchD_00fd87ca::switchdataD_00fd91a0)[unaff_ESI - 1U]);
  switch(unaff_ESI) {
  case 1:
    uVar21 = 1;
    if (param_2 != 0) break;
    pAVar13 = (ASN1_OBJECT *)&stack0xffffffffffffffa8;
    _PKCS7_SIGNER_INFO_get0_algs(pAVar13,&local_48);
    goto joined_r0x00fd884a;
  case 3:
    iVar3 = _EVP_PKEY_id();
    if (iVar3 == 0x494) {
      *param_1 = 0x477;
      uVar21 = 1;
    }
    else {
      *param_1 = 0x2a0;
      uVar21 = 1;
    }
    break;
  case 5:
    uVar21 = 1;
    if (param_2 != 0) break;
    pAVar13 = (ASN1_OBJECT *)&local_48;
    param_3 = (int)&stack0xffffffffffffffa8;
    _CMS_SignerInfo_get0_algs(pAVar13,0);
joined_r0x00fd884a:
    if ((local_48 != (ASN1_STRING *)0x0) &&
       (uVar21 = 1, lVar7._0_4_ = local_48->length, lVar7._4_4_ = local_48->type, lVar7 != 0)) {
      iVar3 = _OBJ_obj2nid(pAVar13);
      iVar4 = (int)pAVar13;
      if (iVar3 != 0) {
        _EVP_PKEY_id();
        iVar3 = _OBJ_find_sigid_by_algs();
        if (iVar3 != 0) {
          _OBJ_nid2obj(iVar4);
          _X509_ALGOR_set0((X509_ALGOR *)0x0,(ASN1_OBJECT *)0xffffffff,param_3,param_4);
          break;
        }
      }
    }
    uVar21 = 0xffffffff;
    break;
  case 7:
    if (param_2 == 0) {
      local_40 = (ASN1_OBJECT *)0x0;
      lVar7 = _CMS_RecipientInfo_get0_pkey_ctx();
      if (lVar7 != 0) {
        _EVP_PKEY_CTX_get0_pkey();
        uVar21 = 0;
        ppvVar19 = (void **)0x0;
        pXVar8 = (X509_ALGOR *)0x0;
        iVar3 = _CMS_RecipientInfo_kari_get0_orig_id(0);
        pEVar14 = (EVP_CIPHER_CTX *)0x0;
        if (iVar3 != 0) {
          ppuVar15 = (uchar **)0x0;
          _X509_ALGOR_get0((ASN1_OBJECT **)local_48,(int *)0x0,ppvVar19,pXVar8);
          iVar3 = (int)ppvVar19;
          pAVar13 = _OBJ_nid2obj((int)local_48);
          if ((ASN1_OBJECT *)CONCAT44(in_stack_ffffffffffffffac,in_stack_ffffffffffffffa8) ==
              pAVar13) {
            iVar4 = _i2o_ECPublicKey((EC_KEY *)local_48,ppuVar15);
            if (0 < iVar4) {
              ppuVar15 = (uchar **)((int64_t)&section_00000338.addr + 2);
              local_50 = _CRYPTO_malloc((int)local_48,(char *)((int64_t)&section_00000338.addr + 2)
                                        ,iVar3);
              local_40 = (ASN1_OBJECT *)local_50;
              if ((local_50 != (char **)0x0) &&
                 (uVar6 = _i2o_ECPublicKey((EC_KEY *)local_48,ppuVar15), 0 < (int)uVar6)) {
                _ASN1_STRING_set0(local_48,(void *)(uint64_t)uVar6,iVar3);
                uVar21 = *(uint64_t *)&local_38->encrypt & 0xfffffffffffffff0 | 8;
                *(uint64_t *)&local_38->encrypt = uVar21;
                local_40 = (ASN1_OBJECT *)0x0;
                _OBJ_nid2obj((int)uVar21);
                _X509_ALGOR_set0((X509_ALGOR *)0x0,(ASN1_OBJECT *)0xffffffff,iVar3,pXVar8);
                goto LAB_00fd8a40;
              }
            }
          }
          else {
LAB_00fd8a40:
            iVar3 = _EVP_PKEY_CTX_ctrl(0x1004,0x400,0xfffffffe,0);
            uVar21 = 0;
            pEVar14 = (EVP_CIPHER_CTX *)0x0;
            if (iVar3 < 1) goto LAB_00fd909d;
            iVar4 = _EVP_PKEY_CTX_ctrl(0x1006,0x400,0,&local_68);
            if (iVar4 != 0) {
              uVar21 = 0;
              uVar6 = _EVP_PKEY_CTX_ctrl(0x1003,0x400,0xfffffffe,0);
              pEVar14 = (EVP_CIPHER_CTX *)0x0;
              if ((int)uVar6 < 0) goto LAB_00fd909d;
              if (uVar6 == 0) {
                pAVar16 = (ASN1_TYPE *)((int64_t)&section_00000388.size + 2);
              }
              else {
                pAVar16 = (ASN1_TYPE *)(uint64_t)uVar6;
                if (uVar6 == 1) {
                  pAVar16 = (ASN1_TYPE *)((int64_t)&section_00000388.size + 3);
                }
              }
              if (iVar3 == 1) {
                uVar21 = 0;
                iVar3 = _EVP_PKEY_CTX_ctrl(0x1004,0x400,2,0);
                pEVar14 = (EVP_CIPHER_CTX *)0x0;
                if (iVar3 < 1) goto LAB_00fd909d;
                if (local_68 == (EVP_MD *)0x0) {
                  local_68 = _EVP_sha1();
                  pEVar14 = (EVP_CIPHER_CTX *)
                            ((int64_t)&dylib_command_00000ff0.dylib.compatibility_version + 1);
                  iVar3 = _EVP_PKEY_CTX_ctrl(0x1005,0x400,0,local_68);
                  if (iVar3 < 1) goto LAB_00fd909b;
                }
                iVar3 = _CMS_RecipientInfo_kari_get0_alg();
                if (iVar3 != 0) {
                  _EVP_MD_type((EVP_MD *)pEVar14);
                  iVar3 = _OBJ_find_sigid_by_algs();
                  if (iVar3 != 0) {
                    _CMS_RecipientInfo_kari_get0_ctx();
                    _EVP_CIPHER_CTX_cipher(pEVar14);
                    _EVP_CIPHER_type((EVP_CIPHER *)pEVar14);
                    iVar3 = _EVP_CIPHER_CTX_key_length(pEVar14);
                    iVar4 = (int)pEVar14;
                    pEVar14 = (EVP_CIPHER_CTX *)_X509_ALGOR_new();
                    uVar21 = 0;
                    if (pEVar14 != (EVP_CIPHER_CTX *)0x0) {
                      pEVar9 = (EVP_CIPHER *)_OBJ_nid2obj(iVar4);
                      pEVar14->cipher = pEVar9;
                      pAVar10 = _ASN1_TYPE_new();
                      pEVar14->engine = (ENGINE *)pAVar10;
                      if ((pAVar10 != (ASN1_TYPE *)0x0) &&
                         (a = pEVar14, iVar4 = _EVP_CIPHER_param_to_asn1(pEVar14,pAVar16), 0 < iVar4
                         )) {
                        iVar4 = _ASN1_TYPE_get((ASN1_TYPE *)a);
                        if (iVar4 == 0) {
                          _ASN1_TYPE_free((ASN1_TYPE *)a);
                          pEVar14->engine = (ENGINE *)0x0;
                        }
                        uVar21 = 0;
                        iVar4 = _EVP_PKEY_CTX_ctrl(0x1007,0x400,iVar3,0);
                        if ((0 < iVar4) &&
                           (iVar3 = _CMS_SharedInfo_encode(iVar3,local_50), iVar3 != 0)) {
                          out = &segment_command_000003d8.fileoff;
                          str = (ASN1_STRING *)0x1009;
                          pAVar13 = local_40;
                          iVar4 = _EVP_PKEY_CTX_ctrl();
                          if (0 < iVar4) {
                            local_40 = (ASN1_OBJECT *)0x0;
                            uVar6 = _i2d_X509_ALGOR((X509_ALGOR *)str,(uchar **)out);
                            if (((local_40 != (ASN1_OBJECT *)0x0) && (uVar6 != 0)) &&
                               (alg = _ASN1_STRING_new(), alg != (ASN1_STRING *)0x0)) {
                              _ASN1_STRING_set0(str,(void *)(uint64_t)uVar6,iVar3);
                              local_40 = (ASN1_OBJECT *)0x0;
                              _OBJ_nid2obj((int)str);
                              _X509_ALGOR_set0((X509_ALGOR *)alg,(ASN1_OBJECT *)&MACH_HEADER.ncmds,
                                               iVar3,pAVar13);
                              uVar21 = 1;
                            }
                          }
                        }
                      }
                      goto LAB_00fd909d;
                    }
                  }
                }
              }
            }
          }
LAB_00fd909b:
          uVar21 = 0;
          pEVar14 = (EVP_CIPHER_CTX *)0x0;
        }
LAB_00fd909d:
        _CRYPTO_free(pEVar14);
        _X509_ALGOR_free((X509_ALGOR *)pEVar14);
        break;
      }
    }
    else {
      if (param_2 != 1) break;
      lVar7 = _CMS_RecipientInfo_get0_pkey_ctx();
      if (lVar7 == 0) goto LAB_00fd9182;
      lVar7 = _EVP_PKEY_CTX_get0_peerkey();
      if (lVar7 == 0) {
        uVar21 = 0;
        ppvVar19 = (void **)0x0;
        param_4 = (EVP_MD *)0x0;
        iVar3 = _CMS_RecipientInfo_kari_get0_orig_id(0,&local_68);
        if (iVar3 == 0) break;
        if ((local_40 == (ASN1_OBJECT *)0x0) || (local_68 == (EVP_MD *)0x0)) goto LAB_00fd9182;
        local_38 = (EVP_CIPHER_CTX *)0x0;
        pptype = (EC_GROUP *)&stack0xffffffffffffffa8;
        _X509_ALGOR_get0((ASN1_OBJECT **)local_40,(int *)pptype,ppvVar19,(X509_ALGOR *)param_4);
        lVar17 = (long)ppvVar19;
        iVar3 = _OBJ_obj2nid(local_40);
        pAVar13 = local_40;
        if (iVar3 == 0x198) {
          if ((local_5c == 5) || (local_5c == -1)) {
            lVar7 = _EVP_PKEY_CTX_get0_pkey();
            pAVar13 = local_40;
            if (lVar7 != 0) {
              _EC_KEY_get0_group((EC_KEY *)local_40);
              local_38 = (EVP_CIPHER_CTX *)_EC_KEY_new();
              pAVar13 = local_40;
              if ((local_38 != (EVP_CIPHER_CTX *)0x0) &&
                 (iVar3 = _EC_KEY_set_group((EC_KEY *)local_40,pptype), pAVar13 = local_40,
                 iVar3 != 0)) goto LAB_00fd90d8;
            }
            goto LAB_00fd9155;
          }
          local_38 = (EVP_CIPHER_CTX *)FUN_00fd95b0();
          pAVar13 = local_40;
          if (local_38 == (EVP_CIPHER_CTX *)0x0) goto LAB_00fd9155;
LAB_00fd90d8:
          iVar3 = _ASN1_STRING_length((ASN1_STRING *)pAVar13);
          lVar7 = _ASN1_STRING_get0_data();
          if ((lVar7 == 0) || (iVar3 == 0)) goto LAB_00fd9155;
          key = (ec_key_st *)(int64_t)iVar3;
          pEVar11 = _o2i_ECPublicKey((EC_KEY **)pAVar13,(uchar **)key,lVar17);
          if ((pEVar11 == (EC_KEY *)0x0) || (pEVar12 = _EVP_PKEY_new(), pEVar12 == (EVP_PKEY *)0x0))
          goto LAB_00fd9155;
          _EVP_PKEY_set1_EC_KEY((EVP_PKEY *)pAVar13,key);
          iVar3 = _EVP_PKEY_derive_set_peer();
          _EC_KEY_free((EC_KEY *)pAVar13);
          _EVP_PKEY_free((EVP_PKEY *)pAVar13);
          if (0 < iVar3) goto LAB_00fd88e3;
        }
        else {
LAB_00fd9155:
          _EC_KEY_free((EC_KEY *)pAVar13);
          _EVP_PKEY_free((EVP_PKEY *)pAVar13);
        }
        iVar3 = 0x95;
        iVar4 = 0x32b;
      }
      else {
LAB_00fd88e3:
        iVar3 = _CMS_RecipientInfo_kari_get0_alg();
        bVar2 = false;
        if (iVar3 != 0) {
          iVar3 = _OBJ_obj2nid(pAVar13);
          pEVar20 = param_4;
          if ((iVar3 != 0) && (iVar3 = _OBJ_find_sigid_algs(), pEVar20 = param_4, iVar3 != 0)) {
            if ((int)local_38 == 0x3b2) {
              uVar18 = 0;
            }
            else {
              if ((int)local_38 != 0x3b3) goto LAB_00fd8e2e;
              uVar18 = 1;
            }
            pEVar20 = (EVP_MD *)0x0;
            iVar3 = _EVP_PKEY_CTX_ctrl(0x1003,0x400,uVar18);
            if (0 < iVar3) {
              name = &dylib_command_00000ff0.dylib.compatibility_version;
              pEVar20 = (EVP_MD *)0x0;
              iVar3 = _EVP_PKEY_CTX_ctrl(0x1004,0x400);
              if (0 < iVar3) {
                _OBJ_nid2sn((int)name);
                param_4 = _EVP_get_digestbyname((char *)name);
                if (param_4 != (EVP_MD *)0x0) {
                  lVar17 = 0;
                  iVar3 = _EVP_PKEY_CTX_ctrl(0x1005,0x400);
                  pEVar20 = param_4;
                  if (0 < iVar3) {
                    bVar2 = false;
                    if (*(int *)local_48->data == 0x10) {
                      piVar1 = *(int **)((int64_t)local_48->data + 8);
                      pEVar14 = *(EVP_CIPHER_CTX **)(piVar1 + 2);
                      bVar2 = false;
                      local_38 = pEVar14;
                      pXVar8 = _d2i_X509_ALGOR((X509_ALGOR **)pEVar14,(uchar **)(int64_t)*piVar1,
                                               lVar17);
                      if ((pXVar8 != (X509_ALGOR *)0x0) &&
                         (lVar7 = _CMS_RecipientInfo_kari_get0_ctx(), lVar7 != 0)) {
                        _OBJ_obj2nid((ASN1_OBJECT *)pEVar14);
                        _OBJ_nid2sn((int)pEVar14);
                        pEVar9 = _EVP_get_cipherbyname((char *)pEVar14);
                        if ((pEVar9 != (EVP_CIPHER *)0x0) &&
                           (uVar5 = _EVP_CIPHER_flags((EVP_CIPHER *)pEVar14),
                           (uVar5 & 0xf0007) == 0x10002)) {
                          bVar2 = false;
                          pAVar16 = (ASN1_TYPE *)0x0;
                          pEVar14 = (EVP_CIPHER_CTX *)0x0;
                          iVar3 = _EVP_EncryptInit_ex((EVP_CIPHER_CTX *)0x0,(EVP_CIPHER *)0x0,
                                                      (ENGINE *)0x0,(uchar *)param_4,
                                                      (uchar *)CONCAT44(in_stack_ffffffffffffffac,
                                                                        in_stack_ffffffffffffffa8));
                          if ((iVar3 != 0) &&
                             (iVar3 = _EVP_CIPHER_asn1_to_param(pEVar14,pAVar16), 0 < iVar3)) {
                            uVar6 = _EVP_CIPHER_CTX_key_length(pEVar14);
                            bVar2 = false;
                            pEVar14 = (EVP_CIPHER_CTX *)
                                      ((int64_t)&dylib_command_00000ff0.dylib.compatibility_version
                                      + 3);
                            param_4 = (EVP_MD *)0x0;
                            iVar3 = _EVP_PKEY_CTX_ctrl(0x1007,0x400,uVar6);
                            if (0 < iVar3) {
                              pEVar14 = (EVP_CIPHER_CTX *)(uint64_t)uVar6;
                              iVar3 = _CMS_SharedInfo_encode
                                                (pEVar14,CONCAT44(in_stack_ffffffffffffffac,
                                                                  in_stack_ffffffffffffffa8));
                              if (iVar3 != 0) {
                                param_4 = (EVP_MD *)0x0;
                                pEVar14 = (EVP_CIPHER_CTX *)0x1009;
                                iVar3 = _EVP_PKEY_CTX_ctrl("usr/lib/libSystem.B.dylib",0x400,iVar3);
                                if (0 < iVar3) {
                                  bVar2 = true;
                                }
                              }
                            }
                          }
                        }
                      }
                      _X509_ALGOR_free((X509_ALGOR *)pEVar14);
                      _CRYPTO_free(pEVar14);
                    }
                    goto LAB_00fd8e4f;
                  }
                }
              }
            }
          }
LAB_00fd8e2e:
          param_4 = pEVar20;
          _ERR_put_error(0x200cff7,0x94,0x2f0,(char *)param_4,in_stack_ffffffffffffffa8);
          bVar2 = false;
        }
LAB_00fd8e4f:
        uVar21 = 1;
        if (bVar2) break;
        iVar3 = 0x96;
        iVar4 = 0x331;
      }
      _ERR_put_error(0x200cff7,iVar3,iVar4,(char *)param_4,in_stack_ffffffffffffffa8);
    }
LAB_00fd9182:
    uVar21 = 0;
    break;
  case 8:
    *param_1 = 1;
    uVar21 = 1;
    break;
  case 9:
    _EVP_PKEY_get0_EC_KEY();
    uVar21 = _EC_KEY_oct2key(0,param_2);
    return uVar21;
  case 10:
    _EVP_PKEY_get0_EC_KEY();
    uVar21 = _EC_KEY_key2buf(0,param_1);
  }
switchD_00fd87ca_caseD_2:
  return uVar21 & 0xffffffff;
}

