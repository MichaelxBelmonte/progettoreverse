// Function: FUN_00faec50
// Address: 00faec50
// Size: 4505 bytes
// Class: Unknown
// String references:
//   "%ld"
//   "crypto/conf/conf_def.c"
//   ".include"
//   "line "
//   "default"


/* WARNING: Removing unreachable block (ram,0x00faf715) */
/* WARNING: Removing unreachable block (ram,0x00faef36) */
/* WARNING: Removing unreachable block (ram,0x00faef55) */
/* WARNING: Removing unreachable block (ram,0x00faef79) */
/* WARNING: Removing unreachable block (ram,0x00faee90) */
/* WARNING: Removing unreachable block (ram,0x00fafadc) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00faec50(BUF_MEM *param_1,undefined8 *param_2,BIO *param_3,BIO *param_4)

{
  _func_4494 *p_Var1;
  longlong lVar2;
  _func_4494 *p_Var3;
  BIO *pBVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  BIO *file;
  CONF_VALUE *pCVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  code *pcVar10;
  BIO *pBVar11;
  CONF_VALUE *pCVar12;
  char *pcVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  undefined4 extraout_var_01;
  longlong lVar17;
  undefined4 extraout_var_02;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ushort uVar21;
  BIO *pBVar22;
  char *pcVar23;
  char **section;
  longlong *mode;
  BIO **section_00;
  uint uVar24;
  int iVar25;
  BIO *pBVar26;
  BIO *pBVar27;
  longlong unaff_RDI;
  bool bVar28;
  BIO *pBVar29;
  bool bVar30;
  longlong local_130;
  BIO *local_128;
  CONF_VALUE *local_120;
  int in_stack_fffffffffffffee8;
  BIO *local_108;
  LHASH *local_f8;
  CONF_VALUE *local_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_108 = (BIO *)0x0;
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  file = (BIO *)_BUF_MEM_new();
  if (file == (BIO *)0x0) {
    iVar5 = 7;
    param_3 = (BIO *)(section_000000b8.segname + 3);
  }
  else {
    pcVar23 = section_000000b8.segname + 7;
    local_108 = (BIO *)_CRYPTO_strdup((char *)param_1,section_000000b8.segname + 7,(int)param_3);
    if (local_108 == (BIO *)0x0) {
      iVar5 = 0x41;
      param_3 = (BIO *)(section_000000b8.segname + 9);
    }
    else {
      iVar5 = __CONF_new_data((CONF *)param_1);
      if (iVar5 == 0) {
        iVar5 = 0x41;
        param_3 = (BIO *)(section_000000b8.segname + 0xe);
      }
      else {
        pCVar9 = __CONF_new_section((CONF *)param_1,pcVar23);
        if (pCVar9 != (CONF_VALUE *)0x0) {
          iVar5 = _BUF_MEM_grow(param_1,(int)pcVar23);
          if (CONCAT44(extraout_var,iVar5) != 0) {
            bVar30 = true;
            local_e0 = (CONF_VALUE *)0x0;
            lVar16 = 0;
            local_f8 = (LHASH *)0x0;
            local_d8 = 0;
            local_120 = pCVar9;
LAB_00faed51:
            uVar7 = 0;
            bVar28 = false;
LAB_00faedbb:
            p_Var3 = file->callback;
            local_128 = (BIO *)CONCAT44(local_128._4_4_,uVar7);
            pBVar22 = (BIO *)(longlong)(int)uVar7;
            p_Var1 = p_Var3 + (longlong)pBVar22;
            p_Var3[(longlong)pBVar22] = (_func_4494)0x0;
            pcVar10 = p_Var3 + (longlong)pBVar22 + 3;
            in_stack_fffffffffffffee8 = (int)pcVar10;
            param_4 = file;
            if (bVar28) {
              pCVar9 = (CONF_VALUE *)(section_000001f8.sectname + 7);
              _BIO_gets(pBVar22,section_000001f8.sectname + 7,(int)param_3);
              p_Var1[0x1ff] = (code)0x0;
              sVar6 = _strlen((char *)pBVar22);
              pCVar12 = (CONF_VALUE *)(ulonglong)sVar6;
              if (((bVar30) && (2 < (int)sVar6)) &&
                 (uVar21 = (byte)p_Var1[2] ^ 0xbf | *(ushort *)p_Var1 ^ 0xbbef,
                 pBVar22 = (BIO *)(ulonglong)uVar21, uVar21 == 0)) {
                pCVar12 = (CONF_VALUE *)(ulonglong)(sVar6 - 3);
                pCVar9 = pCVar12;
                _memmove((void *)0x0,pCVar12,(size_t)param_3);
                p_Var1[(longlong)pCVar12] = (_func_4494)0x0;
              }
              iVar5 = (int)pCVar12;
              bVar30 = iVar5 != 0;
            }
            else {
              while( true ) {
                pCVar9 = (CONF_VALUE *)(section_000001f8.sectname + 7);
                _BIO_gets(pBVar22,section_000001f8.sectname + 7,(int)param_3);
                p_Var1[0x1ff] = (code)0x0;
                sVar6 = _strlen((char *)pBVar22);
                in_stack_fffffffffffffee8 = (int)pcVar10;
                pCVar12 = (CONF_VALUE *)(ulonglong)sVar6;
                if (bVar30) {
                  if (2 < (int)sVar6) {
                    uVar21 = (byte)p_Var1[2] ^ 0xbf | *(ushort *)p_Var1 ^ 0xbbef;
                    pBVar22 = (BIO *)(ulonglong)uVar21;
                    if (uVar21 != 0) {
                      bVar30 = true;
                      goto LAB_00faf002;
                    }
                    pCVar12 = (CONF_VALUE *)(ulonglong)(sVar6 - 3);
                    pCVar9 = pCVar12;
                    _memmove((void *)0x0,pCVar12,(size_t)param_3);
                    p_Var1[(longlong)pCVar12] = (_func_4494)0x0;
                  }
                  in_stack_fffffffffffffee8 = (int)pcVar10;
                  sVar6 = (size_t)pCVar12;
                }
                if (sVar6 != 0) break;
                lVar14 = _OPENSSL_sk_pop();
                if (lVar14 == 0) {
                  _BUF_MEM_free((BUF_MEM *)pBVar22);
                  _CRYPTO_free(pBVar22);
                  _OPENSSL_sk_free();
                  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
                    return 1;
                  }
                  goto LAB_00fafbfc;
                }
                _BIO_vfree(pBVar22);
                bVar30 = false;
              }
              bVar30 = true;
              iVar5 = (int)pCVar12;
            }
            iVar8 = iVar5;
            if (iVar5 < 1) {
LAB_00faf02c:
              bVar18 = iVar8 == iVar5 & bVar30;
              pBVar22 = (BIO *)CONCAT71((int7)((ulonglong)pBVar22 >> 8),bVar18);
              iVar25 = iVar8;
              if (bVar18 == 0) goto LAB_00faf063;
LAB_00faf037:
              uVar24 = iVar8 + (int)local_128;
              if (uVar24 != 0 && SCARRY4(iVar8,(int)local_128) == (int)uVar24 < 0)
              goto LAB_00faf08c;
LAB_00faf0ab:
              bVar18 = (byte)pBVar22;
              uVar7 = uVar24;
joined_r0x00faf4da:
              bVar28 = true;
              if (bVar18 == 0) {
                pBVar27 = (BIO *)file->callback;
                pBVar29 = (BIO *)(ulonglong)*(byte *)&pBVar27->method;
                pBVar11 = pBVar27;
                pBVar26 = pBVar29;
                if (-1 < (char)*(byte *)&pBVar27->method) {
                  do {
                    uVar21 = *(ushort *)(*(longlong *)(unaff_RDI + 8) + (longlong)pBVar26 * 2);
                    pBVar22 = (BIO *)(ulonglong)uVar21;
                    if ((uVar21 & 0x800) != 0) goto LAB_00faf20d;
                    if ((uVar21 & 0x10) == 0) break;
                    bVar18 = *(char *)((longlong)&pBVar11->method + 1);
                    pBVar26 = (BIO *)(ulonglong)bVar18;
                    pBVar11 = (BIO *)((longlong)&pBVar11->method + 1);
                  } while (-1 < (char)bVar18);
                }
                do {
                  bVar18 = (byte)pBVar26;
                  if ((char)bVar18 < '\0') goto LAB_00faf1f0;
                  param_3 = *(BIO **)(unaff_RDI + 8);
                  uVar21 = *(ushort *)((longlong)&param_3->method + (longlong)pBVar26 * 2);
                  pBVar22 = (BIO *)(ulonglong)uVar21;
                  if ((char)uVar21 < '\0') goto LAB_00faf20d;
                  if ((uVar21 & 0x400) == 0) {
                    if ((uVar21 & 0x40) == 0) {
                      if ((uVar21 & 0x20) == 0) {
                        if ((uVar21 & 8) != 0) goto LAB_00faf213;
                      }
                      else {
                        bVar18 = *(char *)((longlong)&pBVar11->method + 1);
                        if (((char)bVar18 < '\0') ||
                           ((*(byte *)((longlong)&param_3->method + (ulonglong)bVar18 * 2) & 8) == 0
                           )) {
                          pBVar11 = (BIO *)((longlong)&pBVar11->method + 2);
                          goto LAB_00faf11a;
                        }
                      }
LAB_00faf1f0:
                      pBVar11 = (BIO *)((longlong)&pBVar11->method + 1);
                    }
                    else {
                      do {
                        while( true ) {
                          pBVar22 = pBVar11;
                          pBVar26 = (BIO *)((longlong)&pBVar22->method + 1);
                          bVar19 = *(char *)((longlong)&pBVar22->method + 1);
                          pBVar11 = pBVar26;
                          if ((char)bVar19 < '\0') break;
                          uVar21 = *(ushort *)((longlong)&param_3->method + (ulonglong)bVar19 * 2);
                          bVar20 = bVar19;
                          if (((uVar21 & 8) != 0) || (bVar19 == bVar18)) goto LAB_00faf1fe;
                          if ((uVar21 & 0x20) != 0) {
                            bVar19 = *(char *)((longlong)&pBVar22->method + 2);
                            pBVar11 = (BIO *)((longlong)&pBVar22->method + 2);
                            if ((-1 < (char)bVar19) &&
                               ((*(byte *)((longlong)&param_3->method + (ulonglong)bVar19 * 2) & 8)
                                != 0)) goto LAB_00faf11a;
                          }
                        }
                        bVar20 = bVar18;
                      } while (bVar19 != bVar18);
LAB_00faf1fe:
                      pBVar11 = (BIO *)((longlong)&pBVar22->method + 2);
                      if (bVar20 != bVar18) {
                        pBVar11 = pBVar26;
                      }
                    }
                  }
                  else {
                    do {
                      pBVar26 = pBVar11;
                      pBVar22 = (BIO *)((longlong)&pBVar26->method + 1);
                      bVar19 = *(char *)((longlong)&pBVar26->method + 1);
                      if ((-1 < (char)bVar19) &&
                         ((*(byte *)((longlong)&param_3->method + (ulonglong)bVar19 * 2) & 8) != 0))
                      break;
                      pBVar11 = pBVar22;
                    } while ((bVar19 != bVar18) ||
                            (pBVar11 = (BIO *)((longlong)&pBVar26->method + 2), bVar19 = bVar18,
                            *(char *)((longlong)&pBVar26->method + 2) == bVar18));
                    pBVar11 = pBVar22;
                    if (bVar19 == bVar18) {
                      pBVar11 = (BIO *)((longlong)&pBVar26->method + 2);
                    }
                  }
LAB_00faf11a:
                  pBVar26 = (BIO *)(ulonglong)*(byte *)&pBVar11->method;
                } while( true );
              }
            }
            else {
LAB_00faf002:
              pCVar9 = pCVar12;
              iVar5 = (int)pCVar9;
              pBVar22 = (BIO *)((longlong)&pCVar9->section + 1);
              do {
                iVar8 = (int)pCVar9;
                pCVar9 = (CONF_VALUE *)(ulonglong)(iVar8 - 1);
                if ((p_Var1[(longlong)pCVar9] != (_func_4494)0xd) &&
                   (p_Var1[(longlong)pCVar9] != (_func_4494)0xa)) goto LAB_00faf02c;
                pBVar22 = (BIO *)&pBVar22[-1].ex_data.field_0xf;
              } while (1 < (longlong)pBVar22);
              iVar25 = 0;
              iVar8 = 0;
              bVar18 = iVar5 == 0 & bVar30;
              pBVar22 = (BIO *)CONCAT71((int7)((ulonglong)pBVar22 >> 8),bVar18);
              if (bVar18 != 0) goto LAB_00faf037;
LAB_00faf063:
              p_Var1[iVar25] = (_func_4494)0x0;
              local_f8 = (LHASH *)((longlong)&local_f8->b + 1);
              uVar24 = iVar25 + (int)local_128;
              if (uVar24 == 0 || SCARRY4(iVar25,(int)local_128) != (int)uVar24 < 0)
              goto LAB_00faf0ab;
LAB_00faf08c:
              pCVar9 = (CONF_VALUE *)file->callback;
              uVar7 = uVar24 - 1;
              bVar18 = *(byte *)((longlong)&pCVar9->section + (ulonglong)uVar7);
              if (((char)bVar18 < '\0') ||
                 (param_3 = *(BIO **)(unaff_RDI + 8),
                 (*(byte *)((longlong)&param_3->method + (ulonglong)bVar18 * 2) & 0x20) == 0))
              goto LAB_00faf0ab;
              bVar28 = true;
              if (1 < (int)uVar24) {
                bVar18 = *(char *)((longlong)pCVar9 + ((ulonglong)uVar7 - 1));
                pCVar9 = (CONF_VALUE *)(ulonglong)bVar18;
                if ((char)bVar18 < '\0') goto LAB_00faed99;
                bVar30 = (*(byte *)((longlong)&param_3->method + (longlong)pCVar9 * 2) & 0x20) == 0;
                if (bVar30) {
                  uVar24 = uVar7;
                }
                bVar18 = bVar30 | (byte)pBVar22;
                pCVar9 = (CONF_VALUE *)(ulonglong)bVar18;
                uVar7 = uVar24;
                goto joined_r0x00faf4da;
              }
              uVar7 = 0;
            }
            goto LAB_00faed99;
          }
          local_f8 = (LHASH *)0x0;
LAB_00fafc10:
          pcVar23 = "crypto/conf/conf_def.c";
          param_3 = (BIO *)((longlong)&section_000000b8.size + 4);
          _ERR_put_error(0x200b783,7,0xe4,(char *)param_4,in_stack_fffffffffffffee8);
          goto LAB_00fafa57;
        }
        iVar5 = 0x67;
        param_3 = (BIO *)((longlong)&section_000000b8.addr + 4);
      }
    }
  }
  pcVar23 = "crypto/conf/conf_def.c";
  _ERR_put_error(0x200b783,iVar5,(int)param_3,(char *)param_4,in_stack_fffffffffffffee8);
  local_f8 = (LHASH *)0x0;
LAB_00fafa57:
  local_e0 = (CONF_VALUE *)0x0;
  pCVar12 = local_e0;
LAB_00fafa5e:
  local_e0 = pCVar12;
  _BUF_MEM_free((BUF_MEM *)pcVar23);
  _CRYPTO_free(pcVar23);
  iVar5 = _OPENSSL_sk_num();
  while (0 < iVar5) {
    _OPENSSL_sk_pop();
    _BIO_vfree((BIO *)pcVar23);
    iVar5 = _OPENSSL_sk_num();
  }
  _OPENSSL_sk_free();
  _CRYPTO_free(pcVar23);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = local_f8;
  }
  _BIO_snprintf((char *)local_f8,0x200735f,(char *)param_3);
  _ERR_add_error_data((int)local_f8,&local_c8);
  if (lVar2 != *(longlong *)(unaff_RDI + 0x10)) {
    _CONF_free(local_f8);
    *(undefined8 *)(unaff_RDI + 0x10) = 0;
  }
  if (local_e0 != (CONF_VALUE *)0x0) {
    _CRYPTO_free(local_f8);
    _CRYPTO_free(local_f8);
    _CRYPTO_free(local_f8);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return 0;
  }
LAB_00fafbfc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_00faf20d:
  *(undefined1 *)&pBVar11->method = 0;
  pBVar29 = (BIO *)(ulonglong)*(byte *)&pBVar27->method;
LAB_00faf213:
  bVar18 = (byte)pBVar29;
  pBVar26 = local_108;
  pcVar23 = (char *)pBVar27;
  pBVar11 = pBVar27;
  if (-1 < (char)bVar18) {
    lVar14 = *(longlong *)(unaff_RDI + 8);
    pBVar4 = pBVar27;
LAB_00faf230:
    pBVar22 = (BIO *)((longlong)&pBVar4->method + 1);
    uVar21 = *(ushort *)(lVar14 + (longlong)pBVar29 * 2);
    pCVar9 = (CONF_VALUE *)(ulonglong)uVar21;
    pcVar23 = (char *)pBVar22;
    if ((uVar21 & 0x18) == 0x10) goto code_r0x00faf247;
    bVar28 = false;
    uVar7 = 0;
    if ((uVar21 & 8) != 0) goto LAB_00faed99;
    if ((char)pBVar29 == '[') {
      bVar18 = *(byte *)&pBVar22->method;
      while ((pBVar22 = (BIO *)pcVar23, param_3 = (BIO *)pcVar23, -1 < (char)bVar18 &&
             ((*(ushort *)(lVar14 + (ulonglong)bVar18 * 2) & 0x18) == 0x10))) {
        bVar18 = *(char *)((longlong)&((BIO *)pcVar23)->method + 1);
        pcVar23 = (char *)((longlong)&((BIO *)pcVar23)->method + 1);
      }
joined_r0x00faf889:
      while (pBVar27 = pBVar22, (char)bVar18 < '\0') {
LAB_00faf907:
        if (bVar18 == 0) {
LAB_00fafd6b:
          pcVar23 = "crypto/conf/conf_def.c";
          param_3 = (BIO *)((longlong)&section_00000108.reserved2 + 2);
          _ERR_put_error(0x200b783,100,0x152,(char *)param_4,in_stack_fffffffffffffee8);
          goto LAB_00fafa57;
        }
        if (bVar18 == 0x5d) {
          *(undefined1 *)pBVar22 = 0;
          section_00 = &local_108;
          iVar5 = FUN_00fb00c0();
          pCVar12 = local_e0;
          if (iVar5 == 0) goto LAB_00fafa5e;
          local_120 = (CONF_VALUE *)__CONF_get_section();
          if ((local_120 == (CONF_VALUE *)0x0) &&
             (local_120 = __CONF_new_section((CONF *)pcVar23,(char *)section_00),
             local_120 == (CONF_VALUE *)0x0)) {
            pcVar23 = "crypto/conf/conf_def.c";
            param_3 = (BIO *)(section_00000158.sectname + 4);
            _ERR_put_error(0x200b783,0x67,0x15c,(char *)param_4,in_stack_fffffffffffffee8);
            local_e0 = (CONF_VALUE *)0x0;
            pCVar12 = local_e0;
            goto LAB_00fafa5e;
          }
          iVar5 = _BUF_MEM_grow((BUF_MEM *)pcVar23,(int)section_00);
          lVar14 = CONCAT44(extraout_var_02,iVar5);
          goto joined_r0x00faf99d;
        }
        bVar30 = param_3 == pBVar27;
        pBVar22 = pBVar27;
        param_3 = pBVar27;
        if (bVar30) goto LAB_00fafd6b;
      }
      uVar21 = *(ushort *)(lVar14 + (ulonglong)bVar18 * 2);
      if ((uVar21 & 0x20) == 0) {
        if ((uVar21 & 0x307) == 0) {
          if ((uVar21 & 0x18) != 0x10) goto LAB_00faf907;
          param_4 = (BIO *)((longlong)pBVar22 + 1);
          do {
            pBVar27 = param_4;
            bVar18 = *(byte *)&pBVar27->method;
            param_4 = pBVar27;
            if ((char)bVar18 < '\0') break;
            param_4 = (BIO *)((longlong)&pBVar27->method + 1);
          } while ((*(ushort *)(lVar14 + (ulonglong)bVar18 * 2) & 0x18) == 0x10);
          goto LAB_00faf907;
        }
      }
      else if (((char)*(byte *)((longlong)pBVar22 + 1) < '\0') ||
              ((*(byte *)(lVar14 + (ulonglong)*(byte *)((longlong)pBVar22 + 1) * 2) & 8) == 0)) {
        bVar18 = *(byte *)((longlong)pBVar22 + 2U);
        pBVar22 = (BIO *)((longlong)pBVar22 + 2U);
        goto joined_r0x00faf889;
      }
      bVar18 = *(byte *)((longlong)pBVar22 + 1U);
      pBVar22 = (BIO *)((longlong)pBVar22 + 1U);
      goto joined_r0x00faf889;
    }
    pBVar11 = pBVar4;
    pBVar27 = pBVar4;
    if ((uVar21 & 0x20) != 0) goto LAB_00faf370;
LAB_00faf345:
    if (((ulonglong)pCVar9 & 0x307) != 0) {
      do {
        pBVar11 = (BIO *)((longlong)&pBVar11->method + 1);
        bVar18 = *(byte *)&pBVar11->method;
        while( true ) {
          pcVar23 = (char *)pBVar11;
          if ((char)bVar18 < '\0') goto LAB_00faf283;
          pBVar22 = (BIO *)(ulonglong)bVar18;
          uVar21 = *(ushort *)(lVar14 + (longlong)pBVar22 * 2);
          pCVar9 = (CONF_VALUE *)(ulonglong)uVar21;
          pBVar29 = pBVar22;
          if ((uVar21 & 0x20) == 0) goto LAB_00faf345;
LAB_00faf370:
          bVar18 = *(char *)((longlong)&pBVar11->method + 1);
          pBVar22 = (BIO *)(ulonglong)bVar18;
          if ((-1 < (char)bVar18) && ((*(byte *)(lVar14 + (longlong)pBVar22 * 2) & 8) != 0)) break;
          pBVar11 = (BIO *)((longlong)&pBVar11->method + 2);
          bVar18 = *(byte *)&pBVar11->method;
        }
      } while( true );
    }
    if (((char)pBVar29 == ':') && (*(char *)((longlong)&pBVar11->method + 1) == ':')) {
      *(undefined1 *)&pBVar11->method = 0;
      bVar18 = *(char *)((longlong)&pBVar11->method + 2);
      pBVar27 = (BIO *)((longlong)&pBVar11->method + 2);
      pBVar26 = pBVar4;
      pcVar23 = (char *)pBVar27;
      pBVar11 = pBVar27;
      if (-1 < (char)bVar18) {
        do {
          pBVar29 = (BIO *)(ulonglong)bVar18;
          uVar21 = *(ushort *)(*(longlong *)(unaff_RDI + 8) + (longlong)pBVar29 * 2);
          pBVar22 = (BIO *)(ulonglong)uVar21;
          if ((uVar21 & 0x20) == 0) {
            pBVar11 = (BIO *)pcVar23;
            if ((uVar21 & 0x307) == 0) goto LAB_00faf572;
LAB_00faf54c:
            pcVar23 = (char *)((longlong)&((BIO *)pcVar23)->method + 1);
            bVar18 = *(byte *)&((BIO *)pcVar23)->method;
          }
          else {
            bVar18 = *(char *)((longlong)&((BIO *)pcVar23)->method + 1);
            pBVar22 = (BIO *)(ulonglong)bVar18;
            if ((-1 < (char)bVar18) &&
               ((*(byte *)(*(longlong *)(unaff_RDI + 8) + (longlong)pBVar22 * 2) & 8) != 0))
            goto LAB_00faf54c;
            pcVar23 = (char *)((longlong)&((BIO *)pcVar23)->method + 2);
            bVar18 = *(byte *)&((BIO *)pcVar23)->method;
          }
          pBVar11 = (BIO *)pcVar23;
        } while (-1 < (char)bVar18);
      }
      goto LAB_00faf283;
    }
LAB_00faf572:
    pcVar23 = (char *)pBVar11;
    do {
      bVar18 = (byte)pBVar29;
      uVar7 = *(ushort *)(*(longlong *)(unaff_RDI + 8) + (longlong)pBVar29 * 2) & 0x18;
      pBVar22 = (BIO *)(ulonglong)uVar7;
      if ((short)uVar7 != 0x10) break;
      bVar18 = *(char *)((longlong)&((BIO *)pcVar23)->method + 1);
      pBVar29 = (BIO *)(ulonglong)bVar18;
      pcVar23 = (char *)((longlong)&((BIO *)pcVar23)->method + 1);
    } while (-1 < (char)bVar18);
  }
LAB_00faf283:
  iVar5 = _strncmp((char *)pBVar22,(char *)&MACH_HEADER.cpusubtype,(size_t)param_3);
  if (iVar5 == 0) goto LAB_00faf5af;
  if (bVar18 != 0x3d) goto LAB_00fafc56;
  *(undefined1 *)&pBVar11->method = 0;
  bVar18 = *(char *)((longlong)&((BIO *)pcVar23)->method + 1);
  pcVar23 = (char *)((longlong)&((BIO *)pcVar23)->method + 1);
  if (-1 < (char)bVar18) {
    do {
      if ((*(ushort *)(*(longlong *)(unaff_RDI + 8) + (ulonglong)bVar18 * 2) & 0x18) != 0x10) break;
      bVar18 = *(char *)((longlong)&((BIO *)pcVar23)->method + 1);
      pcVar23 = (char *)((longlong)&((BIO *)pcVar23)->method + 1);
    } while (-1 < (char)bVar18);
  }
  pBVar22 = (BIO *)&(((BIO *)((longlong)pcVar23 + -0x68))->ex_data).field_0xf;
  pBVar11 = (BIO *)pcVar23;
  while (((char)bVar18 < '\0' ||
         ((*(byte *)(*(longlong *)(unaff_RDI + 8) + (ulonglong)bVar18 * 2) & 8) == 0))) {
    bVar18 = *(char *)((longlong)&pBVar11->method + 1);
    pBVar11 = (BIO *)((longlong)&pBVar11->method + 1);
    pBVar22 = (BIO *)((longlong)&pBVar22->method + 1);
  }
  do {
    pBVar11 = pBVar22;
    pBVar22 = pBVar11;
    if ((pBVar11 < pcVar23) || ((char)*(byte *)&pBVar11->method < '\0')) break;
    pBVar22 = (BIO *)&pBVar11[-1].ex_data.field_0xf;
  } while ((*(byte *)(*(longlong *)(unaff_RDI + 8) + (ulonglong)*(byte *)&pBVar11->method * 2) &
           0x10) != 0);
  *(char *)((longlong)&pBVar11->method + 1) = '\0';
  local_128 = pBVar26;
  pCVar12 = _CRYPTO_malloc((int)pBVar22,(char *)((longlong)&section_00000158.reserved1 + 3),
                           (int)param_3);
  in_stack_fffffffffffffee8 = (int)pBVar27;
  if (pCVar12 == (CONF_VALUE *)0x0) {
    pcVar23 = "crypto/conf/conf_def.c";
    param_3 = (BIO *)&section_00000158.reserved2;
    _ERR_put_error(0x200b783,0x41,0x1a0,(char *)param_4,in_stack_fffffffffffffee8);
    local_e0 = (CONF_VALUE *)0x0;
    pCVar12 = local_e0;
    goto LAB_00fafa5e;
  }
  pcVar13 = _CRYPTO_strdup((char *)pBVar22,(char *)((longlong)&section_00000158.reserved2 + 3),
                           (int)param_3);
  pCVar12->name = pcVar13;
  pCVar12->value = (char *)0x0;
  if (pcVar13 == (char *)0x0) {
    iVar5 = 0x41;
    param_3 = (BIO *)((longlong)&section_00000158.reserved3 + 2);
  }
  else {
    section = &pCVar12->value;
    iVar5 = FUN_00fb00c0();
    if (iVar5 == 0) goto LAB_00fafa5e;
    uVar7 = _strcmp(pcVar23,(char *)section);
    pBVar22 = (BIO *)(ulonglong)uVar7;
    if (((uVar7 == 0) || (lVar14 = __CONF_get_section(), lVar14 != 0)) ||
       (pCVar9 = __CONF_new_section((CONF *)pBVar22,(char *)section), pCVar9 != (CONF_VALUE *)0x0))
    {
      pCVar9 = pCVar12;
      iVar5 = __CONF_add_string((CONF *)pBVar22,pCVar12,(CONF_VALUE *)param_3);
      bVar28 = false;
      uVar7 = 0;
      if (iVar5 == 0) {
        pcVar23 = "crypto/conf/conf_def.c";
        param_3 = (BIO *)section_000001a8.segname;
        _ERR_put_error(0x200b783,0x41,0x1b8,(char *)file,in_stack_fffffffffffffee8);
        goto LAB_00fafa5e;
      }
LAB_00faed99:
      param_4 = file;
      iVar5 = _BUF_MEM_grow((BUF_MEM *)pBVar22,(int)pCVar9);
      bVar30 = false;
      if (CONCAT44(extraout_var_00,iVar5) == 0) goto LAB_00fafc10;
      goto LAB_00faedbb;
    }
    iVar5 = 0x67;
    param_3 = (BIO *)(section_000001a8.sectname + 10);
  }
  pcVar23 = "crypto/conf/conf_def.c";
  _ERR_put_error(0x200b783,iVar5,(int)param_3,(char *)param_4,in_stack_fffffffffffffee8);
  goto LAB_00fafa5e;
code_r0x00faf247:
  bVar18 = *(byte *)&pBVar22->method;
  pBVar29 = (BIO *)(ulonglong)bVar18;
  pBVar27 = pBVar22;
  pBVar11 = pBVar22;
  pBVar4 = pBVar22;
  if ((char)bVar18 < '\0') goto LAB_00faf283;
  goto LAB_00faf230;
LAB_00faf5af:
  if (((_func_4494 **)pcVar23 == &pBVar27->callback) && (bVar18 != 0x3d)) {
LAB_00fafc56:
    pcVar23 = "crypto/conf/conf_def.c";
    param_3 = (BIO *)((longlong)&section_00000158.nrelocs + 3);
    _ERR_put_error(0x200b783,0x65,0x197,(char *)param_4,(int)pBVar27);
    local_e0 = (CONF_VALUE *)0x0;
    pCVar12 = local_e0;
    goto LAB_00fafa5e;
  }
  local_130 = 0;
  bVar18 = *(byte *)&((BIO *)pcVar23)->method;
  if (bVar18 == 0x3d) {
    bVar18 = *(char *)((longlong)&((BIO *)pcVar23)->method + 1);
    pcVar23 = (char *)((longlong)&((BIO *)pcVar23)->method + 1);
    if (-1 < (char)bVar18) {
      do {
        if ((*(ushort *)(*(longlong *)(unaff_RDI + 8) + (ulonglong)bVar18 * 2) & 0x18) != 0x10)
        break;
        bVar18 = *(char *)((longlong)&((BIO *)pcVar23)->method + 1);
        pcVar23 = (char *)((longlong)&((BIO *)pcVar23)->method + 1);
      } while (-1 < (char)bVar18);
    }
  }
  pBVar22 = (BIO *)&(((BIO *)((longlong)pcVar23 + -0x68))->ex_data).field_0xf;
  pBVar11 = (BIO *)pcVar23;
  while (((char)bVar18 < '\0' ||
         ((*(byte *)(*(longlong *)(unaff_RDI + 8) + (ulonglong)bVar18 * 2) & 8) == 0))) {
    bVar18 = *(char *)((longlong)&pBVar11->method + 1);
    pBVar11 = (BIO *)((longlong)&pBVar11->method + 1);
    pBVar22 = (BIO *)((longlong)&pBVar22->method + 1);
  }
  do {
    pBVar11 = pBVar22;
    if ((pBVar11 < pcVar23) || ((char)*(byte *)&pBVar11->method < '\0')) break;
    pBVar22 = (BIO *)&pBVar11[-1].ex_data.field_0xf;
  } while ((*(byte *)(*(longlong *)(unaff_RDI + 8) + (ulonglong)*(byte *)&pBVar11->method * 2) &
           0x10) != 0);
  *(undefined1 *)((longlong)&pBVar11->method + 1) = 0;
  mode = &local_130;
  iVar5 = FUN_00fb00c0();
  lVar14 = local_130;
  in_stack_fffffffffffffee8 = (int)pBVar27;
  if (iVar5 == 0) goto LAB_00fafa57;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  iVar5 = _stat_INODE64();
  if (iVar5 < 0) {
    piVar15 = ___error();
    iVar5 = *piVar15;
    param_3 = (BIO *)(section_00000298.segname + 0xc);
    pcVar23 = "crypto/conf/conf_def.c";
    _ERR_put_error(0x200b783,iVar5,0x2b4,(char *)param_4,in_stack_fffffffffffffee8);
    _ERR_add_error_data((int)pcVar23);
    pBVar22 = (BIO *)0x0;
joined_r0x00faf9b9:
    if (lVar14 != local_d8) {
      iVar5 = 0x17e;
      _CRYPTO_free(pcVar23);
    }
    lVar14 = local_d8;
    if (pBVar22 == (BIO *)0x0) goto LAB_00faf7d2;
  }
  else {
    if ((local_c8._4_2_ & 0xf000) != 0x4000) {
      pBVar22 = _BIO_new_file(pcVar23,(char *)mode);
      iVar5 = (int)mode;
      goto joined_r0x00faf9b9;
    }
    pcVar23 = "crypto/conf/conf_def.c";
    lVar17 = FUN_00faff20();
    iVar5 = (int)mode;
    if (lVar17 == 0) {
      pBVar22 = (BIO *)0x0;
      goto joined_r0x00faf9b9;
    }
  }
  local_d8 = lVar14;
  if ((lVar16 == 0) && (lVar16 = _OPENSSL_sk_new_null(), lVar16 == 0)) {
    param_3 = (BIO *)&section_00000158.offset;
  }
  else {
    iVar8 = _OPENSSL_sk_push();
    if (iVar8 != 0) {
LAB_00faf7d2:
      iVar5 = _BUF_MEM_grow((BUF_MEM *)pcVar23,iVar5);
      lVar14 = CONCAT44(extraout_var_01,iVar5);
joined_r0x00faf99d:
      bVar30 = false;
      if (lVar14 == 0) goto LAB_00fafc10;
      goto LAB_00faed51;
    }
    param_3 = (BIO *)((longlong)&section_00000158.align + 2);
  }
  pcVar23 = "crypto/conf/conf_def.c";
  _ERR_put_error(0x200b783,0x41,(int)param_3,(char *)param_4,in_stack_fffffffffffffee8);
  _BIO_free((BIO *)pcVar23);
  goto LAB_00fafa57;
}


