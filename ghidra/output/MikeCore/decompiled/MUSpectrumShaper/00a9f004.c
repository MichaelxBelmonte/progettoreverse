// Function: FUN_00a9f004
// Address: 00a9f004
// Size: 587 bytes
// Class: MUSpectrumShaper


void FUN_00a9f004(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0252a260;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  *(undefined1 *)(unaff_RDI + 0x20) = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  this = (string *)0x100010100000001;
  *(undefined8 *)((longlong)unaff_RDI + 0x101) = 0x100010100000001;
  *(undefined1 *)((longlong)unaff_RDI + 0x111) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x109) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  *(undefined1 *)((longlong)unaff_RDI + 0x34) = *(undefined1 *)((longlong)unaff_RSI + 0x34);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0xd) = *(undefined4 *)(unaff_RSI + 0xd);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x11) = *(undefined4 *)(unaff_RSI + 0x11);
  *(undefined4 *)((longlong)unaff_RDI + 0x8c) = *(undefined4 *)((longlong)unaff_RSI + 0x8c);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x15) = *(undefined4 *)(unaff_RSI + 0x15);
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = *(undefined4 *)((longlong)unaff_RSI + 0xac);
  *(undefined1 *)(unaff_RDI + 0x16) = *(undefined1 *)(unaff_RSI + 0x16);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined2 *)(unaff_RDI + 0x22) = *(undefined2 *)(unaff_RSI + 0x22);
  uVar1 = unaff_RSI[0x20];
  unaff_RDI[0x21] = unaff_RSI[0x21];
  unaff_RDI[0x20] = uVar1;
  return;
}


