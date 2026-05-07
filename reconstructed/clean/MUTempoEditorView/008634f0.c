// Function: FUN_008634f0
// Address: 008634f0
// Size: 626 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUEditTimelineMode"
//   "_editTimelineMode"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void* FUN_008634f0(void)

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
      g_0273d410 = "_editTimelineMode";
      g_0273d418 = &g_0273cec0;
      g_0273d420 = 0;
      g_0273d428 = 0x6500;
      g_0273d430 = "MUEditTimelineMode";
      g_0273d438 = &g_0271ad98;
      g_0273d440 = 0;
      ram_000000000273d448 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0273d410;
}

