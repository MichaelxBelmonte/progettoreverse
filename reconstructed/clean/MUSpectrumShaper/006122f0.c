// Function: FUN_006122f0
// Address: 006122f0
// Size: 23419 bytes
// Class: MUSpectrumShaper
// String references:
//   "MDMetaWindowController"
//   "handleFeatureSetChanged"
//   "handleExport"
//   "handleWindowToPDF"
//   "handleSelectTimeGrid"
//   "handleToggleSnapToGrid"
//   "handleInspectorSideButton"
//   "handleToggleTransfer"
//   "handleAdvancedTempoDetection"
//   "handleShowInfoPanel"
//   "handleRedo2"
//   "handleDelete2"
//   "handleToggleClick"
//   "handleUnReferenzAllTracks"
//   "handleUnEditAllTracks"
//   "handleOpenInNewWindow"
//   "handleToggleMultitrackHeader"
//   "handleToggleMultitrackArrangement"
//   "handleToggleEditor"
//   "handleToggleDetectionEditor"
//   ... +45 more
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_006122f0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_0280a6c8 = "handleAdvancedTempoDetection";
      g_0280a6d0 = &g_026e0aa0;
      g_0280a6d8 = 0;
      g_0280a6e0 = &g_02725ab0;
      g_0280a6e8 = FUN_00658ef0;
      g_0280a6f0 = FUN_00617fb0;
      g_0280a6f8 = 0;
      ram_000000000280a700 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a710 = "handleShowInfoPanel";
      g_0280a718 = &g_026e0aa0;
      g_0280a720 = 0;
      g_0280a728 = &g_02725ab0;
      g_0280a730 = FUN_00658ef0;
      g_0280a738 = 0x6b9;
      g_0280a740 = 0;
      ram_000000000280a748 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a758 = "handleRedo2";
      g_0280a760 = &g_026e0aa0;
      g_0280a768 = 0;
      g_0280a770 = &g_02725ab0;
      g_0280a778 = FUN_00658ef0;
      g_0280a780 = FUN_00618110;
      g_0280a788 = 0;
      ram_000000000280a790 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a7a0 = "handleDelete2";
      g_0280a7a8 = &g_026e0aa0;
      g_0280a7b0 = 0;
      g_0280a7b8 = &g_02725ab0;
      g_0280a7c0 = FUN_00658ef0;
      g_0280a7c8 = FUN_00618390;
      g_0280a7d0 = 0;
      ram_000000000280a7d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a7e8 = "handleToggleClick";
      g_0280a7f0 = &g_026e0aa0;
      g_0280a7f8 = 0;
      g_0280a800 = &g_02725ab0;
      g_0280a808 = FUN_00658ef0;
      g_0280a810 = FUN_00618610;
      g_0280a818 = 0;
      ram_000000000280a820 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a830 = "handleToggleTransfer";
      g_0280a838 = &g_026e0aa0;
      g_0280a840 = 0;
      g_0280a848 = &g_02725ab0;
      g_0280a850 = FUN_00658ef0;
      g_0280a858 = FUN_006187d0;
      g_0280a860 = 0;
      ram_000000000280a868 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a878 = "handleUnReferenzAllTracks";
      g_0280a880 = &g_026e0aa0;
      g_0280a888 = 0;
      g_0280a890 = &g_02725ab0;
      g_0280a898 = FUN_00658ef0;
      g_0280a8a0 = FUN_00618b20;
      g_0280a8a8 = 0;
      ram_000000000280a8b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a8c0 = "handleUnEditAllTracks";
      g_0280a8c8 = &g_026e0aa0;
      g_0280a8d0 = 0;
      g_0280a8d8 = &g_02725ab0;
      g_0280a8e0 = FUN_00658ef0;
      g_0280a8e8 = FUN_00618b40;
      g_0280a8f0 = 0;
      ram_000000000280a8f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a908 = "handleOpenInNewWindow";
      g_0280a910 = &g_026e0aa0;
      g_0280a918 = 0;
      g_0280a920 = &g_02725ab0;
      g_0280a928 = FUN_00658ef0;
      g_0280a930 = FUN_00618b60;
      g_0280a938 = 0;
      ram_000000000280a940 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a950 = "handleToggleMultitrackHeader";
      g_0280a958 = &g_026e0aa0;
      g_0280a960 = 0;
      g_0280a968 = &g_02725ab0;
      g_0280a970 = FUN_00658ef0;
      g_0280a978 = FUN_00618db0;
      g_0280a980 = 0;
      ram_000000000280a988 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a998 = "handleToggleMultitrackArrangement";
      g_0280a9a0 = &g_026e0aa0;
      g_0280a9a8 = 0;
      g_0280a9b0 = &g_02725ab0;
      g_0280a9b8 = FUN_00658ef0;
      g_0280a9c0 = FUN_00618f70;
      g_0280a9c8 = 0;
      ram_000000000280a9d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a9e0 = "handleToggleEditor";
      g_0280a9e8 = &g_026e0aa0;
      g_0280a9f0 = 0;
      g_0280a9f8 = &g_02725ab0;
      g_0280aa00 = FUN_00658ef0;
      g_0280aa08 = FUN_00619340;
      g_0280aa10 = 0;
      ram_000000000280aa18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280aa28 = "handleToggleDetectionEditor";
      g_0280aa30 = &g_026e0aa0;
      g_0280aa38 = 0;
      g_0280aa40 = &g_02725ab0;
      g_0280aa48 = FUN_00658ef0;
      g_0280aa50 = FUN_00619800;
      g_0280aa58 = 0;
      ram_000000000280aa60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280aa70 = "handleToggleInspector";
      g_0280aa78 = &g_026e0aa0;
      g_0280aa80 = 0;
      g_0280aa88 = &g_02725ab0;
      g_0280aa90 = FUN_00658ef0;
      g_0280aa98 = FUN_0061a350;
      g_0280aaa0 = 0;
      ram_000000000280aaa8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280aab8 = "handleToggleInspectorDownLeft";
      g_0280aac0 = &g_026e0aa0;
      g_0280aac8 = 0;
      g_0280aad0 = &g_02725ab0;
      g_0280aad8 = FUN_00658ef0;
      g_0280aae0 = FUN_0061a380;
      g_0280aae8 = 0;
      ram_000000000280aaf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ab00 = "handleToggleSpectrumShaper";
      g_0280ab08 = &g_026e0aa0;
      g_0280ab10 = 0;
      g_0280ab18 = &g_02725ab0;
      g_0280ab20 = FUN_00658ef0;
      g_0280ab28 = FUN_0061abd0;
      g_0280ab30 = 0;
      ram_000000000280ab38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ab48 = "handleInspectorPosMenu";
      g_0280ab50 = &g_026e0aa0;
      g_0280ab58 = 0;
      g_0280ab60 = &g_02725ab0;
      g_0280ab68 = FUN_00658ef0;
      g_0280ab70 = FUN_0061ae10;
      g_0280ab78 = 0;
      ram_000000000280ab80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ab90 = "handleShowTrackInspector";
      g_0280ab98 = &g_026e0aa0;
      g_0280aba0 = 0;
      g_0280aba8 = &g_02725ab0;
      g_0280abb0 = FUN_00658ef0;
      g_0280abb8 = FUN_0061af10;
      g_0280abc0 = 0;
      ram_000000000280abc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280abd8 = "handleShowNoteInspector";
      g_0280abe0 = &g_026e0aa0;
      g_0280abe8 = 0;
      g_0280abf0 = &g_02725ab0;
      g_0280abf8 = FUN_00658ef0;
      g_0280ac00 = FUN_0061af90;
      g_0280ac08 = 0;
      ram_000000000280ac10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ac20 = "handleShowLayerInspector";
      g_0280ac28 = &g_026e0aa0;
      g_0280ac30 = 0;
      g_0280ac38 = &g_02725ab0;
      g_0280ac40 = FUN_00658ef0;
      g_0280ac48 = FUN_0061b010;
      g_0280ac50 = 0;
      ram_000000000280ac58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ac68 = "handleShowFiles";
      g_0280ac70 = &g_026e0aa0;
      g_0280ac78 = 0;
      g_0280ac80 = &g_02725ab0;
      g_0280ac88 = FUN_00658ef0;
      g_0280ac90 = FUN_0061b090;
      g_0280ac98 = 0;
      ram_000000000280aca0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280acb0 = "handleToggleTransport";
      g_0280acb8 = &g_026e0aa0;
      g_0280acc0 = 0;
      g_0280acc8 = &g_02725ab0;
      g_0280acd0 = FUN_00658ef0;
      g_0280acd8 = FUN_0061b110;
      g_0280ace0 = 0;
      ram_000000000280ace8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280acf8 = "handleRevertToSaved";
      g_0280ad00 = &g_026e0aa0;
      g_0280ad08 = 0;
      g_0280ad10 = &g_02725ab0;
      g_0280ad18 = FUN_00658ef0;
      g_0280ad20 = 0x6b1;
      g_0280ad28 = 0;
      ram_000000000280ad30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ad40 = "handlePluginImportTempo";
      g_0280ad48 = &g_026e0aa0;
      g_0280ad50 = 0;
      g_0280ad58 = &g_02725ab0;
      g_0280ad60 = FUN_00658ef0;
      g_0280ad68 = FUN_0061b220;
      g_0280ad70 = 0;
      ram_000000000280ad78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ad88 = "handlePluginPreferences";
      g_0280ad90 = &g_026e0aa0;
      g_0280ad98 = 0;
      g_0280ada0 = &g_02725ab0;
      g_0280ada8 = FUN_00658ef0;
      g_0280adb0 = FUN_0061b4b0;
      g_0280adb8 = 0;
      ram_000000000280adc0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280add0 = "handlePluginSaveAsMidi";
      g_0280add8 = &g_026e0aa0;
      g_0280ade0 = 0;
      g_0280ade8 = &g_02725ab0;
      g_0280adf0 = FUN_00658ef0;
      g_0280adf8 = FUN_0061b570;
      g_0280ae00 = 0;
      ram_000000000280ae08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ae18 = "handleFollowCursorTracks";
      g_0280ae20 = &g_026e0aa0;
      g_0280ae28 = 0;
      g_0280ae30 = &g_02725ab0;
      g_0280ae38 = FUN_00658ef0;
      g_0280ae40 = FUN_0061ce00;
      g_0280ae48 = 0;
      ram_000000000280ae50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ae60 = "handleFollowCursorEditor";
      g_0280ae68 = &g_026e0aa0;
      g_0280ae70 = 0;
      g_0280ae78 = &g_02725ab0;
      g_0280ae80 = FUN_00658ef0;
      g_0280ae88 = FUN_0061d050;
      g_0280ae90 = 0;
      ram_000000000280ae98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280aea8 = "handleImportAudio";
      g_0280aeb0 = &g_026e0aa0;
      g_0280aeb8 = 0;
      g_0280aec0 = &g_02725ab0;
      g_0280aec8 = FUN_00658ef0;
      g_0280aed0 = FUN_0061d290;
      g_0280aed8 = 0;
      ram_000000000280aee0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280aef0 = "handleExport";
      g_0280aef8 = &g_026e0aa0;
      g_0280af00 = 0;
      g_0280af08 = &g_02725ab0;
      g_0280af10 = FUN_00658ef0;
      g_0280af18 = FUN_0061d350;
      g_0280af20 = 0;
      ram_000000000280af28 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280af38 = "handleExportTempoAsMidi";
      g_0280af40 = &g_026e0aa0;
      g_0280af48 = 0;
      g_0280af50 = &g_02725ab0;
      g_0280af58 = FUN_00658ef0;
      g_0280af60 = FUN_0061d410;
      g_0280af68 = 0;
      ram_000000000280af70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280af80 = "handleFeatureSetChanged";
      g_0280af88 = &g_026e0aa0;
      g_0280af90 = 0;
      g_0280af98 = &g_02725ab4;
      g_0280afa0 = FUN_00658f80;
      g_0280afa8 = 0x659;
      g_0280afb0 = 0;
      ram_000000000280afb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280afc8 = "handleTrackChanged";
      g_0280afd0 = &g_026e0aa0;
      g_0280afd8 = 0;
      g_0280afe0 = &g_02725ab4;
      g_0280afe8 = FUN_00658f80;
      g_0280aff0 = 0x681;
      g_0280aff8 = 0;
      ram_000000000280b000 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b010 = "handleMainMenuChanged";
      g_0280b018 = &g_026e0aa0;
      g_0280b020 = 0;
      g_0280b028 = &g_02725ab4;
      g_0280b030 = FUN_00658f80;
      g_0280b038 = 0x661;
      g_0280b040 = 0;
      ram_000000000280b048 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b058 = "handleMainResponderChanged";
      g_0280b060 = &g_026e0aa0;
      g_0280b068 = 0;
      g_0280b070 = &g_02725ab4;
      g_0280b078 = FUN_00658f80;
      g_0280b080 = 0x669;
      g_0280b088 = 0;
      ram_000000000280b090 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b0a0 = "handleTimeGridSetterModified";
      g_0280b0a8 = &g_026e0aa0;
      g_0280b0b0 = 0;
      g_0280b0b8 = &g_02725ab4;
      g_0280b0c0 = FUN_00658f80;
      g_0280b0c8 = 0x671;
      g_0280b0d0 = 0;
      ram_000000000280b0d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b0e8 = "handleEditingDetectionChanged";
      g_0280b0f0 = &g_026e0aa0;
      g_0280b0f8 = 0;
      g_0280b100 = &g_02725ab4;
      g_0280b108 = FUN_00658f80;
      g_0280b110 = 0x679;
      g_0280b118 = 0;
      ram_000000000280b120 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b130 = "handleInspectorSideButton";
      g_0280b138 = &g_026e0aa0;
      g_0280b140 = 0;
      g_0280b148 = &g_02725ab0;
      g_0280b150 = FUN_00658ef0;
      g_0280b158 = FUN_0061d5f0;
      g_0280b160 = 0;
      ram_000000000280b168 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b178 = "handleInspectorDownButton";
      g_0280b180 = &g_026e0aa0;
      g_0280b188 = 0;
      g_0280b190 = &g_02725ab0;
      g_0280b198 = FUN_00658ef0;
      g_0280b1a0 = FUN_0061d740;
      g_0280b1a8 = 0;
      ram_000000000280b1b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b1c0 = "handleInspectorUpButton";
      g_0280b1c8 = &g_026e0aa0;
      g_0280b1d0 = 0;
      g_0280b1d8 = &g_02725ab0;
      g_0280b1e0 = FUN_00658ef0;
      g_0280b1e8 = FUN_0061d890;
      g_0280b1f0 = 0;
      ram_000000000280b1f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b208 = "handleSetDefaultAlgorithm";
      g_0280b210 = &g_026e0aa0;
      g_0280b218 = 0;
      g_0280b220 = &g_02725ab0;
      g_0280b228 = FUN_00658ef0;
      g_0280b230 = FUN_0061d9e0;
      g_0280b238 = 0;
      ram_000000000280b240 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b250 = "handleOpenHelpCenter";
      g_0280b258 = &g_026e0aa0;
      g_0280b260 = 0;
      g_0280b268 = &g_02725ab0;
      g_0280b270 = FUN_00658ef0;
      g_0280b278 = 0x691;
      g_0280b280 = 0;
      ram_000000000280b288 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b298 = "handleOpenLicenseOptions";
      g_0280b2a0 = &g_026e0aa0;
      g_0280b2a8 = 0;
      g_0280b2b0 = &g_02725ab0;
      g_0280b2b8 = FUN_00658ef0;
      g_0280b2c0 = 0x699;
      g_0280b2c8 = 0;
      ram_000000000280b2d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b2e0 = "handleOpenSupport";
      g_0280b2e8 = &g_026e0aa0;
      g_0280b2f0 = 0;
      g_0280b2f8 = &g_02725ab0;
      g_0280b300 = FUN_00658ef0;
      g_0280b308 = 0x6a1;
      g_0280b310 = 0;
      ram_000000000280b318 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b328 = "handleOpenUpdateCheck";
      g_0280b330 = &g_026e0aa0;
      g_0280b338 = 0;
      g_0280b340 = &g_02725ab0;
      g_0280b348 = FUN_00658ef0;
      g_0280b350 = 0x6a9;
      g_0280b358 = 0;
      ram_000000000280b360 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b370 = "handleToggleSnapToGrid";
      g_0280b378 = &g_026e0aa0;
      g_0280b380 = 0;
      g_0280b388 = &g_02725ab0;
      g_0280b390 = FUN_00658ef0;
      g_0280b398 = FUN_0061e270;
      g_0280b3a0 = 0;
      ram_000000000280b3a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b3b8 = "handleSelectTimeGrid";
      g_0280b3c0 = &g_026e0aa0;
      g_0280b3c8 = 0;
      g_0280b3d0 = &g_02725ab0;
      g_0280b3d8 = FUN_00658ef0;
      g_0280b3e0 = FUN_0061e790;
      g_0280b3e8 = 0;
      ram_000000000280b3f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b400 = "handleAraApproveFileTempo";
      g_0280b408 = &g_026e0aa0;
      g_0280b410 = 0;
      g_0280b418 = &g_02725ab0;
      g_0280b420 = FUN_00658ef0;
      g_0280b428 = FUN_0061ebd0;
      g_0280b430 = 0;
      ram_000000000280b438 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b448 = "handleAraAssignFileTempo";
      g_0280b450 = &g_026e0aa0;
      g_0280b458 = 0;
      g_0280b460 = &g_02725ab0;
      g_0280b468 = FUN_00658ef0;
      g_0280b470 = FUN_0061fbe0;
      g_0280b478 = 0;
      ram_000000000280b480 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b490 = "handleAraApplySongTempoToFiles";
      g_0280b498 = &g_026e0aa0;
      g_0280b4a0 = 0;
      g_0280b4a8 = &g_02725ab0;
      g_0280b4b0 = FUN_00658ef0;
      g_0280b4b8 = FUN_00620200;
      g_0280b4c0 = 0;
      ram_000000000280b4c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b4d8 = "handleAraMultiplyTempoBy";
      g_0280b4e0 = &g_026e0aa0;
      g_0280b4e8 = 0;
      g_0280b4f0 = &g_02725ab0;
      g_0280b4f8 = FUN_00658ef0;
      g_0280b500 = FUN_00621330;
      g_0280b508 = 0;
      ram_000000000280b510 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b520 = "handleAddTrackAfter";
      g_0280b528 = &g_026e0aa0;
      g_0280b530 = 0;
      g_0280b538 = &g_02725ab0;
      g_0280b540 = FUN_00658ef0;
      g_0280b548 = FUN_006221a0;
      g_0280b550 = 0;
      ram_000000000280b558 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b568 = "handleMergeTracks";
      g_0280b570 = &g_026e0aa0;
      g_0280b578 = 0;
      g_0280b580 = &g_02725ab0;
      g_0280b588 = FUN_00658ef0;
      g_0280b590 = FUN_00622800;
      g_0280b598 = 0;
      ram_000000000280b5a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b5b0 = "handleDuplicateTracks";
      g_0280b5b8 = &g_026e0aa0;
      g_0280b5c0 = 0;
      g_0280b5c8 = &g_02725ab0;
      g_0280b5d0 = FUN_00658ef0;
      g_0280b5d8 = FUN_00623170;
      g_0280b5e0 = 0;
      ram_000000000280b5e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b5f8 = "handleDeleteTracks";
      g_0280b600 = &g_026e0aa0;
      g_0280b608 = 0;
      g_0280b610 = &g_02725ab0;
      g_0280b618 = FUN_00658ef0;
      g_0280b620 = FUN_006238c0;
      g_0280b628 = 0;
      ram_000000000280b630 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b640 = "handleToggleShowChordSequence";
      g_0280b648 = &g_026e0aa0;
      g_0280b650 = 0;
      g_0280b658 = &g_02725ab0;
      g_0280b660 = FUN_00658ef0;
      g_0280b668 = FUN_00624150;
      g_0280b670 = 0;
      ram_000000000280b678 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b688 = "handleToggleShowKeySequence";
      g_0280b690 = &g_026e0aa0;
      g_0280b698 = 0;
      g_0280b6a0 = &g_02725ab0;
      g_0280b6a8 = FUN_00658ef0;
      g_0280b6b0 = FUN_00624670;
      g_0280b6b8 = 0;
      ram_000000000280b6c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b6d0 = "handleRepeatLastMenuAction";
      g_0280b6d8 = &g_026e0aa0;
      g_0280b6e0 = 0;
      g_0280b6e8 = &g_02725ab0;
      g_0280b6f0 = FUN_00658ef0;
      g_0280b6f8 = FUN_00624b90;
      g_0280b700 = 0;
      ram_000000000280b708 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b718 = "handleSetCycleToSelection";
      g_0280b720 = &g_026e0aa0;
      g_0280b728 = 0;
      g_0280b730 = &g_02725ab0;
      g_0280b738 = FUN_00658ef0;
      g_0280b740 = 0x6c1;
      g_0280b748 = 0;
      ram_000000000280b750 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b760 = "handleShowGlobalValues";
      g_0280b768 = &g_026e0aa0;
      g_0280b770 = 0;
      g_0280b778 = &g_02725ab0;
      g_0280b780 = FUN_00658ef0;
      g_0280b788 = FUN_006258a0;
      g_0280b790 = 0;
      ram_000000000280b798 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b7a8 = "handleShowDebugBitmap";
      g_0280b7b0 = &g_026e0aa0;
      g_0280b7b8 = 0;
      g_0280b7c0 = &g_02725ab0;
      g_0280b7c8 = FUN_00658ef0;
      g_0280b7d0 = FUN_00625950;
      g_0280b7d8 = 0;
      ram_000000000280b7e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b7f0 = "handleGroupTracks";
      g_0280b7f8 = &g_026e0aa0;
      g_0280b800 = 0;
      g_0280b808 = &g_02725ab0;
      g_0280b810 = FUN_00658ef0;
      g_0280b818 = FUN_00625a00;
      g_0280b820 = 0;
      ram_000000000280b828 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b838 = "handleUngroupTracks";
      g_0280b840 = &g_026e0aa0;
      g_0280b848 = 0;
      g_0280b850 = &g_02725ab0;
      g_0280b858 = FUN_00658ef0;
      g_0280b860 = FUN_00626ed0;
      g_0280b868 = 0;
      ram_000000000280b870 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280b880 = "handleWindowToPDF";
      g_0280b888 = &g_026e0aa0;
      g_0280b890 = 0;
      g_0280b898 = &g_02725ab0;
      g_0280b8a0 = FUN_00658ef0;
      g_0280b8a8 = 0x6c9;
      g_0280b8b0 = 0;
      ram_000000000280b8b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

