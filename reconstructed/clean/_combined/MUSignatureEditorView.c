// ===================================================================
// MUSignatureEditorView — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   MUEditTimelineMode _editTimelineMode


// ============================================================
// 0085d370
// ============================================================
// Function: FUN_0085d370
// Address: 0085d370
// Size: 626 bytes
// Class: MUSignatureEditorView
// String references:
//   "MUSignatureEditorView"
//   "MUEditTimelineMode"
//   "_editTimelineMode"
//   "=MUEditTimelineModeNone"
//   "=MUEditTimelineAndStretchElementsMode"
//   "=MUEditTimelineBackgroundOnlyMode"
// === MUSignatureEditorView properties ===
//   MUEditTimelineMode _editTimelineMode


void* FUN_0085d370(void)

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
      g_0273cbf0 = "_editTimelineMode";
      g_0273cbf8 = &g_0273c730;
      g_0273cc00 = 0;
      g_0273cc08 = 0x6500;
      g_0273cc10 = "MUEditTimelineMode";
      g_0273cc18 = &g_0271ad98;
      g_0273cc20 = 0;
      ram_000000000273cc28 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0273cbf0;
}



// ============================================================
// 008149f0
// ============================================================
// Function: FUN_008149f0
// Address: 008149f0
// Size: 503 bytes
// Class: MUSignatureEditorView
// String references:
//   "MUSignatureEditorView"
// === MUSignatureEditorView properties ===
//   MUEditTimelineMode _editTimelineMode


void FUN_008149f0(void)

{
  int iVar1;
  uint32_t uVar2;
  
  // [STATIC_INIT: property registration]
  if (g_0273c7eb != '\0') {
    return;
  }
  FUN_000a31d0();
  FUN_00e87760();
  FUN_0006daf0();
  FUN_00d50c00();
  FUN_0085a740();
  FUN_00d50c00();
  FUN_00e87770();
  uVar2 = FUN_01c86590();
  FUN_00e87920(uVar2,0);
  FUN_01c86750();
  FUN_0085d930();
  FUN_0085d930();
  return;
}

