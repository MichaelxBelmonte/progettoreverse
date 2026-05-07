// Function: FUN_00fe2770
// Address: 00fe2770
// Size: 667 bytes
// Class: GNString
// String references:
//   "crypto/ec/ec_pmeth.c"


bool FUN_00fe2770(EC_GROUP *param_1,ulonglong *param_2,int param_3,EC_KEY *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  EC_POINT *pEVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  EC_KEY *pEVar8;
  void *out;
  longlong unaff_RSI;
  longlong unaff_RDI;
  KDF *KDF;
  bool bVar9;
  KDF *in_stack_ffffffffffffffc8;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    pEVar8 = *(EC_KEY **)(unaff_RDI + 0x10);
    if ((pEVar8 == (EC_KEY *)0x0) || (*(longlong *)(unaff_RDI + 0x18) == 0)) {
      _ERR_put_error(0x200ef38,0x8c,0xa0,(char *)param_4,(int)in_stack_ffffffffffffffc8);
      return false;
    }
    pvVar5 = *(void **)(lVar1 + 0x10);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = *(void **)(pEVar8 + 0x28);
    }
    if (unaff_RSI == 0) {
      _EC_KEY_get0_group(pEVar8);
      iVar3 = _EC_GROUP_get_degree((EC_GROUP *)pEVar8);
      iVar7 = iVar3 + 7;
      if (-1 < iVar3 + 7) {
        iVar7 = iVar3;
      }
      uVar6 = (ulonglong)(iVar7 + 7 >> 3);
    }
    else {
      pEVar4 = _EC_KEY_get0_public_key(pEVar8);
      uVar2 = _ECDH_compute_key(pvVar5,(size_t)pEVar4,(EC_POINT *)0x0,param_4,
                                in_stack_ffffffffffffffc8);
      if ((int)uVar2 < 1) {
        return false;
      }
      uVar6 = (ulonglong)uVar2;
    }
  }
  else {
    if (unaff_RSI != 0) {
      if (*param_2 != *(ulonglong *)(lVar1 + 0x38)) {
        return false;
      }
      if ((*(longlong *)(unaff_RDI + 0x10) != 0) && (*(longlong *)(unaff_RDI + 0x18) != 0)) {
        _EC_KEY_get0_group((EC_KEY *)param_1);
        iVar3 = _EC_GROUP_get_degree(param_1);
        iVar7 = iVar3 + 7;
        if (-1 < iVar3 + 7) {
          iVar7 = iVar3;
        }
        iVar7 = iVar7 + 7 >> 3;
        KDF = (KDF *)(longlong)iVar7;
        pvVar5 = _CRYPTO_malloc(iVar7,section_000000b8.segname + 5,param_3);
        if (pvVar5 != (void *)0x0) {
          if ((*(longlong *)(unaff_RDI + 0x10) == 0) ||
             (*(EC_KEY **)(unaff_RDI + 0x18) == (EC_KEY *)0x0)) {
            _ERR_put_error(0x200ef38,0x8c,0xa0,(char *)param_4,(int)KDF);
            bVar9 = false;
          }
          else {
            out = *(void **)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
            if (out == (void *)0x0) {
              out = *(void **)(*(longlong *)(unaff_RDI + 0x10) + 0x28);
            }
            pEVar4 = _EC_KEY_get0_public_key(*(EC_KEY **)(unaff_RDI + 0x18));
            bVar9 = false;
            iVar7 = _ECDH_compute_key(out,(size_t)pEVar4,(EC_POINT *)0x0,param_4,KDF);
            if (0 < iVar7) {
              iVar7 = _ecdh_KDF_X9_63(iVar7,pvVar5,*(undefined8 *)(lVar1 + 0x28),
                                      *(undefined8 *)(lVar1 + 0x30));
              bVar9 = iVar7 != 0;
            }
          }
          _CRYPTO_clear_free(0xda,"crypto/ec/ec_pmeth.c");
          return bVar9;
        }
        _ERR_put_error(0x200ef38,0x41,0xce,(char *)param_4,(int)KDF);
        return false;
      }
      _ERR_put_error(0x200ef38,0x8c,0xa0,(char *)param_4,(int)in_stack_ffffffffffffffc8);
      return false;
    }
    uVar6 = *(ulonglong *)(lVar1 + 0x38);
  }
  *param_2 = uVar6;
  return true;
}


