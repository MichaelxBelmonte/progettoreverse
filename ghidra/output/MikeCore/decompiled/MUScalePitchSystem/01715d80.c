// Function: FUN_01715d80
// Address: 01715d80
// Size: 895 bytes
// Class: MUScalePitchSystem


void FUN_01715d80(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  
  uVar5 = *(ulonglong *)(unaff_RDI + 0x18);
  if ((uVar5 & 0xf) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffffffff0 | (longlong)iVar3;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffffffff0f | (longlong)iVar3 << 4;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffffff0ff | (longlong)iVar3 << 8;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffffff0fff | (longlong)iVar3 << 0xc;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffff0ffff | (longlong)iVar3 << 0x10;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffff0fffff | (longlong)iVar3 << 0x14;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffff0ffffff | (longlong)iVar3 << 0x18;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffff0fffffff | (longlong)iVar3 << 0x1c;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (ulonglong)uVar2;
    }
    uVar5 = uVar5 & 0xfffffff0ffffffff | uVar4 << 0x20;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (ulonglong)uVar2;
    }
    uVar5 = uVar5 & 0xffffff0fffffffff | uVar4 << 0x24;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (ulonglong)uVar2;
    }
    uVar5 = uVar5 & 0xfffff0ffffffffff | uVar4 << 0x28;
    *(ulonglong *)(unaff_RDI + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000000000) != 0) {
    return;
  }
  uVar2 = FUN_01716c60();
  uVar4 = 0xf;
  if (uVar2 != 0xffffffff) {
    uVar4 = (ulonglong)uVar2;
  }
  *(ulonglong *)(unaff_RDI + 0x18) = uVar4 << 0x2c | uVar5 & 0xffff0fffffffffff;
  return;
}


