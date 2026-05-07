// Function: FUN_019fbe00
// Address: 019fbe00
// Size: 783 bytes
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


int64_t * FUN_019fbe00(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  void *pvVar6;
  void* pVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_58;
  
  pVar7 = (void*)param_1;
  lVar1 = *param_2;
  lVar3 = param_2[1];
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  if (*(int64_t *)(arg1 + 0x18) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    lVar2 = *(int64_t *)(arg1 + 0x18);
    *(int64_t **)(arg1 + 0x18) = plVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00ca18c0();
  if (cVar4 != '\0') {
    FUN_019fcd40();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    goto LAB_019fc0cd;
  }
  if (*param_1 == 0) {
    local_68 = '\0';
    local_70 = 0;
LAB_019fbf7f:
    local_58 = 0;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    if (local_68 == '\0') {
      if (local_70 == 0) goto LAB_019fbf7f;
      FUN_00d50b00();
      local_58 = local_70;
    }
    else {
      local_58 = local_70;
      local_68 = '\0';
    }
  }
  FUN_01718c10();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ca0840();
LAB_019fc0cd:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

