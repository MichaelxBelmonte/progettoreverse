// Function: FUN_00a98ec4
// Address: 00a98ec4
// Size: 987 bytes
// Class: MUElementAnalyzer


void FUN_00a98ec4(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0252a098;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x2b] = 0;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  *(undefined1 *)(unaff_RDI + 0x37) = 0;
  unaff_RDI[0x36] = 0;
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x34] = 0;
  unaff_RDI[0x33] = 0;
  unaff_RDI[0x32] = 0;
  unaff_RDI[0x31] = 0;
  unaff_RDI[0x30] = 0;
  unaff_RDI[0x2f] = 0;
  unaff_RDI[0x2e] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1b9) = 0x100010001000001;
  *(undefined8 *)((longlong)unaff_RDI + 0x1c1) = 0x10100010001;
  this = (string *)(unaff_RDI + 0x1d);
  *(undefined4 *)((longlong)unaff_RDI + 0x1c9) = 0x100;
  *(undefined1 *)((longlong)unaff_RDI + 0x1cd) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x12) = *(undefined4 *)(unaff_RSI + 0x12);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x19) = *(undefined4 *)(unaff_RSI + 0x19);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x29) = *(undefined4 *)(unaff_RSI + 0x29);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x2d) = *(undefined4 *)(unaff_RSI + 0x2d);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1c6) = *(undefined8 *)((longlong)unaff_RSI + 0x1c6);
  uVar1 = unaff_RSI[0x37];
  unaff_RDI[0x38] = unaff_RSI[0x38];
  unaff_RDI[0x37] = uVar1;
  return;
}


