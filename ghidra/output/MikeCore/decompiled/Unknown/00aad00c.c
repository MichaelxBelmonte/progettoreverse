// Function: FUN_00aad00c
// Address: 00aad00c
// Size: 519 bytes
// Class: Unknown


void FUN_00aad00c(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  this = (string *)(segment_command_00000020.segname + 8);
  *unaff_RDI = &DAT_0252a958;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  ___bzero();
  *(undefined8 *)((longlong)unaff_RDI + 0x141) = 0x100010100010001;
  *(undefined1 *)((longlong)unaff_RDI + 0x149) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x14a) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x14e) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  uVar1 = unaff_RSI[0x28];
  *(undefined8 *)((longlong)unaff_RDI + 0x147) = *(undefined8 *)((longlong)unaff_RSI + 0x147);
  unaff_RDI[0x28] = uVar1;
  return;
}


