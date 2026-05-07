// Function: FUN_009f0cbe
// Address: 009f0cbe
// Size: 807 bytes
// Class: Unknown


void FUN_009f0cbe(void)

{
  uint uVar1;
  undefined1 *unaff_RSI;
  int *unaff_RDI;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = unaff_RDI[1];
  uVar3 = (ulonglong)(((uVar1 & 0x70) == 0x70) + 1);
  uVar2 = *unaff_RDI + uVar1;
  lVar4 = uVar3 * 0x80;
  ___bzero();
  *(undefined1 *)((longlong)unaff_RDI + (ulonglong)uVar1 + 8) = 0x80;
  *(char *)((longlong)unaff_RDI + lVar4 + 7) = (char)uVar2 * '\b';
  *(char *)((longlong)unaff_RDI + lVar4 + 6) = (char)(uVar2 >> 5);
  *(char *)((longlong)unaff_RDI + lVar4 + 5) = (char)(uVar2 >> 0xd);
  *(char *)(unaff_RDI + uVar3 * 0x20 + 1) = (char)(uVar2 >> 0x15);
  FUN_009eea0c();
  unaff_RSI[7] = (char)unaff_RDI[0x42];
  unaff_RSI[6] = *(undefined1 *)((longlong)unaff_RDI + 0x109);
  unaff_RSI[5] = *(undefined1 *)((longlong)unaff_RDI + 0x10a);
  unaff_RSI[4] = *(undefined1 *)((longlong)unaff_RDI + 0x10b);
  unaff_RSI[3] = (char)unaff_RDI[0x43];
  unaff_RSI[2] = *(undefined1 *)((longlong)unaff_RDI + 0x10d);
  unaff_RSI[1] = *(undefined1 *)((longlong)unaff_RDI + 0x10e);
  *unaff_RSI = *(undefined1 *)((longlong)unaff_RDI + 0x10f);
  unaff_RSI[0xf] = (char)unaff_RDI[0x44];
  unaff_RSI[0xe] = *(undefined1 *)((longlong)unaff_RDI + 0x111);
  unaff_RSI[0xd] = *(undefined1 *)((longlong)unaff_RDI + 0x112);
  unaff_RSI[0xc] = *(undefined1 *)((longlong)unaff_RDI + 0x113);
  unaff_RSI[0xb] = (char)unaff_RDI[0x45];
  unaff_RSI[10] = *(undefined1 *)((longlong)unaff_RDI + 0x115);
  unaff_RSI[9] = *(undefined1 *)((longlong)unaff_RDI + 0x116);
  unaff_RSI[8] = *(undefined1 *)((longlong)unaff_RDI + 0x117);
  unaff_RSI[0x17] = (char)unaff_RDI[0x46];
  unaff_RSI[0x16] = *(undefined1 *)((longlong)unaff_RDI + 0x119);
  unaff_RSI[0x15] = *(undefined1 *)((longlong)unaff_RDI + 0x11a);
  unaff_RSI[0x14] = *(undefined1 *)((longlong)unaff_RDI + 0x11b);
  unaff_RSI[0x13] = (char)unaff_RDI[0x47];
  unaff_RSI[0x12] = *(undefined1 *)((longlong)unaff_RDI + 0x11d);
  unaff_RSI[0x11] = *(undefined1 *)((longlong)unaff_RDI + 0x11e);
  unaff_RSI[0x10] = *(undefined1 *)((longlong)unaff_RDI + 0x11f);
  unaff_RSI[0x1f] = (char)unaff_RDI[0x48];
  unaff_RSI[0x1e] = *(undefined1 *)((longlong)unaff_RDI + 0x121);
  unaff_RSI[0x1d] = *(undefined1 *)((longlong)unaff_RDI + 0x122);
  unaff_RSI[0x1c] = *(undefined1 *)((longlong)unaff_RDI + 0x123);
  unaff_RSI[0x1b] = (char)unaff_RDI[0x49];
  unaff_RSI[0x1a] = *(undefined1 *)((longlong)unaff_RDI + 0x125);
  unaff_RSI[0x19] = *(undefined1 *)((longlong)unaff_RDI + 0x126);
  unaff_RSI[0x18] = *(undefined1 *)((longlong)unaff_RDI + 0x127);
  unaff_RSI[0x27] = (char)unaff_RDI[0x4a];
  unaff_RSI[0x26] = *(undefined1 *)((longlong)unaff_RDI + 0x129);
  unaff_RSI[0x25] = *(undefined1 *)((longlong)unaff_RDI + 0x12a);
  unaff_RSI[0x24] = *(undefined1 *)((longlong)unaff_RDI + 299);
  unaff_RSI[0x23] = (char)unaff_RDI[0x4b];
  unaff_RSI[0x22] = *(undefined1 *)((longlong)unaff_RDI + 0x12d);
  unaff_RSI[0x21] = *(undefined1 *)((longlong)unaff_RDI + 0x12e);
  unaff_RSI[0x20] = *(undefined1 *)((longlong)unaff_RDI + 0x12f);
  unaff_RSI[0x2f] = (char)unaff_RDI[0x4c];
  unaff_RSI[0x2e] = *(undefined1 *)((longlong)unaff_RDI + 0x131);
  unaff_RSI[0x2d] = *(undefined1 *)((longlong)unaff_RDI + 0x132);
  unaff_RSI[0x2c] = *(undefined1 *)((longlong)unaff_RDI + 0x133);
  unaff_RSI[0x2b] = (char)unaff_RDI[0x4d];
  unaff_RSI[0x2a] = *(undefined1 *)((longlong)unaff_RDI + 0x135);
  unaff_RSI[0x29] = *(undefined1 *)((longlong)unaff_RDI + 0x136);
  unaff_RSI[0x28] = *(undefined1 *)((longlong)unaff_RDI + 0x137);
  unaff_RSI[0x37] = (char)unaff_RDI[0x4e];
  unaff_RSI[0x36] = *(undefined1 *)((longlong)unaff_RDI + 0x139);
  unaff_RSI[0x35] = *(undefined1 *)((longlong)unaff_RDI + 0x13a);
  unaff_RSI[0x34] = *(undefined1 *)((longlong)unaff_RDI + 0x13b);
  unaff_RSI[0x33] = (char)unaff_RDI[0x4f];
  unaff_RSI[0x32] = *(undefined1 *)((longlong)unaff_RDI + 0x13d);
  unaff_RSI[0x31] = *(undefined1 *)((longlong)unaff_RDI + 0x13e);
  unaff_RSI[0x30] = *(undefined1 *)((longlong)unaff_RDI + 0x13f);
  unaff_RSI[0x3f] = (char)unaff_RDI[0x50];
  unaff_RSI[0x3e] = *(undefined1 *)((longlong)unaff_RDI + 0x141);
  unaff_RSI[0x3d] = *(undefined1 *)((longlong)unaff_RDI + 0x142);
  unaff_RSI[0x3c] = *(undefined1 *)((longlong)unaff_RDI + 0x143);
  unaff_RSI[0x3b] = (char)unaff_RDI[0x51];
  unaff_RSI[0x3a] = *(undefined1 *)((longlong)unaff_RDI + 0x145);
  unaff_RSI[0x39] = *(undefined1 *)((longlong)unaff_RDI + 0x146);
  unaff_RSI[0x38] = *(undefined1 *)((longlong)unaff_RDI + 0x147);
  return;
}


