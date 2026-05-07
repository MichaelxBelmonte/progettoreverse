// Function: FUN_010b6910
// Address: 010b6910
// Size: 531 bytes
// Class: Unknown
// String references:
//   "crypto/x509/x_name.c"


int FUN_010b6910(undefined8 param_1,ASN1_ITEM *param_2,size_t param_3,ASN1_ITEM *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_var;
  longlong lVar4;
  BUF_MEM *a;
  ASN1_TLC *unaff_RBX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_RSI;
  uVar8 = 0;
  lVar6 = 0;
  if (0xfffff < (longlong)param_2) {
    param_2 = (ASN1_ITEM *)&LAB_00100000;
  }
  a = (BUF_MEM *)&DAT_025b71f8;
  lVar7 = lVar4;
  iVar1 = _ASN1_item_ex_d2i((ASN1_VALUE **)&DAT_025b71f8,(uchar **)param_2,param_3,param_4,0,
                            (int)lVar4,'\0',unaff_RBX);
  if (iVar1 < 1) {
    return iVar1;
  }
  if (*unaff_RDI != 0) {
    _BUF_MEM_free(a);
    _OPENSSL_sk_pop_free();
    _CRYPTO_free(a);
    param_2 = (ASN1_ITEM *)(section_00000068.segname + 4);
    _CRYPTO_free(a);
    *unaff_RDI = 0;
  }
  iVar1 = FUN_010b67e0();
  iVar2 = (int)uVar8;
  if (iVar1 == 0) {
LAB_010b6ad8:
    if (lVar6 == 0) goto LAB_010b6aec;
  }
  else {
    iVar1 = _BUF_MEM_grow(a,(int)param_2);
    iVar2 = (int)uVar8;
    if (CONCAT44(extraout_var,iVar1) != 0) {
      param_2 = (ASN1_ITEM *)(lVar7 - lVar4);
      _memcpy(a,param_2,param_3);
      iVar1 = _OPENSSL_sk_num();
      iVar2 = (int)uVar8;
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          _OPENSSL_sk_value();
          iVar2 = _OPENSSL_sk_num();
          if (0 < iVar2) {
            iVar5 = 0;
            do {
              lVar4 = _OPENSSL_sk_value();
              *(int *)(lVar4 + 0x10) = iVar1;
              iVar3 = _OPENSSL_sk_push();
              iVar2 = (int)uVar8;
              if (iVar3 == 0) goto LAB_010b6add;
              param_2 = (ASN1_ITEM *)0x0;
              _OPENSSL_sk_set();
              iVar5 = iVar5 + 1;
              iVar2 = _OPENSSL_sk_num();
            } while (iVar5 < iVar2);
          }
          iVar1 = iVar1 + 1;
          iVar5 = _OPENSSL_sk_num();
          iVar2 = (int)uVar8;
        } while (iVar1 < iVar5);
      }
      iVar1 = FUN_010b6d30();
      if (iVar1 != 0) {
        _OPENSSL_sk_pop_free();
        *(undefined4 *)(lVar6 + 8) = 0;
        *unaff_RDI = lVar6;
        *unaff_RSI = lVar7;
        return 1;
      }
      goto LAB_010b6ad8;
    }
  }
LAB_010b6add:
  _ASN1_item_free((ASN1_VALUE *)a,param_2);
LAB_010b6aec:
  _OPENSSL_sk_pop_free();
  _ERR_put_error(0x201d8fb,0x3a,0xce,&param_4->itype,iVar2);
  return 0;
}


