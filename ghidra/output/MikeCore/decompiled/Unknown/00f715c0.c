// Function: FUN_00f715c0
// Address: 00f715c0
// Size: 979 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/tasn_new.c"


undefined8 FUN_00f715c0(undefined8 param_1,int param_2,ASN1_ITEM *param_3,char *param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ASN1_VALUE **ppAVar4;
  ASN1_VALUE *pAVar5;
  uint uVar6;
  ASN1_VALUE **pval;
  ASN1_ITEM *pAVar7;
  code *pcVar8;
  ulonglong *puVar9;
  ASN1_ITEM *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  undefined8 uVar10;
  longlong lVar11;
  int line;
  
  line = (int)unaff_R12;
  lVar11 = *(longlong *)&unaff_RSI->size;
  if ((lVar11 == 0) || (pcVar8 = *(code **)(lVar11 + 0x18), pcVar8 == (code *)0x0)) {
    pcVar8 = (code *)0x0;
  }
  uVar6 = (uint)unaff_RSI->itype;
  uVar10 = 1;
  if (6 < uVar6) {
    return 1;
  }
  pval = (ASN1_VALUE **)
         ((longlong)&switchD_00f71610::switchdataD_00f71994 +
         (longlong)(int)(&switchD_00f71610::switchdataD_00f71994)[uVar6]);
  iVar3 = (int)unaff_RSI;
  switch(uVar6) {
  case 0:
    if (*(ulonglong **)&unaff_RSI->tcount != (ulonglong *)0x0) {
      uVar1 = **(ulonglong **)&unaff_RSI->tcount;
      if ((uVar1 & 0x1000) != 0) {
        unaff_RDI = (longlong *)&stack0xffffffffffffffc0;
      }
      if ((uVar1 & 1) != 0) {
        FUN_00f71b30();
        return 1;
      }
      if ((uVar1 & 0x300) != 0) {
        *unaff_RDI = 0;
        return 1;
      }
      if ((uVar1 & 6) == 0) {
        iVar3 = FUN_00f715c0();
        if (iVar3 != 0) {
          return 1;
        }
      }
      else {
        lVar11 = _OPENSSL_sk_new_null();
        if (lVar11 != 0) {
          *unaff_RDI = lVar11;
          return 1;
        }
        _ERR_put_error(0x2008ee4,0x41,0xe7,param_4,line);
      }
      goto LAB_00f7195e;
    }
    break;
  default:
    if (pcVar8 != (code *)0x0) {
      pval = (ASN1_VALUE **)0x0;
      iVar2 = (*pcVar8)();
      line = (int)unaff_R12;
      if (iVar2 != 0) {
        if (iVar2 == 2) {
          return 1;
        }
        goto LAB_00f71634;
      }
      goto LAB_00f718a6;
    }
LAB_00f71634:
    pAVar7 = unaff_RSI;
    if (param_2 == 0) {
      lVar11 = _CRYPTO_zalloc();
      line = (int)unaff_R12;
      *unaff_RDI = lVar11;
      if (lVar11 != 0) {
        iVar3 = _asn1_do_lock(pval,iVar3,param_3);
        line = (int)unaff_R12;
        if (-1 < iVar3) goto LAB_00f71758;
        _CRYPTO_free(pval);
        *unaff_RDI = 0;
      }
    }
    else {
      ___bzero();
      iVar3 = _asn1_do_lock(pval,iVar3,param_3);
      line = (int)unaff_R12;
      if (-1 < iVar3) {
LAB_00f71758:
        _asn1_enc_init(pval,pAVar7);
        line = (int)unaff_R12;
        if (0 < (longlong)unaff_RSI->funcs) {
          puVar9 = *(ulonglong **)&unaff_RSI->tcount;
          lVar11 = 0;
          do {
            ppAVar4 = _asn1_get_field_ptr(pval,(ASN1_TEMPLATE *)pAVar7);
            uVar1 = *puVar9;
            pAVar7 = (ASN1_ITEM *)(ulonglong)((uint)uVar1 & 0x1000);
            if ((uVar1 & 0x1000) != 0) {
              ppAVar4 = (ASN1_VALUE **)&stack0xffffffffffffffc0;
            }
            if ((uVar1 & 1) == 0) {
              if ((uVar1 & 0x300) == 0) {
                if ((uVar1 & 6) == 0) {
                  iVar3 = FUN_00f715c0();
                  line = (int)unaff_R12;
                  if (iVar3 == 0) goto LAB_00f7192d;
                }
                else {
                  pAVar5 = (ASN1_VALUE *)_OPENSSL_sk_new_null();
                  line = (int)unaff_R12;
                  if (pAVar5 == (ASN1_VALUE *)0x0) {
                    _ERR_put_error(0x2008ee4,0x41,0xe7,param_4,line);
LAB_00f7192d:
                    _asn1_item_embed_free();
                    goto LAB_00f7195e;
                  }
                  *ppAVar4 = pAVar5;
                }
              }
              else {
                *ppAVar4 = (ASN1_VALUE *)0x0;
              }
            }
            else {
              FUN_00f71b30();
            }
            line = (int)unaff_R12;
            puVar9 = puVar9 + 5;
            lVar11 = lVar11 + 1;
          } while (lVar11 < (longlong)unaff_RSI->funcs);
        }
        if (pcVar8 == (code *)0x0) {
          return 1;
        }
        iVar3 = (*pcVar8)(0);
        goto joined_r0x00f71892;
      }
    }
    goto LAB_00f7195e;
  case 2:
    if (pcVar8 != (code *)0x0) {
      pval = (ASN1_VALUE **)0x0;
      iVar2 = (*pcVar8)();
      if (iVar2 == 0) goto LAB_00f718a6;
      if (iVar2 == 2) {
        return 1;
      }
    }
    if (param_2 == 0) {
      lVar11 = _CRYPTO_zalloc();
      *unaff_RDI = lVar11;
      if (lVar11 == 0) goto LAB_00f7195e;
    }
    else {
      ___bzero();
    }
    _asn1_set_choice_selector(pval,iVar3,param_3);
    if (pcVar8 == (code *)0x0) {
      return 1;
    }
    iVar3 = (*pcVar8)(0);
joined_r0x00f71892:
    if (iVar3 != 0) {
      return 1;
    }
    _asn1_item_embed_free();
LAB_00f718a6:
    iVar3 = 100;
    iVar2 = 0xa1;
    goto LAB_00f7197a;
  case 3:
    goto switchD_00f71610_caseD_3;
  case 4:
    if (lVar11 == 0) {
      return 1;
    }
    if (*(code **)(lVar11 + 8) == (code *)0x0) {
      return 1;
    }
    iVar3 = (**(code **)(lVar11 + 8))();
    goto joined_r0x00f71717;
  case 5:
    break;
  }
  iVar3 = FUN_00f719b0(pval,param_2);
joined_r0x00f71717:
  if (iVar3 == 0) {
LAB_00f7195e:
    iVar3 = 0x41;
    iVar2 = 0x98;
LAB_00f7197a:
    _ERR_put_error(0x2008ee4,iVar3,iVar2,param_4,line);
    uVar10 = 0;
  }
switchD_00f71610_caseD_3:
  return uVar10;
}


