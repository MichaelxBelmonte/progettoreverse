// Function: FUN_00f6e2c0
// Address: 00f6e2c0
// Size: 2568 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/tasn_dec.c"
//   "Field="
//   ", Type="
//   "Type="

uint64_t FUN_00f6e2c0(ASN1_ITEM *param_1,char *param_2,ASN1_ITEM *param_3,uint32_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ASN1_TEMPLATE *pAVar6;
  uint64_t uVar7;
  ASN1_VALUE **ppAVar8;
  uint uVar9;
  ASN1_VALUE **ppAVar10;
  ASN1_ITEM *pAVar11;
  ASN1_TEMPLATE *pAVar12;
  char *pcVar13;
  ASN1_ITEM *it;
  char cVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int64_t *arg1;
  ASN1_ITEM *this_ptr;
  ASN1_ITEM *pAVar17;
  int64_t lVar18;
  char local_res8;
  ASN1_ITEM *local_res10;
  int local_res18;
  ASN1_ITEM *in_stack_ffffffffffffff98;
  char *local_60;
  uint local_54;
  char *local_50;
  char local_32;
  char local_31;
  
  if (this_ptr == (ASN1_ITEM *)0x0) {
    return 0;
  }
  lVar18 = *(int64_t *)&param_1->size;
  if ((lVar18 != 0) && (pAVar17 = *(ASN1_ITEM **)(lVar18 + 0x18), pAVar17 != (ASN1_ITEM *)0x0)) {
    if (local_res18 < 0x1e) goto LAB_00f6e36e;
LAB_00f6e310:
    iVar4 = 0xc9;
    iVar5 = 0xa0;
    goto LAB_00f6e32c;
  }
  pAVar17 = (ASN1_ITEM *)0x0;
  if (0x1d < local_res18) goto LAB_00f6e310;
LAB_00f6e36e:
  uVar9 = (uint)param_1->itype;
  if (6 < uVar9) {
    return 0;
  }
  ppAVar10 = (ASN1_VALUE **)
             ((int64_t)&switchD_00f6e38c::switchdataD_00f6eccc +
             (int64_t)(int)(&switchD_00f6e38c::switchdataD_00f6eccc)[uVar9]);
  iVar4 = (int)param_3;
  switch(uVar9) {
  case 0:
    if (*(int64_t *)&param_1->tcount == 0) {
      uVar16 = FUN_00f6eee0(param_1,param_2,param_3,param_4);
      return uVar16;
    }
    if ((iVar4 == -1) && (local_res8 == '\0')) {
      uVar16 = FUN_00f6ecf0(*(int64_t *)&param_1->tcount,param_2,0,local_res10);
      return uVar16;
    }
    iVar4 = 0xaa;
    iVar5 = 0xaf;
    break;
  default:
    local_50 = (char *)*arg1;
    pAVar11 = (ASN1_ITEM *)&local_50;
    it = (ASN1_ITEM *)0x0;
    in_stack_ffffffffffffff98 = pAVar17;
    iVar4 = FUN_00f6f7e0(&local_54,0,&local_32);
    if (iVar4 == -1) {
      return 0xffffffff;
    }
    pAVar17 = pAVar11;
    if (iVar4 == 0) {
      iVar4 = 0x3a;
      iVar5 = 0x135;
    }
    else {
      if ((lVar18 == 0) || ((*(byte *)(lVar18 + 8) & 4) == 0)) {
        local_60 = param_2;
        cVar14 = (char)local_54;
      }
      else {
        local_60 = param_2 + (*arg1 - (int64_t)local_50);
        cVar14 = '\x01';
      }
      if (local_32 == '\0') {
        iVar4 = 0x95;
        iVar5 = 0x141;
      }
      else {
        lVar15._0_1_ = this_ptr->itype;
        lVar15._1_3_ = *(void*)&this_ptr->field_0x1;
        lVar15._4_4_ = this_ptr->utype;
        if ((lVar15 == 0) &&
           (iVar4 = _ASN1_item_ex_new((ASN1_VALUE **)in_stack_ffffffffffffff98,it),
           pAVar17 = pAVar11, iVar4 == 0)) {
          iVar4 = 0x3a;
          iVar5 = 0x146;
        }
        else {
          if ((in_stack_ffffffffffffff98 != (ASN1_ITEM *)0x0) &&
             (iVar4 = (*in_stack_ffffffffffffff98)(0), iVar4 == 0)) goto LAB_00f6ec3b;
          lVar18 = *(int64_t *)&param_1->tcount;
          iVar4 = (int)this_ptr;
          if ((int64_t)param_1->funcs < 1) {
            uVar16 = 0;
          }
          else {
            lVar15 = 0;
            local_31 = cVar14;
            do {
              if ((*(byte *)(lVar18 + 1) & 3) != 0) {
                pAVar12 = (ASN1_TEMPLATE *)0x0;
                pAVar11 = param_1;
                pAVar6 = _asn1_do_adb((ASN1_VALUE **)param_1,(ASN1_TEMPLATE *)0x0,iVar4);
                if (pAVar6 != (ASN1_TEMPLATE *)0x0) {
                  _asn1_get_field_ptr((ASN1_VALUE **)pAVar11,pAVar12);
                  _asn1_template_free();
                }
              }
              lVar15 = lVar15 + 1;
              lVar18 = lVar18 + 0x28;
            } while (lVar15 < (int64_t)param_1->funcs);
            uVar16 = 0;
            cVar14 = local_31;
            if (0 < (int64_t)param_1->funcs) {
              do {
                pAVar12 = (ASN1_TEMPLATE *)((int64_t)&MACH_HEADER.magic + 1);
                pcVar13 = &param_1->itype;
                pAVar6 = _asn1_do_adb((ASN1_VALUE **)param_1,
                                      (ASN1_TEMPLATE *)((int64_t)&MACH_HEADER.magic + 1),iVar4);
                if (pAVar6 == (ASN1_TEMPLATE *)0x0) goto LAB_00f6e331;
                _asn1_get_field_ptr((ASN1_VALUE **)pcVar13,pAVar12);
                pcVar13 = local_50;
                cVar14 = local_31;
                if (local_60 == (char *)0x0) break;
                if (((1 < (int64_t)local_60) && (*local_50 == '\0')) && (local_50[1] == '\0')) {
                  pcVar13 = local_50 + 2;
                  if ((char)local_54 == '\0') {
                    iVar4 = 0x9f;
                    iVar5 = 0x168;
                    local_50 = pcVar13;
                    goto LAB_00f6e32c;
                  }
                  local_60 = local_50 + ((int64_t)local_60 - (int64_t)pcVar13);
                  local_54 = local_54 & 0xffffff00;
                  local_50 = pcVar13;
                  goto LAB_00f6eb69;
                }
                if (uVar16 == (int64_t)param_1->funcs - 1U) {
                  bVar3 = 0;
                }
                else {
                  bVar3 = (byte)pAVar6->flags & 1;
                }
                pAVar17 = local_res10;
                iVar5 = FUN_00f6ecf0(pAVar6,local_60,bVar3);
                if (iVar5 == -1) {
                  _asn1_template_free();
                }
                else {
                  if (iVar5 == 0) goto LAB_00f6ec7d;
                  local_60 = pcVar13 + ((int64_t)local_60 - (int64_t)local_50);
                }
                uVar16 = uVar16 + 1;
                cVar14 = local_31;
              } while ((int64_t)uVar16 < (int64_t)param_1->funcs);
            }
          }
          if ((char)local_54 != '\0') {
            if ((((int64_t)local_60 < 2) || (*local_50 != '\0')) || (local_50[1] != '\0')) {
              iVar4 = 0x89;
              iVar5 = 400;
              break;
            }
            local_60 = (char *)0x1;
            local_50 = local_50 + 2;
          }
LAB_00f6eb69:
          if ((cVar14 != '\0') || (local_60 == (char *)0x0)) {
            uVar16 = uVar16 & 0xffffffff;
            if ((int64_t)uVar16 < (int64_t)param_1->funcs) {
              do {
                pAVar12 = (ASN1_TEMPLATE *)((int64_t)&MACH_HEADER.magic + 1);
                pcVar13 = &param_1->itype;
                pAVar6 = _asn1_do_adb((ASN1_VALUE **)param_1,
                                      (ASN1_TEMPLATE *)((int64_t)&MACH_HEADER.magic + 1),iVar4);
                if (pAVar6 == (ASN1_TEMPLATE *)0x0) goto LAB_00f6e331;
                if ((pAVar6->flags & 1) == 0) {
                  _ERR_put_error(0x2008e8a,0x79,0x1a9,&pAVar17->itype,(int)in_stack_ffffffffffffff98
                                );
                  goto LAB_00f6ec7d;
                }
                _asn1_get_field_ptr((ASN1_VALUE **)pcVar13,pAVar12);
                _asn1_template_free();
                uVar16 = uVar16 + 1;
              } while ((int64_t)uVar16 < (int64_t)param_1->funcs);
            }
            pcVar13 = local_50;
            iVar4 = _asn1_enc_save((ASN1_VALUE **)param_1,
                                   (uchar *)(uint64_t)(uint)((int)local_50 - (int)*arg1),iVar4
                                   ,pAVar17);
            if ((iVar4 != 0) &&
               ((in_stack_ffffffffffffff98 == (ASN1_ITEM *)0x0 ||
                (iVar4 = (*in_stack_ffffffffffffff98)(0,param_1), iVar4 != 0)))) {
              *arg1 = (int64_t)pcVar13;
              return 1;
            }
            goto LAB_00f6ec3b;
          }
          iVar4 = 0x94;
          iVar5 = 0x195;
        }
      }
    }
    break;
  case 2:
    if (iVar4 != -1) {
      iVar4 = 0xe6;
      iVar5 = 0xe9;
      break;
    }
    local_31 = local_res8;
    if (pAVar17 != (ASN1_ITEM *)0x0) {
      ppAVar10 = (ASN1_VALUE **)0x0;
      iVar4 = (*pAVar17)(0,param_1);
      if (iVar4 != 0) goto LAB_00f6e538;
LAB_00f6ec3b:
      iVar4 = 100;
      iVar5 = 0x1b9;
      break;
    }
LAB_00f6e538:
    lVar18._0_1_ = this_ptr->itype;
    lVar18._1_3_ = *(void*)&this_ptr->field_0x1;
    lVar18._4_4_ = this_ptr->utype;
    if (lVar18 == 0) {
      in_stack_ffffffffffffff98 = pAVar17;
      iVar4 = _ASN1_item_ex_new(ppAVar10,this_ptr);
      if (iVar4 == 0) {
        iVar4 = 0x3a;
        iVar5 = 0xf9;
        break;
      }
    }
    else {
      in_stack_ffffffffffffff98 = pAVar17;
      uVar9 = _asn1_get_choice_selector(ppAVar10,this_ptr);
      if ((-1 < (int)uVar9) && ((int64_t)(uint64_t)uVar9 < (int64_t)param_1->funcs)) {
        _asn1_get_field_ptr(ppAVar10,(ASN1_TEMPLATE *)param_1);
        _asn1_template_free();
        _asn1_set_choice_selector(ppAVar10,(int)param_1,param_3);
      }
    }
    local_50 = (char *)*arg1;
    ppAVar8 = param_1->funcs;
    if ((int64_t)ppAVar8 < 1) {
      uVar9 = 0;
LAB_00f6eaaf:
      ppAVar10 = (ASN1_VALUE **)(uint64_t)uVar9;
      if (ppAVar8 == ppAVar10) {
        if (local_31 != '\0') {
          _ASN1_item_ex_free(ppAVar10,param_1);
          return 0xffffffff;
        }
        iVar4 = 0x8f;
        iVar5 = 0x11c;
        break;
      }
      _asn1_set_choice_selector(ppAVar10,(int)param_1,param_3);
      if ((in_stack_ffffffffffffff98 == (ASN1_ITEM *)0x0) ||
         (iVar4 = (*in_stack_ffffffffffffff98)(0,param_1), iVar4 != 0)) {
        *arg1 = (int64_t)local_50;
        return 1;
      }
      goto LAB_00f6ec3b;
    }
    pAVar6 = *(ASN1_TEMPLATE **)&param_1->tcount;
    _asn1_get_field_ptr(ppAVar10,(ASN1_TEMPLATE *)param_1);
    param_3 = (ASN1_ITEM *)((int64_t)&MACH_HEADER.magic + 1);
    pAVar12 = pAVar6;
    pAVar17 = local_res10;
    iVar4 = FUN_00f6ecf0(pAVar6,param_2);
    if (iVar4 == -1) {
      lVar18 = 1;
      uVar9 = 0;
      do {
        ppAVar8 = param_1->funcs;
        if ((int64_t)ppAVar8 <= lVar18) {
          uVar9 = (uint)lVar18;
          goto LAB_00f6eaaf;
        }
        pAVar6 = (ASN1_TEMPLATE *)&pAVar6[1].offset;
        _asn1_get_field_ptr((ASN1_VALUE **)pAVar12,(ASN1_TEMPLATE *)param_1);
        param_3 = (ASN1_ITEM *)((int64_t)&MACH_HEADER.magic + 1);
        pAVar12 = pAVar6;
        pAVar17 = local_res10;
        iVar4 = FUN_00f6ecf0(pAVar6,param_2);
        lVar18 = lVar18 + 1;
        uVar9 = uVar9 + 1;
      } while (iVar4 == -1);
    }
    else {
      uVar9 = 0;
    }
    if (0 < iVar4) {
      ppAVar8 = param_1->funcs;
      goto LAB_00f6eaaf;
    }
    _asn1_template_free();
    pcVar13 = "crypto/asn1/tasn_dec.c";
    _ERR_put_error(0x2008e8a,0x3a,0x110,&pAVar17->itype,(int)in_stack_ffffffffffffff98);
    if (pAVar6 != (ASN1_TEMPLATE *)0x0) {
LAB_00f6ec7d:
      uVar2._0_1_ = param_1[1].itype;
      uVar2._1_3_ = *(void*)&param_1[1].field_0x1;
      uVar2._4_4_ = param_1[1].utype;
      _ERR_add_error_data(0x2008ea8,pAVar6->item,uVar2);
      return 0;
    }
    goto LAB_00f6e331;
  case 3:
    goto LAB_00f6e356;
  case 4:
                                            uVar16 = (**(code **)(lVar18 + 0x20))(param_1,param_2,param_3,param_4);
    return uVar16;
  case 5:
    if (iVar4 == -1) {
      local_50 = (char *)*arg1;
      pAVar17 = (ASN1_ITEM *)&local_50;
      iVar4 = FUN_00f6f7e0(0,&local_32,0);
      if (iVar4 == 0) {
        iVar4 = 0x3a;
        iVar5 = 199;
      }
      else if (local_32 == '\0') {
        uVar16 = (uint64_t)local_54;
        if (uVar16 < 0x1f) {
          uVar7 = *(uint64_t *)(&g_023ec1f0 + uVar16 * 8);
        }
        else {
          uVar7 = 0;
        }
        if (((uint64_t)param_1->templates & uVar7) != 0) {
          uVar9 = FUN_00f6eee0(param_1,param_2,uVar16,0);
          return (uint64_t)uVar9;
        }
        if (local_res8 != '\0') {
          return 0xffffffff;
        }
        iVar4 = 0x8c;
        iVar5 = 0xd9;
      }
      else {
        if (local_res8 != '\0') {
          return 0xffffffff;
        }
        iVar4 = 0x8b;
        iVar5 = 0xd0;
      }
    }
    else {
      iVar4 = 0xe6;
      iVar5 = 0xbe;
    }
  }
LAB_00f6e32c:
  pcVar13 = "crypto/asn1/tasn_dec.c";
  _ERR_put_error(0x2008e8a,iVar4,iVar5,&pAVar17->itype,(int)in_stack_ffffffffffffff98);
LAB_00f6e331:
  uVar1._0_1_ = param_1[1].itype;
  uVar1._1_3_ = *(void*)&param_1[1].field_0x1;
  uVar1._4_4_ = param_1[1].utype;
  _ERR_add_error_data((int)pcVar13,uVar1);
LAB_00f6e356:
  return 0;
}

