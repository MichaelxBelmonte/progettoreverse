// Function: FUN_00f69bc0
// Address: 00f69bc0
// Size: 1952 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/asn_mime.c"


BIO * FUN_00f69bc0(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  BIO *pBVar4;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  int extraout_var_04;
  int extraout_var_05;
  int extraout_var_06;
  BIO *bp;
  BIO *pBVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong local_450;
  byte local_438 [1024];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  pBVar4 = (BIO *)_OPENSSL_sk_new();
  bp = (BIO *)0x0;
  pBVar5 = bp;
  if (pBVar4 != (BIO *)0x0) {
    local_450 = 0;
    do {
      pbVar8 = local_438;
      iVar2 = _BIO_gets(bp,(char *)&segment_command_000003d8.fileoff,param_3);
      pBVar5 = pBVar4;
      if (iVar2 < 1) break;
      if (local_450 == 0) {
LAB_00f69c8c:
        bp = (BIO *)((longlong)&MACH_HEADER.magic + 1);
      }
      else {
        iVar2 = _ossl_ctype_check();
        bp = (BIO *)((longlong)&MACH_HEADER.magic + 3);
        if (iVar2 == 0) goto LAB_00f69c8c;
      }
      lVar6 = 0;
LAB_00f69cb1:
      while( true ) {
        bVar1 = local_438[lVar6];
        iVar2 = (int)bp;
        if (((ulonglong)bVar1 < 0xe) && ((0x2401UL >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) break;
        if (iVar2 - 1U < 6) {
          pbVar9 = local_438 + lVar6;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(iVar2) {
          case 2:
            bp = (BIO *)((longlong)&MACH_HEADER.magic + 1);
            if (bVar1 != 0x3a) goto LAB_00f69cad;
            *pbVar9 = 0;
            bVar1 = *pbVar8;
            while (bVar1 != 0) {
              pbVar9 = pbVar8 + 1;
              if (bVar1 == 0x22) {
                if (*pbVar9 != 0) {
                  sVar3 = _strlen((char *)bp);
                  lVar7 = CONCAT44(extraout_var,sVar3);
                  if (lVar7 != 0 && -1 < extraout_var) {
LAB_00f69ed7:
                    pbVar8 = pbVar9 + lVar7 + -1;
                    lVar7 = lVar7 + -2;
                    goto LAB_00f69ef0;
                  }
                }
                break;
              }
              iVar2 = _ossl_ctype_check();
              if (iVar2 == 0) {
                sVar3 = _strlen((char *)bp);
                lVar7 = CONCAT44(extraout_var_01,sVar3);
                pbVar9 = pbVar8;
                if (lVar7 != 0 && -1 < extraout_var_01) goto LAB_00f69ed7;
                break;
              }
              pbVar8 = pbVar9;
              bVar1 = *pbVar9;
            }
            goto LAB_00f69fb5;
          case 3:
            if (bVar1 != 0x28) {
              bp = (BIO *)((longlong)&MACH_HEADER.magic + 2);
              if (bVar1 != 0x3b) goto LAB_00f69cad;
              *pbVar9 = 0;
              bVar1 = *pbVar8;
              while (bVar1 != 0) {
                pbVar9 = pbVar8 + 1;
                if (bVar1 == 0x22) {
                  if (*pbVar9 != 0) {
                    sVar3 = _strlen((char *)bp);
                    lVar7 = CONCAT44(extraout_var_03,sVar3);
                    if (lVar7 != 0 && -1 < extraout_var_03) {
LAB_00f6a03a:
                      pbVar8 = pbVar9 + lVar7 + -1;
                      lVar7 = lVar7 + -2;
                      goto LAB_00f6a050;
                    }
                  }
                  break;
                }
                iVar2 = _ossl_ctype_check();
                if (iVar2 == 0) {
                  sVar3 = _strlen((char *)bp);
                  lVar7 = CONCAT44(extraout_var_04,sVar3);
                  pbVar9 = pbVar8;
                  if (lVar7 != 0 && -1 < extraout_var_04) goto LAB_00f6a03a;
                  break;
                }
                pbVar8 = pbVar9;
                bVar1 = *pbVar9;
              }
              goto LAB_00f6a16e;
            }
            bp = (BIO *)((longlong)&MACH_HEADER.cputype + 2);
            lVar6 = lVar6 + 1;
            break;
          case 4:
            bp = (BIO *)((longlong)&MACH_HEADER.magic + 3);
            if (bVar1 != 0x3d) goto LAB_00f69cad;
            *pbVar9 = 0;
            bVar1 = *pbVar8;
            while (bVar1 != 0) {
              pbVar9 = pbVar8 + 1;
              if (bVar1 == 0x22) {
                if (*pbVar9 != 0) {
                  sVar3 = _strlen((char *)bp);
                  lVar7 = CONCAT44(extraout_var_00,sVar3);
                  if (lVar7 != 0 && -1 < extraout_var_00) {
LAB_00f69f48:
                    pbVar8 = pbVar9 + lVar7 + -1;
                    lVar7 = lVar7 + -2;
                    goto LAB_00f69f60;
                  }
                }
                break;
              }
              iVar2 = _ossl_ctype_check();
              if (iVar2 == 0) {
                sVar3 = _strlen((char *)bp);
                lVar7 = CONCAT44(extraout_var_02,sVar3);
                pbVar9 = pbVar8;
                if (lVar7 != 0 && -1 < extraout_var_02) goto LAB_00f69f48;
                break;
              }
              pbVar8 = pbVar9;
              bVar1 = *pbVar9;
            }
            goto LAB_00f69fe9;
          }
        }
        else {
LAB_00f69cad:
          lVar6 = lVar6 + 1;
        }
      }
      if (iVar2 == 2) {
        do {
          pbVar9 = pbVar8;
          pbVar8 = pbVar9 + 1;
          if (*pbVar9 == 0) goto LAB_00f6a3a6;
          if (*pbVar9 == 0x22) {
            pbVar9 = pbVar8;
            if (*pbVar8 == 0) goto LAB_00f6a3a6;
            break;
          }
          iVar2 = _ossl_ctype_check();
        } while (iVar2 != 0);
        sVar3 = _strlen((char *)bp);
        lVar7 = CONCAT44(extraout_var_06,sVar3);
        if (lVar7 != 0 && -1 < extraout_var_06) {
          pbVar8 = pbVar9 + lVar7 + -1;
          lVar7 = lVar7 + -2;
          do {
            if (*pbVar8 == 0x22) {
              if (lVar7 != 0) {
                *pbVar8 = 0;
              }
              break;
            }
            iVar2 = _ossl_ctype_check();
            if (iVar2 == 0) break;
            *pbVar8 = 0;
            pbVar8 = pbVar8 + -1;
            lVar7 = lVar7 + -1;
          } while (pbVar9 <= pbVar8);
        }
LAB_00f6a3a6:
        local_450 = FUN_00f6a840();
        if (local_450 != 0) {
          iVar2 = _OPENSSL_sk_push();
          if (iVar2 != 0) goto LAB_00f69c3a;
LAB_00f6a461:
          _CRYPTO_free(bp);
          _CRYPTO_free(bp);
          if (*(longlong *)(local_450 + 0x10) != 0) {
            _OPENSSL_sk_pop_free();
          }
          _CRYPTO_free(bp);
        }
LAB_00f6a4b2:
        _OPENSSL_sk_pop_free();
        if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
          return (BIO *)0x0;
        }
        goto LAB_00f6a4db;
      }
      if (iVar2 == 4) {
        do {
          pbVar9 = pbVar8;
          pbVar8 = pbVar9 + 1;
          if (*pbVar9 == 0) goto LAB_00f6a326;
          if (*pbVar9 == 0x22) {
            pbVar9 = pbVar8;
            if (*pbVar8 == 0) goto LAB_00f6a326;
            break;
          }
          iVar2 = _ossl_ctype_check();
        } while (iVar2 != 0);
        sVar3 = _strlen((char *)bp);
        lVar7 = CONCAT44(extraout_var_05,sVar3);
        if (lVar7 != 0 && -1 < extraout_var_05) {
          pbVar8 = pbVar9 + lVar7 + -1;
          lVar7 = lVar7 + -2;
          do {
            if (*pbVar8 == 0x22) {
              if (lVar7 != 0) {
                *pbVar8 = 0;
              }
              break;
            }
            iVar2 = _ossl_ctype_check();
            if (iVar2 == 0) break;
            *pbVar8 = 0;
            pbVar8 = pbVar8 + -1;
            lVar7 = lVar7 + -1;
          } while (pbVar9 <= pbVar8);
        }
LAB_00f6a326:
        FUN_00f6a990();
      }
LAB_00f69c3a:
    } while (lVar6 != 0);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return pBVar5;
  }
LAB_00f6a4db:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
  while( true ) {
    iVar2 = _ossl_ctype_check();
    if (iVar2 == 0) break;
    *pbVar8 = 0;
    pbVar8 = pbVar8 + -1;
    lVar7 = lVar7 + -1;
    if (pbVar8 < pbVar9) break;
LAB_00f69f60:
    if (*pbVar8 == 0x22) {
      if (lVar7 != 0) {
        *pbVar8 = 0;
      }
      break;
    }
  }
LAB_00f69fe9:
  pbVar8 = local_438 + lVar6 + 1;
  bp = (BIO *)&MACH_HEADER.cputype;
  lVar6 = lVar6 + 1;
  goto LAB_00f69cb1;
  while( true ) {
    iVar2 = _ossl_ctype_check();
    if (iVar2 == 0) break;
    *pbVar8 = 0;
    pbVar8 = pbVar8 + -1;
    lVar7 = lVar7 + -1;
    if (pbVar8 < pbVar9) break;
LAB_00f6a050:
    if (*pbVar8 == 0x22) {
      if (lVar7 != 0) {
        *pbVar8 = 0;
      }
      break;
    }
  }
LAB_00f6a16e:
  local_450 = FUN_00f6a840();
  if (local_450 == 0) goto LAB_00f6a4b2;
  iVar2 = _OPENSSL_sk_push();
  if (iVar2 == 0) goto LAB_00f6a461;
  pbVar8 = local_438 + lVar6 + 1;
  bp = (BIO *)((longlong)&MACH_HEADER.magic + 3);
  lVar6 = lVar6 + 1;
  goto LAB_00f69cb1;
  while( true ) {
    iVar2 = _ossl_ctype_check();
    if (iVar2 == 0) break;
    *pbVar8 = 0;
    pbVar8 = pbVar8 + -1;
    lVar7 = lVar7 + -1;
    if (pbVar8 < pbVar9) break;
LAB_00f69ef0:
    if (*pbVar8 == 0x22) {
      if (lVar7 != 0) {
        *pbVar8 = 0;
      }
      break;
    }
  }
LAB_00f69fb5:
  pbVar8 = local_438 + lVar6 + 1;
  bp = (BIO *)((longlong)&MACH_HEADER.magic + 2);
  lVar6 = lVar6 + 1;
  goto LAB_00f69cb1;
}


