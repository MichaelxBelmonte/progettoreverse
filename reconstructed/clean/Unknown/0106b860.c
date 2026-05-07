// Function: FUN_0106b860
// Address: 0106b860
// Size: 2050 bytes
// Class: Unknown
// String references:
//   "/usr/lib/libSystem.B.dylib"
//   "crypto/rsa/rsa_ameth.c"

uint FUN_0106b860(int *param_1,int64_t param_2,int param_3,char *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*puVar6;
  X509_ALGOR *pXVar7;
  EVP_MD *pEVar8;
  ASN1_STRING *pAVar9;
  int iVar10;
  void*puVar11;
  ASN1_OBJECT *pAVar12;
  EVP_MD *pEVar13;
  int unaff_ESI;
  int64_t this_ptr;
  int reason;
  ASN1_OCTET_STRING **oct;
  uint uVar14;
  uint uVar15;
  uint8_t local_70 [8];
  uint8_t local_68 [8];
  uint64_t local_60;
  int64_t lVar16;
  int local_50;
  uint32_t local_4c;
  EVP_MD *local_48;
  int local_40 [2];
  _func_5512 *local_38;
  
  lVar16 = 0;
  uVar3 = 0xfffffffe;
  if (7 < unaff_ESI - 1U) {
    return 0xfffffffe;
  }
  iVar10 = (&switchD_0106b89c::switchdataD_0106c064)[unaff_ESI - 1U] + 0x106c064;
  switch(unaff_ESI) {
  case 1:
    if (param_2 == 0) {
      puVar11 = &stack0xffffffffffffffa8;
      _PKCS7_SIGNER_INFO_get0_algs(puVar11,0);
      iVar10 = (int)puVar11;
    }
    break;
  case 2:
    if (**(int **)(this_ptr + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    if (param_2 == 0) {
      _PKCS7_RECIP_INFO_get0_alg();
    }
    break;
  case 3:
    if (*(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x60) != 0) {
      pEVar13 = (EVP_MD *)&local_48;
      iVar10 = _rsa_pss_get_param(pEVar13,local_40);
      if (iVar10 != 0) {
        iVar10 = _EVP_MD_type(pEVar13);
        *param_1 = iVar10;
        return 2;
      }
      _ERR_put_error(0x201ab32,0x44,0x203,param_4,(int)lVar16);
      return 0;
    }
    *param_1 = 0x2a0;
    goto LAB_0106ba9d;
  default:
    goto switchD_0106b89c_caseD_4;
  case 5:
    if (param_2 == 1) {
      puVar6 = (void*)_CMS_SignerInfo_get0_pkey_ctx();
      iVar2 = (int)lVar16;
      pAVar12 = (ASN1_OBJECT *)0x0;
      _CMS_SignerInfo_get0_algs(0,0,&local_38);
      iVar10 = _OBJ_obj2nid(pAVar12);
      if (iVar10 == 0x390) {
        uVar3 = FUN_0106cbe0(0,local_38);
        return uVar3;
      }
      if (*(int *)*puVar6 == 0x390) {
        _ERR_put_error(0x201ab32,0x90,0x2fb,param_4,iVar2);
        return 0;
      }
      if (iVar10 == 6) {
        return 1;
      }
      iVar10 = _OBJ_find_sigid_algs((int *)*puVar6,local_40);
      return (uint)(local_40[0] == 6 && iVar10 != 0);
    }
    if (param_2 == 0) {
      local_40[0] = 1;
      lVar16 = _CMS_SignerInfo_get0_pkey_ctx();
      param_3 = (int)&local_38;
      iVar10 = 0;
      _CMS_SignerInfo_get0_algs(0,0);
      if (lVar16 != 0) {
        param_3 = (int)local_40;
        iVar10 = 0;
        iVar2 = _RSA_pkey_ctx_ctrl(0,0x1006);
        if (iVar2 < 1) {
          return 0;
        }
        iVar2 = local_40[0];
        if (local_40[0] == 6) {
          pXVar7 = (X509_ALGOR *)FUN_0106cab0();
          if (pXVar7 == (X509_ALGOR *)0x0) {
            return 0;
          }
          _OBJ_nid2obj(iVar10);
          _X509_ALGOR_set0(pXVar7,(ASN1_OBJECT *)&MACH_HEADER.ncmds,param_3,param_4);
          goto LAB_0106ba9d;
        }
joined_r0x0106ba32:
        if (iVar2 != 1) {
          return 0;
        }
      }
LAB_0106ba38:
      _OBJ_nid2obj(iVar10);
      _X509_ALGOR_set0((X509_ALGOR *)0x0,(ASN1_OBJECT *)((int64_t)&MACH_HEADER.cputype + 1),param_3
                       ,param_4);
      goto LAB_0106ba9d;
    }
    break;
  case 7:
    if (**(int **)(this_ptr + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    if (param_2 == 1) {
      lVar4 = _CMS_RecipientInfo_get0_pkey_ctx();
      iVar10 = (int)lVar16;
      if (lVar4 == 0) {
        return 0;
      }
      pAVar12 = (ASN1_OBJECT *)&local_38;
      iVar2 = _CMS_RecipientInfo_ktri_get0_algs(pAVar12,0);
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      iVar2 = _OBJ_obj2nid(pAVar12);
      if (iVar2 != 6) {
        if (iVar2 != 0x397) {
          _ERR_put_error(0x201ab32,0xa2,0x3a7,param_4,iVar10);
          return 0xffffffff;
        }
        plVar5 = (int64_t *)_ASN1_TYPE_unpack_sequence();
        if (plVar5 != (int64_t *)0x0) {
          if (plVar5[1] == 0) {
            lVar16 = plVar5[3];
LAB_0106be41:
            if (lVar16 == 0) {
              pEVar13 = _EVP_sha1();
              if (pEVar13 != (EVP_MD *)0x0) goto LAB_0106beb7;
            }
            else {
              _OBJ_obj2nid(pAVar12);
              _OBJ_nid2sn((int)pAVar12);
              pEVar13 = _EVP_get_digestbyname((char *)pAVar12);
              if (pEVar13 == (EVP_MD *)0x0) {
LAB_0106bede:
                iVar2 = 0xa6;
                reason = 0x249;
              }
              else {
LAB_0106beb7:
                if (*plVar5 == 0) {
                  pEVar8 = _EVP_sha1();
                  if (pEVar8 == (EVP_MD *)0x0) goto LAB_0106c042;
                }
                else {
                  _OBJ_obj2nid(pAVar12);
                  _OBJ_nid2sn((int)pAVar12);
                  pEVar8 = _EVP_get_digestbyname((char *)pAVar12);
                  if (pEVar8 == (EVP_MD *)0x0) goto LAB_0106bede;
                }
                lVar16 = plVar5[2];
                if (lVar16 == 0) {
                  local_60 = 0;
                  local_4c = 0;
LAB_0106bf6b:
                  uVar3 = 0xffffffff;
                  iVar10 = _RSA_pkey_ctx_ctrl(4,0x1001,0);
                  if (((0 < iVar10) &&
                      (iVar10 = _EVP_PKEY_CTX_ctrl("usr/lib/libSystem.B.dylib",0x300,0,pEVar8),
                      0 < iVar10)) && (iVar10 = _RSA_pkey_ctx_ctrl(0,0x1005,pEVar13), 0 < iVar10)) {
                    iVar10 = _EVP_PKEY_CTX_ctrl("sr/lib/libSystem.B.dylib",0x300,local_4c,local_60);
                    uVar3 = (uint)(0 < iVar10) * 2 - 1;
                  }
                  goto LAB_0106c048;
                }
                iVar2 = _OBJ_obj2nid(pAVar12);
                if (iVar2 == 0x3a7) {
                  piVar1 = *(int **)(lVar16 + 8);
                  if (*piVar1 == 4) {
                    local_60 = *(void*)(*(int64_t *)(piVar1 + 2) + 8);
                    *(void*)(*(int64_t *)(piVar1 + 2) + 8) = 0;
                    local_4c = **(void**)(piVar1 + 2);
                    goto LAB_0106bf6b;
                  }
                  iVar2 = 0xa0;
                  reason = 0x3c1;
                }
                else {
                  iVar2 = 0xa3;
                  reason = 0x3bd;
                }
              }
              _ERR_put_error(0x201ab32,iVar2,reason,param_4,iVar10);
            }
LAB_0106c042:
            uVar3 = 0xffffffff;
            goto LAB_0106c048;
          }
          iVar2 = _OBJ_obj2nid(pAVar12);
          if (iVar2 == 0x38f) {
            lVar16 = _ASN1_TYPE_unpack_sequence();
            plVar5[3] = lVar16;
            if (lVar16 != 0) goto LAB_0106be41;
          }
          else {
            plVar5[3] = 0;
          }
          _RSA_OAEP_PARAMS_free();
        }
        _ERR_put_error(0x201ab32,0xa1,0x3ae,param_4,iVar10);
        uVar3 = 0xffffffff;
LAB_0106c048:
        _RSA_OAEP_PARAMS_free();
        return uVar3;
      }
      goto LAB_0106ba9d;
    }
    if (param_2 == 0) {
      local_48 = (EVP_MD *)0x0;
      lVar16 = _CMS_RecipientInfo_get0_pkey_ctx();
      local_50 = 1;
      puVar11 = local_68;
      iVar2 = _CMS_RecipientInfo_ktri_get0_algs(puVar11,0);
      iVar10 = (int)puVar11;
      if (iVar2 < 1) {
        return 0;
      }
      if (lVar16 != 0) {
        param_3 = (int)&local_50;
        iVar10 = 0;
        iVar2 = _RSA_pkey_ctx_ctrl(0,0x1006);
        if (iVar2 < 1) {
          return 0;
        }
        iVar2 = local_50;
        if (local_50 == 4) {
          pEVar13 = (EVP_MD *)0x100b;
          iVar10 = _EVP_PKEY_CTX_ctrl("r/lib/libSystem.B.dylib",0x300,0,&local_38);
          if (0 < iVar10) {
            pEVar13 = (EVP_MD *)0x0;
            iVar10 = _RSA_pkey_ctx_ctrl(0,"/usr/lib/libSystem.B.dylib");
            if (0 < iVar10) {
              puVar11 = local_70;
              pEVar13 = (EVP_MD *)0x100c;
              oct = (ASN1_OCTET_STRING **)0x0;
              uVar3 = _EVP_PKEY_CTX_ctrl("/lib/libSystem.B.dylib",0x300);
              if (-1 < (int)uVar3) {
                puVar6 = (void*)_RSA_OAEP_PARAMS_new();
                uVar15 = 0;
                uVar14 = 0;
                if (puVar6 != (void*)0x0) {
                  if ((local_38 != (_func_5512 *)0x0) &&
                     (iVar10 = _EVP_MD_type(pEVar13), iVar10 != 0x40)) {
                    pXVar7 = _X509_ALGOR_new();
                    *puVar6 = pXVar7;
                    if (pXVar7 == (X509_ALGOR *)0x0) goto LAB_0106be27;
                    _X509_ALGOR_set_md();
                  }
                  iVar10 = FUN_0106af10();
                  if (iVar10 == 0) goto LAB_0106be27;
                  if (0 < (int)uVar3) {
                    pXVar7 = _X509_ALGOR_new();
                    puVar6[2] = pXVar7;
                    if ((pXVar7 == (X509_ALGOR *)0x0) ||
                       (pEVar8 = (EVP_MD *)_ASN1_OCTET_STRING_new(), uVar15 = uVar14,
                       pEVar8 == (EVP_MD *)0x0)) goto LAB_0106be27;
                    iVar10 = _ASN1_OCTET_STRING_set
                                       ((ASN1_OCTET_STRING *)pEVar13,(uchar *)(uint64_t)uVar3,
                                        (int)oct);
                    if (iVar10 == 0) {
                      _ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)pEVar13);
                      goto LAB_0106be27;
                    }
                    _OBJ_nid2obj((int)pEVar13);
                    _X509_ALGOR_set0((X509_ALGOR *)pEVar8,(ASN1_OBJECT *)&MACH_HEADER.cputype,
                                     (int)oct,puVar11);
                    pEVar13 = pEVar8;
                  }
                  pAVar9 = _ASN1_item_pack(pEVar13,(ASN1_ITEM *)&local_48,oct);
                  iVar10 = (int)oct;
                  uVar15 = uVar14;
                  if (pAVar9 != (ASN1_STRING *)0x0) {
                    _OBJ_nid2obj((int)pEVar13);
                    pEVar13 = local_48;
                    _X509_ALGOR_set0((X509_ALGOR *)local_48,(ASN1_OBJECT *)&MACH_HEADER.ncmds,iVar10
                                     ,puVar11);
                    local_48 = (EVP_MD *)0x0;
                    uVar15 = 1;
                  }
                  goto LAB_0106be27;
                }
              }
            }
          }
          uVar15 = 0;
LAB_0106be27:
          _RSA_OAEP_PARAMS_free();
          _ASN1_STRING_free((ASN1_STRING *)pEVar13);
          return uVar15;
        }
        goto joined_r0x0106ba32;
      }
      goto LAB_0106ba38;
    }
    break;
  case 8:
    if (**(int **)(this_ptr + 0x10) == 0x390) {
      return 0xfffffffe;
    }
    *param_1 = 0;
LAB_0106ba9d:
    uVar3 = 1;
    goto switchD_0106b89c_caseD_4;
  }
  uVar3 = 1;
  if (lVar16 != 0) {
    _OBJ_nid2obj(iVar10);
    _X509_ALGOR_set0((X509_ALGOR *)0x0,(ASN1_OBJECT *)((int64_t)&MACH_HEADER.cputype + 1),param_3,
                     param_4);
  }
switchD_0106b89c_caseD_4:
  return uVar3;
}

