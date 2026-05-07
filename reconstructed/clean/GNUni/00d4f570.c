// Function: FUN_00d4f570
// Address: 00d4f570
// Size: 794 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNObject"
//   "GNProperty"
//   "GNKeyValueGetBinding"
//   "GNDirectAccessKeyValueGetBinding"
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


void FUN_00d4f570(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  uint32_t uVar4;
  
  if ((g_0277e0b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    if ((g_0277dec8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      if ((g_028a7d98 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
        g_028a7cd0 = "GNObject";
        g_028a7cd8 = 0x10;
        g_028a7ce0 = FUN_00d4ff10;
        g_028a7ce8 = 0;
        ram_00000000028a7cf0 = 0;
        g_028a7cf8 = 0;
        ram_00000000028a7d00 = 0;
        g_028a7d08 = 0;
        ram_00000000028a7d10 = 0;
        g_028a7d18 = 0;
        ram_00000000028a7d20 = 0;
        g_028a7d28 = 0;
        ram_00000000028a7d30 = 0;
        g_028a7d38 = 0;
        ram_00000000028a7d40 = 0;
        g_028a7d48 = 0;
        ram_00000000028a7d50 = 0;
        g_028a7d58 = 0;
        ram_00000000028a7d60 = 0;
        g_028a7d68 = 0;
        ram_00000000028a7d70 = 0;
        g_028a7d78 = 0;
        ram_00000000028a7d80 = 0;
        g_028a7d84 = 0;
        ram_00000000028a7d88 = 0;
        ram_00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      g_0277de00 = "GNKeyValueGetBinding";
      g_0277de08 = 0x10;
      g_0277de10 = FUN_00d667d0;
      g_0277de18 = &g_028a7cd0;
      g_0277de20 = 0;
      ram_000000000277de28 = 0;
      g_0277de30 = 0;
      g_0277dea8 = 0;
      ram_000000000277deb0 = 0;
      g_0277deb8 = 0;
      g_0277deba = 3;
      g_0277de38 = 0;
      ram_000000000277de40 = 0;
      g_0277de48 = 0;
      ram_000000000277de50 = 0;
      g_0277de58 = 0;
      ram_000000000277de60 = 0;
      g_0277de68 = 0;
      ram_000000000277de70 = 0;
      g_0277de78 = 0;
      ram_000000000277de80 = 0;
      g_0277de88 = 0;
      ram_000000000277de90 = 0;
      g_0277de98 = 0;
      ram_000000000277dea0 = 0;
      g_0277dec3 = 0;
      g_0277debb = 0;
      ___cxa_guard_release();
    }
    g_0277dfe8 = "GNDirectAccessKeyValueGetBinding";
    g_0277dff0 = 0x18;
    g_0277dff8 = FUN_00d66b80;
    g_0277e000 = &g_0277de00;
    g_0277e008 = 0;
    ram_000000000277e010 = 0;
    g_0277e018 = 0;
    g_0277e090 = 0;
    ram_000000000277e098 = 0;
    g_0277e0a0 = 0;
    g_0277e0a2 = 3;
    g_0277e020 = 0;
    ram_000000000277e028 = 0;
    g_0277e030 = 0;
    ram_000000000277e038 = 0;
    g_0277e040 = 0;
    ram_000000000277e048 = 0;
    g_0277e050 = 0;
    ram_000000000277e058 = 0;
    g_0277e060 = 0;
    ram_000000000277e068 = 0;
    g_0277e070 = 0;
    ram_000000000277e078 = 0;
    g_0277e080 = 0;
    ram_000000000277e088 = 0;
    g_0277e0ab = 0;
    g_0277e0a3 = 0;
    ___cxa_guard_release();
  }
  if (g_0277e0a3 == '\0') {
    FUN_00d4f020();
    FUN_00e87760();
    lVar2 = FUN_00d66bb0();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_00d66e10();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNProperty");
    }
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
  }
  return;
}

