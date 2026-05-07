// ===================================================================
// MULoopWorkflowStep — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//   MULoopWorkflowStep _workflowStep
//                   _referredFiles
//                   _sourcedLoopRelations


// ============================================================
// 011554e0
// ============================================================
// Function: FUN_011554e0
// Address: 011554e0
// Size: 571 bytes
// Class: MULoopWorkflowStep
// String references:
//   "MULoopWorkflowStep"
//   "_workflowStep"
//   "=MULoopWorkStepInvalid"
//   "=MULoopWorkStepCreated"
//   "=MULoopWorkStepUploaded"
//   "=MULoopWorkStepCanceled"
//   "=MULoopWorkPreReleased"
//   "=MULoopWorkReleased"
//   "=MULoopWorkArchived"
// === MULoopWorkflowStep properties ===
//   MULoopWorkflowStep _workflowStep
//                   _referredFiles
//                   _sourcedLoopRelations


void* FUN_011554e0(void)

{
  int iVar1;
  uint uVar2;
  
  if (g_027a0600 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      g_027a05e0 = -(uint)(*g_027a05a0 == '=');
      uVar2 = (uint)(*g_027a05a0 != '=');
      g_027a05e4 = 0;
      if (*g_027a05a8 != '=') {
        g_027a05e4 = uVar2;
      }
      g_027a05e8 = 1;
      if (*g_027a05b0 != '=') {
        g_027a05e8 = g_027a05e4 + 1;
      }
      g_027a05ec = 2;
      if (*g_027a05b8 != '=') {
        g_027a05ec = g_027a05e8 + 1;
      }
      g_027a05f0 = 3;
      if (*g_027a05c0 != '=') {
        g_027a05f0 = g_027a05ec + 1;
      }
      g_027a05f4 = 4;
      if (*g_027a05c8 != '=') {
        g_027a05f4 = g_027a05f0 + 1;
      }
      g_027a05f8 = 5;
      if (*g_027a05d0 != '=') {
        g_027a05f8 = g_027a05f4 + 1;
      }
      g_027a05fc = g_027a05e4 == uVar2 &&
                     ((g_027a05e8 == g_027a05e4 + 1 &&
                      (g_027a05ec == g_027a05e8 + 1 &&
                      (g_027a05f0 == g_027a05ec + 1 && g_027a05f4 == g_027a05f0 + 1)))
                     && g_027a05f8 == g_027a05f4 + 1);
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
  return &g_027a0558;
}

