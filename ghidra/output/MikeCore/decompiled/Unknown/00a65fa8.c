// Function: FUN_00a65fa8
// Address: 00a65fa8
// Size: 528 bytes
// Class: Unknown


void FUN_00a65fa8(string *param_1,string *param_2)

{
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_02528a98;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  ___bzero();
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x22] = 0x100000100010100;
  *(undefined4 *)(unaff_RDI + 0x23) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  if (unaff_RDI != unaff_RSI) {
    param_2 = (string *)unaff_RSI[0x13];
    FUN_008df080();
  }
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x18) = *(undefined4 *)(unaff_RSI + 0x18);
  std::string::operator=(param_1,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined4 *)(unaff_RDI + 0x23) = *(undefined4 *)(unaff_RSI + 0x23);
  unaff_RDI[0x22] = unaff_RSI[0x22];
  return;
}


