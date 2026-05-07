// Function: FUN_010c3820
// Address: 010c3820
// Size: 583 bytes
// Class: Unknown
// String references:
//   "\n"
//   "%*sFull Name:\n"
//   "%*sRelative Name:\n%*s"
//   "%*s"
//   "Reasons"
//   "%*sCRL Issuer:\n"


undefined8 FUN_010c3820(BIO *param_1,BIO *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  char *bp;
  char *buf;
  GENERAL_NAME *gen;
  uint indent;
  ulong flags;
  
  bp = (char *)param_1;
  iVar1 = _OPENSSL_sk_num();
  if (0 < iVar1) {
    uVar2 = (int)param_1 + 2;
    iVar1 = 0;
    do {
      _BIO_puts((BIO *)bp,(char *)param_2);
      puVar5 = (undefined8 *)_OPENSSL_sk_value();
      if ((int *)*puVar5 != (int *)0x0) {
        if (*(int *)*puVar5 == 0) {
          bp = "";
          _BIO_printf((BIO *)"",(char *)param_1);
          iVar3 = _OPENSSL_sk_num();
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              gen = (GENERAL_NAME *)(ulonglong)uVar2;
              bp = "";
              _BIO_printf((BIO *)"",(char *)gen);
              _OPENSSL_sk_value();
              _GENERAL_NAME_print((BIO *)bp,gen);
              _BIO_puts((BIO *)bp,(char *)gen);
              iVar3 = iVar3 + 1;
              iVar4 = _OPENSSL_sk_num();
            } while (iVar3 < iVar4);
          }
        }
        else {
          flags = 0x1ff0050;
          indent = uVar2;
          _BIO_printf((BIO *)"",(char *)param_1);
          bp = &LAB_0082031f;
          buf = (char *)0x0;
          _X509_NAME_print_ex((BIO *)&LAB_0082031f,(X509_NAME *)0x0,indent,flags);
          _BIO_puts((BIO *)bp,buf);
        }
      }
      param_2 = (BIO *)puVar5[1];
      if (param_2 != (BIO *)0x0) {
        bp = (char *)param_1;
        FUN_010c4660();
      }
      if (puVar5[2] != 0) {
        bp = "";
        param_2 = param_1;
        _BIO_printf((BIO *)"",(char *)param_1);
        iVar3 = _OPENSSL_sk_num();
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            param_2 = (BIO *)(ulonglong)uVar2;
            bp = "";
            _BIO_printf((BIO *)"",(char *)param_2);
            _OPENSSL_sk_value();
            _GENERAL_NAME_print((BIO *)bp,(GENERAL_NAME *)param_2);
            _BIO_puts((BIO *)bp,(char *)param_2);
            iVar3 = iVar3 + 1;
            iVar4 = _OPENSSL_sk_num();
          } while (iVar3 < iVar4);
        }
      }
      iVar1 = iVar1 + 1;
      iVar3 = _OPENSSL_sk_num();
    } while (iVar1 < iVar3);
  }
  return 1;
}


