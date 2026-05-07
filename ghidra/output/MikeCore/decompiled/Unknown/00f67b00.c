// Function: FUN_00f67b00
// Address: 00f67b00
// Size: 2529 bytes
// Class: Unknown
// String references:
//   "\n"
//   "BAD RECURSION DEPTH\n"
//   "Error in encoding\n"
//   "%5ld:"
//   "d=%-2d hl=%ld l=%4ld "
//   "d=%-2d hl=%ld l=inf  "
//   "length is greater than %ld\n"
//   ":BAD OBJECT"
//   ":BAD BOOLEAN"
//   ":%u"
//   "[HEX DUMP]:"
//   "00"
//   ":BAD INTEGER"
//   ":BAD ENUMERATED"
//   ":["
//   "%02X"


undefined8 FUN_00f67b00(uint *param_1,int *param_2,char *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ASN1_OCTET_STRING *pAVar7;
  ASN1_OBJECT *pAVar8;
  ASN1_ENUMERATED *pAVar9;
  int iVar10;
  uchar **buf;
  char *bytes;
  ulonglong uVar11;
  int *piVar12;
  longlong *unaff_RSI;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int *piVar16;
  int *pclass;
  longlong lVar17;
  undefined8 uVar18;
  uint local_res8;
  long in_stack_ffffffffffffff58;
  BIO *pBVar19;
  int local_60;
  undefined1 local_5c [20];
  BIO *local_40;
  uchar **local_38;
  
  iVar10 = (int)param_1;
  uVar13 = (uint)param_3;
  if ((int)uVar13 < 0x81) {
    local_40 = (BIO *)*unaff_RSI;
    uVar5 = uVar13;
    if ((int)param_4 == 0) {
      uVar5 = 0;
    }
    if ((longlong)param_2 < 1) {
LAB_00f683b7:
      uVar18 = 1;
    }
    else {
      param_1 = (uint *)local_5c;
      piVar12 = param_2;
      pclass = param_4;
      iVar6 = _ASN1_get_object((uchar **)param_1,&local_60,param_2,param_4,in_stack_ffffffffffffff58
                              );
      iVar14 = (int)piVar12;
      local_5c._12_4_ = iVar6;
      if (-1 < (char)iVar6) {
        pBVar19 = (BIO *)((longlong)&local_40->method + (longlong)param_2);
LAB_00f67bcf:
        iVar6 = _BIO_printf((BIO *)param_1,
                            (char *)((longlong)local_40 + ((longlong)iVar10 - *unaff_RSI)));
        uVar18 = local_5c._12_8_;
        if (iVar6 < 1) {
          uVar18 = 0;
          goto LAB_00f683ea;
        }
        param_1 = (uint *)0x0;
        if (local_5c._12_4_ != 0x21) {
          iVar6 = _BIO_printf((BIO *)0x0,param_3,local_38);
          if (0 < iVar6) {
            param_1 = (uint *)(uVar18 & 0xffffffff);
            goto LAB_00f67c96;
          }
LAB_00f68451:
          uVar18 = 0;
          goto LAB_00f683ea;
        }
        iVar6 = _BIO_printf((BIO *)0x0,param_3);
        if (iVar6 < 1) goto LAB_00f68451;
        param_1 = (uint *)((longlong)&segment_command_00000020.cmd + 1);
LAB_00f67c96:
        buf = (uchar **)(ulonglong)(uint)local_5c._0_4_;
        uVar15 = (ulonglong)uVar5;
        iVar6 = FUN_00f685e0();
        iVar14 = (int)uVar15;
        if (iVar6 == 0) goto LAB_00f683de;
        if ((uVar18 & 0x20) != 0) {
          iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),iVar14);
          if (0 < iVar6) {
            if ((longlong)local_38 <= (longlong)param_2) {
              if ((local_5c._12_4_ == 0x21) && (local_38 == (uchar **)0x0)) {
                do {
                  param_1 = (uint *)(ulonglong)(uint)(((int)local_40 - (int)*unaff_RSI) + iVar10);
                  pclass = (int *)((ulonglong)param_4 & 0xffffffff);
                  iVar6 = FUN_00f67b00(param_1,(longlong)pBVar19 - (longlong)local_40,uVar13 + 1);
                  if (iVar6 == 0) {
                    uVar18 = 0;
                    goto LAB_00f683ea;
                  }
                } while ((iVar6 != 2) && (local_40 < pBVar19));
                local_38 = (uchar **)0x0;
              }
              else {
                while (local_40 < (BIO *)((longlong)local_38 + (longlong)local_40)) {
                  param_1 = (uint *)(ulonglong)(uint)(((int)local_40 - (int)*unaff_RSI) + iVar10);
                  pclass = (int *)((ulonglong)param_4 & 0xffffffff);
                  iVar6 = FUN_00f67b00(param_1,local_38,uVar13 + 1);
                  if (iVar6 == 0) goto LAB_00f6842b;
                }
              }
              goto LAB_00f68320;
            }
            _BIO_printf((BIO *)param_1,(char *)param_2);
          }
          goto LAB_00f683de;
        }
        if (local_5c._0_4_ != 0) {
          local_40 = (BIO *)((longlong)&local_40->method + (longlong)local_38);
          iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),iVar14);
          if (iVar6 < 1) goto LAB_00f6842b;
          goto LAB_00f68320;
        }
        param_1 = &switchD_00f67e14::switchdataD_00f684f0;
        switch(local_60) {
        case 1:
          bVar4 = false;
          if (local_38 != (uchar **)((longlong)&MACH_HEADER.magic + 1)) {
            iVar6 = _BIO_puts((BIO *)&switchD_00f67e14::switchdataD_00f684f0,(char *)buf);
            if (iVar6 < 1) goto LAB_00f6842b;
            bVar4 = true;
            if ((longlong)local_38 < 1) goto LAB_00f6823d;
          }
          buf = (uchar **)(ulonglong)*(byte *)&local_40->method;
          _BIO_printf((BIO *)param_1,(char *)buf);
          break;
        case 2:
          buf = local_38;
          local_5c._4_8_ = local_40;
          local_5c._12_8_ =
               _d2i_ASN1_INTEGER((ASN1_INTEGER **)&switchD_00f67e14::switchdataD_00f684f0,local_38,
                                 iVar14);
          if ((ASN1_INTEGER *)local_5c._12_8_ == (ASN1_INTEGER *)0x0) {
            iVar6 = _BIO_puts((BIO *)param_1,(char *)buf);
            bVar4 = true;
            if (iVar6 < 1) goto LAB_00f6842b;
          }
          else {
            buf = (uchar **)((longlong)&MACH_HEADER.magic + 1);
            iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),(int)uVar15
                              );
            if (iVar6 < 1) {
LAB_00f684a3:
              uVar18 = 0;
              goto LAB_00f683ea;
            }
            if (*(int *)(local_5c._12_8_ + 4) == 0x102) {
              buf = (uchar **)((longlong)&MACH_HEADER.magic + 1);
              iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),
                                 (int)uVar15);
              if (iVar6 < 1) goto LAB_00f684a3;
            }
            uVar18 = local_5c._12_8_;
            iVar6 = *(int *)local_5c._12_8_;
            if (0 < iVar6) {
              lVar17 = 0;
              do {
                buf = (uchar **)(ulonglong)(*(uchar **)(uVar18 + 8))[lVar17];
                iVar6 = _BIO_printf((BIO *)param_1,(char *)buf);
                if (iVar6 < 1) {
                  uVar18 = 0;
                  goto LAB_00f683ea;
                }
                lVar17 = lVar17 + 1;
                iVar6 = *(int *)uVar18;
              } while (lVar17 < iVar6);
            }
            bVar4 = false;
            if (iVar6 == 0) {
              buf = (uchar **)((longlong)&MACH_HEADER.magic + 2);
              iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 2),
                                 (int)uVar15);
              bVar4 = false;
              if (iVar6 < 1) {
                uVar18 = 0;
                goto LAB_00f683ea;
              }
            }
          }
          _ASN1_INTEGER_free((ASN1_INTEGER *)param_1);
          break;
        default:
          if (((longlong)local_38 < 1) || (local_res8 == 0)) goto switchD_00f67e14_caseD_1e;
          iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),iVar14);
          if (iVar6 < 1) goto LAB_00f6842b;
          bytes = (char *)(ulonglong)local_res8;
          if ((longlong)local_38 < (longlong)(int)local_res8) {
            bytes = (char *)((ulonglong)local_38 & 0xffffffff);
          }
          if (local_res8 == 0xffffffff) {
            bytes = (char *)((ulonglong)local_38 & 0xffffffff);
          }
          param_1 = (uint *)((longlong)&MACH_HEADER.cputype + 2);
          iVar6 = _BIO_dump_indent((BIO *)((longlong)&MACH_HEADER.cputype + 2),bytes,iVar14,
                                   (int)pclass);
          goto LAB_00f68303;
        case 4:
          local_5c._4_8_ = local_40;
          pAVar7 = _d2i_ASN1_OCTET_STRING
                             ((ASN1_OCTET_STRING **)&switchD_00f67e14::switchdataD_00f684f0,local_38
                              ,iVar14);
          iVar14 = (int)uVar15;
          if ((pAVar7 != (ASN1_OCTET_STRING *)0x0) && (0 < pAVar7->length)) {
            param_1 = (uint *)pAVar7->data;
            uVar11 = 0;
            do {
              bVar1 = *(byte *)((longlong)&((BIO *)param_1)->method + uVar11);
              local_5c._4_8_ = param_1;
              if (bVar1 < 0x20) {
                if ((0xd < bVar1) || ((0x2600UL >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
LAB_00f6805a:
                  if (local_res8 == 0) {
                    iVar6 = _BIO_write((BIO *)param_1,
                                       (void *)((longlong)&MACH_HEADER.cpusubtype + 3),iVar14);
                    iVar14 = (int)uVar15;
                    if (iVar6 < 1) goto LAB_00f6847b;
                    if (pAVar7->length < 1) goto LAB_00f682e7;
                    lVar17 = 0;
                    goto LAB_00f68384;
                  }
                  iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),
                                     iVar14);
                  if (iVar6 < 1) goto LAB_00f6847b;
                  uVar2 = pAVar7->length;
                  uVar3 = local_res8;
                  if ((int)uVar2 < (int)local_res8) {
                    uVar3 = uVar2;
                  }
                  if (local_res8 == 0xffffffff) {
                    uVar3 = uVar2;
                  }
                  param_1 = (uint *)((longlong)&MACH_HEADER.cputype + 2);
                  iVar6 = _BIO_dump_indent((BIO *)((longlong)&MACH_HEADER.cputype + 2),
                                           (char *)(ulonglong)uVar3,iVar14,(int)pclass);
                  if (iVar6 < 1) goto LAB_00f6847b;
                  _ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)param_1);
                  goto LAB_00f6830b;
                }
              }
              else if (0x7e < bVar1) goto LAB_00f6805a;
              uVar11 = uVar11 + 1;
            } while ((uint)pAVar7->length != uVar11);
            iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),iVar14);
            if ((0 < iVar6) &&
               (iVar6 = _BIO_write((BIO *)param_1,(void *)(ulonglong)(uint)pAVar7->length,iVar14),
               0 < iVar6)) goto LAB_00f682e7;
LAB_00f6847b:
            uVar18 = 0;
            goto LAB_00f683ea;
          }
          goto LAB_00f682e7;
        case 6:
          buf = local_38;
          local_5c._4_8_ = local_40;
          pAVar8 = _d2i_ASN1_OBJECT((ASN1_OBJECT **)&switchD_00f67e14::switchdataD_00f684f0,local_38
                                    ,iVar14);
          iVar14 = (int)uVar15;
          if (pAVar8 == (ASN1_OBJECT *)0x0) {
            iVar6 = _BIO_puts((BIO *)param_1,(char *)buf);
            if (iVar6 < 1) goto LAB_00f6842b;
            goto LAB_00f6823d;
          }
          pAVar8 = (ASN1_OBJECT *)((longlong)&MACH_HEADER.magic + 1);
          iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),iVar14);
          if (0 < iVar6) {
            _i2a_ASN1_OBJECT((BIO *)param_1,pAVar8);
            goto switchD_00f67e14_caseD_1e;
          }
          goto LAB_00f6842b;
        case 10:
          buf = local_38;
          local_5c._4_8_ = local_40;
          pAVar9 = _d2i_ASN1_ENUMERATED
                             ((ASN1_ENUMERATED **)&switchD_00f67e14::switchdataD_00f684f0,local_38,
                              iVar14);
          if (pAVar9 == (ASN1_ENUMERATED *)0x0) {
            iVar6 = _BIO_puts((BIO *)param_1,(char *)buf);
            bVar4 = true;
            if (iVar6 < 1) goto LAB_00f6842b;
          }
          else {
            buf = (uchar **)((longlong)&MACH_HEADER.magic + 1);
            iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),(int)uVar15
                              );
            if (iVar6 < 1) {
LAB_00f684b5:
              uVar18 = 0;
              goto LAB_00f683ea;
            }
            if (pAVar9->type == 0x10a) {
              buf = (uchar **)((longlong)&MACH_HEADER.magic + 1);
              iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),
                                 (int)uVar15);
              if (iVar6 < 1) goto LAB_00f684b5;
            }
            iVar6 = pAVar9->length;
            if (0 < iVar6) {
              lVar17 = 0;
              do {
                buf = (uchar **)(ulonglong)pAVar9->data[lVar17];
                iVar6 = _BIO_printf((BIO *)param_1,(char *)buf);
                if (iVar6 < 1) goto LAB_00f68451;
                lVar17 = lVar17 + 1;
                iVar6 = pAVar9->length;
              } while (lVar17 < iVar6);
            }
            bVar4 = false;
            if (iVar6 == 0) {
              buf = (uchar **)((longlong)&MACH_HEADER.magic + 2);
              iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 2),
                                 (int)uVar15);
              bVar4 = false;
              if (iVar6 < 1) {
                uVar18 = 0;
                goto LAB_00f683ea;
              }
            }
          }
          _ASN1_ENUMERATED_free((ASN1_ENUMERATED *)param_1);
          break;
        case 0xc:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x1a:
          iVar6 = _BIO_write((BIO *)&switchD_00f67e14::switchdataD_00f684f0,
                             (void *)((longlong)&MACH_HEADER.magic + 1),iVar14);
          if ((iVar6 < 1) ||
             ((0 < (longlong)local_38 &&
              (iVar6 = _BIO_write((BIO *)param_1,local_38,iVar14), iVar6 != (int)local_38))))
          goto LAB_00f6842b;
        case 0x1e:
          goto switchD_00f67e14_caseD_1e;
        }
        iVar14 = (int)uVar15;
        if (!bVar4) goto switchD_00f67e14_caseD_1e;
LAB_00f6823d:
        iVar6 = _BIO_puts((BIO *)param_1,(char *)buf);
        iVar14 = (int)uVar15;
        if (0 < iVar6) {
          if (0 < (longlong)local_38) {
            lVar17 = 0;
            param_1 = (uint *)local_40;
            do {
              buf = (uchar **)(ulonglong)*(byte *)((longlong)&local_40->method + lVar17);
              iVar6 = _BIO_printf((BIO *)param_1,(char *)buf);
              iVar14 = (int)uVar15;
              if (iVar6 < 1) goto LAB_00f6847b;
              lVar17 = lVar17 + 1;
            } while (lVar17 < (longlong)local_38);
          }
          iVar6 = _BIO_puts((BIO *)param_1,(char *)buf);
          if (0 < iVar6) goto switchD_00f67e14_caseD_1e;
        }
        goto LAB_00f6842b;
      }
LAB_00f683c7:
      _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.ncmds + 2),iVar14);
LAB_00f683de:
      uVar18 = 0;
    }
LAB_00f683ea:
    _ASN1_OBJECT_free((ASN1_OBJECT *)param_1);
    _ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)param_1);
    _ASN1_INTEGER_free((ASN1_INTEGER *)param_1);
    _ASN1_ENUMERATED_free((ASN1_ENUMERATED *)param_1);
    *unaff_RSI = (longlong)local_40;
  }
  else {
    _BIO_puts((BIO *)param_1,(char *)param_2);
    uVar18 = 0;
  }
  return uVar18;
  while (lVar17 = lVar17 + 1, lVar17 < pAVar7->length) {
LAB_00f68384:
    iVar6 = _BIO_printf((BIO *)param_1,
                        (char *)(ulonglong)
                                *(byte *)((longlong)(BIO_METHOD **)local_5c._4_8_ + lVar17));
    iVar14 = (int)uVar15;
    if (iVar6 < 1) {
      uVar18 = 0;
      goto LAB_00f683ea;
    }
  }
LAB_00f682e7:
  _ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)param_1);
switchD_00f67e14_caseD_1e:
  iVar6 = _BIO_write((BIO *)param_1,(void *)((longlong)&MACH_HEADER.magic + 1),iVar14);
LAB_00f68303:
  if (iVar6 < 1) {
LAB_00f6842b:
    uVar18 = 0;
    goto LAB_00f683ea;
  }
LAB_00f6830b:
  local_40 = (BIO *)((longlong)&local_40->method + (longlong)local_38);
  if (local_60 == 0 && local_5c._0_4_ == 0) {
    uVar18 = 2;
    goto LAB_00f683ea;
  }
LAB_00f68320:
  piVar12 = (int *)((longlong)param_2 - (longlong)local_38);
  if (piVar12 == (int *)0x0 || (longlong)param_2 < (longlong)local_38) goto LAB_00f683b7;
  param_1 = (uint *)local_5c;
  piVar16 = piVar12;
  iVar6 = _ASN1_get_object((uchar **)param_1,&local_60,piVar12,pclass,(long)pBVar19);
  iVar14 = (int)piVar16;
  local_5c._12_4_ = iVar6;
  param_2 = piVar12;
  if ((char)iVar6 < '\0') goto LAB_00f683c7;
  goto LAB_00f67bcf;
}


