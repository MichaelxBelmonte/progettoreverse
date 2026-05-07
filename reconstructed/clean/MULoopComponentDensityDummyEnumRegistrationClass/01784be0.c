// Function: FUN_01784be0
// Address: 01784be0
// Size: 613 bytes
// Class: MULoopComponentDensityDummyEnumRegistrationClass
// String references:
//   "MULoopComponentDensityDummyEnumRegistrationClass"
//   "_dummy"
//   "MULoopComponentDensity"
//   "=MULoopComponentDensityUndefined"
//   "=MULoopComponentDensityAiry"
// === MULoopComponentDensityDummyEnumRegistrationClass properties ===
//   MULoopComponentDensity _dummy


void* FUN_01784be0(void)

{
  bool bVar1;
  int iVar2;
  
  if (g_027dd168 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *g_027dd120 != '=';
      g_027dd150 = -(uint)(*g_027dd120 == '=');
      g_027dd154 = 0;
      if (*g_027dd128 != '=') {
        g_027dd154 = (uint)bVar1;
      }
      g_027dd158 = g_027dd154 + 1;
      g_027dd15c = g_027dd154 + 2;
      g_027dd160 = g_027dd154 == bVar1;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027cec60 = "_dummy";
      g_027cec68 = &g_027ceb90;
      g_027cec70 = 0;
      g_027cec78 = 0x6500;
      g_027cec80 = "MULoopComponentDensity";
      g_027cec88 = &g_027dd170;
      g_027cec90 = 0;
      ram_00000000027cec98 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027cec60;
}

