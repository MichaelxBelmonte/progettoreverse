// Function: FUN_01dcc4e0
// Address: 01dcc4e0
// Size: 706 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dcc4e0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  char unaff_SIL;
  int64_t *local_38;
  char local_30;
  int64_t *local_28;
  
  FUN_01dccc70();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != (int64_t *)0x0) == (bool)unaff_SIL) {
    return;
  }
  FUN_01e40eb0();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01dcc53f;
    }
    local_28 = (int64_t *)0x0;
  }
  else {
LAB_01dcc53f:
    local_28 = local_38;
    if (local_38 != (int64_t *)0x0) {
      FUN_01e40eb0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01dcc5d6;
    }
  }
  local_38 = (int64_t *)0x0;
LAB_01dcc5d6:
  if ((g_026f0e00 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  plVar1 = g_02802688;
  if (local_38 != (int64_t *)0x0) {
    (**(code **)(*local_38 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = g_02802688;
    if (cVar2 != '\0') {
      plVar1 = local_28;
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    if (unaff_SIL == '\0') {
      FUN_01d97f00();
    }
    else {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(puVar4 + 0x27) = 0;
      *puVar4 = &g_02697bb0;
      puVar4[2] = &g_026984e8;
      puVar4[0x28] = 0;
      *(void*)(puVar4 + 0x29) = 0;
      (*g_02697bc8)();
      FUN_01d97f00();
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (local_28 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

