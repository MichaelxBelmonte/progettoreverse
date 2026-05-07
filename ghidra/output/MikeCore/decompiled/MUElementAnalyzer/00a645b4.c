// Function: FUN_00a645b4
// Address: 00a645b4
// Size: 803 bytes
// Class: MUElementAnalyzer


void FUN_00a645b4(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_02528a00;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x10] = 0;
  *(undefined1 *)(unaff_RDI + 0x2d) = 0;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[0x2b] = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x169) = 0x101000000010001;
  *(undefined8 *)((longlong)unaff_RDI + 0x171) = 0x10001000100;
  this = (string *)(unaff_RDI + 0x1c);
  *(undefined1 *)((longlong)unaff_RDI + 0x179) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0xf) = *(undefined4 *)(unaff_RSI + 0xf);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x1f) = *(undefined1 *)(unaff_RSI + 0x1f);
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x23) = *(undefined1 *)(unaff_RSI + 0x23);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined2 *)(unaff_RDI + 0x2f) = *(undefined2 *)(unaff_RSI + 0x2f);
  uVar1 = unaff_RSI[0x2d];
  unaff_RDI[0x2e] = unaff_RSI[0x2e];
  unaff_RDI[0x2d] = uVar1;
  return;
}


