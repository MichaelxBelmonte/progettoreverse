// Function: FUN_010ae7c0
// Address: 010ae7c0
// Size: 5261 bytes
// Class: GNList
// String references:
//   "crypto/x509/x509_vfy.c"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_010ae7c0(X509 *param_1,uint64_t param_2,dword *param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int64_t lVar12;
  X509 *pXVar13;
  X509 *pXVar14;
  char *pcVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t lVar18;
  X509_NAME *pXVar19;
  void *pvVar20;
  int *piVar21;
  uint uVar22;
  X509 *pXVar23;
  char *a;
  ASN1_OBJECT *o;
  X509_NAME *b;
  uint uVar24;
  int64_t this_ptr;
  bool bVar25;
  int local_84;
  char local_80;
  uint uStackY_7c;
  X509 *in_stack_ffffffffffffff88;
  int64_t local_60;
  int local_58;
  uint local_34;
  
  iVar6 = (int)in_stack_ffffffffffffff88;
  lVar17 = *(int64_t *)(this_ptr + 0xe8);
  iVar4 = _OPENSSL_sk_num();
  lVar12 = _OPENSSL_sk_value();
  local_34 = 0;
  pXVar14 = (X509 *)0x0;
  iVar5 = _X509_check_purpose(param_1,0,(int)param_3);
  if (iVar5 == 1) {
    local_34 = *(uint *)(lVar12 + 0xe0) >> 0xd & 1;
  }
  if ((iVar4 == 1) && (*(int *)(this_ptr + 0x94) == 1)) {
    lVar12 = *(int64_t *)(this_ptr + 0x10);
    uVar9 = (uint)(lVar12 != 0);
    if ((lVar17 != 0) && ((*(uint *)(lVar17 + 0x28) & 3) == 0)) {
      _local_80 = CONCAT44(uStackY_7c,(int)CONCAT71((int7)((uint64_t)param_1 >> 8),1));
      if ((*(uint *)(lVar17 + 0x28) & 0xc) == 0) goto LAB_010ae86f;
LAB_010ae8fa:
      bVar25 = false;
      if (lVar12 != 0) goto LAB_010ae908;
      local_60 = 0;
joined_r0x010ae920:
      if (((lVar17 != 0) && (iVar4 = _OPENSSL_sk_num(), 0 < iVar4)) &&
         (*(int64_t *)(lVar17 + 0x10) != 0)) {
        if ((local_60 == 0) && (lVar12 = _OPENSSL_sk_new_null(), lVar12 == 0)) {
          iVar4 = 0xbb0;
          goto LAB_010aee82;
        }
        iVar4 = _OPENSSL_sk_num();
        if (0 < iVar4) {
          iVar4 = 0;
          do {
            _OPENSSL_sk_value();
            iVar5 = _OPENSSL_sk_push();
            if (iVar5 == 0) {
              _OPENSSL_sk_free();
              iVar4 = 2999;
              goto LAB_010aee82;
            }
            iVar4 = iVar4 + 1;
            iVar5 = _OPENSSL_sk_num();
          } while (iVar4 < iVar5);
        }
      }
      iVar4 = *(int *)(*(int64_t *)(this_ptr + 0x20) + 0x28);
      if (0x3fffffff < iVar4) {
        *(void*)(*(int64_t *)(this_ptr + 0x20) + 0x28) = 0x3fffffff;
        iVar4 = 0x3fffffff;
      }
      uVar22 = iVar4 + 1;
      a = (char *)(uint64_t)uVar22;
      if (uVar9 == 0) {
        local_58 = 3;
      }
      else {
        local_58 = 3;
        iVar5 = 0;
        iVar4 = iVar5;
        do {
          pXVar23 = in_stack_ffffffffffffff88;
          if ((uVar9 & 2) == 0) goto LAB_010aea2a;
          iVar11 = _OPENSSL_sk_num();
          if ((uVar9 & 4) == 0) {
            iVar4 = iVar11;
          }
          pXVar23 = (X509 *)_OPENSSL_sk_value();
          if (iVar11 <= (int)uVar22) {
            uVar16 = *(void*)(this_ptr + 0x98);
            *(void*)(this_ptr + 0x98) = 0;
            pXVar14 = pXVar23;
            iVar6 = (**(code **)(this_ptr + 0x40))();
            *(void*)(this_ptr + 0x98) = uVar16;
            if (iVar6 < 0) {
              *(void*)(this_ptr + 0xb0) = 0x46;
LAB_010af016:
              local_58 = 2;
LAB_010af066:
              iVar6 = (int)pXVar23;
            }
            else {
              in_stack_ffffffffffffff88 = pXVar23;
              if (iVar6 == 0) goto joined_r0x010aec1a;
              iVar6 = (int)pXVar23;
              if ((uVar9 & 4) != 0) {
                if (((iVar11 <= iVar4) || (iVar4 < 1)) || (local_34 != 0)) {
                  a = "crypto/x509/x509_vfy.c";
                  pXVar14 = (X509 *)((int64_t)&segment_command_00000020.vmsize + 4);
                  param_3 = (dword *)0xc0e;
                  _ERR_put_error(0x201d7ac,0x44,0xc0e,(char *)param_4,iVar6);
                  _X509_free((X509 *)a);
                  *(void*)(this_ptr + 0xb0) = 1;
                  goto LAB_010af016;
                }
                _OPENSSL_sk_pop();
                _X509_free((X509 *)a);
                while (iVar11 = iVar11 + -1, iVar4 < iVar11) {
                  _OPENSSL_sk_pop();
                  _X509_free((X509 *)a);
                }
                uVar9 = uVar9 & 0xfffffffb;
                *(int *)(this_ptr + 0x94) = iVar4;
                iVar11 = iVar4;
                if (lVar17 != 0) {
                  iVar4 = _OPENSSL_sk_num();
                  if ((0 < iVar4) && (*(int *)(this_ptr + 0x94) <= *(int *)(lVar17 + 0x2c))) {
                    *(void*)(lVar17 + 0x2c) = 0xffffffff;
                    _X509_free((X509 *)a);
                    *(void*)(lVar17 + 0x20) = 0;
                  }
                  iVar4 = _OPENSSL_sk_num();
                  if ((0 < iVar4) && (*(int *)(this_ptr + 0x94) <= *(int *)(lVar17 + 0x30))) {
                    *(void*)(lVar17 + 0x30) = 0xffffffff;
                  }
                }
              }
              if (local_34 == 0) {
                iVar4 = _OPENSSL_sk_push();
                if (iVar4 != 0) {
                  local_34 = 0;
                  pXVar14 = (X509 *)0x0;
                  iVar4 = _X509_check_purpose((X509 *)a,0,(int)param_3);
                  if (iVar4 == 1) {
                    local_34 = (uint)section_000000b8.size >> 0xd & 1;
                  }
                  goto LAB_010aed61;
                }
                _X509_free((X509 *)a);
                a = "crypto/x509/x509_vfy.c";
                pXVar14 = (X509 *)((int64_t)&segment_command_00000020.vmsize + 1);
                param_3 = (dword *)0xc2c;
                _ERR_put_error(0x201d7ac,0x41,0xc2c,(char *)param_4,iVar6);
                *(void*)(this_ptr + 0xb0) = 0x11;
                goto LAB_010af058;
              }
              local_34 = 1;
              if (iVar11 == *(int *)(this_ptr + 0x94)) {
                iVar4 = _X509_cmp((X509 *)a,pXVar14);
                if (iVar4 != 0) {
                  _X509_free((X509 *)a);
LAB_010aed99:
                  local_34 = 1;
                  iVar4 = iVar5;
                  if ((uVar9 & 1) != 0) goto LAB_010aea2a;
                  goto LAB_010aedaa;
                }
                _X509_free((X509 *)a);
                *(int *)(this_ptr + 0x94) = iVar11 + -1;
                pXVar14 = (X509 *)0x0;
                _OPENSSL_sk_set();
                if (*(int *)(this_ptr + 0x94) <= iVar11 + -1) goto LAB_010aed6e;
LAB_010aefa1:
                a = "crypto/x509/x509_vfy.c";
                pXVar14 = (X509 *)((int64_t)&segment_command_00000020.vmsize + 4);
                param_3 = &dylib_command_00000c48.dylib.timestamp;
                _ERR_put_error(0x201d7ac,0x44,0xc54,(char *)param_4,iVar6);
                *(void*)(this_ptr + 0xb0) = 1;
                local_58 = 2;
              }
              else {
LAB_010aed61:
                if (iVar11 < *(int *)(this_ptr + 0x94)) goto LAB_010aefa1;
LAB_010aed6e:
                local_58 = FUN_010b1e10();
                a = (char *)(uint64_t)(local_58 - 1U);
                if (1 < local_58 - 1U) {
                  uVar9 = uVar9 & 0xfffffffe;
                  if (local_34 != 0) goto LAB_010aed99;
                  local_34 = 0;
                  pXVar13 = pXVar14;
                  iVar4 = iVar5;
                  goto LAB_010aea0f;
                }
              }
            }
            break;
          }
joined_r0x010aec1a:
          pXVar23 = in_stack_ffffffffffffff88;
          iVar4 = iVar5;
          if ((uVar9 & 1) == 0) {
LAB_010aedaa:
            iVar6 = (int)pXVar23;
            if ((uVar9 & 4) == 0) {
              if ((bVar25) && (1 < *(int *)(this_ptr + 0x94))) {
                uVar9 = uVar9 | 4;
                iVar5 = *(int *)(this_ptr + 0x94) + -1;
                local_34 = 0;
                iVar4 = iVar5;
                goto LAB_010aea2a;
              }
              break;
            }
            if (iVar5 < 2) break;
            iVar5 = iVar5 + -1;
            pXVar13 = pXVar14;
            iVar4 = iVar5;
          }
          else {
LAB_010aea2a:
            pXVar13 = pXVar14;
            if ((uVar9 & 1) != 0) {
              iVar6 = _OPENSSL_sk_num();
              iVar11 = (int)pXVar23;
              if (iVar6 != *(int *)(this_ptr + 0x94)) {
                a = "crypto/x509/x509_vfy.c";
                pXVar14 = (X509 *)((int64_t)&segment_command_00000020.vmsize + 4);
                param_3 = (dword *)0xc81;
                _ERR_put_error(0x201d7ac,0x44,0xc81,(char *)param_4,iVar11);
                *(void*)(this_ptr + 0xb0) = 1;
LAB_010aeecc:
                local_58 = 2;
                goto LAB_010af066;
              }
              pXVar13 = (X509 *)_OPENSSL_sk_value();
              iVar4 = iVar5;
              if (((local_34 == 0) && (iVar6 <= (int)uVar22)) &&
                 (lVar12 = FUN_010b20e0(), pXVar14 = pXVar13, lVar12 != 0)) {
                _OPENSSL_sk_delete_ptr();
                iVar6 = _X509_up_ref();
                if (iVar6 == 0) {
                  a = "crypto/x509/x509_vfy.c";
                  pXVar14 = (X509 *)((int64_t)&segment_command_00000020.vmsize + 4);
                  param_3 = (dword *)0xc99;
                  _ERR_put_error(0x201d7ac,0x44,0xc99,(char *)param_4,iVar11);
                  *(void*)(this_ptr + 0xb0) = 1;
                }
                else {
                  iVar6 = _OPENSSL_sk_push();
                  if (iVar6 != 0) {
                    *(int *)(this_ptr + 0x94) = *(int *)(this_ptr + 0x94) + 1;
                    local_34 = 0;
                    pXVar13 = (X509 *)0x0;
                    iVar6 = _X509_check_purpose((X509 *)a,0,(int)param_3);
                    if (iVar6 == 1) {
                      local_34 = *(uint *)(lVar12 + 0xe0) >> 0xd & 1;
                    }
                    if ((*(int64_t *)(this_ptr + 0xe8) != 0) &&
                       (local_58 = 3, (*(byte *)(*(int64_t *)(this_ptr + 0xe8) + 0x28) & 5) != 0))
                    {
                      uVar24 = *(uint *)(this_ptr + 0x94);
                      if (uVar24 - 1 != 0) {
                        pXVar23 = (X509 *)(uint64_t)uVar24;
                        pXVar14 = (X509 *)_OPENSSL_sk_value();
                        if (pXVar14 != (X509 *)0x0) {
                          a = (char *)(uint64_t)(uVar24 - 1);
                          iVar6 = FUN_010b2220();
                          if (iVar6 < 0) goto LAB_010aeecc;
                          pXVar13 = pXVar14;
                          if (iVar6 != 0) {
                            *(uint *)(this_ptr + 0x94) = uVar24 - 2;
                            local_58 = 1;
                            goto LAB_010af066;
                          }
                        }
                        goto LAB_010aea0f;
                      }
                    }
                    local_58 = 3;
                    goto LAB_010aea0f;
                  }
                  _X509_free((X509 *)a);
                  a = "crypto/x509/x509_vfy.c";
                  pXVar14 = (X509 *)((int64_t)&segment_command_00000020.vmsize + 1);
                  param_3 = (dword *)0xca2;
                  _ERR_put_error(0x201d7ac,0x41,0xca2,(char *)param_4,iVar11);
                  *(void*)(this_ptr + 0xb0) = 0x11;
                }
LAB_010af058:
                local_58 = 2;
                local_34 = 0;
                goto LAB_010af066;
              }
              uVar9 = uVar9 & 0xfffffffe;
              if (local_80 == '\0') {
                uVar9 = uVar9 | 2;
              }
              a = (char *)(uint64_t)uVar9;
              pXVar13 = pXVar14;
            }
          }
LAB_010aea0f:
          iVar6 = (int)pXVar23;
          pXVar14 = pXVar13;
          in_stack_ffffffffffffff88 = pXVar23;
        } while (uVar9 != 0);
      }
      _OPENSSL_sk_free();
      iVar4 = _OPENSSL_sk_num();
      if ((int)uVar22 < iVar4) {
LAB_010af1af:
        if (local_58 == 1) goto LAB_010af2d8;
        if (local_58 == 2) goto LAB_010ae8ce;
      }
      else {
        if ((local_58 == 3) && (lVar17 != 0)) {
          if ((*(byte *)(lVar17 + 0x28) & 4) != 0) {
            lVar12 = *(int64_t *)(this_ptr + 0xe8);
            iVar5 = *(int *)(this_ptr + 0x94);
            _OPENSSL_sk_value();
            iVar11 = _OPENSSL_sk_num();
            if (0 < iVar11) {
              iVar10 = 0;
              do {
                pcVar15 = (char *)_OPENSSL_sk_value();
                if ((((*pcVar15 == '\x02') && (pcVar15[1] == '\x01')) && (pcVar15[2] == '\0')) &&
                   (iVar8 = _X509_verify((X509 *)a,(EVP_PKEY *)pXVar14), 0 < iVar8)) {
                  _X509_free((X509 *)a);
                  *(void*)(lVar12 + 0x20) = 0;
                  *(void*)(this_ptr + 0xf0) = 1;
                  *(int *)(lVar12 + 0x2c) = iVar5 + -1;
                  *(char **)(lVar12 + 0x18) = pcVar15;
                  iVar4 = _OPENSSL_sk_num();
                  if (*(int *)(this_ptr + 0x94) < iVar4) {
                    do {
                      _OPENSSL_sk_pop();
                      _X509_free((X509 *)a);
                      iVar4 = iVar4 + -1;
                    } while (*(int *)(this_ptr + 0x94) < iVar4);
                  }
                  goto LAB_010af2d8;
                }
                iVar10 = iVar10 + 1;
              } while (iVar11 != iVar10);
            }
          }
        }
        else if (local_58 != 3) goto LAB_010af1af;
        if (iVar4 == *(int *)(this_ptr + 0x94)) {
          local_58 = FUN_010b1e10();
          goto LAB_010af1af;
        }
      }
      iVar4 = _OPENSSL_sk_num();
      if ((int)uVar22 < iVar4) {
        *(int *)(this_ptr + 0xac) = iVar4 + -1;
        uVar16 = _OPENSSL_sk_value();
        *(void*)(this_ptr + 0xb8) = uVar16;
        uVar9 = 0x16;
      }
      else if (((lVar17 == 0) || (iVar5 = _OPENSSL_sk_num(), iVar5 < 1)) ||
              (((*(byte *)(lVar17 + 0x28) & 3) != 0 && (*(int *)(lVar17 + 0x30) < 0)))) {
        if (local_34 == 0) {
          iVar5 = *(int *)(this_ptr + 0x94);
          *(int *)(this_ptr + 0xac) = iVar4 + -1;
          uVar16 = _OPENSSL_sk_value();
          *(void*)(this_ptr + 0xb8) = uVar16;
          uVar9 = 0x14;
          if (iVar5 < iVar4) {
            uVar9 = 2;
          }
        }
        else {
          iVar5 = _OPENSSL_sk_num();
          *(int *)(this_ptr + 0xac) = iVar4 + -1;
          uVar16 = _OPENSSL_sk_value();
          *(void*)(this_ptr + 0xb8) = uVar16;
          uVar9 = iVar5 == 1 ^ 0x13;
        }
      }
      else {
        *(int *)(this_ptr + 0xac) = iVar4 + -1;
        uVar16 = _OPENSSL_sk_value();
        *(void*)(this_ptr + 0xb8) = uVar16;
        uVar9 = 0x41;
      }
      *(uint *)(this_ptr + 0xb0) = uVar9;
      iVar4 = (**(code **)(this_ptr + 0x38))();
      if (iVar4 != 0) {
LAB_010af2d8:
        uVar9 = _OPENSSL_sk_num();
        if (*(int64_t *)(this_ptr + 0xd8) == 0) {
          uVar22 = *(uint *)(*(int64_t *)(this_ptr + 0x20) + 0x20);
          pXVar23 = (X509 *)(uint64_t)uVar22;
          bVar25 = (*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x18) & 0x40) == 0;
        }
        else {
          bVar25 = true;
          uVar22 = 6;
          pXVar23 = (X509 *)a;
        }
        puVar1 = (uint *)(this_ptr + 0xac);
        if (0 < (int)uVar9) {
          pXVar23 = (X509 *)0xffffffff;
          iVar5 = 0;
          uVar24 = 0;
          iVar4 = 0;
          do {
            iVar11 = (int)pXVar23;
            a = (char *)pXVar23;
            lVar17 = _OPENSSL_sk_value();
            if (((*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x18) & 0x10) == 0) &&
               ((*(byte *)(lVar17 + 0xe1) & 2) != 0)) {
              *(uint *)(this_ptr + 0xac) = uVar24;
              *(int64_t *)(this_ptr + 0xb8) = lVar17;
              *(void*)(this_ptr + 0xb0) = 0x22;
              iVar10 = (**(code **)(this_ptr + 0x38))();
              if (iVar10 == 0) goto LAB_010ae8ce;
            }
            if ((bVar25) && ((*(byte *)(lVar17 + 0xe1) & 4) != 0)) {
              *(uint *)(this_ptr + 0xac) = uVar24;
              *(int64_t *)(this_ptr + 0xb8) = lVar17;
              *(void*)(this_ptr + 0xb0) = 0x28;
              iVar10 = (**(code **)(this_ptr + 0x38))();
              if (iVar10 == 0) goto LAB_010ae8ce;
            }
            iVar10 = _X509_check_ca((X509 *)a);
            lVar12 = lVar17;
            if (iVar11 == 0) {
              uVar7 = 0x25;
joined_r0x010af428:
              if (iVar10 == 0) goto LAB_010af460;
LAB_010af4d0:
              *(void*)(this_ptr + 0xb0) = uVar7;
              *(uint *)(this_ptr + 0xac) = uVar24;
              a = (char *)pXVar23;
              if (lVar17 == 0) {
                lVar12 = _OPENSSL_sk_value();
                a = (char *)pXVar23;
              }
LAB_010af4f7:
              *(int64_t *)(this_ptr + 0xb8) = lVar12;
              iVar10 = (**(code **)(this_ptr + 0x38))();
              if (iVar10 == 0) goto LAB_010ae8ce;
            }
            else {
              if (iVar11 == -1) {
                pXVar23 = *(X509 **)(this_ptr + 0x20);
                if (((pXVar23->valid & 0x20) != 0) && (iVar10 != 1)) {
                  uVar7 = 0x18;
                  goto joined_r0x010af428;
                }
              }
              else {
                uVar7 = 0x18;
                if ((iVar10 == 0) ||
                   (((pXVar23 = (X509 *)(uint64_t)(uVar24 + 1), (int)(uVar24 + 1) < (int)uVar9 ||
                     (pXVar23 = *(X509 **)(this_ptr + 0x20), (pXVar23->valid & 0x20) != 0)) &&
                    (iVar10 != 1)))) goto LAB_010af4d0;
              }
LAB_010af460:
              if (((*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x18) & 0x20) != 0) &&
                 (1 < (int)uVar9)) {
                lVar18 = _X509_get0_pubkey();
                uVar7 = 1;
                if (lVar18 == 0) goto LAB_010af4d0;
                _local_80 = lVar18;
                iVar10 = _EVP_PKEY_id();
                if (iVar10 == 0x198) {
                  _EVP_PKEY_get0_EC_KEY();
                  iVar10 = _EC_KEY_decoded_from_explicit_params();
                  if ((iVar10 < 0) || (uVar7 = 0x4f, iVar10 != 0)) goto LAB_010af4d0;
                }
              }
              a = (char *)pXVar23;
              if ((((*(byte *)(lVar17 + 0xe0) & 0x10) == 0) && (*(int64_t *)(lVar17 + 0xd0) != -1))
                 && ((*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x18) & 0x20) != 0)) {
                *(void*)(this_ptr + 0xb0) = 0x29;
                *(uint *)(this_ptr + 0xac) = uVar24;
                goto LAB_010af4f7;
              }
            }
            if (0 < (int)uVar22) {
              if (((int)uVar24 < *(int *)(this_ptr + 0x94)) ||
                 (a = (char *)(uint64_t)uVar22,
                 *(uint *)(*(int64_t *)(this_ptr + 0x20) + 0x20) != uVar22)) {
LAB_010af550:
                pXVar14 = (X509 *)(uint64_t)(0 < iVar11);
                iVar11 = _X509_check_purpose((X509 *)a,(uint)(0 < iVar11),(int)param_3);
                if ((iVar11 == 0) ||
                   ((iVar11 != 1 &&
                    ((*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x18) & 0x20) != 0)))) {
LAB_010af577:
                  *puVar1 = uVar24;
                  lVar12 = lVar17;
                  if (lVar17 == 0) {
                    lVar12 = _OPENSSL_sk_value();
                  }
                  *(int64_t *)(this_ptr + 0xb8) = lVar12;
                  *(void*)(this_ptr + 0xb0) = 0x1a;
                  iVar11 = (**(code **)(this_ptr + 0x38))();
                  if (iVar11 == 0) goto LAB_010ae8ce;
                }
              }
              else {
                pXVar14 = (X509 *)&MACH_HEADER.cputype;
                iVar10 = _X509_check_trust((X509 *)a,4,(int)param_3);
                if (iVar10 != 1) {
                  if (iVar10 != 2) goto LAB_010af550;
                  goto LAB_010af577;
                }
              }
            }
            if (uVar24 < 2) {
              if (uVar24 != 0) goto LAB_010af618;
              uVar2 = *(uint *)(lVar17 + 0xe0);
            }
            else {
              if (*(int64_t *)(lVar17 + 0xd0) != -1) {
                a = (char *)(int64_t)iVar4;
                pXVar14 = (X509 *)(int64_t)iVar5;
                if ((int64_t)(pXVar14->sha1_hash + *(int64_t *)(lVar17 + 0xd0) + -0x68) <
                    (int64_t)a) {
                  *(uint *)(this_ptr + 0xac) = uVar24;
                  *(int64_t *)(this_ptr + 0xb8) = lVar17;
                  *(void*)(this_ptr + 0xb0) = 0x19;
                  iVar11 = (**(code **)(this_ptr + 0x38))();
                  if (iVar11 == 0) goto LAB_010ae8ce;
                }
              }
LAB_010af618:
              uVar2 = *(uint *)(lVar17 + 0xe0);
              iVar4 = iVar4 + (uint)((uVar2 & 0x20) == 0);
            }
            pXVar23 = (X509 *)((int64_t)&MACH_HEADER.magic + 1);
            if ((uVar2 & 0x400) != 0) {
              lVar12 = *(int64_t *)(lVar17 + 0xd8);
              if (lVar12 != -1) {
                a = (char *)(int64_t)iVar5;
                if (lVar12 < (int64_t)a) {
                  *(uint *)(this_ptr + 0xac) = uVar24;
                  *(int64_t *)(this_ptr + 0xb8) = lVar17;
                  *(void*)(this_ptr + 0xb0) = 0x26;
                  iVar5 = (**(code **)(this_ptr + 0x38))();
                  if (iVar5 == 0) goto LAB_010ae8ce;
                  lVar12 = *(int64_t *)(lVar17 + 0xd8);
                }
                iVar5 = (int)lVar12;
              }
              iVar5 = iVar5 + 1;
              pXVar23 = (X509 *)0x0;
            }
            uVar24 = uVar24 + 1;
          } while (uVar9 != uVar24);
        }
        uVar9 = _OPENSSL_sk_num();
        a = (char *)pXVar23;
        if ((0 < *(int *)(*(int64_t *)(this_ptr + 0x20) + 0x2c)) && (0 < (int)uVar9)) {
          uVar22 = 0;
          do {
            lVar17 = _OPENSSL_sk_value();
            if (uVar22 != 0) {
              lVar12 = _X509_get0_pubkey();
              a = *(char **)(this_ptr + 0x20);
              iVar4 = *(int *)((int64_t)&(((X509 *)a)->ex_data).sk + 4);
              if (0 < iVar4) {
                if (lVar12 != 0) {
                  if (4 < iVar4) {
                    iVar4 = 5;
                  }
                  iVar5 = _EVP_PKEY_security_bits();
                  a = &g_0240b440;
                  if (*(int *)(&g_0240b440 + (uint64_t)(iVar4 - 1) * 4) <= iVar5)
                  goto LAB_010af7f5;
                }
                *puVar1 = uVar22;
                lVar12 = lVar17;
                if (lVar17 == 0) {
                  lVar12 = _OPENSSL_sk_value();
                }
                *(int64_t *)(this_ptr + 0xb8) = lVar12;
                *(void*)(this_ptr + 0xb0) = 0x43;
                iVar4 = (**(code **)(this_ptr + 0x38))();
                if (iVar4 == 0) goto LAB_010ae8ce;
              }
            }
LAB_010af7f5:
            if ((int)uVar22 < (int)(uVar9 - 1)) {
              iVar4 = *(int *)(*(int64_t *)(this_ptr + 0x20) + 0x2c);
              local_84 = -1;
              if (0 < iVar4) {
                pXVar14 = (X509 *)0x0;
                a = (char *)&stack0xffffffffffffff7c;
                param_3 = (dword *)0x0;
                iVar5 = _X509_get_signature_info();
                if (iVar5 != 0) {
                  if (4 < iVar4) {
                    iVar4 = 5;
                  }
                  a = &g_0240b440;
                  if (*(int *)(&g_0240b440 + (uint64_t)(iVar4 - 1) * 4) <= local_84)
                  goto LAB_010af755;
                }
                *puVar1 = uVar22;
                if (lVar17 == 0) {
                  lVar17 = _OPENSSL_sk_value();
                }
                *(int64_t *)(this_ptr + 0xb8) = lVar17;
                *(void*)(this_ptr + 0xb0) = 0x44;
                iVar4 = (**(code **)(this_ptr + 0x38))();
                if (iVar4 == 0) goto LAB_010ae8ce;
              }
            }
LAB_010af755:
            uVar22 = uVar22 + 1;
          } while (uVar9 != uVar22);
        }
        iVar4 = FUN_010b1c40();
        _X509_get_pubkey_parameters((EVP_PKEY *)a,(STACK *)pXVar14);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = (**(code **)(this_ptr + 0x50))();
        if (iVar4 == 0) {
          return 0;
        }
        b = *(X509_NAME **)(this_ptr + 0x98);
        pXVar14 = *(X509 **)(*(int64_t *)(this_ptr + 0x20) + 0x18);
        iVar4 = _X509_chain_check_suiteb();
        if (iVar4 != 0) {
          uVar16 = _OPENSSL_sk_value();
          *(void*)(this_ptr + 0xb8) = uVar16;
          *(int *)(this_ptr + 0xb0) = iVar4;
          iVar4 = (**(code **)(this_ptr + 0x38))();
          if (iVar4 == 0) {
            return 0;
          }
        }
        if (*(code **)(this_ptr + 0x30) == 0x0) {
          iVar4 = FUN_010b0cf0();
        }
        else {
          iVar4 = (**(code **)(this_ptr + 0x30))();
        }
        if (iVar4 != 0) {
          uVar9 = _OPENSSL_sk_num();
          if (0 < (int)uVar9) {
            do {
              pXVar23 = (X509 *)_OPENSSL_sk_value();
              uVar22 = uVar9 - 1;
              if ((uVar22 == 0) ||
                 (uVar24 = *(uint *)&pXVar23[1].akid & 0x20, pXVar14 = (X509 *)(uint64_t)uVar24,
                 uVar24 == 0)) {
                if ((*(uint *)&pXVar23[1].akid & 0x400) != 0) {
                  _X509_get_subject_name(pXVar14);
                  _X509_get_issuer_name(pXVar14);
                  iVar4 = _X509_NAME_entry_count((X509_NAME *)pXVar14);
                  pXVar14 = (X509 *)&segment_command_00000020.fileoff;
                  if (1 < iVar4) {
                    iVar4 = _X509_NAME_entry_count((X509_NAME *)&segment_command_00000020.fileoff);
                    iVar5 = _X509_NAME_entry_count((X509_NAME *)pXVar14);
                    if (iVar4 == iVar5 + 1) {
                      _X509_NAME_get_entry((X509_NAME *)pXVar14,(int)b);
                      iVar4 = _X509_NAME_ENTRY_set();
                      _X509_NAME_get_entry((X509_NAME *)pXVar14,(int)b);
                      iVar5 = _X509_NAME_ENTRY_set();
                      o = (ASN1_OBJECT *)&segment_command_00000020.fileoff;
                      pXVar14 = (X509 *)o;
                      if (iVar4 != iVar5) {
                        pXVar19 = _X509_NAME_dup((X509_NAME *)&segment_command_00000020.fileoff);
                        if (pXVar19 == (X509_NAME *)0x0) {
                          _ERR_put_error(0x201d7ac,0x41,0x2a2,(char *)param_4,iVar6);
                          *(void*)(this_ptr + 0xb0) = 0x11;
                          return 0;
                        }
                        _X509_NAME_delete_entry((X509_NAME *)o,(int)b);
                        _X509_NAME_ENTRY_get_object((X509_NAME_ENTRY *)o);
                        iVar4 = _OBJ_obj2nid(o);
                        if ((iVar4 == 0xd) && (iVar4 = _X509_NAME_cmp((X509_NAME *)o,b), iVar4 == 0)
                           ) {
                          pXVar14 = (X509 *)0x0;
                          bVar25 = true;
                        }
                        else {
                          pXVar14 = (X509 *)&segment_command_00000020.fileoff;
                          bVar25 = false;
                        }
                        _X509_NAME_ENTRY_free((X509_NAME_ENTRY *)o);
                        _X509_NAME_free((X509_NAME *)o);
                        if (bVar25) goto LAB_010afac0;
                      }
                    }
                    else {
                      pXVar14 = (X509 *)&segment_command_00000020.fileoff;
                    }
                  }
                  *(uint *)(this_ptr + 0xac) = uVar22;
                  *(X509 **)(this_ptr + 0xb8) = pXVar23;
                  *(int *)(this_ptr + 0xb0) = (int)pXVar14;
                  iVar4 = (**(code **)(this_ptr + 0x38))();
                  if (iVar4 == 0) {
                    return 0;
                  }
                }
LAB_010afac0:
                iVar4 = _OPENSSL_sk_num();
joined_r0x010afacf:
                do {
                  if (iVar4 <= (int)uVar9) break;
                  iVar4 = iVar4 + -1;
                  lVar17 = _OPENSSL_sk_value();
                  if (*(int64_t *)(lVar17 + 0x118) != 0) {
                    uVar24 = _NAME_CONSTRAINTS_check();
                    pXVar14 = (X509 *)(uint64_t)(uVar24 | uVar22);
                    if ((uVar24 | uVar22) == 0) {
                      uVar24 = *(uint *)(*(int64_t *)(this_ptr + 0x20) + 0x40);
                      if ((uVar24 & 0x20) != 0) goto joined_r0x010afacf;
                      if ((uVar24 & 1) == 0) {
                        b = (X509_NAME *)0x0;
                        pXVar14 = (X509 *)0x0;
                        pvVar20 = _X509_get_ext_d2i((X509 *)0x0,0,(int *)param_3,param_4);
                        if (pvVar20 != (void *)0x0) {
                          iVar5 = _OPENSSL_sk_num();
                          if (0 < iVar5) {
                            iVar5 = 0;
                            do {
                              piVar21 = (int *)_OPENSSL_sk_value();
                              if (*piVar21 == 2) {
                                _GENERAL_NAMES_free((GENERAL_NAMES *)pXVar14);
                                goto joined_r0x010afacf;
                              }
                              iVar5 = iVar5 + 1;
                              iVar11 = _OPENSSL_sk_num();
                            } while (iVar5 < iVar11);
                          }
                          _GENERAL_NAMES_free((GENERAL_NAMES *)pXVar14);
                        }
                      }
                      uVar24 = _NAME_CONSTRAINTS_check_CN();
                    }
                    if (uVar24 != 0) {
                      if (uVar24 == 0x11) {
                        return 0;
                      }
                      *(uint *)(this_ptr + 0xac) = uVar22;
                      *(X509 **)(this_ptr + 0xb8) = pXVar23;
                      *(uint *)(this_ptr + 0xb0) = uVar24;
                      pXVar14 = pXVar23;
                      iVar5 = (**(code **)(this_ptr + 0x38))();
                      if (iVar5 == 0) {
                        return 0;
                      }
                    }
                  }
                } while( true );
              }
              bVar25 = 1 < (int)uVar9;
              uVar9 = uVar22;
            } while (bVar25);
          }
          iVar4 = _X509v3_asid_validate_path();
          if (iVar4 != 0) {
            iVar4 = _X509v3_addr_validate_path();
            if (iVar4 == 0) {
              return 0;
            }
            if (*(char *)(*(int64_t *)(this_ptr + 0x20) + 0x18) < '\0') {
              iVar4 = (**(code **)(this_ptr + 0x70))();
              return iVar4;
            }
            return iVar4;
          }
        }
        return 0;
      }
      goto LAB_010ae8ce;
    }
LAB_010ae86f:
    if ((lVar12 == 0) ||
       (uVar3 = *(uint64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x18), (short)uVar3 < 0)) {
      uVar9 = lVar12 != 0 | 2;
      _local_80 = (uint64_t)uStackY_7c << 0x20;
      goto LAB_010ae8fa;
    }
    bVar25 = (uVar3 & 0x100000) == 0;
    uVar9 = 1;
    _local_80 = (uint64_t)uStackY_7c << 0x20;
LAB_010ae908:
    local_60 = _OPENSSL_sk_dup();
    if (local_60 != 0) goto joined_r0x010ae920;
    iVar4 = 0xb9f;
LAB_010aee82:
    pXVar14 = (X509 *)((int64_t)&segment_command_00000020.vmsize + 1);
    a = "crypto/x509/x509_vfy.c";
    _ERR_put_error(0x201d7ac,0x41,iVar4,(char *)param_4,iVar6);
    uVar7 = 0x11;
  }
  else {
    a = "crypto/x509/x509_vfy.c";
    pXVar14 = (X509 *)((int64_t)&segment_command_00000020.vmsize + 4);
    _ERR_put_error(0x201d7ac,0x44,0xb81,(char *)param_4,iVar6);
    uVar7 = 1;
  }
  *(void*)(this_ptr + 0xb0) = uVar7;
LAB_010ae8ce:
  _X509_get_pubkey_parameters((EVP_PKEY *)a,(STACK *)pXVar14);
  return 0;
}

