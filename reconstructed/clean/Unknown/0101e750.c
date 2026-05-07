// Function: FUN_0101e750
// Address: 0101e750
// Size: 2219 bytes
// Class: Unknown
// String references:
//   "crypto/evp/bio_b64.c"
//   "assertion failed: ctx->buf_len >= ctx->buf_off"
//   "assertion failed: ctx->buf_off + i < (int)sizeof(ctx->buf)"

BIO * FUN_0101e750(BIO *param_1,uint param_2,uint64_t param_3,BIO *param_4)

{
  void*puVar1;
  void*puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  BIO *pBVar11;
  int64_t lVar12;
  uint uVar13;
  BIO *ctx;
  BIO *pBVar14;
  BIO *pBVar15;
  int *piVar16;
  BIO *pBVar17;
  int64_t arg1;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t uVar20;
  size_t n;
  size_t sVar21;
  int iVar22;
  BIO *pBVar23;
  int *piVar24;
  int *piVar25;
  BIO *ctx_00;
  uint64_t in_stack_ffffffffffffff58;
  int *local_60;
  BIO *local_50;
  int local_44;
  BIO *local_40;
  int *local_38;
  
  local_50 = (BIO *)0x0;
  if (arg1 != 0) {
    pBVar23 = (BIO *)(uint64_t)param_2;
    uVar6 = param_2;
    piVar10 = (int *)_BIO_get_data();
    pBVar11 = _BIO_next(param_1);
    if (piVar10 == (int *)0x0) {
      local_50 = (BIO *)0x0;
    }
    else {
      local_50 = (BIO *)0x0;
      if (pBVar11 != (BIO *)0x0) {
        local_38 = piVar10;
        _BIO_clear_flags(param_1,uVar6);
        if (local_38[4] != 2) {
          local_38[4] = 2;
          local_38[0] = 0;
          local_38[1] = 0;
          local_38[2] = 0;
          _EVP_DecodeInit((EVP_ENCODE_CTX *)param_1);
        }
        iVar22 = *local_38;
        local_50 = (BIO *)0x0;
        if (iVar22 < 1) {
          pBVar11 = (BIO *)0x0;
          piVar10 = local_38;
        }
        else {
          iVar9 = local_38[1];
          if (iVar22 < iVar9) {
                                _OPENSSL_die();
          }
          pBVar11 = (BIO *)(uint64_t)(uint)(iVar22 - iVar9);
          if ((int)param_2 < iVar22 - iVar9) {
            pBVar11 = pBVar23;
          }
          iVar22 = (int)pBVar11;
          param_1 = (BIO *)(uint64_t)(uint)(iVar22 + iVar9);
          if (0x5dd < iVar22 + iVar9) {
                                _OPENSSL_die(param_1,0x8d);
          }
          _memcpy(param_1,(void *)(int64_t)iVar22,(size_t)local_38);
          param_2 = param_2 - iVar22;
          pBVar23 = (BIO *)(uint64_t)param_2;
          iVar9 = local_38[1];
          local_38[1] = iVar22 + iVar9;
          piVar10 = local_38;
          if (*local_38 == iVar22 + iVar9) {
            local_38[0] = 0;
            local_38[1] = 0;
          }
        }
        local_38 = piVar10;
        if (0 < (int)param_2) {
          local_40 = (BIO *)((int64_t)piVar10 + 0x606);
          local_50 = (BIO *)0x0;
LAB_0101e8ee:
          if (0 < local_38[6]) {
            iVar22 = (int)pBVar23;
            piVar16 = local_38;
            do {
              pBVar14 = (BIO *)(uint64_t)(0x400 - piVar16[2]);
              uVar6 = _BIO_read(param_1,pBVar14,(int)piVar16);
              if ((int)uVar6 < 1) {
                iVar9 = _BIO_test_flags(param_1,(int)pBVar14);
                if (iVar9 != 0) goto LAB_0101efb8;
                local_38[6] = uVar6;
                uVar13 = local_38[2];
                param_1 = (BIO *)0x0;
                local_50 = (BIO *)(uint64_t)uVar6;
                piVar16 = local_38;
                if (uVar13 == 0) goto LAB_0101efb8;
              }
              else {
                uVar13 = piVar16[2];
                param_1 = (BIO *)(uint64_t)uVar6;
              }
              iVar8 = (int)pBVar14;
              iVar9 = (int)param_1;
              uVar6 = uVar13 + iVar9;
              local_60 = (int *)(uint64_t)uVar6;
              piVar16[2] = uVar6;
              if (piVar16[5] == 0) {
LAB_0101eaa0:
                if ((0x3ff < (int)uVar6) || (piVar16[6] < 1)) goto LAB_0101eebe;
              }
              else {
                uVar7 = _BIO_test_flags(param_1,iVar8);
                iVar8 = (int)pBVar14;
                piVar16 = local_38;
                if ((uVar7 & 0x100) != 0) goto LAB_0101eeb6;
                if (local_38[5] == 0) goto LAB_0101eaa0;
                local_44 = 0;
                if (0 < (int)uVar6) {
                  pBVar15 = (BIO *)((uint64_t)((iVar9 + uVar13) - 1) + 0x607 + (int64_t)local_38);
                  param_1 = (BIO *)(section_00000600.sectname + 6);
                  piVar24 = (int *)0x0;
                  pBVar17 = (BIO *)((int64_t)piVar10 + 0x607);
                  ctx_00 = local_40;
                  in_stack_ffffffffffffff58 = (uint64_t)uVar13;
LAB_0101ea40:
                  if (pBVar17[-1].ex_data.field_0xf != '\n') goto LAB_0101ea2b;
                  if (piVar16[3] != 0) {
                    piVar16[3] = 0;
                    param_1 = (BIO *)((int64_t)piVar24 + 0x607U);
                    goto LAB_0101ea2b;
                  }
                  pBVar14 = (BIO *)&stack0xffffffffffffffbc;
                  ctx = ctx_00;
                  iVar8 = _EVP_DecodeUpdate((EVP_ENCODE_CTX *)ctx_00,(uchar *)pBVar14,
                                            (int *)(uint64_t)
                                                   (uint)(((int)piVar10 + 0x607 + (int)piVar24) -
                                                         (int)ctx_00),(uchar *)param_4,
                                            (int)in_stack_ffffffffffffff58);
                  if (((iVar8 < 1) && (local_44 == 0)) && (local_38[5] != 0)) {
                    _EVP_DecodeInit((EVP_ENCODE_CTX *)ctx);
                    param_1 = (BIO *)((int64_t)piVar24 + 0x607U);
                    piVar16 = local_38;
                    goto LAB_0101ea2b;
                  }
                  if (param_1 == (BIO *)(section_00000600.sectname + 6)) goto LAB_0101ebbc;
                  uVar6 = (uVar6 - (int)param_1) + 0x606;
                  local_60 = (int *)(uint64_t)uVar6;
                  if ((int)uVar6 < 1) goto LAB_0101ebbc;
                  param_4 = (BIO *)(uint64_t)uVar6;
                  if ((uVar6 < 8) ||
                     ((local_40 < (BIO *)((int64_t)&param_4->method + (int64_t)&ctx_00->method) &&
                      (ctx_00 < (BIO *)((int64_t)local_38 + (int64_t)&param_4[0xe].field_0x56)))))
                  {
                    ctx = (BIO *)0x0;
                    goto LAB_0101eb43;
                  }
                  if (uVar6 < 0x20) {
                    pBVar15 = (BIO *)0x0;
                    goto LAB_0101ee6c;
                  }
                  ctx = (BIO *)(uint64_t)(uVar6 & 0xffffffe0);
                  pBVar14 = (BIO *)&ctx[-1].references;
                  uVar18 = ((uint64_t)pBVar14 >> 5) + 1;
                  uVar20 = (uint64_t)((uint)uVar18 & 3);
                  if ((void*)((int64_t)&segment_command_00000020.initprot + 3) < pBVar14) {
                    lVar19 = -(uVar18 & 0xfffffffffffffffc);
                    lVar12 = 0;
                    do {
                      puVar2 = (void*)((int64_t)&ctx_00->method + lVar12);
                      uVar3 = puVar2[1];
                      puVar1 = (void*)((int64_t)&ctx_00->cb_arg + lVar12);
                      uVar4 = *puVar1;
                      uVar5 = puVar1[1];
                      puVar1 = (void*)((int64_t)local_38 + lVar12 + 0x606);
                      *puVar1 = *puVar2;
                      puVar1[1] = uVar3;
                      puVar2 = (void*)((int64_t)local_38 + lVar12 + 0x616);
                      *puVar2 = uVar4;
                      puVar2[1] = uVar5;
                      puVar2 = (void*)((int64_t)&ctx_00->flags + lVar12);
                      uVar3 = puVar2[1];
                      puVar1 = (void*)((int64_t)&ctx_00->ptr + lVar12);
                      uVar4 = *puVar1;
                      uVar5 = puVar1[1];
                      puVar1 = (void*)((int64_t)local_38 + lVar12 + 0x626);
                      *puVar1 = *puVar2;
                      puVar1[1] = uVar3;
                      puVar2 = (void*)((int64_t)local_38 + lVar12 + 0x636);
                      *puVar2 = uVar4;
                      puVar2[1] = uVar5;
                      puVar2 = (void*)((int64_t)&ctx_00->prev_bio + lVar12);
                      uVar3 = puVar2[1];
                      puVar1 = (void*)((int64_t)&ctx_00->num_write + lVar12);
                      uVar4 = *puVar1;
                      uVar5 = puVar1[1];
                      puVar1 = (void*)((int64_t)local_38 + lVar12 + 0x646);
                      *puVar1 = *puVar2;
                      puVar1[1] = uVar3;
                      puVar2 = (void*)((int64_t)local_38 + lVar12 + 0x656);
                      *puVar2 = uVar4;
                      puVar2[1] = uVar5;
                      puVar2 = (void*)((int64_t)&(ctx_00->ex_data).dummy + lVar12);
                      uVar3 = puVar2[1];
                      puVar1 = (void*)((int64_t)&ctx_00[1].callback + lVar12);
                      uVar4 = *puVar1;
                      uVar5 = puVar1[1];
                      puVar1 = (void*)((int64_t)local_38 + lVar12 + 0x666);
                      *puVar1 = *puVar2;
                      puVar1[1] = uVar3;
                      puVar2 = (void*)((int64_t)local_38 + lVar12 + 0x676);
                      *puVar2 = uVar4;
                      puVar2[1] = uVar5;
                      lVar12 = lVar12 + 0x80;
                      lVar19 = lVar19 + 4;
                    } while (lVar19 != 0);
                  }
                  else {
                    lVar12 = 0;
                  }
                  if (uVar20 != 0) {
                    pBVar14 = (BIO *)0x0;
                    do {
                      puVar1 = (void*)
                               ((int64_t)&ctx_00->method + (int64_t)pBVar14 + lVar12);
                      uVar3 = puVar1[1];
                      puVar2 = (void*)
                               ((int64_t)&ctx_00->method + (int64_t)pBVar14 + 0x10 + lVar12);
                      uVar4 = *puVar2;
                      uVar5 = puVar2[1];
                      puVar2 = (void*)
                               ((int64_t)piVar10 + (int64_t)pBVar14 + lVar12 + 0x606);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar3;
                      puVar2 = (void*)
                               ((int64_t)piVar10 + (int64_t)pBVar14 + lVar12 + 0x616);
                      *puVar2 = uVar4;
                      puVar2[1] = uVar5;
                      pBVar14 = (BIO *)((int64_t)pBVar14 + 0x20);
                    } while ((BIO *)(uVar20 << 5) != pBVar14);
                  }
                  if (ctx != param_4) {
                    pBVar15 = ctx;
                    if ((uVar6 & 0x18) != 0) {
LAB_0101ee6c:
                      uVar13 = (((int)in_stack_ffffffffffffff58 + iVar9) - (int)param_1) + 0x606;
                      ctx = (BIO *)(uint64_t)(uVar13 & 0xfffffff8);
                      pBVar14 = pBVar15;
                      do {
                        *(void*)((int64_t)&pBVar14->method + (int64_t)&local_40->method) =
                             *(void*)((int64_t)&pBVar14->method + (int64_t)&ctx_00->method)
                        ;
                        pBVar14 = (BIO *)&pBVar14->callback;
                      } while (ctx != pBVar14);
                      if (ctx == (BIO *)(uint64_t)uVar13) goto LAB_0101ebbc;
                    }
LAB_0101eb43:
                    uVar20 = ~(uint64_t)ctx;
                    uVar18 = (uint64_t)param_4 & 3;
                    if ((uVar6 & 3) != 0) {
                      do {
                        *(uchar *)((int64_t)&ctx->method + (int64_t)&local_40->method) =
                             *(uchar *)((int64_t)&ctx->method + (int64_t)&ctx_00->method);
                        ctx = (BIO *)((int64_t)&ctx->method + 1);
                        uVar18 = uVar18 - 1;
                        pBVar14 = local_40;
                      } while (uVar18 != 0);
                    }
                    if ((void*)((int64_t)&MACH_HEADER.magic + 2) <
                        (void*)((int64_t)&param_4->method + uVar20)) {
                      do {
                        *(void*)((int64_t)local_38 + (int64_t)&ctx[0xe].field_0x56) =
                             *(void*)((int64_t)&ctx->method + (int64_t)&ctx_00->method);
                        *(void*)((int64_t)local_38 + (int64_t)&ctx[0xe].field_0x57) =
                             ((void*)((int64_t)&ctx_00->method + 1))[(int64_t)ctx];
                        *(void*)((int64_t)(local_38 + 0x182) + (int64_t)ctx) =
                             ((void*)((int64_t)&ctx_00->method + 2))[(int64_t)ctx];
                        *(void*)
                         ((int64_t)local_38 + (int64_t)((int64_t)&ctx[0xe].ex_data.sk + 1)) =
                             ((void*)((int64_t)&ctx_00->method + 3))[(int64_t)ctx];
                        ctx = (BIO *)((int64_t)&ctx->method + 4);
                      } while (param_4 != ctx);
                    }
                  }
LAB_0101ebbc:
                  iVar8 = (int)pBVar14;
                  _EVP_DecodeInit((EVP_ENCODE_CTX *)ctx);
                  local_38[5] = 0;
                  pBVar15 = pBVar17;
                  piVar16 = local_38;
                  piVar25 = piVar24;
                  if ((int)piVar24 != (int)local_60) goto LAB_0101eeb6;
LAB_0101ebe8:
                  if (local_44 != 0) goto LAB_0101eeb6;
                  if (param_1 == (BIO *)(section_00000600.sectname + 6)) {
                    if ((int)piVar25 == 0x400) {
                      piVar16[3] = 1;
                      uVar6 = 0;
LAB_0101ed60:
                      piVar16[2] = uVar6;
                    }
                  }
                  else if (ctx_00 != pBVar15) {
                    uVar6 = (uint)((int64_t)pBVar15 - (int64_t)ctx_00);
                    if (0 < (int)uVar6) {
                      param_4 = (BIO *)((int64_t)pBVar15 - (int64_t)ctx_00 & 0xffffffff);
                      if ((BIO *)((int64_t)&MACH_HEADER.cputype + 3) < param_4) {
                        if ((local_40 <
                             (BIO *)((int64_t)&param_4->method + (int64_t)&ctx_00->method)) &&
                           (ctx_00 < (BIO *)((int64_t)piVar16 + (int64_t)&param_4[0xe].field_0x56)
                           )) {
                          param_1 = (BIO *)0x0;
                        }
                        else {
                          if (uVar6 < 0x20) {
                            pBVar14 = (BIO *)0x0;
                          }
                          else {
                            uVar13 = uVar6 & 0x1f;
                            param_1 = (BIO *)((int64_t)param_4 - (uint64_t)uVar13);
                            lVar12 = 0;
                            do {
                              puVar2 = (void*)(lVar12 + (int64_t)&ctx_00->method);
                              uVar3 = puVar2[1];
                              puVar1 = (void*)((int64_t)&ctx_00->cb_arg + lVar12);
                              uVar4 = *puVar1;
                              uVar5 = puVar1[1];
                              puVar1 = (void*)((int64_t)piVar16 + lVar12 + 0x606);
                              *puVar1 = *puVar2;
                              puVar1[1] = uVar3;
                              puVar2 = (void*)((int64_t)piVar16 + lVar12 + 0x616);
                              *puVar2 = uVar4;
                              puVar2[1] = uVar5;
                              lVar12 = lVar12 + 0x20;
                            } while (param_1 != (BIO *)lVar12);
                            if ((uint64_t)uVar13 == 0) goto LAB_0101ed60;
                            pBVar14 = param_1;
                            if (uVar13 < 8) goto LAB_0101ece6;
                          }
                          param_1 = (BIO *)((int64_t)param_4 - (uint64_t)(uVar6 & 7));
                          do {
                            *(void*)
                             ((int64_t)&pBVar14->method + (int64_t)&local_40->method) =
                                 *(void*)
                                  ((int64_t)&pBVar14->method + (int64_t)&ctx_00->method);
                            pBVar14 = (BIO *)&pBVar14->callback;
                          } while (param_1 != pBVar14);
                          if ((uint64_t)(uVar6 & 7) == 0) goto LAB_0101ed60;
                        }
                      }
                      else {
                        param_1 = (BIO *)0x0;
                      }
LAB_0101ece6:
                      uVar13 = uVar6 - (int)param_1;
                      uVar20 = ~(uint64_t)param_1;
                      uVar18 = (uint64_t)uVar13 & 3;
                      if ((uVar13 & 3) != 0) {
                        do {
                          *(uchar *)((int64_t)&param_1->method + (int64_t)&local_40->method) =
                               *(uchar *)((int64_t)&param_1->method + (int64_t)&ctx_00->method);
                          param_1 = (BIO *)((int64_t)&param_1->method + 1);
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      if ((void*)((int64_t)&MACH_HEADER.magic + 2) <
                          (void*)((int64_t)&param_4->method + uVar20)) {
                        do {
                          *(void*)((int64_t)piVar16 + (int64_t)&param_1[0xe].field_0x56) =
                               *(void*)
                                ((int64_t)&param_1->method + (int64_t)&ctx_00->method);
                          *(void*)((int64_t)piVar16 + (int64_t)&param_1[0xe].field_0x57) =
                               ((void*)((int64_t)&ctx_00->method + 1))[(int64_t)param_1];
                          *(void*)((int64_t)(piVar16 + 0x182) + (int64_t)param_1) =
                               ((void*)((int64_t)&ctx_00->method + 2))[(int64_t)param_1];
                          *(void*)
                           ((int64_t)piVar16 + (int64_t)((int64_t)&param_1[0xe].ex_data.sk + 1))
                               = ((void*)((int64_t)&ctx_00->method + 3))[(int64_t)param_1];
                          param_1 = (BIO *)((int64_t)&param_1->method + 4);
                        } while (param_4 != param_1);
                      }
                    }
                    goto LAB_0101ed60;
                  }
                  goto LAB_0101e910;
                }
                if (uVar6 != 0) goto LAB_0101eeb6;
              }
LAB_0101e910:
              if (piVar16[6] < 1) break;
            } while( true );
          }
        }
LAB_0101efc0:
        _BIO_copy_next_retry(param_1);
        if ((int)pBVar11 != 0) {
          local_50 = pBVar11;
        }
      }
    }
  }
  return local_50;
LAB_0101ea2b:
  iVar8 = (int)pBVar14;
  ctx_00 = (BIO *)((int64_t)piVar16 + (int64_t)param_1);
  pBVar17 = (BIO *)((int64_t)&pBVar17->method + 1);
  piVar24 = (int *)((int64_t)piVar24 + 1);
  piVar25 = local_60;
  if (uVar6 == (uint)piVar24) goto LAB_0101ebe8;
  goto LAB_0101ea40;
LAB_0101eeb6:
  piVar16[2] = 0;
LAB_0101eebe:
  n = (size_t)piVar16;
  uVar6 = _BIO_test_flags(param_1,iVar8);
  piVar16 = local_38;
  pBVar14 = local_40;
  sVar21 = (size_t)local_60;
  if ((uVar6 & 0x100) == 0) {
    iVar9 = _EVP_DecodeUpdate((EVP_ENCODE_CTX *)local_40,(uchar *)local_38,local_60,(uchar *)param_4
                              ,(int)in_stack_ffffffffffffff58);
    piVar16[2] = 0;
  }
  else {
    uVar6 = sVar21 & 0xfffffffc;
    iVar9 = _EVP_DecodeBlock((uchar *)param_1,(uchar *)(uint64_t)uVar6,n);
    if ((2 < (int)uVar6) && (*(char *)((int64_t)&pBVar14->method + (uint64_t)(uVar6 - 1)) == '='))
    {
      uVar13 = ~(uint)(*(char *)((int64_t)&pBVar14->method + (uint64_t)(uVar6 - 2)) == '=');
      param_1 = (BIO *)(uint64_t)uVar13;
      iVar9 = iVar9 + uVar13;
    }
    if (sVar21 != uVar6) {
      _memmove(param_1,(void *)(uint64_t)(sVar21 & 3),n);
      local_38[2] = sVar21 & 3;
    }
    sVar21 = n;
    iVar8 = 0;
    if (-1 < iVar9) {
      iVar8 = iVar9;
    }
    *local_38 = iVar8;
    piVar16 = local_38;
  }
  piVar16[6] = iVar9;
  piVar16[1] = 0;
  if (iVar9 < 0) {
    *piVar16 = 0;
    uVar6 = 0;
    param_1 = pBVar23;
LAB_0101efb8:
    local_50 = (BIO *)(uint64_t)uVar6;
    goto LAB_0101efc0;
  }
  iVar9 = *piVar16;
  if (iVar22 < *piVar16) {
    iVar9 = iVar22;
  }
  _memcpy(pBVar23,(void *)(int64_t)iVar9,sVar21);
  local_38[1] = iVar9;
  if (iVar9 == *local_38) {
    local_38[0] = 0;
    local_38[1] = 0;
  }
  param_1 = (BIO *)(uint64_t)(uint)((int)pBVar11 + iVar9);
  pBVar23 = (BIO *)(uint64_t)(uint)(iVar22 - iVar9);
  pBVar11 = param_1;
  if (iVar22 - iVar9 == 0 || iVar22 < iVar9) goto LAB_0101efc0;
  goto LAB_0101e8ee;
}

