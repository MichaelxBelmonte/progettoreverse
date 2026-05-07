// Function: FUN_0010d0c0
// Address: 0010d0c0
// Size: 960 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0010d0c0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  plVar1 = (int64_t *)*param_2;
  FUN_001152a0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0010d105:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0010d105;
  }
  plVar1 = (int64_t *)*param_2;
  local_31 = (char)param_2[1];
  if ((local_31 == '\0') || (plVar1 == (int64_t *)0x0)) {
    if (plVar1 == (int64_t *)0x0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = g_026e1370;
  if (g_026e1370 != 0) {
    FUN_00d50b00();
  }
  pplVar6 = &local_48;
  FUN_000175c0();
  plVar4 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) goto LAB_0010d463;
  plVar4 = (int64_t *)FUN_00dd6dc0();
  local_48 = plVar4;
  FUN_001156b0();
  if (plVar4 == (int64_t *)0x0) {
LAB_0010d1e2:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0010d1e2;
  }
  plVar4 = *pplVar6;
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (*(char *)(this_ptr + 0x49) == '\0') {
    local_40 = '\0';
    local_48 = plVar1;
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    plVar1 = local_48;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      plVar1 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0010d690();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd9a0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef3f0();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0010d463:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}

