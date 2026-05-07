// Function: FUN_0109fd30
// Address: 0109fd30
// Size: 2888 bytes
// Class: Unknown
// String references:
//   "crypto/store/loader_file.c"
//   "PEM type is '"
//   "PEM"


longlong FUN_0109fd30(undefined8 param_1,undefined8 param_2,char **param_3,char *param_4)

{
  char **ppcVar1;
  byte bVar2;
  longlong lVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  char *pcVar9;
  int *piVar10;
  undefined4 extraout_var_02;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  undefined4 extraout_var_03;
  uint uVar15;
  BUF_MEM *pBVar16;
  code *pcVar17;
  char *pcVar18;
  ulonglong *unaff_RSI;
  BUF_MEM *unaff_RDI;
  int reason;
  ulonglong **file;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar22;
  ulonglong *in_stack_fffffffffffffe38;
  ulonglong local_188;
  BUF_MEM *local_180;
  ulonglong local_178;
  BUF_MEM *local_170;
  longlong local_168;
  undefined1 local_160 [24];
  longlong local_148;
  ulonglong *local_138 [32];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  *(undefined4 *)&unaff_RDI->field_0x4 = 0;
  _ERR_clear_error();
  if (unaff_RDI->length != 2) {
    local_170 = unaff_RDI + 1;
    ppcVar1 = &unaff_RDI[1].data;
    local_148 = 0;
    do {
      file = local_138;
      local_138[0] = (ulonglong *)((ulonglong)local_138[0] & 0xffffffff00000000);
      if (*(longlong *)local_170 != 0) {
        param_3 = ppcVar1;
        lVar19 = (**(code **)(*(longlong *)local_170 + 8))(0);
        pBVar16 = local_170;
        if (lVar19 != 0) goto LAB_010a08b5;
        (**(code **)(*(longlong *)local_170 + 0x18))();
        *(longlong *)pBVar16 = 0;
        pBVar16->data = (char *)0x0;
      }
      iVar6 = 0;
      if (unaff_RDI->length != 2) {
        iVar6 = _BIO_ctrl((BIO *)0x0,0,(long)param_3,file);
      }
      lVar19 = local_148;
      if (iVar6 != 0) goto LAB_010a08b5;
      lVar20 = 0;
      do {
        local_168 = 0;
        local_178 = 0;
        local_160._0_8_ = 0;
        local_160._8_8_ = (BUF_MEM *)0x0;
        if (unaff_RDI->length != 1) {
          local_138[0] = (ulonglong *)0x0;
          pcVar17 = (code *)unaff_RDI;
          iVar6 = _asn1_d2i_read_bio();
          if (iVar6 < 0) goto LAB_010a0510;
          local_160._0_8_ = local_138[0][1];
          local_160._8_8_ = *local_138[0];
          _CRYPTO_free(pcVar17);
          goto LAB_010a0250;
        }
        if (((ulonglong)unaff_RDI->data & 1) == 0) {
          pcVar17 = (code *)local_160;
          param_3 = (char **)(local_160 + 8);
          iVar6 = _PEM_read_bio(pcVar17,&local_178);
          if (iVar6 < 1) goto LAB_010a0510;
LAB_010a01bf:
          sVar4 = _strlen((char *)pcVar17);
          if (10 < CONCAT44(extraout_var_02,sVar4)) {
            iVar6 = _PEM_get_EVP_CIPHER_INFO();
            if (iVar6 != 0) {
              pcVar17 = FUN_010a09d0;
              param_3 = (char **)&stack0xfffffffffffffe38;
              in_stack_fffffffffffffe38 = unaff_RSI;
              iVar6 = _PEM_do_header(FUN_010a09d0,local_160 + 8);
              if (iVar6 != 0) goto LAB_010a0250;
            }
            goto LAB_010a0510;
          }
LAB_010a0250:
          local_188 = local_160._0_8_;
          uVar15 = 0xffffffff;
          local_180 = (BUF_MEM *)local_160._8_8_;
          puVar14 = (ulonglong *)0x0;
          uVar13 = 0;
          while( true ) {
            local_138[0] = (ulonglong *)0x0;
            plVar11 = (longlong *)_CRYPTO_zalloc();
            if (plVar11 == (longlong *)0x0) {
              pcVar9 = "crypto/store/loader_file.c";
              param_3 = (char **)((longlong)&segment_command_000003d8.filesize + 6);
              _ERR_put_error(0x201bb0c,0x41,0x40e,(char *)file,(int)in_stack_fffffffffffffe38);
              lVar20 = 0;
            }
            else {
              lVar19 = 0;
              uVar15 = 0;
              lVar20 = 0;
              do {
                lVar3 = *(longlong *)((longlong)&DAT_025b56f0 + lVar19);
                local_160._20_4_ = 0;
                in_stack_fffffffffffffe38 = (ulonglong *)0x0;
                param_3 = (char **)&stack0xfffffffffffffe38;
                file = (ulonglong **)(local_160 + 0x14);
                pcVar9 = (char *)local_180;
                lVar12 = (**(code **)(lVar3 + 8))(local_180,local_188,param_3,file,puVar14,uVar13);
                if (0 < (int)local_160._20_4_) {
                  plVar11[(int)uVar15] = lVar3;
                  if (local_138[0] != (ulonglong *)0x0) {
                    (**(code **)(lVar3 + 0x18))();
                  }
                  uVar15 = uVar15 + local_160._20_4_;
                  pcVar9 = (char *)(ulonglong)uVar15;
                  local_138[0] = in_stack_fffffffffffffe38;
                  if (1 < (int)uVar15) {
                    _OSSL_STORE_INFO_free();
                    _OSSL_STORE_INFO_free();
                    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
                      (**(code **)(lVar3 + 0x18))();
                    }
                    local_138[0] = (ulonglong *)0x0;
                    lVar20 = 0;
                    lVar12 = 0;
                  }
                  if (lVar20 == 0) {
                    lVar20 = lVar12;
                  }
                }
                lVar19 = lVar19 + 8;
              } while (lVar19 != 0x38);
              if ((uVar15 == 1) && (*(int *)(*plVar11 + 0x20) != 0)) {
                *(longlong *)local_170 = *plVar11;
                *ppcVar1 = (char *)local_138[0];
                pcVar9 = (char *)ppcVar1;
              }
              _CRYPTO_free(pcVar9);
            }
            _CRYPTO_free(pcVar9);
            _BUF_MEM_free((BUF_MEM *)pcVar9);
            if (lVar20 == 0) {
              if ((local_168 == 0) || ((int)uVar15 < 2)) {
                if ((int)uVar15 < 2) {
                  if (uVar15 != 1) {
                    lVar20 = 0;
                    bVar2 = *(byte *)&unaff_RDI->data;
                    pcVar17 = (code *)pcVar9;
                    goto joined_r0x010a0769;
                  }
                  uVar7 = _ERR_peek_error();
                  if (CONCAT44(extraout_var_03,uVar7) == 0) {
                    pcVar9 = "crypto/store/loader_file.c";
                    param_3 = (char **)(section_00000560.sectname + 0xd);
                    _ERR_put_error(0x201bb0c,0x6e,0x56d,(char *)file,(int)in_stack_fffffffffffffe38)
                    ;
                    if (local_168 != 0) {
                      pcVar9 = "\'";
                      _ERR_add_error_data(0x2007019);
                    }
                  }
                }
                else {
                  pcVar9 = "crypto/store/loader_file.c";
                  param_3 = (char **)(section_00000560.sectname + 5);
                  _ERR_put_error(0x201bb0c,0x6b,0x565,(char *)file,(int)in_stack_fffffffffffffe38);
                }
              }
              *(int *)&unaff_RDI->field_0x4 = *(int *)&unaff_RDI->field_0x4 + 1;
              lVar20 = 0;
              bVar2 = *(byte *)&unaff_RDI->data;
              pcVar17 = (code *)pcVar9;
              goto joined_r0x010a052c;
            }
            iVar6 = _OSSL_STORE_INFO_get_type();
            if (iVar6 != -1) break;
            uVar13 = _ossl_store_info_get0_EMBEDDED_pem_name();
            puVar14 = (ulonglong *)_ossl_store_info_get0_EMBEDDED_buffer();
            local_180 = (BUF_MEM *)*puVar14;
            local_188 = puVar14[1];
            _CRYPTO_free(pcVar9);
          }
          _ERR_clear_error();
          bVar2 = *(byte *)&unaff_RDI->data;
          pcVar17 = (code *)pcVar9;
joined_r0x010a0769:
          if ((bVar2 & 1) != 0) goto LAB_010a060d;
LAB_010a0532:
          _CRYPTO_free(pcVar17);
          if (((ulonglong)unaff_RDI->data & 1) != 0) goto LAB_010a0557;
LAB_010a0634:
          _CRYPTO_free(pcVar17);
          if (((ulonglong)unaff_RDI->data & 1) == 0) goto LAB_010a0659;
LAB_010a057e:
          _CRYPTO_secure_clear_free(0x46b);
        }
        else {
          pcVar17 = (code *)local_160;
          param_3 = (char **)(local_160 + 8);
          file = (ulonglong **)((longlong)&MACH_HEADER.magic + 3);
          iVar6 = _PEM_read_bio_ex(pcVar17,&local_178);
          if (0 < iVar6) goto LAB_010a01bf;
LAB_010a0510:
          *(int *)&unaff_RDI->field_0x4 = *(int *)&unaff_RDI->field_0x4 + 1;
          uVar15 = 0xffffffff;
          bVar2 = *(byte *)&unaff_RDI->data;
joined_r0x010a052c:
          if ((bVar2 & 1) == 0) goto LAB_010a0532;
LAB_010a060d:
          pcVar17 = (code *)((longlong)&section_00000420.reserved2 + 3);
          _CRYPTO_secure_clear_free(0x46b,"crypto/store/loader_file.c");
          if (((ulonglong)unaff_RDI->data & 1) == 0) goto LAB_010a0634;
LAB_010a0557:
          pcVar17 = (code *)((longlong)&section_00000420.reserved2 + 3);
          _CRYPTO_secure_clear_free(0x46b,"crypto/store/loader_file.c");
          if (((ulonglong)unaff_RDI->data & 1) != 0) goto LAB_010a057e;
LAB_010a0659:
          _CRYPTO_free(pcVar17);
        }
        if (uVar15 != 0) {
          lVar19 = local_148;
          if (1 < (int)uVar15) goto LAB_010a08b5;
          break;
        }
        if (unaff_RDI->length == 2) {
          iVar6 = local_170->length;
joined_r0x010a00bb:
          if (iVar6 != 0) break;
        }
        else if ((*(longlong *)local_170 == 0) ||
                (iVar6 = (**(code **)(*(longlong *)local_170 + 0x10))(), iVar6 != 0)) {
          iVar6 = _BIO_ctrl((BIO *)0x0,0,(long)param_3,file);
          goto joined_r0x010a00bb;
        }
      } while (*(int *)&unaff_RDI->field_0x4 < 1);
      lVar19 = local_148;
      if (((lVar20 == 0) || (iVar6 = unaff_RDI[3].length, lVar19 = lVar20, iVar6 == 0)) ||
         (iVar8 = _OSSL_STORE_INFO_get_type(), iVar6 == iVar8)) goto LAB_010a08b5;
      _OSSL_STORE_INFO_free();
    } while( true );
  }
  local_148 = 0;
  do {
    pcVar9 = unaff_RDI[2].data;
    if (pcVar9 == (char *)0x0) {
      if (unaff_RDI[1].length == 0) {
        iVar8 = 0x201bb0c;
        _ERR_put_error(0x201bb0c,2,0x513,param_4,(int)in_stack_fffffffffffffe38);
        iVar6 = unaff_RDI[2].max;
        piVar10 = ___error();
        *piVar10 = iVar6;
        *(int *)&unaff_RDI->field_0x4 = *(int *)&unaff_RDI->field_0x4 + 1;
        ___error();
        iVar6 = _openssl_strerror_r();
        if (iVar6 != 0) {
          _ERR_add_error_data(iVar8);
        }
      }
LAB_010a08ac:
      lVar19 = 0;
      break;
    }
    if (*pcVar9 != '.') {
      if ((char)unaff_RDI[1].max != '\0') {
        uVar15 = unaff_RDI[3].length;
        if (5 < uVar15) goto LAB_0109fdcd;
        lVar19 = 0;
        if ((0x31U >> (uVar15 & 0x1f) & 1) != 0) {
          iVar6 = _strncasecmp((char *)unaff_RDI,(char *)&MACH_HEADER.cpusubtype,(size_t)param_3);
          if ((iVar6 == 0) && (pcVar9[8] == '.')) {
            if (pcVar9[9] == 'r') {
              pcVar9 = pcVar9 + 10;
              if ((uVar15 == 0) || (uVar15 == 5)) {
LAB_0109fe45:
                iVar6 = _ossl_ctype_check();
                if (iVar6 != 0) {
                  do {
                    pcVar18 = pcVar9;
                    iVar6 = _ossl_ctype_check();
                    pcVar9 = pcVar18 + 1;
                  } while (iVar6 != 0);
                  if (*pcVar18 == '\0') goto LAB_0109fe9a;
                }
              }
            }
            else if (uVar15 != 5) {
              pcVar9 = pcVar9 + 9;
              goto LAB_0109fe45;
            }
          }
          lVar19 = 0;
        }
        goto LAB_0109ff60;
      }
LAB_0109fe9a:
      pcVar9 = unaff_RDI[1].data;
      pBVar16 = unaff_RDI;
      if (*pcVar9 == '\0') {
        bVar21 = true;
      }
      else {
        sVar4 = _strlen((char *)unaff_RDI);
        bVar21 = pcVar9[CONCAT44(extraout_var,sVar4) + -1] != '/';
      }
      sVar4 = _strlen((char *)pBVar16);
      sVar5 = _strlen((char *)pBVar16);
      lVar19 = (ulonglong)bVar21 + CONCAT44(extraout_var_00,sVar4);
      lVar20 = CONCAT44(extraout_var_01,sVar5) + lVar19 + 1;
      lVar19 = _CRYPTO_zalloc(lVar19,0x4b6);
      iVar6 = (int)in_stack_fffffffffffffe38;
      if (lVar19 != 0) {
        uVar22 = _OPENSSL_strlcat(extraout_XMM0_Da,lVar20);
        _OPENSSL_strlcat(uVar22,lVar20);
        _OPENSSL_strlcat();
        goto LAB_0109ff60;
      }
      iVar8 = 0x41;
      reason = 0x4b8;
LAB_010a08a7:
      _ERR_put_error(0x201bb0c,iVar8,reason,param_4,iVar6);
      goto LAB_010a08ac;
    }
LAB_0109fdcd:
    lVar19 = 0;
LAB_0109ff60:
    pcVar9 = (char *)_OPENSSL_DIR_read();
    unaff_RDI[2].data = pcVar9;
    piVar10 = ___error();
    iVar6 = (int)in_stack_fffffffffffffe38;
    iVar8 = *piVar10;
    unaff_RDI[2].max = iVar8;
    if ((unaff_RDI[2].data == (char *)0x0) && (iVar8 == 0)) {
      unaff_RDI[1].length = 1;
    }
    if (lVar19 != 0) {
      local_148 = _OSSL_STORE_INFO_new_NAME();
      lVar19 = local_148;
      if (local_148 == 0) {
        _CRYPTO_free((void *)0x0);
        iVar8 = 0x2c;
        reason = 0x530;
        goto LAB_010a08a7;
      }
      break;
    }
    if (unaff_RDI->length == 2) {
      iVar6 = unaff_RDI[1].length;
    }
    else if ((*(longlong *)(unaff_RDI + 1) == 0) ||
            (iVar6 = (**(code **)(*(longlong *)(unaff_RDI + 1) + 0x10))(), iVar6 != 0)) {
      iVar6 = _BIO_ctrl((BIO *)0x0,0,(long)param_3,param_4);
    }
    else {
      iVar6 = 0;
    }
    lVar19 = local_148;
  } while (iVar6 == 0);
LAB_010a08b5:
  local_148 = lVar19;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return local_148;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


