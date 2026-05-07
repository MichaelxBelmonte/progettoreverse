// Function: FUN_00aa0894
// Address: 00aa0894
// Size: 623 bytes
// Class: GNInt


void FUN_00aa0894(void)

{
  undefined8 uVar1;
  string *this;
  string *psVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0252a2f8;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  psVar2 = (string *)(unaff_RDI + 0x1b);
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  *(undefined1 *)(unaff_RDI + 0x24) = 0;
  this = (string *)0x1010000010001;
  *(undefined8 *)((longlong)unaff_RDI + 0x121) = 0x1010000010001;
  *(undefined1 *)((longlong)unaff_RDI + 0x129) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x12a) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x12e) = 0x101;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 0x28);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RSI + 0x2c);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(unaff_RSI + 0x60);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  *(undefined4 *)(unaff_RDI + 0x13) = *(undefined4 *)(unaff_RSI + 0x98);
  std::string::operator=(this,psVar2);
  *(undefined4 *)(unaff_RDI + 0x17) = *(undefined4 *)(unaff_RSI + 0xb8);
  *(undefined4 *)((longlong)unaff_RDI + 0xbc) = *(undefined4 *)(unaff_RSI + 0xbc);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x120);
  unaff_RDI[0x25] = *(undefined8 *)(unaff_RSI + 0x128);
  unaff_RDI[0x24] = uVar1;
  return;
}


