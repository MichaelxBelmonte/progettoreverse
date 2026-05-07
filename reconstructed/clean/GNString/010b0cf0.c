// Function: FUN_010b0cf0
// Address: 010b0cf0
// Size: 662 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_010b0cf0(void)

{
  int iVar1;
  int iVar2;
  X509 *pXVar3;
  X509 *pXVar4;
  X509 *pXVar5;
  int64_t lVar6;
  X509 *pXVar7;
  X509 *pXVar8;
  int64_t this_ptr;
  uint uVar9;
  uint local_34;
  
  iVar1 = _OPENSSL_sk_num();
  uVar9 = iVar1 - 1;
  pXVar3 = (X509 *)_OPENSSL_sk_value();
  pXVar4 = pXVar3;
  if (*(int *)(this_ptr + 0xf0) == 0) {
    pXVar7 = pXVar3;
    iVar2 = (**(code **)(this_ptr + 0x48))();
    if (iVar2 != 0) {
      if (0 < iVar1) goto LAB_010b0e51;
      return 1;
    }
    pXVar8 = pXVar3;
    if ((*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x1a) & 8) == 0) {
      if (1 < iVar1) {
        uVar9 = iVar1 - 2;
        *(uint *)(this_ptr + 0xac) = uVar9;
        goto LAB_010b0dd2;
      }
      *(void*)(this_ptr + 0xac) = 0;
      pXVar7 = pXVar3;
      if (pXVar3 == (X509 *)0x0) {
        pXVar7 = (X509 *)_OPENSSL_sk_value();
      }
      *(X509 **)(this_ptr + 0xb8) = pXVar7;
      *(void*)(this_ptr + 0xb0) = 0x15;
      iVar1 = (**(code **)(this_ptr + 0x38))();
      goto LAB_010b0f1f;
    }
  }
  else {
    pXVar8 = (X509 *)0x0;
  }
LAB_010b0f23:
  do {
    pXVar3 = pXVar4;
    pXVar7 = (X509 *)(uint64_t)uVar9;
    iVar1 = _x509_check_cert_time();
    if (iVar1 == 0) {
      return 0;
    }
    *(X509 **)(this_ptr + 0xc0) = pXVar8;
    *(X509 **)(this_ptr + 0xb8) = pXVar3;
    *(uint *)(this_ptr + 0xac) = uVar9;
    iVar1 = (**(code **)(this_ptr + 0x38))();
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
      if (((*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x19) & 0x40) == 0) ||
         (((uint64_t)pXVar4[1].akid & 0x2000) == 0)) goto LAB_010b0f23;
      pXVar8 = (X509 *)(uint64_t)uVar9;
      local_34 = uVar9;
      if (((uint64_t)pXVar4[1].akid & 0x10) != 0) goto LAB_010b0df0;
LAB_010b0e81:
      lVar6 = _X509_get0_pubkey();
      if (lVar6 != 0) goto LAB_010b0e8e;
LAB_010b0ee3:
      *(uint *)(this_ptr + 0xac) = local_34;
      pXVar7 = pXVar3;
      if (pXVar3 == (X509 *)0x0) {
        pXVar7 = (X509 *)_OPENSSL_sk_value();
      }
      *(X509 **)(this_ptr + 0xb8) = pXVar7;
      *(void*)(this_ptr + 0xb0) = 6;
    }
    else {
      local_34 = uVar9 + 1;
LAB_010b0df0:
      iVar1 = _x509_signing_allowed();
      pXVar8 = pXVar3;
      if (iVar1 != 0) {
        *(uint *)(this_ptr + 0xac) = local_34;
        pXVar5 = pXVar3;
        if (pXVar3 == (X509 *)0x0) {
          pXVar5 = (X509 *)_OPENSSL_sk_value();
        }
        *(X509 **)(this_ptr + 0xb8) = pXVar5;
        *(int *)(this_ptr + 0xb0) = iVar1;
        iVar1 = (**(code **)(this_ptr + 0x38))();
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
      *(uint *)(this_ptr + 0xac) = uVar9;
      pXVar7 = pXVar4;
      if (pXVar4 == (X509 *)0x0) {
        pXVar7 = (X509 *)_OPENSSL_sk_value();
      }
      *(X509 **)(this_ptr + 0xb8) = pXVar7;
      *(void*)(this_ptr + 0xb0) = 7;
    }
    iVar1 = (**(code **)(this_ptr + 0x38))();
LAB_010b0f1f:
    pXVar8 = pXVar3;
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}

