// Function: FUN_00a9aea4
// Address: 00a9aea4
// Size: 567 bytes
// Class: MUSpectrumShaper


void FUN_00a9aea4(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0252a130;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  *(undefined2 *)(unaff_RDI + 0x1d) = 0x100;
  this = (string *)0x101000000000000;
  *(undefined8 *)((longlong)unaff_RDI + 0xea) = 0x101000000000000;
  *(undefined4 *)((longlong)unaff_RDI + 0xf5) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0xf2) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined1 *)(unaff_RDI + 6) = *(undefined1 *)(unaff_RSI + 6);
  if (unaff_RDI != unaff_RSI) {
    FUN_008df080();
    param_2 = (string *)unaff_RSI[0xb];
    FUN_008df080();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = *(undefined4 *)(unaff_RSI + 0xd);
  *(undefined4 *)((longlong)unaff_RDI + 0x6c) = *(undefined4 *)((longlong)unaff_RSI + 0x6c);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x14) = *(undefined4 *)(unaff_RSI + 0x14);
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = *(undefined4 *)((longlong)unaff_RSI + 0xa4);
  *(undefined1 *)(unaff_RDI + 0x15) = *(undefined1 *)(unaff_RSI + 0x15);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x19) = *(undefined4 *)(unaff_RSI + 0x19);
  *(undefined1 *)((longlong)unaff_RDI + 0xcc) = *(undefined1 *)((longlong)unaff_RSI + 0xcc);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
  }
  *(undefined1 *)(unaff_RDI + 0x1f) = *(undefined1 *)(unaff_RSI + 0x1f);
  uVar1 = unaff_RSI[0x1d];
  unaff_RDI[0x1e] = unaff_RSI[0x1e];
  unaff_RDI[0x1d] = uVar1;
  return;
}


