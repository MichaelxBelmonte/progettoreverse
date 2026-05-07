// Function: FUN_01b1e460
// Address: 01b1e460
// Size: 646 bytes
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


float FUN_01b1e460(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t this_ptr;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t local_48;
  char local_40;
  
  FUN_01ad3cb0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar3 = (float)FUN_01742280();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar4 = (float)FUN_01742280();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar5 = (float)FUN_017708f0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01770870();
  fVar3 = fVar3 - fVar4;
  if ((cVar1 != '\0') && (*(char *)(this_ptr + 0x188) == '\0')) {
    for (; fVar5 <= fVar3; fVar3 = fVar3 - fVar5) {
    }
    for (; fVar3 < 0.0; fVar3 = fVar3 + fVar5) {
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return fVar3;
}

