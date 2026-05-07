// Function: FUN_00fd7840
// Address: 00fd7840
// Size: 542 bytes
// Class: Unknown
// String references:
//   "crypto/ec/ec2_smpl.c"


undefined8 FUN_00fd7840(BIGNUM *param_1,longlong param_2,BIGNUM *param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  BIGNUM *pBVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  BIGNUM *b;
  undefined8 unaff_R12;
  int line;
  
  pBVar4 = param_1;
  if (param_1[1].neg != 0) {
    do {
      _BN_num_bits(pBVar4);
      pBVar4 = (BIGNUM *)0x0;
      iVar3 = _BN_priv_rand(0,0xffffffff);
      line = (int)unaff_R12;
      if (iVar3 == 0) {
        iVar3 = 0x2bd;
        goto LAB_00fd7a28;
      }
      iVar3 = _BN_is_zero();
    } while (iVar3 != 0);
    lVar5 = *unaff_RDI;
    if (*(code **)(lVar5 + 0x128) != (code *)0x0) {
      iVar3 = (**(code **)(lVar5 + 0x128))(param_3,*(undefined8 *)(param_2 + 0x20));
      if (iVar3 == 0) {
        return 0;
      }
      lVar5 = *unaff_RDI;
    }
    uVar1._0_4_ = param_1->neg;
    uVar1._4_4_ = param_1->flags;
    pBVar4 = *(BIGNUM **)(param_2 + 0x20);
    b = param_3;
    iVar3 = (**(code **)(lVar5 + 0x108))(pBVar4,uVar1);
    if (iVar3 != 0) {
      while( true ) {
        _BN_num_bits(pBVar4);
        pBVar4 = (BIGNUM *)0x0;
        iVar3 = _BN_priv_rand(0,0xffffffff);
        line = (int)unaff_R12;
        if (iVar3 == 0) break;
        iVar3 = _BN_is_zero();
        if (iVar3 == 0) {
          lVar5 = *unaff_RDI;
          if (*(code **)(lVar5 + 0x128) != (code *)0x0) {
            iVar3 = (**(code **)(lVar5 + 0x128))(param_3,*(undefined8 *)(unaff_RSI + 0x18));
            if (iVar3 == 0) {
              return 0;
            }
            lVar5 = *unaff_RDI;
          }
          uVar2._0_4_ = param_1->neg;
          uVar2._4_4_ = param_1->flags;
          iVar3 = (**(code **)(lVar5 + 0x110))(param_3,uVar2);
          if (iVar3 == 0) {
            return 0;
          }
          pBVar4 = param_3;
          iVar3 = (**(code **)(*unaff_RDI + 0x110))(param_3,*(undefined8 *)(unaff_RSI + 0x20));
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = _BN_GF2m_add(pBVar4,(BIGNUM *)unaff_RDI[0xd],b);
          if (iVar3 != 0) {
            iVar3 = (**(code **)(*unaff_RDI + 0x108))
                              (*(undefined8 *)(unaff_RSI + 0x18),*(undefined8 *)(unaff_RSI + 0x20),
                               param_3);
            if (iVar3 == 0) {
              return 0;
            }
            iVar3 = (**(code **)(*unaff_RDI + 0x108))
                              (*(undefined8 *)(unaff_RSI + 0x18),*(undefined8 *)(unaff_RSI + 0x10),
                               param_3);
            if (iVar3 != 0) {
              *(undefined4 *)(param_2 + 0x28) = 0;
              *(undefined4 *)(unaff_RSI + 0x28) = 0;
              return 1;
            }
            return 0;
          }
          return 0;
        }
      }
      iVar3 = 0x2cc;
LAB_00fd7a28:
      _ERR_put_error(0x200cfcd,3,iVar3,param_4,line);
      return 0;
    }
  }
  return 0;
}


