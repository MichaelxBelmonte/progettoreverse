// Function: FUN_00a6f16a
// Address: 00a6f16a
// Size: 964 bytes
// Class: GNUni


void FUN_00a6f16a(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar2;
  
  uVar1 = 0;
  *unaff_RDI = &DAT_02528e28;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  ___bzero();
  *(undefined1 *)((longlong)unaff_RDI + 0x1c1) = 1;
  *(undefined8 *)((longlong)unaff_RDI + 0x1c2) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c9) = 0;
  this = (string *)CONCAT62((int6)((ulonglong)uVar1 >> 0x10),0x101);
  *(undefined2 *)((longlong)unaff_RDI + 0x1cd) = 0x101;
  *(undefined4 *)((longlong)unaff_RDI + 0x1cf) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x1d3) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x1d5) = 1;
  *(undefined8 *)((longlong)unaff_RDI + 0x1d6) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x1de) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = *(undefined4 *)((longlong)unaff_RSI + 0x34);
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 10) = *(undefined1 *)(unaff_RSI + 10);
  uVar1 = *(undefined8 *)((longlong)unaff_RSI + 0x5c);
  *(undefined8 *)((longlong)unaff_RDI + 0x54) = *(undefined8 *)((longlong)unaff_RSI + 0x54);
  *(undefined8 *)((longlong)unaff_RDI + 0x5c) = uVar1;
  *(undefined4 *)((longlong)unaff_RDI + 100) = *(undefined4 *)((longlong)unaff_RSI + 100);
  *(undefined1 *)(unaff_RDI + 0xd) = *(undefined1 *)(unaff_RSI + 0xd);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x14) = *(undefined4 *)(unaff_RSI + 0x14);
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = *(undefined4 *)((longlong)unaff_RSI + 0xa4);
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x18) = *(undefined1 *)(unaff_RSI + 0x18);
  *(undefined1 *)((longlong)unaff_RDI + 0xc1) = *(undefined1 *)((longlong)unaff_RSI + 0xc1);
  uVar2 = std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x1c) = *(undefined1 *)(unaff_RSI + 0x1c);
  if (unaff_RDI != unaff_RSI) {
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x1e]);
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x21]);
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x24]);
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x27]);
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x2a]);
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x2d]);
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x30]);
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x33]);
    FUN_009bc850(uVar2,unaff_RSI[0x36]);
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1d7) = *(undefined8 *)((longlong)unaff_RSI + 0x1d7);
  unaff_RDI[0x3a] = unaff_RSI[0x3a];
  uVar1 = unaff_RSI[0x38];
  unaff_RDI[0x39] = unaff_RSI[0x39];
  unaff_RDI[0x38] = uVar1;
  return;
}


