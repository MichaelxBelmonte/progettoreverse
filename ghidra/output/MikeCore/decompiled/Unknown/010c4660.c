// Function: FUN_010c4660
// Address: 010c4660
// Size: 664 bytes
// Class: Unknown
// String references:
//   "\n"
//   ", "
//   "Unused"
//   "Key Compromise"
//   "CA Compromise"
//   "Affiliation Changed"
//   "Superseded"
//   "Cessation Of Operation"
//   "Certificate Hold"
//   "Privilege Withdrawn"
//   "AA Compromise"
//   "%*s%s:\n%*s"
//   "<EMPTY>\n"


void FUN_010c4660(uint param_1)

{
  int iVar1;
  char *bp;
  char *format;
  
  format = (char *)(ulonglong)param_1;
  bp = "";
  _BIO_printf((BIO *)"",format);
  iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
  if (iVar1 == 0) {
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) goto LAB_010c46ea;
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) goto LAB_010c4719;
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) goto LAB_010c4748;
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) goto LAB_010c4777;
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) goto LAB_010c47a6;
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) goto LAB_010c47d5;
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) goto LAB_010c4804;
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 == 0) goto LAB_010c4849;
  }
  else {
    _BIO_puts((BIO *)bp,format);
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) {
      _BIO_puts((BIO *)bp,format);
LAB_010c46ea:
      _BIO_puts((BIO *)bp,format);
    }
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) {
      _BIO_puts((BIO *)bp,format);
LAB_010c4719:
      _BIO_puts((BIO *)bp,format);
    }
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) {
      _BIO_puts((BIO *)bp,format);
LAB_010c4748:
      _BIO_puts((BIO *)bp,format);
    }
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) {
      _BIO_puts((BIO *)bp,format);
LAB_010c4777:
      _BIO_puts((BIO *)bp,format);
    }
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) {
      _BIO_puts((BIO *)bp,format);
LAB_010c47a6:
      _BIO_puts((BIO *)bp,format);
    }
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) {
      _BIO_puts((BIO *)bp,format);
LAB_010c47d5:
      _BIO_puts((BIO *)bp,format);
    }
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 != 0) {
      _BIO_puts((BIO *)bp,format);
LAB_010c4804:
      _BIO_puts((BIO *)bp,format);
    }
    iVar1 = _ASN1_BIT_STRING_get_bit((ASN1_BIT_STRING *)bp,(int)format);
    if (iVar1 == 0) goto LAB_010c4849;
    _BIO_puts((BIO *)bp,format);
  }
  _BIO_puts((BIO *)bp,format);
LAB_010c4849:
  _BIO_puts((BIO *)bp,format);
  return;
}


