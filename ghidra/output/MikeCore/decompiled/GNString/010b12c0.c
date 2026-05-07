// Function: FUN_010b12c0
// Address: 010b12c0
// Size: 782 bytes
// Class: GNString


bool FUN_010b12c0(X509_STORE_CTX *param_1,undefined8 param_2,X509 *param_3,STACK *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  EVP_PKEY *r;
  X509 *b;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  iVar2 = *(int *)(unaff_RDI + 0xac);
  iVar1 = _OPENSSL_sk_num();
  lVar4 = *(longlong *)(unaff_RDI + 0xc0);
  if (lVar4 == 0) {
    if (iVar2 < iVar1 + -1) {
      lVar4 = _OPENSSL_sk_value();
    }
    else {
      lVar4 = _OPENSSL_sk_value();
      iVar2 = (**(code **)(unaff_RDI + 0x48))();
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_RDI + 0xb0) = 0x21;
        iVar2 = (**(code **)(unaff_RDI + 0x38))();
        if (iVar2 == 0) {
          return false;
        }
      }
    }
    if (lVar4 == 0) {
      return true;
    }
  }
  if (*(longlong *)(unaff_RSI + 0xa8) != 0) goto LAB_010b1366;
  if (((*(byte *)(lVar4 + 0xe0) & 2) != 0) && ((*(byte *)(lVar4 + 0xe4) & 2) == 0)) {
    *(undefined4 *)(unaff_RDI + 0xb0) = 0x23;
    iVar2 = (**(code **)(unaff_RDI + 0x38))();
    if (iVar2 == 0) {
      return false;
    }
  }
  uVar3 = *(uint *)(unaff_RDI + 0xd0);
  if (-1 < (char)uVar3) {
    *(undefined4 *)(unaff_RDI + 0xb0) = 0x2c;
    iVar2 = (**(code **)(unaff_RDI + 0x38))();
    if (iVar2 == 0) {
      return false;
    }
    uVar3 = *(uint *)(unaff_RDI + 0xd0);
  }
  if ((uVar3 & 8) == 0) {
    if (*(longlong *)(unaff_RDI + 0xd8) == 0) {
      b = *(X509 **)(unaff_RDI + 0xc0);
      param_1 = *(X509_STORE_CTX **)(unaff_RDI + 0x10);
      iVar2 = _X509_STORE_CTX_init(param_1,(X509_STORE *)b,param_3,param_4);
      if (iVar2 != 0) {
        _X509_VERIFY_PARAM_free((X509_VERIFY_PARAM *)param_1);
        uVar3 = _X509_verify_cert(param_1);
        if (0 < (int)uVar3) {
          _OPENSSL_sk_num();
          _OPENSSL_sk_value();
          _OPENSSL_sk_num();
          _OPENSSL_sk_value();
          iVar2 = _X509_cmp((X509 *)param_1,b);
          uVar3 = (uint)(iVar2 == 0);
        }
        _X509_STORE_CTX_cleanup(param_1);
        if (0 < (int)uVar3) goto LAB_010b158c;
      }
    }
    *(undefined4 *)(unaff_RDI + 0xb0) = 0x36;
    iVar2 = (**(code **)(unaff_RDI + 0x38))();
    if (iVar2 == 0) {
      return false;
    }
  }
LAB_010b158c:
  if ((*(byte *)(unaff_RSI + 0x98) & 2) != 0) {
    *(undefined4 *)(unaff_RDI + 0xb0) = 0x29;
    iVar2 = (**(code **)(unaff_RDI + 0x38))();
    if (iVar2 == 0) {
      return false;
    }
  }
LAB_010b1366:
  if (((*(byte *)(unaff_RDI + 0xd0) & 0x40) == 0) && (iVar2 = FUN_010b2e90(), iVar2 == 0)) {
    return false;
  }
  lVar4 = _X509_get0_pubkey();
  if (lVar4 == 0) {
    *(undefined4 *)(unaff_RDI + 0xb0) = 6;
    iVar2 = (**(code **)(unaff_RDI + 0x38))();
    return iVar2 != 0;
  }
  r = *(EVP_PKEY **)(*(longlong *)(unaff_RDI + 0x20) + 0x18);
  iVar2 = _X509_CRL_check_suiteb();
  if (iVar2 != 0) {
    *(int *)(unaff_RDI + 0xb0) = iVar2;
    iVar2 = (**(code **)(unaff_RDI + 0x38))();
    if (iVar2 == 0) {
      return false;
    }
  }
  iVar2 = _X509_CRL_verify((X509_CRL *)param_1,r);
  if (iVar2 < 1) {
    *(undefined4 *)(unaff_RDI + 0xb0) = 8;
    iVar2 = (**(code **)(unaff_RDI + 0x38))();
    if (iVar2 == 0) {
      return false;
    }
  }
  return true;
}


