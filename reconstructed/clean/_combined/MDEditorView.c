// ===================================================================
// MDEditorView — Complete reconstructed pseudocode
// 6 functions
// ===================================================================

// Registered properties (2):
//   MUScaleRulerViewDisplayMode _toMode
//   MUScaleRulerViewDisplayMode _fromMode


// ============================================================
// 00770390
// ============================================================
// Function: FUN_00770390
// Address: 00770390
// Size: 871 bytes
// Class: MDEditorView
// String references:
//   "_endRecordingOnUndo"
//   "_endTransferOnUndo"
// === MDEditorView properties ===
//   MUScaleRulerViewDisplayMode _toMode
//   MUScaleRulerViewDisplayMode _fromMode


void FUN_00770390(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  int64_t *local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  uint32_t local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar6 = &local_50;
  FUN_00d3ecf0();
  plVar1 = local_50;
  FUN_000fe4b0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_007703e9;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_007703e9:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_013fe9a0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    FUN_00757c60();
    plVar2 = local_50;
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_80) {
      *(int *)((int64_t)this_ptr + 0x16c) = *(int *)((int64_t)this_ptr + 0x16c) + 1;
      if (this_ptr[0x29] != 0) {
        FUN_00100160();
      }
      (**(code **)(*plVar1 + 0x3e0))();
      FUN_013fe9d0();
      plVar2 = local_50;
      if (((((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), (char)local_48 != '\0')) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0x29] == 0) {
        FUN_007647b0();
      }
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_50 + 0x788))();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        FUN_00770960();
      }
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_50 + 0x450))();
      pcVar5 = "_endTransferOnUndo";
      if (cVar3 != '\0') {
        pcVar5 = "_endRecordingOnUndo";
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x498))();
      FUN_00cb1f10();
      FUN_00d50b00();
      local_48 = 1;
      local_50 = &g_024c5048;
      local_38 = 0;
      FUN_00d50b00();
      local_38 = '\x01';
      local_40 = plVar1;
      FUN_00db2810(&g_0272a2a0,pcVar5,&local_50);
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0076ffb0
// ============================================================
// Function: FUN_0076ffb0
// Address: 0076ffb0
// Size: 705 bytes
// Class: MDEditorView
// String references:
//   "MDEditorView"
// === MDEditorView properties ===
//   MUScaleRulerViewDisplayMode _toMode
//   MUScaleRulerViewDisplayMode _fromMode


void FUN_0076ffb0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t this_ptr;
  int64_t **pplVar5;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000829c0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0077001f:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0077001f;
  }
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  if ((g_0271a0b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0272a1e8 = FUN_000914a0();
    g_0272a1d0 = "MDEditorView";
    g_0272a1d8 = 0x560;
    g_0272a1e0 = FUN_0034df50;
    g_0272a1f0 = 0;
    ram_000000000272a1f8 = 0;
    g_0272a200 = 0;
    g_0272a278 = 0;
    ram_000000000272a280 = 0;
    g_0272a288 = 0;
    g_0272a28a = 1;
    g_0272a208 = 0;
    ram_000000000272a210 = 0;
    g_0272a218 = 0;
    ram_000000000272a220 = 0;
    g_0272a228 = 0;
    ram_000000000272a230 = 0;
    g_0272a238 = 0;
    ram_000000000272a240 = 0;
    g_0272a248 = 0;
    ram_000000000272a250 = 0;
    g_0272a258 = 0;
    ram_000000000272a260 = 0;
    g_0272a268 = 0;
    ram_000000000272a270 = 0;
    g_0272a293 = 0;
    g_0272a28b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_007700ba:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007700ba;
  }
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_0034d920();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00770154;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_00770154:
  plVar1 = *pplVar5;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00324fe0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 005631a0
// ============================================================
// Function: FUN_005631a0
// Address: 005631a0
// Size: 638 bytes
// Class: MDEditorView
// String references:
//   "MDEditorView"
// === MDEditorView properties ===
//   MUScaleRulerViewDisplayMode _toMode
//   MUScaleRulerViewDisplayMode _fromMode


void FUN_005631a0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_5c0;
  int64_t local_5a0;
  
  if ((g_0271a0b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0272a1e8 = FUN_000914a0();
    g_0272a1d0 = "MDEditorView";
    g_0272a1d8 = 0x560;
    g_0272a1e0 = FUN_0034df50;
    g_0272a1f0 = 0;
    ram_000000000272a1f8 = 0;
    g_0272a200 = 0;
    g_0272a278 = 0;
    ram_000000000272a280 = 0;
    g_0272a288 = 0;
    g_0272a28a = 1;
    g_0272a208 = 0;
    ram_000000000272a210 = 0;
    g_0272a218 = 0;
    ram_000000000272a220 = 0;
    g_0272a228 = 0;
    ram_000000000272a230 = 0;
    g_0272a238 = 0;
    ram_000000000272a240 = 0;
    g_0272a248 = 0;
    ram_000000000272a250 = 0;
    g_0272a258 = 0;
    ram_000000000272a260 = 0;
    g_0272a268 = 0;
    ram_000000000272a270 = 0;
    g_0272a293 = 0;
    g_0272a28b = 0;
    ___cxa_guard_release();
  }
  if (g_0272a28b == '\0') {
    FUN_0059e680();
    FUN_00e87760();
    FUN_000916b0();
    FUN_00d50c00();
    FUN_005bda10();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00392400();
    FUN_00e87920(uVar2,0);
    if (local_5a0 != 0) {
      FUN_00d50b20();
    }
    if (local_5c0 != 0) {
      FUN_00d50b20();
    }
    FUN_0034d310();
    FUN_0034d310();
  }
  return;
}



// ============================================================
// 005bda10
// ============================================================
// Function: FUN_005bda10
// Address: 005bda10
// Size: 1159 bytes
// Class: MDEditorView
// String references:
//   "MDEditorView"
// === MDEditorView properties ===
//   MUScaleRulerViewDisplayMode _toMode
//   MUScaleRulerViewDisplayMode _fromMode


void FUN_005bda10(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0059ed40();
  *this_ptr = &g_024ee5b8;
  this_ptr[2] = &g_024efc60;
  this_ptr[0x28] = &g_024efca0;
  this_ptr[0x29] = &g_024efcf0;
  this_ptr[0x2a] = &g_024efd20;
  FUN_005bdee0();
  *(void*)(this_ptr + 0xa8) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272a28b == '\0') {
    FUN_005be210();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x541) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272a28b == '\0') {
    FUN_005be3a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x544) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272a28b == '\0') {
    FUN_005be530();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xa9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272a28b == '\0') {
    FUN_005be780();
    FUN_00e87980();
  }
  FUN_005be9d0();
  FUN_005becf0();
  return;
}



// ============================================================
// 005be530
// ============================================================
// Function: FUN_005be530
// Address: 005be530
// Size: 547 bytes
// Class: MDEditorView
// String references:
//   "MDEditorView"
//   "MUScaleRulerViewDisplayMode"
//   "_fromMode"
// === MDEditorView properties ===
//   MUScaleRulerViewDisplayMode _toMode
//   MUScaleRulerViewDisplayMode _fromMode


void* FUN_005be530(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271a190 = "_fromMode";
      g_0271a198 = &g_0272a1d0;
      g_0271a1a0 = 0;
      g_0271a1a8 = 0x6500;
      g_0271a1b0 = "MUScaleRulerViewDisplayMode";
      g_0271a1b8 = &g_0270f510;
      g_0271a1c0 = 0;
      ram_000000000271a1c8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271a190;
}



// ============================================================
// 005be780
// ============================================================
// Function: FUN_005be780
// Address: 005be780
// Size: 547 bytes
// Class: MDEditorView
// String references:
//   "MDEditorView"
//   "MUScaleRulerViewDisplayMode"
//   "_toMode"
// === MDEditorView properties ===
//   MUScaleRulerViewDisplayMode _toMode
//   MUScaleRulerViewDisplayMode _fromMode


void* FUN_005be780(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271a1d8 = "_toMode";
      g_0271a1e0 = &g_0272a1d0;
      g_0271a1e8 = 0;
      g_0271a1f0 = 0x6500;
      g_0271a1f8 = "MUScaleRulerViewDisplayMode";
      g_0271a200 = &g_0270f510;
      g_0271a208 = 0;
      ram_000000000271a210 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271a1d8;
}

