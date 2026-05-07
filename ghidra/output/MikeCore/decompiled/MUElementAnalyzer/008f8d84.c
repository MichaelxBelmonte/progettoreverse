// Function: FUN_008f8d84
// Address: 008f8d84
// Size: 981 bytes
// Class: MUElementAnalyzer


void FUN_008f8d84(void)

{
  undefined8 uVar1;
  string *this;
  string *psVar2;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar3;
  
  *unaff_RDI = &DAT_0251c5a8;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0x11] = &DAT_0251c338;
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  *(undefined4 *)(unaff_RDI + 0x26) = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
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
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x2b] = 0;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2f] = 0;
  unaff_RDI[0x30] = 0;
  unaff_RDI[0x31] = 0;
  *(undefined1 *)(unaff_RDI + 0x32) = 1;
  unaff_RDI[0x37] = 0;
  unaff_RDI[0x36] = 0;
  unaff_RDI[0x35] = 0;
  psVar2 = (string *)&DAT_0251c3a0;
  unaff_RDI[0x38] = &DAT_0251c3a0;
  unaff_RDI[0x3f] = 0;
  unaff_RDI[0x3e] = 0;
  unaff_RDI[0x3d] = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3a] = 0;
  unaff_RDI[0x39] = 0;
  unaff_RDI[0x40] = 0x100000001;
  unaff_RDI[0x45] = 0;
  unaff_RDI[0x44] = 0;
  unaff_RDI[0x43] = 0;
  unaff_RDI[0x42] = 0;
  unaff_RDI[0x41] = 0;
  *(undefined2 *)(unaff_RDI + 0x46) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x232) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x233) = 0x1010101;
  *(undefined2 *)((longlong)unaff_RDI + 0x237) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x239) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x26f) = 0;
  unaff_RDI[0x4d] = 0;
  unaff_RDI[0x4c] = 0;
  unaff_RDI[0x4b] = 0;
  unaff_RDI[0x4a] = 0;
  unaff_RDI[0x49] = 0;
  unaff_RDI[0x48] = 0;
  this = (string *)0x100010000010001;
  *(undefined8 *)((longlong)unaff_RDI + 0x277) = 0x100010000010001;
  *(undefined4 *)((longlong)unaff_RDI + 0x27f) = 0;
  if (unaff_RDI != unaff_RSI) {
    psVar2 = (string *)unaff_RSI[2];
    FUN_0090c478();
  }
  *(undefined1 *)(unaff_RDI + 4) = *(undefined1 *)(unaff_RSI + 4);
  *(undefined1 *)((longlong)unaff_RDI + 0x21) = *(undefined1 *)((longlong)unaff_RSI + 0x21);
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = *(undefined4 *)((longlong)unaff_RSI + 0x24);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  uVar1 = unaff_RSI[0xc];
  unaff_RDI[0xb] = unaff_RSI[0xb];
  unaff_RDI[0xc] = uVar1;
  std::string::operator=(this,psVar2);
  *(undefined1 *)(unaff_RDI + 0x10) = *(undefined1 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x84) = *(undefined4 *)((longlong)unaff_RSI + 0x84);
  uVar3 = FUN_008f0a5a();
  *(undefined4 *)(unaff_RDI + 0x33) = *(undefined4 *)(unaff_RSI + 0x33);
  *(undefined1 *)((longlong)unaff_RDI + 0x19c) = *(undefined1 *)((longlong)unaff_RSI + 0x19c);
  unaff_RDI[0x34] = unaff_RSI[0x34];
  if (unaff_RDI != unaff_RSI) {
    FUN_008df080(uVar3,unaff_RSI[0x36]);
  }
  uVar3 = FUN_008f1a3c();
  if (unaff_RDI != unaff_RSI) {
    uVar3 = FUN_0090c6d6(uVar3,unaff_RSI[0x49]);
    FUN_008d3508(uVar3,unaff_RSI[0x4c]);
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x27f) = *(undefined4 *)((longlong)unaff_RSI + 0x27f);
  uVar1 = unaff_RSI[0x4e];
  unaff_RDI[0x4f] = unaff_RSI[0x4f];
  unaff_RDI[0x4e] = uVar1;
  return;
}


