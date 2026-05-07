// Function: FUN_00b25f20
// Address: 00b25f20
// Size: 916 bytes
// Class: MUElementAnalyzer
// === MUElementAnalyzer properties ===
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more


void FUN_00b25f20(void)

{
  int iVar1;
  int64_t *this_ptr;
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x568))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  iVar1 = _AudioDeviceCreateIOProcID(this_ptr + 0x1c);
  if (iVar1 == 0) {
    if ((((int)this_ptr[0x1a] == *(int *)((int64_t)this_ptr + 0xd4)) ||
        ((int)this_ptr[0x14] < 1)) ||
       (iVar1 = _AudioDeviceCreateIOProcID(this_ptr + 0x1b), iVar1 == 0)) {
      iVar1 = _AudioDeviceStart();
      if (iVar1 == 0) {
        if ((((int)this_ptr[0x1a] == *(int *)((int64_t)this_ptr + 0xd4)) ||
            ((int)this_ptr[0x14] < 1)) || (iVar1 = _AudioDeviceStart(), iVar1 == 0)) {
          *(void*)((int64_t)this_ptr + 0x74) = 1;
          return;
        }
        _AudioDeviceDestroyIOProcID();
        _AudioDeviceDestroyIOProcID();
        _AudioDeviceStop();
        FUN_00d50b00();
        FUN_00d50b00();
        (**(code **)(*this_ptr + 0x580))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      else {
        _AudioDeviceDestroyIOProcID();
        if (((int)this_ptr[0x1a] != *(int *)((int64_t)this_ptr + 0xd4)) &&
           (0 < (int)this_ptr[0x14])) {
          _AudioDeviceDestroyIOProcID();
        }
        FUN_00d50b00();
        FUN_00d50b00();
        (**(code **)(*this_ptr + 0x580))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
    }
    else {
      _AudioDeviceDestroyIOProcID();
      FUN_00d50b00();
      FUN_00d50b00();
      (**(code **)(*this_ptr + 0x580))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b00();
    (**(code **)(*this_ptr + 0x580))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}

