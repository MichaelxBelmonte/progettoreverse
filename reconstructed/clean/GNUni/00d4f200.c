// Function: FUN_00d4f200
// Address: 00d4f200
// Size: 794 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNObject"
//   "GNMethodInvocation"
//   "GNKeyValueGetBinding"
//   "GNMethodInvocationKeyValueGetBinding"
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


void FUN_00d4f200(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  uint32_t uVar4;
  
  if ((g_0277df98 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
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
    g_0277ded0 = "GNMethodInvocationKeyValueGetBinding";
    g_0277ded8 = 0x18;
    g_0277dee0 = FUN_00d66800;
    g_0277dee8 = &g_0277de00;
    g_0277def0 = 0;
    ram_000000000277def8 = 0;
    g_0277df00 = 0;
    g_0277df78 = 0;
    ram_000000000277df80 = 0;
    g_0277df88 = 0;
    g_0277df8a = 3;
    g_0277df08 = 0;
    ram_000000000277df10 = 0;
    g_0277df18 = 0;
    ram_000000000277df20 = 0;
    g_0277df28 = 0;
    ram_000000000277df30 = 0;
    g_0277df38 = 0;
    ram_000000000277df40 = 0;
    g_0277df48 = 0;
    ram_000000000277df50 = 0;
    g_0277df58 = 0;
    ram_000000000277df60 = 0;
    g_0277df68 = 0;
    ram_000000000277df70 = 0;
    g_0277df93 = 0;
    g_0277df8b = 0;
    ___cxa_guard_release();
  }
  if (g_0277df8b == '\0') {
    FUN_00d4f020();
    FUN_00e87760();
    lVar2 = FUN_00d66830();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_00d66a90();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNMethodInvocation");
    }
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
  }
  return;
}

