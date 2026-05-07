// Function: FUN_005f3190
// Address: 005f3190
// Size: 598 bytes
// Class: MDViewSettings
// String references:
//   "MDViewSettings"
//   "MUEditTimelineMode"
//   "_tempoEditorInEditor"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"
// === MDViewSettings properties ===
//   MUEditTimelineMode _tempoEditorInEditor
//   MDMainResponderViewId _mainResponderViewId
//   MDInspectorPosition _inspectorRightPosition
//   MDInspectorPosition _inspectorLeftPosition
//                   _volume
//                   _pitch
//                   _pitchRange
//                   _formant
//                   _formantRange
//                   _guiCycleTimeJump
//                   _isCycling
//                   _guiRenderParameter


void* FUN_005f3190(void)

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
      g_02720aa0 = "_tempoEditorInEditor";
      g_02720aa8 = &g_027205e8;
      g_02720ab0 = 0;
      g_02720ab8 = 0x6500;
      g_02720ac0 = "MUEditTimelineMode";
      g_02720ac8 = &g_0271ad98;
      g_02720ad0 = 0;
      ram_0000000002720ad8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02720aa0;
}

