// Function: FUN_00a6817e
// Address: 00a6817e
// Size: 607 bytes
// Class: Unknown


void FUN_00a6817e(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_02528bc8;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  this = (string *)(unaff_RDI + 6);
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  ___bzero();
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x20] = 0;
  *(undefined2 *)(unaff_RDI + 0x29) = 0x100;
  *(undefined4 *)((longlong)unaff_RDI + 0x14a) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x14e) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x14f) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x151) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x152) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x156) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 9) = *(undefined4 *)(unaff_RSI + 9);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x1f) = *(undefined4 *)(unaff_RSI + 0x1f);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
  }
  uVar1 = unaff_RSI[0x29];
  *(undefined8 *)((longlong)unaff_RDI + 0x14f) = *(undefined8 *)((longlong)unaff_RSI + 0x14f);
  unaff_RDI[0x29] = uVar1;
  return;
}


