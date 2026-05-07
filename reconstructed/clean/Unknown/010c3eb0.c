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

uint64_t FUN_010c3eb0(char *param_1)

{
  int iVar1;
  BIO *bp;
  char *pcVar2;
  GENERAL_NAME *gen;
  int64_t *arg1;
  int iVar3;
  ulong flags;
  
  if ((int *)*arg1 != (int *)0x0) {
    if (*(int *)*arg1 == 0) {
      _BIO_printf((BIO *)"",param_1);
      iVar3 = _OPENSSL_sk_num();
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          gen = (GENERAL_NAME *)(uint64_t)((int)param_1 + 2);
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
  if (0 < (int)arg1[1]) {
    _BIO_printf((BIO *)"",(char *)((uint64_t)param_1 & 0xffffffff));
  }
  if (0 < *(int *)((int64_t)arg1 + 0xc)) {
    _BIO_printf((BIO *)"",(char *)((uint64_t)param_1 & 0xffffffff));
  }
  if (0 < (int)arg1[3]) {
    _BIO_printf((BIO *)"",(char *)((uint64_t)param_1 & 0xffffffff));
  }
  if (arg1[2] != 0) {
    FUN_010c4660((uint64_t)param_1 & 0xffffffff);
  }
  if (0 < *(int *)((int64_t)arg1 + 0x1c)) {
    _BIO_printf((BIO *)"",(char *)((uint64_t)param_1 & 0xffffffff));
  }
  if ((((*arg1 == 0) && ((int)arg1[1] < 1)) && (*(int *)((int64_t)arg1 + 0xc) < 1))
     && ((((int)arg1[3] < 1 && (arg1[2] == 0)) &&
         (*(int *)((int64_t)arg1 + 0x1c) < 1)))) {
    _BIO_printf((BIO *)"",(char *)((uint64_t)param_1 & 0xffffffff));
  }
  return 1;
}

