// Function: FUN_00f70900
// Address: 00f70900
// Size: 1306 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/tasn_enc.c"


int FUN_00f70900(ASN1_VALUE **param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint length;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  uint length_00;
  int iVar8;
  ASN1_VALUE **ppAVar9;
  uchar **ppuVar10;
  code *pp;
  undefined8 *puVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar12;
  ASN1_ITEM *it;
  uint tag;
  uint length_01;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 in_stack_ffffffffffffff88;
  longlong local_68;
  ASN1_ITEM *it_00;
  
  iVar13 = (int)in_stack_ffffffffffffff88;
  uVar12 = *param_2;
  if ((uVar12 & 0x1000) != 0) {
    unaff_RDI = (longlong *)&stack0xffffffffffffff70;
  }
  if ((uVar12 & 0x18) == 0) {
    length_01 = 0;
    if ((int)param_1 != -1) {
      length_01 = param_3 & 0xc0;
    }
  }
  else {
    if ((int)param_1 != -1) {
      return -1;
    }
    param_1 = (ASN1_VALUE **)(ulonglong)param_2[2];
    length_01 = uVar12 & 0xc0;
  }
  tag = param_3 & 0xffffff3f;
  it_00 = (ASN1_ITEM *)(ulonglong)tag;
  bVar14 = (uVar12 & 0x800) != 0;
  bVar15 = (param_3 & 0x800) != 0;
  length_00 = (uint)param_1;
  if ((uVar12 & 6) == 0) {
    if ((uVar12 & 0x10) == 0) {
      iVar2 = _ASN1_item_ex_i2d(param_1,*(uchar ***)(param_2 + 8),
                                (ASN1_ITEM *)(ulonglong)(length_01 | tag),tag,iVar13);
    }
    else {
      iVar2 = 0;
      iVar3 = -1;
      uVar12 = tag;
      uVar1 = tag;
      iVar8 = _ASN1_item_ex_i2d((ASN1_VALUE **)0xffffffff,*(uchar ***)(param_2 + 8),it_00,tag,iVar13
                               );
      if (((iVar8 != 0) &&
          (iVar2 = _ASN1_object_size(iVar3,length_00,uVar12), unaff_RSI != (longlong *)0x0)) &&
         (iVar2 != -1)) {
        _ASN1_put_object((uchar **)((ulonglong)param_1 & 0xffffffff),iVar8,length_01,uVar1,iVar13);
        ppuVar10 = (uchar **)0xffffffff;
        _ASN1_item_ex_i2d((ASN1_VALUE **)0xffffffff,*(uchar ***)(param_2 + 8),
                          (ASN1_ITEM *)(ulonglong)tag,uVar1,iVar13);
        if (bVar15 && bVar14) {
          _ASN1_put_eoc(ppuVar10);
        }
      }
    }
  }
  else if (*unaff_RDI == 0) {
    iVar2 = 0;
  }
  else {
    bVar16 = (uVar12 & 0x10) == 0;
    iVar13 = 0;
    uVar1 = 0x11 - ((uVar12 & 2) == 0);
    if (length_00 != 0xffffffff && bVar16) {
      uVar1 = length_00;
    }
    length = 0;
    if (length_00 != 0xffffffff && bVar16) {
      length = length_01;
    }
    ppAVar9 = param_1;
    iVar2 = _OPENSSL_sk_num();
    iVar3 = (int)in_stack_ffffffffffffff88;
    iVar8 = (int)ppAVar9;
    if (0 < iVar2) {
      iVar13 = 0;
      iVar2 = 0;
      do {
        _OPENSSL_sk_value();
        param_3 = tag;
        iVar3 = _ASN1_item_ex_i2d((ASN1_VALUE **)0xffffffff,*(uchar ***)(param_2 + 8),
                                  (ASN1_ITEM *)(ulonglong)tag,(int)it_00,
                                  (int)in_stack_ffffffffffffff88);
        if (iVar3 == -1) {
          return -1;
        }
        iVar8 = 0x7fffffff - iVar3;
        if (iVar8 < iVar13) {
          return -1;
        }
        iVar13 = iVar13 + iVar3;
        iVar2 = iVar2 + 1;
        iVar4 = _OPENSSL_sk_num();
        iVar3 = (int)in_stack_ffffffffffffff88;
      } while (iVar2 < iVar4);
    }
    iVar4 = _ASN1_object_size(iVar8,uVar1,param_3);
    if (iVar4 == -1) {
      iVar2 = -1;
    }
    else {
      if ((uVar12 & 0x10) == 0) {
        iVar2 = iVar4;
        if (unaff_RSI == (longlong *)0x0) {
          return iVar4;
        }
      }
      else {
        iVar2 = _ASN1_object_size(iVar8,length_00,param_3);
        if (unaff_RSI == (longlong *)0x0) {
          return iVar2;
        }
        if (iVar2 == -1) {
          return -1;
        }
        _ASN1_put_object((uchar **)((ulonglong)param_1 & 0xffffffff),iVar4,length_01,(int)it_00,
                         iVar3);
      }
      pp = (code *)(ulonglong)uVar1;
      it = (ASN1_ITEM *)(ulonglong)length;
      _ASN1_put_object((uchar **)pp,iVar13,length,(int)it_00,iVar3);
      ppuVar10 = *(uchar ***)(param_2 + 8);
      if (((uVar12 & 2) == 0) || (iVar13 = _OPENSSL_sk_num(), iVar13 < 2)) {
        iVar13 = _OPENSSL_sk_num();
        if (0 < iVar13) {
          iVar13 = 0;
          do {
            iVar8 = _OPENSSL_sk_value();
            pp = (code *)0xffffffff;
            _ASN1_item_ex_i2d((ASN1_VALUE **)0xffffffff,ppuVar10,(ASN1_ITEM *)(ulonglong)tag,
                              (int)it_00,iVar8);
            iVar13 = iVar13 + 1;
            iVar8 = _OPENSSL_sk_num();
          } while (iVar13 < iVar8);
        }
      }
      else {
        _OPENSSL_sk_num();
        puVar5 = _CRYPTO_malloc((int)pp,(char *)&section_00000158.reloff,(int)it);
        if (puVar5 != (undefined8 *)0x0) {
          pvVar6 = _CRYPTO_malloc((int)pp,(char *)((longlong)&section_00000158.reloff + 3),(int)it);
          if (pvVar6 == (void *)0x0) {
            _CRYPTO_free(pp);
          }
          else {
            iVar13 = _OPENSSL_sk_num();
            if (0 < iVar13) {
              iVar13 = 0;
              puVar11 = puVar5;
              do {
                uVar7 = _OPENSSL_sk_value();
                *puVar11 = pvVar6;
                it = (ASN1_ITEM *)(ulonglong)tag;
                iVar8 = _ASN1_item_ex_i2d((ASN1_VALUE **)0xffffffff,ppuVar10,it,(int)it_00,
                                          (int)uVar7);
                *(int *)(puVar11 + 1) = iVar8;
                puVar11[2] = uVar7;
                iVar13 = iVar13 + 1;
                iVar8 = _OPENSSL_sk_num();
                puVar11 = puVar11 + 3;
              } while (iVar13 < iVar8);
            }
            _OPENSSL_sk_num();
            pp = FUN_00f70f20;
            _qsort(FUN_00f70f20,0x18,(size_t)it,(int *)it_00);
            local_68 = *unaff_RSI;
            iVar13 = _OPENSSL_sk_num();
            if (0 < iVar13) {
              iVar13 = 0;
              do {
                _memcpy(pp,(void *)(longlong)*(int *)(puVar5 + 1),(size_t)it);
                local_68 = local_68 + *(int *)(puVar5 + 1);
                iVar13 = iVar13 + 1;
                iVar8 = _OPENSSL_sk_num();
                puVar5 = puVar5 + 3;
              } while (iVar13 < iVar8);
            }
            *unaff_RSI = local_68;
            if (((uVar12 & 4) != 0) && (iVar13 = _OPENSSL_sk_num(), 0 < iVar13)) {
              iVar13 = 0;
              do {
                _OPENSSL_sk_set();
                iVar13 = iVar13 + 1;
                iVar8 = _OPENSSL_sk_num();
              } while (iVar13 < iVar8);
            }
            _CRYPTO_free(pp);
            _CRYPTO_free(pp);
          }
        }
      }
      if ((bVar15 && bVar14) && (_ASN1_put_eoc((uchar **)pp), (uVar12 & 0x10) != 0)) {
        _ASN1_put_eoc((uchar **)pp);
      }
    }
  }
  return iVar2;
}


