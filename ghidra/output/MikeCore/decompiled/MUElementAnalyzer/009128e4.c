// Function: FUN_009128e4
// Address: 009128e4
// Size: 796 bytes
// Class: MUElementAnalyzer


void FUN_009128e4(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(unaff_RSI + 8);
  *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(unaff_RSI + 0xc);
  *(undefined4 *)(unaff_RDI + 0x10) = *(undefined4 *)(unaff_RSI + 0x10);
  if (unaff_RDI == unaff_RSI) {
    *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RSI + 0x30);
    *(undefined4 *)(unaff_RDI + 0x34) = *(undefined4 *)(unaff_RSI + 0x34);
    *(undefined4 *)(unaff_RDI + 0x98) = *(undefined4 *)(unaff_RSI + 0x98);
  }
  else {
    FUN_008df080(param_1,*(undefined8 *)(unaff_RSI + 0x20));
    *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RSI + 0x30);
    *(undefined4 *)(unaff_RDI + 0x34) = *(undefined4 *)(unaff_RSI + 0x34);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    *(undefined4 *)(unaff_RDI + 0x98) = *(undefined4 *)(unaff_RSI + 0x98);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
  }
  *(undefined4 *)(unaff_RDI + 0xe8) = *(undefined4 *)(unaff_RSI + 0xe8);
  *(undefined4 *)(unaff_RDI + 0xec) = *(undefined4 *)(unaff_RSI + 0xec);
  if (unaff_RDI == unaff_RSI) {
    *(undefined4 *)(unaff_RDI + 0x150) = *(undefined4 *)(unaff_RSI + 0x150);
  }
  else {
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    *(undefined4 *)(unaff_RDI + 0x150) = *(undefined4 *)(unaff_RSI + 0x150);
    FUN_008df080();
  }
  *(undefined4 *)(unaff_RDI + 0x170) = *(undefined4 *)(unaff_RSI + 0x170);
  *(undefined4 *)(unaff_RDI + 0x174) = *(undefined4 *)(unaff_RSI + 0x174);
  if (unaff_RDI == unaff_RSI) {
    *(undefined4 *)(unaff_RDI + 0x1a8) = *(undefined4 *)(unaff_RSI + 0x1a8);
    *(undefined4 *)(unaff_RDI + 0x1ac) = *(undefined4 *)(unaff_RSI + 0x1ac);
  }
  else {
    FUN_008df080();
    FUN_008df080();
    *(undefined4 *)(unaff_RDI + 0x1a8) = *(undefined4 *)(unaff_RSI + 0x1a8);
    *(undefined4 *)(unaff_RDI + 0x1ac) = *(undefined4 *)(unaff_RSI + 0x1ac);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
  }
  *(undefined4 *)(unaff_RDI + 0x210) = *(undefined4 *)(unaff_RSI + 0x210);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x21c);
  *(undefined8 *)(unaff_RDI + 0x214) = *(undefined8 *)(unaff_RSI + 0x214);
  *(undefined8 *)(unaff_RDI + 0x21c) = uVar1;
  *(undefined8 *)(unaff_RDI + 0x224) = *(undefined8 *)(unaff_RSI + 0x224);
  *(undefined8 *)(unaff_RDI + 0x22c) = *(undefined8 *)(unaff_RSI + 0x22c);
  *(undefined1 *)(unaff_RDI + 0x234) = *(undefined1 *)(unaff_RSI + 0x234);
  return;
}


