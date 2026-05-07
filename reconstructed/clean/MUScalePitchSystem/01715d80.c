// Function: FUN_01715d80
// Address: 01715d80
// Size: 895 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01715d80(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  
  uVar5 = *(uint64_t *)(this_ptr + 0x18);
  if ((uVar5 & 0xf) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffffffff0 | (int64_t)iVar3;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffffffff0f | (int64_t)iVar3 << 4;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffffff0ff | (int64_t)iVar3 << 8;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffffff0fff | (int64_t)iVar3 << 0xc;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffff0ffff | (int64_t)iVar3 << 0x10;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffff0fffff | (int64_t)iVar3 << 0x14;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffff0ffffff | (int64_t)iVar3 << 0x18;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffff0fffffff | (int64_t)iVar3 << 0x1c;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (uint64_t)uVar2;
    }
    uVar5 = uVar5 & 0xfffffff0ffffffff | uVar4 << 0x20;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (uint64_t)uVar2;
    }
    uVar5 = uVar5 & 0xffffff0fffffffff | uVar4 << 0x24;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (uint64_t)uVar2;
    }
    uVar5 = uVar5 & 0xfffff0ffffffffff | uVar4 << 0x28;
    *(uint64_t *)(this_ptr + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000000000) != 0) {
    return;
  }
  uVar2 = FUN_01716c60();
  uVar4 = 0xf;
  if (uVar2 != 0xffffffff) {
    uVar4 = (uint64_t)uVar2;
  }
  *(uint64_t *)(this_ptr + 0x18) = uVar4 << 0x2c | uVar5 & 0xffff0fffffffffff;
  return;
}

