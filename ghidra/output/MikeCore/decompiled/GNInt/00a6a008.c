// Function: FUN_00a6a008
// Address: 00a6a008
// Size: 727 bytes
// Class: GNInt


void FUN_00a6a008(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_02528c60;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  this = (string *)0x0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x23] = 0;
  *(undefined2 *)(unaff_RDI + 0x26) = 0x100;
  *(undefined8 *)((longlong)unaff_RDI + 0x132) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x13a) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x13b) = 0x101;
  *(undefined1 *)((longlong)unaff_RDI + 0x13d) = 1;
  *(undefined8 *)((longlong)unaff_RDI + 0x13e) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x146) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  *(undefined1 *)((longlong)unaff_RDI + 0x34) = *(undefined1 *)((longlong)unaff_RSI + 0x34);
  if (unaff_RDI != unaff_RSI) {
    FUN_008df080();
    param_2 = (string *)unaff_RSI[0xb];
    FUN_008df080();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = *(undefined4 *)(unaff_RSI + 0xd);
  *(undefined4 *)((longlong)unaff_RDI + 0x6c) = *(undefined4 *)((longlong)unaff_RSI + 0x6c);
  *(undefined4 *)(unaff_RDI + 0xe) = *(undefined4 *)(unaff_RSI + 0xe);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x15) = *(undefined1 *)(unaff_RSI + 0x15);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    param_2 = (string *)unaff_RSI[0x1a];
    FUN_008df080();
  }
  *(undefined4 *)(unaff_RDI + 0x1c) = *(undefined4 *)(unaff_RSI + 0x1c);
  *(undefined4 *)((longlong)unaff_RDI + 0xe4) = *(undefined4 *)((longlong)unaff_RSI + 0xe4);
  *(undefined1 *)(unaff_RDI + 0x1d) = *(undefined1 *)(unaff_RSI + 0x1d);
  *(undefined4 *)((longlong)unaff_RDI + 0xec) = *(undefined4 *)((longlong)unaff_RSI + 0xec);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x21) = *(undefined4 *)(unaff_RSI + 0x21);
  *(undefined4 *)((longlong)unaff_RDI + 0x10c) = *(undefined4 *)((longlong)unaff_RSI + 0x10c);
  *(undefined1 *)(unaff_RDI + 0x22) = *(undefined1 *)(unaff_RSI + 0x22);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
  }
  unaff_RDI[0x28] = unaff_RSI[0x28];
  uVar1 = unaff_RSI[0x26];
  unaff_RDI[0x27] = unaff_RSI[0x27];
  unaff_RDI[0x26] = uVar1;
  return;
}


