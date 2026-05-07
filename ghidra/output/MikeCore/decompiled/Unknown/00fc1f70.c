// Function: FUN_00fc1f70
// Address: 00fc1f70
// Size: 832 bytes
// Class: Unknown
// String references:
//   "crypto/dsa/dsa_ossl.c"


DSA_SIG * FUN_00fc1f70(BN_CTX *param_1,longlong param_2,undefined8 param_3,BIGNUM *param_4)

{
  int iVar1;
  int iVar2;
  DSA_SIG *pDVar3;
  BIGNUM *pBVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  uint uVar7;
  char *r;
  uint unaff_ESI;
  BIGNUM *unaff_RDI;
  BIGNUM *a_02;
  uint local_34;
  
  a_02 = (BIGNUM *)0x0;
  iVar1 = 0x65;
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (*(longlong *)(param_2 + 0x18) != 0)) {
    if (*(longlong *)(param_2 + 0x28) == 0) {
      iVar1 = 0x6f;
    }
    else {
      pDVar3 = _DSA_SIG_new();
      iVar1 = 3;
      if (pDVar3 != (DSA_SIG *)0x0) {
        pBVar4 = _BN_new();
        pDVar3->r = pBVar4;
        pBVar4 = _BN_new();
        pDVar3->s = pBVar4;
        if (((pDVar3->r != (BIGNUM *)0x0) && (pBVar4 != (BIGNUM *)0x0)) &&
           (pBVar4 = (BIGNUM *)_BN_CTX_new(), pBVar4 != (BIGNUM *)0x0)) {
          a = _BN_CTX_get(param_1);
          a_00 = _BN_CTX_get(param_1);
          a_01 = _BN_CTX_get(param_1);
          pBVar5 = _BN_CTX_get(param_1);
          if (pBVar5 != (BIGNUM *)0x0) {
            pBVar5 = pDVar3->r;
            param_4 = (BIGNUM *)(ulonglong)unaff_ESI;
            pBVar6 = unaff_RDI;
            iVar1 = FUN_00fc2650(pBVar5,&stack0xffffffffffffffb8);
            local_34 = unaff_ESI;
            if (iVar1 != 0) {
              while( true ) {
                iVar2 = _BN_num_bits(pBVar5);
                iVar1 = iVar2 + 7;
                if (-1 < iVar2 + 7) {
                  iVar1 = iVar2;
                }
                uVar7 = iVar1 + 7 >> 3;
                pBVar5 = (BIGNUM *)(ulonglong)uVar7;
                if ((int)uVar7 < (int)local_34) {
                  iVar2 = _BN_num_bits(pBVar5);
                  iVar1 = iVar2 + 7;
                  if (-1 < iVar2 + 7) {
                    iVar1 = iVar2;
                  }
                  local_34 = iVar1 + 7 >> 3;
                }
                pBVar6 = _BN_bin2bn((uchar *)pBVar5,(int)a,pBVar6);
                if (pBVar6 == (BIGNUM *)0x0) break;
                do {
                  _BN_num_bits(pBVar5);
                  pBVar5 = (BIGNUM *)0x0;
                  iVar1 = _BN_priv_rand(0,0xffffffff);
                  if (iVar1 == 0) goto LAB_00fc22a9;
                  iVar1 = _BN_is_zero();
                } while (iVar1 != 0);
                _BN_set_flags();
                _BN_set_flags();
                _BN_set_flags();
                iVar1 = _BN_mod_mul(*(BIGNUM **)(param_2 + 0x10),*(BIGNUM **)(param_2 + 0x28),pBVar4
                                    ,param_4,(BN_CTX *)a_02);
                if (((iVar1 == 0) ||
                    (iVar1 = _BN_mod_mul(*(BIGNUM **)(param_2 + 0x10),pDVar3->r,pBVar4,param_4,
                                         (BN_CTX *)a_02), iVar1 == 0)) ||
                   ((pBVar5 = pBVar4,
                    iVar1 = _BN_mod_mul(*(BIGNUM **)(param_2 + 0x10),a,pBVar4,param_4,(BN_CTX *)a_02
                                       ), iVar1 == 0 ||
                    (((iVar1 = _BN_mod_add_quick(*(BIGNUM **)(param_2 + 0x10),a_01,pBVar5,param_4),
                      iVar1 == 0 ||
                      (pBVar5 = pBVar4,
                      iVar1 = _BN_mod_mul(*(BIGNUM **)(param_2 + 0x10),a_02,pBVar4,param_4,
                                          (BN_CTX *)a_02), iVar1 == 0)) ||
                     (pBVar5 = _BN_mod_inverse(pBVar4,*(BIGNUM **)(param_2 + 0x10),pBVar5,
                                               (BN_CTX *)param_4), pBVar5 == (BIGNUM *)0x0))))))
                break;
                r = *(char **)(param_2 + 0x10);
                iVar1 = _BN_mod_mul((BIGNUM *)r,a_00,pBVar4,param_4,(BN_CTX *)a_02);
                if (iVar1 == 0) break;
                iVar1 = _BN_is_zero();
                if ((iVar1 == 0) && (iVar1 = _BN_is_zero(), iVar1 == 0)) goto LAB_00fc2284;
                pBVar5 = pDVar3->r;
                param_4 = (BIGNUM *)(ulonglong)local_34;
                pBVar6 = unaff_RDI;
                iVar1 = FUN_00fc2650(pBVar5,&stack0xffffffffffffffb8);
                if (iVar1 == 0) break;
              }
            }
          }
        }
LAB_00fc22a9:
        iVar2 = (int)a_02;
        iVar1 = 3;
        goto LAB_00fc2259;
      }
    }
  }
  iVar2 = (int)a_02;
LAB_00fc2259:
  r = "crypto/dsa/dsa_ossl.c";
  _ERR_put_error(0x200cb18,iVar1,0xa7,(char *)param_4,iVar2);
  _DSA_SIG_free((DSA_SIG *)r);
  pDVar3 = (DSA_SIG *)0x0;
LAB_00fc2284:
  _BN_CTX_free((BN_CTX *)r);
  _BN_clear_free((BIGNUM *)r);
  return pDVar3;
}


