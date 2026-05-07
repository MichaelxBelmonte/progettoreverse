// Function: FUN_00f6eee0
// Address: 00f6eee0
// Size: 2172 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/tasn_dec.c"


undefined4 FUN_00f6eee0(ASN1_STRING *param_1,undefined8 param_2,uint param_3,ASN1_STRING **param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ASN1_STRING *pAVar5;
  ASN1_INTEGER *pAVar6;
  undefined4 extraout_var;
  ASN1_OBJECT *pAVar7;
  ASN1_STRING *pAVar8;
  char *pcVar9;
  uint *str;
  ASN1_STRING *pAVar10;
  ASN1_STRING *data;
  undefined4 uVar11;
  uint uVar12;
  ASN1_STRING *unaff_RSI;
  _union_3061 *unaff_RDI;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  char *value;
  ASN1_STRING **file;
  ASN1_STRING *pAVar16;
  _union_3061 *p_Var17;
  longlong lVar18;
  longlong lVar19;
  char local_res8;
  undefined1 *local_res10;
  long local_c8;
  undefined1 local_c4 [12];
  ASN1_STRING *local_b8;
  ASN1_STRING *local_b0;
  ASN1_STRING *pAStack_a0;
  ASN1_STRING *local_70;
  ASN1_STRING *local_60;
  ASN1_STRING *local_58;
  ASN1_STRING *local_50;
  uint local_44;
  char local_33;
  byte local_32;
  char local_31;
  
  local_31 = '\0';
  pAVar5 = (ASN1_STRING *)0x0;
  pAStack_a0 = (ASN1_STRING *)0x0;
  if (unaff_RDI == (_union_3061 *)0x0) {
    iVar3 = 0x7d;
    iVar14 = 0x2a0;
    goto LAB_00f6f0c7;
  }
  if ((char)param_1->length == '\x05') {
    local_44 = param_3;
    if (param_3 == 0xfffffffc) {
LAB_00f6ef99:
      if (local_res8 != '\0') {
        iVar3 = 0x7e;
        iVar14 = 0x2b3;
        goto LAB_00f6f0c7;
      }
      local_50 = *(ASN1_STRING **)unaff_RSI;
      file = &local_50;
      local_58 = param_1;
      iVar3 = FUN_00f6f7e0(0,&local_60,0);
      if (iVar3 == 0) {
        _ERR_put_error(0x2008e8a,0x3a,0x2ba,(char *)file,(int)pAVar5);
        return 0;
      }
      param_1 = local_58;
      if ((char)local_60 != '\0') {
        local_44 = 0xfffffffd;
      }
    }
  }
  else {
    local_44 = ((_union_3061 *)&param_1->data)->boolean;
    if (local_44 == 0xfffffffc) {
      if (-1 < (int)param_3) {
        iVar3 = 0x7f;
        iVar14 = 0x2ae;
        goto LAB_00f6f0c7;
      }
      goto LAB_00f6ef99;
    }
  }
  local_50 = *(ASN1_STRING **)unaff_RSI;
  value = &local_33;
  param_4 = &local_50;
  local_58 = param_1;
  iVar3 = FUN_00f6f7e0(&local_32,0,value,param_4,local_res10);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  if (iVar3 == 0) {
    iVar3 = 0x3a;
    iVar14 = 0x2c9;
LAB_00f6f0c7:
    _ERR_put_error(0x2008e8a,iVar3,iVar14,(char *)param_4,(int)pAVar5);
    return 0;
  }
  if (1 < local_44 - 0x10) {
    if (local_44 == 0xfffffffd) {
      if (local_res10 != (undefined1 *)0x0) {
        *local_res10 = 0;
      }
      goto LAB_00f6f12b;
    }
    pAVar8 = unaff_RSI;
    data = local_70;
    pAVar10 = local_50;
    if (local_33 == '\0') goto LAB_00f6f33a;
    if ((local_44 < 0xb) && ((0x466U >> (local_44 & 0x1f) & 1) != 0)) {
      iVar3 = 0xc3;
      iVar14 = 0x2ed;
      goto LAB_00f6f0c7;
    }
    local_31 = '\x01';
    pAVar8 = (ASN1_STRING *)(ulonglong)(uint)(int)(char)local_32;
    uVar11 = 0;
    value = (char *)0x0;
    data = pAVar5;
    iVar3 = FUN_00f6fde0();
    pcVar9 = (char *)pAVar8;
    if (iVar3 != 0) {
      pAVar5 = data;
      iVar3 = _BUF_MEM_grow_clean((BUF_MEM *)pAVar8,(int)local_70);
      iVar14 = (int)pAVar5;
      if (CONCAT44(extraout_var,iVar3) == 0) {
        pcVar9 = "crypto/asn1/tasn_dec.c";
        _ERR_put_error(0x2008e8a,0x41,0x2ff,(char *)param_4,iVar14);
        goto joined_r0x00f6f751;
      }
      *(undefined1 *)&data->length = 0;
      goto LAB_00f6f342;
    }
    goto joined_r0x00f6f751;
  }
  if (local_33 == '\0') {
    iVar3 = 0x9c;
    iVar14 = 0x2db;
    goto LAB_00f6f0c7;
  }
LAB_00f6f12b:
  pAVar10 = *(ASN1_STRING **)unaff_RSI;
  uVar12 = (uint)local_32;
  if (local_32 != 0) {
    local_b8 = pAVar10;
    if (0 < (longlong)local_70) {
      uVar13 = 1;
      pAVar10 = local_50;
      do {
        iVar3 = (int)uVar13;
        local_c4._4_8_ = uVar13 & 0xffffffff;
        pAVar8 = (ASN1_STRING *)(local_c4._4_8_ - 1);
        lVar19 = 0;
        lVar18 = 0;
        while( true ) {
          pcVar9 = (char *)((longlong)&local_70->length + lVar19);
          iVar14 = (int)lVar18;
          if ((((int *)pcVar9 == (int *)((longlong)&MACH_HEADER.magic + 1)) ||
              (*(char *)((longlong)&pAVar10->length + lVar18 * 2) != '\0')) ||
             (*(char *)((longlong)&pAVar10->length + lVar18 * 2 + 1) != '\0')) break;
          if ((int)pAVar8 == iVar14) {
            pAVar16 = (ASN1_STRING *)((longlong)&pAVar10->length + (ulonglong)(iVar3 - 1) * 2 + 2);
            goto LAB_00f6f31e;
          }
          lVar18 = lVar18 + 1;
          lVar1 = (longlong)&local_70->length + lVar19;
          lVar19 = lVar19 + -2;
          if (lVar1 < 3) goto LAB_00f6f296;
        }
        pAVar16 = (ASN1_STRING *)((longlong)pAVar10 - lVar19);
        value = pcVar9;
        uVar4 = _ASN1_get_object((uchar **)local_c4,&local_c8,(int *)pcVar9,(int *)param_4,
                                 (long)pAVar5);
        if ((char)uVar4 < '\0') {
          value = section_00000470.sectname + 1;
          _ERR_put_error(0x2008e8a,0x66,0x471,(char *)param_4,(int)pAVar5);
          pAVar8 = local_b0;
        }
        else {
          uVar12 = uVar4 & 1;
          pAVar8 = local_60;
          if (uVar12 != 0) {
            pAVar8 = (ASN1_STRING *)
                     (pcVar9 + (longlong)((longlong)pAVar10 + (-(longlong)pAVar16 - lVar19)));
          }
        }
        if ((char)uVar4 < '\0') {
          pcVar9 = "crypto/asn1/tasn_dec.c";
          _ERR_put_error(0x2008e8a,0x3a,0x3c5,(char *)param_4,(int)pAVar5);
          goto LAB_00f6f647;
        }
        local_b0 = pAVar8;
        if ((char)uVar12 == '\0') {
          uVar13 = local_c4._4_8_ - lVar18;
          pAVar16 = (ASN1_STRING *)((longlong)&pAVar8->length + (longlong)&pAVar16->length);
        }
        else {
          if (iVar3 + 1 == iVar14) {
            pcVar9 = "crypto/asn1/tasn_dec.c";
            _ERR_put_error(0x2008e8a,0x3a,0x3ca,(char *)param_4,(int)pAVar5);
            goto LAB_00f6f647;
          }
          uVar13 = (ulonglong)((iVar3 - iVar14) + 1);
        }
        local_70 = (ASN1_STRING *)
                   (pcVar9 + (longlong)((longlong)pAVar10 + (-(longlong)pAVar16 - lVar19)));
        pAVar10 = pAVar16;
      } while (0 < (longlong)local_70);
      if ((int)uVar13 == 0) {
LAB_00f6f31e:
        data = (ASN1_STRING *)((longlong)pAVar16 - (longlong)local_b8);
        pAStack_a0 = local_b8;
        local_50 = pAVar16;
        goto LAB_00f6f33e;
      }
    }
LAB_00f6f296:
    pcVar9 = "crypto/asn1/tasn_dec.c";
    _ERR_put_error(0x2008e8a,0x89,0x3d4,(char *)param_4,(int)pAVar5);
    goto LAB_00f6f647;
  }
  pAVar8 = local_70;
  data = (ASN1_STRING *)(((longlong)local_50 - (longlong)pAVar10) + (longlong)local_70);
LAB_00f6f33a:
  pAStack_a0 = pAVar10;
  local_50 = (ASN1_STRING *)((longlong)&local_70->length + (longlong)&local_50->length);
LAB_00f6f33e:
  iVar14 = (int)pAVar5;
LAB_00f6f342:
  uVar12 = local_44;
  pcVar9 = (char *)(ulonglong)local_44;
  local_60 = pAStack_a0;
  if ((local_58[1].data != (uchar *)0x0) &&
     (pcVar2 = *(code **)(local_58[1].data + 0x28), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(pcVar9,data,&local_31);
    if (iVar3 == 0) goto LAB_00f6f647;
    goto LAB_00f6f694;
  }
  pAVar5 = (ASN1_STRING *)0x0;
  pAVar10 = local_58;
  if (((_union_3061 *)&local_58->data)->ptr == (char *)0xfffffffffffffffc) {
    pAVar5 = unaff_RDI->asn1_string;
    if (pAVar5 == (ASN1_STRING *)0x0) {
      pAVar5 = (ASN1_STRING *)_ASN1_TYPE_new();
      if (pAVar5 == (ASN1_STRING *)0x0) {
        _ASN1_TYPE_free((ASN1_TYPE *)pAVar8);
        pcVar9 = (char *)pAVar8;
        goto LAB_00f6f647;
      }
      unaff_RDI->asn1_string = pAVar5;
    }
    if (pAVar5->length != uVar12) {
      _ASN1_TYPE_set((ASN1_TYPE *)pAVar8,0,value);
    }
    p_Var17 = unaff_RDI;
    unaff_RDI = (_union_3061 *)&pAVar5->data;
  }
  else {
    p_Var17 = (_union_3061 *)0x0;
  }
  iVar15 = (int)value;
  iVar3 = (int)data;
  str = &switchD_00f6f3ee::switchdataD_00f6f75c;
  switch(uVar12) {
  case 1:
    if (iVar3 == 1) {
      *(uint *)unaff_RDI = (uint)(byte)pAStack_a0->length;
      goto LAB_00f6f694;
    }
    iVar3 = 0x6a;
    iVar15 = 0x345;
    break;
  case 2:
  case 10:
    pAVar6 = _c2i_ASN1_INTEGER((ASN1_INTEGER **)&switchD_00f6f3ee::switchdataD_00f6f75c,
                               (uchar **)(longlong)iVar3,iVar15);
    pcVar9 = (char *)str;
    if (pAVar6 != (ASN1_INTEGER *)0x0) {
      unaff_RDI->asn1_string->type = unaff_RDI->asn1_string->type & 0x100U | uVar12;
LAB_00f6f682:
      if ((pAVar5 != (ASN1_STRING *)0x0) && (uVar12 == 5)) {
        ((_union_3061 *)&pAVar5->data)->ptr = (char *)0x0;
      }
      goto LAB_00f6f694;
    }
    goto LAB_00f6f632;
  case 3:
    pAVar7 = (ASN1_OBJECT *)
             _c2i_ASN1_BIT_STRING
                       ((ASN1_BIT_STRING **)&switchD_00f6f3ee::switchdataD_00f6f75c,
                        (uchar **)(longlong)iVar3,iVar15);
    pcVar9 = (char *)str;
    goto LAB_00f6f4ec;
  default:
switchD_00f6f3ee_caseD_4:
    pAVar8 = unaff_RDI->asn1_string;
    if (pAVar8 != (ASN1_STRING *)0x0) {
      pAVar8->type = uVar12;
LAB_00f6f573:
      if (local_31 == '\0') {
        iVar3 = _ASN1_STRING_set((ASN1_STRING *)str,data,iVar15);
        if (iVar3 == 0) {
          pcVar9 = "crypto/asn1/tasn_dec.c";
          _ERR_put_error(0x2008e8a,0x41,0x38b,(char *)pAVar10,iVar14);
          _ASN1_STRING_free((ASN1_STRING *)pcVar9);
          unaff_RDI->ptr = (char *)0x0;
          _ASN1_TYPE_free((ASN1_TYPE *)pcVar9);
          goto joined_r0x00f6f5ef;
        }
      }
      else {
        _CRYPTO_free(str);
        pAVar8->data = (uchar *)pAStack_a0;
        pAVar8->length = iVar3;
        local_31 = '\0';
      }
      goto LAB_00f6f694;
    }
    local_58 = pAVar5;
    pAVar8 = _ASN1_STRING_type_new((int)str);
    if (pAVar8 != (ASN1_STRING *)0x0) {
      unaff_RDI->asn1_string = pAVar8;
      goto LAB_00f6f573;
    }
    pcVar9 = "crypto/asn1/tasn_dec.c";
    _ERR_put_error(0x2008e8a,0x41,0x37b,(char *)pAVar10,iVar14);
    _ASN1_TYPE_free((ASN1_TYPE *)pcVar9);
joined_r0x00f6f5ef:
    if (p_Var17 == (_union_3061 *)0x0) goto LAB_00f6f647;
    goto LAB_00f6f63f;
  case 5:
    if (iVar3 == 0) {
      *unaff_RDI = (_union_3061)0x1;
      goto LAB_00f6f682;
    }
    iVar3 = 0x90;
    iVar15 = 0x33d;
    break;
  case 6:
    pAVar7 = _c2i_ASN1_OBJECT((ASN1_OBJECT **)&switchD_00f6f3ee::switchdataD_00f6f75c,
                              (uchar **)(longlong)iVar3,iVar15);
    pcVar9 = (char *)str;
LAB_00f6f4ec:
    if (pAVar7 == (ASN1_OBJECT *)0x0) goto LAB_00f6f632;
LAB_00f6f694:
    *(ASN1_STRING **)unaff_RSI = local_50;
    uVar11 = 1;
    pcVar9 = (char *)unaff_RSI;
joined_r0x00f6f751:
    if (local_31 == '\0') {
      return uVar11;
    }
    goto LAB_00f6f6ae;
  case 0x1c:
    if (((ulonglong)data & 3) == 0) goto switchD_00f6f3ee_caseD_4;
    iVar3 = 0xd7;
    iVar15 = 0x374;
    break;
  case 0x1e:
    if (((ulonglong)data & 1) == 0) goto switchD_00f6f3ee_caseD_4;
    iVar3 = 0xd6;
    iVar15 = 0x36f;
  }
  pcVar9 = "crypto/asn1/tasn_dec.c";
  _ERR_put_error(0x2008e8a,iVar3,iVar15,(char *)pAVar10,iVar14);
LAB_00f6f632:
  _ASN1_TYPE_free((ASN1_TYPE *)pcVar9);
  if (p_Var17 != (_union_3061 *)0x0) {
LAB_00f6f63f:
    p_Var17->ptr = (char *)0x0;
  }
LAB_00f6f647:
  uVar11 = 0;
  if (local_31 != '\0') {
LAB_00f6f6ae:
    _CRYPTO_free(pcVar9);
  }
  return uVar11;
}


