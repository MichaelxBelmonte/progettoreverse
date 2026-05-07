// Function: FUN_0106c7b0
// Address: 0106c7b0
// Size: 763 bytes
// Class: Unknown
// String references:
//   "\n"
//   "No PSS parameter restrictions\n"
//   "PSS parameter restrictions:"
//   "(INVALID PSS PARAMETERS)\n"
//   "Hash Algorithm: "
//   "sha1 (default)"
//   "Mask Algorithm: "
//   " with "
//   "INVALID"
//   "mgf1 with sha1 (default)"
//   "%s Salt Length: 0x"
//   "Minimum"
//   "14 (default)"
//   "Trailer Field: 0x"
//   "BC (default)"


bool FUN_0106c7b0(BIO *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ASN1_OBJECT *pAVar5;
  char *pcVar6;
  ASN1_INTEGER *a;
  bool bVar7;
  int unaff_ESI;
  
  uVar4 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar3 = SUB84(param_1,0);
  pcVar6 = section_00000068.segname + 8;
  iVar1 = _BIO_indent(param_1,0x80,param_3);
  if (iVar1 != 0) {
    if (unaff_ESI == 0) {
      if (param_2 == (longlong *)0x0) goto LAB_0106c887;
    }
    else {
      if (param_2 == (longlong *)0x0) {
LAB_0106c887:
        iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),pcVar6);
        return 0 < iVar1;
      }
      iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),pcVar6);
      if (iVar1 < 1) {
        return false;
      }
    }
    iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),pcVar6);
    if (0 < iVar1) {
      pAVar5 = (ASN1_OBJECT *)(section_00000068.segname + 8);
      iVar1 = _BIO_indent((BIO *)CONCAT44(uVar4,uVar3),0x80,param_3);
      if ((iVar1 != 0) &&
         (iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)pAVar5), 0 < iVar1)) {
        if (*param_2 == 0) {
          iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)pAVar5);
        }
        else {
          iVar1 = _i2a_ASN1_OBJECT((BIO *)CONCAT44(uVar4,uVar3),pAVar5);
        }
        if ((0 < iVar1) &&
           (iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)pAVar5), 0 < iVar1)) {
          pAVar5 = (ASN1_OBJECT *)(section_00000068.segname + 8);
          iVar1 = _BIO_indent((BIO *)CONCAT44(uVar4,uVar3),0x80,param_3);
          if (iVar1 != 0) {
            iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)pAVar5);
            if (0 < iVar1) {
              if (param_2[1] == 0) {
LAB_0106c992:
                iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)pAVar5);
              }
              else {
                iVar1 = _i2a_ASN1_OBJECT((BIO *)CONCAT44(uVar4,uVar3),pAVar5);
                if ((iVar1 < 1) ||
                   (iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)pAVar5), iVar1 < 1))
                goto LAB_0106c966;
                iVar1 = _OBJ_obj2nid((ASN1_OBJECT *)CONCAT44(uVar4,uVar3));
                if ((iVar1 != 0x38f) || (lVar2 = _ASN1_TYPE_unpack_sequence(), lVar2 == 0))
                goto LAB_0106c992;
                iVar1 = _i2a_ASN1_OBJECT((BIO *)CONCAT44(uVar4,uVar3),pAVar5);
              }
              bVar7 = false;
              if (iVar1 < 1) goto LAB_0106c969;
              _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)pAVar5);
              iVar1 = _BIO_indent((BIO *)CONCAT44(uVar4,uVar3),0x80,param_3);
              if (iVar1 != 0) {
                pcVar6 = "Minimum";
                if (unaff_ESI == 0) {
                  pcVar6 = "";
                }
                bVar7 = false;
                iVar1 = _BIO_printf((BIO *)CONCAT44(uVar4,uVar3),pcVar6);
                if (0 < iVar1) {
                  if (param_2[2] == 0) {
                    iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),pcVar6);
                  }
                  else {
                    iVar1 = _i2a_ASN1_INTEGER((BIO *)CONCAT44(uVar4,uVar3),(ASN1_INTEGER *)pcVar6);
                  }
                  if (0 < iVar1) {
                    _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),pcVar6);
                    a = (ASN1_INTEGER *)(section_00000068.segname + 8);
                    iVar1 = _BIO_indent((BIO *)CONCAT44(uVar4,uVar3),0x80,param_3);
                    if ((iVar1 != 0) &&
                       (iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)a), bVar7 = false,
                       0 < iVar1)) {
                      if (param_2[3] == 0) {
                        iVar1 = _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)a);
                      }
                      else {
                        iVar1 = _i2a_ASN1_INTEGER((BIO *)CONCAT44(uVar4,uVar3),a);
                      }
                      if (0 < iVar1) {
                        _BIO_puts((BIO *)CONCAT44(uVar4,uVar3),(char *)a);
                        bVar7 = true;
                      }
                    }
                  }
                }
                goto LAB_0106c969;
              }
            }
            bVar7 = false;
            goto LAB_0106c969;
          }
        }
      }
    }
  }
LAB_0106c966:
  bVar7 = false;
LAB_0106c969:
  _X509_ALGOR_free((X509_ALGOR *)CONCAT44(uVar4,uVar3));
  return bVar7;
}


