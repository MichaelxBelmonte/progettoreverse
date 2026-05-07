// Function: FUN_010b2220
// Address: 010b2220
// Size: 983 bytes
// Class: GNList
// String references:
//   "crypto/x509/x509_vfy.c"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint FUN_010b2220(int param_1,EVP_MD *param_2,uchar *param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  void *pvVar9;
  dword *out;
  ENGINE *arg1;
  int unaff_EDI;
  uint64_t uVar10;
  int iVar11;
  uint uVar12;
  ENGINE *impl;
  X509 *local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint8_t local_78 [64];
  ASN1_OCTET_STRING *local_38;
  
  local_38 = *(ASN1_OCTET_STRING **)PTR____stack_chk_guard_024a9898;
  uVar5 = (uint)(param_1 == 0) * 5 + 5;
  uVar12 = uVar5 & 3;
  if (param_1 < unaff_EDI) {
    uVar12 = uVar5;
  }
  local_90 = (X509 *)(uint64_t)uVar12;
  local_88 = 0;
  uVar5 = uVar12 & 0xc;
  if (*(int *)(arg1 + 0x2c) < 0) {
    uVar5 = uVar12;
  }
  if (((*(uint *)(arg1 + 0x28) & uVar5) == 0) || (iVar6 = _OPENSSL_sk_num(), iVar6 < 1)) {
    uVar12 = 0;
  }
  else {
    iVar11 = 0;
    local_84 = 0x100;
    uVar12 = 0x100;
    local_80 = 0x100;
    local_7c = 0x100;
    impl = arg1;
    do {
      pbVar8 = (byte *)_OPENSSL_sk_value();
      uVar3 = local_7c;
      bVar1 = *pbVar8;
      local_90 = (X509 *)(uint64_t)uVar5;
      uVar4 = local_88;
      local_7c = uVar3;
      if ((uVar5 >> (bVar1 & 0x1f) & 1) != 0) {
        if (local_84 != bVar1) {
          bVar2 = *(byte *)(*(int64_t *)(*(int64_t *)arg1 + 8) + (uint64_t)pbVar8[2]);
          local_90 = (X509 *)(uint64_t)bVar2;
          local_80 = (uint)bVar2;
          uVar12 = 0x100;
          local_84 = (uint)bVar1;
        }
        bVar1 = pbVar8[1];
        if (local_7c != bVar1) {
          out = &dysymtab_command_00000a50.extreloff;
          _CRYPTO_free(local_90);
          iVar6 = (int)param_2;
          if (bVar1 == 1) {
            _X509_get_X509_PUBKEY();
            _i2d_X509_PUBKEY((X509_PUBKEY *)local_90,(uchar **)out);
LAB_010b2402:
            iVar11 = 0x41;
            iVar7 = 0xa38;
          }
          else {
            if (bVar1 == 0) {
              _i2d_X509(local_90,(uchar **)out);
              goto LAB_010b2402;
            }
            iVar11 = 0x85;
            iVar7 = 0xa33;
          }
          _ERR_put_error(0x201d7ac,iVar11,iVar7,param_4,iVar6);
          if (*(ASN1_OCTET_STRING **)PTR____stack_chk_guard_024a9898 == local_38) {
            return 0xffffffff;
          }
          goto LAB_010b25f3;
        }
        bVar1 = pbVar8[2];
        uVar10 = (uint64_t)bVar1;
        arg1 = impl;
        if ((uVar10 == 0) || (local_80 <= *(byte *)(*(int64_t *)(*(int64_t *)impl + 8) + uVar10)))
        {
          if (uVar12 == bVar1) {
            pvVar9 = (void *)(uint64_t)local_88;
            if (*(void **)(pbVar8 + 0x10) == pvVar9) {
LAB_010b24da:
              impl = arg1;
              local_7c = uVar3;
              iVar7 = _memcmp(local_90,pvVar9,(size_t)param_3);
              uVar4 = local_88;
              if (iVar7 == 0) {
                local_90 = (X509 *)(uint64_t)local_84;
                uVar12 = 0xcU >> ((byte)local_84 & 0x1f) & 1;
                if ((uVar12 != 0) || (*(int *)(arg1 + 0x2c) < 0)) {
                  *(int *)(arg1 + 0x2c) = param_1;
                  *(byte **)(arg1 + 0x18) = pbVar8;
                  _CRYPTO_free(local_90);
                  *(EVP_MD **)(arg1 + 0x20) = param_2;
                  _X509_up_ref();
                  goto LAB_010b2519;
                }
                break;
              }
            }
          }
          else {
            local_90 = (X509 *)0x0;
            param_3 = *(uchar **)(**(int64_t **)impl + uVar10 * 8);
            local_88 = 0;
            uVar12 = (uint)bVar1;
            if (param_3 == (uchar *)0x0) {
              pvVar9 = (void *)0x0;
              uVar4 = 0;
              if (*(int64_t *)(pbVar8 + 0x10) == 0) goto LAB_010b24da;
            }
            else {
              local_90 = (X509 *)&local_88;
              param_4 = (char *)0x0;
              iVar7 = _EVP_Digest(local_90,(size_t)local_78,param_3,(uint *)0x0,param_2,impl);
              if (iVar7 == 0) {
                uVar12 = 0xffffffff;
                goto LAB_010b2519;
              }
              pvVar9 = (void *)(uint64_t)local_88;
              arg1 = impl;
              uVar4 = local_88;
              local_7c = uVar3;
              if (*(void **)(pbVar8 + 0x10) == pvVar9) goto LAB_010b24da;
            }
          }
        }
      }
      local_88 = uVar4;
      iVar11 = iVar11 + 1;
    } while (iVar6 != iVar11);
    uVar12 = 0;
  }
LAB_010b2519:
  _CRYPTO_free(local_90);
  if (*(ASN1_OCTET_STRING **)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar12;
  }
LAB_010b25f3:
                      ___stack_chk_fail();
}

