// Function: FUN_01d4e050
// Address: 01d4e050
// Size: 547 bytes
// Class: QualityScoring
// String references:
//   "GNGraphicsContextState"
//   "GNFilterQuality"
//   "_filterQuality"
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void* FUN_01d4e050(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027f0448 = "_filterQuality";
      g_027f0450 = &g_027eff78;
      g_027f0458 = 0;
      g_027f0460 = 0x6500;
      g_027f0468 = "GNFilterQuality";
      g_027f0470 = &g_027f04e0;
      g_027f0478 = 0;
      ram_00000000027f0480 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027f0448;
}

