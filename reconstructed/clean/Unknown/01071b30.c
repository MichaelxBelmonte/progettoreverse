// Function: FUN_01071b30
// Address: 01071b30
// Size: 2548 bytes
// Class: Unknown

uint64_t FUN_01071b30(BIGNUM *param_1,int64_t param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BN_MONT_CTX *in_mont;
  BN_MONT_CTX *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *rem;
  BIGNUM *pBVar9;
  void*puVar10;
  BN_CTX *pBVar11;
  BIGNUM *a;
  uint uVar12;
  BIGNUM *arg1;
  BIGNUM *this_ptr;
  uint64_t uVar13;
  uint64_t uVar14;
  bool bVar15;
  BN_CTX *in_stack_ffffffffffffff68;
  uint64_t auStack_58 [4];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  a = param_1;
  _BN_CTX_start((BN_CTX *)param_1);
  pBVar4 = _BN_CTX_get((BN_CTX *)a);
  _BN_CTX_get((BN_CTX *)a);
  pBVar5 = _BN_CTX_get((BN_CTX *)a);
  in_mont = (BN_MONT_CTX *)_BN_CTX_get((BN_CTX *)a);
  if (in_mont != (BN_MONT_CTX *)0x0) {
    bVar15 = false;
    uVar1 = 0;
    if (*(int *)(param_2 + 4) == 1) {
      uVar1 = _OPENSSL_sk_num();
      uVar14 = 0;
      if (2 < uVar1 - 1) goto LAB_010723c5;
    }
    uVar12 = *(uint *)(param_2 + 0x74);
    if ((uVar12 & 4) != 0) {
      pBVar7 = _BN_new();
      uVar14 = 0;
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_010723c5;
      _BN_with_flags();
      iVar2 = (int)pBVar7;
      a = param_1;
      pBVar6 = _BN_MONT_CTX_set_locked((BN_MONT_CTX **)param_1,iVar2,param_3,(BN_CTX *)param_4);
      if (pBVar6 != (BN_MONT_CTX *)0x0) {
        _BN_with_flags();
        a = param_1;
        pBVar6 = _BN_MONT_CTX_set_locked((BN_MONT_CTX **)param_1,iVar2,param_3,(BN_CTX *)param_4);
        if (pBVar6 != (BN_MONT_CTX *)0x0) {
          if ((int)uVar1 < 1) {
            _BN_free(a);
            if (*(void**)(*(int64_t *)(param_2 + 8) + 0x30) == PTR__BN_mod_exp_mont_0249c0e8)
            {
              iVar2 = _BN_num_bits(a);
              iVar3 = _BN_num_bits(a);
              bVar15 = iVar2 == iVar3;
            }
            else {
              bVar15 = false;
            }
          }
          else {
            uVar12 = 0;
            do {
              _OPENSSL_sk_value();
              _BN_with_flags();
              a = param_1;
              pBVar6 = _BN_MONT_CTX_set_locked
                                 ((BN_MONT_CTX **)param_1,iVar2,param_3,(BN_CTX *)param_4);
              if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_010723bd;
              uVar12 = uVar12 + 1;
            } while (uVar1 != uVar12);
            _BN_free(a);
            bVar15 = false;
          }
          uVar12 = *(uint *)(param_2 + 0x74);
          goto joined_r0x01072386;
        }
      }
LAB_010723a7:
      _BN_free(a);
      uVar14 = 0;
      goto LAB_010723c5;
    }
joined_r0x01072386:
    if (((uVar12 & 2) == 0) ||
       (a = param_1,
       pBVar6 = _BN_MONT_CTX_set_locked
                          ((BN_MONT_CTX **)param_1,(int)*(void*)(param_2 + 0x18),param_3,
                           (BN_CTX *)param_4), pBVar6 != (BN_MONT_CTX *)0x0)) {
      if (bVar15) {
        a = param_1;
        iVar2 = _bn_from_mont_fixed_top(param_1,*(void*)(param_2 + 0x88));
        uVar13 = 0;
        uVar14 = 0;
        if ((iVar2 == 0) ||
           (a = param_1, iVar2 = _bn_to_mont_fixed_top(param_1,*(void*)(param_2 + 0x88)),
           iVar2 == 0)) goto LAB_010723c5;
        a = *(BIGNUM **)(param_2 + 0x38);
        iVar2 = _BN_mod_exp_mont_consttime
                          (a,*(BIGNUM **)(param_2 + 0x48),param_1,*(BIGNUM **)(param_2 + 0x88),
                           in_stack_ffffffffffffff68,in_mont);
        uVar14 = uVar13;
        if ((iVar2 == 0) ||
           ((a = param_1, iVar2 = _bn_from_mont_fixed_top(param_1,*(void*)(param_2 + 0x80)),
            iVar2 == 0 ||
            (a = param_1, iVar2 = _bn_to_mont_fixed_top(param_1,*(void*)(param_2 + 0x80)),
            iVar2 == 0)))) goto LAB_010723c5;
        a = *(BIGNUM **)(param_2 + 0x30);
        iVar2 = _BN_mod_exp_mont_consttime
                          (a,*(BIGNUM **)(param_2 + 0x40),param_1,*(BIGNUM **)(param_2 + 0x80),
                           in_stack_ffffffffffffff68,in_mont);
        if (iVar2 == 0) goto LAB_010723c5;
        a = *(BIGNUM **)(param_2 + 0x30);
        iVar2 = _bn_mod_sub_fixed_top(a,pBVar5);
        if ((iVar2 == 0) ||
           (a = param_1, iVar2 = _bn_to_mont_fixed_top(param_1,*(void*)(param_2 + 0x80)),
           iVar2 == 0)) goto LAB_010723c5;
        a = *(BIGNUM **)(param_2 + 0x80);
        iVar2 = _bn_mul_mont_fixed_top(a,*(void*)(param_2 + 0x50),param_1);
        if ((iVar2 == 0) ||
           (a = param_1, iVar2 = _bn_mul_fixed_top(param_1,*(void*)(param_2 + 0x38)),
           iVar2 == 0)) goto LAB_010723c5;
        a = *(BIGNUM **)(param_2 + 0x18);
        iVar2 = _bn_mod_add_fixed_top(a,pBVar5);
        if (iVar2 == 0) goto LAB_010723c5;
LAB_01071d88:
        if ((*(BIGNUM **)(param_2 + 0x20) != (BIGNUM *)0x0) &&
           (a = *(BIGNUM **)(param_2 + 0x18), a != (BIGNUM *)0x0)) {
          pBVar4 = param_1;
          if (*(void**)(*(int64_t *)(param_2 + 8) + 0x30) == PTR__BN_mod_exp_mont_0249c0e8) {
            pBVar5 = *(BIGNUM **)(param_2 + 0x78);
            iVar2 = _BN_mod_exp_mont(a,*(BIGNUM **)(param_2 + 0x20),param_1,pBVar5,
                                     in_stack_ffffffffffffff68,in_mont);
          }
          else {
            _bn_correct_top();
            a = *(BIGNUM **)(param_2 + 0x18);
            pBVar5 = *(BIGNUM **)(param_2 + 0x78);
            iVar2 = (**(code **)(*(int64_t *)(param_2 + 8) + 0x30))
                              (a,*(void*)(param_2 + 0x20));
          }
          if ((iVar2 == 0) || (iVar2 = _BN_sub(a,arg1,pBVar4), iVar2 == 0)) goto LAB_010723c2;
          iVar2 = _BN_is_zero();
          if (iVar2 == 0) {
            a = *(BIGNUM **)(param_2 + 0x18);
            uVar13 = 0;
            pBVar4 = param_1;
            iVar2 = _BN_div(a,(BIGNUM *)in_mont,param_1,pBVar5,in_stack_ffffffffffffff68);
            uVar14 = 0;
            if ((iVar2 == 0) ||
               ((iVar2 = _BN_is_negative(), uVar14 = uVar13, iVar2 != 0 &&
                (iVar2 = _BN_add(a,*(BIGNUM **)(param_2 + 0x18),pBVar4), iVar2 == 0))))
            goto LAB_010723c5;
            iVar2 = _BN_is_zero();
            if (iVar2 == 0) {
              pBVar4 = _BN_new();
              if (pBVar4 == (BIGNUM *)0x0) goto LAB_010723c5;
              _BN_with_flags();
              a = *(BIGNUM **)(param_2 + 0x18);
              iVar2 = (**(code **)(*(int64_t *)(param_2 + 8) + 0x30))
                                (a,pBVar4,param_1,*(void*)(param_2 + 0x78));
              _BN_free(a);
              if (iVar2 == 0) goto LAB_010723c5;
            }
          }
        }
        _bn_correct_top();
        uVar14 = 1;
        goto LAB_010723c5;
      }
      pBVar7 = _BN_new();
      if (pBVar7 != (BIGNUM *)0x0) {
        _BN_with_flags();
        a = *(BIGNUM **)(param_2 + 0x38);
        iVar2 = _BN_div(a,pBVar7,param_1,param_4,in_stack_ffffffffffffff68);
        if (iVar2 == 0) goto LAB_010723a7;
        pBVar8 = _BN_new();
        if (pBVar8 != (BIGNUM *)0x0) {
          _BN_with_flags();
          a = *(BIGNUM **)(param_2 + 0x38);
          pBVar9 = *(BIGNUM **)(param_2 + 0x88);
          iVar2 = (**(code **)(*(int64_t *)(param_2 + 8) + 0x30))(a,pBVar8,param_1);
          if (iVar2 != 0) {
            _BN_free(a);
            a = *(BIGNUM **)(param_2 + 0x30);
            uVar14 = 0;
            iVar2 = _BN_div(a,pBVar7,param_1,pBVar9,in_stack_ffffffffffffff68);
            _BN_free(a);
            if ((iVar2 == 0) || (pBVar7 = _BN_new(), pBVar7 == (BIGNUM *)0x0)) goto LAB_010723c5;
            _BN_with_flags();
            a = *(BIGNUM **)(param_2 + 0x30);
            pBVar8 = *(BIGNUM **)(param_2 + 0x80);
            pBVar9 = param_1;
            iVar2 = (**(code **)(*(int64_t *)(param_2 + 8) + 0x30))(a,pBVar7);
            _BN_free(a);
            if (iVar2 == 0) goto LAB_010723c5;
            if (0 < (int)uVar1) {
              pBVar7 = _BN_new();
              rem = _BN_new();
              if ((rem == (BIGNUM *)0x0) || (pBVar7 == (BIGNUM *)0x0)) {
                _BN_free(a);
                goto LAB_010723a7;
              }
              pBVar11 = (BN_CTX *)0x0;
              do {
                pBVar9 = _BN_CTX_get((BN_CTX *)a);
                auStack_58[(int64_t)pBVar11] = pBVar9;
                if (pBVar9 == (BIGNUM *)0x0) {
LAB_010723b1:
                  _BN_free(a);
                  goto LAB_010723bd;
                }
                puVar10 = (void*)_OPENSSL_sk_value();
                _BN_with_flags();
                _BN_with_flags();
                a = (BIGNUM *)*puVar10;
                iVar2 = _BN_div(a,rem,param_1,pBVar8,pBVar11);
                if (iVar2 == 0) {
                  _BN_free(a);
                  goto LAB_010723bd;
                }
                a = (BIGNUM *)*puVar10;
                pBVar8 = (BIGNUM *)puVar10[4];
                pBVar9 = param_1;
                in_stack_ffffffffffffff68 = pBVar11;
                iVar2 = (**(code **)(*(int64_t *)(param_2 + 8) + 0x30))(a,pBVar7);
                if (iVar2 == 0) goto LAB_010723b1;
                pBVar11 = in_stack_ffffffffffffff68 + 1;
              } while ((BN_CTX *)(uint64_t)uVar1 != pBVar11);
              _BN_free(a);
              _BN_free(a);
            }
            iVar2 = _BN_sub(a,pBVar5,pBVar9);
            if ((iVar2 == 0) ||
               ((((iVar2 = _BN_is_negative(), iVar2 != 0 &&
                  (iVar2 = _BN_add(a,*(BIGNUM **)(param_2 + 0x30),pBVar9), iVar2 == 0)) ||
                 (a = param_1,
                 iVar2 = _BN_mul(param_1,*(BIGNUM **)(param_2 + 0x50),pBVar9,(BN_CTX *)pBVar8),
                 iVar2 == 0)) || (pBVar7 = _BN_new(), pBVar7 == (BIGNUM *)0x0)))) goto LAB_010723c5;
            _BN_with_flags();
            a = *(BIGNUM **)(param_2 + 0x30);
            uVar14 = 0;
            pBVar9 = param_1;
            iVar2 = _BN_div(a,pBVar7,param_1,pBVar8,in_stack_ffffffffffffff68);
            _BN_free(a);
            if ((iVar2 == 0) ||
               (((iVar2 = _BN_is_negative(), iVar2 != 0 &&
                 (iVar2 = _BN_add(a,*(BIGNUM **)(param_2 + 0x30),pBVar9), iVar2 == 0)) ||
                ((a = param_1,
                 iVar2 = _BN_mul(param_1,*(BIGNUM **)(param_2 + 0x38),pBVar9,(BN_CTX *)pBVar8),
                 iVar2 == 0 || (iVar2 = _BN_add(a,pBVar5,pBVar9), iVar2 == 0))))))
            goto LAB_010723c5;
            if (0 < (int)uVar1) {
              pBVar5 = _BN_new();
              if (pBVar5 == (BIGNUM *)0x0) goto LAB_010723c5;
              in_stack_ffffffffffffff68 = (BN_CTX *)(uint64_t)uVar1;
              pBVar11 = (BN_CTX *)0x0;
              do {
                puVar10 = (void*)_OPENSSL_sk_value();
                iVar2 = _BN_sub(a,this_ptr,pBVar9);
                if ((iVar2 == 0) ||
                   (a = param_1,
                   iVar2 = _BN_mul(param_1,(BIGNUM *)puVar10[2],pBVar9,(BN_CTX *)pBVar8), iVar2 == 0
                   )) goto LAB_010723bd;
                _BN_with_flags();
                a = (BIGNUM *)*puVar10;
                pBVar9 = param_1;
                iVar2 = _BN_div(a,pBVar5,param_1,pBVar8,in_stack_ffffffffffffff68);
                if (((iVar2 == 0) ||
                    (((iVar2 = _BN_is_negative(), iVar2 != 0 &&
                      (iVar2 = _BN_add(a,(BIGNUM *)*puVar10,pBVar9), iVar2 == 0)) ||
                     (a = param_1,
                     iVar2 = _BN_mul(param_1,(BIGNUM *)puVar10[3],pBVar9,(BN_CTX *)pBVar8),
                     iVar2 == 0)))) || (iVar2 = _BN_add(a,pBVar4,pBVar9), iVar2 == 0))
                goto LAB_010723bd;
                pBVar11 = pBVar11 + 1;
              } while (in_stack_ffffffffffffff68 != pBVar11);
              _BN_free(a);
            }
            goto LAB_01071d88;
          }
          _BN_free(a);
        }
LAB_010723bd:
        _BN_free(a);
      }
    }
  }
LAB_010723c2:
  uVar14 = 0;
LAB_010723c5:
  _BN_CTX_end((BN_CTX *)a);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar14;
}

