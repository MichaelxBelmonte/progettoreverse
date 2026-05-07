// Function: FUN_0173ef00
// Address: 0173ef00
// Size: 592 bytes
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


void FUN_0173ef00(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  uint64_t uVar5;
  void*puVar6;
  void* pVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t local_58;
  char local_50;
  void*local_48;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  pvVar4 = _pthread_getspecific((void*)puVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01738240();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = puVar3;
  if (lVar1 == 0) {
    lVar1 = *(int64_t *)(arg1 + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
    local_58 = 0;
    while( true ) {
      pVar7 = (void*)puVar6;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01738240();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_00e7bdb0();
      puVar6 = (void*)FUN_00e7bdb0();
      cVar2 = FUN_01252960(puVar6,uVar5,&local_58,0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') break;
      if (local_58 != 0) {
        local_40 = local_58;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return;
}

