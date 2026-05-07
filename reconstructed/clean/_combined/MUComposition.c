// ===================================================================
// MUComposition — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//   bool            _didRequestCacheValidation
//   bool            _isPitchSystemCacheValid
//   bool            _isDerivedKeySequenceCacheValid


// ============================================================
// 01182110
// ============================================================
// Function: FUN_01182110
// Address: 01182110
// Size: 1862 bytes
// Class: MUComposition
// String references:
//   "bool"
//   "MUComposition"
//   "_rootPart"
//   "MUPart"
//   "MUQuarterSequence"
//   "_part"
//   "MUScaleModeSequence"
//   "MUNote"
//   "MUQuarterSequenceObserver"
//   "_didRequestCacheValidation"
//   "MUChordSequence"
//   "_parts"
//   "_subparts"
//   "_superpart"
//   "MUPartInstrument"
//   "MULyric"
//   "MUScaleTuningSequence"
//   "MUScalePitchSystemSequence"
//   "_isPitchSystemCacheValid"
//   "_isDerivedKeySequenceCacheValid"
//   ... +0 more
// === MUComposition properties ===
//   bool            _didRequestCacheValidation
//   bool            _isPitchSystemCacheValid
//   bool            _isDerivedKeySequenceCacheValid


void FUN_01182110(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  void*puVar11;
  
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
  *this_ptr = &g_025c7fc8;
  this_ptr[7] = &g_025d0720;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025e9b50;
  this_ptr[7] = &g_025e9ee8;
  this_ptr[8] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182b20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_part";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_superpart";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  this_ptr[10] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182d00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_subparts";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182df0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_rootPart";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUComposition");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182ee0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_part";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartInstrument");
  }
  puVar11 = this_ptr + 0xd;
  this_ptr[0xd] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01182fd0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterSequence",param_3,param_4,puVar11);
  }
  this_ptr[0xe] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011830c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_part";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MULyric");
  }
  this_ptr[0xf] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011831b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parts";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuningSequence");
  }
  this_ptr[0x10] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011832a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parts";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeSequence");
  }
  this_ptr[0x11] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183390();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parts";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUChordSequence");
  }
  this_ptr[0x12] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183480();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScalePitchSystemSequence");
  }
  this_ptr[0x13] = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183570();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUChordSequence");
  }
  *(void*)(this_ptr + 0x14) = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa1) = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa2) = 0;
  lVar9 = FUN_0013db50();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

