// Function: FUN_00fd9310
// Address: 00fd9310
// Size: 640 bytes
// Class: Unknown
// String references:
//   "%s: (%d bit)\n"
//   "Private-Key"
//   "crypto/ec/ec_ameth.c"
//   "Public-Key"
//   "ECDSA-Parameters"
//   "%*spriv:\n"
//   "%*spub:\n"

uint64_t FUN_00fd9310(BIO *param_1,uint param_2,int param_3,char *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  EC_GROUP *pEVar5;
  EC_POINT *pEVar6;
  BIO *pBVar7;
  BIGNUM *pBVar8;
  char *pcVar9;
  void *pvVar10;
  EC_GROUP *x;
  char *format;
  uint64_t uVar11;
  int64_t arg1;
  uint64_t local_48;
  BIO *local_40;
  int in_stack_ffffffffffffffc8;
  BIO *pBVar12;
  
  local_48 = 0;
  if (arg1 == 0) {
LAB_00fd9362:
    _ERR_put_error(0x200cff7,0x43,0x170,param_4,in_stack_ffffffffffffffc8);
    return 0;
  }
  x = (EC_GROUP *)(uint64_t)param_2;
  pBVar7 = param_1;
  pEVar5 = _EC_KEY_get0_group((EC_KEY *)param_1);
  if (pEVar5 == (EC_GROUP *)0x0) goto LAB_00fd9362;
  iVar4 = (int)param_1;
  if (iVar4 == 2) {
    local_40 = (BIO *)0x0;
LAB_00fd93d5:
    bVar1 = false;
    pBVar12 = (BIO *)0x0;
LAB_00fd93db:
    iVar2 = _BIO_indent(pBVar7,0x80,param_3);
    if (iVar2 != 0) {
      pcVar9 = "ECDSA-Parameters";
      if (iVar4 == 1) {
        pcVar9 = "Public-Key";
      }
      format = "Private-Key";
      if (!bVar1) {
        format = pcVar9;
      }
      uVar3 = _EC_GROUP_order_bits();
      pBVar7 = (BIO *)(uint64_t)uVar3;
      iVar4 = _BIO_printf(pBVar7,format);
      if (0 < iVar4) {
        if (pBVar12 == (BIO *)0x0) {
LAB_00fd9488:
          if (local_40 == (BIO *)0x0) {
LAB_00fd94c4:
            iVar4 = _ECPKParameters_print(pBVar7,x,param_3);
            uVar11 = 1;
            if (iVar4 != 0) goto LAB_00fd9544;
          }
          else {
            iVar4 = _BIO_printf((BIO *)"",(char *)x);
            if (0 < iVar4) {
              pBVar7 = (BIO *)(uint64_t)(param_2 + 4);
              iVar4 = _ASN1_buf_print(pBVar7,local_40);
              if (iVar4 != 0) goto LAB_00fd94c4;
            }
          }
        }
        else {
          iVar4 = _BIO_printf((BIO *)"",(char *)x);
          if (0 < iVar4) {
            pBVar7 = (BIO *)(uint64_t)(param_2 + 4);
            iVar4 = _ASN1_buf_print(pBVar7,pBVar12);
            if (iVar4 != 0) goto LAB_00fd9488;
          }
        }
      }
    }
  }
  else {
    pEVar6 = _EC_KEY_get0_public_key((EC_KEY *)pBVar7);
    if (pEVar6 == (EC_POINT *)0x0) {
      local_40 = (BIO *)0x0;
      if (iVar4 != 0) goto LAB_00fd93d5;
LAB_00fd94eb:
      pBVar8 = _EC_KEY_get0_private_key((EC_KEY *)pBVar7);
      if (pBVar8 == (BIGNUM *)0x0) {
        pBVar12 = (BIO *)0x0;
        bVar1 = true;
      }
      else {
        pBVar7 = (BIO *)_EC_KEY_priv2buf();
        bVar1 = true;
        pBVar12 = pBVar7;
        if (pBVar7 == (BIO *)0x0) {
          pBVar12 = (BIO *)0x0;
          goto LAB_00fd9521;
        }
      }
      goto LAB_00fd93db;
    }
    _EC_KEY_get_conv_form((EC_KEY *)pBVar7);
    pBVar12 = (BIO *)0x0;
    pBVar7 = (BIO *)_EC_KEY_key2buf(0,&local_48);
    local_40 = pBVar7;
    if (pBVar7 != (BIO *)0x0) {
      if (iVar4 == 0) goto LAB_00fd94eb;
      goto LAB_00fd93d5;
    }
  }
LAB_00fd9521:
  _ERR_put_error(0x200cff7,0x10,0x1a0,param_4,(int)pBVar12);
  uVar11 = 0;
LAB_00fd9544:
  pvVar10 = (void *)((int64_t)&section_00000158.reserved2 + 1);
  _CRYPTO_clear_free(0x1a1,"crypto/ec/ec_ameth.c");
  _CRYPTO_free(pvVar10);
  return uVar11;
}

