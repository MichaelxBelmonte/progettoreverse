// ===================================================================
// MDViewSettings — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (12):
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


// ============================================================
// 005f0ba0
// ============================================================
// Function: FUN_005f0ba0
// Address: 005f0ba0
// Size: 2622 bytes
// Class: MDViewSettings
// String references:
//   "MDViewSettings"
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


void FUN_005f0ba0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02509790;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f1790();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f1a30();
    FUN_00e87980();
  }
  FUN_005f1cd0();
  FUN_005f1f50();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f21d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f2340();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f24b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f2620();
    FUN_00e87980();
  }
  FUN_005f2790();
  FUN_005f2a10();
  FUN_005f2c90();
  FUN_005f2f10();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f3190();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f3410();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x55) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f3580();
    FUN_00e87980();
  }
  FUN_005f36f0();
  FUN_005f3970();
  FUN_005f3bf0();
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f3e70();
    FUN_00e87980();
  }
  FUN_005f40b0();
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027206a3 == '\0') {
    FUN_005f4330();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 005f1a30
// ============================================================
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



// ============================================================
// 005f1790
// ============================================================
// Function: FUN_005f1790
// Address: 005f1790
// Size: 629 bytes
// Class: MDViewSettings
// String references:
//   "MDViewSettings"
//   "MDInspectorPosition"
//   "_inspectorLeftPosition"
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


void* FUN_005f1790(void)

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
      g_027206b8 = "_inspectorLeftPosition";
      g_027206c0 = &g_027205e8;
      g_027206c8 = 0;
      g_027206d0 = 0x6500;
      g_027206d8 = "MDInspectorPosition";
      g_027206e0 = &g_02720750;
      g_027206e8 = 0;
      ram_00000000027206f0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027206b8;
}



// ============================================================
// 005f3190
// ============================================================
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



// ============================================================
// 005f3e70
// ============================================================
// Function: FUN_005f3e70
// Address: 005f3e70
// Size: 532 bytes
// Class: MDViewSettings
// String references:
//   "MDViewSettings"
//   "MDMainResponderViewId"
//   "_mainResponderViewId"
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


void* FUN_005f3e70(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02720c50 = "_mainResponderViewId";
      g_02720c58 = &g_027205e8;
      g_02720c60 = 0;
      g_02720c68 = 0x6500;
      g_02720c70 = "MDMainResponderViewId";
      g_02720c78 = &g_02720cd8;
      g_02720c80 = 0;
      ram_0000000002720c88 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02720c50;
}

