// Function: FUN_00b14030
// Address: 00b14030
// Size: 1843 bytes
// Class: GNInt
// String references:
//   "float"
//   "gain"
//   "roomsize"
//   "damp"
//   "wet"
//   "dry"
//   "width"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b14030(char *param_1,undefined8 param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_025408b0;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275cd50 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275cd18 = FUN_00b13a60();
        param_1 = "gain";
        _DAT_0275cd10 = "gain";
        _DAT_0275cd20 = 0;
        _DAT_0275cd28 = 0x6600;
        _DAT_0275cd30 = "float";
        _DAT_0275cd38 = 0;
        uRam000000000275cd40 = 0;
        _DAT_0275cd48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275cd98 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275cd60 = FUN_00b13a60();
        param_1 = "roomsize";
        _DAT_0275cd58 = "roomsize";
        _DAT_0275cd68 = 0;
        _DAT_0275cd70 = 0x6600;
        _DAT_0275cd78 = "float";
        _DAT_0275cd80 = 0;
        uRam000000000275cd88 = 0;
        _DAT_0275cd90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275cde0 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275cda8 = FUN_00b13a60();
        param_1 = "damp";
        _DAT_0275cda0 = "damp";
        _DAT_0275cdb0 = 0;
        _DAT_0275cdb8 = 0x6600;
        _DAT_0275cdc0 = "float";
        _DAT_0275cdc8 = 0;
        uRam000000000275cdd0 = 0;
        _DAT_0275cdd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275ce28 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275cdf0 = FUN_00b13a60();
        param_1 = "wet";
        _DAT_0275cde8 = "wet";
        _DAT_0275cdf8 = 0;
        _DAT_0275ce00 = 0x6600;
        _DAT_0275ce08 = "float";
        _DAT_0275ce10 = 0;
        uRam000000000275ce18 = 0;
        _DAT_0275ce20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275ce70 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275ce38 = FUN_00b13a60();
        param_1 = "dry";
        _DAT_0275ce30 = "dry";
        _DAT_0275ce40 = 0;
        _DAT_0275ce48 = 0x6600;
        _DAT_0275ce50 = "float";
        _DAT_0275ce58 = 0;
        uRam000000000275ce60 = 0;
        _DAT_0275ce68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275ceb8 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275ce80 = FUN_00b13a60();
        param_1 = "width";
        _DAT_0275ce78 = "width";
        _DAT_0275ce88 = 0;
        _DAT_0275ce90 = 0x6600;
        _DAT_0275ce98 = "float";
        _DAT_0275cea0 = 0;
        uRam000000000275cea8 = 0;
        _DAT_0275ceb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  uVar1 = *(undefined8 *)(unaff_RSI + 0xb0);
  unaff_RDI[0x15] = *(undefined8 *)(unaff_RSI + 0xa8);
  unaff_RDI[0x16] = uVar1;
  uVar1 = *(undefined8 *)(unaff_RSI + 0xb8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0xc0);
  uVar3 = *(undefined8 *)(unaff_RSI + 0xd0);
  unaff_RDI[0x19] = *(undefined8 *)(unaff_RSI + 200);
  unaff_RDI[0x1a] = uVar3;
  unaff_RDI[0x17] = uVar1;
  unaff_RDI[0x18] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0xd8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0xe0);
  uVar3 = *(undefined8 *)(unaff_RSI + 0xf0);
  unaff_RDI[0x1d] = *(undefined8 *)(unaff_RSI + 0xe8);
  unaff_RDI[0x1e] = uVar3;
  unaff_RDI[0x1b] = uVar1;
  unaff_RDI[0x1c] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0xf8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x100);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x110);
  unaff_RDI[0x21] = *(undefined8 *)(unaff_RSI + 0x108);
  unaff_RDI[0x22] = uVar3;
  unaff_RDI[0x1f] = uVar1;
  unaff_RDI[0x20] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x118);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x120);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x130);
  unaff_RDI[0x25] = *(undefined8 *)(unaff_RSI + 0x128);
  unaff_RDI[0x26] = uVar3;
  unaff_RDI[0x23] = uVar1;
  unaff_RDI[0x24] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x140);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x148);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x150);
  unaff_RDI[0x27] = *(undefined8 *)(unaff_RSI + 0x138);
  unaff_RDI[0x28] = uVar1;
  unaff_RDI[0x29] = uVar2;
  unaff_RDI[0x2a] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x160);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x168);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x170);
  unaff_RDI[0x2b] = *(undefined8 *)(unaff_RSI + 0x158);
  unaff_RDI[0x2c] = uVar1;
  unaff_RDI[0x2d] = uVar2;
  unaff_RDI[0x2e] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x180);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x188);
  uVar3 = *(undefined8 *)(unaff_RSI + 400);
  unaff_RDI[0x2f] = *(undefined8 *)(unaff_RSI + 0x178);
  unaff_RDI[0x30] = uVar1;
  unaff_RDI[0x31] = uVar2;
  unaff_RDI[0x32] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x1b0);
  unaff_RDI[0x33] = *(undefined8 *)(unaff_RSI + 0x198);
  unaff_RDI[0x34] = uVar1;
  unaff_RDI[0x35] = uVar2;
  unaff_RDI[0x36] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1c0);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x1d0);
  unaff_RDI[0x37] = *(undefined8 *)(unaff_RSI + 0x1b8);
  unaff_RDI[0x38] = uVar1;
  unaff_RDI[0x39] = uVar2;
  unaff_RDI[0x3a] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x1e0);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x1f0);
  unaff_RDI[0x3d] = *(undefined8 *)(unaff_RSI + 0x1e8);
  unaff_RDI[0x3e] = uVar3;
  unaff_RDI[0x3b] = uVar1;
  unaff_RDI[0x3c] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x200);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x210);
  unaff_RDI[0x41] = *(undefined8 *)(unaff_RSI + 0x208);
  unaff_RDI[0x42] = uVar3;
  unaff_RDI[0x3f] = uVar1;
  unaff_RDI[0x40] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x220);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x228);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x230);
  unaff_RDI[0x43] = *(undefined8 *)(unaff_RSI + 0x218);
  unaff_RDI[0x44] = uVar1;
  unaff_RDI[0x45] = uVar2;
  unaff_RDI[0x46] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x240);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x248);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x250);
  unaff_RDI[0x47] = *(undefined8 *)(unaff_RSI + 0x238);
  unaff_RDI[0x48] = uVar1;
  unaff_RDI[0x49] = uVar2;
  unaff_RDI[0x4a] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x260);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x268);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x270);
  unaff_RDI[0x4b] = *(undefined8 *)(unaff_RSI + 600);
  unaff_RDI[0x4c] = uVar1;
  unaff_RDI[0x4d] = uVar2;
  unaff_RDI[0x4e] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x278);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x280);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x290);
  unaff_RDI[0x51] = *(undefined8 *)(unaff_RSI + 0x288);
  unaff_RDI[0x52] = uVar3;
  unaff_RDI[0x4f] = uVar1;
  unaff_RDI[0x50] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x2a0);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x2a8);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x2b0);
  unaff_RDI[0x53] = *(undefined8 *)(unaff_RSI + 0x298);
  unaff_RDI[0x54] = uVar1;
  unaff_RDI[0x55] = uVar2;
  unaff_RDI[0x56] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x2c0);
  unaff_RDI[0x57] = *(undefined8 *)(unaff_RSI + 0x2b8);
  unaff_RDI[0x58] = uVar1;
  unaff_RDI[0x59] = *(undefined8 *)(unaff_RSI + 0x2c8);
  unaff_RDI[0x5c] = *(undefined8 *)(unaff_RSI + 0x2e0);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x2d8);
  unaff_RDI[0x5a] = *(undefined8 *)(unaff_RSI + 0x2d0);
  unaff_RDI[0x5b] = uVar1;
  unaff_RDI[0x5f] = *(undefined8 *)(unaff_RSI + 0x2f8);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x2f0);
  unaff_RDI[0x5d] = *(undefined8 *)(unaff_RSI + 0x2e8);
  unaff_RDI[0x5e] = uVar1;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x308);
  unaff_RDI[0x60] = *(undefined8 *)(unaff_RSI + 0x300);
  unaff_RDI[0x61] = uVar1;
  unaff_RDI[0x62] = *(undefined8 *)(unaff_RSI + 0x310);
  uVar1 = *(undefined8 *)(unaff_RSI + 800);
  unaff_RDI[99] = *(undefined8 *)(unaff_RSI + 0x318);
  unaff_RDI[100] = uVar1;
  unaff_RDI[0x65] = *(undefined8 *)(unaff_RSI + 0x328);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x338);
  unaff_RDI[0x66] = *(undefined8 *)(unaff_RSI + 0x330);
  unaff_RDI[0x67] = uVar1;
  unaff_RDI[0x68] = *(undefined8 *)(unaff_RSI + 0x340);
  unaff_RDI[0x6b] = *(undefined8 *)(unaff_RSI + 0x358);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x350);
  unaff_RDI[0x69] = *(undefined8 *)(unaff_RSI + 0x348);
  unaff_RDI[0x6a] = uVar1;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x368);
  unaff_RDI[0x6c] = *(undefined8 *)(unaff_RSI + 0x360);
  unaff_RDI[0x6d] = uVar1;
  unaff_RDI[0x6e] = *(undefined8 *)(unaff_RSI + 0x370);
  _memcpy(param_1,&DAT_00018da8,param_3);
  return;
}


