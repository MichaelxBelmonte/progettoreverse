// Function: FUN_01c93360
// Address: 01c93360
// Size: 592 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c93360(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t **pplVar5;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  plVar3 = (int64_t *)*param_2;
  FUN_001152a0();
  if (plVar3 == (int64_t *)0x0) {
LAB_01c933a5:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c933a5;
  }
  local_31 = (char)param_2[1];
  if ((local_31 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar1 = g_026e1370;
  if (g_026e1370 != 0) {
    FUN_00d50b00();
  }
  pplVar5 = &local_48;
  FUN_000175c0();
  plVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_01c93593;
  plVar3 = (int64_t *)FUN_00dd6dc0();
  local_48 = plVar3;
  FUN_001156b0();
  if (plVar3 == (int64_t *)0x0) {
LAB_01c93471:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c93471;
  }
  plVar3 = *pplVar5;
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (*(char *)(this_ptr + 0x28) == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd9a0();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef3f0();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01c93593:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}

