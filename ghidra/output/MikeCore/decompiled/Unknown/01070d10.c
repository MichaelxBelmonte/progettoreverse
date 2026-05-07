// Function: FUN_01070d10
// Address: 01070d10
// Size: 907 bytes
// Class: Unknown
// String references:
//   "crypto/rsa/rsa_ossl.c"


uint FUN_01070d10(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  BIGNUM *pBVar6;
  BIGNUM *b;
  BIGNUM *a;
  void *pvVar7;
  BIGNUM *pBVar8;
  BN_MONT_CTX *pBVar9;
  uint *puVar10;
  uint uVar11;
  char *a_00;
  int unaff_EDI;
  int iVar12;
  BIGNUM *ret;
  int in_stack_ffffffffffffffb8;
  BIGNUM *f;
  
  a_00 = (char *)param_1;
  pBVar6 = param_2;
  ret = param_3;
  iVar2 = _BN_num_bits(param_1);
  if (0x4000 < iVar2) {
    iVar2 = 0x69;
    iVar12 = 0x1ff;
LAB_01070e84:
    _ERR_put_error(0x201b8c4,iVar2,iVar12,(char *)param_4,in_stack_ffffffffffffffb8);
    return 0xffffffff;
  }
  iVar2 = _BN_ucmp((BIGNUM *)a_00,pBVar6);
  if (iVar2 < 1) {
    iVar2 = 0x65;
    iVar12 = 0x204;
    goto LAB_01070e84;
  }
  iVar2 = _BN_num_bits((BIGNUM *)a_00);
  if ((0xc00 < iVar2) && (iVar2 = _BN_num_bits((BIGNUM *)a_00), 0x40 < iVar2)) {
    iVar2 = 0x65;
    iVar12 = 0x20b;
    goto LAB_01070e84;
  }
  iVar2 = (int)param_3;
  pBVar6 = (BIGNUM *)_BN_CTX_new();
  iVar12 = (int)param_2;
  uVar5 = 0xffffffff;
  if (pBVar6 == (BIGNUM *)0x0) goto LAB_01070f1f;
  _BN_CTX_start((BN_CTX *)a_00);
  b = _BN_CTX_get((BN_CTX *)a_00);
  a = _BN_CTX_get((BN_CTX *)a_00);
  iVar3 = _BN_num_bits((BIGNUM *)a_00);
  iVar4 = iVar3 + 7;
  if (-1 < iVar3 + 7) {
    iVar4 = iVar3;
  }
  uVar11 = iVar4 + 7 >> 3;
  f = (BIGNUM *)(ulonglong)uVar11;
  a_00 = (char *)f;
  pvVar7 = _CRYPTO_malloc(uVar11,section_000001f8.segname + 0xe,(int)ret);
  if ((a == (BIGNUM *)0x0) || (pvVar7 == (void *)0x0)) {
    a_00 = "crypto/rsa/rsa_ossl.c";
    _ERR_put_error(0x201b8c4,0x41,0x218,(char *)param_4,iVar12);
    goto LAB_01070f1f;
  }
  if ((int)uVar11 < unaff_EDI) {
    a_00 = "crypto/rsa/rsa_ossl.c";
    _ERR_put_error(0x201b8c4,0x6c,0x221,(char *)param_4,iVar12);
    goto LAB_01070f1f;
  }
  pBVar8 = _BN_bin2bn((uchar *)a_00,(int)b,ret);
  if (pBVar8 == (BIGNUM *)0x0) goto LAB_01070f1f;
  iVar4 = _BN_ucmp((BIGNUM *)a_00,b);
  if (iVar4 < 0) {
    if (((param_1[4].flags & 2) != 0) &&
       (a_00 = (char *)pBVar6,
       pBVar9 = _BN_MONT_CTX_set_locked((BN_MONT_CTX **)pBVar6,(int)param_1[1].d,ret,param_4),
       pBVar9 == (BN_MONT_CTX *)0x0)) goto LAB_01070f1f;
    uVar1._0_4_ = param_1[1].top;
    uVar1._4_4_ = param_1[1].dmax;
    a_00 = (char *)param_1[1].d;
    param_4 = (BN_CTX *)param_1[5].d;
    iVar4 = (**(code **)(*(longlong *)&param_1->top + 0x30))(a_00,uVar1);
    if (iVar4 == 0) goto LAB_01070f1f;
    if (iVar2 == 5) {
      puVar10 = (uint *)_bn_get_words();
      if (((*puVar10 & 0xf) != 0xc) && (iVar2 = _BN_sub((BIGNUM *)a_00,a,pBVar6), iVar2 == 0))
      goto LAB_01070f1f;
      uVar5 = _BN_bn2binpad();
      a_00 = (char *)(ulonglong)uVar5;
      uVar11 = _RSA_padding_check_X931((uchar *)a_00,(int)pvVar7,(uchar *)f,(int)param_4,iVar12);
    }
    else {
      uVar11 = _BN_bn2binpad();
      if (iVar2 == 3) {
        _memcpy(a_00,(void *)(longlong)(int)uVar11,(size_t)pBVar6);
      }
      else {
        if (iVar2 != 1) {
          iVar2 = 0x76;
          iVar4 = 0x248;
          goto LAB_01070f10;
        }
        a_00 = (char *)(ulonglong)uVar11;
        uVar11 = _RSA_padding_check_PKCS1_type_1
                           ((uchar *)a_00,(int)pvVar7,(uchar *)f,(int)param_4,iVar12);
      }
    }
    uVar5 = uVar11;
    if ((int)uVar11 < 0) {
      a_00 = "crypto/rsa/rsa_ossl.c";
      _ERR_put_error(0x201b8c4,0x72,0x24c,(char *)param_4,iVar12);
    }
  }
  else {
    iVar2 = 0x84;
    iVar4 = 0x22a;
LAB_01070f10:
    a_00 = "crypto/rsa/rsa_ossl.c";
    _ERR_put_error(0x201b8c4,iVar2,iVar4,(char *)param_4,iVar12);
  }
LAB_01070f1f:
  _BN_CTX_end((BN_CTX *)a_00);
  _BN_CTX_free((BN_CTX *)a_00);
  _CRYPTO_clear_free(0x251,"crypto/rsa/rsa_ossl.c");
  return uVar5;
}


