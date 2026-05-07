// Function: FUN_01c44e90
// Address: 01c44e90
// Size: 881 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c44e90(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  void *pvVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(arg1 + 0x198) == 0) {
    if (*(int64_t *)(arg1 + 0x1a8) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar2 = *(int64_t *)(arg1 + 0x1a8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01c451ce;
    }
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    if (*(int64_t *)(arg1 + 0x168) == 0) {
      lVar2 = *(int64_t *)(arg1 + 0x198);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = *(int64_t **)(arg1 + 0x168);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0xa00))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
LAB_01c451ce:
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) goto LAB_01c451e9;
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_01c451e9;
    }
  }
  local_38 = 0;
LAB_01c451e9:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

