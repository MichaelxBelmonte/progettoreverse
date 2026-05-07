// Function: FUN_01785110
// Address: 01785110
// Size: 613 bytes
// Class: MULoopComponentPitchRangeDummyEnumRegistrationClass
// String references:
//   "_dummy"
//   "MULoopComponentPitchRangeDummyEnumRegistrationClass"
//   "MULoopComponentPitchRange"
//   "=MULoopComponentPitchRangeUndefined"
//   "=MULoopComponentPitchRangeLow"
// === MULoopComponentPitchRangeDummyEnumRegistrationClass properties ===
//   MULoopComponentPitchRange _dummy


void* FUN_01785110(void)

{
  bool bVar1;
  int iVar2;
  
  if (g_027dd1f8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *g_027dd1b0 != '=';
      g_027dd1e0 = -(uint)(*g_027dd1b0 == '=');
      g_027dd1e4 = 0;
      if (*g_027dd1b8 != '=') {
        g_027dd1e4 = (uint)bVar1;
      }
      g_027dd1e8 = g_027dd1e4 + 1;
      g_027dd1ec = g_027dd1e4 + 2;
      g_027dd1f0 = g_027dd1e4 == bVar1;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027ced88 = "_dummy";
      g_027ced90 = &g_027cecb8;
      g_027ced98 = 0;
      g_027ceda0 = 0x6500;
      g_027ceda8 = "MULoopComponentPitchRange";
      g_027cedb0 = &g_027dd200;
      g_027cedb8 = 0;
      ram_00000000027cedc0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027ced88;
}

