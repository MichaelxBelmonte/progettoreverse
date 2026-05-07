// Function: FUN_00aae772
// Address: 00aae772
// Size: 574 bytes
// Class: GNInt


void FUN_00aae772(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  this = (string *)(segment_command_00000020.segname + 8);
  *unaff_RDI = &DAT_0252a9f0;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
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
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  *(undefined1 *)(unaff_RDI + 0x21) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x109) = 0x101010100000001;
  *(undefined4 *)((longlong)unaff_RDI + 0x111) = 0x10100;
  *(undefined2 *)((longlong)unaff_RDI + 0x115) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = *(undefined4 *)((longlong)unaff_RSI + 0x34);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x13) = *(undefined4 *)(unaff_RSI + 0x13);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x1a) = *(undefined4 *)(unaff_RSI + 0x1a);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
  }
  uVar1 = unaff_RSI[0x21];
  *(undefined8 *)((longlong)unaff_RDI + 0x10f) = *(undefined8 *)((longlong)unaff_RSI + 0x10f);
  unaff_RDI[0x21] = uVar1;
  return;
}


