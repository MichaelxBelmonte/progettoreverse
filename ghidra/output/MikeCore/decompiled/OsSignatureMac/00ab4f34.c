// Function: FUN_00ab4f34
// Address: 00ab4f34
// Size: 727 bytes
// Class: OsSignatureMac


void FUN_00ab4f34(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0252ad80;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  this = (string *)(unaff_RDI + 6);
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  ___bzero();
  *(undefined2 *)((longlong)unaff_RDI + 0x171) = 0x101;
  *(undefined8 *)((longlong)unaff_RDI + 0x173) = 0x100000100000000;
  *(undefined8 *)((longlong)unaff_RDI + 0x17b) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x183) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 9) = *(undefined4 *)(unaff_RSI + 9);
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = *(undefined4 *)((longlong)unaff_RSI + 0x4c);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0xd) = *(undefined4 *)(unaff_RSI + 0xd);
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x11) = *(undefined1 *)(unaff_RSI + 0x11);
  if (unaff_RDI != unaff_RSI) {
    param_2 = (string *)unaff_RSI[0x13];
    FUN_008df080();
  }
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x18) = *(undefined4 *)(unaff_RSI + 0x18);
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = *(undefined4 *)((longlong)unaff_RSI + 0xc4);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RSI + 0x30);
  uVar1 = unaff_RSI[0x2e];
  unaff_RDI[0x2f] = unaff_RSI[0x2f];
  unaff_RDI[0x2e] = uVar1;
  return;
}


