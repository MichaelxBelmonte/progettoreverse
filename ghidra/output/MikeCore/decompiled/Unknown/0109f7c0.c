// Function: FUN_0109f7c0
// Address: 0109f7c0
// Size: 1053 bytes
// Class: Unknown
// String references:
//   "rb"
//   "crypto/store/loader_file.c"
//   "file:"
//   "//"
//   "localhost/"
//   "-----BEGIN "


int * FUN_0109f7c0(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  BIO *pBVar7;
  BIO *pBVar8;
  int extraout_var;
  ulonglong uVar9;
  longlong unaff_RSI;
  byte *pbVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  ushort local_10ec;
  int in_stack_ffffffffffffef28;
  BIO local_1058 [39];
  undefined1 local_59;
  byte local_50 [24];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_50[0] = 0;
  iVar1 = _strncasecmp(param_1,(char *)((longlong)&MACH_HEADER.cputype + 1),(size_t)param_3);
  uVar11 = 1;
  if (iVar1 == 0) {
    pcVar4 = (char *)(unaff_RSI + 5);
    iVar1 = _strncmp(param_1,(char *)((longlong)&MACH_HEADER.magic + 2),(size_t)param_3);
    lVar12 = 1;
    if (iVar1 != 0) {
LAB_0109f888:
      local_50[lVar12 * 0x10] = local_50[lVar12 * 0x10] | 1;
      uVar11 = lVar12 + 1;
      *(char **)(&stack0xffffffffffffffa8 + lVar12 * 0x10) = pcVar4;
      goto LAB_0109f89d;
    }
    pcVar4 = (char *)(unaff_RSI + 7);
    iVar1 = _strncasecmp(param_1,(char *)((longlong)&MACH_HEADER.cpusubtype + 2),(size_t)param_3);
    if (iVar1 == 0) {
      pcVar4 = (char *)(unaff_RSI + 0x10);
LAB_0109f885:
      lVar12 = 0;
      goto LAB_0109f888;
    }
    if (*pcVar4 == '/') goto LAB_0109f885;
    _ERR_put_error(0x201bb0c,0x6f,0x33c,param_4,in_stack_ffffffffffffef28);
LAB_0109fb98:
    piVar3 = (int *)0x0;
  }
  else {
LAB_0109f89d:
    pbVar10 = local_50;
    uVar9 = 1;
    do {
      pcVar4 = *(char **)(pbVar10 + -8);
      if (((*pbVar10 & 1) != 0) && (*pcVar4 != '/')) {
        iVar1 = 0x201bb0c;
        _ERR_put_error(0x201bb0c,0x6c,0x359,param_4,in_stack_ffffffffffffef28);
        _ERR_add_error_data(iVar1);
        if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
          return (int *)0x0;
        }
        goto LAB_0109fbd8;
      }
      iVar1 = _stat_INODE64();
      if (iVar1 < 0) {
        piVar3 = ___error();
        param_1 = "crypto/store/loader_file.c";
        param_3 = 0x35f;
        _ERR_put_error(0x201bb0c,*piVar3,0x35f,param_4,in_stack_ffffffffffffef28);
        _ERR_add_error_data((int)param_1);
        pcVar4 = (char *)0x0;
      }
      lVar2 = (long)param_3;
      if (pcVar4 != (char *)0x0) break;
      pbVar10 = pbVar10 + 0x10;
      bVar13 = uVar9 < uVar11;
      uVar9 = uVar9 + 1;
    } while (bVar13);
    if (pcVar4 == (char *)0x0) goto LAB_0109fb98;
    _ERR_clear_error();
    pBVar8 = (BIO *)&section_00000338.align;
    piVar3 = (int *)_CRYPTO_zalloc();
    if (piVar3 == (int *)0x0) {
      _ERR_put_error(0x201bb0c,0x41,0x36e,param_4,in_stack_ffffffffffffef28);
      goto LAB_0109fb98;
    }
    if ((local_10ec & 0xf000) != 0x4000) {
      ___bzero();
      _BIO_f_buffer();
      pBVar7 = _BIO_new((BIO_METHOD *)param_1);
      if (pBVar7 != (BIO *)0x0) {
        pBVar7 = _BIO_new_file(param_1,(char *)pBVar8);
        *(BIO **)(piVar3 + 4) = pBVar7;
        if (pBVar7 != (BIO *)0x0) {
          pBVar8 = _BIO_push((BIO *)param_1,pBVar8);
          *(BIO **)(piVar3 + 4) = pBVar8;
          pBVar8 = local_1058;
          pcVar4 = (char *)((longlong)&dylib_command_00000ff0.dylib.timestamp + 3);
          lVar2 = _BIO_ctrl(pBVar8,0xfff,lVar2,param_4);
          if (CONCAT44(extraout_var,lVar2) != 0 && -1 < extraout_var) {
            local_59 = 0;
            pcVar4 = _strstr((char *)pBVar8,pcVar4);
            if (pcVar4 != (char *)0x0) {
              *piVar3 = 1;
              if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
                return piVar3;
              }
              goto LAB_0109fbd8;
            }
          }
          goto LAB_0109fb9b;
        }
      }
      _BIO_free_all((BIO *)param_1);
LAB_0109fb4a:
      if (*piVar3 == 2) {
        _CRYPTO_free(param_1);
      }
      else if (*(longlong *)(piVar3 + 6) != 0) {
        (**(code **)(*(longlong *)(piVar3 + 6) + 0x18))();
        piVar3[6] = 0;
        piVar3[7] = 0;
        piVar3[8] = 0;
        piVar3[9] = 0;
      }
      _CRYPTO_free(param_1);
      goto LAB_0109fb98;
    }
    pcVar4 = _CRYPTO_strdup(param_1,(char *)&section_00000338.flags,lVar2);
    *(char **)(piVar3 + 8) = pcVar4;
    *piVar3 = 2;
    if (pcVar4 == (char *)0x0) goto LAB_0109fb4a;
    uVar5 = _OPENSSL_DIR_read();
    *(undefined8 *)(piVar3 + 0xe) = uVar5;
    piVar6 = ___error();
    iVar1 = *piVar6;
    piVar3[0x10] = iVar1;
    if (*(longlong *)(piVar3 + 0xe) == 0) {
      if (iVar1 == 0) {
        piVar3[6] = 1;
        if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
          return piVar3;
        }
        goto LAB_0109fbd8;
      }
      param_1 = "crypto/store/loader_file.c";
      _ERR_put_error(0x201bb0c,2,899,param_4,in_stack_ffffffffffffef28);
      iVar1 = piVar3[0x10];
      piVar6 = ___error();
      *piVar6 = iVar1;
      ___error();
      iVar1 = _openssl_strerror_r();
      if (iVar1 != 0) {
        _ERR_add_error_data((int)param_1);
      }
      goto LAB_0109fb4a;
    }
  }
LAB_0109fb9b:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return piVar3;
  }
LAB_0109fbd8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


