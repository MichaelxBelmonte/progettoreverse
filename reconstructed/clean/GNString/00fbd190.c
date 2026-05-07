// Function: FUN_00fbd190
// Address: 00fbd190
// Size: 580 bytes
// Class: GNString
// String references:
//   "crypto/dh/dh_key.c"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00fbd190(BIGNUM *param_1,uint64_t param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pmont;
  int64_t lVar4;
  BIGNUM *pBVar5;
  BN_MONT_CTX *pBVar6;
  char *a;
  BIGNUM *a_00;
  int n;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar7;
  
  iVar2 = _BN_num_bits(param_1);
  if (10000 < iVar2) {
    _ERR_put_error(0x200c7a4,0x67,0x71,(char *)param_4,(int)unaff_R12);
    return 0;
  }
  pmont = (BIGNUM *)_BN_CTX_new();
  iVar2 = (int)unaff_R12;
  uVar7 = 0;
  if (pmont == (BIGNUM *)0x0) {
LAB_00fbd22b:
    pBVar5 = (BIGNUM *)0x0;
    lVar4 = 0;
LAB_00fbd231:
    a = "crypto/dh/dh_key.c";
    _ERR_put_error(0x200c7a4,3,0xbb,(char *)param_4,iVar2);
    if (pBVar5 != *(BIGNUM **)(this_ptr + 0x20)) {
      _BN_free((BIGNUM *)a);
    }
    if (lVar4 == *(int64_t *)(this_ptr + 0x28)) goto LAB_00fbd26e;
  }
  else {
    lVar1 = *(int64_t *)(this_ptr + 0x28);
    lVar4 = lVar1;
    if (lVar1 == 0) {
      lVar4 = _BN_secure_new();
      iVar2 = (int)unaff_R12;
      if (lVar4 == 0) goto LAB_00fbd22b;
    }
    pBVar5 = *(BIGNUM **)(this_ptr + 0x20);
    if (pBVar5 == (BIGNUM *)0x0) {
      pBVar5 = _BN_new();
      iVar2 = (int)unaff_R12;
      if (pBVar5 == (BIGNUM *)0x0) {
        pBVar5 = (BIGNUM *)0x0;
        goto LAB_00fbd231;
      }
    }
    if ((*(byte *)(this_ptr + 0x30) & 1) != 0) {
      param_1 = pmont;
      pBVar6 = _BN_MONT_CTX_set_locked
                         ((BN_MONT_CTX **)pmont,(int)*(void*)(this_ptr + 8),param_3,
                          (BN_CTX *)param_4);
      iVar2 = (int)unaff_R12;
      if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_00fbd231;
    }
    iVar2 = (int)unaff_R12;
    if (lVar1 == 0) {
      if (*(int64_t *)(this_ptr + 0x40) == 0) {
        if (*(int *)(this_ptr + 0x18) == 0) {
          _BN_num_bits(param_1);
        }
        n = 0;
        a_00 = (BIGNUM *)0x0;
        iVar3 = _BN_priv_rand();
        if ((iVar3 == 0) ||
           (((iVar3 = _BN_is_word(), iVar3 != 0 && (iVar3 = _BN_is_bit_set(a_00,n), iVar3 == 0)) &&
            (iVar3 = _BN_clear_bit(a_00,n), iVar3 == 0)))) goto LAB_00fbd231;
      }
      else {
        do {
          do {
            iVar3 = _BN_priv_rand_range();
            iVar2 = (int)unaff_R12;
            if (iVar3 == 0) goto LAB_00fbd231;
            iVar2 = _BN_is_zero();
          } while (iVar2 != 0);
          iVar3 = _BN_is_one();
          iVar2 = (int)unaff_R12;
        } while (iVar3 != 0);
      }
    }
    a = (char *)_BN_new();
    if ((BIGNUM *)a == (BIGNUM *)0x0) goto LAB_00fbd231;
    _BN_with_flags();
    iVar3 = (**(code **)(*(int64_t *)(this_ptr + 0x78) + 0x18))
                      (a,*(void*)(this_ptr + 0x10),*(void*)(this_ptr + 8));
    _BN_clear_free((BIGNUM *)a);
    param_4 = pmont;
    if (iVar3 == 0) goto LAB_00fbd231;
    *(BIGNUM **)(this_ptr + 0x20) = pBVar5;
    *(int64_t *)(this_ptr + 0x28) = lVar4;
    uVar7 = 1;
    if (lVar4 == *(int64_t *)(this_ptr + 0x28)) goto LAB_00fbd26e;
  }
  _BN_free((BIGNUM *)a);
LAB_00fbd26e:
  _BN_CTX_free((BN_CTX *)a);
  return uVar7;
}

