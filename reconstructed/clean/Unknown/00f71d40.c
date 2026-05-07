// Function: FUN_00f71d40
// Address: 00f71d40
// Size: 2123 bytes
// Class: Unknown
// String references:
//   "\n"
//   "crypto/asn1/tasn_prn.c"
//   "<ABSENT>\n"
//   ":EXTERNAL TYPE %s\n"
//   "ERROR: selector [%d] invalid\n"
//   " {\n"
//   "%*s}\n"
//   "Unprocessed type %d\n"
//   "NULL\n"
//   "BOOL ABSENT"
//   "FALSE"
//   "TRUE"
//   "%s (%s)"
//   " (%ld unused bits)\n"

bool FUN_00f71d40(BIO *param_1,uint param_2,ASN1_ITEM *param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  BIO *pBVar3;
  char *pcVar4;
  ASN1_OBJECT *pAVar5;
  BIO *pBVar6;
  ASN1_ITEM *it;
  BIO *bp;
  ASN1_TEMPLATE *tt;
  bool bVar7;
  _func_4494 *p_Var8;
  _func_4494 **arg1;
  int len;
  ASN1_OBJECT *pAVar9;
  code *pcVar10;
  int64_t lVar11;
  int local_res8;
  ASN1_OBJECT *local_res10;
  int in_stack_ffffffffffffff58;
  int64_t local_38;
  
  bp = (BIO *)(uint64_t)param_2;
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar11 = *(int64_t *)&param_1->flags;
  if ((lVar11 == 0) || (pcVar10 = *(code **)(lVar11 + 0x18), pcVar10 == 0x0)) {
    pcVar10 = 0x0;
    it = (ASN1_ITEM *)(uint64_t)(uint)(int)*(char *)&param_1->method;
    if ((int)*(char *)&param_1->method == 0) goto LAB_00f71db4;
LAB_00f71dbf:
    if (*arg1 == (_func_4494 *)0x0) {
      if (((uint64_t)local_res10->sn & 1) != 0) {
        if ((local_res8 == 0) &&
           (iVar1 = FUN_00f72620(), param_1 = (BIO *)param_4, it = param_3, iVar1 == 0))
        goto LAB_00f72574;
        iVar1 = _BIO_puts(param_1,&it->itype);
joined_r0x00f71e9a:
        if (iVar1 < 1) goto LAB_00f72574;
      }
      goto LAB_00f72519;
    }
    pBVar6 = param_1;
    if (6 < (uint)it) {
switchD_00f71de5_caseD_3:
      _BIO_printf(pBVar6,&it->itype);
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        return false;
      }
      goto LAB_00f72586;
    }
    pBVar6 = (BIO *)((int64_t)&switchD_00f71de5::switchdataD_00f7258c +
                    (int64_t)(int)(&switchD_00f71de5::switchdataD_00f7258c)[(int64_t)it]);
    switch(it) {
    case (ASN1_ITEM *)0x0:
      goto switchD_00f71de5_caseD_0;
    default:
      if (((local_res8 == 0) &&
          (pBVar6 = (BIO *)param_4, it = param_3, iVar1 = FUN_00f72620(), iVar1 == 0)) ||
         ((pAVar9 = local_res10, param_3 != (ASN1_ITEM *)0x0 || (BIO *)param_4 != (BIO *)0x0 &&
          (iVar1 = _BIO_puts(pBVar6,&it->itype), iVar1 < 1)))) goto LAB_00f72574;
      if (pcVar10 != 0x0) {
        pBVar6 = (BIO *)&stack0xffffffffffffff38;
        iVar1 = (*pcVar10)(pBVar6,param_1);
        bVar7 = false;
        if (iVar1 == 0) goto LAB_00f7251e;
        if (iVar1 == 2) goto LAB_00f72519;
      }
      if (0 < (int64_t)*(ASN1_ITEM_EXP **)&param_1->init) {
        lVar11 = 0;
        do {
          tt = (ASN1_TEMPLATE *)((int64_t)&MACH_HEADER.magic + 1);
          pBVar3 = (BIO *)_asn1_do_adb((ASN1_VALUE **)pBVar6,
                                       (ASN1_TEMPLATE *)((int64_t)&MACH_HEADER.magic + 1),
                                       (int)pAVar9);
          if (pBVar3 == (BIO *)0x0) goto LAB_00f72574;
          _asn1_get_field_ptr((ASN1_VALUE **)pBVar6,tt);
          pAVar9 = local_res10;
          iVar1 = FUN_00f72750(pBVar3,param_2 + 2);
          if (iVar1 == 0) goto LAB_00f72574;
          lVar11 = lVar11 + 1;
          pBVar6 = pBVar3;
        } while (lVar11 < (int64_t)*(ASN1_ITEM_EXP **)&param_1->init);
      }
      if (((uint64_t)local_res10->sn & 2) != 0) {
        bVar7 = false;
        iVar1 = _BIO_printf((BIO *)"",(char *)bp);
        if (iVar1 < 0) goto LAB_00f7251e;
      }
      if (pcVar10 == 0x0) goto LAB_00f72519;
      iVar1 = (*pcVar10)(&stack0xffffffffffffff38,param_1);
      break;
    case (ASN1_ITEM *)0x2:
      uVar2 = _asn1_get_choice_selector((ASN1_VALUE **)pBVar6,it);
      if (((int)uVar2 < 0) ||
         (pBVar6 = (BIO *)(uint64_t)uVar2,
         (int64_t)*(ASN1_ITEM_EXP **)&param_1->init <= (int64_t)pBVar6)) {
        iVar1 = _BIO_printf(pBVar6,(char *)(uint64_t)uVar2);
        if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
          return 0 < iVar1;
        }
        goto LAB_00f72586;
      }
      pcVar4 = param_1->cb_arg;
      _asn1_get_field_ptr((ASN1_VALUE **)pBVar6,(ASN1_TEMPLATE *)param_1);
      iVar1 = FUN_00f72750(pcVar4 + (int64_t)pBVar6 * 0x28,bp,local_res10);
      break;
    case (ASN1_ITEM *)0x3:
      goto switchD_00f71de5_caseD_3;
    case (ASN1_ITEM *)0x4:
      if (local_res8 == 0) {
        pBVar6 = (BIO *)param_4;
        iVar1 = FUN_00f72620(param_4,param_3);
        if (iVar1 == 0) goto LAB_00f72574;
        lVar11._0_4_ = param_1->flags;
        lVar11._4_4_ = param_1->retry_reason;
      }
      if ((lVar11 == 0) || (*(code **)(lVar11 + 0x30) == 0x0)) {
        if ((BIO *)param_4 != (BIO *)0x0) {
          iVar1 = _BIO_printf(pBVar6,param_4,local_res10);
          goto joined_r0x00f723a8;
        }
      }
      else {
        pcVar4 = "";
        iVar1 = (**(code **)(lVar11 + 0x30))();
        bVar7 = false;
        if (iVar1 == 0) goto LAB_00f7251e;
        if (iVar1 == 2) {
          iVar1 = _BIO_puts((BIO *)pcVar4,(char *)bp);
          goto joined_r0x00f71e9a;
        }
      }
      goto LAB_00f72519;
    case (ASN1_ITEM *)0x5:
      goto switchD_00f71de5_caseD_5;
    }
    if (iVar1 == 0) goto LAB_00f72574;
    goto LAB_00f72519;
  }
  it = (ASN1_ITEM *)(uint64_t)(uint)(int)*(char *)&param_1->method;
  if ((int)*(char *)&param_1->method != 0) goto LAB_00f71dbf;
LAB_00f71db4:
  if (param_1->callback != (_func_4494 *)((int64_t)&MACH_HEADER.magic + 1)) goto LAB_00f71dbf;
switchD_00f71de5_caseD_0:
  if (param_1->cb_arg != (char *)0x0) {
    iVar1 = FUN_00f72750(param_1->cb_arg,bp);
    if (iVar1 != 0) goto LAB_00f72519;
    goto LAB_00f72574;
  }
switchD_00f71de5_caseD_5:
  pAVar9 = local_res10;
  uVar2 = param_2;
  iVar1 = FUN_00f72620(param_4,param_3);
  if (iVar1 == 0) goto LAB_00f72574;
  if ((lVar11 != 0) && (*(code **)(lVar11 + 0x38) != 0x0)) {
    iVar1 = (**(code **)(lVar11 + 0x38))(bp,param_1,local_res10);
    bVar7 = false;
    if (iVar1 != 0) goto LAB_00f72519;
    goto LAB_00f7251e;
  }
  if (*(char *)&param_1->method == '\x05') {
    param_4 = (char *)*arg1;
    p_Var8 = (_func_4494 *)
             ((int64_t)*(int *)((int64_t)&((BIO *)param_4)->method + 4) & 0xfffffffffffffeff);
    pBVar6 = (BIO *)param_4;
LAB_00f722b9:
    if (((uint64_t)local_res10->sn & 8) == 0) {
      pcVar4 = (char *)0x0;
      pBVar3 = pBVar6;
    }
    else {
LAB_00f72370:
      pcVar4 = _ASN1_tag2str((int)param_4);
      pBVar3 = pBVar6;
    }
    if (p_Var8 != (_func_4494 *)((int64_t)&MACH_HEADER.cputype + 1)) goto LAB_00f722d1;
LAB_00f72389:
    iVar1 = _BIO_puts((BIO *)param_4,(char *)local_res10);
    goto joined_r0x00f723a8;
  }
  p_Var8 = param_1->callback;
  if (p_Var8 == (_func_4494 *)((int64_t)&MACH_HEADER.magic + 1)) {
    p_Var8 = (_func_4494 *)((int64_t)&MACH_HEADER.magic + 1);
    pBVar6 = (BIO *)0x0;
    goto LAB_00f722b9;
  }
  pBVar6 = (BIO *)*arg1;
  if (p_Var8 != (_func_4494 *)0xfffffffffffffffc) goto LAB_00f722b9;
  p_Var8 = (_func_4494 *)(int64_t)*(int *)&pBVar6->method;
  pBVar3 = (BIO *)pBVar6->callback;
  arg1 = &pBVar6->callback;
  pBVar6 = pBVar3;
  if (((uint64_t)local_res10->sn & 0x10) == 0) goto LAB_00f72370;
  pcVar4 = (char *)0x0;
  if (p_Var8 == (_func_4494 *)((int64_t)&MACH_HEADER.cputype + 1)) goto LAB_00f72389;
LAB_00f722d1:
  if ((pcVar4 != (char *)0x0) &&
     ((pAVar5 = local_res10, iVar1 = _BIO_puts((BIO *)param_4,(char *)local_res10), iVar1 < 1 ||
      (iVar1 = _BIO_puts((BIO *)param_4,(char *)pAVar5), iVar1 < 1)))) goto LAB_00f72574;
  if ((void*)((int64_t)&MACH_HEADER.flags + 3) < p_Var8 + 3) {
switchD_00f72326_caseD_fffffffe:
    local_res10 = *(ASN1_OBJECT **)&local_res10->flags;
    uVar2 = _ASN1_STRING_print_ex((BIO *)param_4,(ASN1_STRING *)local_res10,(ulong)pAVar9);
    goto LAB_00f724fd;
  }
  param_4 = (char *)((int64_t)&switchD_00f72326::switchdataD_00f725a8 +
                    (int64_t)(int)(&switchD_00f72326::switchdataD_00f725a8)[(int64_t)(p_Var8 + 3)]
                    );
  switch(p_Var8) {
  case (_func_4494 *)0x1:
    iVar1 = *(int *)arg1;
    if (iVar1 == -1) {
      iVar1 = param_1->num;
    }
    param_4 = "FALSE";
    local_res10 = (ASN1_OBJECT *)0x2008fc7;
    if (iVar1 == 0) {
      local_res10 = (ASN1_OBJECT *)0x2008fc1;
    }
    iVar1 = _BIO_puts((BIO *)"FALSE",(char *)local_res10);
    goto LAB_00f724d2;
  case (_func_4494 *)0x2:
  case (_func_4494 *)0xa:
    bVar7 = false;
    pcVar4 = _i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)param_4,(ASN1_INTEGER *)local_res10);
    if (pcVar4 != (char *)0x0) {
      iVar1 = _BIO_puts((BIO *)param_4,(char *)local_res10);
      uVar2 = (uint)(0 < iVar1);
      local_res10 = (ASN1_OBJECT *)((int64_t)&section_00000158.reloff + 2);
      _CRYPTO_free(param_4);
      break;
    }
    goto LAB_00f7251e;
  case (_func_4494 *)0x3:
  case (_func_4494 *)0x4:
    if (*(int *)((int64_t)&pBVar3->method + 4) == 3) {
      bVar7 = false;
      iVar1 = _BIO_printf((BIO *)param_4,(char *)(uint64_t)((uint)pBVar3->cb_arg & 7));
      len = (int)pAVar9;
      if (iVar1 < 1) goto LAB_00f7251e;
    }
    else {
      iVar1 = _BIO_puts((BIO *)param_4,(char *)local_res10);
      len = (int)pAVar9;
      if (iVar1 < 1) goto LAB_00f72574;
    }
    if ((int)*(uint *)&pBVar3->method < 1) goto LAB_00f72519;
    iVar1 = _BIO_dump_indent((BIO *)(uint64_t)(param_2 + 2),
                             (char *)(uint64_t)*(uint *)&pBVar3->method,len,uVar2);
    goto joined_r0x00f723a8;
  case (_func_4494 *)0x6:
    p_Var8 = *arg1;
    _OBJ_obj2nid((ASN1_OBJECT *)param_4);
    pAVar5 = (ASN1_OBJECT *)_OBJ_nid2ln((int)param_4);
    local_res10 = (ASN1_OBJECT *)"";
    if (pAVar5 != (ASN1_OBJECT *)0x0) {
      local_res10 = pAVar5;
    }
    param_4 = &stack0xffffffffffffff78;
    _OBJ_obj2txt((char *)((int64_t)&MACH_HEADER.magic + 1),(int)p_Var8,pAVar9,uVar2);
    iVar1 = _BIO_printf((BIO *)param_4,(char *)local_res10);
LAB_00f724d2:
    uVar2 = (uint)(0 < iVar1);
    break;
  case (_func_4494 *)0x17:
    uVar2 = _ASN1_UTCTIME_print((BIO *)param_4,(ASN1_UTCTIME *)local_res10);
    break;
  case (_func_4494 *)0x18:
    uVar2 = _ASN1_GENERALIZEDTIME_print((BIO *)param_4,(ASN1_GENERALIZEDTIME *)local_res10);
    break;
  case (_func_4494 *)0xfffffffffffffffd:
  case (_func_4494 *)0x10:
  case (_func_4494 *)0x11:
    iVar1 = _BIO_puts((BIO *)param_4,(char *)local_res10);
    bVar7 = false;
    if (0 < iVar1) {
      iVar1 = _ASN1_parse_dump(bp,(uchar *)(int64_t)*(int *)&pBVar3->method,0,uVar2,
                               in_stack_ffffffffffffff58);
      goto joined_r0x00f723a8;
    }
    goto LAB_00f7251e;
  default:
    goto switchD_00f72326_caseD_fffffffe;
  }
LAB_00f724fd:
  if (uVar2 == 0) {
LAB_00f72574:
    if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
      return false;
    }
  }
  else {
    iVar1 = _BIO_puts((BIO *)param_4,(char *)local_res10);
joined_r0x00f723a8:
    bVar7 = false;
    if (0 < iVar1) {
LAB_00f72519:
      bVar7 = true;
    }
LAB_00f7251e:
    if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
      return bVar7;
    }
  }
LAB_00f72586:
                      ___stack_chk_fail();
}

