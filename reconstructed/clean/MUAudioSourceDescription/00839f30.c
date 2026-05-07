// Function: FUN_00839f30
// Address: 00839f30
// Size: 581 bytes
// Class: MUAudioSourceDescription
// String references:
//   "MUPitchSystemRulerView"
//   "MUAudioSourceDescriptionType"
//   "_currentDescriptionType"
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void* FUN_00839f30(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027366f0 = "_currentDescriptionType";
      g_027366f8 = &g_026f9750;
      g_02736700 = 0;
      g_02736708 = 0x6500;
      g_02736710 = "MUAudioSourceDescriptionType";
      g_02736718 = &g_027153a8;
      g_02736720 = 0;
      ram_0000000002736728 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027366f0;
}

