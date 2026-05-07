// Function: FUN_010c3eb0
// Address: 010c3eb0
// Size: 520 bytes
// Class: Unknown
// String references:
//   "\n"
//   "%*sOnly User Certificates\n"
//   "%*sOnly CA Certificates\n"
//   "%*sIndirect CRL\n"
//   "Only Some Reasons"
//   "%*sOnly Attribute Certificates\n"
//   "%*s<EMPTY>\n"
//   "%*sFull Name:\n"
//   "%*sRelative Name:\n%*s"
//   "%*s"


undefined8 FUN_010c3eb0(char *param_1)

{
  int iVar1;
  BIO *bp;
  char *pcVar2;
  GENERAL_NAME *gen;
  longlong *unaff_RSI;
  int iVar3;
  ulong flags;
  
  if ((int *)*unaff_RSI != (int *)0x0) {
    if (*(int *)*unaff_RSI == 0) {
      _BIO_printf((BIO *)"",param_1);
      iVar3 = _OPENSSL_sk_num();
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          gen = (GENERAL_NAME *)(ulonglong)((int)param_1 + 2);
          pcVar2 = "";
          _BIO_printf((BIO *)"",(char *)gen);
          _OPENSSL_sk_value();
          _GENERAL_NAME_print((BIO *)pcVar2,gen);
          _BIO_puts((BIO *)pcVar2,(char *)gen);
          iVar3 = iVar3 + 1;
          iVar1 = _OPENSSL_sk_num();
        } while (iVar3 < iVar1);
      }
    }
    else {
      iVar3 = (int)param_1 + 2;
      flags = 0x1ff0050;
      _BIO_printf((BIO *)"",param_1);
      bp = (BIO *)&LAB_0082031f;
      pcVar2 = (char *)0x0;
      _X509_NAME_print_ex((BIO *)&LAB_0082031f,(X509_NAME *)0x0,iVar3,flags);
      _BIO_puts(bp,pcVar2);
    }
  }
  if (0 < (int)unaff_RSI[1]) {
    _BIO_printf((BIO *)"",(char *)((ulonglong)param_1 & 0xffffffff));
  }
  if (0 < *(int *)((longlong)unaff_RSI + 0xc)) {
    _BIO_printf((BIO *)"",(char *)((ulonglong)param_1 & 0xffffffff));
  }
  if (0 < (int)unaff_RSI[3]) {
    _BIO_printf((BIO *)"",(char *)((ulonglong)param_1 & 0xffffffff));
  }
  if (unaff_RSI[2] != 0) {
    FUN_010c4660((ulonglong)param_1 & 0xffffffff);
  }
  if (0 < *(int *)((longlong)unaff_RSI + 0x1c)) {
    _BIO_printf((BIO *)"",(char *)((ulonglong)param_1 & 0xffffffff));
  }
  if ((((*unaff_RSI == 0) && ((int)unaff_RSI[1] < 1)) && (*(int *)((longlong)unaff_RSI + 0xc) < 1))
     && ((((int)unaff_RSI[3] < 1 && (unaff_RSI[2] == 0)) &&
         (*(int *)((longlong)unaff_RSI + 0x1c) < 1)))) {
    _BIO_printf((BIO *)"",(char *)((ulonglong)param_1 & 0xffffffff));
  }
  return 1;
}


