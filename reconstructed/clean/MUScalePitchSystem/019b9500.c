// Function: FUN_019b9500
// Address: 019b9500
// Size: 1002 bytes
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


void FUN_019b9500(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int local_50;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      cVar2 = FUN_00d23d70();
      if (cVar2 == '\0') {
        FUN_00d21140();
      }
    }
    FUN_001159b0();
    if ((*arg1 != 0) && (lVar1 = this_ptr[0x41], lVar1 != 0)) {
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
        cVar2 = FUN_00d23d70();
        if (cVar2 == '\0') {
          FUN_00d21140();
        }
      }
      FUN_001159b0();
    }
  }
  if (*(int *)((int64_t)puVar3 + 0xc) != 0) {
    lVar1 = *arg1;
    FUN_00d243f0();
    if (this_ptr[0x94] != 0) {
      this_ptr[0x94] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0x95] != 0) {
      this_ptr[0x95] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xb10))();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((*(char *)((int64_t)this_ptr + 0x21c) == '\0') &&
       (cVar2 = (**(code **)((int64_t)&dylib_command_000013a0.dylib.name.offset + *this_ptr))(),
       cVar2 == '\0')) {
      (**(code **)(*this_ptr + 0xa70))();
    }
    else {
      (**(code **)(*this_ptr + 0x620))();
    }
    (**(code **)(*this_ptr + 0xeb8))();
    (**(code **)(*this_ptr + 0x400))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

