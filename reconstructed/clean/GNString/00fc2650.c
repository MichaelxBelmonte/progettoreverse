// Function: FUN_00fc2650
// Address: 00fc2650
// Size: 984 bytes
// Class: GNString
// String references:
//   "crypto/dsa/dsa_ossl.c"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00fc2650(BIGNUM *param_1,void*param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BN_MONT_CTX *a;
  int64_t lVar6;
  BN_MONT_CTX *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  char *r;
  BIGNUM *pBVar10;
  ulong w;
  uint64_t uVar11;
  BIGNUM *arg1;
  int64_t this_ptr;
  BIGNUM *m;
  int in_stack_ffffffffffffffa8;
  BIGNUM *local_38;
  
  if (((*(int64_t *)(this_ptr + 8) == 0) || (*(int64_t *)(this_ptr + 0x10) == 0)) ||
     (*(int64_t *)(this_ptr + 0x18) == 0)) {
    iVar2 = 0x65;
    iVar3 = 0xc1;
LAB_00fc26e8:
    _ERR_put_error(0x200cb18,iVar2,iVar3,(char *)param_4,in_stack_ffffffffffffffa8);
    return 0;
  }
  pBVar10 = param_3;
  m = param_4;
  iVar2 = _BN_is_zero();
  if (((iVar2 != 0) || (iVar2 = _BN_is_zero(), iVar2 != 0)) || (iVar2 = _BN_is_zero(), iVar2 != 0))
  {
    iVar2 = 0x70;
    iVar3 = 199;
    param_4 = m;
    goto LAB_00fc26e8;
  }
  if (*(int64_t *)(this_ptr + 0x28) == 0) {
    iVar2 = 0x6f;
    iVar3 = 0xcb;
    param_4 = m;
    goto LAB_00fc26e8;
  }
  pBVar5 = _BN_new();
  a = (BN_MONT_CTX *)_BN_new();
  uVar11 = 0;
  if (pBVar5 == (BIGNUM *)0x0) {
LAB_00fc27ff:
    local_38 = (BIGNUM *)0x0;
  }
  else {
    local_38 = (BIGNUM *)0x0;
    if (a != (BN_MONT_CTX *)0x0) {
      local_38 = arg1;
      pBVar8 = arg1;
      if ((arg1 == (BIGNUM *)0x0) &&
         (local_38 = (BIGNUM *)_BN_CTX_new(), local_38 == (BIGNUM *)0x0)) goto LAB_00fc27ff;
      iVar2 = _BN_num_bits(pBVar8);
      iVar3 = _bn_get_top();
      lVar6 = _bn_wexpand();
      if ((lVar6 != 0) && (lVar6 = _bn_wexpand(), lVar6 != 0)) {
        if (param_3 == (BIGNUM *)0x0) {
          do {
            iVar4 = _BN_priv_rand_range();
            if (iVar4 == 0) goto LAB_00fc2805;
            iVar4 = _BN_is_zero();
          } while (iVar4 != 0);
        }
        else {
          do {
            pBVar8 = param_3;
            pBVar10 = (BIGNUM *)(int64_t)(int)param_4;
            m = local_38;
            iVar4 = _BN_generate_dsa_nonce(param_3,*(void*)(this_ptr + 0x28));
            if (iVar4 == 0) goto LAB_00fc2805;
            iVar4 = _BN_is_zero();
          } while (iVar4 != 0);
        }
        _BN_set_flags();
        _BN_set_flags();
        if ((((*(byte *)(this_ptr + 0x30) & 1) == 0) ||
            (pBVar8 = local_38,
            pBVar7 = _BN_MONT_CTX_set_locked
                               ((BN_MONT_CTX **)local_38,(int)*(void*)(this_ptr + 8),pBVar10
                                ,(BN_CTX *)m), pBVar7 != (BN_MONT_CTX *)0x0)) &&
           (pBVar7 = a, iVar4 = _BN_add(pBVar8,*(BIGNUM **)(this_ptr + 0x10),pBVar10), iVar4 != 0))
        {
          pBVar9 = *(BIGNUM **)(this_ptr + 0x10);
          iVar4 = _BN_add(pBVar8,pBVar9,pBVar10);
          if (iVar4 != 0) {
            _BN_is_bit_set(pBVar8,(int)pBVar9);
            _BN_consttime_swap(iVar3 + 2,(BIGNUM *)a,pBVar10,(int)m);
            pcVar1 = *(code **)(*(int64_t *)(this_ptr + 0x50) + 0x28);
            m = *(BIGNUM **)(this_ptr + 0x38);
            if (pcVar1 == 0x0) {
              iVar3 = _BN_mod_exp_mont(*(BIGNUM **)(this_ptr + 8),pBVar5,local_38,m,
                                       (BN_CTX *)CONCAT44(iVar2,in_stack_ffffffffffffffa8),pBVar7);
            }
            else {
              m = local_38;
              iVar3 = (*pcVar1)(pBVar5,*(void*)(this_ptr + 0x18));
            }
            if (iVar3 != 0) {
              pBVar10 = *(BIGNUM **)(this_ptr + 0x10);
              pBVar5 = local_38;
              iVar3 = _BN_div(pBVar10,param_1,local_38,m,
                              (BN_CTX *)CONCAT44(iVar2,in_stack_ffffffffffffffa8));
              w = (ulong)param_1;
              if (iVar3 != 0) {
                r = *(char **)(this_ptr + 0x10);
                pBVar8 = _BN_new();
                if (pBVar8 != (BIGNUM *)0x0) {
                  _BN_CTX_start((BN_CTX *)pBVar10);
                  pBVar9 = _BN_CTX_get((BN_CTX *)pBVar10);
                  if (((pBVar9 != (BIGNUM *)0x0) && (iVar3 = _BN_set_word(pBVar10,w), iVar3 != 0))
                     && (iVar3 = _BN_sub(pBVar10,pBVar8,pBVar5), iVar3 != 0)) {
                    m = (BIGNUM *)0x0;
                    iVar2 = _BN_mod_exp_mont((BIGNUM *)r,pBVar9,local_38,(BIGNUM *)0x0,
                                             (BN_CTX *)CONCAT44(iVar2,in_stack_ffffffffffffffa8),
                                             pBVar7);
                    pBVar10 = (BIGNUM *)r;
                    if (iVar2 != 0) {
                      _BN_CTX_end((BN_CTX *)r);
                      _BN_clear_free((BIGNUM *)r);
                      *param_2 = pBVar8;
                      uVar11 = 1;
                      goto joined_r0x00fc2832;
                    }
                  }
                  _BN_free(pBVar10);
                  _BN_CTX_end((BN_CTX *)pBVar10);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00fc2805:
  r = "crypto/dsa/dsa_ossl.c";
  _ERR_put_error(0x200cb18,3,0x123,(char *)m,in_stack_ffffffffffffffa8);
joined_r0x00fc2832:
  if (local_38 != arg1) {
    _BN_CTX_free((BN_CTX *)r);
  }
  _BN_clear_free((BIGNUM *)r);
  _BN_clear_free((BIGNUM *)r);
  return uVar11;
}

