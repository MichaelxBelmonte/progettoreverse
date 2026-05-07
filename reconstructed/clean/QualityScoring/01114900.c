// Function: FUN_01114900
// Address: 01114900
// Size: 3471 bytes
// Class: QualityScoring
// String references:
//   "bool"
//   "GNUni"
//   "GNFraction"
//   "_detectsChurchModes"
//   "_detectsDetailedModeChanges"
//   "GNInt"
//   "MUDataPointFunction"
//   "_detectsBassNote"
//   "_detectsChordExtensions"
//   "_omitDoubtedThirds"
//   "_detectsSingleMode"
//   "_reflectsPitchSystem"
//   "_detectsPitchSystem"
//   "_assumesLowestPitchAsRoot"
//   "_assumesClosePosition"
//   "_suggestsMissingThird"
//   "_suggestsMissingFifth"
//   "_reflectsBeatStrength"
//   "_reflectsPitch"
//   "_reflectsDynamic"
//   ... +3 more
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


void FUN_01114900(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_02601ab0;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3a) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3b) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3d) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01115860();
  *(void*)(this_ptr + 9) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4a) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4b) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4d) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4e) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4f) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xb] = 0x100000000;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115940();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115a30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  this_ptr[0xe] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115b20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  this_ptr[0xf] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  return;
}

