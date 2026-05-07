// Function: FUN_008dbdd4
// Address: 008dbdd4
// Size: 656 bytes
// Class: MUElementAnalyzer
// String references:
//   "sha256"
//   "canonical_method_thrift_binary"


void FUN_008dbdd4(void)

{
  string *this;
  string *psVar1;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0251b958;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
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
  unaff_RDI[0x11] = &DAT_0251b900;
  unaff_RDI[0x12] = &DAT_0251b7a0;
  unaff_RDI[0x13] = 0;
  *(undefined1 *)(unaff_RDI + 0x14) = 0;
  unaff_RDI[0x15] = &DAT_0251b7f8;
  unaff_RDI[0x16] = &DAT_0251b850;
  psVar1 = (string *)&DAT_0251b8a8;
  unaff_RDI[0x17] = &DAT_0251b8a8;
  unaff_RDI[0x18] = 0;
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  unaff_RDI[0x1b] = &DAT_0251b6d0;
  FUN_008d7552();
  FUN_008d7552();
  *(undefined2 *)(unaff_RDI + 0x22) = 0x101;
  this = (string *)0x0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  *(undefined2 *)(unaff_RDI + 0x26) = 0x101;
  *(undefined8 *)((longlong)unaff_RDI + 0x132) = 0;
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = *(undefined4 *)((longlong)unaff_RSI + 0xc);
  std::string::operator=((string *)0x0,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  unaff_RDI[0x13] = unaff_RSI[0x13];
  *(undefined1 *)(unaff_RDI + 0x14) = *(undefined1 *)(unaff_RSI + 0x14);
  unaff_RDI[0x18] = unaff_RSI[0x18];
  *(undefined1 *)(unaff_RDI + 0x19) = *(undefined1 *)(unaff_RSI + 0x19);
  *(undefined4 *)(unaff_RDI + 0x1a) = *(undefined4 *)(unaff_RSI + 0x1a);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  *(undefined2 *)(unaff_RDI + 0x22) = *(undefined2 *)(unaff_RSI + 0x22);
  if (unaff_RDI != unaff_RSI) {
    FUN_008df080();
  }
  *(undefined2 *)(unaff_RDI + 0x27) = *(undefined2 *)(unaff_RSI + 0x27);
  unaff_RDI[0x26] = unaff_RSI[0x26];
  return;
}


