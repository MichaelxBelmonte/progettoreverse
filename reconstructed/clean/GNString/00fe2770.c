// Function: FUN_00fe2770
// Address: 00fe2770
// Size: 667 bytes
// Class: GNString
// String references:
//   "crypto/ec/ec_pmeth.c"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


bool FUN_00fe2770(EC_GROUP *param_1,uint64_t *param_2,int param_3,EC_KEY *param_4)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  EC_POINT *pEVar4;
  void *pvVar5;
  uint64_t uVar6;
  int iVar7;
  EC_KEY *pEVar8;
  void *out;
  int64_t arg1;
  int64_t this_ptr;
  KDF *KDF;
  bool bVar9;
  KDF *in_stack_ffffffffffffffc8;
  
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    pEVar8 = *(EC_KEY **)(this_ptr + 0x10);
    if ((pEVar8 == (EC_KEY *)0x0) || (*(int64_t *)(this_ptr + 0x18) == 0)) {
      _ERR_put_error(0x200ef38,0x8c,0xa0,(char *)param_4,(int)in_stack_ffffffffffffffc8);
      return false;
    }
    pvVar5 = *(void **)(lVar1 + 0x10);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = *(void **)(pEVar8 + 0x28);
    }
    if (arg1 == 0) {
      _EC_KEY_get0_group(pEVar8);
      iVar3 = _EC_GROUP_get_degree((EC_GROUP *)pEVar8);
      iVar7 = iVar3 + 7;
      if (-1 < iVar3 + 7) {
        iVar7 = iVar3;
      }
      uVar6 = (uint64_t)(iVar7 + 7 >> 3);
    }
    else {
      pEVar4 = _EC_KEY_get0_public_key(pEVar8);
      uVar2 = _ECDH_compute_key(pvVar5,(size_t)pEVar4,(EC_POINT *)0x0,param_4,
                                in_stack_ffffffffffffffc8);
      if ((int)uVar2 < 1) {
        return false;
      }
      uVar6 = (uint64_t)uVar2;
    }
  }
  else {
    if (arg1 != 0) {
      if (*param_2 != *(uint64_t *)(lVar1 + 0x38)) {
        return false;
      }
      if ((*(int64_t *)(this_ptr + 0x10) != 0) && (*(int64_t *)(this_ptr + 0x18) != 0)) {
        _EC_KEY_get0_group((EC_KEY *)param_1);
        iVar3 = _EC_GROUP_get_degree(param_1);
        iVar7 = iVar3 + 7;
        if (-1 < iVar3 + 7) {
          iVar7 = iVar3;
        }
        iVar7 = iVar7 + 7 >> 3;
        KDF = (KDF *)(int64_t)iVar7;
        pvVar5 = _CRYPTO_malloc(iVar7,section_000000b8.segname + 5,param_3);
        if (pvVar5 != (void *)0x0) {
          if ((*(int64_t *)(this_ptr + 0x10) == 0) ||
             (*(EC_KEY **)(this_ptr + 0x18) == (EC_KEY *)0x0)) {
            _ERR_put_error(0x200ef38,0x8c,0xa0,(char *)param_4,(int)KDF);
            bVar9 = false;
          }
          else {
            out = *(void **)(*(int64_t *)(this_ptr + 0x28) + 0x10);
            if (out == (void *)0x0) {
              out = *(void **)(*(int64_t *)(this_ptr + 0x10) + 0x28);
            }
            pEVar4 = _EC_KEY_get0_public_key(*(EC_KEY **)(this_ptr + 0x18));
            bVar9 = false;
            iVar7 = _ECDH_compute_key(out,(size_t)pEVar4,(EC_POINT *)0x0,param_4,KDF);
            if (0 < iVar7) {
              iVar7 = _ecdh_KDF_X9_63(iVar7,pvVar5,*(void*)(lVar1 + 0x28),
                                      *(void*)(lVar1 + 0x30));
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
    uVar6 = *(uint64_t *)(lVar1 + 0x38);
  }
  *param_2 = uVar6;
  return true;
}

