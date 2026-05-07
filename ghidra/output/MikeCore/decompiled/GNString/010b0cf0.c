// Function: FUN_010b0cf0
// Address: 010b0cf0
// Size: 662 bytes
// Class: GNString


undefined8 FUN_010b0cf0(void)

{
  int iVar1;
  int iVar2;
  X509 *pXVar3;
  X509 *pXVar4;
  X509 *pXVar5;
  longlong lVar6;
  X509 *pXVar7;
  X509 *pXVar8;
  longlong unaff_RDI;
  uint uVar9;
  uint local_34;
  
  iVar1 = _OPENSSL_sk_num();
  uVar9 = iVar1 - 1;
  pXVar3 = (X509 *)_OPENSSL_sk_value();
  pXVar4 = pXVar3;
  if (*(int *)(unaff_RDI + 0xf0) == 0) {
    pXVar7 = pXVar3;
    iVar2 = (**(code **)(unaff_RDI + 0x48))();
    if (iVar2 != 0) {
      if (0 < iVar1) goto LAB_010b0e51;
      return 1;
    }
    pXVar8 = pXVar3;
    if ((*(byte *)(*(longlong *)(unaff_RDI + 0x20) + 0x1a) & 8) == 0) {
      if (1 < iVar1) {
        uVar9 = iVar1 - 2;
        *(uint *)(unaff_RDI + 0xac) = uVar9;
        goto LAB_010b0dd2;
      }
      *(undefined4 *)(unaff_RDI + 0xac) = 0;
      pXVar7 = pXVar3;
      if (pXVar3 == (X509 *)0x0) {
        pXVar7 = (X509 *)_OPENSSL_sk_value();
      }
      *(X509 **)(unaff_RDI + 0xb8) = pXVar7;
      *(undefined4 *)(unaff_RDI + 0xb0) = 0x15;
      iVar1 = (**(code **)(unaff_RDI + 0x38))();
      goto LAB_010b0f1f;
    }
  }
  else {
    pXVar8 = (X509 *)0x0;
  }
LAB_010b0f23:
  do {
    pXVar3 = pXVar4;
    pXVar7 = (X509 *)(ulonglong)uVar9;
    iVar1 = _x509_check_cert_time();
    if (iVar1 == 0) {
      return 0;
    }
    *(X509 **)(unaff_RDI + 0xc0) = pXVar8;
    *(X509 **)(unaff_RDI + 0xb8) = pXVar3;
    *(uint *)(unaff_RDI + 0xac) = uVar9;
    iVar1 = (**(code **)(unaff_RDI + 0x38))();
    if (iVar1 == 0) {
      return 0;
    }
    if ((int)uVar9 < 1) {
      return 1;
    }
    uVar9 = uVar9 - 1;
LAB_010b0dd2:
    pXVar4 = (X509 *)_OPENSSL_sk_value();
    if (pXVar3 == pXVar4) {
LAB_010b0e51:
      pXVar8 = pXVar3;
      if (((*(byte *)(*(longlong *)(unaff_RDI + 0x20) + 0x19) & 0x40) == 0) ||
         (((ulonglong)pXVar4[1].akid & 0x2000) == 0)) goto LAB_010b0f23;
      pXVar8 = (X509 *)(ulonglong)uVar9;
      local_34 = uVar9;
      if (((ulonglong)pXVar4[1].akid & 0x10) != 0) goto LAB_010b0df0;
LAB_010b0e81:
      lVar6 = _X509_get0_pubkey();
      if (lVar6 != 0) goto LAB_010b0e8e;
LAB_010b0ee3:
      *(uint *)(unaff_RDI + 0xac) = local_34;
      pXVar7 = pXVar3;
      if (pXVar3 == (X509 *)0x0) {
        pXVar7 = (X509 *)_OPENSSL_sk_value();
      }
      *(X509 **)(unaff_RDI + 0xb8) = pXVar7;
      *(undefined4 *)(unaff_RDI + 0xb0) = 6;
    }
    else {
      local_34 = uVar9 + 1;
LAB_010b0df0:
      iVar1 = _x509_signing_allowed();
      pXVar8 = pXVar3;
      if (iVar1 != 0) {
        *(uint *)(unaff_RDI + 0xac) = local_34;
        pXVar5 = pXVar3;
        if (pXVar3 == (X509 *)0x0) {
          pXVar5 = (X509 *)_OPENSSL_sk_value();
        }
        *(X509 **)(unaff_RDI + 0xb8) = pXVar5;
        *(int *)(unaff_RDI + 0xb0) = iVar1;
        iVar1 = (**(code **)(unaff_RDI + 0x38))();
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_010b0e81;
      }
      lVar6 = _X509_get0_pubkey();
      if (lVar6 == 0) goto LAB_010b0ee3;
LAB_010b0e8e:
      iVar1 = _X509_verify(pXVar8,(EVP_PKEY *)pXVar7);
      pXVar8 = pXVar3;
      if (0 < iVar1) goto LAB_010b0f23;
      *(uint *)(unaff_RDI + 0xac) = uVar9;
      pXVar7 = pXVar4;
      if (pXVar4 == (X509 *)0x0) {
        pXVar7 = (X509 *)_OPENSSL_sk_value();
      }
      *(X509 **)(unaff_RDI + 0xb8) = pXVar7;
      *(undefined4 *)(unaff_RDI + 0xb0) = 7;
    }
    iVar1 = (**(code **)(unaff_RDI + 0x38))();
LAB_010b0f1f:
    pXVar8 = pXVar3;
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}


