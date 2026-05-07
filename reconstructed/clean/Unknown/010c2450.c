// Function: FUN_010c2450
// Address: 010c2450
// Size: 2881 bytes
// Class: Unknown
// String references:
//   "UTF8"
//   "UTF8String"
//   "BMP"
//   "VISIBLE"
//   "VISIBLESTRING"
//   "BMPSTRING"
//   "organization"
//   "crypto/x509v3/v3_cpols.c"
//   "ia5org"
//   "policyIdentifier"
//   "CPS"
//   "userNotice"
//   "explicitText"
//   "noticeNumbers"
//   "section:"
//   ",name:"
//   ",value:"

int64_t FUN_010c2450(uint *param_1,ASN1_ITEM *param_2,uint64_t param_3,char *param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  STACK *pSVar11;
  int64_t lVar12;
  void*puVar13;
  X509V3_EXT_METHOD *pXVar14;
  X509V3_EXT_METHOD *it;
  ASN1_OBJECT *pAVar15;
  ASN1_ITEM_EXP *pAVar16;
  ASN1_VALUE *pAVar17;
  ASN1_INTEGER *pAVar18;
  ASN1_TEMPLATE *pAVar19;
  ASN1_IA5STRING *pAVar20;
  X509 *pXVar21;
  char *pcVar22;
  ASN1_ITEM *it_00;
  int iVar23;
  int in_stack_ffffffffffffff88;
  
  pSVar11 = _X509V3_parse_list((char *)param_1);
  iVar6 = _OPENSSL_sk_num();
  if (pSVar11 == (STACK *)0x0) {
    _ERR_put_error(0x201e3a6,0x22,0x65,param_4,in_stack_ffffffffffffff88);
  }
  else {
    lVar12 = _OPENSSL_sk_new_reserve();
    if (lVar12 != 0) {
      if (iVar6 < 1) {
LAB_010c2b67:
        _OPENSSL_sk_pop_free();
        return lVar12;
      }
      bVar5 = false;
      iVar23 = 0;
LAB_010c24f9:
      puVar13 = (void*)_OPENSSL_sk_value();
      if ((puVar13[2] == 0) && (pcVar22 = (char *)puVar13[1], pcVar22 != (char *)0x0)) {
        iVar7 = _strcmp((char *)param_1,&param_2->itype);
        if (iVar7 == 0) {
          bVar5 = true;
LAB_010c24e9:
          iVar23 = iVar23 + 1;
          if (iVar23 == iVar6) goto LAB_010c2b67;
          goto LAB_010c24f9;
        }
        if (*pcVar22 != '@') {
          pAVar15 = _OBJ_txt2obj((char *)param_1,(int)param_2);
          if (pAVar15 == (ASN1_OBJECT *)0x0) {
            iVar6 = 0x6e;
            iVar23 = 0x8d;
            goto LAB_010c2b97;
          }
          pAVar17 = _ASN1_item_new((ASN1_ITEM *)param_1);
          if (pAVar17 == (ASN1_VALUE *)0x0) {
            _ASN1_OBJECT_free((ASN1_OBJECT *)param_1);
            iVar6 = 0x94;
          }
          else {
            *(ASN1_OBJECT **)pAVar17 = pAVar15;
LAB_010c2b01:
            iVar7 = _OPENSSL_sk_push();
            if (iVar7 != 0) goto LAB_010c24e9;
            _ASN1_item_free((ASN1_VALUE *)param_1,param_2);
            iVar6 = 0x9b;
          }
          goto LAB_010c2b5d;
        }
        pSVar11 = _X509V3_get_section((X509V3_CTX *)param_1,&param_2->itype);
        if (pSVar11 != (STACK *)0x0) {
          pXVar14 = (X509V3_EXT_METHOD *)_ASN1_item_new((ASN1_ITEM *)param_1);
          if (pXVar14 == (X509V3_EXT_METHOD *)0x0) {
LAB_010c2c62:
            it_00 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 1);
            iVar6 = 0xf3;
LAB_010c2c7e:
            pcVar22 = "crypto/x509v3/v3_cpols.c";
            _ERR_put_error(0x201e3a6,(int)it_00,iVar6,param_4,in_stack_ffffffffffffff88);
          }
          else {
            iVar8 = _OPENSSL_sk_num();
            iVar7 = in_stack_ffffffffffffff88;
            if (0 < iVar8) {
              in_stack_ffffffffffffff88 = 0;
              do {
                puVar13 = (void*)_OPENSSL_sk_value();
                iVar7 = _strcmp((char *)param_1,&param_2->itype);
                if (iVar7 == 0) {
                  pAVar15 = _OBJ_txt2obj((char *)param_1,(int)param_2);
                  if (pAVar15 == (ASN1_OBJECT *)0x0) {
                    _ERR_put_error(0x201e3a6,0x6e,0xb7,param_4,in_stack_ffffffffffffff88);
                    it_00 = (ASN1_ITEM *)*puVar13;
                    pcVar22 = ",name:";
                    _ERR_add_error_data(0x201e68a,it_00,puVar13[1],",value:");
                    goto LAB_010c2ee9;
                  }
                  *(ASN1_OBJECT **)pXVar14 = pAVar15;
                  param_1 = (uint *)pXVar14;
                  iVar7 = in_stack_ffffffffffffff88;
                }
                else {
                  iVar7 = _name_cmp((char *)param_1,&param_2->itype);
                  if (iVar7 != 0) {
                    iVar7 = _name_cmp((char *)param_1,&param_2->itype);
                    if (iVar7 == 0) {
                      if (*(char *)puVar13[2] == '@') {
                        pSVar11 = _X509V3_get_section((X509V3_CTX *)param_1,&param_2->itype);
                        if (pSVar11 != (STACK *)0x0) {
                          it = (X509V3_EXT_METHOD *)_ASN1_item_new((ASN1_ITEM *)param_1);
                          if (it == (X509V3_EXT_METHOD *)0x0) {
LAB_010c2c3c:
                            it_00 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 1);
                            iVar6 = 0x16e;
                          }
                          else {
                            pAVar15 = _OBJ_nid2obj((int)param_1);
                            *(ASN1_OBJECT **)it = pAVar15;
                            if (pAVar15 == (ASN1_OBJECT *)0x0) {
                              it_00 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 4);
                              iVar6 = 0x128;
                            }
                            else {
                              param_1 = (uint *)it;
                              pAVar16 = (ASN1_ITEM_EXP *)_ASN1_item_new((ASN1_ITEM *)it);
                              if (pAVar16 == (ASN1_ITEM_EXP *)0x0) goto LAB_010c2c3c;
                              it->it = pAVar16;
                              iVar7 = _OPENSSL_sk_num();
                              if (0 < iVar7) {
                                iVar7 = 0;
                                do {
                                  puVar13 = (void*)_OPENSSL_sk_value();
                                  uVar1 = puVar13[2];
                                  iVar8 = _strcmp((char *)param_1,&param_2->itype);
                                  if (iVar8 == 0) {
                                    pcVar22 = _strchr((char *)param_1,(int)param_2);
                                    if ((pcVar22 == (char *)0x0) ||
                                       (iVar8 = (int)pcVar22 - (int)uVar1, iVar8 == -1)) {
switchD_010c27fc_caseD_5:
                                    }
                                    else {
                                      param_1 = &switchD_010c27fc::switchdataD_010c2fac;
                                      sVar10 = (size_t)param_3;
                                      switch(iVar8) {
                                      case 3:
                                        iVar8 = _strncmp((char *)&switchD_010c27fc::
                                                                  switchdataD_010c2fac,
                                                         (char *)((int64_t)&MACH_HEADER.magic + 3),
                                                         sVar10);
                                        break;
                                      case 4:
                                        iVar8 = _strncmp((char *)&switchD_010c27fc::
                                                                  switchdataD_010c2fac,
                                                         (char *)&MACH_HEADER.cputype,sVar10);
                                        break;
                                      default:
                                        goto switchD_010c27fc_caseD_5;
                                      case 7:
                                        iVar8 = _strncmp((char *)&switchD_010c27fc::
                                                                  switchdataD_010c2fac,
                                                         (char *)((int64_t)&MACH_HEADER.cputype + 3
                                                                 ),sVar10);
                                        break;
                                      case 9:
                                        iVar8 = _strncmp((char *)&switchD_010c27fc::
                                                                  switchdataD_010c2fac,
                                                         (char *)((int64_t)&MACH_HEADER.cpusubtype
                                                                 + 1),sVar10);
                                        break;
                                      case 10:
                                        iVar8 = _strncmp((char *)&switchD_010c27fc::
                                                                  switchdataD_010c2fac,
                                                         (char *)((int64_t)&MACH_HEADER.cpusubtype
                                                                 + 2),sVar10);
                                        break;
                                      case 0xd:
                                        iVar8 = _strncmp((char *)&switchD_010c27fc::
                                                                  switchdataD_010c2fac,
                                                         (char *)((int64_t)&MACH_HEADER.filetype +
                                                                 1),sVar10);
                                      }
                                      if (iVar8 != 0) goto switchD_010c27fc_caseD_5;
                                    }
                                    pAVar19 = (ASN1_TEMPLATE *)_ASN1_STRING_type_new((int)param_1);
                                    pAVar16->templates = pAVar19;
                                    if (pAVar19 == (ASN1_TEMPLATE *)0x0) goto LAB_010c2c3c;
LAB_010c2929:
                                    sVar10 = _strlen((char *)param_1);
                                    param_2 = (ASN1_ITEM *)(uint64_t)sVar10;
                                    iVar8 = _ASN1_STRING_set((ASN1_STRING *)param_1,param_2,
                                                             (int)param_3);
                                    if (iVar8 == 0) goto LAB_010c2c3c;
                                  }
                                  else {
                                    iVar8 = _strcmp((char *)param_1,&param_2->itype);
                                    if (iVar8 == 0) {
                                      pAVar17 = *(ASN1_VALUE **)pAVar16;
                                      if (pAVar17 == (ASN1_VALUE *)0x0) {
                                        pAVar17 = _ASN1_item_new((ASN1_ITEM *)param_1);
                                        if (pAVar17 == (ASN1_VALUE *)0x0) goto LAB_010c2c3c;
                                        *(ASN1_VALUE **)pAVar16 = pAVar17;
                                      }
                                      *(uint *)(*(int64_t *)pAVar17 + 4) = (uint)!bVar5 * 4 + 0x16;
                                      goto LAB_010c2929;
                                    }
                                    iVar8 = _strcmp((char *)param_1,&param_2->itype);
                                    if (iVar8 != 0) {
                                      _ERR_put_error(0x201e3a6,0x8a,0x15e,param_4,
                                                     in_stack_ffffffffffffff88);
                                      it_00 = (ASN1_ITEM *)*puVar13;
                                      pcVar22 = ",name:";
                                      _ERR_add_error_data(0x201e68a,it_00,puVar13[1],",value:");
                                      goto LAB_010c2ecd;
                                    }
                                    lVar2._0_1_ = pAVar16->itype;
                                    lVar2._1_3_ = *(void*)&pAVar16->field_0x1;
                                    lVar2._4_4_ = pAVar16->utype;
                                    if (lVar2 == 0) {
                                      pAVar17 = _ASN1_item_new((ASN1_ITEM *)param_1);
                                      if (pAVar17 == (ASN1_VALUE *)0x0) goto LAB_010c2c3c;
                                      *(ASN1_VALUE **)pAVar16 = pAVar17;
                                    }
                                    pSVar11 = _X509V3_parse_list((char *)param_1);
                                    if ((pSVar11 == (STACK *)0x0) ||
                                       (iVar8 = _OPENSSL_sk_num(), iVar8 == 0)) {
                                      _ERR_put_error(0x201e3a6,0x8d,0x154,param_4,
                                                     in_stack_ffffffffffffff88);
                                      it_00 = (ASN1_ITEM *)*puVar13;
                                      pcVar22 = ",name:";
                                      _ERR_add_error_data(0x201e68a,it_00,puVar13[1],",value:");
                                      _OPENSSL_sk_pop_free();
                                      goto LAB_010c2ecd;
                                    }
                                    iVar8 = _OPENSSL_sk_num();
                                    if (0 < iVar8) {
                                      iVar8 = 0;
                                      do {
                                        _OPENSSL_sk_value();
                                        pAVar18 = _s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)param_1,
                                                                    &param_2->itype);
                                        if (pAVar18 == (ASN1_INTEGER *)0x0) {
                                          it_00 = (ASN1_ITEM *)
                                                  ((int64_t)&section_00000068.addr + 4);
                                          iVar6 = 0x17f;
LAB_010c2c13:
                                          pcVar22 = "crypto/x509v3/v3_cpols.c";
                                          _ERR_put_error(0x201e3a6,(int)it_00,iVar6,param_4,
                                                         in_stack_ffffffffffffff88);
                                          _OPENSSL_sk_pop_free();
                                          goto LAB_010c2ecd;
                                        }
                                        iVar9 = _OPENSSL_sk_push();
                                        if (iVar9 == 0) {
                                          _ASN1_INTEGER_free((ASN1_INTEGER *)param_1);
                                          it_00 = (ASN1_ITEM *)
                                                  ((int64_t)&segment_command_00000020.vmsize + 1);
                                          iVar6 = 0x189;
                                          goto LAB_010c2c13;
                                        }
                                        iVar8 = iVar8 + 1;
                                        iVar9 = _OPENSSL_sk_num();
                                      } while (iVar8 < iVar9);
                                    }
                                    _OPENSSL_sk_pop_free();
                                  }
                                  iVar7 = iVar7 + 1;
                                  iVar8 = _OPENSSL_sk_num();
                                } while (iVar7 < iVar8);
                              }
                              plVar3 = *(int64_t **)pAVar16;
                              if ((plVar3 == (int64_t *)0x0) ||
                                 ((plVar3[1] != 0 && (*plVar3 != 0)))) {
                                _X509V3_section_free((X509V3_CTX *)param_1,(STACK *)param_2);
                                if ((X509 *)pXVar14->it == (X509 *)0x0) {
                                  pXVar21 = (X509 *)_OPENSSL_sk_new_null();
                                  pXVar14->it = (ASN1_ITEM_EXP *)pXVar21;
                                }
                                iVar8 = _OPENSSL_sk_push();
                                iVar7 = in_stack_ffffffffffffff88;
                                if (iVar8 != 0) goto LAB_010c2a80;
                                goto LAB_010c2c62;
                              }
                              it_00 = (ASN1_ITEM *)((int64_t)&section_00000068.addr + 6);
                              iVar6 = 0x167;
                            }
                          }
                          pcVar22 = "crypto/x509v3/v3_cpols.c";
                          _ERR_put_error(0x201e3a6,(int)it_00,iVar6,param_4,
                                         in_stack_ffffffffffffff88);
LAB_010c2ecd:
                          _ASN1_item_free((ASN1_VALUE *)pcVar22,it_00);
                          _X509V3_section_free((X509V3_CTX *)pcVar22,(STACK *)it_00);
                          goto LAB_010c2ee9;
                        }
                        iVar6 = 0x87;
                        iVar23 = 0xd7;
                      }
                      else {
                        iVar6 = 0x89;
                        iVar23 = 0xd1;
                      }
                    }
                    else {
                      iVar6 = 0x8a;
                      iVar23 = 0xe5;
                    }
                    _ERR_put_error(0x201e3a6,iVar6,iVar23,param_4,in_stack_ffffffffffffff88);
                    it_00 = (ASN1_ITEM *)*puVar13;
                    pcVar22 = ",name:";
                    _ERR_add_error_data(0x201e68a,it_00,puVar13[1],",value:");
                    goto LAB_010c2ee9;
                  }
                  if ((X509 *)pXVar14->it == (X509 *)0x0) {
                    pXVar21 = (X509 *)_OPENSSL_sk_new_null();
                    pXVar14->it = (ASN1_ITEM_EXP *)pXVar21;
                    param_1 = (uint *)pXVar14;
                  }
                  pAVar17 = _ASN1_item_new((ASN1_ITEM *)param_1);
                  if ((pAVar17 == (ASN1_VALUE *)0x0) || (iVar7 = _OPENSSL_sk_push(), iVar7 == 0))
                  goto LAB_010c2c62;
                  pAVar15 = _OBJ_nid2obj((int)param_1);
                  *(ASN1_OBJECT **)pAVar17 = pAVar15;
                  if (pAVar15 == (ASN1_OBJECT *)0x0) {
                    it_00 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 4);
                    iVar6 = 0xc5;
                    goto LAB_010c2c7e;
                  }
                  pAVar20 = _ASN1_IA5STRING_new();
                  *(ASN1_IA5STRING **)(pAVar17 + 8) = pAVar20;
                  if (pAVar20 == (ASN1_IA5STRING *)0x0) goto LAB_010c2c62;
                  sVar10 = _strlen((char *)param_1);
                  param_2 = (ASN1_ITEM *)(uint64_t)sVar10;
                  iVar8 = _ASN1_STRING_set((ASN1_STRING *)param_1,param_2,(int)param_3);
                  iVar7 = in_stack_ffffffffffffff88;
                  if (iVar8 == 0) goto LAB_010c2c62;
                }
LAB_010c2a80:
                in_stack_ffffffffffffff88 = iVar7 + 1;
                iVar8 = _OPENSSL_sk_num();
              } while (in_stack_ffffffffffffff88 < iVar8);
            }
            lVar4._0_4_ = pXVar14->ext_nid;
            lVar4._4_4_ = pXVar14->ext_flags;
            if (lVar4 != 0) {
              _X509V3_section_free((X509V3_CTX *)param_1,(STACK *)param_2);
              in_stack_ffffffffffffff88 = iVar7;
              goto LAB_010c2b01;
            }
            pcVar22 = "crypto/x509v3/v3_cpols.c";
            it_00 = (ASN1_ITEM *)((int64_t)&section_00000068.addr + 3);
            _ERR_put_error(0x201e3a6,0x8b,0xec,param_4,iVar7);
          }
LAB_010c2ee9:
          _ASN1_item_free((ASN1_VALUE *)pcVar22,it_00);
          _X509V3_section_free((X509V3_CTX *)pcVar22,(STACK *)it_00);
          goto LAB_010c2f04;
        }
        iVar6 = 0x87;
        iVar23 = 0x81;
      }
      else {
        iVar6 = 0x86;
        iVar23 = 0x75;
      }
LAB_010c2b97:
      _ERR_put_error(0x201e3a6,iVar6,iVar23,param_4,in_stack_ffffffffffffff88);
      _ERR_add_error_data(0x201e68a,*puVar13,puVar13[1],",value:");
      goto LAB_010c2f04;
    }
    iVar6 = 0x6b;
LAB_010c2b5d:
    _ERR_put_error(0x201e3a6,0x41,iVar6,param_4,in_stack_ffffffffffffff88);
LAB_010c2f04:
    _OPENSSL_sk_pop_free();
    _OPENSSL_sk_pop_free();
  }
  return 0;
}

