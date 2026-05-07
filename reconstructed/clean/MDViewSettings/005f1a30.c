// Function: FUN_005f1a30
// Address: 005f1a30
// Size: 629 bytes
// Class: MDViewSettings
// String references:
//   "MDViewSettings"
//   "MDInspectorPosition"
//   "_inspectorRightPosition"
//   "=MDInspectorPositionOff"
//   "=MDInspectorPositionSide"
//   "=MDInspectorPositionArranger"
//   "=MDInspectorPositionEditor"
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


void* FUN_005f1a30(void)

{
  uint uVar1;
  int iVar2;
  
  if (g_02720748 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      g_02720730 = -(uint)(*g_02720700 == '=');
      uVar1 = (uint)(*g_02720700 != '=');
      g_02720734 = 0;
      if (*g_02720708 != '=') {
        g_02720734 = uVar1;
      }
      g_02720738 = 1;
      if (*g_02720710 != '=') {
        g_02720738 = g_02720734 + 1;
      }
      g_0272073c = 2;
      if (*g_02720718 != '=') {
        g_0272073c = g_02720738 + 1;
      }
      g_02720740 = g_02720734 == uVar1 &&
                     (g_02720738 == g_02720734 + 1 && g_0272073c == g_02720738 + 1);
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02720788 = "_inspectorRightPosition";
      g_02720790 = &g_027205e8;
      g_02720798 = 0;
      g_027207a0 = 0x6500;
      g_027207a8 = "MDInspectorPosition";
      g_027207b0 = &g_02720750;
      g_027207b8 = 0;
      ram_00000000027207c0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02720788;
}

