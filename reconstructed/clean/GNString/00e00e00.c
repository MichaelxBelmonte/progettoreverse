// Function: FUN_00e00e00
// Address: 00e00e00
// Size: 2039 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e00e00(void)

{
  void*puVar1;
  uint64_t uVar2;
  void*this_ptr;
  double dVar3;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02572358;
  (*g_02572370)();
  dVar3 = (double)FUN_00e7d6f0();
  uVar2 = (uint64_t)(dVar3 * g_023907c0);
  if (((int64_t)(dVar3 * g_023907c0 - g_023907c8) & (int64_t)uVar2 >> 0x3f | uVar2) *
      -0x5555555555555555 + 0x5555555555555555 < 0x5555555555555555) {
    FUN_00e07870();
    FUN_00e08490();
    FUN_00e07ae0();
    FUN_00e08df0();
    FUN_00e08fe0();
    FUN_00e055a0();
  }
  else {
    dVar3 = (double)FUN_00e7d6f0();
    uVar2 = (uint64_t)(dVar3 * g_023907c0);
    if (((int64_t)(dVar3 * g_023907c0 - g_023907c8) & (int64_t)uVar2 >> 0x3f | uVar2) *
        -0x5555555555555555 + 0xaaaaaaaaaaaaaaaa < 0x5555555555555555) {
      FUN_00e07870();
      FUN_00e07ae0();
      FUN_00e055a0();
      FUN_00e08490();
      FUN_00e08fe0();
      FUN_00e08df0();
    }
    else {
      FUN_00e07870();
      FUN_00e08490();
      FUN_00e08df0();
      FUN_00e055a0();
      FUN_00e08fe0();
      FUN_00e07ae0();
    }
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

