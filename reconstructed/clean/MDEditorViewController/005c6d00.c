// Function: FUN_005c6d00
// Address: 005c6d00
// Size: 626 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MUEditTimelineMode"
//   "_tempoEditorMode"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void* FUN_005c6d00(void)

{
  bool bVar1;
  int iVar2;
  
  if (g_0271ad90 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *g_0271ad60 != '=';
      g_0271ad80 = -(uint)(*g_0271ad60 == '=');
      g_0271ad84 = 0;
      if (*g_0271ad68 != '=') {
        g_0271ad84 = (uint)bVar1;
      }
      g_0271ad88 = 1;
      if (*g_0271ad70 != '=') {
        g_0271ad88 = g_0271ad84 + 1;
      }
      g_0271ad8c = g_0271ad84 == bVar1 && g_0271ad88 == g_0271ad84 + 1;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271ad10 = "_tempoEditorMode";
      g_0271ad18 = &g_0270aa40;
      g_0271ad20 = 0;
      g_0271ad28 = 0x6500;
      g_0271ad30 = "MUEditTimelineMode";
      g_0271ad38 = &g_0271ad98;
      g_0271ad40 = 0;
      ram_000000000271ad48 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271ad10;
}

