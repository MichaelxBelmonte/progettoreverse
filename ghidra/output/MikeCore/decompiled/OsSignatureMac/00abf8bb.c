// Function: FUN_00abf8bb
// Address: 00abf8bb
// Size: 739 bytes
// Class: OsSignatureMac
// String references:
//   ".framework"
//   "Versions"


bool FUN_00abf8bb(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  locale *this;
  undefined1 *unaff_RSI;
  bool bVar5;
  byte local_d0;
  byte local_a8;
  uint local_90;
  byte local_78;
  string local_60 [24];
  uint local_48 [6];
  
  if ((DAT_028a0ac8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    FUN_00abfcb8();
    ___cxa_atexit();
    ___cxa_guard_release();
  }
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 0;
  }
  bVar5 = false;
  FUN_00ac92d0();
  if (local_48[0] == 3) {
    FUN_00ac9650();
    FUN_00ac86a0();
    psVar4 = local_60;
    this = (locale *)0x0;
    FUN_00ac67c0();
    std::string::string((string *)this,psVar4);
    if ((local_48[0] & 1) != 0) {
      operator_delete(this);
    }
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(this);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(this);
    }
    std::string::string((string *)this,psVar4);
    psVar4 = (string *)_CFStringCreateWithCString();
    if ((local_a8 & 1) != 0) {
      operator_delete(this);
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    cVar1 = (*(code *)PTR__objc_msgSend_024a9998)();
    bVar5 = cVar1 != '\0';
    FUN_00aca130();
    std::string::string((string *)this,psVar4);
    if ((local_48[0] & 1) != 0) {
      operator_delete(this);
    }
    psVar4 = (string *)local_48;
    std::locale::locale(this);
    cVar2 = FUN_009f1787();
    std::locale::~locale(this);
    if (cVar2 != '\0') {
      FUN_00abfcb8();
      std::string::string((string *)this,psVar4);
      std::string::string((string *)this,psVar4);
      FUN_00ac9740();
      if ((local_90 & 1) != 0) {
        operator_delete(this);
      }
      FUN_00ac92d0();
      this = (locale *)(ulonglong)local_90;
      bVar5 = 1 < local_90 || cVar1 != '\0';
      if ((1 < local_90) && (unaff_RSI != (undefined1 *)0x0)) {
        *unaff_RSI = 1;
        bVar5 = true;
      }
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(this);
      }
      if ((local_48[0] & 1) != 0) {
        operator_delete(this);
      }
    }
    if ((local_78 & 1) != 0) {
      operator_delete(this);
    }
    FUN_00a00c58();
    if ((local_d0 & 1) != 0) {
      operator_delete(this);
    }
  }
  return bVar5;
}


