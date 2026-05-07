// Function: FUN_00f72750
// Address: 00f72750
// Size: 543 bytes
// Class: Unknown
// String references:
//   "\n"
//   "%*s}\n"
//   "SET"
//   "SEQUENCE"
//   "%*s%s OF %s {\n"
//   "%*s%s:\n"
//   "%*s<%s>\n"
//   "ABSENT"
//   "EMPTY"


undefined4 FUN_00f72750(BIO *param_1,char *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *bp;
  uint uVar6;
  longlong *unaff_RSI;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  uVar1 = *param_3;
  if ((char)uVar1 < '\0') {
    uVar10 = *(undefined8 *)(*(longlong *)&param_1->flags + 0x30);
    uVar6 = *(uint *)&param_1->method;
  }
  else {
    uVar10 = 0;
    uVar6 = *(uint *)&param_1->method;
  }
  pcVar9 = (char *)(ulonglong)uVar6;
  if ((uVar1 & 0x40) == 0) {
    lVar7._0_4_ = param_1->init;
    lVar7._4_4_ = param_1->shutdown;
  }
  else {
    lVar7 = 0;
  }
  if ((uVar6 & 0x1000) != 0) {
    unaff_RSI = (longlong *)&stack0xffffffffffffffa0;
  }
  if ((uVar6 & 6) == 0) {
    uVar2._0_4_ = param_1->flags;
    uVar2._4_4_ = param_1->retry_reason;
    uVar4 = FUN_00f71d40(uVar2,param_2,lVar7,uVar10);
  }
  else {
    bp = (char *)param_1;
    if (lVar7 != 0) {
      pcVar9 = param_2;
      if ((uVar1 & 4) == 0) {
        bp = "";
        iVar3 = _BIO_printf((BIO *)"",param_2);
      }
      else {
        pcVar8 = "SET";
        if ((uVar6 & 2) == 0) {
          pcVar8 = "SEQUENCE";
        }
        uVar10._0_4_ = param_1->init;
        uVar10._4_4_ = param_1->shutdown;
        bp = "";
        iVar3 = _BIO_printf((BIO *)"",param_2,pcVar8,uVar10);
      }
      if (iVar3 < 1) {
        return 0;
      }
    }
    lVar7 = *unaff_RSI;
    uVar6 = (int)param_2 + 2;
    iVar3 = _OPENSSL_sk_num();
    if (iVar3 < 1) {
      pcVar9 = "EMPTY";
      if (lVar7 == 0) {
        pcVar9 = "ABSENT";
      }
      iVar3 = _BIO_printf((BIO *)"",(char *)(ulonglong)uVar6,pcVar9);
      if (iVar3 < 1) {
        return 0;
      }
    }
    else {
      iVar3 = 0;
      do {
        if ((iVar3 != 0) && (iVar5 = _BIO_puts((BIO *)bp,pcVar9), iVar5 < 1)) {
          return 0;
        }
        _OPENSSL_sk_value();
        bp = *(char **)&param_1->flags;
        pcVar9 = (char *)(ulonglong)uVar6;
        iVar5 = FUN_00f71d40(bp,pcVar9,0,0);
        if (iVar5 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar5 = _OPENSSL_sk_num();
      } while (iVar3 < iVar5);
    }
    if (((*param_3 & 2) != 0) && (iVar3 = _BIO_printf((BIO *)"",param_2), iVar3 < 1)) {
      return 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}


