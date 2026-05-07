// Function: FUN_019b8500
// Address: 019b8500
// Size: 840 bytes
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


void FUN_019b8500(double param_1,double param_2)

{
  char cVar1;
  void*puVar2;
  void *pvVar3;
  void*puVar4;
  int64_t *this_ptr;
  int iVar5;
  uint64_t uVar6;
  double dVar7;
  int64_t local_98;
  char local_90;
  int64_t local_60;
  char local_58;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &g_02572358;
  *puVar2 = &g_02572358;
  uVar6 = (*g_02572370)();
  uVar6 = (**(code **)(*this_ptr + 0x9b0))(uVar6,0);
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_019b8809;
    FUN_00d50b00();
  }
  else if (local_98 == 0) goto LAB_019b8809;
  if (0 < *(int *)(local_98 + 0xc)) {
    iVar5 = 0;
    do {
      if (param_2 <= g_02390448) {
LAB_019b86f0:
        pvVar3 = _pthread_getspecific((void*)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        cVar1 = FUN_00d23d70();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          FUN_00d21140();
        }
      }
      else {
        pvVar3 = _pthread_getspecific((void*)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_0125a280();
        if (param_1 <= dVar7) {
          pvVar3 = _pthread_getspecific((void*)puVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar7 = (double)FUN_01259520();
          if (dVar7 <= param_1 + param_2) goto LAB_019b86f0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_98 + 0xc));
  }
  FUN_001159b0();
  uVar6 = FUN_00d50b20();
LAB_019b8809:
  (**(code **)(*this_ptr + 0xdc8))(uVar6,1);
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

