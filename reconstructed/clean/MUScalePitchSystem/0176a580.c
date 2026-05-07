// Function: FUN_0176a580
// Address: 0176a580
// Size: 935 bytes
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


void FUN_0176a580(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_017178d0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  uVar2 = *(uint64_t *)(local_38 + 0x18);
  uVar1 = (uint)uVar2;
  if ((~uVar1 & 0xf0) != 0) {
    uVar3 = (uint)(uVar2 >> 4) & 0xf;
    uVar4 = 0xffffffff;
    if (uVar3 != 0xf) {
      uVar4 = uVar3;
    }
    if ((4 < uVar4) || ((0x15U >> (uVar4 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
      uVar1 = (uint)uVar2;
    }
  }
  if ((~uVar1 & 0xf00) != 0) {
    uVar4 = (uint)(uVar2 >> 8) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
    }
  }
  uVar1 = (uint)uVar2;
  if ((~uVar1 & 0xf000) != 0) {
    uVar3 = (uint)(uVar2 >> 0xc) & 0xf;
    uVar4 = 0xffffffff;
    if (uVar3 != 0xf) {
      uVar4 = uVar3;
    }
    if ((4 < uVar4) || ((0x15U >> (uVar4 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
      uVar1 = (uint)uVar2;
    }
  }
  if ((~uVar1 & 0xf0000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x10) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
    }
  }
  uVar1 = (uint)uVar2;
  if ((~uVar1 & 0xf00000) != 0) {
    uVar3 = (uint)(uVar2 >> 0x14) & 0xf;
    uVar4 = 0xffffffff;
    if (uVar3 != 0xf) {
      uVar4 = uVar3;
    }
    if ((4 < uVar4) || ((0x15U >> (uVar4 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
      uVar1 = (uint)uVar2;
    }
  }
  if ((~uVar1 & 0xf000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x18) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
    }
  }
  if ((~(uint)uVar2 & 0xf0000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x1c) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
    }
  }
  if ((~uVar2 & 0xf00000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x20) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
    }
  }
  if ((~uVar2 & 0xf000000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x24) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
    }
  }
  if ((~uVar2 & 0xf0000000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x28) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(uint64_t *)(local_38 + 0x18);
    }
  }
  if ((~uVar2 & 0xf00000000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x2c) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
    }
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

