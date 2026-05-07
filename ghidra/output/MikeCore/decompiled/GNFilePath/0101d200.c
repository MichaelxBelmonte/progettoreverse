// Function: FUN_0101d200
// Address: 0101d200
// Size: 1319 bytes
// Class: GNFilePath
// String references:
//   "crypto/err/err.c"


/* WARNING: Type propagation algorithm not settling */

void FUN_0101d200(void *param_1)

{
  byte bVar1;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    if ((*(byte *)(unaff_RDI + 0x140) & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x140) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x144);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0xc0) = 0;
      *(undefined4 *)(unaff_RDI + 0x140) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x144);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x144) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x148);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 200) = 0;
      *(undefined4 *)(unaff_RDI + 0x144) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x148);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x148) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x14c);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0xd0) = 0;
      *(undefined4 *)(unaff_RDI + 0x148) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x14c);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x14c) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x150);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0xd8) = 0;
      *(undefined4 *)(unaff_RDI + 0x14c) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x150);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x150) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x154);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0xe0) = 0;
      *(undefined4 *)(unaff_RDI + 0x150) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x154);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x154) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x158);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0xe8) = 0;
      *(undefined4 *)(unaff_RDI + 0x154) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x158);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x158) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x15c);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0xf0) = 0;
      *(undefined4 *)(unaff_RDI + 0x158) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x15c);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x15c) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x160);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0xf8) = 0;
      *(undefined4 *)(unaff_RDI + 0x15c) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x160);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x160) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x164);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0x100) = 0;
      *(undefined4 *)(unaff_RDI + 0x160) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x164);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x164) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x168);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0x108) = 0;
      *(undefined4 *)(unaff_RDI + 0x164) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x168);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x168) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x16c);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0x110) = 0;
      *(undefined4 *)(unaff_RDI + 0x168) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x16c);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x16c) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x170);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0x118) = 0;
      *(undefined4 *)(unaff_RDI + 0x16c) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x170);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x170) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x174);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0x120) = 0;
      *(undefined4 *)(unaff_RDI + 0x170) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x174);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x174) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x178);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0x128) = 0;
      *(undefined4 *)(unaff_RDI + 0x174) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x178);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(unaff_RDI + 0x178) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x17c);
    }
    else {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0x130) = 0;
      *(undefined4 *)(unaff_RDI + 0x178) = 0;
      bVar1 = *(byte *)(unaff_RDI + 0x17c);
    }
    if ((bVar1 & 1) != 0) {
      _CRYPTO_free(param_1);
      *(undefined8 *)(unaff_RDI + 0x138) = 0;
    }
    *(undefined4 *)(unaff_RDI + 0x17c) = 0;
    _CRYPTO_free(param_1);
    return;
  }
  return;
}


