// Function: FUN_0010cbb0
// Address: 0010cbb0
// Size: 795 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0010cbb0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *plVar8;
  void*arg1;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  plVar8 = (int64_t *)*param_2;
  FUN_001152a0();
  if (plVar8 == (int64_t *)0x0) {
LAB_0010cbf8:
    plVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = param_2;
    if (cVar5 == '\0') goto LAB_0010cbf8;
  }
  lVar3 = plVar8[1];
  if (((char)lVar3 == '\0') || (*plVar8 == 0)) {
    if (*plVar8 != 0) goto LAB_0010cc24;
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
LAB_0010cc24:
    pvVar6 = _pthread_getspecific((void*)plVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if (local_40 == '\0') {
      if (local_48 != 0) goto LAB_0010cc87;
    }
    else if (local_48 != 0) {
      FUN_00d50b20();
LAB_0010cc87:
      FUN_00dd6a00();
      local_48 = g_026e1370;
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
        local_48 = g_026e1370;
      }
      g_026e1370 = local_48;
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      FUN_00ca0840();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
    }
    bVar1 = false;
  }
  pVar7 = (void*)plVar8;
  plVar8 = (int64_t *)*param_2;
  FUN_001154a0();
  if (plVar8 == (int64_t *)0x0) {
LAB_0010cd7c:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0010cd7c;
  }
  lVar4 = param_2[1];
  if (((char)lVar4 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) goto LAB_0010ce9e;
  }
  else {
    FUN_00d50b00();
  }
  plVar8 = (int64_t *)*arg1;
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  lVar2 = g_02765280;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    lVar2 = g_02765280;
  }
  g_02765280 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar8 + 0x4f0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((char)lVar4 != '\0') {
    FUN_00d50b20();
  }
LAB_0010ce9e:
  if ((char)lVar3 != '\0' && !bVar1) {
    FUN_00d50b20();
  }
  return;
}

