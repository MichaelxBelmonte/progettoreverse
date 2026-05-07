// Function: FUN_010b6d30
// Address: 010b6d30
// Size: 1227 bytes
// Class: Unknown
// String references:
//   "crypto/x509/x_name.c"

uint64_t FUN_010b6d30(char *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ASN1_ITEM *pAVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  int64_t lVar12;
  ASN1_VALUE *pAVar13;
  ASN1_OBJECT *pAVar14;
  void *pvVar15;
  ASN1_ITEM *it;
  char *pcVar16;
  uint64_t uVar17;
  int64_t this_ptr;
  int tag;
  uint32_t uVar18;
  char *pcVar19;
  uint64_t in_stack_ffffffffffffffa8;
  int local_34;
  
  uVar18 = (uint32_t)((uint64_t)param_4 >> 0x20);
  tag = (int)param_4;
  it = (ASN1_ITEM *)((int64_t)&section_00000108.size + 4);
  _CRYPTO_free(param_1);
  *(void*)(this_ptr + 0x18) = 0;
  iVar5 = _OPENSSL_sk_num();
  if (iVar5 == 0) {
    *(void*)(this_ptr + 0x20) = 0;
    return 1;
  }
  lVar11 = _OPENSSL_sk_new_null();
  iVar5 = (int)in_stack_ffffffffffffffa8;
  if (lVar11 == 0) {
    iVar6 = 0x13d;
LAB_010b7019:
    it = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 1);
    param_1 = "crypto/x509/x_name.c";
    _ERR_put_error(0x201d8fb,0x41,iVar6,(char *)CONCAT44(uVar18,tag),iVar5);
  }
  else {
    iVar6 = _OPENSSL_sk_num();
    iVar5 = (int)in_stack_ffffffffffffffa8;
    iVar7 = (int)param_3;
    if (0 < iVar6) {
      iVar6 = 0;
      local_34 = -1;
LAB_010b6db0:
      lVar11 = _OPENSSL_sk_value();
      if (*(int *)(lVar11 + 0x10) != local_34) {
        lVar12 = _OPENSSL_sk_new_null();
        if (lVar12 == 0) goto LAB_010b7021;
        iVar7 = _OPENSSL_sk_push();
        iVar5 = (int)in_stack_ffffffffffffffa8;
        if (iVar7 == 0) {
          _OPENSSL_sk_free();
          iVar6 = 0x148;
          goto LAB_010b7019;
        }
        local_34 = *(int *)(lVar11 + 0x10);
      }
      pAVar13 = _ASN1_item_new((ASN1_ITEM *)param_1);
      iVar5 = (int)in_stack_ffffffffffffffa8;
      if (pAVar13 != (ASN1_VALUE *)0x0) {
        pAVar14 = _OBJ_dup((ASN1_OBJECT *)param_1);
        iVar5 = (int)in_stack_ffffffffffffffa8;
        *(ASN1_OBJECT **)pAVar13 = pAVar14;
        if (pAVar14 == (ASN1_OBJECT *)0x0) {
          iVar6 = 0x154;
          goto LAB_010b71b2;
        }
        piVar2 = *(int **)(pAVar13 + 8);
        uVar8 = _ASN1_tag2bit((int)param_1);
        if ((uVar8 & 0x2956) == 0) {
          iVar5 = _ASN1_STRING_copy();
          if (iVar5 != 0) goto LAB_010b6f30;
          goto LAB_010b7021;
        }
        piVar2[1] = 0xc;
        pAVar1 = (ASN1_ITEM *)(piVar2 + 2);
        iVar5 = _ASN1_STRING_to_UTF8((uchar **)param_1,(ASN1_STRING *)it);
        *piVar2 = iVar5;
        if (iVar5 != -1) {
          if (0 < iVar5) {
            pcVar16 = *(char **)pAVar1;
            param_1 = (char *)pAVar1;
            do {
              iVar7 = _ossl_ctype_check();
              if (iVar7 == 0) goto LAB_010b6ee0;
              pcVar16 = pcVar16 + 1;
              bVar3 = 1 < iVar5;
              iVar5 = iVar5 + -1;
            } while (bVar3);
          }
          goto LAB_010b6f10;
        }
        uVar17 = 0;
        goto LAB_010b7023;
      }
      iVar6 = 0x14f;
      goto LAB_010b7019;
    }
LAB_010b7052:
    iVar6 = _OPENSSL_sk_num();
    if (iVar6 < 1) {
      iVar9 = 0;
LAB_010b70bd:
      *(int *)(this_ptr + 0x20) = iVar9;
      it = (ASN1_ITEM *)(section_00000158.sectname + 0xe);
      pvVar15 = _CRYPTO_malloc((int)param_1,section_00000158.sectname + 0xe,iVar7);
      if (pvVar15 != (void *)0x0) {
        *(void **)(this_ptr + 0x18) = pvVar15;
        iVar5 = _OPENSSL_sk_num();
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            iVar6 = _OPENSSL_sk_value();
            it = (ASN1_ITEM *)&g_025b7258;
            param_1 = (char *)0xffffffff;
            iVar6 = _ASN1_item_ex_i2d((ASN1_VALUE **)0xffffffff,(uchar **)&g_025b7258,
                                      (ASN1_ITEM *)0xffffffff,tag,iVar6);
            if (iVar6 < 0) break;
            iVar5 = iVar5 + 1;
            iVar6 = _OPENSSL_sk_num();
          } while (iVar5 < iVar6);
        }
        uVar17 = 1;
        goto LAB_010b7023;
      }
      iVar6 = 0x168;
      goto LAB_010b7019;
    }
    iVar6 = 0;
    iVar9 = 0;
    do {
      iVar5 = _OPENSSL_sk_value();
      it = (ASN1_ITEM *)&g_025b7258;
      param_1 = (char *)0xffffffff;
      iVar7 = -1;
      iVar10 = _ASN1_item_ex_i2d((ASN1_VALUE **)0xffffffff,(uchar **)&g_025b7258,
                                 (ASN1_ITEM *)0xffffffff,tag,iVar5);
      if (iVar10 < 0) goto LAB_010b7021;
      iVar9 = iVar9 + iVar10;
      iVar6 = iVar6 + 1;
      iVar10 = _OPENSSL_sk_num();
    } while (iVar6 < iVar10);
    if (-1 < iVar9) goto LAB_010b70bd;
  }
LAB_010b7021:
  uVar17 = 0;
LAB_010b7023:
  _ASN1_item_free((ASN1_VALUE *)param_1,it);
  _OPENSSL_sk_pop_free();
  return uVar17;
  while (bVar3 = 1 < iVar5, iVar5 = iVar5 + -1, bVar3) {
LAB_010b6ee0:
    iVar7 = _ossl_ctype_check();
    if (iVar7 == 0) {
      pcVar19 = *(char **)pAVar1;
      iVar7 = 0;
      goto LAB_010b6f85;
    }
  }
LAB_010b6f10:
  pcVar19 = *(char **)pAVar1;
  iVar5 = (int)pcVar19;
LAB_010b6f1a:
  *piVar2 = (int)pcVar19 - iVar5;
LAB_010b6f30:
  iVar7 = _OPENSSL_sk_push();
  iVar5 = (int)in_stack_ffffffffffffffa8;
  if (iVar7 == 0) {
    iVar6 = 0x15a;
LAB_010b71b2:
    it = (ASN1_ITEM *)((int64_t)&segment_command_00000020.vmsize + 1);
    param_1 = "crypto/x509/x_name.c";
    _ERR_put_error(0x201d8fb,0x41,iVar6,(char *)CONCAT44(uVar18,tag),iVar5);
    goto LAB_010b7021;
  }
  iVar6 = iVar6 + 1;
  iVar9 = _OPENSSL_sk_num();
  iVar5 = (int)in_stack_ffffffffffffffa8;
  iVar7 = (int)param_3;
  if (iVar9 <= iVar6) goto LAB_010b7052;
  goto LAB_010b6db0;
LAB_010b6f85:
  do {
    if (*pcVar16 < '\0') {
      *pcVar19 = *pcVar16;
LAB_010b6f78:
      pcVar16 = pcVar16 + 1;
      iVar7 = iVar7 + 1;
    }
    else {
      iVar9 = _ossl_ctype_check();
      if (iVar9 == 0) {
        cVar4 = _ossl_tolower();
        *pcVar19 = cVar4;
        goto LAB_010b6f78;
      }
      *pcVar19 = ' ';
      do {
        iVar7 = iVar7 + 1;
        pcVar16 = pcVar16 + 1;
        iVar9 = _ossl_ctype_check();
      } while (iVar9 != 0);
    }
    pcVar19 = pcVar19 + 1;
  } while (iVar7 < iVar5);
  uVar17._0_1_ = pAVar1->itype;
  uVar17._1_3_ = *(void*)&pAVar1->field_0x1;
  uVar17._4_4_ = pAVar1->utype;
  iVar5 = (int)uVar17;
  goto LAB_010b6f1a;
}

