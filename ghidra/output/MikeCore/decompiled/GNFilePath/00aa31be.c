// Function: FUN_00aa31be
// Address: 00aa31be
// Size: 554 bytes
// Class: GNFilePath


void FUN_00aa31be(string *param_1,string *param_2)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 0x28) = *(undefined1 *)(unaff_RSI + 0x28);
  *(undefined4 *)(unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RSI + 0x2c);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x60) = *(undefined4 *)(unaff_RSI + 0x60);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x80) = *(undefined4 *)(unaff_RSI + 0x80);
  *(undefined4 *)(unaff_RDI + 0x84) = *(undefined4 *)(unaff_RSI + 0x84);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0xb8) = *(undefined4 *)(unaff_RSI + 0xb8);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined1 *)(unaff_RDI + 0xf0) = *(undefined1 *)(unaff_RSI + 0xf0);
  std::string::operator=(param_1,param_2);
  *(undefined1 *)(unaff_RDI + 0x110) = *(undefined1 *)(unaff_RSI + 0x110);
  *(undefined1 *)(unaff_RDI + 0x111) = *(undefined1 *)(unaff_RSI + 0x111);
  if (unaff_RDI != unaff_RSI) {
    param_2 = *(string **)(unaff_RSI + 0x120);
    FUN_008df080();
  }
  *(undefined1 *)(unaff_RDI + 0x130) = *(undefined1 *)(unaff_RSI + 0x130);
  *(undefined1 *)(unaff_RDI + 0x131) = *(undefined1 *)(unaff_RSI + 0x131);
  *(undefined4 *)(unaff_RDI + 0x134) = *(undefined4 *)(unaff_RSI + 0x134);
  *(undefined4 *)(unaff_RDI + 0x138) = *(undefined4 *)(unaff_RSI + 0x138);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0x170) = *(undefined4 *)(unaff_RSI + 0x170);
  *(undefined1 *)(unaff_RDI + 0x174) = *(undefined1 *)(unaff_RSI + 0x174);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined8 *)(unaff_RDI + 0x1d6) = *(undefined8 *)(unaff_RSI + 0x1d6);
  *(undefined8 *)(unaff_RDI + 0x1d0) = *(undefined8 *)(unaff_RSI + 0x1d0);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1c0);
  *(undefined8 *)(unaff_RDI + 0x1c8) = *(undefined8 *)(unaff_RSI + 0x1c8);
  *(undefined8 *)(unaff_RDI + 0x1c0) = uVar1;
  return;
}


