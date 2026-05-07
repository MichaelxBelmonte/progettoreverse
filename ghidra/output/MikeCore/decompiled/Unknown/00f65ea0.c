// Function: FUN_00f65ea0
// Address: 00f65ea0
// Size: 2393 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/asn1_gen.c"
//   "string="


ASN1_TYPE * FUN_00f65ea0(X509V3_CTX *param_1,int param_2,undefined8 param_3,list_cb *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong len;
  uint uVar6;
  longlong lVar7;
  STACK *pSVar8;
  ASN1_INTEGER *pAVar9;
  uchar *puVar10;
  ASN1_TYPE *pAVar11;
  ASN1_STRING *pAVar12;
  ASN1_OBJECT *pAVar13;
  undefined1 *puVar14;
  code *pcVar15;
  uint *str;
  char *pcVar16;
  ASN1_TYPE **a;
  char **ppcVar17;
  longlong unaff_RSI;
  size_t line;
  ASN1_STRING *ptag;
  int inform;
  undefined4 uVar18;
  int *piVar19;
  undefined1 local_288 [16];
  char *local_278 [2];
  ulong in_stack_fffffffffffffd98;
  undefined4 in_stack_fffffffffffffd9c;
  int local_260 [116];
  uint local_90;
  long local_88;
  undefined1 local_84 [12];
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  dword local_58;
  undefined1 *local_40;
  
  uVar18 = (undefined4)((ulonglong)param_4 >> 0x20);
  inform = (int)param_4;
  local_78 = 0;
  local_70 = 0;
  local_288._0_8_ = 0xffffffffffffffff;
  local_288._12_4_ = 1;
  local_90 = 0;
  pcVar15 = FUN_00f669f0;
  ptag = (ASN1_STRING *)local_288;
  pSVar8 = (STACK *)((longlong)&MACH_HEADER.magic + 1);
  iVar4 = _CONF_parse_list((char *)FUN_00f669f0,1,(int)ptag,param_4,
                           (void *)CONCAT44(in_stack_fffffffffffffd9c,in_stack_fffffffffffffd98));
  uVar2 = local_288._12_4_;
  if (iVar4 != 0) {
    param_1->flags = 0xc2;
    return (ASN1_TYPE *)0x0;
  }
  local_68 = (ulonglong)(uint)local_288._8_4_;
  if ((local_288._8_4_ & 0xfffffffe) != 0x10) {
    pAVar11 = _ASN1_TYPE_new();
    if (pAVar11 == (ASN1_TYPE *)0x0) {
      _ERR_put_error(0x200850c,0x41,0x24b,(char *)CONCAT44(uVar18,inform),in_stack_fffffffffffffd98)
      ;
      return (ASN1_TYPE *)0x0;
    }
    pcVar16 = "";
    if (local_278[0] != (char *)0x0) {
      pcVar16 = local_278[0];
    }
    iVar4 = (int)local_68;
    str = &switchD_00f65f9e::switchdataD_00f66804;
    switch(iVar4) {
    case 1:
      if (uVar2 != 1) {
        pcVar16 = "crypto/asn1/asn1_gen.c";
        _ERR_put_error(0x200850c,0xbe,0x25d,(char *)CONCAT44(uVar18,inform),
                       in_stack_fffffffffffffd98);
        goto LAB_00f665ed;
      }
      iVar5 = _X509V3_get_value_bool
                        ((CONF_VALUE *)&switchD_00f65f9e::switchdataD_00f66804,&pSVar8->num);
      if (iVar5 != 0) goto LAB_00f660ea;
      iVar4 = 0xb0;
      iVar5 = 0x264;
      break;
    case 2:
    case 10:
      if (uVar2 != 1) {
        pcVar16 = "crypto/asn1/asn1_gen.c";
        _ERR_put_error(0x200850c,0xb9,0x26c,(char *)CONCAT44(uVar18,inform),
                       in_stack_fffffffffffffd98);
        goto LAB_00f665ed;
      }
      pAVar9 = _s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)&switchD_00f65f9e::switchdataD_00f66804,
                                 (char *)pSVar8);
      (pAVar11->value).integer = pAVar9;
      if (pAVar9 != (ASN1_INTEGER *)0x0) goto LAB_00f660ea;
      iVar4 = 0xb4;
      iVar5 = 0x271;
      break;
    case 3:
    case 4:
      pAVar12 = _ASN1_STRING_new();
      (pAVar11->value).asn1_string = pAVar12;
      if (pAVar12 == (ASN1_STRING *)0x0) {
        pcVar16 = "crypto/asn1/asn1_gen.c";
        _ERR_put_error(0x200850c,0x41,0x2b4,(char *)CONCAT44(uVar18,inform),
                       in_stack_fffffffffffffd98);
        goto LAB_00f665ed;
      }
      if (uVar2 == 1) {
        pSVar8 = (STACK *)0xffffffff;
        _ASN1_STRING_set((ASN1_STRING *)str,(void *)0xffffffff,(int)ptag);
LAB_00f664e2:
        if (iVar4 == 3) {
          plVar1 = &((pAVar11->value).asn1_string)->flags;
          *(ulonglong *)plVar1 = *(ulonglong *)plVar1 & 0xfffffffffffffff0;
          plVar1 = &((pAVar11->value).asn1_string)->flags;
          *(ulonglong *)plVar1 = *(ulonglong *)plVar1 | 8;
        }
        goto LAB_00f660ea;
      }
      if (uVar2 == 3) {
        puVar10 = (uchar *)_OPENSSL_hexstr2buf();
        if (puVar10 != (uchar *)0x0) {
          ((pAVar11->value).asn1_string)->data = puVar10;
          str = (uint *)(pAVar11->value).asn1_string;
          ((X509V3_CTX *)str)->flags = local_58;
          ((pAVar11->value).asn1_string)->type = iVar4;
          goto LAB_00f664e2;
        }
        iVar4 = 0xb2;
        iVar5 = 0x2ba;
      }
      else {
        if ((uVar2 != 4) || (iVar4 != 3)) {
          pcVar16 = "crypto/asn1/asn1_gen.c";
          _ERR_put_error(0x200850c,0xaf,0x2cc,(char *)CONCAT44(uVar18,inform),
                         in_stack_fffffffffffffd98);
          goto LAB_00f665ed;
        }
        pcVar15 = FUN_00f67090;
        pSVar8 = (STACK *)((longlong)&MACH_HEADER.magic + 1);
        iVar5 = _CONF_parse_list((char *)FUN_00f67090,1,(int)pAVar12,
                                 (list_cb *)CONCAT44(uVar18,inform),
                                 (void *)CONCAT44(in_stack_fffffffffffffd9c,
                                                  in_stack_fffffffffffffd98));
        str = (uint *)pcVar15;
        ptag = pAVar12;
        if (iVar5 != 0) goto LAB_00f660ea;
        iVar4 = 0xbc;
        iVar5 = 0x2c6;
      }
      break;
    case 5:
      if (*pcVar16 != '\0') {
        pcVar16 = "crypto/asn1/asn1_gen.c";
        _ERR_put_error(0x200850c,0xb6,0x256,(char *)CONCAT44(uVar18,inform),
                       in_stack_fffffffffffffd98);
        goto LAB_00f665ed;
      }
LAB_00f660ea:
      pAVar11->type = iVar4;
      goto joined_r0x00f660f1;
    case 6:
      if (uVar2 != 1) {
        pcVar16 = "crypto/asn1/asn1_gen.c";
        _ERR_put_error(0x200850c,0xbf,0x278,(char *)CONCAT44(uVar18,inform),
                       in_stack_fffffffffffffd98);
        goto LAB_00f665ed;
      }
      pAVar13 = _OBJ_txt2obj((char *)&switchD_00f65f9e::switchdataD_00f66804,(int)pSVar8);
      (pAVar11->value).object = pAVar13;
      if (pAVar13 != (ASN1_OBJECT *)0x0) goto LAB_00f660ea;
      iVar4 = 0xb7;
      iVar5 = 0x27c;
      break;
    default:
      iVar4 = 0xc4;
      iVar5 = 0x2d9;
      break;
    case 0xc:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1e:
      if (uVar2 == 1) {
        str = (uint *)((longlong)&dylib_command_00000ff0.dylib.current_version + 1);
      }
      else {
        if (uVar2 != 2) {
          pcVar16 = "crypto/asn1/asn1_gen.c";
          _ERR_put_error(0x200850c,0xb1,0x2a5,(char *)CONCAT44(uVar18,inform),
                         in_stack_fffffffffffffd98);
          goto LAB_00f665ed;
        }
        str = &dylib_command_00000ff0.dylib.current_version;
      }
      len = _ASN1_tag2bit(0xf66804);
      ptag = (ASN1_STRING *)(ulonglong)len;
      pSVar8 = (STACK *)0xffffffff;
      iVar5 = _ASN1_mbstring_copy((ASN1_STRING **)str,(uchar *)0xffffffff,len,inform,
                                  in_stack_fffffffffffffd98);
      if (0 < iVar5) goto LAB_00f660ea;
      iVar4 = 0x41;
      iVar5 = 0x2ab;
      break;
    case 0x17:
    case 0x18:
      if (uVar2 != 1) {
        pcVar16 = "crypto/asn1/asn1_gen.c";
        _ERR_put_error(0x200850c,0xc1,0x284,(char *)CONCAT44(uVar18,inform),
                       in_stack_fffffffffffffd98);
        goto LAB_00f665ed;
      }
      pAVar12 = _ASN1_STRING_new();
      (pAVar11->value).asn1_string = pAVar12;
      if (pAVar12 == (ASN1_STRING *)0x0) {
        iVar4 = 0x41;
        iVar5 = 0x288;
      }
      else {
        pSVar8 = (STACK *)0xffffffff;
        iVar5 = _ASN1_STRING_set((ASN1_STRING *)str,(void *)0xffffffff,(int)ptag);
        if (iVar5 == 0) {
          iVar4 = 0x41;
          iVar5 = 0x28c;
        }
        else {
          ((pAVar11->value).asn1_string)->type = iVar4;
          iVar5 = _ASN1_TIME_check((ASN1_TIME *)str);
          if (iVar5 != 0) goto LAB_00f660ea;
          iVar4 = 0xb8;
          iVar5 = 0x291;
        }
      }
    }
    pcVar16 = "crypto/asn1/asn1_gen.c";
    _ERR_put_error(0x200850c,iVar4,iVar5,(char *)CONCAT44(uVar18,inform),in_stack_fffffffffffffd98);
    _ERR_add_error_data((int)pcVar16);
LAB_00f665ed:
    _ASN1_TYPE_free((ASN1_TYPE *)pcVar16);
    return (ASN1_TYPE *)0x0;
  }
  if (unaff_RSI == 0) {
    param_1->flags = 0xc0;
    return (ASN1_TYPE *)0x0;
  }
  if (0x31 < param_2) {
    param_1->flags = 0xb5;
    return (ASN1_TYPE *)0x0;
  }
  lVar7 = _OPENSSL_sk_new_null();
  if (lVar7 == 0) {
LAB_00f660b0:
    pAVar11 = (ASN1_TYPE *)0x0;
  }
  else {
    if (local_278[0] != (char *)0x0) {
      pSVar8 = _X509V3_get_section((X509V3_CTX *)pcVar15,(char *)pSVar8);
      if (pSVar8 == (STACK *)0x0) goto LAB_00f660b0;
      iVar4 = _OPENSSL_sk_num();
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          _OPENSSL_sk_value();
          pcVar15 = (code *)param_1;
          lVar7 = FUN_00f65ea0(param_1,param_2 + 1);
          if ((lVar7 == 0) || (iVar5 = _OPENSSL_sk_push(), iVar5 == 0)) {
            pAVar11 = (ASN1_TYPE *)0x0;
            goto LAB_00f66422;
          }
          iVar4 = iVar4 + 1;
          iVar5 = _OPENSSL_sk_num();
        } while (iVar4 < iVar5);
      }
    }
    iVar4 = (int)local_68;
    if (iVar4 == 0x11) {
      iVar5 = _i2d_ASN1_SET_ANY();
    }
    else {
      iVar5 = _i2d_ASN1_SEQUENCE_ANY();
    }
    if (iVar5 < 0) {
      pAVar11 = (ASN1_TYPE *)0x0;
    }
    else {
      pAVar11 = _ASN1_TYPE_new();
      if (pAVar11 == (ASN1_TYPE *)0x0) {
        pAVar11 = (ASN1_TYPE *)0x0;
      }
      else {
        pAVar12 = _ASN1_STRING_type_new((int)pcVar15);
        (pAVar11->value).asn1_string = pAVar12;
        if (pAVar12 != (ASN1_STRING *)0x0) {
          pAVar11->type = iVar4;
          pcVar15 = (code *)0x0;
          pAVar12->data = (uchar *)0x0;
          ((pAVar11->value).asn1_string)->length = iVar5;
        }
      }
    }
  }
LAB_00f66422:
  pSVar8 = (STACK *)((longlong)&section_000001a8.addr + 2);
  _CRYPTO_free(pcVar15);
  _OPENSSL_sk_pop_free();
  _X509V3_section_free((X509V3_CTX *)pcVar15,pSVar8);
  str = (uint *)pcVar15;
joined_r0x00f660f1:
  if (pAVar11 == (ASN1_TYPE *)0x0) {
    return (ASN1_TYPE *)0x0;
  }
  if ((local_288._0_4_ == -1) && (local_90 == 0)) {
    return pAVar11;
  }
  iVar5 = _i2d_ASN1_TYPE((ASN1_TYPE *)str,(uchar **)pSVar8);
  _ASN1_TYPE_free((ASN1_TYPE *)str);
  uVar3 = local_78;
  iVar4 = iVar5;
  if (local_288._0_4_ == -1) {
LAB_00f6669d:
    line = (size_t)ptag;
    a = (ASN1_TYPE **)(ulonglong)local_90;
    local_68 = CONCAT44(local_68._4_4_,iVar5);
    if (0 < (int)local_90) {
      ppcVar17 = local_278 + (longlong)a * 3;
      iVar5 = 0;
      do {
        a = (ASN1_TYPE **)(longlong)*(int *)((longlong)ppcVar17 + -4);
        *ppcVar17 = (char *)((longlong)iVar4 + (longlong)a);
        iVar4 = _ASN1_object_size(*(int *)((longlong)ppcVar17 + -4),*(int *)(ppcVar17 + -2),
                                  (int)ptag);
        line = (size_t)ptag;
        iVar5 = iVar5 + 1;
        ppcVar17 = ppcVar17 + -3;
      } while (iVar5 < (int)local_90);
    }
    puVar14 = _CRYPTO_malloc((int)a,section_000000b8.sectname + 0xb,line);
    if (puVar14 != (undefined1 *)0x0) {
      if (0 < (int)local_90) {
        piVar19 = local_260;
        iVar5 = 0;
        local_40 = puVar14;
        do {
          line = piVar19[-3];
          _ASN1_put_object((uchar **)(ulonglong)(uint)piVar19[-4],*piVar19,line,inform,
                           in_stack_fffffffffffffd98);
          if (piVar19[-1] != 0) {
            *local_40 = 0;
            local_40 = local_40 + 1;
          }
          iVar5 = iVar5 + 1;
          piVar19 = piVar19 + 6;
        } while (iVar5 < (int)local_90);
      }
      a = (ASN1_TYPE **)(local_288._0_8_ & 0xffffffff);
      if (local_288._0_4_ != -1) {
        line = local_288._4_4_;
        _ASN1_put_object((uchar **)a,(int)local_70,local_288._4_4_,inform,in_stack_fffffffffffffd98)
        ;
      }
      _memcpy(a,(void *)(longlong)(int)local_68,line);
      local_84._4_8_ = puVar14;
      pAVar11 = _d2i_ASN1_TYPE(a,(uchar **)(longlong)iVar4,line);
      goto LAB_00f667d4;
    }
  }
  else {
    ptag = (ASN1_STRING *)(longlong)iVar5;
    a = (ASN1_TYPE **)local_84;
    uVar6 = _ASN1_get_object((uchar **)a,&local_88,(int *)ptag,(int *)CONCAT44(uVar18,inform),
                             in_stack_fffffffffffffd98);
    if (-1 < (char)uVar6) {
      local_58 = (dword)uVar3;
      if ((uVar6 & 1) != 0) {
        local_70 = 0;
      }
      iVar5 = iVar5 + ((int)local_78 - local_58);
      iVar4 = _ASN1_object_size((int)a,local_288._0_4_,(int)ptag);
      goto LAB_00f6669d;
    }
  }
  pAVar11 = (ASN1_TYPE *)0x0;
LAB_00f667d4:
  _CRYPTO_free(a);
  _CRYPTO_free(a);
  return pAVar11;
}


