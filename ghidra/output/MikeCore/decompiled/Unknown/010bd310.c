// Function: FUN_010bd310
// Address: 010bd310
// Size: 1283 bytes
// Class: Unknown
// String references:
//   " ("
//   "\n"
//   "%*sadmissionAuthority:\n"
//   "%*s  "
//   "%*sEntry %0d:\n"
//   "%*s  admissionAuthority:\n"
//   "%*s    "
//   "%*s  Profession Info Entry %0d:\n"
//   "%*s    registrationNumber: "
//   "%*s    Info Entries:\n"
//   "%*s      "
//   "%*s    Profession OIDs:\n"
//   "%*s      %s%s%s%s\n"


undefined8 FUN_010bd310(uint param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ASN1_OBJECT *pAVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  GENERAL_NAME *gen;
  ASN1_STRING *pAVar10;
  uint uVar11;
  ASN1_STRING *format;
  longlong *unaff_RSI;
  int no_name;
  uint uVar12;
  
  format = (ASN1_STRING *)(ulonglong)param_1;
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*unaff_RSI == 0) {
LAB_010bd3bb:
    iVar3 = _OPENSSL_sk_num();
    if (iVar3 < 1) {
      uVar7 = 1;
      lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
      goto joined_r0x010bd80c;
    }
    uVar11 = 0;
    do {
      plVar5 = (longlong *)_OPENSSL_sk_value();
      uVar11 = uVar11 + 1;
      iVar3 = _BIO_printf((BIO *)"",(char *)format,(ulonglong)uVar11);
      uVar7 = 0xffffffff;
      if (iVar3 < 1) break;
      if (*plVar5 != 0) {
        iVar3 = _BIO_printf((BIO *)"",(char *)format);
        if (iVar3 < 1) goto LAB_010bd7d0;
        pcVar8 = "";
        pAVar10 = format;
        iVar3 = _BIO_printf((BIO *)"",(char *)format);
        if (((iVar3 < 1) ||
            (iVar3 = _GENERAL_NAME_print((BIO *)pcVar8,(GENERAL_NAME *)pAVar10), iVar3 < 1)) ||
           (iVar3 = _BIO_printf((BIO *)pcVar8,(char *)pAVar10), iVar3 < 1)) goto LAB_010bd7d0;
      }
      if ((plVar5[1] != 0) && (iVar3 = FUN_010bdaf0(), iVar3 < 1)) goto LAB_010bd7d0;
      iVar3 = _OPENSSL_sk_num();
      if (0 < iVar3) {
        uVar12 = 0;
        do {
          plVar5 = (longlong *)_OPENSSL_sk_value();
          uVar12 = uVar12 + 1;
          pcVar8 = (char *)(ulonglong)uVar12;
          iVar3 = _BIO_printf((BIO *)"",(char *)format);
          if (iVar3 < 1) goto LAB_010bd7d0;
          if (plVar5[3] != 0) {
            pcVar9 = "";
            pAVar10 = format;
            iVar3 = _BIO_printf((BIO *)"",(char *)format);
            if (((iVar3 < 1) || (iVar3 = _ASN1_STRING_print((BIO *)pcVar9,pAVar10), iVar3 < 1)) ||
               (iVar3 = _BIO_printf((BIO *)pcVar9,(char *)pAVar10), iVar3 < 1)) goto LAB_010bd7d0;
          }
          if ((*plVar5 != 0) && (iVar3 = FUN_010bdaf0(), iVar3 < 1)) goto LAB_010bd7d0;
          if (plVar5[1] != 0) {
            iVar3 = _BIO_printf((BIO *)"",(char *)format);
            if (iVar3 < 1) goto LAB_010bd7d0;
            iVar3 = _OPENSSL_sk_num();
            if (0 < iVar3) {
              iVar3 = 0;
              do {
                _OPENSSL_sk_value();
                pcVar9 = "";
                pAVar10 = format;
                iVar4 = _BIO_printf((BIO *)"",(char *)format);
                if (((iVar4 < 1) || (iVar4 = _ASN1_STRING_print((BIO *)pcVar9,pAVar10), iVar4 < 1))
                   || (iVar4 = _BIO_printf((BIO *)pcVar9,(char *)pAVar10), iVar4 < 1))
                goto LAB_010bd7d0;
                iVar3 = iVar3 + 1;
                iVar4 = _OPENSSL_sk_num();
              } while (iVar3 < iVar4);
            }
          }
          if (plVar5[2] != 0) {
            pcVar9 = "";
            iVar3 = _BIO_printf((BIO *)"",(char *)format);
            if (iVar3 < 1) goto LAB_010bd7d0;
            iVar3 = _OPENSSL_sk_num();
            if (0 < iVar3) {
              iVar3 = 0;
              do {
                no_name = (int)param_4;
                iVar4 = _OPENSSL_sk_value();
                _OBJ_obj2nid((ASN1_OBJECT *)pcVar9);
                pAVar6 = (ASN1_OBJECT *)_OBJ_nid2ln((int)pcVar9);
                _OBJ_obj2txt((char *)((longlong)&MACH_HEADER.magic + 1),iVar4,(ASN1_OBJECT *)pcVar8,
                             no_name);
                pcVar9 = "";
                pcVar8 = (char *)pAVar6;
                if (pAVar6 == (ASN1_OBJECT *)0x0) {
                  pcVar8 = "";
                }
                param_4 = " (";
                if (pAVar6 == (ASN1_OBJECT *)0x0) {
                  param_4 = "";
                }
                iVar4 = _BIO_printf((BIO *)"",(char *)format);
                if (iVar4 < 1) goto LAB_010bd7d0;
                iVar3 = iVar3 + 1;
                iVar4 = _OPENSSL_sk_num();
              } while (iVar3 < iVar4);
            }
          }
          iVar3 = _OPENSSL_sk_num();
        } while ((int)uVar12 < iVar3);
      }
      iVar3 = _OPENSSL_sk_num();
      uVar7 = 1;
    } while ((int)uVar11 < iVar3);
  }
  else {
    iVar3 = _BIO_printf((BIO *)"",(char *)format);
    uVar7 = 0xffffffff;
    if (0 < iVar3) {
      pcVar8 = "";
      gen = (GENERAL_NAME *)(ulonglong)param_1;
      iVar3 = _BIO_printf((BIO *)"",(char *)gen);
      if ((iVar3 < 1) || (iVar3 = _GENERAL_NAME_print((BIO *)pcVar8,gen), iVar3 < 1)) {
LAB_010bd7d0:
        uVar7 = 0xffffffff;
      }
      else {
        iVar3 = _BIO_printf((BIO *)pcVar8,(char *)gen);
        uVar7 = 0xffffffff;
        if (0 < iVar3) goto LAB_010bd3bb;
      }
    }
  }
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
joined_r0x010bd80c:
  if (lVar2 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}


