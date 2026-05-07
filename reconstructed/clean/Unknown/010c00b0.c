// Function: FUN_010c00b0
// Address: 010c00b0
// Size: 1234 bytes
// Class: Unknown
// String references:
//   "0123456789"
//   " \t"
//   "crypto/x509v3/v3_asid.c"
//   "AS"
//   "RDI"
//   "inherit"
//   "section:"
//   ",name:"
//   ",value:"

ASN1_VALUE * FUN_010c00b0(char *param_1,ASN1_ITEM *param_2,uint64_t param_3,char *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  size_t sVar8;
  ASN1_VALUE *pAVar9;
  ASN1_VALUE *pAVar10;
  void*puVar11;
  char *pcVar12;
  X509V3_EXT_METHOD *pXVar13;
  ASN1_VALUE *pAVar14;
  ASN1_ITEM_EXP *pAVar15;
  char *value;
  ASN1_INTEGER *y;
  ASN1_VALUE *pAVar16;
  uint64_t uVar17;
  int in_stack_ffffffffffffffa8;
  ASN1_ITEM *local_40;
  
  pAVar9 = _ASN1_item_new((ASN1_ITEM *)param_1);
  if (pAVar9 == (ASN1_VALUE *)0x0) {
    _ERR_put_error(0x201e05e,0x41,0x20e,param_4,in_stack_ffffffffffffffa8);
  }
  else {
    pAVar10 = pAVar9 + 8;
    iVar2 = _OPENSSL_sk_num();
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        local_40 = (ASN1_ITEM *)0x0;
        puVar11 = (void*)_OPENSSL_sk_value();
        iVar3 = _name_cmp(param_1,&param_2->itype);
        param_1 = (char *)0x0;
        if (iVar3 != 0) {
          iVar4 = _name_cmp((char *)0x0,&param_2->itype);
          param_1 = (char *)((int64_t)&MACH_HEADER.magic + 1);
          if (iVar4 == 0) goto LAB_010c0196;
          _ERR_put_error(0x201e05e,0x73,0x21f,param_4,(int)pAVar10);
          param_2 = (ASN1_ITEM *)*puVar11;
          uVar17 = puVar11[1];
LAB_010c049d:
          param_1 = ",name:";
          _ERR_add_error_data(0x201e68a,param_2,uVar17,",value:");
          goto LAB_010c0556;
        }
LAB_010c0196:
        lVar1 = puVar11[2];
        iVar4 = _strcmp(param_1,&param_2->itype);
        if (iVar4 != 0) {
          sVar5 = _strspn(param_1,&param_2->itype);
          if (*(char *)(lVar1 + (int)sVar5) != '\0') {
            sVar6 = _strspn(param_1,&param_2->itype);
            if (*(char *)(lVar1 + (int)(sVar6 + sVar5)) == '-') {
              sVar7 = _strspn(param_1,&param_2->itype);
              sVar8 = _strspn(param_1,&param_2->itype);
              if (*(char *)(lVar1 + (int)(sVar8 + sVar7 + (int)(((uint64_t)(sVar6 + sVar5) << 0x20)
                                                                + 0x100000000 >> 0x20))) == '\0') {
                value = section_00000248.sectname + 0xb;
                pcVar12 = _CRYPTO_strdup(param_1,section_00000248.sectname + 0xb,(int)param_3);
                if (pcVar12 == (char *)0x0) {
                  iVar2 = 0x255;
                  goto LAB_010c054a;
                }
                pcVar12[(int)sVar5] = '\0';
                local_40 = (ASN1_ITEM *)_s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)param_1,value);
                pXVar13 = (X509V3_EXT_METHOD *)_s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)param_1,value)
                ;
                y = (ASN1_INTEGER *)(section_00000248.segname + 3);
                _CRYPTO_free(param_1);
                if ((local_40 != (ASN1_ITEM *)0x0) && (pXVar13 != (X509V3_EXT_METHOD *)0x0)) {
                  iVar3 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)param_1,y);
                  param_1 = (char *)pXVar13;
                  if (iVar3 < 1) goto LAB_010c02ec;
                  param_2 = (ASN1_ITEM *)(section_00000068.sectname + 0xc);
                  iVar2 = 0x262;
                  goto LAB_010c0527;
                }
                param_1 = "crypto/x509v3/v3_asid.c";
                param_2 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 1);
                _ERR_put_error(0x201e05e,0x41,0x25d,param_4,(int)pAVar10);
                goto LAB_010c0556;
              }
              iVar2 = 0xa3;
              iVar3 = 0x244;
            }
            else {
              iVar2 = 0xa2;
              iVar3 = 0x23b;
            }
            _ERR_put_error(0x201e05e,iVar2,iVar3,param_4,(int)pAVar10);
            param_2 = (ASN1_ITEM *)*puVar11;
            uVar17 = puVar11[1];
            goto LAB_010c049d;
          }
          iVar3 = _X509V3_get_value_int((CONF_VALUE *)param_1,(ASN1_INTEGER **)param_2);
          if (iVar3 == 0) {
            iVar2 = 0x24f;
LAB_010c054a:
            param_2 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 1);
            param_1 = "crypto/x509v3/v3_asid.c";
            _ERR_put_error(0x201e05e,0x41,iVar2,param_4,(int)pAVar10);
          }
          else {
            param_1 = (char *)0x0;
LAB_010c02ec:
            iVar3 = _X509v3_asid_add_id_or_range();
            if (iVar3 != 0) goto LAB_010c013a;
            param_2 = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 1);
            iVar2 = 0x267;
LAB_010c0527:
            param_1 = "crypto/x509v3/v3_asid.c";
            _ERR_put_error(0x201e05e,(int)param_2,iVar2,param_4,(int)pAVar10);
          }
          goto LAB_010c0556;
        }
        pAVar16 = pAVar10;
        if (iVar3 == 0) {
          pAVar16 = pAVar9;
        }
        if (*(int **)(pAVar9 + (uint64_t)(iVar3 != 0) * 8) == (int *)0x0) {
          pAVar14 = _ASN1_item_new((ASN1_ITEM *)param_1);
          *(ASN1_VALUE **)pAVar16 = pAVar14;
          if (pAVar14 != (ASN1_VALUE *)0x0) {
            pAVar15 = (ASN1_ITEM_EXP *)_ASN1_NULL_new();
            param_1 = *(char **)pAVar16;
            ((X509V3_EXT_METHOD *)param_1)->it = pAVar15;
            if (pAVar15 != (ASN1_ITEM_EXP *)0x0) {
              **(void**)pAVar16 = 0;
              local_40 = param_2;
              goto LAB_010c013a;
            }
          }
LAB_010c03f2:
          _ERR_put_error(0x201e05e,0xa5,0x22b,param_4,(int)pAVar10);
          param_2 = (ASN1_ITEM *)*puVar11;
          param_1 = ",name:";
          _ERR_add_error_data(0x201e68a,param_2,puVar11[1],",value:");
          goto LAB_010c0556;
        }
        local_40 = param_2;
        if (**(int **)(pAVar9 + (uint64_t)(iVar3 != 0) * 8) != 0) goto LAB_010c03f2;
LAB_010c013a:
        iVar2 = iVar2 + 1;
        iVar3 = _OPENSSL_sk_num();
        param_2 = local_40;
      } while (iVar2 < iVar3);
    }
    iVar2 = FUN_010bfcc0();
    if ((iVar2 != 0) && (iVar2 = FUN_010bfcc0(), iVar2 != 0)) {
      return pAVar9;
    }
LAB_010c0556:
    _ASN1_item_free((ASN1_VALUE *)param_1,param_2);
    _ASN1_INTEGER_free((ASN1_INTEGER *)param_1);
    _ASN1_INTEGER_free((ASN1_INTEGER *)param_1);
  }
  return (ASN1_VALUE *)0x0;
}

