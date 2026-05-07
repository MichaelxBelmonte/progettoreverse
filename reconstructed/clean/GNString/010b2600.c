// Function: FUN_010b2600
// Address: 010b2600
// Size: 2132 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


bool FUN_010b2600(X509 *param_1,X509_NAME *param_2,uint *param_3,uint *param_4)

{
  X509 *pXVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  X509_NAME *pXVar8;
  X509_CINF *pXVar9;
  void*puVar10;
  int *piVar11;
  X509_NAME *pXVar12;
  X509 *a;
  STACK *pSVar13;
  uint uVar14;
  X509_CRL *a_00;
  X509_NAME *b;
  uint uVar15;
  uint uVar16;
  void*arg1;
  int64_t this_ptr;
  uint uVar17;
  X509_CINF *local_a0;
  int local_90;
  int local_8c;
  X509_CINF *local_78;
  int local_60;
  X509_NAME *local_58;
  
  uVar17 = *param_3;
  pXVar1 = *(X509 **)(this_ptr + 0xb8);
  a = param_1;
  pXVar12 = param_2;
  iVar3 = _OPENSSL_sk_num();
  if (0 < iVar3) {
    local_a0 = (X509_CINF *)0x0;
    local_58 = (X509_NAME *)0x0;
    iVar3 = 0;
    uVar14 = 0;
    local_78 = (X509_CINF *)0x0;
    do {
      pXVar8 = (X509_NAME *)_OPENSSL_sk_value();
      uVar5 = pXVar8[4].hash;
      if ((uVar5 & 2) == 0) {
        uVar16 = *param_4;
        pXVar12 = (X509_NAME *)(uint64_t)uVar16;
        a = *(X509 **)(this_ptr + 0x20);
        if ((a->valid & 0x1000) == 0) {
          if ((uVar5 & 0x60) == 0) goto LAB_010b26fe;
        }
        else if ((uVar5 & 0x40) == 0) {
          if (*(int64_t *)&pXVar8[5].modified == 0) {
LAB_010b26fe:
            _X509_get_issuer_name(a);
            _X509_CRL_get_issuer();
            iVar4 = _X509_NAME_cmp((X509_NAME *)a,pXVar12);
            if (iVar4 == 0) {
              uVar5 = 0x20;
            }
            else {
              uVar5 = 0;
              if ((pXVar8[4].hash & 0x20) == 0) goto LAB_010b2690;
            }
            uVar15 = (*(uint *)((int64_t)&pXVar8[4].entries + 4) >> 1 & 0x100 | uVar5) ^ 0x100;
            b = (X509_NAME *)0x0;
            iVar4 = FUN_010b2e90();
            uVar5 = uVar15 + 0x40;
            if (iVar4 == 0) {
              uVar5 = uVar15;
            }
            _X509_CRL_get_issuer();
            iVar4 = *(int *)(this_ptr + 0xac);
            iVar6 = _OPENSSL_sk_num();
            pXVar9 = (X509_CINF *)_OPENSSL_sk_value();
            iVar7 = _X509_check_akid();
            pXVar12 = pXVar8;
            if ((iVar7 == 0) && ((uVar5 & 0x20) != 0)) {
              uVar5 = uVar5 | 0x1c;
              local_78 = pXVar9;
LAB_010b2937:
              uVar15 = pXVar8[4].hash;
              if ((uVar15 & 0x10) == 0) {
                if (((uint64_t)pXVar1[1].akid & 0x10) == 0) {
                  uVar15 = uVar15 & 8;
                }
                else {
                  uVar15 = uVar15 & 4;
                }
                a = pXVar1;
                if (uVar15 == 0) {
                  uVar15 = *(uint *)&pXVar8[4].field_0x1c;
                  iVar4 = _OPENSSL_sk_num();
                  if (0 < iVar4) {
                    iVar4 = 0;
                    do {
                      puVar10 = (void*)_OPENSSL_sk_value();
                      _X509_CRL_get_issuer();
                      if (puVar10[2] == 0) {
                        if ((uVar5 & 0x20) != 0) {
LAB_010b2a3a:
                          if ((pXVar8[4].bytes == (BUF_MEM *)0x0) ||
                             ((piVar11 = (int *)*puVar10, piVar11 == (int *)0x0 ||
                              (piVar2 = *(int **)pXVar8[4].bytes, piVar2 == (int *)0x0)))) {
LAB_010b2ba3:
                            a = (X509 *)(uint64_t)(uVar15 & *(uint *)(puVar10 + 3));
                            goto LAB_010b2bfb;
                          }
                          if (*piVar11 == 1) {
                            if (*(int64_t *)(piVar11 + 4) != 0) {
                              if (*piVar2 == 1) {
                                if ((*(int64_t *)(piVar2 + 4) != 0) &&
                                   (iVar6 = _X509_NAME_cmp((X509_NAME *)a,pXVar12), iVar6 == 0))
                                goto LAB_010b2ba3;
                              }
                              else {
LAB_010b2b50:
                                iVar6 = _OPENSSL_sk_num();
                                if (0 < iVar6) {
                                  iVar6 = 0;
                                  do {
                                    piVar11 = (int *)_OPENSSL_sk_value();
                                    if ((*piVar11 == 4) &&
                                       (iVar7 = _X509_NAME_cmp((X509_NAME *)a,pXVar12), iVar7 == 0))
                                    goto LAB_010b2ba3;
                                    iVar6 = iVar6 + 1;
                                    iVar7 = _OPENSSL_sk_num();
                                  } while (iVar6 < iVar7);
                                }
                              }
                            }
                          }
                          else if (*piVar2 == 1) {
                            if (*(int64_t *)(piVar2 + 4) != 0) goto LAB_010b2b50;
                          }
                          else {
                            iVar6 = _OPENSSL_sk_num();
                            if (0 < iVar6) {
                              local_60 = 0;
                              do {
                                _OPENSSL_sk_value();
                                iVar6 = _OPENSSL_sk_num();
                                if (0 < iVar6) {
                                  iVar6 = 0;
                                  do {
                                    _OPENSSL_sk_value();
                                    iVar7 = _GENERAL_NAME_cmp();
                                    if (iVar7 == 0) goto LAB_010b2ba3;
                                    iVar6 = iVar6 + 1;
                                    iVar7 = _OPENSSL_sk_num();
                                  } while (iVar6 < iVar7);
                                }
                                local_60 = local_60 + 1;
                                iVar6 = _OPENSSL_sk_num();
                              } while (local_60 < iVar6);
                            }
                          }
                        }
                      }
                      else {
                        iVar6 = _OPENSSL_sk_num();
                        if (0 < iVar6) {
                          iVar6 = 0;
                          do {
                            piVar11 = (int *)_OPENSSL_sk_value();
                            if ((*piVar11 == 4) &&
                               (iVar7 = _X509_NAME_cmp((X509_NAME *)a,pXVar12), iVar7 == 0))
                            goto LAB_010b2a3a;
                            iVar6 = iVar6 + 1;
                            iVar7 = _OPENSSL_sk_num();
                          } while (iVar6 < iVar7);
                        }
                      }
                      iVar4 = iVar4 + 1;
                      iVar6 = _OPENSSL_sk_num();
                    } while (iVar4 < iVar6);
                  }
                  if (((pXVar8[4].bytes == (BUF_MEM *)0x0) || (*(int64_t *)pXVar8[4].bytes == 0))
                     && (a = (X509 *)(uint64_t)uVar15, pXVar12 = pXVar8, (uVar5 & 0x20) != 0)) {
LAB_010b2bfb:
                    if (((uint)a & ~uVar16) == 0) goto LAB_010b2690;
                    uVar16 = uVar16 | (uint)a;
                    uVar5 = uVar5 | 0x80;
                  }
                }
              }
              pXVar12 = pXVar8;
              if (((int)uVar17 <= (int)uVar5) && (uVar5 != 0)) {
                if ((uVar5 == uVar17) && (local_58 != (X509_NAME *)0x0)) {
                  pXVar12 = (X509_NAME *)_X509_CRL_get0_lastUpdate();
                  a = (X509 *)_X509_CRL_get0_lastUpdate();
                  iVar4 = _ASN1_TIME_diff();
                  if ((iVar4 == 0) || ((local_90 < 1 && (pXVar12 = pXVar8, local_8c < 1))))
                  goto LAB_010b2690;
                }
                local_a0 = local_78;
                pXVar12 = pXVar8;
                uVar17 = uVar5;
                uVar14 = uVar16;
                local_58 = pXVar8;
              }
            }
            else {
              iVar6 = (uint)(iVar4 != iVar6 + -1) + iVar4 + 1;
              iVar4 = _OPENSSL_sk_num();
              if (iVar6 < iVar4) {
                do {
                  pXVar9 = (X509_CINF *)_OPENSSL_sk_value();
                  _X509_get_subject_name(a);
                  iVar4 = _X509_NAME_cmp((X509_NAME *)a,b);
                  if ((iVar4 == 0) && (iVar4 = _X509_check_akid(), iVar4 == 0)) {
                    uVar5 = uVar5 | 0xc;
                    local_78 = pXVar9;
                    goto LAB_010b290e;
                  }
                  iVar6 = iVar6 + 1;
                  iVar4 = _OPENSSL_sk_num();
                } while (iVar6 < iVar4);
              }
              if (((*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x19) & 0x10) != 0) &&
                 (iVar4 = _OPENSSL_sk_num(), 0 < iVar4)) {
                iVar4 = 0;
                do {
                  pXVar9 = (X509_CINF *)_OPENSSL_sk_value();
                  _X509_get_subject_name(a);
                  iVar6 = _X509_NAME_cmp((X509_NAME *)a,b);
                  if ((iVar6 == 0) && (iVar6 = _X509_check_akid(), iVar6 == 0)) {
                    uVar5 = uVar5 | 4;
                    local_78 = pXVar9;
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  iVar6 = _OPENSSL_sk_num();
                } while (iVar4 < iVar6);
LAB_010b290e:
                if ((uVar5 & 4) != 0) goto LAB_010b2937;
              }
            }
          }
        }
        else {
          a = (X509 *)(uint64_t)~uVar16;
          if ((*(uint *)&pXVar8[4].field_0x1c & ~uVar16) != 0) goto LAB_010b26fe;
        }
      }
LAB_010b2690:
      iVar3 = iVar3 + 1;
      iVar4 = _OPENSSL_sk_num();
    } while (iVar3 < iVar4);
    if (local_58 != (X509_NAME *)0x0) {
      _X509_CRL_free((X509_CRL *)a);
      *arg1 = local_58;
      param_1->cert_info = local_a0;
      *param_3 = uVar17;
      a_00 = (X509_CRL *)(uint64_t)uVar14;
      *param_4 = uVar14;
      _X509_CRL_up_ref();
      _X509_CRL_free(a_00);
      param_2->entries = (STACK *)0x0;
      if (((*(byte *)(*(int64_t *)(this_ptr + 0x20) + 0x19) & 0x20) != 0) &&
         (uVar14 = *(uint *)((int64_t)&local_58[4].entries + 4) |
                   *(uint *)(*(int64_t *)(this_ptr + 0xb8) + 0xe0),
         pXVar8 = (X509_NAME *)(uint64_t)uVar14, (uVar14 & 0x1000) != 0)) {
        iVar3 = _OPENSSL_sk_num();
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            pSVar13 = (STACK *)_OPENSSL_sk_value();
            if ((pSVar13[5].data != (char **)0x0) && (local_58[5].entries != (STACK *)0x0)) {
              _X509_CRL_get_issuer();
              _X509_CRL_get_issuer();
              iVar4 = _X509_NAME_cmp(pXVar8,pXVar12);
              if (iVar4 == 0) {
                pXVar12 = (X509_NAME *)((int64_t)&segment_command_00000020.maxprot + 2);
                iVar4 = FUN_010b0570();
                if (iVar4 != 0) {
                  pXVar12 = (X509_NAME *)(section_000002e8.segname + 10);
                  iVar4 = FUN_010b0570();
                  if (((iVar4 != 0) &&
                      (iVar4 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)pXVar8,(ASN1_INTEGER *)pXVar12),
                      iVar4 < 1)) &&
                     (iVar4 = _ASN1_INTEGER_cmp((ASN1_INTEGER *)pXVar8,(ASN1_INTEGER *)pXVar12),
                     0 < iVar4)) {
                    iVar3 = FUN_010b2e90();
                    if (iVar3 != 0) {
                      *(byte *)param_3 = (byte)*param_3 | 2;
                    }
                    _X509_CRL_up_ref();
                    param_2->entries = pSVar13;
                    goto LAB_010b2e6f;
                  }
                }
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = _OPENSSL_sk_num();
          } while (iVar3 < iVar4);
        }
        param_2->entries = (STACK *)0x0;
      }
    }
  }
LAB_010b2e6f:
  return 0x1bf < (int)uVar17;
}

