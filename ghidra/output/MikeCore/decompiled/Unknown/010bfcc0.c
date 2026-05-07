// Function: FUN_010bfcc0
// Address: 010bfcc0
// Size: 1003 bytes
// Class: Unknown
// String references:
//   "crypto/x509v3/v3_asid.c"


bool FUN_010bfcc0(undefined8 param_1,ASN1_ITEM *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  ASN1_ITEM *y;
  BIGNUM *pBVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BIGNUM *a;
  uint *puVar7;
  BIGNUM *pBVar8;
  ASN1_INTEGER *pAVar9;
  uchar *puVar10;
  int *piVar11;
  char *a_00;
  uchar **ppuVar12;
  bool bVar13;
  int *unaff_RDI;
  ulonglong uVar14;
  ulonglong in_stack_ffffffffffffffa8;
  BIGNUM *local_40;
  
  iVar5 = (int)in_stack_ffffffffffffffa8;
  if (unaff_RDI == (int *)0x0) {
    return true;
  }
  if (*unaff_RDI == 0) {
    return true;
  }
  if (*unaff_RDI != 1) {
LAB_010bffc3:
    _ERR_put_error(0x201e05e,0x74,0x179,param_4,iVar5);
    return false;
  }
  iVar4 = _OPENSSL_sk_num();
  iVar5 = (int)in_stack_ffffffffffffffa8;
  if (iVar4 == 0) goto LAB_010bffc3;
  _OPENSSL_sk_sort();
  iVar5 = _OPENSSL_sk_num();
  a_00 = (char *)0x0;
  if (1 < iVar5) {
    local_40 = (BIGNUM *)0x0;
    uVar14 = 0;
    do {
      iVar4 = (int)in_stack_ffffffffffffffa8;
      a = (BIGNUM *)_OPENSSL_sk_value();
      iVar5 = (int)uVar14;
      puVar7 = (uint *)_OPENSSL_sk_value();
      bVar13 = false;
      if (a == (BIGNUM *)0x0) goto LAB_010c006b;
      uVar1 = *(uint *)&a->d;
      a_00 = (char *)(ulonglong)uVar1;
      if (uVar1 == 1) {
        ppuVar12 = *(uchar ***)&a->top;
        a_00 = (char *)(ppuVar12 + 1);
      }
      else {
        if (uVar1 != 0) goto LAB_010c006b;
        a_00 = (char *)&a->top;
        ppuVar12 = (uchar **)a_00;
      }
      if (puVar7 == (uint *)0x0) goto LAB_010c006b;
      y = (ASN1_ITEM *)*ppuVar12;
      uVar1 = *puVar7;
      a_00 = (char *)(ulonglong)uVar1;
      if (uVar1 == 1) {
        puVar3 = *(uint **)(puVar7 + 2);
      }
      else {
        puVar3 = puVar7;
        bVar13 = false;
        if (uVar1 != 0) goto LAB_010c006b;
      }
      a_00 = (char *)(puVar3 + 2);
      pBVar2 = (BIGNUM *)((BIGNUM *)a_00)->d;
      param_2 = y;
      iVar6 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a_00,(ASN1_INTEGER *)y);
      if (((0 < iVar6) ||
          (iVar6 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a_00,(ASN1_INTEGER *)param_2), 0 < iVar6)) ||
         (iVar6 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a_00,(ASN1_INTEGER *)param_2), 0 < iVar6)) {
LAB_010c0069:
        bVar13 = false;
        goto LAB_010c006b;
      }
      iVar6 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a_00,(ASN1_INTEGER *)param_2);
      if (-1 < iVar6) {
        a_00 = "crypto/x509v3/v3_asid.c";
        _ERR_put_error(0x201e05e,0x74,0x1a2,param_4,iVar4);
        goto LAB_010c0069;
      }
      if (((local_40 == (BIGNUM *)0x0) && (local_40 = _BN_new(), local_40 == (BIGNUM *)0x0)) ||
         (pBVar8 = _ASN1_INTEGER_to_BN((ASN1_INTEGER *)a_00,(BIGNUM *)param_2),
         pBVar8 == (BIGNUM *)0x0)) {
LAB_010c0048:
        iVar5 = 0x1ad;
LAB_010c0064:
        a_00 = "crypto/x509v3/v3_asid.c";
        _ERR_put_error(0x201e05e,0x41,iVar5,param_4,iVar4);
        goto LAB_010c0069;
      }
      iVar6 = _BN_add_word((BIGNUM *)a_00,(ulong)param_2);
      iVar4 = (int)uVar14;
      if (iVar6 == 0) goto LAB_010c0048;
      pAVar9 = _BN_to_ASN1_INTEGER((BIGNUM *)a_00,(ASN1_INTEGER *)param_2);
      iVar4 = (int)uVar14;
      if (pAVar9 == (ASN1_INTEGER *)0x0) {
        iVar5 = 0x1b5;
        goto LAB_010c0064;
      }
      iVar4 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a_00,(ASN1_INTEGER *)param_2);
      in_stack_ffffffffffffffa8 = uVar14;
      if (iVar4 == 0) {
        if (*(int *)&a->d == 1) {
          _ASN1_INTEGER_free((ASN1_INTEGER *)a);
          *(BIGNUM **)(*(uchar **)&a->top + 8) = pBVar2;
          a_00 = (char *)pBVar2;
          in_stack_ffffffffffffffa8 = uVar14;
        }
        else {
          a_00 = (char *)a;
          if (*(int *)&a->d == 0) {
            param_2 = (ASN1_ITEM *)(section_000001a8.segname + 8);
            puVar10 = _CRYPTO_malloc((int)a,section_000001a8.segname + 8,(int)param_3);
            iVar4 = (int)in_stack_ffffffffffffffa8;
            if (puVar10 == (uchar *)0x0) {
              iVar5 = 0x1c2;
              goto LAB_010c0064;
            }
            *(ASN1_ITEM **)puVar10 = y;
            *(BIGNUM **)(puVar10 + 8) = pBVar2;
            *(int *)&a->d = 1;
            *(uchar **)&a->top = puVar10;
            a_00 = (char *)pBVar2;
          }
        }
        if (*puVar7 == 1) {
          puVar7 = *(uint **)(puVar7 + 2);
LAB_010bff3a:
          puVar7[2] = 0;
          puVar7[3] = 0;
        }
        else if (*puVar7 == 0) goto LAB_010bff3a;
        _ASN1_item_free((ASN1_VALUE *)a_00,param_2);
        _OPENSSL_sk_delete();
      }
      else {
        uVar14 = (ulonglong)(iVar5 + 1);
      }
      iVar5 = _OPENSSL_sk_num();
    } while ((int)uVar14 < iVar5 + -1);
  }
  _OPENSSL_sk_num();
  piVar11 = (int *)_OPENSSL_sk_value();
  if ((piVar11 != (int *)0x0) && (*piVar11 == 1)) {
    iVar5 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)a_00,(ASN1_INTEGER *)param_2);
    bVar13 = false;
    if (0 < iVar5) goto LAB_010c006b;
  }
  iVar5 = FUN_010bf9e0();
  bVar13 = iVar5 != 0;
LAB_010c006b:
  _ASN1_INTEGER_free((ASN1_INTEGER *)a_00);
  _BN_free((BIGNUM *)a_00);
  return bVar13;
}


