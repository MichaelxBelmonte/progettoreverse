// ===================================================================
// MULoopToneDummyEnumRegistrationClass — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (1):
//   MULoopTone      _tone


// ============================================================
// 017d81c0
// ============================================================
// Function: FUN_017d81c0
// Address: 017d81c0
// Size: 613 bytes
// Class: MULoopToneDummyEnumRegistrationClass
// String references:
//   "MULoopToneDummyEnumRegistrationClass"
//   "_tone"
//   "MULoopTone"
//   "=MULoopToneUndefined"
//   "=MULoopToneDark"
// === MULoopToneDummyEnumRegistrationClass properties ===
//   MULoopTone      _tone


void* FUN_017d81c0(void)

{
  bool bVar1;
  int iVar2;
  
  if (g_027dd048 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *g_027dd000 != '=';
      g_027dd030 = -(uint)(*g_027dd000 == '=');
      g_027dd034 = 0;
      if (*g_027dd008 != '=') {
        g_027dd034 = (uint)bVar1;
      }
      g_027dd038 = g_027dd034 + 1;
      g_027dd03c = g_027dd034 + 2;
      g_027dd040 = g_027dd034 == bVar1;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027d40a0 = "_tone";
      g_027d40a8 = &g_027d3fd0;
      g_027d40b0 = 0;
      g_027d40b8 = 0x6500;
      g_027d40c0 = "MULoopTone";
      g_027d40c8 = &g_027dd050;
      g_027d40d0 = 0;
      ram_00000000027d40d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027d40a0;
}

