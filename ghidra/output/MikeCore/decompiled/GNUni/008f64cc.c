// Function: FUN_008f64cc
// Address: 008f64cc
// Size: 1064 bytes
// Class: GNUni


void FUN_008f64cc(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0251c540;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[0xc] = &DAT_0251c0d8;
  *(undefined4 *)(unaff_RDI + 0xd) = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = &DAT_0251c140;
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  *(undefined2 *)(unaff_RDI + 0x23) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x11c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x122) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 300) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x134) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x13c) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x143) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x147) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x149) = 0;
  this = (string *)(unaff_RDI + 0x2a);
  unaff_RDI[0x2a] = &DAT_0251c0d8;
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  ___bzero();
  unaff_RDI[0x51] = &DAT_0251c4d8;
  unaff_RDI[0x52] = 0;
  unaff_RDI[0x53] = 0;
  unaff_RDI[0x54] = 0;
  unaff_RDI[0x55] = 0;
  unaff_RDI[0x56] = 0;
  unaff_RDI[0x57] = 0;
  unaff_RDI[0x58] = 0;
  unaff_RDI[0x59] = 0;
  unaff_RDI[0x5a] = 0;
  unaff_RDI[0x5b] = 0;
  unaff_RDI[0x5c] = 0;
  unaff_RDI[0x5d] = 0;
  *(undefined4 *)(unaff_RDI + 0x5e) = 0;
  unaff_RDI[0x5f] = 0;
  unaff_RDI[0x60] = 0;
  unaff_RDI[0x61] = 0;
  unaff_RDI[0x62] = 0;
  unaff_RDI[99] = 0;
  unaff_RDI[100] = 0;
  unaff_RDI[0x65] = 0;
  unaff_RDI[0x66] = 0;
  unaff_RDI[0x67] = 0;
  unaff_RDI[0x68] = 0;
  *(undefined2 *)(unaff_RDI + 0x69) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x34a) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x34b) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x34f) = 0;
  unaff_RDI[0x6b] = 0;
  unaff_RDI[0x6c] = 0;
  unaff_RDI[0x6d] = 0;
  *(undefined1 *)(unaff_RDI + 0x6e) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x371) = 0x101;
  *(undefined1 *)((longlong)unaff_RDI + 0x373) = 1;
  *(undefined8 *)((longlong)unaff_RDI + 0x374) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x37c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x381) = 0;
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = *(undefined4 *)((longlong)unaff_RSI + 0xc);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 2);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = *(undefined4 *)((longlong)unaff_RSI + 0x14);
  if (unaff_RDI != unaff_RSI) {
    param_2 = (string *)unaff_RSI[4];
    FUN_008df080();
  }
  uVar1 = unaff_RSI[7];
  unaff_RDI[6] = unaff_RSI[6];
  unaff_RDI[7] = uVar1;
  uVar2 = *(undefined4 *)((longlong)unaff_RSI + 0x44);
  uVar3 = *(undefined4 *)(unaff_RSI + 9);
  uVar4 = *(undefined4 *)((longlong)unaff_RSI + 0x4c);
  *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(unaff_RSI + 8);
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = uVar2;
  *(undefined4 *)(unaff_RDI + 9) = uVar3;
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = uVar4;
  *(undefined4 *)(unaff_RDI + 10) = *(undefined4 *)(unaff_RSI + 10);
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = *(undefined4 *)((longlong)unaff_RSI + 0x54);
  *(undefined1 *)(unaff_RDI + 0xb) = *(undefined1 *)(unaff_RSI + 0xb);
  *(undefined1 *)((longlong)unaff_RDI + 0x59) = *(undefined1 *)((longlong)unaff_RSI + 0x59);
  FUN_008e8fb4();
  FUN_008ea352();
  FUN_008e8fb4();
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  FUN_008f4bca();
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x71) = *(undefined1 *)(unaff_RSI + 0x71);
  unaff_RDI[0x70] = unaff_RSI[0x70];
  uVar1 = unaff_RSI[0x6e];
  unaff_RDI[0x6f] = unaff_RSI[0x6f];
  unaff_RDI[0x6e] = uVar1;
  return;
}


