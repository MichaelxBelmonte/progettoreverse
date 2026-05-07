// Function: FUN_010b1e10
// Address: 010b1e10
// Size: 718 bytes
// Class: GNList


uint FUN_010b1e10(X509 *param_1,X509 *param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  X509 *pXVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint unaff_ESI;
  longlong unaff_RDI;
  bool bVar10;
  
  lVar1 = *(longlong *)(unaff_RDI + 0xe8);
  uVar3 = _OPENSSL_sk_num();
  if (((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 5) != 0)) && (0 < (int)unaff_ESI)) &&
      (((int)unaff_ESI < (int)uVar3 && (*(longlong *)(unaff_RDI + 0xe8) != 0)))) &&
     (((*(byte *)(*(longlong *)(unaff_RDI + 0xe8) + 0x28) & 5) != 0 &&
      (pXVar6 = (X509 *)_OPENSSL_sk_value(), pXVar6 != (X509 *)0x0)))) {
    param_1 = (X509 *)(ulonglong)unaff_ESI;
    iVar4 = FUN_010b2220();
    if (iVar4 < 0) {
      return 2;
    }
    param_2 = pXVar6;
    if (iVar4 != 0) {
      *(uint *)(unaff_RDI + 0x94) = unaff_ESI - 1;
      return 1;
    }
  }
  uVar9 = unaff_ESI;
  if ((int)uVar3 <= (int)unaff_ESI) {
    if (uVar3 != unaff_ESI) {
      return 3;
    }
    if ((*(byte *)(*(longlong *)(unaff_RDI + 0x20) + 0x1a) & 8) == 0) {
      return 3;
    }
    lVar7 = _OPENSSL_sk_value();
    pcVar2 = *(code **)(unaff_RDI + 0x78);
    _X509_get_subject_name(param_1);
    lVar8 = (*pcVar2)();
    if (lVar8 == 0) {
      return 3;
    }
    iVar4 = _OPENSSL_sk_num();
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        lVar8 = _OPENSSL_sk_value();
        iVar5 = _X509_cmp(param_1,param_2);
        if (iVar5 == 0) {
          if ((lVar8 != 0) && (iVar4 = _X509_up_ref(), iVar4 != 0)) {
            _OPENSSL_sk_pop_free();
            uVar9 = 0;
            iVar4 = _X509_check_trust(param_1,0,param_3);
            if (iVar4 != 2) {
              _OPENSSL_sk_set();
              _X509_free(param_1);
              *(undefined4 *)(unaff_RDI + 0x94) = 0;
              goto LAB_010b2098;
            }
            _X509_free(param_1);
            goto LAB_010b2012;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = _OPENSSL_sk_num();
      } while (iVar4 < iVar5);
    }
    _OPENSSL_sk_pop_free();
    return 3;
  }
  do {
    lVar7 = _OPENSSL_sk_value();
    iVar4 = _X509_check_trust(param_1,0,param_3);
    if (iVar4 == 1) goto LAB_010b2098;
    if (iVar4 == 2) {
LAB_010b2012:
      *(uint *)(unaff_RDI + 0xac) = uVar9;
      if (lVar7 == 0) {
        lVar7 = _OPENSSL_sk_value();
      }
      *(longlong *)(unaff_RDI + 0xb8) = lVar7;
      *(undefined4 *)(unaff_RDI + 0xb0) = 0x1c;
      iVar4 = (**(code **)(unaff_RDI + 0x38))();
      return 3 - (iVar4 == 0);
    }
    uVar9 = uVar9 + 1;
  } while (uVar3 != uVar9);
  bVar10 = (*(byte *)(*(longlong *)(unaff_RDI + 0x20) + 0x1a) & 8) == 0;
  uVar3 = bVar10 + 1 + (uint)bVar10;
  if (bVar10) {
    return uVar3;
  }
  if (lVar1 == 0) {
    return uVar3;
  }
LAB_010b20a1:
  iVar4 = _OPENSSL_sk_num();
  if (iVar4 < 1) {
    return 1;
  }
  if (*(int *)(lVar1 + 0x30) < 0) {
    *(uint *)(lVar1 + 0x30) = unaff_ESI;
  }
  return *(uint *)(lVar1 + 0x2c) >> 0x1e | 1;
LAB_010b2098:
  if (lVar1 == 0) {
    return 1;
  }
  goto LAB_010b20a1;
}


