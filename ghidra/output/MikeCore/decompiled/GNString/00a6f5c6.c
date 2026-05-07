// Function: FUN_00a6f5c6
// Address: 00a6f5c6
// Size: 544 bytes
// Class: GNString


void FUN_00a6f5c6(string *param_1,string *param_2)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar2;
  
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 0x28) = *(undefined1 *)(unaff_RSI + 0x28);
  *(undefined4 *)(unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RSI + 0x30);
  *(undefined4 *)(unaff_RDI + 0x34) = *(undefined4 *)(unaff_RSI + 0x34);
  std::string::operator=(param_1,param_2);
  *(undefined1 *)(unaff_RDI + 0x50) = *(undefined1 *)(unaff_RSI + 0x50);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x5c);
  *(undefined8 *)(unaff_RDI + 0x54) = *(undefined8 *)(unaff_RSI + 0x54);
  *(undefined8 *)(unaff_RDI + 0x5c) = uVar1;
  *(undefined4 *)(unaff_RDI + 100) = *(undefined4 *)(unaff_RSI + 100);
  *(undefined1 *)(unaff_RDI + 0x68) = *(undefined1 *)(unaff_RSI + 0x68);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(undefined4 *)(unaff_RDI + 0xa0) = *(undefined4 *)(unaff_RSI + 0xa0);
  *(undefined4 *)(unaff_RDI + 0xa4) = *(undefined4 *)(unaff_RSI + 0xa4);
  std::string::operator=(param_1,param_2);
  *(undefined1 *)(unaff_RDI + 0xc0) = *(undefined1 *)(unaff_RSI + 0xc0);
  *(undefined1 *)(unaff_RDI + 0xc1) = *(undefined1 *)(unaff_RSI + 0xc1);
  uVar2 = std::string::operator=(param_1,param_2);
  *(undefined1 *)(unaff_RDI + 0xe0) = *(undefined1 *)(unaff_RSI + 0xe0);
  if (unaff_RDI != unaff_RSI) {
    uVar2 = FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0xf0));
    uVar2 = FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0x108));
    uVar2 = FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0x120));
    uVar2 = FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0x138));
    uVar2 = FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0x150));
    uVar2 = FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0x168));
    uVar2 = FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0x180));
    uVar2 = FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0x198));
    FUN_009bc850(uVar2,*(undefined8 *)(unaff_RSI + 0x1b0));
  }
  *(undefined8 *)(unaff_RDI + 0x1d7) = *(undefined8 *)(unaff_RSI + 0x1d7);
  *(undefined8 *)(unaff_RDI + 0x1d0) = *(undefined8 *)(unaff_RSI + 0x1d0);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1c0);
  *(undefined8 *)(unaff_RDI + 0x1c8) = *(undefined8 *)(unaff_RSI + 0x1c8);
  *(undefined8 *)(unaff_RDI + 0x1c0) = uVar1;
  return;
}


