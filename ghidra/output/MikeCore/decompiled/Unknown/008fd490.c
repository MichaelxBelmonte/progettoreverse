// Function: FUN_008fd490
// Address: 008fd490
// Size: 509 bytes
// Class: Unknown


void FUN_008fd490(string *param_1,string *param_2)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_RSI + 0x10);
  *(undefined8 *)(unaff_RDI + 8) = *(undefined8 *)(unaff_RSI + 8);
  *(undefined8 *)(unaff_RDI + 0x10) = uVar1;
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RSI + 0x30);
  uVar2 = FUN_008f0a5a();
  *(undefined4 *)(unaff_RDI + 0x148) = *(undefined4 *)(unaff_RSI + 0x148);
  *(undefined1 *)(unaff_RDI + 0x14c) = *(undefined1 *)(unaff_RSI + 0x14c);
  *(undefined8 *)(unaff_RDI + 0x150) = *(undefined8 *)(unaff_RSI + 0x150);
  if (unaff_RDI != unaff_RSI) {
    FUN_008df080(uVar2,*(undefined8 *)(unaff_RSI + 0x160));
    param_2 = *(string **)(unaff_RSI + 0x178);
    FUN_0091e80c();
  }
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x230) = *(undefined4 *)(unaff_RSI + 0x230);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x250) = *(undefined4 *)(unaff_RSI + 0x250);
  *(undefined1 *)(unaff_RDI + 0x254) = *(undefined1 *)(unaff_RSI + 0x254);
  *(undefined1 *)(unaff_RDI + 0x255) = *(undefined1 *)(unaff_RSI + 0x255);
  *(undefined1 *)(unaff_RDI + 0x256) = *(undefined1 *)(unaff_RSI + 0x256);
  *(undefined1 *)(unaff_RDI + 599) = *(undefined1 *)(unaff_RSI + 599);
  FUN_008e8fb4();
  FUN_008e8fb4();
  *(undefined4 *)(unaff_RDI + 0x378) = *(undefined4 *)(unaff_RSI + 0x378);
  *(undefined4 *)(unaff_RDI + 0x37c) = *(undefined4 *)(unaff_RSI + 0x37c);
  *(undefined4 *)(unaff_RDI + 0x380) = *(undefined4 *)(unaff_RSI + 0x380);
  *(undefined8 *)(unaff_RDI + 0x399) = *(undefined8 *)(unaff_RSI + 0x399);
  *(undefined8 *)(unaff_RDI + 0x394) = *(undefined8 *)(unaff_RSI + 0x394);
  uVar1 = *(undefined8 *)(unaff_RSI + 900);
  *(undefined8 *)(unaff_RDI + 0x38c) = *(undefined8 *)(unaff_RSI + 0x38c);
  *(undefined8 *)(unaff_RDI + 900) = uVar1;
  return;
}


