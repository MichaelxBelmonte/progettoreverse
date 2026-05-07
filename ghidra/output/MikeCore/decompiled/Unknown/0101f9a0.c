// Function: FUN_0101f9a0
// Address: 0101f9a0
// Size: 760 bytes
// Class: Unknown


long FUN_0101f9a0(BIO *param_1,int *param_2,int *param_3,uchar *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *outm;
  int *piVar4;
  BIO *pBVar5;
  longlong lVar6;
  EVP_CIPHER_CTX *pEVar7;
  uint *ctx;
  int *data;
  int unaff_EBX;
  int unaff_ESI;
  uchar *unaff_RDI;
  uint uVar8;
  uint uVar9;
  
  pBVar5 = param_1;
  data = param_2;
  outm = (int *)_BIO_get_data();
  _BIO_next(pBVar5);
  if (outm == (int *)0x0) {
    return 0;
  }
  if (100 < unaff_ESI) {
    if (unaff_ESI == 0x65) {
      _BIO_clear_flags(pBVar5,(int)data);
      lVar3 = _BIO_ctrl(param_1,(int)param_2,(long)param_3,param_4);
      _BIO_copy_next_retry(param_1);
      return lVar3;
    }
    if (unaff_ESI == 0x71) {
      return outm[4];
    }
    if (unaff_ESI == 0x81) {
      param_1->method = *(BIO_METHOD **)(outm + 6);
      _BIO_set_init();
      return 1;
    }
switchD_0101f9fe_caseD_3:
    goto LAB_0101fc65;
  }
  ctx = &switchD_0101f9fe::switchdataD_0101fca8;
  switch(unaff_ESI) {
  case 1:
    outm[3] = 0;
    outm[4] = 1;
    uVar8 = _EVP_CIPHER_CTX_encrypting();
    param_3 = (int *)0x0;
    param_4 = (uchar *)(ulonglong)uVar8;
    iVar2 = _EVP_CipherInit_ex((EVP_CIPHER_CTX *)0x0,(EVP_CIPHER *)0x0,(ENGINE *)0x0,param_4,
                               unaff_RDI,unaff_EBX);
    if (iVar2 == 0) {
      return 0;
    }
    goto LAB_0101fc65;
  case 2:
    if (outm[2] < 1) {
      return 1;
    }
    goto LAB_0101fc65;
  default:
    goto switchD_0101f9fe_caseD_3;
  case 10:
    iVar2 = *outm - outm[1];
    break;
  case 0xb:
    do {
      while (*outm != outm[1]) {
        piVar4 = (int *)_BIO_get_data();
        pBVar5 = _BIO_next((BIO *)ctx);
        if ((piVar4 == (int *)0x0) || (pBVar5 == (BIO *)0x0)) {
          iVar2 = 0;
        }
        else {
          _BIO_clear_flags((BIO *)ctx,(int)data);
          uVar8 = *piVar4 - piVar4[1];
          if (uVar8 != 0 && piVar4[1] <= *piVar4) {
            do {
              data = (int *)(ulonglong)uVar8;
              iVar2 = _BIO_write((BIO *)ctx,data,(int)param_3);
              if (iVar2 < 1) {
                _BIO_copy_next_retry((BIO *)ctx);
                goto LAB_0101fae3;
              }
              piVar4[1] = piVar4[1] + iVar2;
              uVar9 = uVar8 - iVar2;
              bVar1 = iVar2 <= (int)uVar8;
              uVar8 = uVar9;
            } while (uVar9 != 0 && bVar1);
          }
          iVar2 = 0;
        }
LAB_0101fae3:
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      if (outm[3] != 0) goto LAB_0101fc65;
      outm[3] = 1;
      outm[1] = 0;
      data = outm;
      iVar2 = _EVP_CipherFinal_ex((EVP_CIPHER_CTX *)ctx,(uchar *)outm,param_3);
      outm[4] = iVar2;
      if (iVar2 < 1) {
        return iVar2;
      }
    } while( true );
  case 0xc:
    lVar6 = _BIO_get_data();
    pEVar7 = _EVP_CIPHER_CTX_new();
    *(EVP_CIPHER_CTX **)(lVar6 + 0x18) = pEVar7;
    if (pEVar7 == (EVP_CIPHER_CTX *)0x0) {
      return 0;
    }
    iVar2 = _EVP_CIPHER_CTX_copy();
    if (iVar2 == 0) {
      return 0;
    }
    _BIO_set_init();
    return iVar2;
  case 0xd:
    iVar2 = *outm - outm[1];
  }
  if (0 < iVar2) {
    return iVar2;
  }
LAB_0101fc65:
  lVar3 = _BIO_ctrl(param_1,(int)param_2,(long)param_3,param_4);
  return lVar3;
}


