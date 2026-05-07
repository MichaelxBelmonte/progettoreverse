// Function: FUN_00fd7c40
// Address: 00fd7c40
// Size: 952 bytes
// Class: GNString
// String references:
//   "crypto/ec/ec2_smpl.c"


int FUN_00fd7c40(EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *a;
  BIGNUM *pBVar4;
  EC_GROUP *ctx;
  char *r;
  ulong w;
  EC_POINT *pEVar5;
  BIGNUM *pBVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int in_stack_ffffffffffffffc8;
  BIGNUM *a_00;
  
  ctx = param_1;
  pEVar5 = param_2;
  pBVar3 = param_3;
  iVar1 = _BN_is_zero();
  if (iVar1 != 0) {
    iVar1 = _EC_POINT_set_to_infinity(ctx,pEVar5);
    return iVar1;
  }
  iVar1 = _BN_is_zero();
  if (iVar1 != 0) {
    iVar1 = _EC_POINT_copy((EC_POINT *)ctx,pEVar5);
    if ((iVar1 != 0) &&
       (iVar1 = _EC_POINT_invert(ctx,(EC_POINT *)param_3,(BN_CTX *)pBVar3), iVar1 != 0)) {
      return 1;
    }
    _ERR_put_error(0x200cfcd,0x10,0x311,param_4,in_stack_ffffffffffffffc8);
    return 0;
  }
  _BN_CTX_start((BN_CTX *)ctx);
  pBVar3 = _BN_CTX_get((BN_CTX *)ctx);
  a = _BN_CTX_get((BN_CTX *)ctx);
  pBVar4 = _BN_CTX_get((BN_CTX *)ctx);
  if (pBVar4 == (BIGNUM *)0x0) {
    r = "crypto/ec/ec2_smpl.c";
    _ERR_put_error(0x200cfcd,0x41,0x31c,param_4,in_stack_ffffffffffffffc8);
  }
  else {
    r = *(char **)(param_2 + 0x20);
    iVar1 = (**(code **)(*unaff_RDI + 0x108))(r,*(undefined8 *)(unaff_RSI + 0x20),param_3);
    if (iVar1 != 0) {
      r = *(char **)(unaff_RSI + 0x20);
      pBVar6 = param_3;
      iVar1 = (**(code **)(*unaff_RDI + 0x108))(r,*(undefined8 *)(param_1 + 0x10));
      if ((iVar1 != 0) && (iVar1 = _BN_GF2m_add((BIGNUM *)r,a,pBVar6), iVar1 != 0)) {
        r = *(char **)(param_2 + 0x20);
        iVar1 = (**(code **)(*unaff_RDI + 0x108))(r,*(undefined8 *)(param_1 + 0x10),param_3);
        if ((((iVar1 != 0) &&
             (((r = (char *)pBVar4, pBVar6 = param_3, a_00 = pBVar4,
               iVar1 = (**(code **)(*unaff_RDI + 0x108))(pBVar4,*(undefined8 *)(unaff_RSI + 0x10)),
               iVar1 != 0 &&
               (iVar1 = _BN_GF2m_add((BIGNUM *)r,*(BIGNUM **)(param_2 + 0x10),pBVar6), iVar1 != 0))
              && (pBVar6 = param_3, iVar1 = (**(code **)(*unaff_RDI + 0x108))(pBVar4,a),
                 r = (char *)pBVar4, iVar1 != 0)))) &&
            ((((r = (char *)param_3, pBVar4 = a_00,
               iVar1 = (**(code **)(*unaff_RDI + 0x110))(param_3,*(undefined8 *)(param_1 + 0x10)),
               iVar1 != 0 && (iVar1 = _BN_GF2m_add((BIGNUM *)r,a_00,pBVar6), iVar1 != 0)) &&
              (r = (char *)pBVar3, pBVar6 = param_3,
              iVar1 = (**(code **)(*unaff_RDI + 0x108))(pBVar3,a_00), iVar1 != 0)) &&
             ((iVar1 = _BN_GF2m_add((BIGNUM *)r,a,pBVar6), iVar1 != 0 &&
              (iVar1 = (**(code **)(*unaff_RDI + 0x108))
                                 (pBVar3,*(undefined8 *)(param_1 + 0x10),param_3),
              r = (char *)pBVar3, iVar1 != 0)))))) &&
           ((r = (char *)param_3, iVar1 = (**(code **)(*unaff_RDI + 0x120))(param_3,pBVar4),
            iVar1 != 0 &&
            (((pBVar3 = pBVar4, iVar1 = (**(code **)(*unaff_RDI + 0x108))(pBVar4,a,param_3),
              r = (char *)pBVar4, iVar1 != 0 &&
              (r = (char *)pBVar3, pBVar4 = param_3, pBVar6 = pBVar3,
              iVar1 = (**(code **)(*unaff_RDI + 0x108))(pBVar3,*(undefined8 *)(unaff_RSI + 0x20)),
              iVar1 != 0)) &&
             (iVar1 = _BN_GF2m_add((BIGNUM *)r,*(BIGNUM **)(unaff_RSI + 0x10),pBVar4), iVar1 != 0)))
            ))) {
          iVar1 = (**(code **)(*unaff_RDI + 0x108))(a,pBVar3);
          if (iVar1 != 0) {
            iVar1 = _BN_GF2m_add(a,pBVar6,param_3);
            w = (ulong)pBVar6;
            if (iVar1 != 0) {
              iVar2 = _BN_set_word(a,w);
              iVar1 = 0;
              if (iVar2 != 0) {
                *(undefined4 *)(unaff_RSI + 0x28) = 1;
                _BN_set_negative(a,w);
                _BN_set_negative(a,w);
                iVar1 = 1;
              }
              goto LAB_00fd7fd8;
            }
          }
          iVar1 = 0;
          goto LAB_00fd7fd8;
        }
      }
    }
  }
  a = (BIGNUM *)r;
  iVar1 = 0;
LAB_00fd7fd8:
  _BN_CTX_end((BN_CTX *)a);
  return iVar1;
}


