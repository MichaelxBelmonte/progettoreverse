// Function: FUN_00aa7086
// Address: 00aa7086
// Size: 575 bytes
// Class: MUSpectrumShaper


void FUN_00aa7086(string *param_1,string *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0252a558;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  ___bzero();
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x22] = 0;
  *(undefined4 *)(unaff_RDI + 0x28) = 0x1000100;
  *(undefined2 *)((longlong)unaff_RDI + 0x144) = 0x100;
  *(undefined8 *)((longlong)unaff_RDI + 0x146) = 0x1000000000000;
  *(undefined1 *)((longlong)unaff_RDI + 0x14e) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x21) = *(undefined4 *)(unaff_RSI + 0x21);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
  }
  uVar1 = unaff_RSI[0x28];
  *(undefined8 *)((longlong)unaff_RDI + 0x147) = *(undefined8 *)((longlong)unaff_RSI + 0x147);
  unaff_RDI[0x28] = uVar1;
  return;
}


