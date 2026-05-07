// Function: FUN_00a9cfcc
// Address: 00a9cfcc
// Size: 699 bytes
// Class: GNUni


void FUN_00a9cfcc(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar2;
  
  *unaff_RDI = &DAT_0252a1c8;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  this = (string *)(unaff_RDI + 0x23);
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  *(undefined1 *)(unaff_RDI + 0x26) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x131) = 1;
  *(undefined8 *)((longlong)unaff_RDI + 0x132) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x13a) = 0;
  *(undefined **)((longlong)unaff_RDI + 0x13e) = &DAT_01000101;
  *(undefined4 *)((longlong)unaff_RDI + 0x146) = 0x101;
  *(undefined1 *)((longlong)unaff_RDI + 0x14a) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined1 *)(unaff_RDI + 6) = *(undefined1 *)(unaff_RSI + 6);
  *(undefined1 *)((longlong)unaff_RDI + 0x31) = *(undefined1 *)((longlong)unaff_RSI + 0x31);
  *(undefined1 *)((longlong)unaff_RDI + 0x32) = *(undefined1 *)((longlong)unaff_RSI + 0x32);
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = *(undefined4 *)((longlong)unaff_RSI + 0x34);
  *(undefined1 *)(unaff_RDI + 7) = *(undefined1 *)(unaff_RSI + 7);
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = *(undefined4 *)((longlong)unaff_RSI + 0x3c);
  *(undefined1 *)(unaff_RDI + 8) = *(undefined1 *)(unaff_RSI + 8);
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = *(undefined4 *)((longlong)unaff_RSI + 0x44);
  *(undefined1 *)(unaff_RDI + 9) = *(undefined1 *)(unaff_RSI + 9);
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = *(undefined4 *)((longlong)unaff_RSI + 0x4c);
  *(undefined1 *)(unaff_RDI + 10) = *(undefined1 *)(unaff_RSI + 10);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x11) = *(undefined4 *)(unaff_RSI + 0x11);
  std::string::operator=(this,param_2);
  uVar1 = unaff_RSI[0x16];
  unaff_RDI[0x15] = unaff_RSI[0x15];
  unaff_RDI[0x16] = uVar1;
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  uVar2 = std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    uVar2 = FUN_009bc850(uVar2,unaff_RSI[0x21]);
    FUN_009bc850(uVar2,unaff_RSI[0x24]);
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x147) = *(undefined4 *)((longlong)unaff_RSI + 0x147);
  unaff_RDI[0x28] = unaff_RSI[0x28];
  uVar1 = unaff_RSI[0x26];
  unaff_RDI[0x27] = unaff_RSI[0x27];
  unaff_RDI[0x26] = uVar1;
  return;
}


