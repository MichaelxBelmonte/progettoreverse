// Function: FUN_010709f0
// Address: 010709f0
// Size: 784 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_ossl.c"


undefined4 FUN_010709f0(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *pmont;
  BIGNUM *b;
  BIGNUM *pBVar4;
  void *pvVar5;
  BN_MONT_CTX *pBVar6;
  char *a;
  int unaff_EBX;
  int unaff_ESI;
  uint unaff_EDI;
  int iVar7;
  BIGNUM *ret;
  int in_stack_ffffffffffffffc8;
  
  a = (char *)param_1;
  ret = param_3;
  iVar2 = _BN_num_bits(param_1);
  if (0x4000 < iVar2) {
    iVar2 = 0x69;
    iVar7 = 0x4d;
LAB_01070b65:
    _ERR_put_error(0x201b8c4,iVar2,iVar7,(char *)param_4,in_stack_ffffffffffffffc8);
    return 0xffffffff;
  }
  iVar2 = _BN_ucmp((BIGNUM *)a,param_2);
  if (iVar2 < 1) {
    iVar2 = 0x65;
    iVar7 = 0x52;
    goto LAB_01070b65;
  }
  iVar2 = _BN_num_bits((BIGNUM *)a);
  if ((0xc00 < iVar2) && (iVar2 = _BN_num_bits((BIGNUM *)a), 0x40 < iVar2)) {
    iVar2 = 0x65;
    iVar7 = 0x59;
    goto LAB_01070b65;
  }
  pmont = (BIGNUM *)_BN_CTX_new();
  if (pmont != (BIGNUM *)0x0) {
    _BN_CTX_start((BN_CTX *)a);
    b = _BN_CTX_get((BN_CTX *)a);
    pBVar4 = _BN_CTX_get((BN_CTX *)a);
    _BN_num_bits((BIGNUM *)a);
    pvVar5 = _CRYPTO_malloc((int)a,(char *)&segment_command_00000020.flags,(int)ret);
    if ((pBVar4 == (BIGNUM *)0x0) || (pvVar5 == (void *)0x0)) {
      iVar2 = 0x41;
      iVar7 = 0x66;
LAB_01070b95:
      a = "crypto/rsa/rsa_ossl.c";
      _ERR_put_error(0x201b8c4,iVar2,iVar7,(char *)param_4,in_stack_ffffffffffffffc8);
    }
    else {
      iVar2 = (int)param_4;
      switch((int)param_3) {
      case 1:
        a = (char *)(ulonglong)unaff_EDI;
        iVar2 = _RSA_padding_add_PKCS1_type_2((uchar *)a,unaff_ESI,(uchar *)ret,iVar2);
        break;
      case 2:
        a = (char *)(ulonglong)unaff_EDI;
        iVar2 = _RSA_padding_add_SSLv23((uchar *)a,unaff_ESI,(uchar *)ret,iVar2);
        break;
      case 3:
        a = (char *)(ulonglong)unaff_EDI;
        iVar2 = _RSA_padding_add_none((uchar *)a,unaff_ESI,(uchar *)ret,iVar2);
        break;
      case 4:
        a = (char *)(ulonglong)unaff_EDI;
        ret = (BIGNUM *)0x0;
        param_4 = (BN_CTX *)0x0;
        iVar2 = _RSA_padding_add_PKCS1_OAEP
                          ((uchar *)a,unaff_ESI,(uchar *)0x0,0,
                           (uchar *)CONCAT44(unaff_EDI,in_stack_ffffffffffffffc8),unaff_EBX);
        break;
      default:
        iVar2 = 0x76;
        iVar7 = 0x78;
        goto LAB_01070b95;
      }
      if ((0 < iVar2) && (pBVar4 = _BN_bin2bn((uchar *)a,(int)b,ret), pBVar4 != (BIGNUM *)0x0)) {
        iVar2 = _BN_ucmp((BIGNUM *)a,b);
        if (-1 < iVar2) {
          iVar2 = 0x84;
          iVar7 = 0x84;
          goto LAB_01070b95;
        }
        if (((param_1[4].flags & 2) == 0) ||
           (a = (char *)pmont,
           pBVar6 = _BN_MONT_CTX_set_locked((BN_MONT_CTX **)pmont,(int)param_1[1].d,ret,param_4),
           pBVar6 != (BN_MONT_CTX *)0x0)) {
          uVar1._0_4_ = param_1[1].top;
          uVar1._4_4_ = param_1[1].dmax;
          a = (char *)param_1[1].d;
          iVar2 = (**(code **)(*(longlong *)&param_1->top + 0x30))(a,uVar1,pmont,param_1[5].d);
          if (iVar2 != 0) {
            uVar3 = _BN_bn2binpad();
            goto LAB_01070ba2;
          }
        }
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_01070ba2:
  _BN_CTX_end((BN_CTX *)a);
  _BN_CTX_free((BN_CTX *)a);
  _CRYPTO_clear_free(0x99,"crypto/rsa/rsa_ossl.c");
  return uVar3;
}


